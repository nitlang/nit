#include "nitc__parser_prod.sep.0.h"
/* method parser_prod$AAbortExpr$init_aabortexpr for (self: AAbortExpr, nullable TKwabort) */
void nitc__parser_prod___AAbortExpr___init_aabortexpr(val* self, val* p0) {
val* var_n_kwabort /* var n_kwabort: nullable TKwabort */;
{
{ /* Inline kernel$Object$init (self) on <self:AAbortExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwabort = p0;
if (unlikely(var_n_kwabort == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2829);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAbortExpr___n_kwabort].val = var_n_kwabort; /* _n_kwabort on <self:AAbortExpr> */
if (var_n_kwabort == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2830);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwabort,self) on <var_n_kwabort:nullable TKwabort> */
if (unlikely(var_n_kwabort == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwabort->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwabort:nullable TKwabort> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAbortExpr$replace_child for (self: AAbortExpr, ANode, nullable ANode) */
void nitc__parser_prod___AAbortExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2835);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwabort> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwabort> */
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
cltype = type_nitc__TKwabort.color;
idtype = type_nitc__TKwabort.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2836);
fatal_exit(1);
}
{
nitc__parser_prod___AAbortExpr___n_kwabort_61d(self, var_new_child); /* Direct call parser_prod$AAbortExpr$n_kwabort= on <self:AAbortExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAbortExpr$n_kwabort= for (self: AAbortExpr, TKwabort) */
void nitc__parser_prod___AAbortExpr___n_kwabort_61d(val* self, val* p0) {
val* var_node /* var node: TKwabort */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAbortExpr___n_kwabort].val = var_node; /* _n_kwabort on <self:AAbortExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwabort> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwabort> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAbortExpr$visit_all for (self: AAbortExpr, Visitor) */
void nitc__parser_prod___AAbortExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabort */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAbortExpr___n_kwabort].val; /* _n_kwabort on <self:AAbortExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabort");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2850);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AContinueExpr$init_acontinueexpr for (self: AContinueExpr, nullable TKwcontinue, nullable ALabel) */
void nitc__parser_prod___AContinueExpr___init_acontinueexpr(val* self, val* p0, val* p1) {
val* var_n_kwcontinue /* var n_kwcontinue: nullable TKwcontinue */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AContinueExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwcontinue = p0;
var_n_label = p1;
self->attrs[COLOR_nitc__parser_nodes__AContinueExpr___n_kwcontinue].val = var_n_kwcontinue; /* _n_kwcontinue on <self:AContinueExpr> */
if (var_n_kwcontinue == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwcontinue,((val*)NULL)) on <var_n_kwcontinue:nullable TKwcontinue> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_kwcontinue->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwcontinue, var_other); /* == on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwcontinue,self) on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)> */
var_n_kwcontinue->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwcontinue:nullable TKwcontinue(TKwcontinue)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:AContinueExpr> */
if (var_n_label == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_label, var_other); /* == on <var_n_label:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL12:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AContinueExpr$replace_child for (self: AContinueExpr, ANode, nullable ANode) */
void nitc__parser_prod___AContinueExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwcontinue> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwcontinue(TKwcontinue)> */
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
cltype = type_nullable__nitc__TKwcontinue.color;
idtype = type_nullable__nitc__TKwcontinue.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2868);
fatal_exit(1);
}
{
nitc__parser_prod___AContinueExpr___n_kwcontinue_61d(self, var_new_child); /* Direct call parser_prod$AContinueExpr$n_kwcontinue= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable ALabel(ALabel)> */
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
cltype16 = type_nullable__nitc__ALabel.color;
idtype17 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2872);
fatal_exit(1);
}
{
nitc__parser_prod___AContinueExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod$AContinueExpr$n_label= on <self:AContinueExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AContinueExpr$n_kwcontinue= for (self: AContinueExpr, nullable TKwcontinue) */
void nitc__parser_prod___AContinueExpr___n_kwcontinue_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwcontinue */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AContinueExpr___n_kwcontinue].val = var_node; /* _n_kwcontinue on <self:AContinueExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwcontinue> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwcontinue(TKwcontinue)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwcontinue(TKwcontinue)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwcontinue(TKwcontinue)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AContinueExpr$n_label= for (self: AContinueExpr, nullable ALabel) */
void nitc__parser_prod___AContinueExpr___nitc__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:AContinueExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AContinueExpr$visit_all for (self: AContinueExpr, Visitor) */
void nitc__parser_prod___AContinueExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwcontinue */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AContinueExpr___n_kwcontinue].val; /* _n_kwcontinue on <self:AContinueExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ADoExpr$init_adoexpr for (self: ADoExpr, nullable TKwdo, nullable AExpr, nullable TKwcatch, nullable AExpr, nullable ALabel) */
void nitc__parser_prod___ADoExpr___init_adoexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_kwcatch /* var n_kwcatch: nullable TKwcatch */;
val* var_n_catch /* var n_catch: nullable AExpr */;
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
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ADoExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwdo = p0;
var_n_block = p1;
var_n_kwcatch = p2;
var_n_catch = p3;
var_n_label = p4;
if (unlikely(var_n_kwdo == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2904);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:ADoExpr> */
if (var_n_kwdo == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2905);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwdo->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val = var_n_block; /* _n_block on <self:ADoExpr> */
if (var_n_block == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwcatch].val = var_n_kwcatch; /* _n_kwcatch on <self:ADoExpr> */
if (var_n_kwcatch == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwcatch,((val*)NULL)) on <var_n_kwcatch:nullable TKwcatch> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_n_kwcatch->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwcatch, var_other); /* == on <var_n_kwcatch:nullable TKwcatch(TKwcatch)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwcatch,self) on <var_n_kwcatch:nullable TKwcatch(TKwcatch)> */
var_n_kwcatch->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwcatch:nullable TKwcatch(TKwcatch)> */
RET_LABEL13:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val = var_n_catch; /* _n_catch on <self:ADoExpr> */
if (var_n_catch == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_catch,((val*)NULL)) on <var_n_catch:nullable AExpr> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_n_catch->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_catch, var_other); /* == on <var_n_catch:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_catch,self) on <var_n_catch:nullable AExpr(AExpr)> */
var_n_catch->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_catch:nullable AExpr(AExpr)> */
RET_LABEL19:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ADoExpr> */
if (var_n_label == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_label, var_other); /* == on <var_n_label:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL25:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ADoExpr$replace_child for (self: ADoExpr, ANode, nullable ANode) */
void nitc__parser_prod___ADoExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var18 /* : nullable TKwcatch */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
val* var29 /* : nullable AExpr */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : nullable ALabel */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2918);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwdo> */
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
cltype = type_nitc__TKwdo.color;
idtype = type_nitc__TKwdo.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2919);
fatal_exit(1);
}
{
nitc__parser_prod___ADoExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod$ADoExpr$n_kwdo= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AExpr(AExpr)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2923);
fatal_exit(1);
}
{
nitc__parser_prod___ADoExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod$ADoExpr$n_block= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwcatch].val; /* _n_kwcatch on <self:ADoExpr> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:nullable TKwcatch> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:nullable TKwcatch(TKwcatch)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwcatch */
cltype26 = type_nullable__nitc__TKwcatch.color;
idtype27 = type_nullable__nitc__TKwcatch.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwcatch", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2927);
fatal_exit(1);
}
{
nitc__parser_prod___ADoExpr___n_kwcatch_61d(self, var_new_child); /* Direct call parser_prod$ADoExpr$n_kwcatch= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var29 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
if (var29 == NULL) {
var30 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var29,var_old_child) on <var29:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var29,var_other) on <var29:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype37 = type_nullable__nitc__AExpr.color;
idtype38 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2931);
fatal_exit(1);
}
{
nitc__parser_prod___ADoExpr___n_catch_61d(self, var_new_child); /* Direct call parser_prod$ADoExpr$n_catch= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
if (var40 == NULL) {
var41 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:nullable ALabel(ALabel)> */
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
/* <var_new_child:nullable ANode> isa nullable ALabel */
cltype48 = type_nullable__nitc__ALabel.color;
idtype49 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ALabel", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2935);
fatal_exit(1);
}
{
nitc__parser_prod___ADoExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod$ADoExpr$n_label= on <self:ADoExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ADoExpr$n_kwdo= for (self: ADoExpr, TKwdo) */
void nitc__parser_prod___ADoExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:ADoExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ADoExpr$n_block= for (self: ADoExpr, nullable AExpr) */
void nitc__parser_prod___ADoExpr___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val = var_node; /* _n_block on <self:ADoExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ADoExpr$n_kwcatch= for (self: ADoExpr, nullable TKwcatch) */
void nitc__parser_prod___ADoExpr___n_kwcatch_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwcatch */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwcatch].val = var_node; /* _n_kwcatch on <self:ADoExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwcatch> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwcatch(TKwcatch)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwcatch(TKwcatch)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwcatch(TKwcatch)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ADoExpr$n_catch= for (self: ADoExpr, nullable AExpr) */
void nitc__parser_prod___ADoExpr___n_catch_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val = var_node; /* _n_catch on <self:ADoExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ADoExpr$n_label= for (self: ADoExpr, nullable ALabel) */
void nitc__parser_prod___ADoExpr___nitc__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ADoExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ADoExpr$visit_all for (self: ADoExpr, Visitor) */
void nitc__parser_prod___ADoExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwdo */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable TKwcatch */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwdo].val; /* _n_kwdo on <self:ADoExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2969);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_kwcatch].val; /* _n_kwcatch on <self:ADoExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$init_aifexpr for (self: AIfExpr, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void nitc__parser_prod___AIfExpr___init_aifexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwthen /* var n_kwthen: nullable TKwthen */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_else /* var n_else: nullable AExpr */;
short int var /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AIfExpr> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2986);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfExpr> */
if (var_n_kwif == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2987);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwif->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2988);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2989);
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
if (unlikely(var_n_kwthen == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2990);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwthen].val = var_n_kwthen; /* _n_kwthen on <self:AIfExpr> */
if (var_n_kwthen == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2991);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwthen,self) on <var_n_kwthen:nullable TKwthen> */
if (unlikely(var_n_kwthen == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwthen->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwthen:nullable TKwthen> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val = var_n_then; /* _n_then on <self:AIfExpr> */
if (var_n_then == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_then,((val*)NULL)) on <var_n_then:nullable AExpr> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_then->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_then, var_other); /* == on <var_n_then:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_then,self) on <var_n_then:nullable AExpr(AExpr)> */
var_n_then->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr(AExpr)> */
RET_LABEL9:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AIfExpr> */
if (var_n_kwelse == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwelse,((val*)NULL)) on <var_n_kwelse:nullable TKwelse> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_n_kwelse->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwelse, var_other); /* == on <var_n_kwelse:nullable TKwelse(TKwelse)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse(TKwelse)> */
var_n_kwelse->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse(TKwelse)> */
RET_LABEL15:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val = var_n_else; /* _n_else on <self:AIfExpr> */
if (var_n_else == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_else,((val*)NULL)) on <var_n_else:nullable AExpr> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_n_else->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_else, var_other); /* == on <var_n_else:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_else,self) on <var_n_else:nullable AExpr(AExpr)> */
var_n_else->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr(AExpr)> */
RET_LABEL21:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$replace_child for (self: AIfExpr, ANode, nullable ANode) */
void nitc__parser_prod___AIfExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var27 /* : nullable AExpr */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
val* var38 /* : nullable TKwelse */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
val* var49 /* : nullable AExpr */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwif].val; /* _n_kwif on <self:AIfExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3002);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwif> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwif> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3003);
fatal_exit(1);
}
{
nitc__parser_prod___AIfExpr___n_kwif_61d(self, var_new_child); /* Direct call parser_prod$AIfExpr$n_kwif= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3006);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3007);
fatal_exit(1);
}
{
nitc__parser_prod___AIfExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AIfExpr$n_expr= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwthen].val; /* _n_kwthen on <self:AIfExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3010);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TKwthen> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TKwthen> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3011);
fatal_exit(1);
}
{
nitc__parser_prod___AIfExpr___n_kwthen_61d(self, var_new_child); /* Direct call parser_prod$AIfExpr$n_kwthen= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:nullable AExpr(AExpr)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3015);
fatal_exit(1);
}
{
nitc__parser_prod___AIfExpr___n_then_61d(self, var_new_child); /* Direct call parser_prod$AIfExpr$n_then= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwelse].val; /* _n_kwelse on <self:AIfExpr> */
if (var38 == NULL) {
var39 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var38,var_old_child) on <var38:nullable TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var38,var_other) on <var38:nullable TKwelse(TKwelse)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwelse */
cltype46 = type_nullable__nitc__TKwelse.color;
idtype47 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwelse", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3019);
fatal_exit(1);
}
{
nitc__parser_prod___AIfExpr___n_kwelse_61d(self, var_new_child); /* Direct call parser_prod$AIfExpr$n_kwelse= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
var49 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
if (var49 == NULL) {
var50 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var49,var_old_child) on <var49:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var49,var_other) on <var49:nullable AExpr(AExpr)> */
var55 = var49 == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype57 = type_nullable__nitc__AExpr.color;
idtype58 = type_nullable__nitc__AExpr.id;
if(var_new_child == NULL) {
var56 = 1;
} else {
if(cltype57 >= var_new_child->type->table_size) {
var56 = 0;
} else {
var56 = var_new_child->type->type_table[cltype57] == idtype58;
}
}
if (unlikely(!var56)) {
var_class_name59 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3023);
fatal_exit(1);
}
{
nitc__parser_prod___AIfExpr___n_else_61d(self, var_new_child); /* Direct call parser_prod$AIfExpr$n_else= on <self:AIfExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$n_kwif= for (self: AIfExpr, TKwif) */
void nitc__parser_prod___AIfExpr___n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$n_expr= for (self: AIfExpr, AExpr) */
void nitc__parser_prod___AIfExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val = var_node; /* _n_expr on <self:AIfExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$n_kwthen= for (self: AIfExpr, TKwthen) */
void nitc__parser_prod___AIfExpr___n_kwthen_61d(val* self, val* p0) {
val* var_node /* var node: TKwthen */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwthen].val = var_node; /* _n_kwthen on <self:AIfExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwthen> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwthen> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$n_then= for (self: AIfExpr, nullable AExpr) */
void nitc__parser_prod___AIfExpr___n_then_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val = var_node; /* _n_then on <self:AIfExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$n_kwelse= for (self: AIfExpr, nullable TKwelse) */
void nitc__parser_prod___AIfExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwelse */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AIfExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwelse> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwelse(TKwelse)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwelse(TKwelse)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$n_else= for (self: AIfExpr, nullable AExpr) */
void nitc__parser_prod___AIfExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val = var_node; /* _n_else on <self:AIfExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIfExpr$visit_all for (self: AIfExpr, Visitor) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3062);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3063);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwthen].val; /* _n_kwthen on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3064);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_kwelse].val; /* _n_kwelse on <self:AIfExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$init_aifexprexpr for (self: AIfexprExpr, nullable TKwif, nullable AExpr, nullable TKwthen, nullable AExpr, nullable TKwelse, nullable AExpr) */
void nitc__parser_prod___AIfexprExpr___init_aifexprexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwif /* var n_kwif: nullable TKwif */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_kwthen /* var n_kwthen: nullable TKwthen */;
val* var_n_then /* var n_then: nullable AExpr */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_else /* var n_else: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AIfexprExpr> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3080);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwif].val = var_n_kwif; /* _n_kwif on <self:AIfexprExpr> */
if (var_n_kwif == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3081);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwif,self) on <var_n_kwif:nullable TKwif> */
if (unlikely(var_n_kwif == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwif->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwif:nullable TKwif> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3082);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AIfexprExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3083);
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
if (unlikely(var_n_kwthen == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3084);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwthen].val = var_n_kwthen; /* _n_kwthen on <self:AIfexprExpr> */
if (var_n_kwthen == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3085);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwthen,self) on <var_n_kwthen:nullable TKwthen> */
if (unlikely(var_n_kwthen == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwthen->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwthen:nullable TKwthen> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_then == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3086);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val = var_n_then; /* _n_then on <self:AIfexprExpr> */
if (var_n_then == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3087);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_then,self) on <var_n_then:nullable AExpr> */
if (unlikely(var_n_then == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_then->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_then:nullable AExpr> */
RET_LABEL5:(void)0;
}
}
if (unlikely(var_n_kwelse == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3088);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AIfexprExpr> */
if (var_n_kwelse == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3089);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse> */
if (unlikely(var_n_kwelse == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwelse->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse> */
RET_LABEL6:(void)0;
}
}
if (unlikely(var_n_else == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3090);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val = var_n_else; /* _n_else on <self:AIfexprExpr> */
if (var_n_else == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3091);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_else,self) on <var_n_else:nullable AExpr> */
if (unlikely(var_n_else == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_else->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$replace_child for (self: AIfexprExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3096);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwif> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwif> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3097);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_kwif_61d(self, var_new_child); /* Direct call parser_prod$AIfexprExpr$n_kwif= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3100);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3101);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AIfexprExpr$n_expr= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3104);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TKwthen> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TKwthen> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3105);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_kwthen_61d(self, var_new_child); /* Direct call parser_prod$AIfexprExpr$n_kwthen= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3108);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3109);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_then_61d(self, var_new_child); /* Direct call parser_prod$AIfexprExpr$n_then= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3112);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var37,var_old_child) on <var37:TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var37,var_other) on <var37:TKwelse> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3113);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_kwelse_61d(self, var_new_child); /* Direct call parser_prod$AIfexprExpr$n_kwelse= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
var47 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3116);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var47,var_old_child) on <var47:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var47,var_other) on <var47:AExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3117);
fatal_exit(1);
}
{
nitc__parser_prod___AIfexprExpr___n_else_61d(self, var_new_child); /* Direct call parser_prod$AIfexprExpr$n_else= on <self:AIfexprExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$n_kwif= for (self: AIfexprExpr, TKwif) */
void nitc__parser_prod___AIfexprExpr___n_kwif_61d(val* self, val* p0) {
val* var_node /* var node: TKwif */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwif].val = var_node; /* _n_kwif on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwif> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwif> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$n_expr= for (self: AIfexprExpr, AExpr) */
void nitc__parser_prod___AIfexprExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val = var_node; /* _n_expr on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$n_kwthen= for (self: AIfexprExpr, TKwthen) */
void nitc__parser_prod___AIfexprExpr___n_kwthen_61d(val* self, val* p0) {
val* var_node /* var node: TKwthen */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwthen].val = var_node; /* _n_kwthen on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwthen> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwthen> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$n_then= for (self: AIfexprExpr, AExpr) */
void nitc__parser_prod___AIfexprExpr___n_then_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val = var_node; /* _n_then on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$n_kwelse= for (self: AIfexprExpr, TKwelse) */
void nitc__parser_prod___AIfexprExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwelse> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwelse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$n_else= for (self: AIfexprExpr, AExpr) */
void nitc__parser_prod___AIfexprExpr___n_else_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val = var_node; /* _n_else on <self:AIfexprExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIfexprExpr$visit_all for (self: AIfexprExpr, Visitor) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwif");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3156);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3157);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwthen].val; /* _n_kwthen on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwthen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3158);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3159);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_kwelse].val; /* _n_kwelse on <self:AIfexprExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3160);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3161);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AWhileExpr$init_awhileexpr for (self: AWhileExpr, nullable TKwwhile, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
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
{ /* Inline kernel$Object$init (self) on <self:AWhileExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwwhile = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwhile == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3173);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwwhile].val = var_n_kwwhile; /* _n_kwwhile on <self:AWhileExpr> */
if (var_n_kwwhile == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3174);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwwhile,self) on <var_n_kwwhile:nullable TKwwhile> */
if (unlikely(var_n_kwwhile == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwwhile->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwwhile:nullable TKwwhile> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3175);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWhileExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3176);
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
if (unlikely(var_n_kwdo == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3177);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWhileExpr> */
if (var_n_kwdo == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3178);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
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
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
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
{ /* Inline kernel$Object$!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AWhileExpr$replace_child for (self: AWhileExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3187);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwwhile> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwwhile> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3188);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___n_kwwhile_61d(self, var_new_child); /* Direct call parser_prod$AWhileExpr$n_kwwhile= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3191);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3192);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AWhileExpr$n_expr= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3195);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TKwdo> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3196);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod$AWhileExpr$n_kwdo= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:nullable AExpr(AExpr)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3200);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod$AWhileExpr$n_block= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
if (var38 == NULL) {
var39 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var38,var_old_child) on <var38:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var38,var_other) on <var38:nullable ALabel(ALabel)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3204);
fatal_exit(1);
}
{
nitc__parser_prod___AWhileExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod$AWhileExpr$n_label= on <self:AWhileExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AWhileExpr$n_kwwhile= for (self: AWhileExpr, TKwwhile) */
void nitc__parser_prod___AWhileExpr___n_kwwhile_61d(val* self, val* p0) {
val* var_node /* var node: TKwwhile */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwwhile].val = var_node; /* _n_kwwhile on <self:AWhileExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwwhile> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwwhile> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AWhileExpr$n_expr= for (self: AWhileExpr, AExpr) */
void nitc__parser_prod___AWhileExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val = var_node; /* _n_expr on <self:AWhileExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AWhileExpr$n_kwdo= for (self: AWhileExpr, TKwdo) */
void nitc__parser_prod___AWhileExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWhileExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AWhileExpr$n_block= for (self: AWhileExpr, nullable AExpr) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AWhileExpr$n_label= for (self: AWhileExpr, nullable ALabel) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AWhileExpr$visit_all for (self: AWhileExpr, Visitor) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwhile");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3238);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3239);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_kwdo].val; /* _n_kwdo on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3240);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALoopExpr$init_aloopexpr for (self: ALoopExpr, nullable TKwloop, nullable AExpr, nullable ALabel) */
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
{ /* Inline kernel$Object$init (self) on <self:ALoopExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwloop = p0;
var_n_block = p1;
var_n_label = p2;
if (unlikely(var_n_kwloop == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3252);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop].val = var_n_kwloop; /* _n_kwloop on <self:ALoopExpr> */
if (var_n_kwloop == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3253);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwloop,self) on <var_n_kwloop:nullable TKwloop> */
if (unlikely(var_n_kwloop == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
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
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
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
{ /* Inline kernel$Object$!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL13:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALoopExpr$replace_child for (self: ALoopExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3262);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwloop> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwloop> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3263);
fatal_exit(1);
}
{
nitc__parser_prod___ALoopExpr___n_kwloop_61d(self, var_new_child); /* Direct call parser_prod$ALoopExpr$n_kwloop= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AExpr(AExpr)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3267);
fatal_exit(1);
}
{
nitc__parser_prod___ALoopExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod$ALoopExpr$n_block= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:nullable ALabel(ALabel)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3271);
fatal_exit(1);
}
{
nitc__parser_prod___ALoopExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod$ALoopExpr$n_label= on <self:ALoopExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALoopExpr$n_kwloop= for (self: ALoopExpr, TKwloop) */
void nitc__parser_prod___ALoopExpr___n_kwloop_61d(val* self, val* p0) {
val* var_node /* var node: TKwloop */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop].val = var_node; /* _n_kwloop on <self:ALoopExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwloop> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwloop> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALoopExpr$n_block= for (self: ALoopExpr, nullable AExpr) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALoopExpr$n_label= for (self: ALoopExpr, nullable ALabel) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALoopExpr$visit_all for (self: ALoopExpr, Visitor) */
void nitc__parser_prod___ALoopExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwloop */;
val* var1 /* : nullable AExpr */;
val* var2 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_kwloop].val; /* _n_kwloop on <self:ALoopExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwloop");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3295);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AForExpr$init_aforexpr for (self: AForExpr, nullable TKwfor, Collection[Object], nullable TKwdo, nullable AExpr, nullable ALabel) */
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
{ /* Inline kernel$Object$init (self) on <self:AForExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwfor = p0;
var_n_groups = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwfor == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3309);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwfor].val = var_n_kwfor; /* _n_kwfor on <self:AForExpr> */
if (var_n_kwfor == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3310);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwfor,self) on <var_n_kwfor:nullable TKwfor> */
if (unlikely(var_n_kwfor == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwfor->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwfor:nullable TKwfor> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_groups); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AForGroup]>*/
}
if (unlikely(var_n_kwdo == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3312);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AForExpr> */
if (var_n_kwdo == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3313);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
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
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
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
{ /* Inline kernel$Object$!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL17:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AForExpr$replace_child for (self: AForExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3322);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwfor> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwfor> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3323);
fatal_exit(1);
}
{
nitc__parser_prod___AForExpr___n_kwfor_61d(self, var_new_child); /* Direct call parser_prod$AForExpr$n_kwfor= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3327);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var11,var_old_child) on <var11:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var11,var_other) on <var11:TKwdo> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3328);
fatal_exit(1);
}
{
nitc__parser_prod___AForExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod$AForExpr$n_kwdo= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
if (var21 == NULL) {
var22 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var21,var_old_child) on <var21:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var21,var_other) on <var21:nullable AExpr(AExpr)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3332);
fatal_exit(1);
}
{
nitc__parser_prod___AForExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod$AForExpr$n_block= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
var32 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
if (var32 == NULL) {
var33 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var32,var_old_child) on <var32:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var32,var_other) on <var32:nullable ALabel(ALabel)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3336);
fatal_exit(1);
}
{
nitc__parser_prod___AForExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod$AForExpr$n_label= on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AForExpr$n_kwfor= for (self: AForExpr, TKwfor) */
void nitc__parser_prod___AForExpr___n_kwfor_61d(val* self, val* p0) {
val* var_node /* var node: TKwfor */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwfor].val = var_node; /* _n_kwfor on <self:AForExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwfor> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwfor> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AForExpr$n_kwdo= for (self: AForExpr, TKwdo) */
void nitc__parser_prod___AForExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AForExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AForExpr$n_block= for (self: AForExpr, nullable AExpr) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AForExpr$n_label= for (self: AForExpr, nullable ALabel) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AForExpr$visit_all for (self: AForExpr, Visitor) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwfor");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3365);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var1:ANodes[AForGroup]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_kwdo].val; /* _n_kwdo on <self:AForExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3367);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AWithExpr$init_awithexpr for (self: AWithExpr, nullable TKwwith, nullable AExpr, nullable TKwdo, nullable AExpr, nullable ALabel) */
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
{ /* Inline kernel$Object$init (self) on <self:AWithExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwwith = p0;
var_n_expr = p1;
var_n_kwdo = p2;
var_n_block = p3;
var_n_label = p4;
if (unlikely(var_n_kwwith == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3381);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwwith].val = var_n_kwwith; /* _n_kwwith on <self:AWithExpr> */
if (var_n_kwwith == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3382);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwwith,self) on <var_n_kwwith:nullable TKwwith> */
if (unlikely(var_n_kwwith == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwwith->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwwith:nullable TKwwith> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3383);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AWithExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3384);
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
if (unlikely(var_n_kwdo == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3385);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AWithExpr> */
if (var_n_kwdo == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3386);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo> */
if (unlikely(var_n_kwdo == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
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
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
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
{ /* Inline kernel$Object$!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AWithExpr$replace_child for (self: AWithExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwith");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3395);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwwith> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwwith> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3396);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___n_kwwith_61d(self, var_new_child); /* Direct call parser_prod$AWithExpr$n_kwwith= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3399);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3400);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AWithExpr$n_expr= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwdo].val; /* _n_kwdo on <self:AWithExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3403);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TKwdo> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3404);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod$AWithExpr$n_kwdo= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:nullable AExpr(AExpr)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3408);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___n_block_61d(self, var_new_child); /* Direct call parser_prod$AWithExpr$n_block= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
var38 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWithExpr> */
if (var38 == NULL) {
var39 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var38,var_old_child) on <var38:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var38,var_other) on <var38:nullable ALabel(ALabel)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3412);
fatal_exit(1);
}
{
nitc__parser_prod___AWithExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod$AWithExpr$n_label= on <self:AWithExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AWithExpr$n_kwwith= for (self: AWithExpr, TKwwith) */
void nitc__parser_prod___AWithExpr___n_kwwith_61d(val* self, val* p0) {
val* var_node /* var node: TKwwith */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwwith].val = var_node; /* _n_kwwith on <self:AWithExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwwith> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwwith> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AWithExpr$n_expr= for (self: AWithExpr, AExpr) */
void nitc__parser_prod___AWithExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val = var_node; /* _n_expr on <self:AWithExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AWithExpr$n_kwdo= for (self: AWithExpr, TKwdo) */
void nitc__parser_prod___AWithExpr___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: TKwdo */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwdo].val = var_node; /* _n_kwdo on <self:AWithExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwdo> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwdo> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AWithExpr$n_block= for (self: AWithExpr, nullable AExpr) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AWithExpr$n_label= for (self: AWithExpr, nullable ALabel) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ALabel> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ALabel(ALabel)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ALabel(ALabel)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AWithExpr$visit_all for (self: AWithExpr, Visitor) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwith");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3446);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3447);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_kwdo].val; /* _n_kwdo on <self:AWithExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwdo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3448);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWithExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAssertExpr$init_aassertexpr for (self: AAssertExpr, nullable TKwassert, nullable TId, nullable AExpr, nullable TKwelse, nullable AExpr) */
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
{ /* Inline kernel$Object$init (self) on <self:AAssertExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwassert = p0;
var_n_id = p1;
var_n_expr = p2;
var_n_kwelse = p3;
var_n_else = p4;
if (unlikely(var_n_kwassert == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3462);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwassert].val = var_n_kwassert; /* _n_kwassert on <self:AAssertExpr> */
if (var_n_kwassert == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3463);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwassert,self) on <var_n_kwassert:nullable TKwassert> */
if (unlikely(var_n_kwassert == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
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
{ /* Inline kernel$Object$!= (var_n_id,((val*)NULL)) on <var_n_id:nullable TId> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TId(TId)> */
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId(TId)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3466);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAssertExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3467);
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
{ /* Inline kernel$Object$!= (var_n_kwelse,((val*)NULL)) on <var_n_kwelse:nullable TKwelse> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse(TKwelse)> */
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
{ /* Inline kernel$Object$!= (var_n_else,((val*)NULL)) on <var_n_else:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_else,self) on <var_n_else:nullable AExpr(AExpr)> */
var_n_else->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_else:nullable AExpr(AExpr)> */
RET_LABEL20:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAssertExpr$replace_child for (self: AAssertExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3476);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwassert> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwassert> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3477);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_kwassert_61d(self, var_new_child); /* Direct call parser_prod$AAssertExpr$n_kwassert= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable TId(TId)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3481);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod$AAssertExpr$n_id= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3484);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:AExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3485);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AAssertExpr$n_expr= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwelse].val; /* _n_kwelse on <self:AAssertExpr> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var28,var_old_child) on <var28:nullable TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var28,var_other) on <var28:nullable TKwelse(TKwelse)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3489);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_kwelse_61d(self, var_new_child); /* Direct call parser_prod$AAssertExpr$n_kwelse= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
var39 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
if (var39 == NULL) {
var40 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var39,var_old_child) on <var39:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var39,var_other) on <var39:nullable AExpr(AExpr)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3493);
fatal_exit(1);
}
{
nitc__parser_prod___AAssertExpr___n_else_61d(self, var_new_child); /* Direct call parser_prod$AAssertExpr$n_else= on <self:AAssertExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAssertExpr$n_kwassert= for (self: AAssertExpr, TKwassert) */
void nitc__parser_prod___AAssertExpr___n_kwassert_61d(val* self, val* p0) {
val* var_node /* var node: TKwassert */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwassert].val = var_node; /* _n_kwassert on <self:AAssertExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwassert> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwassert> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAssertExpr$n_id= for (self: AAssertExpr, nullable TId) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TId> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TId(TId)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TId(TId)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAssertExpr$n_expr= for (self: AAssertExpr, AExpr) */
void nitc__parser_prod___AAssertExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val = var_node; /* _n_expr on <self:AAssertExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAssertExpr$n_kwelse= for (self: AAssertExpr, nullable TKwelse) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwelse> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwelse(TKwelse)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwelse(TKwelse)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAssertExpr$n_else= for (self: AAssertExpr, nullable AExpr) */
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
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAssertExpr$visit_all for (self: AAssertExpr, Visitor) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwassert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3527);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3529);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_kwelse].val; /* _n_kwelse on <self:AAssertExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AOnceExpr$init_aonceexpr for (self: AOnceExpr, nullable TKwonce, nullable AExpr) */
void nitc__parser_prod___AOnceExpr___init_aonceexpr(val* self, val* p0, val* p1) {
val* var_n_kwonce /* var n_kwonce: nullable TKwonce */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AOnceExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwonce = p0;
var_n_expr = p1;
if (unlikely(var_n_kwonce == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3540);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_kwonce].val = var_n_kwonce; /* _n_kwonce on <self:AOnceExpr> */
if (var_n_kwonce == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3541);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwonce,self) on <var_n_kwonce:nullable TKwonce> */
if (unlikely(var_n_kwonce == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwonce->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwonce:nullable TKwonce> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3542);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOnceExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3543);
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
RET_LABEL:;
}
/* method parser_prod$AOnceExpr$replace_child for (self: AOnceExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3548);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwonce> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwonce> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3549);
fatal_exit(1);
}
{
nitc__parser_prod___AOnceExpr___n_kwonce_61d(self, var_new_child); /* Direct call parser_prod$AOnceExpr$n_kwonce= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3552);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3553);
fatal_exit(1);
}
{
nitc__parser_prod___AOnceExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AOnceExpr$n_expr= on <self:AOnceExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AOnceExpr$n_kwonce= for (self: AOnceExpr, TKwonce) */
void nitc__parser_prod___AOnceExpr___n_kwonce_61d(val* self, val* p0) {
val* var_node /* var node: TKwonce */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_kwonce].val = var_node; /* _n_kwonce on <self:AOnceExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwonce> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwonce> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOnceExpr$n_expr= for (self: AOnceExpr, AExpr) */
void nitc__parser_prod___AOnceExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val = var_node; /* _n_expr on <self:AOnceExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOnceExpr$visit_all for (self: AOnceExpr, Visitor) */
void nitc__parser_prod___AOnceExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwonce */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_kwonce].val; /* _n_kwonce on <self:AOnceExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwonce");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3572);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3573);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AOrExpr$init_aorexpr for (self: AOrExpr, nullable AExpr, nullable TKwor, nullable AExpr) */
void nitc__parser_prod___AOrExpr___init_aorexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwor */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AOrExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3654);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3655);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3656);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AOrExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3657);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TKwor> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TKwor> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3658);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3659);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrExpr$replace_child for (self: AOrExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3664);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3665);
fatal_exit(1);
}
{
nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AOrExpr$n_expr= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3668);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3669);
fatal_exit(1);
}
{
nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$AOrExpr$n_op= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3672);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3673);
fatal_exit(1);
}
{
nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$AOrExpr$n_expr2= on <self:AOrExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AOrExpr$n_expr= for (self: AOrExpr, AExpr) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AOrExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrExpr$n_op= for (self: AOrExpr, Token) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AOrExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrExpr$n_expr2= for (self: AOrExpr, AExpr) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrExpr$visit_all for (self: AOrExpr, Visitor) */
void nitc__parser_prod___AOrExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3697);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3698);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3699);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAndExpr$init_aandexpr for (self: AAndExpr, nullable AExpr, nullable TKwand, nullable AExpr) */
void nitc__parser_prod___AAndExpr___init_aandexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwand */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AAndExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3709);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AAndExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3710);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3711);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AAndExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3712);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TKwand> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TKwand> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3713);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AAndExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3714);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAndExpr$replace_child for (self: AAndExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3719);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3720);
fatal_exit(1);
}
{
nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AAndExpr$n_expr= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3723);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3724);
fatal_exit(1);
}
{
nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$AAndExpr$n_op= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3727);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3728);
fatal_exit(1);
}
{
nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$AAndExpr$n_expr2= on <self:AAndExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAndExpr$n_expr= for (self: AAndExpr, AExpr) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AAndExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAndExpr$n_op= for (self: AAndExpr, Token) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AAndExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAndExpr$n_expr2= for (self: AAndExpr, AExpr) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AAndExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAndExpr$visit_all for (self: AAndExpr, Visitor) */
void nitc__parser_prod___AAndExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3752);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AAndExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3753);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3754);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AOrElseExpr$init_aorelseexpr for (self: AOrElseExpr, nullable AExpr, nullable TKwor, nullable TKwelse, nullable AExpr) */
void nitc__parser_prod___AOrElseExpr___init_aorelseexpr(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwor */;
val* var_n_kwelse /* var n_kwelse: nullable TKwelse */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AOrElseExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_kwelse = p2;
var_n_expr2 = p3;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3765);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AOrElseExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3766);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3767);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AOrElseExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3768);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TKwor> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TKwor> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwelse == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3769);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOrElseExpr___n_kwelse].val = var_n_kwelse; /* _n_kwelse on <self:AOrElseExpr> */
if (var_n_kwelse == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3770);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwelse,self) on <var_n_kwelse:nullable TKwelse> */
if (unlikely(var_n_kwelse == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwelse->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwelse:nullable TKwelse> */
RET_LABEL4:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3771);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AOrElseExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3772);
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
RET_LABEL:;
}
/* method parser_prod$AOrElseExpr$replace_child for (self: AOrElseExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3777);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3778);
fatal_exit(1);
}
{
nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AOrElseExpr$n_expr= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3781);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3782);
fatal_exit(1);
}
{
nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$AOrElseExpr$n_op= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AOrElseExpr___n_kwelse].val; /* _n_kwelse on <self:AOrElseExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3785);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TKwelse> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TKwelse> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3786);
fatal_exit(1);
}
{
nitc__parser_prod___AOrElseExpr___n_kwelse_61d(self, var_new_child); /* Direct call parser_prod$AOrElseExpr$n_kwelse= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3789);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3790);
fatal_exit(1);
}
{
nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$AOrElseExpr$n_expr2= on <self:AOrElseExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AOrElseExpr$n_expr= for (self: AOrElseExpr, AExpr) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrElseExpr$n_op= for (self: AOrElseExpr, Token) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrElseExpr$n_kwelse= for (self: AOrElseExpr, TKwelse) */
void nitc__parser_prod___AOrElseExpr___n_kwelse_61d(val* self, val* p0) {
val* var_node /* var node: TKwelse */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOrElseExpr___n_kwelse].val = var_node; /* _n_kwelse on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwelse> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwelse> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrElseExpr$n_expr2= for (self: AOrElseExpr, AExpr) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AOrElseExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AOrElseExpr$visit_all for (self: AOrElseExpr, Visitor) */
void nitc__parser_prod___AOrElseExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : TKwelse */;
val* var3 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3819);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AOrElseExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3820);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AOrElseExpr___n_kwelse].val; /* _n_kwelse on <self:AOrElseExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwelse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3821);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3822);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AImpliesExpr$init_aimpliesexpr for (self: AImpliesExpr, nullable AExpr, nullable TKwimplies, nullable AExpr) */
void nitc__parser_prod___AImpliesExpr___init_aimpliesexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TKwimplies */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AImpliesExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3832);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AImpliesExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3833);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3834);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_n_op; /* _n_op on <self:AImpliesExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3835);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TKwimplies> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TKwimplies> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3836);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AImpliesExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3837);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AImpliesExpr$replace_child for (self: AImpliesExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3842);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3843);
fatal_exit(1);
}
{
nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AImpliesExpr$n_expr= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3846);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3847);
fatal_exit(1);
}
{
nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$AImpliesExpr$n_op= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3850);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3851);
fatal_exit(1);
}
{
nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$AImpliesExpr$n_expr2= on <self:AImpliesExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AImpliesExpr$n_expr= for (self: AImpliesExpr, AExpr) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val = var_node; /* _n_expr on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AImpliesExpr$n_op= for (self: AImpliesExpr, Token) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val = var_node; /* _n_op on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AImpliesExpr$n_expr2= for (self: AImpliesExpr, AExpr) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ABinBoolExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AImpliesExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AImpliesExpr$visit_all for (self: AImpliesExpr, Visitor) */
void nitc__parser_prod___AImpliesExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3875);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_op].val; /* _n_op on <self:AImpliesExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3876);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3877);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ANotExpr$init_anotexpr for (self: ANotExpr, nullable TKwnot, nullable AExpr) */
void nitc__parser_prod___ANotExpr___init_anotexpr(val* self, val* p0, val* p1) {
val* var_n_kwnot /* var n_kwnot: nullable TKwnot */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ANotExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwnot = p0;
var_n_expr = p1;
if (unlikely(var_n_kwnot == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3886);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_kwnot].val = var_n_kwnot; /* _n_kwnot on <self:ANotExpr> */
if (var_n_kwnot == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3887);
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
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3888);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANotExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3889);
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
RET_LABEL:;
}
/* method parser_prod$ANotExpr$replace_child for (self: ANotExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3894);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwnot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwnot> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3895);
fatal_exit(1);
}
{
nitc__parser_prod___ANotExpr___n_kwnot_61d(self, var_new_child); /* Direct call parser_prod$ANotExpr$n_kwnot= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3898);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3899);
fatal_exit(1);
}
{
nitc__parser_prod___ANotExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$ANotExpr$n_expr= on <self:ANotExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ANotExpr$n_kwnot= for (self: ANotExpr, TKwnot) */
void nitc__parser_prod___ANotExpr___n_kwnot_61d(val* self, val* p0) {
val* var_node /* var node: TKwnot */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_kwnot].val = var_node; /* _n_kwnot on <self:ANotExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwnot> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwnot> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANotExpr$n_expr= for (self: ANotExpr, AExpr) */
void nitc__parser_prod___ANotExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val = var_node; /* _n_expr on <self:ANotExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANotExpr$visit_all for (self: ANotExpr, Visitor) */
void nitc__parser_prod___ANotExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwnot */;
val* var1 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_kwnot].val; /* _n_kwnot on <self:ANotExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnot");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3918);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3919);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AEqExpr$init_aeqexpr for (self: AEqExpr, nullable AExpr, nullable TEq, nullable AExpr) */
void nitc__parser_prod___AEqExpr___init_aeqexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TEq */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AEqExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3929);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AEqExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3930);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3931);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AEqExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3932);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TEq> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TEq> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3933);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AEqExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3934);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEqExpr$replace_child for (self: AEqExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3939);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3940);
fatal_exit(1);
}
{
nitc__parser_prod___AEqExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AEqExpr$n_expr= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AEqExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3943);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3944);
fatal_exit(1);
}
{
nitc__parser_prod___AEqExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$AEqExpr$n_op= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3947);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3948);
fatal_exit(1);
}
{
nitc__parser_prod___AEqExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$AEqExpr$n_expr2= on <self:AEqExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AEqExpr$n_expr= for (self: AEqExpr, AExpr) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AEqExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEqExpr$n_op= for (self: AEqExpr, Token) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AEqExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEqExpr$n_expr2= for (self: AEqExpr, AExpr) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AEqExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEqExpr$visit_all for (self: AEqExpr, Visitor) */
void nitc__parser_prod___AEqExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3972);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AEqExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3973);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3974);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ANeExpr$init_aneexpr for (self: ANeExpr, nullable AExpr, nullable TNe, nullable AExpr) */
void nitc__parser_prod___ANeExpr___init_aneexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TNe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ANeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3984);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ANeExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3985);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3986);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ANeExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3987);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TNe> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TNe> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3988);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ANeExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3989);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANeExpr$replace_child for (self: ANeExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3994);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3995);
fatal_exit(1);
}
{
nitc__parser_prod___ANeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$ANeExpr$n_expr= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ANeExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3998);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 3999);
fatal_exit(1);
}
{
nitc__parser_prod___ANeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$ANeExpr$n_op= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4002);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4003);
fatal_exit(1);
}
{
nitc__parser_prod___ANeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$ANeExpr$n_expr2= on <self:ANeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ANeExpr$n_expr= for (self: ANeExpr, AExpr) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ANeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANeExpr$n_op= for (self: ANeExpr, Token) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ANeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANeExpr$n_expr2= for (self: ANeExpr, AExpr) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ANeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANeExpr$visit_all for (self: ANeExpr, Visitor) */
void nitc__parser_prod___ANeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ANeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4027);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ANeExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4028);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ANeExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4029);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALtExpr$init_altexpr for (self: ALtExpr, nullable AExpr, nullable TLt, nullable AExpr) */
void nitc__parser_prod___ALtExpr___init_altexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLt */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ALtExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4039);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALtExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4040);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4041);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALtExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4042);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TLt> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLt> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4043);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALtExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4044);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALtExpr$replace_child for (self: ALtExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4049);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4050);
fatal_exit(1);
}
{
nitc__parser_prod___ALtExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$ALtExpr$n_expr= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALtExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4053);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4054);
fatal_exit(1);
}
{
nitc__parser_prod___ALtExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$ALtExpr$n_op= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4057);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4058);
fatal_exit(1);
}
{
nitc__parser_prod___ALtExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$ALtExpr$n_expr2= on <self:ALtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALtExpr$n_expr= for (self: ALtExpr, AExpr) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALtExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALtExpr$n_op= for (self: ALtExpr, Token) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALtExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALtExpr$n_expr2= for (self: ALtExpr, AExpr) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALtExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALtExpr$visit_all for (self: ALtExpr, Visitor) */
void nitc__parser_prod___ALtExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALtExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4082);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALtExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4083);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALtExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4084);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALeExpr$init_aleexpr for (self: ALeExpr, nullable AExpr, nullable TLe, nullable AExpr) */
void nitc__parser_prod___ALeExpr___init_aleexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ALeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4094);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALeExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4095);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4096);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALeExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4097);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TLe> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLe> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4098);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALeExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4099);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALeExpr$replace_child for (self: ALeExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4104);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4105);
fatal_exit(1);
}
{
nitc__parser_prod___ALeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$ALeExpr$n_expr= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALeExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4108);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4109);
fatal_exit(1);
}
{
nitc__parser_prod___ALeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$ALeExpr$n_op= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4112);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4113);
fatal_exit(1);
}
{
nitc__parser_prod___ALeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$ALeExpr$n_expr2= on <self:ALeExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALeExpr$n_expr= for (self: ALeExpr, AExpr) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALeExpr$n_op= for (self: ALeExpr, Token) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALeExpr$n_expr2= for (self: ALeExpr, AExpr) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALeExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALeExpr$visit_all for (self: ALeExpr, Visitor) */
void nitc__parser_prod___ALeExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALeExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4137);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALeExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4138);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALeExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4139);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALlExpr$init_allexpr for (self: ALlExpr, nullable AExpr, nullable TLl, nullable AExpr) */
void nitc__parser_prod___ALlExpr___init_allexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TLl */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:ALlExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4149);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:ALlExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4150);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4151);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:ALlExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4152);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TLl> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TLl> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4153);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:ALlExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4154);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALlExpr$replace_child for (self: ALlExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4159);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4160);
fatal_exit(1);
}
{
nitc__parser_prod___ALlExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$ALlExpr$n_expr= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALlExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4163);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4164);
fatal_exit(1);
}
{
nitc__parser_prod___ALlExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$ALlExpr$n_op= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4167);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4168);
fatal_exit(1);
}
{
nitc__parser_prod___ALlExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$ALlExpr$n_expr2= on <self:ALlExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALlExpr$n_expr= for (self: ALlExpr, AExpr) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:ALlExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALlExpr$n_op= for (self: ALlExpr, Token) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:ALlExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALlExpr$n_expr2= for (self: ALlExpr, AExpr) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:ALlExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALlExpr$visit_all for (self: ALlExpr, Visitor) */
void nitc__parser_prod___ALlExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ALlExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4192);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ALlExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4193);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ALlExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4194);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AGtExpr$init_agtexpr for (self: AGtExpr, nullable AExpr, nullable TGt, nullable AExpr) */
void nitc__parser_prod___AGtExpr___init_agtexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TGt */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AGtExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4204);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGtExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4205);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4206);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AGtExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4207);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TGt> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGt> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4208);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGtExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4209);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGtExpr$replace_child for (self: AGtExpr, ANode, nullable ANode) */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4214);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4215);
fatal_exit(1);
}
{
nitc__parser_prod___AGtExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AGtExpr$n_expr= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGtExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4218);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:Token> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4219);
fatal_exit(1);
}
{
nitc__parser_prod___AGtExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(self, var_new_child); /* Direct call parser_prod$AGtExpr$n_op= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4222);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4223);
fatal_exit(1);
}
{
nitc__parser_prod___AGtExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(self, var_new_child); /* Direct call parser_prod$AGtExpr$n_expr2= on <self:AGtExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AGtExpr$n_expr= for (self: AGtExpr, AExpr) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ASendExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_node; /* _n_expr on <self:AGtExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGtExpr$n_op= for (self: AGtExpr, Token) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ABinopExpr__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_node; /* _n_op on <self:AGtExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGtExpr$n_expr2= for (self: AGtExpr, AExpr) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ABinopExpr__n_expr2_61d(val* self, val* p0) {
val* var_node /* var node: AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_node; /* _n_expr2 on <self:AGtExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AExpr> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGtExpr$visit_all for (self: AGtExpr, Visitor) */
void nitc__parser_prod___AGtExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AExpr */;
val* var1 /* : Token */;
val* var2 /* : AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGtExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4247);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:AGtExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4248);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGtExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4249);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AGeExpr$init_ageexpr for (self: AGeExpr, nullable AExpr, nullable TGe, nullable AExpr) */
void nitc__parser_prod___AGeExpr___init_ageexpr(val* self, val* p0, val* p1, val* p2) {
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_op /* var n_op: nullable TGe */;
val* var_n_expr2 /* var n_expr2: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AGeExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_op = p1;
var_n_expr2 = p2;
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4259);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AGeExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4260);
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
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4261);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val = var_n_op; /* _n_op on <self:AGeExpr> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4262);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TGe> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGe> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_expr2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4263);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val = var_n_expr2; /* _n_expr2 on <self:AGeExpr> */
if (var_n_expr2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 4264);
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
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
