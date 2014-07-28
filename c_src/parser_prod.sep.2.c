#include "parser_prod.sep.0.h"
/* method parser_prod#AExternMethPropdef#init_aexternmethpropdef for (self: AExternMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable TString, nullable AExternCalls, nullable AExternCodeBlock) */
void parser_prod__AExternMethPropdef__init_aexternmethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_extern /* var n_extern: nullable TString */;
val* var_n_extern_calls /* var n_extern_calls: nullable AExternCalls */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
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
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
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
var_n_kwmeth = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_annotations = p6;
var_n_extern = p7;
var_n_extern_calls = p8;
var_n_extern_code_block = p9;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AExternMethPropdef> */
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
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AExternMethPropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1389);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AExternMethPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1390);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_kwmeth == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1391);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AExternMethPropdef> */
if (var_n_kwmeth == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1392);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwmeth,self) on <var_n_kwmeth:nullable TKwmeth> */
if (unlikely(var_n_kwmeth == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwmeth->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwmeth:nullable TKwmeth> */
RET_LABEL17:(void)0;
}
}
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1393);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AExternMethPropdef> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1394);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_methid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL18:(void)0;
}
}
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1395);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AExternMethPropdef> */
if (var_n_signature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1396);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_signature,self) on <var_n_signature:nullable ASignature> */
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_signature->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_signature:nullable ASignature> */
RET_LABEL19:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AExternMethPropdef> */
var20 = NULL;
if (var_n_annotations == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var20) on <var_n_annotations:nullable AAnnotations> */
var_other = var20;
{
var25 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var24 = var25;
}
var26 = !var24;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL27:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val = var_n_extern; /* _n_extern on <self:AExternMethPropdef> */
var28 = NULL;
if (var_n_extern == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern,var28) on <var_n_extern:nullable TString> */
var_other = var28;
{
var33 = ((short int (*)(val*, val*))(var_n_extern->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern, var_other) /* == on <var_n_extern:nullable TString(TString)>*/;
var32 = var33;
}
var34 = !var32;
var30 = var34;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern,self) on <var_n_extern:nullable TString(TString)> */
var_n_extern->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern:nullable TString(TString)> */
RET_LABEL35:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AExternMethPropdef> */
var36 = NULL;
if (var_n_extern_calls == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_calls,var36) on <var_n_extern_calls:nullable AExternCalls> */
var_other = var36;
{
var41 = ((short int (*)(val*, val*))(var_n_extern_calls->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern_calls, var_other) /* == on <var_n_extern_calls:nullable AExternCalls(AExternCalls)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_calls,self) on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
var_n_extern_calls->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
RET_LABEL43:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AExternMethPropdef> */
var44 = NULL;
if (var_n_extern_code_block == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_code_block,var44) on <var_n_extern_code_block:nullable AExternCodeBlock> */
var_other = var44;
{
var49 = ((short int (*)(val*, val*))(var_n_extern_code_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern_code_block, var_other) /* == on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_code_block,self) on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var_n_extern_code_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL51:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#init_aexternmethpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable TString, nullable AExternCalls, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AExternMethPropdef__init_aexternmethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9) {
parser_prod__AExternMethPropdef__init_aexternmethpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); /* Direct call parser_prod#AExternMethPropdef#init_aexternmethpropdef on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#replace_child for (self: AExternMethPropdef, ANode, nullable ANode) */
void parser_prod__AExternMethPropdef__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : nullable TKwmeth */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable AMethid */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable ASignature */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
val* var63 /* : nullable AAnnotations */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
val* var74 /* : nullable TString */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
val* var85 /* : nullable AExternCalls */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
val* var96 /* : nullable AExternCodeBlock */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1410);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_doc= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AExternMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1414);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_kwredef= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AExternMethPropdef> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype27 = type_parser_nodes__AVisibility.color;
idtype28 = type_parser_nodes__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1418);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_visibility= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AExternMethPropdef> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable TKwmeth> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable TKwmeth(TKwmeth)> */
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
/* <var_new_child:nullable ANode> isa TKwmeth */
cltype38 = type_parser_nodes__TKwmeth.color;
idtype39 = type_parser_nodes__TKwmeth.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwmeth", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1422);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_kwmeth_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_kwmeth= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternMethPropdef> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable AMethid(AMethid)> */
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
/* <var_new_child:nullable ANode> isa AMethid */
cltype49 = type_parser_nodes__AMethid.color;
idtype50 = type_parser_nodes__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1426);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_methid_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_methid= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AExternMethPropdef> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable ASignature> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable ASignature(ASignature)> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa ASignature */
cltype60 = type_parser_nodes__ASignature.color;
idtype61 = type_parser_nodes__ASignature.id;
if(var_new_child == NULL) {
var59 = 0;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ASignature", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1430);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_signature_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_signature= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AExternMethPropdef> */
if (var63 == NULL) {
var64 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var63,var_old_child) on <var63:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:nullable AAnnotations(AAnnotations)> */
var69 = var63 == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype71 = type_nullable_parser_nodes__AAnnotations.color;
idtype72 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var70 = 1;
} else {
if(cltype71 >= var_new_child->type->table_size) {
var70 = 0;
} else {
var70 = var_new_child->type->type_table[cltype71] == idtype72;
}
}
if (unlikely(!var70)) {
var_class_name73 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1434);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_annotations= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val; /* _n_extern on <self:AExternMethPropdef> */
if (var74 == NULL) {
var75 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var74,var_old_child) on <var74:nullable TString> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var74,var_other) on <var74:nullable TString(TString)> */
var80 = var74 == var_other;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
/* <var_new_child:nullable ANode> isa nullable TString */
cltype82 = type_nullable_parser_nodes__TString.color;
idtype83 = type_nullable_parser_nodes__TString.id;
if(var_new_child == NULL) {
var81 = 1;
} else {
if(cltype82 >= var_new_child->type->table_size) {
var81 = 0;
} else {
var81 = var_new_child->type->type_table[cltype82] == idtype83;
}
}
if (unlikely(!var81)) {
var_class_name84 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TString", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1438);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_extern_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_extern= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var85 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternMethPropdef> */
if (var85 == NULL) {
var86 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var85,var_old_child) on <var85:nullable AExternCalls> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var85,var_other) on <var85:nullable AExternCalls(AExternCalls)> */
var91 = var85 == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (var86){
/* <var_new_child:nullable ANode> isa nullable AExternCalls */
cltype93 = type_nullable_parser_nodes__AExternCalls.color;
idtype94 = type_nullable_parser_nodes__AExternCalls.id;
if(var_new_child == NULL) {
var92 = 1;
} else {
if(cltype93 >= var_new_child->type->table_size) {
var92 = 0;
} else {
var92 = var_new_child->type->type_table[cltype93] == idtype94;
}
}
if (unlikely(!var92)) {
var_class_name95 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCalls", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1442);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_extern_calls_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_extern_calls= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var96 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternMethPropdef> */
if (var96 == NULL) {
var97 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var96,var_old_child) on <var96:nullable AExternCodeBlock> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var96,var_other) on <var96:nullable AExternCodeBlock(AExternCodeBlock)> */
var102 = var96 == var_other;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
/* <var_new_child:nullable ANode> isa nullable AExternCodeBlock */
cltype104 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype105 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_new_child == NULL) {
var103 = 1;
} else {
if(cltype104 >= var_new_child->type->table_size) {
var103 = 0;
} else {
var103 = var_new_child->type->type_table[cltype104] == idtype105;
}
}
if (unlikely(!var103)) {
var_class_name106 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCodeBlock", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1446);
show_backtrace(1);
}
{
parser_prod__AExternMethPropdef__n_extern_code_block_61d(self, var_new_child); /* Direct call parser_prod#AExternMethPropdef#n_extern_code_block= on <self:AExternMethPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternMethPropdef__replace_child(self, p0, p1); /* Direct call parser_prod#AExternMethPropdef#replace_child on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_doc= for (self: AExternMethPropdef, nullable ADoc) */
void parser_prod__AExternMethPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AExternMethPropdef> */
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
/* method parser_prod#AExternMethPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_doc_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_doc= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_kwredef= for (self: AExternMethPropdef, nullable TKwredef) */
void parser_prod__AExternMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AExternMethPropdef> */
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
/* method parser_prod#AExternMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_kwredef= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_visibility= for (self: AExternMethPropdef, nullable AVisibility) */
void parser_prod__AExternMethPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_node; /* _n_visibility on <self:AExternMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1464);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_visibility_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_visibility= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_kwmeth= for (self: AExternMethPropdef, nullable TKwmeth) */
void parser_prod__AExternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwmeth */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AExternMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1469);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwmeth> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwmeth> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_kwmeth= for (self: Object, nullable TKwmeth) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_kwmeth_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_kwmeth= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_methid= for (self: AExternMethPropdef, nullable AMethid) */
void parser_prod__AExternMethPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AExternMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1474);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AMethid> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_methid_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_methid= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_signature= for (self: AExternMethPropdef, nullable ASignature) */
void parser_prod__AExternMethPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AExternMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1479);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ASignature> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ASignature> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_signature_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_signature= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_annotations= for (self: AExternMethPropdef, nullable AAnnotations) */
void parser_prod__AExternMethPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AExternMethPropdef> */
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
/* method parser_prod#AExternMethPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_annotations_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_annotations= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern= for (self: AExternMethPropdef, nullable TString) */
void parser_prod__AExternMethPropdef__n_extern_61d(val* self, val* p0) {
val* var_node /* var node: nullable TString */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val = var_node; /* _n_extern on <self:AExternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TString> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TString(TString)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TString(TString)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TString(TString)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern= for (self: Object, nullable TString) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_extern_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_extern_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_extern= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern_calls= for (self: AExternMethPropdef, nullable AExternCalls) */
void parser_prod__AExternMethPropdef__n_extern_calls_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCalls */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val = var_node; /* _n_extern_calls on <self:AExternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExternCalls> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExternCalls(AExternCalls)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExternCalls(AExternCalls)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCalls(AExternCalls)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern_calls= for (self: Object, nullable AExternCalls) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_extern_calls_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_extern_calls_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_extern_calls= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern_code_block= for (self: AExternMethPropdef, nullable AExternCodeBlock) */
void parser_prod__AExternMethPropdef__n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AExternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExternCodeBlock> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_extern_code_block_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_extern_code_block_61d(self, p0); /* Direct call parser_prod#AExternMethPropdef#n_extern_code_block= on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#visit_all for (self: AExternMethPropdef, Visitor) */
void parser_prod__AExternMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : nullable TKwmeth */;
val* var4 /* : nullable AMethid */;
val* var5 /* : nullable ASignature */;
val* var6 /* : nullable AAnnotations */;
val* var7 /* : nullable TString */;
val* var8 /* : nullable AExternCalls */;
val* var9 /* : nullable AExternCodeBlock */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val; /* _n_extern on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AExternMethPropdef__visit_all(self, p0); /* Direct call parser_prod#AExternMethPropdef#visit_all on <self:Object(AExternMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#init_aconcretemethpropdef for (self: AConcreteMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExpr) */
void parser_prod__AConcreteMethPropdef__init_aconcretemethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_block /* var n_block: nullable AExpr */;
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
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmeth = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_annotations = p6;
var_n_block = p7;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AConcreteMethPropdef> */
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
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AConcreteMethPropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1533);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AConcreteMethPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1534);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_kwmeth == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1535);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AConcreteMethPropdef> */
if (var_n_kwmeth == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1536);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwmeth,self) on <var_n_kwmeth:nullable TKwmeth> */
if (unlikely(var_n_kwmeth == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwmeth->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwmeth:nullable TKwmeth> */
RET_LABEL17:(void)0;
}
}
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1537);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AConcreteMethPropdef> */
if (var_n_methid == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1538);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid> */
if (unlikely(var_n_methid == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_methid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid> */
RET_LABEL18:(void)0;
}
}
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1539);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AConcreteMethPropdef> */
if (var_n_signature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1540);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_signature,self) on <var_n_signature:nullable ASignature> */
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_signature->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_signature:nullable ASignature> */
RET_LABEL19:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AConcreteMethPropdef> */
var20 = NULL;
if (var_n_annotations == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var20) on <var_n_annotations:nullable AAnnotations> */
var_other = var20;
{
var25 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var24 = var25;
}
var26 = !var24;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL27:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AConcreteMethPropdef> */
var28 = NULL;
if (var_n_block == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var28) on <var_n_block:nullable AExpr> */
var_other = var28;
{
var33 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var32 = var33;
}
var34 = !var32;
var30 = var34;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL35:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#init_aconcretemethpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExpr) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__init_aconcretemethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
parser_prod__AConcreteMethPropdef__init_aconcretemethpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7); /* Direct call parser_prod#AConcreteMethPropdef#init_aconcretemethpropdef on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#replace_child for (self: AConcreteMethPropdef, ANode, nullable ANode) */
void parser_prod__AConcreteMethPropdef__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : nullable TKwmeth */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable AMethid */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable ASignature */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
val* var63 /* : nullable AAnnotations */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
val* var74 /* : nullable AExpr */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1550);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__APropdef__n_doc_61d]))(self, var_new_child) /* n_doc= on <self:AConcreteMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1554);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__APropdef__n_kwredef_61d]))(self, var_new_child) /* n_kwredef= on <self:AConcreteMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AConcreteMethPropdef> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype27 = type_parser_nodes__AVisibility.color;
idtype28 = type_parser_nodes__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1558);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__APropdef__n_visibility_61d]))(self, var_new_child) /* n_visibility= on <self:AConcreteMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AConcreteMethPropdef> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable TKwmeth> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable TKwmeth(TKwmeth)> */
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
/* <var_new_child:nullable ANode> isa TKwmeth */
cltype38 = type_parser_nodes__TKwmeth.color;
idtype39 = type_parser_nodes__TKwmeth.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwmeth", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1562);
show_backtrace(1);
}
{
parser_prod__AConcreteMethPropdef__n_kwmeth_61d(self, var_new_child); /* Direct call parser_prod#AConcreteMethPropdef#n_kwmeth= on <self:AConcreteMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteMethPropdef> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable AMethid(AMethid)> */
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
/* <var_new_child:nullable ANode> isa AMethid */
cltype49 = type_parser_nodes__AMethid.color;
idtype50 = type_parser_nodes__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethid", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1566);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_methid_61d]))(self, var_new_child) /* n_methid= on <self:AConcreteMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AConcreteMethPropdef> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable ASignature> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable ASignature(ASignature)> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa ASignature */
cltype60 = type_parser_nodes__ASignature.color;
idtype61 = type_parser_nodes__ASignature.id;
if(var_new_child == NULL) {
var59 = 0;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ASignature", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1570);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature_61d]))(self, var_new_child) /* n_signature= on <self:AConcreteMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteMethPropdef> */
if (var63 == NULL) {
var64 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var63,var_old_child) on <var63:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:nullable AAnnotations(AAnnotations)> */
var69 = var63 == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype71 = type_nullable_parser_nodes__AAnnotations.color;
idtype72 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var70 = 1;
} else {
if(cltype71 >= var_new_child->type->table_size) {
var70 = 0;
} else {
var70 = var_new_child->type->type_table[cltype71] == idtype72;
}
}
if (unlikely(!var70)) {
var_class_name73 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1574);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__Prod__n_annotations_61d]))(self, var_new_child) /* n_annotations= on <self:AConcreteMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AConcreteMethPropdef> */
if (var74 == NULL) {
var75 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var74,var_old_child) on <var74:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var74,var_other) on <var74:nullable AExpr(AExpr)> */
var80 = var74 == var_other;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype82 = type_nullable_parser_nodes__AExpr.color;
idtype83 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var81 = 1;
} else {
if(cltype82 >= var_new_child->type->table_size) {
var81 = 0;
} else {
var81 = var_new_child->type->type_table[cltype82] == idtype83;
}
}
if (unlikely(!var81)) {
var_class_name84 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1578);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_block_61d]))(self, var_new_child) /* n_block= on <self:AConcreteMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AConcreteMethPropdef__replace_child(self, p0, p1); /* Direct call parser_prod#AConcreteMethPropdef#replace_child on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_doc= for (self: AConcreteMethPropdef, nullable ADoc) */
void parser_prod__AConcreteMethPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AConcreteMethPropdef> */
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
/* method parser_prod#AConcreteMethPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_doc_61d(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#n_doc= on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_kwredef= for (self: AConcreteMethPropdef, nullable TKwredef) */
void parser_prod__AConcreteMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AConcreteMethPropdef> */
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
/* method parser_prod#AConcreteMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#n_kwredef= on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_visibility= for (self: AConcreteMethPropdef, nullable AVisibility) */
void parser_prod__AConcreteMethPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_node; /* _n_visibility on <self:AConcreteMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1596);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_visibility_61d(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#n_visibility= on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_kwmeth= for (self: AConcreteMethPropdef, nullable TKwmeth) */
void parser_prod__AConcreteMethPropdef__n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwmeth */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AConcreteMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1601);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwmeth> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwmeth> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_kwmeth= for (self: Object, nullable TKwmeth) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_kwmeth_61d(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#n_kwmeth= on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_methid= for (self: AConcreteMethPropdef, nullable AMethid) */
void parser_prod__AConcreteMethPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AConcreteMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1606);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AMethid> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AMethid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_methid_61d(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#n_methid= on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_signature= for (self: AConcreteMethPropdef, nullable ASignature) */
void parser_prod__AConcreteMethPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AConcreteMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1611);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ASignature> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ASignature> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_signature_61d(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#n_signature= on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_annotations= for (self: AConcreteMethPropdef, nullable AAnnotations) */
void parser_prod__AConcreteMethPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AConcreteMethPropdef> */
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
/* method parser_prod#AConcreteMethPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_annotations_61d(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#n_annotations= on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_block= for (self: AConcreteMethPropdef, nullable AExpr) */
void parser_prod__AConcreteMethPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AConcreteMethPropdef> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_block_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_block_61d(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#n_block= on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#visit_all for (self: AConcreteMethPropdef, Visitor) */
void parser_prod__AConcreteMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : nullable TKwmeth */;
val* var4 /* : nullable AMethid */;
val* var5 /* : nullable ASignature */;
val* var6 /* : nullable AAnnotations */;
val* var7 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AConcreteMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AConcreteMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AConcreteMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AConcreteMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__visit_all(self, p0); /* Direct call parser_prod#AConcreteMethPropdef#visit_all on <self:Object(AConcreteMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#init_aconcreteinitpropdef for (self: AConcreteInitPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwinit, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExpr) */
void parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_block /* var n_block: nullable AExpr */;
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
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwinit = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_annotations = p6;
var_n_block = p7;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AConcreteInitPropdef> */
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
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AConcreteInitPropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1653);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AConcreteInitPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1654);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1655);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AConcreteInitPropdef> */
if (var_n_kwinit == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1656);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwinit,self) on <var_n_kwinit:nullable TKwinit> */
if (unlikely(var_n_kwinit == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwinit->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinit:nullable TKwinit> */
RET_LABEL17:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AConcreteInitPropdef> */
var18 = NULL;
if (var_n_methid == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_methid,var18) on <var_n_methid:nullable AMethid> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var_n_methid->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_methid, var_other) /* == on <var_n_methid:nullable AMethid(AMethid)>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid(AMethid)> */
var_n_methid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid(AMethid)> */
RET_LABEL25:(void)0;
}
}
} else {
}
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1659);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AConcreteInitPropdef> */
if (var_n_signature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1660);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_signature,self) on <var_n_signature:nullable ASignature> */
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_signature->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_signature:nullable ASignature> */
RET_LABEL26:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AConcreteInitPropdef> */
var27 = NULL;
if (var_n_annotations == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var27) on <var_n_annotations:nullable AAnnotations> */
var_other = var27;
{
var32 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var31 = var32;
}
var33 = !var31;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL34:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AConcreteInitPropdef> */
var35 = NULL;
if (var_n_block == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var35) on <var_n_block:nullable AExpr> */
var_other = var35;
{
var40 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var39 = var40;
}
var41 = !var39;
var37 = var41;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL42:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#init_aconcreteinitpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwinit, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExpr) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7); /* Direct call parser_prod#AConcreteInitPropdef#init_aconcreteinitpropdef on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#replace_child for (self: AConcreteInitPropdef, ANode, nullable ANode) */
void parser_prod__AConcreteInitPropdef__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : nullable TKwinit */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable AMethid */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable ASignature */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
val* var63 /* : nullable AAnnotations */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
val* var74 /* : nullable AExpr */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteInitPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1670);
show_backtrace(1);
}
{
parser_prod__AConcreteInitPropdef__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AConcreteInitPropdef#n_doc= on <self:AConcreteInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteInitPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1674);
show_backtrace(1);
}
{
parser_prod__AConcreteInitPropdef__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AConcreteInitPropdef#n_kwredef= on <self:AConcreteInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AConcreteInitPropdef> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype27 = type_parser_nodes__AVisibility.color;
idtype28 = type_parser_nodes__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1678);
show_backtrace(1);
}
{
parser_prod__AConcreteInitPropdef__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AConcreteInitPropdef#n_visibility= on <self:AConcreteInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AConcreteInitPropdef> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable TKwinit> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable TKwinit(TKwinit)> */
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
/* <var_new_child:nullable ANode> isa TKwinit */
cltype38 = type_parser_nodes__TKwinit.color;
idtype39 = type_parser_nodes__TKwinit.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwinit", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1682);
show_backtrace(1);
}
{
parser_prod__AConcreteInitPropdef__n_kwinit_61d(self, var_new_child); /* Direct call parser_prod#AConcreteInitPropdef#n_kwinit= on <self:AConcreteInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteInitPropdef> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable AMethid(AMethid)> */
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
/* <var_new_child:nullable ANode> isa nullable AMethid */
cltype49 = type_nullable_parser_nodes__AMethid.color;
idtype50 = type_nullable_parser_nodes__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AMethid", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1686);
show_backtrace(1);
}
{
parser_prod__AConcreteInitPropdef__n_methid_61d(self, var_new_child); /* Direct call parser_prod#AConcreteInitPropdef#n_methid= on <self:AConcreteInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AConcreteInitPropdef> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable ASignature> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable ASignature(ASignature)> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa ASignature */
cltype60 = type_parser_nodes__ASignature.color;
idtype61 = type_parser_nodes__ASignature.id;
if(var_new_child == NULL) {
var59 = 0;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ASignature", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1690);
show_backtrace(1);
}
{
parser_prod__AConcreteInitPropdef__n_signature_61d(self, var_new_child); /* Direct call parser_prod#AConcreteInitPropdef#n_signature= on <self:AConcreteInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteInitPropdef> */
if (var63 == NULL) {
var64 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var63,var_old_child) on <var63:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:nullable AAnnotations(AAnnotations)> */
var69 = var63 == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype71 = type_nullable_parser_nodes__AAnnotations.color;
idtype72 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var70 = 1;
} else {
if(cltype71 >= var_new_child->type->table_size) {
var70 = 0;
} else {
var70 = var_new_child->type->type_table[cltype71] == idtype72;
}
}
if (unlikely(!var70)) {
var_class_name73 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1694);
show_backtrace(1);
}
{
parser_prod__AConcreteInitPropdef__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AConcreteInitPropdef#n_annotations= on <self:AConcreteInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AConcreteInitPropdef> */
if (var74 == NULL) {
var75 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var74,var_old_child) on <var74:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var74,var_other) on <var74:nullable AExpr(AExpr)> */
var80 = var74 == var_other;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype82 = type_nullable_parser_nodes__AExpr.color;
idtype83 = type_nullable_parser_nodes__AExpr.id;
if(var_new_child == NULL) {
var81 = 1;
} else {
if(cltype82 >= var_new_child->type->table_size) {
var81 = 0;
} else {
var81 = var_new_child->type->type_table[cltype82] == idtype83;
}
}
if (unlikely(!var81)) {
var_class_name84 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1698);
show_backtrace(1);
}
{
parser_prod__AConcreteInitPropdef__n_block_61d(self, var_new_child); /* Direct call parser_prod#AConcreteInitPropdef#n_block= on <self:AConcreteInitPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AConcreteInitPropdef__replace_child(self, p0, p1); /* Direct call parser_prod#AConcreteInitPropdef#replace_child on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_doc= for (self: AConcreteInitPropdef, nullable ADoc) */
void parser_prod__AConcreteInitPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AConcreteInitPropdef> */
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
/* method parser_prod#AConcreteInitPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_doc_61d(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#n_doc= on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_kwredef= for (self: AConcreteInitPropdef, nullable TKwredef) */
void parser_prod__AConcreteInitPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AConcreteInitPropdef> */
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
/* method parser_prod#AConcreteInitPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#n_kwredef= on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_visibility= for (self: AConcreteInitPropdef, nullable AVisibility) */
void parser_prod__AConcreteInitPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_node; /* _n_visibility on <self:AConcreteInitPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1716);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_visibility_61d(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#n_visibility= on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_kwinit= for (self: AConcreteInitPropdef, nullable TKwinit) */
void parser_prod__AConcreteInitPropdef__n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwinit */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val = var_node; /* _n_kwinit on <self:AConcreteInitPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1721);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwinit> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwinit> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_kwinit= for (self: Object, nullable TKwinit) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_kwinit_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_kwinit_61d(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#n_kwinit= on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_methid= for (self: AConcreteInitPropdef, nullable AMethid) */
void parser_prod__AConcreteInitPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AConcreteInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AMethid> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AMethid(AMethid)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AMethid(AMethid)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AMethid(AMethid)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_methid_61d(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#n_methid= on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_signature= for (self: AConcreteInitPropdef, nullable ASignature) */
void parser_prod__AConcreteInitPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AConcreteInitPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1731);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ASignature> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ASignature> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_signature_61d(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#n_signature= on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_annotations= for (self: AConcreteInitPropdef, nullable AAnnotations) */
void parser_prod__AConcreteInitPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AConcreteInitPropdef> */
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
/* method parser_prod#AConcreteInitPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_annotations_61d(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#n_annotations= on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_block= for (self: AConcreteInitPropdef, nullable AExpr) */
void parser_prod__AConcreteInitPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AConcreteInitPropdef> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__n_block_61d(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__n_block_61d(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#n_block= on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#visit_all for (self: AConcreteInitPropdef, Visitor) */
void parser_prod__AConcreteInitPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : nullable TKwinit */;
val* var4 /* : nullable AMethid */;
val* var5 /* : nullable ASignature */;
val* var6 /* : nullable AAnnotations */;
val* var7 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AConcreteInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AConcreteInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AConcreteInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AConcreteInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__visit_all(val* self, val* p0) {
parser_prod__AConcreteInitPropdef__visit_all(self, p0); /* Direct call parser_prod#AConcreteInitPropdef#visit_all on <self:Object(AConcreteInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#init_aexterninitpropdef for (self: AExternInitPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwnew, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable TString, nullable AExternCalls, nullable AExternCodeBlock) */
void parser_prod__AExternInitPropdef__init_aexterninitpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_extern /* var n_extern: nullable TString */;
val* var_n_extern_calls /* var n_extern_calls: nullable AExternCalls */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
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
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var51 /* : null */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwnew = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_annotations = p6;
var_n_extern = p7;
var_n_extern_calls = p8;
var_n_extern_code_block = p9;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AExternInitPropdef> */
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
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AExternInitPropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1775);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AExternInitPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1776);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1777);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:AExternInitPropdef> */
if (var_n_kwnew == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1778);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnew,self) on <var_n_kwnew:nullable TKwnew> */
if (unlikely(var_n_kwnew == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwnew->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnew:nullable TKwnew> */
RET_LABEL17:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AExternInitPropdef> */
var18 = NULL;
if (var_n_methid == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_methid,var18) on <var_n_methid:nullable AMethid> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var_n_methid->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_methid, var_other) /* == on <var_n_methid:nullable AMethid(AMethid)>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid(AMethid)> */
var_n_methid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid(AMethid)> */
RET_LABEL25:(void)0;
}
}
} else {
}
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1781);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AExternInitPropdef> */
if (var_n_signature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1782);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_signature,self) on <var_n_signature:nullable ASignature> */
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_signature->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_signature:nullable ASignature> */
RET_LABEL26:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AExternInitPropdef> */
var27 = NULL;
if (var_n_annotations == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var27) on <var_n_annotations:nullable AAnnotations> */
var_other = var27;
{
var32 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var31 = var32;
}
var33 = !var31;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL34:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val = var_n_extern; /* _n_extern on <self:AExternInitPropdef> */
var35 = NULL;
if (var_n_extern == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern,var35) on <var_n_extern:nullable TString> */
var_other = var35;
{
var40 = ((short int (*)(val*, val*))(var_n_extern->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern, var_other) /* == on <var_n_extern:nullable TString(TString)>*/;
var39 = var40;
}
var41 = !var39;
var37 = var41;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern,self) on <var_n_extern:nullable TString(TString)> */
var_n_extern->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern:nullable TString(TString)> */
RET_LABEL42:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AExternInitPropdef> */
var43 = NULL;
if (var_n_extern_calls == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_calls,var43) on <var_n_extern_calls:nullable AExternCalls> */
var_other = var43;
{
var48 = ((short int (*)(val*, val*))(var_n_extern_calls->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern_calls, var_other) /* == on <var_n_extern_calls:nullable AExternCalls(AExternCalls)>*/;
var47 = var48;
}
var49 = !var47;
var45 = var49;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_calls,self) on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
var_n_extern_calls->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
RET_LABEL50:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AExternInitPropdef> */
var51 = NULL;
if (var_n_extern_code_block == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_code_block,var51) on <var_n_extern_code_block:nullable AExternCodeBlock> */
var_other = var51;
{
var56 = ((short int (*)(val*, val*))(var_n_extern_code_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern_code_block, var_other) /* == on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
var55 = var56;
}
var57 = !var55;
var53 = var57;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_code_block,self) on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var_n_extern_code_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL58:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#init_aexterninitpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwnew, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable TString, nullable AExternCalls, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AExternInitPropdef__init_aexterninitpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9) {
parser_prod__AExternInitPropdef__init_aexterninitpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); /* Direct call parser_prod#AExternInitPropdef#init_aexterninitpropdef on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#replace_child for (self: AExternInitPropdef, ANode, nullable ANode) */
void parser_prod__AExternInitPropdef__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : nullable TKwnew */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable AMethid */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable ASignature */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
val* var63 /* : nullable AAnnotations */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
val* var74 /* : nullable TString */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
val* var85 /* : nullable AExternCalls */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
val* var96 /* : nullable AExternCodeBlock */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternInitPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1796);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_doc= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AExternInitPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1800);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_kwredef= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AExternInitPropdef> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype27 = type_parser_nodes__AVisibility.color;
idtype28 = type_parser_nodes__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1804);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_visibility= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AExternInitPropdef> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable TKwnew> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable TKwnew(TKwnew)> */
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
/* <var_new_child:nullable ANode> isa TKwnew */
cltype38 = type_parser_nodes__TKwnew.color;
idtype39 = type_parser_nodes__TKwnew.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwnew", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1808);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_kwnew_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_kwnew= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternInitPropdef> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable AMethid(AMethid)> */
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
/* <var_new_child:nullable ANode> isa nullable AMethid */
cltype49 = type_nullable_parser_nodes__AMethid.color;
idtype50 = type_nullable_parser_nodes__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AMethid", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1812);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_methid_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_methid= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AExternInitPropdef> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable ASignature> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable ASignature(ASignature)> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa ASignature */
cltype60 = type_parser_nodes__ASignature.color;
idtype61 = type_parser_nodes__ASignature.id;
if(var_new_child == NULL) {
var59 = 0;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ASignature", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1816);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_signature_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_signature= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AExternInitPropdef> */
if (var63 == NULL) {
var64 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var63,var_old_child) on <var63:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:nullable AAnnotations(AAnnotations)> */
var69 = var63 == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype71 = type_nullable_parser_nodes__AAnnotations.color;
idtype72 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var70 = 1;
} else {
if(cltype71 >= var_new_child->type->table_size) {
var70 = 0;
} else {
var70 = var_new_child->type->type_table[cltype71] == idtype72;
}
}
if (unlikely(!var70)) {
var_class_name73 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1820);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_annotations= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val; /* _n_extern on <self:AExternInitPropdef> */
if (var74 == NULL) {
var75 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var74,var_old_child) on <var74:nullable TString> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var74,var_other) on <var74:nullable TString(TString)> */
var80 = var74 == var_other;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
/* <var_new_child:nullable ANode> isa nullable TString */
cltype82 = type_nullable_parser_nodes__TString.color;
idtype83 = type_nullable_parser_nodes__TString.id;
if(var_new_child == NULL) {
var81 = 1;
} else {
if(cltype82 >= var_new_child->type->table_size) {
var81 = 0;
} else {
var81 = var_new_child->type->type_table[cltype82] == idtype83;
}
}
if (unlikely(!var81)) {
var_class_name84 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TString", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1824);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_extern_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_extern= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var85 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternInitPropdef> */
if (var85 == NULL) {
var86 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var85,var_old_child) on <var85:nullable AExternCalls> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var85,var_other) on <var85:nullable AExternCalls(AExternCalls)> */
var91 = var85 == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (var86){
/* <var_new_child:nullable ANode> isa nullable AExternCalls */
cltype93 = type_nullable_parser_nodes__AExternCalls.color;
idtype94 = type_nullable_parser_nodes__AExternCalls.id;
if(var_new_child == NULL) {
var92 = 1;
} else {
if(cltype93 >= var_new_child->type->table_size) {
var92 = 0;
} else {
var92 = var_new_child->type->type_table[cltype93] == idtype94;
}
}
if (unlikely(!var92)) {
var_class_name95 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCalls", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1828);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_extern_calls_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_extern_calls= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
var96 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternInitPropdef> */
if (var96 == NULL) {
var97 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var96,var_old_child) on <var96:nullable AExternCodeBlock> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var96,var_other) on <var96:nullable AExternCodeBlock(AExternCodeBlock)> */
var102 = var96 == var_other;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
/* <var_new_child:nullable ANode> isa nullable AExternCodeBlock */
cltype104 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype105 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_new_child == NULL) {
var103 = 1;
} else {
if(cltype104 >= var_new_child->type->table_size) {
var103 = 0;
} else {
var103 = var_new_child->type->type_table[cltype104] == idtype105;
}
}
if (unlikely(!var103)) {
var_class_name106 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCodeBlock", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1832);
show_backtrace(1);
}
{
parser_prod__AExternInitPropdef__n_extern_code_block_61d(self, var_new_child); /* Direct call parser_prod#AExternInitPropdef#n_extern_code_block= on <self:AExternInitPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternInitPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternInitPropdef__replace_child(self, p0, p1); /* Direct call parser_prod#AExternInitPropdef#replace_child on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_doc= for (self: AExternInitPropdef, nullable ADoc) */
void parser_prod__AExternInitPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AExternInitPropdef> */
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
/* method parser_prod#AExternInitPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_doc_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_doc= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_kwredef= for (self: AExternInitPropdef, nullable TKwredef) */
void parser_prod__AExternInitPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AExternInitPropdef> */
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
/* method parser_prod#AExternInitPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_kwredef= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_visibility= for (self: AExternInitPropdef, nullable AVisibility) */
void parser_prod__AExternInitPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_node; /* _n_visibility on <self:AExternInitPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1850);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_visibility_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_visibility= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_kwnew= for (self: AExternInitPropdef, nullable TKwnew) */
void parser_prod__AExternInitPropdef__n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnew */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val = var_node; /* _n_kwnew on <self:AExternInitPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1855);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwnew> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwnew> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_kwnew= for (self: Object, nullable TKwnew) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_kwnew_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_kwnew_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_kwnew= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_methid= for (self: AExternInitPropdef, nullable AMethid) */
void parser_prod__AExternInitPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AMethid> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AMethid(AMethid)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AMethid(AMethid)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AMethid(AMethid)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_methid_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_methid= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_signature= for (self: AExternInitPropdef, nullable ASignature) */
void parser_prod__AExternInitPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AExternInitPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1865);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ASignature> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ASignature> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_signature_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_signature= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_annotations= for (self: AExternInitPropdef, nullable AAnnotations) */
void parser_prod__AExternInitPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AExternInitPropdef> */
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
/* method parser_prod#AExternInitPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_annotations_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_annotations= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern= for (self: AExternInitPropdef, nullable TString) */
void parser_prod__AExternInitPropdef__n_extern_61d(val* self, val* p0) {
val* var_node /* var node: nullable TString */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val = var_node; /* _n_extern on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TString> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TString(TString)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TString(TString)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TString(TString)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern= for (self: Object, nullable TString) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_extern_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_extern_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_extern= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern_calls= for (self: AExternInitPropdef, nullable AExternCalls) */
void parser_prod__AExternInitPropdef__n_extern_calls_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCalls */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val = var_node; /* _n_extern_calls on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExternCalls> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExternCalls(AExternCalls)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExternCalls(AExternCalls)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCalls(AExternCalls)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern_calls= for (self: Object, nullable AExternCalls) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_extern_calls_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_extern_calls_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_extern_calls= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern_code_block= for (self: AExternInitPropdef, nullable AExternCodeBlock) */
void parser_prod__AExternInitPropdef__n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AExternInitPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AExternCodeBlock> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AExternInitPropdef__n_extern_code_block_61d(val* self, val* p0) {
parser_prod__AExternInitPropdef__n_extern_code_block_61d(self, p0); /* Direct call parser_prod#AExternInitPropdef#n_extern_code_block= on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#visit_all for (self: AExternInitPropdef, Visitor) */
void parser_prod__AExternInitPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : nullable TKwnew */;
val* var4 /* : nullable AMethid */;
val* var5 /* : nullable ASignature */;
val* var6 /* : nullable AAnnotations */;
val* var7 /* : nullable TString */;
val* var8 /* : nullable AExternCalls */;
val* var9 /* : nullable AExternCodeBlock */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern].val; /* _n_extern on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternInitPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternInitPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternInitPropdef__visit_all(val* self, val* p0) {
parser_prod__AExternInitPropdef__visit_all(self, p0); /* Direct call parser_prod#AExternInitPropdef#visit_all on <self:Object(AExternInitPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#init_amainmethpropdef for (self: AMainMethPropdef, nullable TKwredef, nullable AExpr) */
void parser_prod__AMainMethPropdef__init_amainmethpropdef(val* self, val* p0, val* p1) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_block /* var n_block: nullable AExpr */;
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
var_n_kwredef = p0;
var_n_block = p1;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMainMethPropdef> */
var = NULL;
if (var_n_kwredef == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var) on <var_n_kwredef:nullable TKwredef> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMainMethPropdef> */
var8 = NULL;
if (var_n_block == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var8) on <var_n_block:nullable AExpr> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL15:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#init_amainmethpropdef for (self: Object, nullable TKwredef, nullable AExpr) */
void VIRTUAL_parser_prod__AMainMethPropdef__init_amainmethpropdef(val* self, val* p0, val* p1) {
parser_prod__AMainMethPropdef__init_amainmethpropdef(self, p0, p1); /* Direct call parser_prod#AMainMethPropdef#init_amainmethpropdef on <self:Object(AMainMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#replace_child for (self: AMainMethPropdef, ANode, nullable ANode) */
void parser_prod__AMainMethPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwredef */;
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
var = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwredef(TKwredef)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwredef */
cltype = type_nullable_parser_nodes__TKwredef.color;
idtype = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwredef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1918);
show_backtrace(1);
}
{
parser_prod__AMainMethPropdef__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AMainMethPropdef#n_kwredef= on <self:AMainMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
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
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1922);
show_backtrace(1);
}
{
parser_prod__AMainMethPropdef__n_block_61d(self, var_new_child); /* Direct call parser_prod#AMainMethPropdef#n_block= on <self:AMainMethPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMainMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMainMethPropdef__replace_child(self, p0, p1); /* Direct call parser_prod#AMainMethPropdef#replace_child on <self:Object(AMainMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_kwredef= for (self: AMainMethPropdef, nullable TKwredef) */
void parser_prod__AMainMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AMainMethPropdef> */
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
/* method parser_prod#AMainMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AMainMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AMainMethPropdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#AMainMethPropdef#n_kwredef= on <self:Object(AMainMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_block= for (self: AMainMethPropdef, nullable AExpr) */
void parser_prod__AMainMethPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AMainMethPropdef> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExpr(AExpr)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr(AExpr)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AMainMethPropdef__n_block_61d(val* self, val* p0) {
parser_prod__AMainMethPropdef__n_block_61d(self, p0); /* Direct call parser_prod#AMainMethPropdef#n_block= on <self:Object(AMainMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#visit_all for (self: AMainMethPropdef, Visitor) */
void parser_prod__AMainMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMainMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AMainMethPropdef__visit_all(self, p0); /* Direct call parser_prod#AMainMethPropdef#visit_all on <self:Object(AMainMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#init_atypepropdef for (self: ATypePropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwtype, nullable TClassid, nullable AType, nullable AAnnotations) */
void parser_prod__ATypePropdef__init_atypepropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwtype /* var n_kwtype: nullable TKwtype */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_type /* var n_type: nullable AType */;
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
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwtype = p3;
var_n_id = p4;
var_n_type = p5;
var_n_annotations = p6;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:ATypePropdef> */
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
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:ATypePropdef> */
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
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1960);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ATypePropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1961);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1962);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ATypePropdef> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1963);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwtype->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL17:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1964);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val = var_n_id; /* _n_id on <self:ATypePropdef> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1965);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL18:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1966);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val = var_n_type; /* _n_type on <self:ATypePropdef> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1967);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL19:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATypePropdef> */
var20 = NULL;
if (var_n_annotations == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var20) on <var_n_annotations:nullable AAnnotations> */
var_other = var20;
{
var25 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var24 = var25;
}
var26 = !var24;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL27:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#init_atypepropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwtype, nullable TClassid, nullable AType, nullable AAnnotations) */
void VIRTUAL_parser_prod__ATypePropdef__init_atypepropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
parser_prod__ATypePropdef__init_atypepropdef(self, p0, p1, p2, p3, p4, p5, p6); /* Direct call parser_prod#ATypePropdef#init_atypepropdef on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#replace_child for (self: ATypePropdef, ANode, nullable ANode) */
void parser_prod__ATypePropdef__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : TKwtype */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : TClassid */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : AType */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
val* var63 /* : nullable AAnnotations */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:ATypePropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1975);
show_backtrace(1);
}
{
parser_prod__ATypePropdef__n_doc_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_doc= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1979);
show_backtrace(1);
}
{
parser_prod__ATypePropdef__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_kwredef= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype27 = type_parser_nodes__AVisibility.color;
idtype28 = type_parser_nodes__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1983);
show_backtrace(1);
}
{
parser_prod__ATypePropdef__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_visibility= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1986);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TKwtype> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TKwtype> */
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
/* <var_new_child:nullable ANode> isa TKwtype */
cltype38 = type_parser_nodes__TKwtype.color;
idtype39 = type_parser_nodes__TKwtype.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtype", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1987);
show_backtrace(1);
}
{
parser_prod__ATypePropdef__n_kwtype_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_kwtype= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1990);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:TClassid> */
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
/* <var_new_child:nullable ANode> isa TClassid */
cltype49 = type_parser_nodes__TClassid.color;
idtype50 = type_parser_nodes__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1991);
show_backtrace(1);
}
{
parser_prod__ATypePropdef__n_id_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_id= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1994);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:AType> */
var58 = var52 == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
/* <var_new_child:nullable ANode> isa AType */
cltype60 = type_parser_nodes__AType.color;
idtype61 = type_parser_nodes__AType.id;
if(var_new_child == NULL) {
var59 = 0;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1995);
show_backtrace(1);
}
{
parser_prod__ATypePropdef__n_type_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_type= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
if (var63 == NULL) {
var64 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var63,var_old_child) on <var63:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:nullable AAnnotations(AAnnotations)> */
var69 = var63 == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype71 = type_nullable_parser_nodes__AAnnotations.color;
idtype72 = type_nullable_parser_nodes__AAnnotations.id;
if(var_new_child == NULL) {
var70 = 1;
} else {
if(cltype71 >= var_new_child->type->table_size) {
var70 = 0;
} else {
var70 = var_new_child->type->type_table[cltype71] == idtype72;
}
}
if (unlikely(!var70)) {
var_class_name73 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 1999);
show_backtrace(1);
}
{
parser_prod__ATypePropdef__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_annotations= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ATypePropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__ATypePropdef__replace_child(self, p0, p1); /* Direct call parser_prod#ATypePropdef#replace_child on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_doc= for (self: ATypePropdef, nullable ADoc) */
void parser_prod__ATypePropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__ATypePropdef__n_doc_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_doc_61d(self, p0); /* Direct call parser_prod#ATypePropdef#n_doc= on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwredef= for (self: ATypePropdef, nullable TKwredef) */
void parser_prod__ATypePropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__ATypePropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#ATypePropdef#n_kwredef= on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_visibility= for (self: ATypePropdef, nullable AVisibility) */
void parser_prod__ATypePropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_node; /* _n_visibility on <self:ATypePropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2017);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__ATypePropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_visibility_61d(self, p0); /* Direct call parser_prod#ATypePropdef#n_visibility= on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwtype= for (self: ATypePropdef, TKwtype) */
void parser_prod__ATypePropdef__n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val = var_node; /* _n_kwtype on <self:ATypePropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwtype> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtype> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwtype= for (self: Object, TKwtype) */
void VIRTUAL_parser_prod__ATypePropdef__n_kwtype_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_kwtype_61d(self, p0); /* Direct call parser_prod#ATypePropdef#n_kwtype= on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_id= for (self: ATypePropdef, TClassid) */
void parser_prod__ATypePropdef__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val = var_node; /* _n_id on <self:ATypePropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_prod__ATypePropdef__n_id_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_id_61d(self, p0); /* Direct call parser_prod#ATypePropdef#n_id= on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_type= for (self: ATypePropdef, AType) */
void parser_prod__ATypePropdef__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val = var_node; /* _n_type on <self:ATypePropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ATypePropdef__n_type_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_type_61d(self, p0); /* Direct call parser_prod#ATypePropdef#n_type= on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_annotations= for (self: ATypePropdef, nullable AAnnotations) */
void parser_prod__ATypePropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ATypePropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__ATypePropdef__n_annotations_61d(self, p0); /* Direct call parser_prod#ATypePropdef#n_annotations= on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#visit_all for (self: ATypePropdef, Visitor) */
void parser_prod__ATypePropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwtype */;
val* var4 /* : TClassid */;
val* var5 /* : AType */;
val* var6 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:ATypePropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2046);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2047);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2048);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ATypePropdef__visit_all(val* self, val* p0) {
parser_prod__ATypePropdef__visit_all(self, p0); /* Direct call parser_prod#ATypePropdef#visit_all on <self:Object(ATypePropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AReadAble#init_areadable for (self: AReadAble, nullable TKwredef, nullable TKwreadable) */
void parser_prod__AReadAble__init_areadable(val* self, val* p0, val* p1) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_kwreadable /* var n_kwreadable: nullable TKwreadable */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwredef = p0;
var_n_kwreadable = p1;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AReadAble> */
var = NULL;
if (var_n_kwredef == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var) on <var_n_kwredef:nullable TKwredef> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL7:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwreadable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2060);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val = var_n_kwreadable; /* _n_kwreadable on <self:AReadAble> */
if (var_n_kwreadable == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2061);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwreadable,self) on <var_n_kwreadable:nullable TKwreadable> */
if (unlikely(var_n_kwreadable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwreadable->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwreadable:nullable TKwreadable> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AReadAble#init_areadable for (self: Object, nullable TKwredef, nullable TKwreadable) */
void VIRTUAL_parser_prod__AReadAble__init_areadable(val* self, val* p0, val* p1) {
parser_prod__AReadAble__init_areadable(self, p0, p1); /* Direct call parser_prod#AReadAble#init_areadable on <self:Object(AReadAble)>*/
RET_LABEL:;
}
/* method parser_prod#AReadAble#replace_child for (self: AReadAble, ANode, nullable ANode) */
void parser_prod__AReadAble__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwredef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TKwreadable */;
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
var = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AReadAble> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwredef(TKwredef)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwredef */
cltype = type_nullable_parser_nodes__TKwredef.color;
idtype = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwredef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2067);
show_backtrace(1);
}
{
parser_prod__AReadAble__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AReadAble#n_kwredef= on <self:AReadAble>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val; /* _n_kwreadable on <self:AReadAble> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwreadable");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2070);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwreadable> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwreadable> */
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
/* <var_new_child:nullable ANode> isa TKwreadable */
cltype16 = type_parser_nodes__TKwreadable.color;
idtype17 = type_parser_nodes__TKwreadable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwreadable", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2071);
show_backtrace(1);
}
{
parser_prod__AReadAble__n_kwreadable_61d(self, var_new_child); /* Direct call parser_prod#AReadAble#n_kwreadable= on <self:AReadAble>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AReadAble#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AReadAble__replace_child(val* self, val* p0, val* p1) {
parser_prod__AReadAble__replace_child(self, p0, p1); /* Direct call parser_prod#AReadAble#replace_child on <self:Object(AReadAble)>*/
RET_LABEL:;
}
/* method parser_prod#AReadAble#n_kwredef= for (self: AReadAble, nullable TKwredef) */
void parser_prod__AReadAble__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_node; /* _n_kwredef on <self:AReadAble> */
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
/* method parser_prod#AReadAble#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AReadAble__n_kwredef_61d(val* self, val* p0) {
parser_prod__AReadAble__n_kwredef_61d(self, p0); /* Direct call parser_prod#AReadAble#n_kwredef= on <self:Object(AReadAble)>*/
RET_LABEL:;
}
/* method parser_prod#AReadAble#n_kwreadable= for (self: AReadAble, TKwreadable) */
void parser_prod__AReadAble__n_kwreadable_61d(val* self, val* p0) {
val* var_node /* var node: TKwreadable */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val = var_node; /* _n_kwreadable on <self:AReadAble> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwreadable> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwreadable> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AReadAble#n_kwreadable= for (self: Object, TKwreadable) */
void VIRTUAL_parser_prod__AReadAble__n_kwreadable_61d(val* self, val* p0) {
parser_prod__AReadAble__n_kwreadable_61d(self, p0); /* Direct call parser_prod#AReadAble#n_kwreadable= on <self:Object(AReadAble)>*/
RET_LABEL:;
}
/* method parser_prod#AReadAble#visit_all for (self: AReadAble, Visitor) */
void parser_prod__AReadAble__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : TKwreadable */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AReadAble> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AReadAble___n_kwreadable].val; /* _n_kwreadable on <self:AReadAble> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwreadable");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2091);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AReadAble#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AReadAble__visit_all(val* self, val* p0) {
parser_prod__AReadAble__visit_all(self, p0); /* Direct call parser_prod#AReadAble#visit_all on <self:Object(AReadAble)>*/
RET_LABEL:;
}
/* method parser_prod#AWriteAble#init_awriteable for (self: AWriteAble, nullable TKwredef, nullable AVisibility, nullable TKwwritable) */
void parser_prod__AWriteAble__init_awriteable(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwwritable /* var n_kwwritable: nullable TKwwritable */;
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
var_n_kwredef = p0;
var_n_visibility = p1;
var_n_kwwritable = p2;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AWriteAble> */
var = NULL;
if (var_n_kwredef == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var) on <var_n_kwredef:nullable TKwredef> */
var_other = var;
{
var5 = ((short int (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AWriteAble> */
var8 = NULL;
if (var_n_visibility == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_visibility,var8) on <var_n_visibility:nullable AVisibility> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_n_visibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_visibility, var_other) /* == on <var_n_visibility:nullable AVisibility(AVisibility)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility(AVisibility)> */
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility(AVisibility)> */
RET_LABEL15:(void)0;
}
}
} else {
}
if (unlikely(var_n_kwwritable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2105);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val = var_n_kwwritable; /* _n_kwwritable on <self:AWriteAble> */
if (var_n_kwwritable == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2106);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwwritable,self) on <var_n_kwwritable:nullable TKwwritable> */
if (unlikely(var_n_kwwritable == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_kwwritable->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwwritable:nullable TKwwritable> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWriteAble#init_awriteable for (self: Object, nullable TKwredef, nullable AVisibility, nullable TKwwritable) */
void VIRTUAL_parser_prod__AWriteAble__init_awriteable(val* self, val* p0, val* p1, val* p2) {
parser_prod__AWriteAble__init_awriteable(self, p0, p1, p2); /* Direct call parser_prod#AWriteAble#init_awriteable on <self:Object(AWriteAble)>*/
RET_LABEL:;
}
/* method parser_prod#AWriteAble#replace_child for (self: AWriteAble, ANode, nullable ANode) */
void parser_prod__AWriteAble__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwredef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AVisibility */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwwritable */;
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
var = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AWriteAble> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwredef(TKwredef)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwredef */
cltype = type_nullable_parser_nodes__TKwredef.color;
idtype = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwredef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2112);
show_backtrace(1);
}
{
parser_prod__AWriteAble__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AWriteAble#n_kwredef= on <self:AWriteAble>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAble___n_visibility].val; /* _n_visibility on <self:AWriteAble> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AVisibility(AVisibility)> */
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
/* <var_new_child:nullable ANode> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AVisibility", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2116);
show_backtrace(1);
}
{
parser_prod__AWriteAble__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AWriteAble#n_visibility= on <self:AWriteAble>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val; /* _n_kwwritable on <self:AWriteAble> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwritable");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2119);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwwritable> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwwritable> */
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
/* <var_new_child:nullable ANode> isa TKwwritable */
cltype27 = type_parser_nodes__TKwwritable.color;
idtype28 = type_parser_nodes__TKwwritable.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwwritable", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2120);
show_backtrace(1);
}
{
parser_prod__AWriteAble__n_kwwritable_61d(self, var_new_child); /* Direct call parser_prod#AWriteAble#n_kwwritable= on <self:AWriteAble>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AWriteAble#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AWriteAble__replace_child(val* self, val* p0, val* p1) {
parser_prod__AWriteAble__replace_child(self, p0, p1); /* Direct call parser_prod#AWriteAble#replace_child on <self:Object(AWriteAble)>*/
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_kwredef= for (self: AWriteAble, nullable TKwredef) */
void parser_prod__AWriteAble__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val = var_node; /* _n_kwredef on <self:AWriteAble> */
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
/* method parser_prod#AWriteAble#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AWriteAble__n_kwredef_61d(val* self, val* p0) {
parser_prod__AWriteAble__n_kwredef_61d(self, p0); /* Direct call parser_prod#AWriteAble#n_kwredef= on <self:Object(AWriteAble)>*/
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_visibility= for (self: AWriteAble, nullable AVisibility) */
void parser_prod__AWriteAble__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAble___n_visibility].val = var_node; /* _n_visibility on <self:AWriteAble> */
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
/* method parser_prod#AWriteAble#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AWriteAble__n_visibility_61d(val* self, val* p0) {
parser_prod__AWriteAble__n_visibility_61d(self, p0); /* Direct call parser_prod#AWriteAble#n_visibility= on <self:Object(AWriteAble)>*/
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_kwwritable= for (self: AWriteAble, TKwwritable) */
void parser_prod__AWriteAble__n_kwwritable_61d(val* self, val* p0) {
val* var_node /* var node: TKwwritable */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val = var_node; /* _n_kwwritable on <self:AWriteAble> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwwritable> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwwritable> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AWriteAble#n_kwwritable= for (self: Object, TKwwritable) */
void VIRTUAL_parser_prod__AWriteAble__n_kwwritable_61d(val* self, val* p0) {
parser_prod__AWriteAble__n_kwwritable_61d(self, p0); /* Direct call parser_prod#AWriteAble#n_kwwritable= on <self:Object(AWriteAble)>*/
RET_LABEL:;
}
/* method parser_prod#AWriteAble#visit_all for (self: AWriteAble, Visitor) */
void parser_prod__AWriteAble__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : nullable AVisibility */;
val* var2 /* : TKwwritable */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAble___n_kwredef].val; /* _n_kwredef on <self:AWriteAble> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAble___n_visibility].val; /* _n_visibility on <self:AWriteAble> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AWriteAble___n_kwwritable].val; /* _n_kwwritable on <self:AWriteAble> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwwritable");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2146);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AWriteAble#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AWriteAble__visit_all(val* self, val* p0) {
parser_prod__AWriteAble__visit_all(self, p0); /* Direct call parser_prod#AWriteAble#visit_all on <self:Object(AWriteAble)>*/
RET_LABEL:;
}
/* method parser_prod#AIdMethid#init_aidmethid for (self: AIdMethid, nullable TId) */
void parser_prod__AIdMethid__init_aidmethid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2154);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val = var_n_id; /* _n_id on <self:AIdMethid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2155);
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
/* method parser_prod#AIdMethid#init_aidmethid for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AIdMethid__init_aidmethid(val* self, val* p0) {
parser_prod__AIdMethid__init_aidmethid(self, p0); /* Direct call parser_prod#AIdMethid#init_aidmethid on <self:Object(AIdMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdMethid#replace_child for (self: AIdMethid, ANode, nullable ANode) */
void parser_prod__AIdMethid__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2160);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2161);
show_backtrace(1);
}
{
parser_prod__AIdMethid__n_id_61d(self, var_new_child); /* Direct call parser_prod#AIdMethid#n_id= on <self:AIdMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIdMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIdMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AIdMethid#replace_child on <self:Object(AIdMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdMethid#n_id= for (self: AIdMethid, TId) */
void parser_prod__AIdMethid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val = var_node; /* _n_id on <self:AIdMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AIdMethid__n_id_61d(val* self, val* p0) {
parser_prod__AIdMethid__n_id_61d(self, p0); /* Direct call parser_prod#AIdMethid#n_id= on <self:Object(AIdMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AIdMethid#visit_all for (self: AIdMethid, Visitor) */
void parser_prod__AIdMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2175);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIdMethid__visit_all(val* self, val* p0) {
parser_prod__AIdMethid__visit_all(self, p0); /* Direct call parser_prod#AIdMethid#visit_all on <self:Object(AIdMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APlusMethid#init_aplusmethid for (self: APlusMethid, nullable TPlus) */
void parser_prod__APlusMethid__init_aplusmethid(val* self, val* p0) {
val* var_n_plus /* var n_plus: nullable TPlus */;
var_n_plus = p0;
if (unlikely(var_n_plus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2183);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val = var_n_plus; /* _n_plus on <self:APlusMethid> */
if (var_n_plus == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2184);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_plus,self) on <var_n_plus:nullable TPlus> */
if (unlikely(var_n_plus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_plus->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_plus:nullable TPlus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#init_aplusmethid for (self: Object, nullable TPlus) */
void VIRTUAL_parser_prod__APlusMethid__init_aplusmethid(val* self, val* p0) {
parser_prod__APlusMethid__init_aplusmethid(self, p0); /* Direct call parser_prod#APlusMethid#init_aplusmethid on <self:Object(APlusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APlusMethid#replace_child for (self: APlusMethid, ANode, nullable ANode) */
void parser_prod__APlusMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPlus */;
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
var = self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_plus");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2189);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TPlus> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TPlus> */
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
/* <var_new_child:nullable ANode> isa TPlus */
cltype = type_parser_nodes__TPlus.color;
idtype = type_parser_nodes__TPlus.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPlus", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2190);
show_backtrace(1);
}
{
parser_prod__APlusMethid__n_plus_61d(self, var_new_child); /* Direct call parser_prod#APlusMethid#n_plus= on <self:APlusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APlusMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__APlusMethid__replace_child(self, p0, p1); /* Direct call parser_prod#APlusMethid#replace_child on <self:Object(APlusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APlusMethid#n_plus= for (self: APlusMethid, TPlus) */
void parser_prod__APlusMethid__n_plus_61d(val* self, val* p0) {
val* var_node /* var node: TPlus */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val = var_node; /* _n_plus on <self:APlusMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TPlus> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TPlus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#n_plus= for (self: Object, TPlus) */
void VIRTUAL_parser_prod__APlusMethid__n_plus_61d(val* self, val* p0) {
parser_prod__APlusMethid__n_plus_61d(self, p0); /* Direct call parser_prod#APlusMethid#n_plus= on <self:Object(APlusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APlusMethid#visit_all for (self: APlusMethid, Visitor) */
void parser_prod__APlusMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPlus */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_plus");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2204);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APlusMethid__visit_all(val* self, val* p0) {
parser_prod__APlusMethid__visit_all(self, p0); /* Direct call parser_prod#APlusMethid#visit_all on <self:Object(APlusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#init_aminusmethid for (self: AMinusMethid, nullable TMinus) */
void parser_prod__AMinusMethid__init_aminusmethid(val* self, val* p0) {
val* var_n_minus /* var n_minus: nullable TMinus */;
var_n_minus = p0;
if (unlikely(var_n_minus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2212);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val = var_n_minus; /* _n_minus on <self:AMinusMethid> */
if (var_n_minus == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2213);
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
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#init_aminusmethid for (self: Object, nullable TMinus) */
void VIRTUAL_parser_prod__AMinusMethid__init_aminusmethid(val* self, val* p0) {
parser_prod__AMinusMethid__init_aminusmethid(self, p0); /* Direct call parser_prod#AMinusMethid#init_aminusmethid on <self:Object(AMinusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#replace_child for (self: AMinusMethid, ANode, nullable ANode) */
void parser_prod__AMinusMethid__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2218);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2219);
show_backtrace(1);
}
{
parser_prod__AMinusMethid__n_minus_61d(self, var_new_child); /* Direct call parser_prod#AMinusMethid#n_minus= on <self:AMinusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMinusMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMinusMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AMinusMethid#replace_child on <self:Object(AMinusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#n_minus= for (self: AMinusMethid, TMinus) */
void parser_prod__AMinusMethid__n_minus_61d(val* self, val* p0) {
val* var_node /* var node: TMinus */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val = var_node; /* _n_minus on <self:AMinusMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TMinus> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TMinus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#n_minus= for (self: Object, TMinus) */
void VIRTUAL_parser_prod__AMinusMethid__n_minus_61d(val* self, val* p0) {
parser_prod__AMinusMethid__n_minus_61d(self, p0); /* Direct call parser_prod#AMinusMethid#n_minus= on <self:Object(AMinusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#visit_all for (self: AMinusMethid, Visitor) */
void parser_prod__AMinusMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinus */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2233);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMinusMethid__visit_all(val* self, val* p0) {
parser_prod__AMinusMethid__visit_all(self, p0); /* Direct call parser_prod#AMinusMethid#visit_all on <self:Object(AMinusMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarMethid#init_astarmethid for (self: AStarMethid, nullable TStar) */
void parser_prod__AStarMethid__init_astarmethid(val* self, val* p0) {
val* var_n_star /* var n_star: nullable TStar */;
var_n_star = p0;
if (unlikely(var_n_star == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2241);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val = var_n_star; /* _n_star on <self:AStarMethid> */
if (var_n_star == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2242);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_star,self) on <var_n_star:nullable TStar> */
if (unlikely(var_n_star == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_star->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_star:nullable TStar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#init_astarmethid for (self: Object, nullable TStar) */
void VIRTUAL_parser_prod__AStarMethid__init_astarmethid(val* self, val* p0) {
parser_prod__AStarMethid__init_astarmethid(self, p0); /* Direct call parser_prod#AStarMethid#init_astarmethid on <self:Object(AStarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarMethid#replace_child for (self: AStarMethid, ANode, nullable ANode) */
void parser_prod__AStarMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStar */;
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
var = self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_star");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2247);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TStar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TStar> */
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
/* <var_new_child:nullable ANode> isa TStar */
cltype = type_parser_nodes__TStar.color;
idtype = type_parser_nodes__TStar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2248);
show_backtrace(1);
}
{
parser_prod__AStarMethid__n_star_61d(self, var_new_child); /* Direct call parser_prod#AStarMethid#n_star= on <self:AStarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AStarMethid#replace_child on <self:Object(AStarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarMethid#n_star= for (self: AStarMethid, TStar) */
void parser_prod__AStarMethid__n_star_61d(val* self, val* p0) {
val* var_node /* var node: TStar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val = var_node; /* _n_star on <self:AStarMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TStar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TStar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#n_star= for (self: Object, TStar) */
void VIRTUAL_parser_prod__AStarMethid__n_star_61d(val* self, val* p0) {
parser_prod__AStarMethid__n_star_61d(self, p0); /* Direct call parser_prod#AStarMethid#n_star= on <self:Object(AStarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarMethid#visit_all for (self: AStarMethid, Visitor) */
void parser_prod__AStarMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStar */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_star");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2262);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarMethid__visit_all(val* self, val* p0) {
parser_prod__AStarMethid__visit_all(self, p0); /* Direct call parser_prod#AStarMethid#visit_all on <self:Object(AStarMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#init_aslashmethid for (self: ASlashMethid, nullable TSlash) */
void parser_prod__ASlashMethid__init_aslashmethid(val* self, val* p0) {
val* var_n_slash /* var n_slash: nullable TSlash */;
var_n_slash = p0;
if (unlikely(var_n_slash == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2270);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val = var_n_slash; /* _n_slash on <self:ASlashMethid> */
if (var_n_slash == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2271);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_slash,self) on <var_n_slash:nullable TSlash> */
if (unlikely(var_n_slash == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_slash->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_slash:nullable TSlash> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#init_aslashmethid for (self: Object, nullable TSlash) */
void VIRTUAL_parser_prod__ASlashMethid__init_aslashmethid(val* self, val* p0) {
parser_prod__ASlashMethid__init_aslashmethid(self, p0); /* Direct call parser_prod#ASlashMethid#init_aslashmethid on <self:Object(ASlashMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#replace_child for (self: ASlashMethid, ANode, nullable ANode) */
void parser_prod__ASlashMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TSlash */;
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
var = self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_slash");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2276);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TSlash> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TSlash> */
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
/* <var_new_child:nullable ANode> isa TSlash */
cltype = type_parser_nodes__TSlash.color;
idtype = type_parser_nodes__TSlash.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TSlash", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2277);
show_backtrace(1);
}
{
parser_prod__ASlashMethid__n_slash_61d(self, var_new_child); /* Direct call parser_prod#ASlashMethid#n_slash= on <self:ASlashMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASlashMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASlashMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ASlashMethid#replace_child on <self:Object(ASlashMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#n_slash= for (self: ASlashMethid, TSlash) */
void parser_prod__ASlashMethid__n_slash_61d(val* self, val* p0) {
val* var_node /* var node: TSlash */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val = var_node; /* _n_slash on <self:ASlashMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TSlash> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TSlash> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#n_slash= for (self: Object, TSlash) */
void VIRTUAL_parser_prod__ASlashMethid__n_slash_61d(val* self, val* p0) {
parser_prod__ASlashMethid__n_slash_61d(self, p0); /* Direct call parser_prod#ASlashMethid#n_slash= on <self:Object(ASlashMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#visit_all for (self: ASlashMethid, Visitor) */
void parser_prod__ASlashMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TSlash */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_slash");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2291);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASlashMethid__visit_all(val* self, val* p0) {
parser_prod__ASlashMethid__visit_all(self, p0); /* Direct call parser_prod#ASlashMethid#visit_all on <self:Object(ASlashMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APercentMethid#init_apercentmethid for (self: APercentMethid, nullable TPercent) */
void parser_prod__APercentMethid__init_apercentmethid(val* self, val* p0) {
val* var_n_percent /* var n_percent: nullable TPercent */;
var_n_percent = p0;
if (unlikely(var_n_percent == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2299);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val = var_n_percent; /* _n_percent on <self:APercentMethid> */
if (var_n_percent == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2300);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_percent,self) on <var_n_percent:nullable TPercent> */
if (unlikely(var_n_percent == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_percent->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_percent:nullable TPercent> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#init_apercentmethid for (self: Object, nullable TPercent) */
void VIRTUAL_parser_prod__APercentMethid__init_apercentmethid(val* self, val* p0) {
parser_prod__APercentMethid__init_apercentmethid(self, p0); /* Direct call parser_prod#APercentMethid#init_apercentmethid on <self:Object(APercentMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APercentMethid#replace_child for (self: APercentMethid, ANode, nullable ANode) */
void parser_prod__APercentMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPercent */;
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
var = self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_percent");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2305);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TPercent> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TPercent> */
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
/* <var_new_child:nullable ANode> isa TPercent */
cltype = type_parser_nodes__TPercent.color;
idtype = type_parser_nodes__TPercent.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPercent", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2306);
show_backtrace(1);
}
{
parser_prod__APercentMethid__n_percent_61d(self, var_new_child); /* Direct call parser_prod#APercentMethid#n_percent= on <self:APercentMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APercentMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__APercentMethid__replace_child(self, p0, p1); /* Direct call parser_prod#APercentMethid#replace_child on <self:Object(APercentMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APercentMethid#n_percent= for (self: APercentMethid, TPercent) */
void parser_prod__APercentMethid__n_percent_61d(val* self, val* p0) {
val* var_node /* var node: TPercent */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val = var_node; /* _n_percent on <self:APercentMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TPercent> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TPercent> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#n_percent= for (self: Object, TPercent) */
void VIRTUAL_parser_prod__APercentMethid__n_percent_61d(val* self, val* p0) {
parser_prod__APercentMethid__n_percent_61d(self, p0); /* Direct call parser_prod#APercentMethid#n_percent= on <self:Object(APercentMethid)>*/
RET_LABEL:;
}
/* method parser_prod#APercentMethid#visit_all for (self: APercentMethid, Visitor) */
void parser_prod__APercentMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPercent */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_percent");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2320);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APercentMethid__visit_all(val* self, val* p0) {
parser_prod__APercentMethid__visit_all(self, p0); /* Direct call parser_prod#APercentMethid#visit_all on <self:Object(APercentMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AEqMethid#init_aeqmethid for (self: AEqMethid, nullable TEq) */
void parser_prod__AEqMethid__init_aeqmethid(val* self, val* p0) {
val* var_n_eq /* var n_eq: nullable TEq */;
var_n_eq = p0;
if (unlikely(var_n_eq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2328);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val = var_n_eq; /* _n_eq on <self:AEqMethid> */
if (var_n_eq == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2329);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_eq,self) on <var_n_eq:nullable TEq> */
if (unlikely(var_n_eq == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_eq->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_eq:nullable TEq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#init_aeqmethid for (self: Object, nullable TEq) */
void VIRTUAL_parser_prod__AEqMethid__init_aeqmethid(val* self, val* p0) {
parser_prod__AEqMethid__init_aeqmethid(self, p0); /* Direct call parser_prod#AEqMethid#init_aeqmethid on <self:Object(AEqMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AEqMethid#replace_child for (self: AEqMethid, ANode, nullable ANode) */
void parser_prod__AEqMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TEq */;
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
var = self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eq");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2334);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TEq> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TEq> */
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
/* <var_new_child:nullable ANode> isa TEq */
cltype = type_parser_nodes__TEq.color;
idtype = type_parser_nodes__TEq.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TEq", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2335);
show_backtrace(1);
}
{
parser_prod__AEqMethid__n_eq_61d(self, var_new_child); /* Direct call parser_prod#AEqMethid#n_eq= on <self:AEqMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEqMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEqMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AEqMethid#replace_child on <self:Object(AEqMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AEqMethid#n_eq= for (self: AEqMethid, TEq) */
void parser_prod__AEqMethid__n_eq_61d(val* self, val* p0) {
val* var_node /* var node: TEq */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val = var_node; /* _n_eq on <self:AEqMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TEq> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TEq> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#n_eq= for (self: Object, TEq) */
void VIRTUAL_parser_prod__AEqMethid__n_eq_61d(val* self, val* p0) {
parser_prod__AEqMethid__n_eq_61d(self, p0); /* Direct call parser_prod#AEqMethid#n_eq= on <self:Object(AEqMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AEqMethid#visit_all for (self: AEqMethid, Visitor) */
void parser_prod__AEqMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TEq */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AEqMethid___n_eq].val; /* _n_eq on <self:AEqMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eq");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2349);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEqMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEqMethid__visit_all(val* self, val* p0) {
parser_prod__AEqMethid__visit_all(self, p0); /* Direct call parser_prod#AEqMethid#visit_all on <self:Object(AEqMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ANeMethid#init_anemethid for (self: ANeMethid, nullable TNe) */
void parser_prod__ANeMethid__init_anemethid(val* self, val* p0) {
val* var_n_ne /* var n_ne: nullable TNe */;
var_n_ne = p0;
if (unlikely(var_n_ne == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2357);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val = var_n_ne; /* _n_ne on <self:ANeMethid> */
if (var_n_ne == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2358);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ne,self) on <var_n_ne:nullable TNe> */
if (unlikely(var_n_ne == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_ne->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ne:nullable TNe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#init_anemethid for (self: Object, nullable TNe) */
void VIRTUAL_parser_prod__ANeMethid__init_anemethid(val* self, val* p0) {
parser_prod__ANeMethid__init_anemethid(self, p0); /* Direct call parser_prod#ANeMethid#init_anemethid on <self:Object(ANeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ANeMethid#replace_child for (self: ANeMethid, ANode, nullable ANode) */
void parser_prod__ANeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TNe */;
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
var = self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ne");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2363);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TNe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TNe> */
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
/* <var_new_child:nullable ANode> isa TNe */
cltype = type_parser_nodes__TNe.color;
idtype = type_parser_nodes__TNe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TNe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2364);
show_backtrace(1);
}
{
parser_prod__ANeMethid__n_ne_61d(self, var_new_child); /* Direct call parser_prod#ANeMethid#n_ne= on <self:ANeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANeMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ANeMethid#replace_child on <self:Object(ANeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ANeMethid#n_ne= for (self: ANeMethid, TNe) */
void parser_prod__ANeMethid__n_ne_61d(val* self, val* p0) {
val* var_node /* var node: TNe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val = var_node; /* _n_ne on <self:ANeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TNe> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TNe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#n_ne= for (self: Object, TNe) */
void VIRTUAL_parser_prod__ANeMethid__n_ne_61d(val* self, val* p0) {
parser_prod__ANeMethid__n_ne_61d(self, p0); /* Direct call parser_prod#ANeMethid#n_ne= on <self:Object(ANeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ANeMethid#visit_all for (self: ANeMethid, Visitor) */
void parser_prod__ANeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TNe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANeMethid___n_ne].val; /* _n_ne on <self:ANeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ne");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2378);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANeMethid__visit_all(val* self, val* p0) {
parser_prod__ANeMethid__visit_all(self, p0); /* Direct call parser_prod#ANeMethid#visit_all on <self:Object(ANeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALeMethid#init_alemethid for (self: ALeMethid, nullable TLe) */
void parser_prod__ALeMethid__init_alemethid(val* self, val* p0) {
val* var_n_le /* var n_le: nullable TLe */;
var_n_le = p0;
if (unlikely(var_n_le == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2386);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val = var_n_le; /* _n_le on <self:ALeMethid> */
if (var_n_le == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2387);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_le,self) on <var_n_le:nullable TLe> */
if (unlikely(var_n_le == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_le->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_le:nullable TLe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#init_alemethid for (self: Object, nullable TLe) */
void VIRTUAL_parser_prod__ALeMethid__init_alemethid(val* self, val* p0) {
parser_prod__ALeMethid__init_alemethid(self, p0); /* Direct call parser_prod#ALeMethid#init_alemethid on <self:Object(ALeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALeMethid#replace_child for (self: ALeMethid, ANode, nullable ANode) */
void parser_prod__ALeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLe */;
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
var = self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_le");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2392);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLe> */
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
/* <var_new_child:nullable ANode> isa TLe */
cltype = type_parser_nodes__TLe.color;
idtype = type_parser_nodes__TLe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2393);
show_backtrace(1);
}
{
parser_prod__ALeMethid__n_le_61d(self, var_new_child); /* Direct call parser_prod#ALeMethid#n_le= on <self:ALeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALeMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ALeMethid#replace_child on <self:Object(ALeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALeMethid#n_le= for (self: ALeMethid, TLe) */
void parser_prod__ALeMethid__n_le_61d(val* self, val* p0) {
val* var_node /* var node: TLe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val = var_node; /* _n_le on <self:ALeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLe> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#n_le= for (self: Object, TLe) */
void VIRTUAL_parser_prod__ALeMethid__n_le_61d(val* self, val* p0) {
parser_prod__ALeMethid__n_le_61d(self, p0); /* Direct call parser_prod#ALeMethid#n_le= on <self:Object(ALeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALeMethid#visit_all for (self: ALeMethid, Visitor) */
void parser_prod__ALeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALeMethid___n_le].val; /* _n_le on <self:ALeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_le");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2407);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALeMethid__visit_all(val* self, val* p0) {
parser_prod__ALeMethid__visit_all(self, p0); /* Direct call parser_prod#ALeMethid#visit_all on <self:Object(ALeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGeMethid#init_agemethid for (self: AGeMethid, nullable TGe) */
void parser_prod__AGeMethid__init_agemethid(val* self, val* p0) {
val* var_n_ge /* var n_ge: nullable TGe */;
var_n_ge = p0;
if (unlikely(var_n_ge == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2415);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val = var_n_ge; /* _n_ge on <self:AGeMethid> */
if (var_n_ge == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2416);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ge,self) on <var_n_ge:nullable TGe> */
if (unlikely(var_n_ge == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_ge->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ge:nullable TGe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#init_agemethid for (self: Object, nullable TGe) */
void VIRTUAL_parser_prod__AGeMethid__init_agemethid(val* self, val* p0) {
parser_prod__AGeMethid__init_agemethid(self, p0); /* Direct call parser_prod#AGeMethid#init_agemethid on <self:Object(AGeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGeMethid#replace_child for (self: AGeMethid, ANode, nullable ANode) */
void parser_prod__AGeMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGe */;
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
var = self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ge");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2421);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGe> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGe> */
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
/* <var_new_child:nullable ANode> isa TGe */
cltype = type_parser_nodes__TGe.color;
idtype = type_parser_nodes__TGe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2422);
show_backtrace(1);
}
{
parser_prod__AGeMethid__n_ge_61d(self, var_new_child); /* Direct call parser_prod#AGeMethid#n_ge= on <self:AGeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGeMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGeMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AGeMethid#replace_child on <self:Object(AGeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGeMethid#n_ge= for (self: AGeMethid, TGe) */
void parser_prod__AGeMethid__n_ge_61d(val* self, val* p0) {
val* var_node /* var node: TGe */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val = var_node; /* _n_ge on <self:AGeMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGe> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGe> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#n_ge= for (self: Object, TGe) */
void VIRTUAL_parser_prod__AGeMethid__n_ge_61d(val* self, val* p0) {
parser_prod__AGeMethid__n_ge_61d(self, p0); /* Direct call parser_prod#AGeMethid#n_ge= on <self:Object(AGeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGeMethid#visit_all for (self: AGeMethid, Visitor) */
void parser_prod__AGeMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGe */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGeMethid___n_ge].val; /* _n_ge on <self:AGeMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ge");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2436);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGeMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGeMethid__visit_all(val* self, val* p0) {
parser_prod__AGeMethid__visit_all(self, p0); /* Direct call parser_prod#AGeMethid#visit_all on <self:Object(AGeMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALtMethid#init_altmethid for (self: ALtMethid, nullable TLt) */
void parser_prod__ALtMethid__init_altmethid(val* self, val* p0) {
val* var_n_lt /* var n_lt: nullable TLt */;
var_n_lt = p0;
if (unlikely(var_n_lt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2444);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val = var_n_lt; /* _n_lt on <self:ALtMethid> */
if (var_n_lt == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2445);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_lt,self) on <var_n_lt:nullable TLt> */
if (unlikely(var_n_lt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_lt->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_lt:nullable TLt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#init_altmethid for (self: Object, nullable TLt) */
void VIRTUAL_parser_prod__ALtMethid__init_altmethid(val* self, val* p0) {
parser_prod__ALtMethid__init_altmethid(self, p0); /* Direct call parser_prod#ALtMethid#init_altmethid on <self:Object(ALtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALtMethid#replace_child for (self: ALtMethid, ANode, nullable ANode) */
void parser_prod__ALtMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLt */;
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
var = self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_lt");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2450);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLt> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLt> */
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
/* <var_new_child:nullable ANode> isa TLt */
cltype = type_parser_nodes__TLt.color;
idtype = type_parser_nodes__TLt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2451);
show_backtrace(1);
}
{
parser_prod__ALtMethid__n_lt_61d(self, var_new_child); /* Direct call parser_prod#ALtMethid#n_lt= on <self:ALtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALtMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALtMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ALtMethid#replace_child on <self:Object(ALtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALtMethid#n_lt= for (self: ALtMethid, TLt) */
void parser_prod__ALtMethid__n_lt_61d(val* self, val* p0) {
val* var_node /* var node: TLt */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val = var_node; /* _n_lt on <self:ALtMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLt> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#n_lt= for (self: Object, TLt) */
void VIRTUAL_parser_prod__ALtMethid__n_lt_61d(val* self, val* p0) {
parser_prod__ALtMethid__n_lt_61d(self, p0); /* Direct call parser_prod#ALtMethid#n_lt= on <self:Object(ALtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALtMethid#visit_all for (self: ALtMethid, Visitor) */
void parser_prod__ALtMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLt */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALtMethid___n_lt].val; /* _n_lt on <self:ALtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_lt");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2465);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALtMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALtMethid__visit_all(val* self, val* p0) {
parser_prod__ALtMethid__visit_all(self, p0); /* Direct call parser_prod#ALtMethid#visit_all on <self:Object(ALtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGtMethid#init_agtmethid for (self: AGtMethid, nullable TGt) */
void parser_prod__AGtMethid__init_agtmethid(val* self, val* p0) {
val* var_n_gt /* var n_gt: nullable TGt */;
var_n_gt = p0;
if (unlikely(var_n_gt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2473);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val = var_n_gt; /* _n_gt on <self:AGtMethid> */
if (var_n_gt == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2474);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_gt,self) on <var_n_gt:nullable TGt> */
if (unlikely(var_n_gt == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_gt->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_gt:nullable TGt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#init_agtmethid for (self: Object, nullable TGt) */
void VIRTUAL_parser_prod__AGtMethid__init_agtmethid(val* self, val* p0) {
parser_prod__AGtMethid__init_agtmethid(self, p0); /* Direct call parser_prod#AGtMethid#init_agtmethid on <self:Object(AGtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGtMethid#replace_child for (self: AGtMethid, ANode, nullable ANode) */
void parser_prod__AGtMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGt */;
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
var = self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gt");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2479);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGt> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGt> */
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
/* <var_new_child:nullable ANode> isa TGt */
cltype = type_parser_nodes__TGt.color;
idtype = type_parser_nodes__TGt.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGt", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2480);
show_backtrace(1);
}
{
parser_prod__AGtMethid__n_gt_61d(self, var_new_child); /* Direct call parser_prod#AGtMethid#n_gt= on <self:AGtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGtMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGtMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AGtMethid#replace_child on <self:Object(AGtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGtMethid#n_gt= for (self: AGtMethid, TGt) */
void parser_prod__AGtMethid__n_gt_61d(val* self, val* p0) {
val* var_node /* var node: TGt */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val = var_node; /* _n_gt on <self:AGtMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGt> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGt> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#n_gt= for (self: Object, TGt) */
void VIRTUAL_parser_prod__AGtMethid__n_gt_61d(val* self, val* p0) {
parser_prod__AGtMethid__n_gt_61d(self, p0); /* Direct call parser_prod#AGtMethid#n_gt= on <self:Object(AGtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGtMethid#visit_all for (self: AGtMethid, Visitor) */
void parser_prod__AGtMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGt */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGtMethid___n_gt].val; /* _n_gt on <self:AGtMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gt");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2494);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGtMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGtMethid__visit_all(val* self, val* p0) {
parser_prod__AGtMethid__visit_all(self, p0); /* Direct call parser_prod#AGtMethid#visit_all on <self:Object(AGtMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALlMethid#init_allmethid for (self: ALlMethid, nullable TLl) */
void parser_prod__ALlMethid__init_allmethid(val* self, val* p0) {
val* var_n_ll /* var n_ll: nullable TLl */;
var_n_ll = p0;
if (unlikely(var_n_ll == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2502);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val = var_n_ll; /* _n_ll on <self:ALlMethid> */
if (var_n_ll == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2503);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_ll,self) on <var_n_ll:nullable TLl> */
if (unlikely(var_n_ll == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_ll->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_ll:nullable TLl> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#init_allmethid for (self: Object, nullable TLl) */
void VIRTUAL_parser_prod__ALlMethid__init_allmethid(val* self, val* p0) {
parser_prod__ALlMethid__init_allmethid(self, p0); /* Direct call parser_prod#ALlMethid#init_allmethid on <self:Object(ALlMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALlMethid#replace_child for (self: ALlMethid, ANode, nullable ANode) */
void parser_prod__ALlMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TLl */;
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
var = self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ll");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2508);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TLl> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TLl> */
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
/* <var_new_child:nullable ANode> isa TLl */
cltype = type_parser_nodes__TLl.color;
idtype = type_parser_nodes__TLl.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TLl", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2509);
show_backtrace(1);
}
{
parser_prod__ALlMethid__n_ll_61d(self, var_new_child); /* Direct call parser_prod#ALlMethid#n_ll= on <self:ALlMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ALlMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ALlMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ALlMethid#replace_child on <self:Object(ALlMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALlMethid#n_ll= for (self: ALlMethid, TLl) */
void parser_prod__ALlMethid__n_ll_61d(val* self, val* p0) {
val* var_node /* var node: TLl */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val = var_node; /* _n_ll on <self:ALlMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TLl> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TLl> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#n_ll= for (self: Object, TLl) */
void VIRTUAL_parser_prod__ALlMethid__n_ll_61d(val* self, val* p0) {
parser_prod__ALlMethid__n_ll_61d(self, p0); /* Direct call parser_prod#ALlMethid#n_ll= on <self:Object(ALlMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ALlMethid#visit_all for (self: ALlMethid, Visitor) */
void parser_prod__ALlMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TLl */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ALlMethid___n_ll].val; /* _n_ll on <self:ALlMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ll");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2523);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ALlMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ALlMethid__visit_all(val* self, val* p0) {
parser_prod__ALlMethid__visit_all(self, p0); /* Direct call parser_prod#ALlMethid#visit_all on <self:Object(ALlMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGgMethid#init_aggmethid for (self: AGgMethid, nullable TGg) */
void parser_prod__AGgMethid__init_aggmethid(val* self, val* p0) {
val* var_n_gg /* var n_gg: nullable TGg */;
var_n_gg = p0;
if (unlikely(var_n_gg == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2531);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val = var_n_gg; /* _n_gg on <self:AGgMethid> */
if (var_n_gg == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2532);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_gg,self) on <var_n_gg:nullable TGg> */
if (unlikely(var_n_gg == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_gg->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_gg:nullable TGg> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#init_aggmethid for (self: Object, nullable TGg) */
void VIRTUAL_parser_prod__AGgMethid__init_aggmethid(val* self, val* p0) {
parser_prod__AGgMethid__init_aggmethid(self, p0); /* Direct call parser_prod#AGgMethid#init_aggmethid on <self:Object(AGgMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGgMethid#replace_child for (self: AGgMethid, ANode, nullable ANode) */
void parser_prod__AGgMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TGg */;
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
var = self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gg");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2537);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TGg> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TGg> */
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
/* <var_new_child:nullable ANode> isa TGg */
cltype = type_parser_nodes__TGg.color;
idtype = type_parser_nodes__TGg.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TGg", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2538);
show_backtrace(1);
}
{
parser_prod__AGgMethid__n_gg_61d(self, var_new_child); /* Direct call parser_prod#AGgMethid#n_gg= on <self:AGgMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AGgMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AGgMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AGgMethid#replace_child on <self:Object(AGgMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGgMethid#n_gg= for (self: AGgMethid, TGg) */
void parser_prod__AGgMethid__n_gg_61d(val* self, val* p0) {
val* var_node /* var node: TGg */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val = var_node; /* _n_gg on <self:AGgMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TGg> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TGg> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#n_gg= for (self: Object, TGg) */
void VIRTUAL_parser_prod__AGgMethid__n_gg_61d(val* self, val* p0) {
parser_prod__AGgMethid__n_gg_61d(self, p0); /* Direct call parser_prod#AGgMethid#n_gg= on <self:Object(AGgMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AGgMethid#visit_all for (self: AGgMethid, Visitor) */
void parser_prod__AGgMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TGg */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AGgMethid___n_gg].val; /* _n_gg on <self:AGgMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_gg");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2552);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AGgMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AGgMethid__visit_all(val* self, val* p0) {
parser_prod__AGgMethid__visit_all(self, p0); /* Direct call parser_prod#AGgMethid#visit_all on <self:Object(AGgMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#init_abramethid for (self: ABraMethid, nullable TObra, nullable TCbra) */
void parser_prod__ABraMethid__init_abramethid(val* self, val* p0, val* p1) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
var_n_obra = p0;
var_n_cbra = p1;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2561);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraMethid> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2562);
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
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2563);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraMethid> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2564);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#init_abramethid for (self: Object, nullable TObra, nullable TCbra) */
void VIRTUAL_parser_prod__ABraMethid__init_abramethid(val* self, val* p0, val* p1) {
parser_prod__ABraMethid__init_abramethid(self, p0, p1); /* Direct call parser_prod#ABraMethid#init_abramethid on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#replace_child for (self: ABraMethid, ANode, nullable ANode) */
void parser_prod__ABraMethid__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TCbra */;
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
var = self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2569);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2570);
show_backtrace(1);
}
{
parser_prod__ABraMethid__n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraMethid#n_obra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2573);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TCbra> */
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
/* <var_new_child:nullable ANode> isa TCbra */
cltype16 = type_parser_nodes__TCbra.color;
idtype17 = type_parser_nodes__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2574);
show_backtrace(1);
}
{
parser_prod__ABraMethid__n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraMethid#n_cbra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ABraMethid#replace_child on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_obra= for (self: ABraMethid, TObra) */
void parser_prod__ABraMethid__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val = var_node; /* _n_obra on <self:ABraMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ABraMethid__n_obra_61d(val* self, val* p0) {
parser_prod__ABraMethid__n_obra_61d(self, p0); /* Direct call parser_prod#ABraMethid#n_obra= on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_cbra= for (self: ABraMethid, TCbra) */
void parser_prod__ABraMethid__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ABraMethid__n_cbra_61d(val* self, val* p0) {
parser_prod__ABraMethid__n_cbra_61d(self, p0); /* Direct call parser_prod#ABraMethid#n_cbra= on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraMethid#visit_all for (self: ABraMethid, Visitor) */
void parser_prod__ABraMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2593);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2594);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraMethid__visit_all(val* self, val* p0) {
parser_prod__ABraMethid__visit_all(self, p0); /* Direct call parser_prod#ABraMethid#visit_all on <self:Object(ABraMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#init_astarshipmethid for (self: AStarshipMethid, nullable TStarship) */
void parser_prod__AStarshipMethid__init_astarshipmethid(val* self, val* p0) {
val* var_n_starship /* var n_starship: nullable TStarship */;
var_n_starship = p0;
if (unlikely(var_n_starship == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2602);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val = var_n_starship; /* _n_starship on <self:AStarshipMethid> */
if (var_n_starship == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2603);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_starship,self) on <var_n_starship:nullable TStarship> */
if (unlikely(var_n_starship == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_starship->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_starship:nullable TStarship> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#init_astarshipmethid for (self: Object, nullable TStarship) */
void VIRTUAL_parser_prod__AStarshipMethid__init_astarshipmethid(val* self, val* p0) {
parser_prod__AStarshipMethid__init_astarshipmethid(self, p0); /* Direct call parser_prod#AStarshipMethid#init_astarshipmethid on <self:Object(AStarshipMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#replace_child for (self: AStarshipMethid, ANode, nullable ANode) */
void parser_prod__AStarshipMethid__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStarship */;
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
var = self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starship");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2608);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TStarship> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TStarship> */
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
/* <var_new_child:nullable ANode> isa TStarship */
cltype = type_parser_nodes__TStarship.color;
idtype = type_parser_nodes__TStarship.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarship", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2609);
show_backtrace(1);
}
{
parser_prod__AStarshipMethid__n_starship_61d(self, var_new_child); /* Direct call parser_prod#AStarshipMethid#n_starship= on <self:AStarshipMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStarshipMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStarshipMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AStarshipMethid#replace_child on <self:Object(AStarshipMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#n_starship= for (self: AStarshipMethid, TStarship) */
void parser_prod__AStarshipMethid__n_starship_61d(val* self, val* p0) {
val* var_node /* var node: TStarship */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val = var_node; /* _n_starship on <self:AStarshipMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TStarship> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TStarship> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#n_starship= for (self: Object, TStarship) */
void VIRTUAL_parser_prod__AStarshipMethid__n_starship_61d(val* self, val* p0) {
parser_prod__AStarshipMethid__n_starship_61d(self, p0); /* Direct call parser_prod#AStarshipMethid#n_starship= on <self:Object(AStarshipMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#visit_all for (self: AStarshipMethid, Visitor) */
void parser_prod__AStarshipMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStarship */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStarshipMethid___n_starship].val; /* _n_starship on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starship");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2623);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarshipMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStarshipMethid__visit_all(val* self, val* p0) {
parser_prod__AStarshipMethid__visit_all(self, p0); /* Direct call parser_prod#AStarshipMethid#visit_all on <self:Object(AStarshipMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#init_aassignmethid for (self: AAssignMethid, nullable TId, nullable TAssign) */
void parser_prod__AAssignMethid__init_aassignmethid(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
var_n_id = p0;
var_n_assign = p1;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2632);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val = var_n_id; /* _n_id on <self:AAssignMethid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2633);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2634);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:AAssignMethid> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2635);
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
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#init_aassignmethid for (self: Object, nullable TId, nullable TAssign) */
void VIRTUAL_parser_prod__AAssignMethid__init_aassignmethid(val* self, val* p0, val* p1) {
parser_prod__AAssignMethid__init_aassignmethid(self, p0, p1); /* Direct call parser_prod#AAssignMethid#init_aassignmethid on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#replace_child for (self: AAssignMethid, ANode, nullable ANode) */
void parser_prod__AAssignMethid__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2640);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2641);
show_backtrace(1);
}
{
parser_prod__AAssignMethid__n_id_61d(self, var_new_child); /* Direct call parser_prod#AAssignMethid#n_id= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2644);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2645);
show_backtrace(1);
}
{
parser_prod__AAssignMethid__n_assign_61d(self, var_new_child); /* Direct call parser_prod#AAssignMethid#n_assign= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAssignMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAssignMethid__replace_child(self, p0, p1); /* Direct call parser_prod#AAssignMethid#replace_child on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_id= for (self: AAssignMethid, TId) */
void parser_prod__AAssignMethid__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val = var_node; /* _n_id on <self:AAssignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_id= for (self: Object, TId) */
void VIRTUAL_parser_prod__AAssignMethid__n_id_61d(val* self, val* p0) {
parser_prod__AAssignMethid__n_id_61d(self, p0); /* Direct call parser_prod#AAssignMethid#n_id= on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_assign= for (self: AAssignMethid, TAssign) */
void parser_prod__AAssignMethid__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val = var_node; /* _n_assign on <self:AAssignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__AAssignMethid__n_assign_61d(val* self, val* p0) {
parser_prod__AAssignMethid__n_assign_61d(self, p0); /* Direct call parser_prod#AAssignMethid#n_assign= on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#visit_all for (self: AAssignMethid, Visitor) */
void parser_prod__AAssignMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2664);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2665);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAssignMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAssignMethid__visit_all(val* self, val* p0) {
parser_prod__AAssignMethid__visit_all(self, p0); /* Direct call parser_prod#AAssignMethid#visit_all on <self:Object(AAssignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#init_abraassignmethid for (self: ABraassignMethid, nullable TObra, nullable TCbra, nullable TAssign) */
void parser_prod__ABraassignMethid__init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_assign /* var n_assign: nullable TAssign */;
var_n_obra = p0;
var_n_cbra = p1;
var_n_assign = p2;
if (unlikely(var_n_obra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2675);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraassignMethid> */
if (var_n_obra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2676);
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
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2677);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraassignMethid> */
if (var_n_cbra == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2678);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var_n_cbra->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2679);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:ABraassignMethid> */
if (var_n_assign == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2680);
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
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#init_abraassignmethid for (self: Object, nullable TObra, nullable TCbra, nullable TAssign) */
void VIRTUAL_parser_prod__ABraassignMethid__init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
parser_prod__ABraassignMethid__init_abraassignmethid(self, p0, p1, p2); /* Direct call parser_prod#ABraassignMethid#init_abraassignmethid on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#replace_child for (self: ABraassignMethid, ANode, nullable ANode) */
void parser_prod__ABraassignMethid__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TCbra */;
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2685);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2686);
show_backtrace(1);
}
{
parser_prod__ABraassignMethid__n_obra_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_obra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2689);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TCbra> */
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
/* <var_new_child:nullable ANode> isa TCbra */
cltype16 = type_parser_nodes__TCbra.color;
idtype17 = type_parser_nodes__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCbra", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2690);
show_backtrace(1);
}
{
parser_prod__ABraassignMethid__n_cbra_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_cbra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2693);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2694);
show_backtrace(1);
}
{
parser_prod__ABraassignMethid__n_assign_61d(self, var_new_child); /* Direct call parser_prod#ABraassignMethid#n_assign= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ABraassignMethid__replace_child(val* self, val* p0, val* p1) {
parser_prod__ABraassignMethid__replace_child(self, p0, p1); /* Direct call parser_prod#ABraassignMethid#replace_child on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_obra= for (self: ABraassignMethid, TObra) */
void parser_prod__ABraassignMethid__n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val = var_node; /* _n_obra on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_prod__ABraassignMethid__n_obra_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_obra_61d(self, p0); /* Direct call parser_prod#ABraassignMethid#n_obra= on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_cbra= for (self: ABraassignMethid, TCbra) */
void parser_prod__ABraassignMethid__n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_prod__ABraassignMethid__n_cbra_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_cbra_61d(self, p0); /* Direct call parser_prod#ABraassignMethid#n_cbra= on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_assign= for (self: ABraassignMethid, TAssign) */
void parser_prod__ABraassignMethid__n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val = var_node; /* _n_assign on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#n_assign= for (self: Object, TAssign) */
void VIRTUAL_parser_prod__ABraassignMethid__n_assign_61d(val* self, val* p0) {
parser_prod__ABraassignMethid__n_assign_61d(self, p0); /* Direct call parser_prod#ABraassignMethid#n_assign= on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#visit_all for (self: ABraassignMethid, Visitor) */
void parser_prod__ABraassignMethid__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
val* var2 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2718);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2719);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_prod.nit", 2720);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ABraassignMethid#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ABraassignMethid__visit_all(val* self, val* p0) {
parser_prod__ABraassignMethid__visit_all(self, p0); /* Direct call parser_prod#ABraassignMethid#visit_all on <self:Object(ABraassignMethid)>*/
RET_LABEL:;
}
/* method parser_prod#ASignature#init_asignature for (self: ASignature, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void parser_prod__ASignature__init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var6 /* : Bool */;
val* var8 /* : ANodes[AParam] */;
val* var10 /* : ANodes[AParam] */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_n_opar = p0;
var_n_params = p1;
var_n_cpar = p2;
var_n_type = p3;
self->attrs[COLOR_parser_nodes__ASignature___n_opar].val = var_n_opar; /* _n_opar on <self:ASignature> */
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
var5 = ((short int (*)(val*, val*))(var_n_opar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_opar, var_other) /* == on <var_n_opar:nullable TOpar(TOpar)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL7:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var10 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var8, var_n_params); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var8:ANodes[AParam]>*/
}
self->attrs[COLOR_parser_nodes__ASignature___n_cpar].val = var_n_cpar; /* _n_cpar on <self:ASignature> */
var11 = NULL;
if (var_n_cpar == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_cpar,var11) on <var_n_cpar:nullable TCpar> */
var_other = var11;
{
var16 = ((short int (*)(val*, val*))(var_n_cpar->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_cpar, var_other) /* == on <var_n_cpar:nullable TCpar(TCpar)>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL18:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__ASignature___n_type].val = var_n_type; /* _n_type on <self:ASignature> */
var19 = NULL;
if (var_n_type == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_type,var19) on <var_n_type:nullable AType> */
var_other = var19;
{
var24 = ((short int (*)(val*, val*))(var_n_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL26:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASignature#init_asignature for (self: Object, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void VIRTUAL_parser_prod__ASignature__init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__ASignature__init_asignature(self, p0, p1, p2, p3); /* Direct call parser_prod#ASignature#init_asignature on <self:Object(ASignature)>*/
RET_LABEL:;
}
