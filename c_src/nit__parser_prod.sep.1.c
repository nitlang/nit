#include "nit__parser_prod.sep.0.h"
/* method parser_prod#AModule#init_amodule for (self: AModule, nullable AModuledecl, Collection[Object], Collection[Object], Collection[Object]) */
void nit__parser_prod___AModule___init_amodule(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_moduledecl /* var n_moduledecl: nullable AModuledecl */;
val* var_n_imports /* var n_imports: Collection[Object] */;
val* var_n_extern_code_blocks /* var n_extern_code_blocks: Collection[Object] */;
val* var_n_classdefs /* var n_classdefs: Collection[Object] */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var7 /* : ANodes[AImport] */;
val* var9 /* : ANodes[AImport] */;
val* var10 /* : ANodes[AExternCodeBlock] */;
val* var12 /* : ANodes[AExternCodeBlock] */;
val* var13 /* : ANodes[AClassdef] */;
val* var15 /* : ANodes[AClassdef] */;
var_n_moduledecl = p0;
var_n_imports = p1;
var_n_extern_code_blocks = p2;
var_n_classdefs = p3;
self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val = var_n_moduledecl; /* _n_moduledecl on <self:AModule> */
var = NULL;
if (var_n_moduledecl == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_moduledecl,var) on <var_n_moduledecl:nullable AModuledecl> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_n_moduledecl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_moduledecl, var_other) /* == on <var_n_moduledecl:nullable AModuledecl(AModuledecl)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_moduledecl,self) on <var_n_moduledecl:nullable AModuledecl(AModuledecl)> */
var_n_moduledecl->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_moduledecl:nullable AModuledecl(AModuledecl)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AModule#n_imports (self) on <self:AModule> */
var9 = self->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 913);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var7, var_n_imports); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var7:ANodes[AImport]>*/
}
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:AModule> */
var12 = self->attrs[COLOR_nit__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 916);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var10, var_n_extern_code_blocks); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var10:ANodes[AExternCodeBlock]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var15 = self->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var13, var_n_classdefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var13:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AModule#replace_child for (self: AModule, ANode, nullable ANode) */
void nit__parser_prod___AModule___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AModuledecl */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : ANodes[AImport] */;
val* var10 /* : ANodes[AImport] */;
short int var11 /* : Bool */;
val* var12 /* : ANodes[AExternCodeBlock] */;
val* var14 /* : ANodes[AExternCodeBlock] */;
short int var15 /* : Bool */;
val* var16 /* : ANodes[AClassdef] */;
val* var18 /* : ANodes[AClassdef] */;
short int var19 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable AModuledecl> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable AModuledecl(AModuledecl)> */
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
/* <var_new_child:nullable ANode> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AModuledecl", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 27);
show_backtrace(1);
}
{
nit__parser_prod___AModule___n_moduledecl_61d(self, var_new_child); /* Direct call parser_prod#AModule#n_moduledecl= on <self:AModule>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_imports (self) on <self:AModule> */
var10 = self->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 913);
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
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:AModule> */
var14 = self->attrs[COLOR_nit__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 916);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nit___nit__ANodes___replace_child(var12, var_old_child, var_new_child);
}
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var18 = self->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit___nit__ANodes___replace_child(var16, var_old_child, var_new_child);
}
if (var19){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModule#n_moduledecl= for (self: AModule, nullable AModuledecl) */
void nit__parser_prod___AModule___n_moduledecl_61d(val* self, val* p0) {
val* var_node /* var node: nullable AModuledecl */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val = var_node; /* _n_moduledecl on <self:AModule> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable AModuledecl> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AModuledecl(AModuledecl)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AModuledecl(AModuledecl)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AModuledecl(AModuledecl)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModule#visit_all for (self: AModule, Visitor) */
void nit__parser_prod___AModule___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModuledecl */;
val* var1 /* : ANodes[AImport] */;
val* var3 /* : ANodes[AImport] */;
val* var4 /* : ANodes[AExternCodeBlock] */;
val* var6 /* : ANodes[AExternCodeBlock] */;
val* var7 /* : ANodes[AClassdef] */;
val* var9 /* : ANodes[AClassdef] */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AModule#n_imports (self) on <self:AModule> */
var3 = self->attrs[COLOR_nit__parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 913);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AImport]>*/
}
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:AModule> */
var6 = self->attrs[COLOR_nit__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 916);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var4, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var4:ANodes[AExternCodeBlock]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var9 = self->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var7, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var7:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#init_amoduledecl for (self: AModuledecl, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmodule, nullable AModuleName, nullable AAnnotations) */
void nit__parser_prod___AModuledecl___init_amoduledecl(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmodule /* var n_kwmodule: nullable TKwmodule */;
val* var_n_name /* var n_name: nullable AModuleName */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
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
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmodule = p3;
var_n_name = p4;
var_n_annotations = p5;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AModuledecl> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_doc, var_other) /* == on <var_n_doc:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AModuledecl> */
var7 = NULL;
if (var_n_kwredef == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var7) on <var_n_kwredef:nullable TKwredef> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL13:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 64);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AModuledecl> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 65);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL14:(void)0;
}
}
if (unlikely(var_n_kwmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 66);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val = var_n_kwmodule; /* _n_kwmodule on <self:AModuledecl> */
if (var_n_kwmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 67);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwmodule,self) on <var_n_kwmodule:nullable TKwmodule> */
if (unlikely(var_n_kwmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwmodule->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwmodule:nullable TKwmodule> */
RET_LABEL15:(void)0;
}
}
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 68);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val = var_n_name; /* _n_name on <self:AModuledecl> */
if (var_n_name == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 69);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_name,self) on <var_n_name:nullable AModuleName> */
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_name->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_name:nullable AModuleName> */
RET_LABEL16:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AModuledecl> */
var17 = NULL;
if (var_n_annotations == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var17) on <var_n_annotations:nullable AAnnotations> */
var_other = var17;
{
var21 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL23:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#replace_child for (self: AModuledecl, ANode, nullable ANode) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : TKwmodule */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : AModuleName */;
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
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AModuledecl> */
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
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 77);
show_backtrace(1);
}
{
nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_doc= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AModuledecl> */
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
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 81);
show_backtrace(1);
}
{
nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_kwredef= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AModuledecl> */
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
cltype27 = type_nit__AVisibility.color;
idtype28 = type_nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 85);
show_backtrace(1);
}
{
nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_visibility= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 88);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TKwmodule> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TKwmodule> */
var35 = var30 == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
/* <var_new_child:nullable ANode> isa TKwmodule */
cltype37 = type_nit__TKwmodule.color;
idtype38 = type_nit__TKwmodule.id;
if(var_new_child == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_new_child->type->table_size) {
var36 = 0;
} else {
var36 = var_new_child->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
var_class_name39 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwmodule", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 89);
show_backtrace(1);
}
{
nit__parser_prod___AModuledecl___n_kwmodule_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_kwmodule= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 92);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var40,var_old_child) on <var40:AModuleName> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var40,var_other) on <var40:AModuleName> */
var45 = var40 == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
/* <var_new_child:nullable ANode> isa AModuleName */
cltype47 = type_nit__AModuleName.color;
idtype48 = type_nit__AModuleName.id;
if(var_new_child == NULL) {
var46 = 0;
} else {
if(cltype47 >= var_new_child->type->table_size) {
var46 = 0;
} else {
var46 = var_new_child->type->type_table[cltype47] == idtype48;
}
}
if (unlikely(!var46)) {
var_class_name49 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModuleName", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 93);
show_backtrace(1);
}
{
nit__parser_prod___AModuledecl___n_name_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_name= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 97);
show_backtrace(1);
}
{
nit__parser_prod___AModuledecl___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_annotations= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_doc= for (self: AModuledecl, nullable ADoc) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AModuledecl> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_kwredef= for (self: AModuledecl, nullable TKwredef) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AModuledecl> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_visibility= for (self: AModuledecl, nullable AVisibility) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AModuledecl> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 115);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_kwmodule= for (self: AModuledecl, TKwmodule) */
void nit__parser_prod___AModuledecl___n_kwmodule_61d(val* self, val* p0) {
val* var_node /* var node: TKwmodule */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val = var_node; /* _n_kwmodule on <self:AModuledecl> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwmodule> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwmodule> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_name= for (self: AModuledecl, AModuleName) */
void nit__parser_prod___AModuledecl___n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val = var_node; /* _n_name on <self:AModuledecl> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AModuleName> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AModuleName> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_annotations= for (self: AModuledecl, nullable AAnnotations) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AModuledecl> */
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
/* method parser_prod#AModuledecl#visit_all for (self: AModuledecl, Visitor) */
void nit__parser_prod___AModuledecl___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwmodule */;
val* var4 /* : AModuleName */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AModuledecl> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AModuledecl> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AModuledecl> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 139);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 140);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#init_astdimport for (self: AStdImport, nullable AVisibility, nullable TKwimport, nullable AModuleName, nullable AAnnotations) */
void nit__parser_prod___AStdImport___init_astdimport(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_name /* var n_name: nullable AModuleName */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_name = p2;
var_n_annotations = p3;
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 152);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdImport> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 153);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 154);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AStdImport> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 155);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwimport->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 156);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val = var_n_name; /* _n_name on <self:AStdImport> */
if (var_n_name == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 157);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_name,self) on <var_n_name:nullable AModuleName> */
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_name->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_name:nullable AModuleName> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStdImport> */
var = NULL;
if (var_n_annotations == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var7 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
/* method parser_prod#AStdImport#replace_child for (self: AStdImport, ANode, nullable ANode) */
void nit__parser_prod___AStdImport___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AVisibility */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TKwimport */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : AModuleName */;
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
var = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 164);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AVisibility> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype = type_nit__AVisibility.color;
idtype = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 165);
show_backtrace(1);
}
{
nit__parser_prod___AStdImport___nit__parser_nodes__AImport__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AStdImport#n_visibility= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 168);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TKwimport> */
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
/* <var_new_child:nullable ANode> isa TKwimport */
cltype14 = type_nit__TKwimport.color;
idtype15 = type_nit__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 169);
show_backtrace(1);
}
{
nit__parser_prod___AStdImport___nit__parser_nodes__AImport__n_kwimport_61d(self, var_new_child); /* Direct call parser_prod#AStdImport#n_kwimport= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 172);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:AModuleName> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:AModuleName> */
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
/* <var_new_child:nullable ANode> isa AModuleName */
cltype24 = type_nit__AModuleName.color;
idtype25 = type_nit__AModuleName.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModuleName", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 173);
show_backtrace(1);
}
{
nit__parser_prod___AStdImport___n_name_61d(self, var_new_child); /* Direct call parser_prod#AStdImport#n_name= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 177);
show_backtrace(1);
}
{
nit__parser_prod___AStdImport___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AStdImport#n_annotations= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_visibility= for (self: AStdImport, AVisibility) */
void nit__parser_prod___AStdImport___nit__parser_nodes__AImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = var_node; /* _n_visibility on <self:AStdImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AVisibility> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_kwimport= for (self: AStdImport, TKwimport) */
void nit__parser_prod___AStdImport___nit__parser_nodes__AImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = var_node; /* _n_kwimport on <self:AStdImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_name= for (self: AStdImport, AModuleName) */
void nit__parser_prod___AStdImport___n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val = var_node; /* _n_name on <self:AStdImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AModuleName> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AModuleName> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_annotations= for (self: AStdImport, nullable AAnnotations) */
void nit__parser_prod___AStdImport___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStdImport> */
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
/* method parser_prod#AStdImport#visit_all for (self: AStdImport, Visitor) */
void nit__parser_prod___AStdImport___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : AModuleName */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 206);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 207);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 208);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#init_anoimport for (self: ANoImport, nullable AVisibility, nullable TKwimport, nullable TKwend) */
void nit__parser_prod___ANoImport___init_anoimport(val* self, val* p0, val* p1, val* p2) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_kwend = p2;
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 219);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ANoImport> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 220);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 221);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:ANoImport> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 222);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwimport->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 223);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ANoImport> */
if (var_n_kwend == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 224);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend> */
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwend->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#replace_child for (self: ANoImport, ANode, nullable ANode) */
void nit__parser_prod___ANoImport___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AVisibility */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TKwimport */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : TKwend */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 229);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AVisibility> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype = type_nit__AVisibility.color;
idtype = type_nit__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 230);
show_backtrace(1);
}
{
nit__parser_prod___ANoImport___nit__parser_nodes__AImport__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#ANoImport#n_visibility= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 233);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TKwimport> */
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
/* <var_new_child:nullable ANode> isa TKwimport */
cltype14 = type_nit__TKwimport.color;
idtype15 = type_nit__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 234);
show_backtrace(1);
}
{
nit__parser_prod___ANoImport___nit__parser_nodes__AImport__n_kwimport_61d(self, var_new_child); /* Direct call parser_prod#ANoImport#n_kwimport= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 237);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:TKwend> */
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
/* <var_new_child:nullable ANode> isa TKwend */
cltype24 = type_nit__TKwend.color;
idtype25 = type_nit__TKwend.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwend", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 238);
show_backtrace(1);
}
{
nit__parser_prod___ANoImport___n_kwend_61d(self, var_new_child); /* Direct call parser_prod#ANoImport#n_kwend= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_visibility= for (self: ANoImport, AVisibility) */
void nit__parser_prod___ANoImport___nit__parser_nodes__AImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val = var_node; /* _n_visibility on <self:ANoImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AVisibility> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwimport= for (self: ANoImport, TKwimport) */
void nit__parser_prod___ANoImport___nit__parser_nodes__AImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val = var_node; /* _n_kwimport on <self:ANoImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwend= for (self: ANoImport, TKwend) */
void nit__parser_prod___ANoImport___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val = var_node; /* _n_kwend on <self:ANoImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwend> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwend> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#visit_all for (self: ANoImport, Visitor) */
void nit__parser_prod___ANoImport___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 262);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 263);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 264);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#init_apublicvisibility for (self: APublicVisibility, nullable TKwpublic) */
void nit__parser_prod___APublicVisibility___init_apublicvisibility(val* self, val* p0) {
val* var_n_kwpublic /* var n_kwpublic: nullable TKwpublic */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_n_kwpublic = p0;
self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val = var_n_kwpublic; /* _n_kwpublic on <self:APublicVisibility> */
var = NULL;
if (var_n_kwpublic == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwpublic,var) on <var_n_kwpublic:nullable TKwpublic> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_n_kwpublic->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwpublic, var_other) /* == on <var_n_kwpublic:nullable TKwpublic(TKwpublic)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwpublic,self) on <var_n_kwpublic:nullable TKwpublic(TKwpublic)> */
var_n_kwpublic->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwpublic:nullable TKwpublic(TKwpublic)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#replace_child for (self: APublicVisibility, ANode, nullable ANode) */
void nit__parser_prod___APublicVisibility___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwpublic */;
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
var = self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var,var_old_child) on <var:nullable TKwpublic> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable TKwpublic(TKwpublic)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwpublic */
cltype = type_nullable__nit__TKwpublic.color;
idtype = type_nullable__nit__TKwpublic.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwpublic", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 279);
show_backtrace(1);
}
{
nit__parser_prod___APublicVisibility___n_kwpublic_61d(self, var_new_child); /* Direct call parser_prod#APublicVisibility#n_kwpublic= on <self:APublicVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#n_kwpublic= for (self: APublicVisibility, nullable TKwpublic) */
void nit__parser_prod___APublicVisibility___n_kwpublic_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwpublic */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val = var_node; /* _n_kwpublic on <self:APublicVisibility> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwpublic> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwpublic(TKwpublic)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwpublic(TKwpublic)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwpublic(TKwpublic)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#visit_all for (self: APublicVisibility, Visitor) */
void nit__parser_prod___APublicVisibility___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwpublic */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#init_aprivatevisibility for (self: APrivateVisibility, nullable TKwprivate) */
void nit__parser_prod___APrivateVisibility___init_aprivatevisibility(val* self, val* p0) {
val* var_n_kwprivate /* var n_kwprivate: nullable TKwprivate */;
var_n_kwprivate = p0;
if (unlikely(var_n_kwprivate == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 301);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val = var_n_kwprivate; /* _n_kwprivate on <self:APrivateVisibility> */
if (var_n_kwprivate == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 302);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwprivate,self) on <var_n_kwprivate:nullable TKwprivate> */
if (unlikely(var_n_kwprivate == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwprivate->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwprivate:nullable TKwprivate> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#replace_child for (self: APrivateVisibility, ANode, nullable ANode) */
void nit__parser_prod___APrivateVisibility___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwprivate */;
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
var = self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 307);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwprivate> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwprivate> */
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
/* <var_new_child:nullable ANode> isa TKwprivate */
cltype = type_nit__TKwprivate.color;
idtype = type_nit__TKwprivate.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwprivate", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 308);
show_backtrace(1);
}
{
nit__parser_prod___APrivateVisibility___n_kwprivate_61d(self, var_new_child); /* Direct call parser_prod#APrivateVisibility#n_kwprivate= on <self:APrivateVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#n_kwprivate= for (self: APrivateVisibility, TKwprivate) */
void nit__parser_prod___APrivateVisibility___n_kwprivate_61d(val* self, val* p0) {
val* var_node /* var node: TKwprivate */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val = var_node; /* _n_kwprivate on <self:APrivateVisibility> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwprivate> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwprivate> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#visit_all for (self: APrivateVisibility, Visitor) */
void nit__parser_prod___APrivateVisibility___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprivate */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 322);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#init_aprotectedvisibility for (self: AProtectedVisibility, nullable TKwprotected) */
void nit__parser_prod___AProtectedVisibility___init_aprotectedvisibility(val* self, val* p0) {
val* var_n_kwprotected /* var n_kwprotected: nullable TKwprotected */;
var_n_kwprotected = p0;
if (unlikely(var_n_kwprotected == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 330);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val = var_n_kwprotected; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var_n_kwprotected == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 331);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwprotected,self) on <var_n_kwprotected:nullable TKwprotected> */
if (unlikely(var_n_kwprotected == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwprotected->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwprotected:nullable TKwprotected> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#replace_child for (self: AProtectedVisibility, ANode, nullable ANode) */
void nit__parser_prod___AProtectedVisibility___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwprotected */;
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
var = self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 336);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwprotected> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwprotected> */
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
/* <var_new_child:nullable ANode> isa TKwprotected */
cltype = type_nit__TKwprotected.color;
idtype = type_nit__TKwprotected.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwprotected", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 337);
show_backtrace(1);
}
{
nit__parser_prod___AProtectedVisibility___n_kwprotected_61d(self, var_new_child); /* Direct call parser_prod#AProtectedVisibility#n_kwprotected= on <self:AProtectedVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#n_kwprotected= for (self: AProtectedVisibility, TKwprotected) */
void nit__parser_prod___AProtectedVisibility___n_kwprotected_61d(val* self, val* p0) {
val* var_node /* var node: TKwprotected */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val = var_node; /* _n_kwprotected on <self:AProtectedVisibility> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwprotected> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwprotected> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#visit_all for (self: AProtectedVisibility, Visitor) */
void nit__parser_prod___AProtectedVisibility___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprotected */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 351);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#init_aintrudevisibility for (self: AIntrudeVisibility, nullable TKwintrude) */
void nit__parser_prod___AIntrudeVisibility___init_aintrudevisibility(val* self, val* p0) {
val* var_n_kwintrude /* var n_kwintrude: nullable TKwintrude */;
var_n_kwintrude = p0;
if (unlikely(var_n_kwintrude == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 359);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_n_kwintrude; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var_n_kwintrude == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 360);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwintrude,self) on <var_n_kwintrude:nullable TKwintrude> */
if (unlikely(var_n_kwintrude == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwintrude->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwintrude:nullable TKwintrude> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#replace_child for (self: AIntrudeVisibility, ANode, nullable ANode) */
void nit__parser_prod___AIntrudeVisibility___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwintrude */;
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
var = self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 365);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwintrude> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwintrude> */
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
/* <var_new_child:nullable ANode> isa TKwintrude */
cltype = type_nit__TKwintrude.color;
idtype = type_nit__TKwintrude.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwintrude", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 366);
show_backtrace(1);
}
{
nit__parser_prod___AIntrudeVisibility___n_kwintrude_61d(self, var_new_child); /* Direct call parser_prod#AIntrudeVisibility#n_kwintrude= on <self:AIntrudeVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#n_kwintrude= for (self: AIntrudeVisibility, TKwintrude) */
void nit__parser_prod___AIntrudeVisibility___n_kwintrude_61d(val* self, val* p0) {
val* var_node /* var node: TKwintrude */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_node; /* _n_kwintrude on <self:AIntrudeVisibility> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwintrude> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwintrude> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#visit_all for (self: AIntrudeVisibility, Visitor) */
void nit__parser_prod___AIntrudeVisibility___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwintrude */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 380);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#init_astdclassdef for (self: AStdClassdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AClasskind, nullable TClassid, Collection[Object], nullable AAnnotations, nullable AExternCodeBlock, Collection[Object], Collection[Object], nullable TKwend) */
void nit__parser_prod___AStdClassdef___init_astdclassdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_classkind /* var n_classkind: nullable AClasskind */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_formaldefs /* var n_formaldefs: Collection[Object] */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
val* var_n_superclasses /* var n_superclasses: Collection[Object] */;
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
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
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : ANodes[AFormaldef] */;
val* var25 /* : ANodes[AFormaldef] */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var33 /* : null */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var40 /* : ANodes[ASuperclass] */;
val* var42 /* : ANodes[ASuperclass] */;
val* var43 /* : ANodes[APropdef] */;
val* var45 /* : ANodes[APropdef] */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_classkind = p3;
var_n_id = p4;
var_n_formaldefs = p5;
var_n_annotations = p6;
var_n_extern_code_block = p7;
var_n_superclasses = p8;
var_n_propdefs = p9;
var_n_kwend = p10;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AStdClassdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_doc, var_other) /* == on <var_n_doc:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AStdClassdef> */
var7 = NULL;
if (var_n_kwredef == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var7) on <var_n_kwredef:nullable TKwredef> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL13:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 402);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdClassdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 403);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL14:(void)0;
}
}
if (unlikely(var_n_classkind == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 404);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val = var_n_classkind; /* _n_classkind on <self:AStdClassdef> */
if (var_n_classkind == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 405);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_classkind,self) on <var_n_classkind:nullable AClasskind> */
if (unlikely(var_n_classkind == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_classkind->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_classkind:nullable AClasskind> */
RET_LABEL15:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val = var_n_id; /* _n_id on <self:AStdClassdef> */
var16 = NULL;
if (var_n_id == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_id,var16) on <var_n_id:nullable TClassid> */
var_other = var16;
{
var20 = ((short int (*)(val* self, val* p0))(var_n_id->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TClassid(TClassid)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid(TClassid)> */
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid(TClassid)> */
RET_LABEL22:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (self) on <self:AStdClassdef> */
var25 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var23, var_n_formaldefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var23:ANodes[AFormaldef]>*/
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStdClassdef> */
var26 = NULL;
if (var_n_annotations == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var26) on <var_n_annotations:nullable AAnnotations> */
var_other = var26;
{
var30 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL32:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AStdClassdef> */
var33 = NULL;
if (var_n_extern_code_block == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_code_block,var33) on <var_n_extern_code_block:nullable AExternCodeBlock> */
var_other = var33;
{
var37 = ((short int (*)(val* self, val* p0))(var_n_extern_code_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_extern_code_block, var_other) /* == on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_code_block,self) on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var_n_extern_code_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL39:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (self) on <self:AStdClassdef> */
var42 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1033);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var40, var_n_superclasses); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var40:ANodes[ASuperclass]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var45 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var43, var_n_propdefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var43:ANodes[APropdef]>*/
}
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 415);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val = var_n_kwend; /* _n_kwend on <self:AStdClassdef> */
if (var_n_kwend == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 416);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend> */
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwend->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend> */
RET_LABEL46:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#replace_child for (self: AStdClassdef, ANode, nullable ANode) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : AClasskind */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : nullable TClassid */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
val* var51 /* : ANodes[AFormaldef] */;
val* var53 /* : ANodes[AFormaldef] */;
short int var54 /* : Bool */;
val* var55 /* : nullable AAnnotations */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
val* var66 /* : nullable AExternCodeBlock */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
val* var77 /* : ANodes[ASuperclass] */;
val* var79 /* : ANodes[ASuperclass] */;
short int var80 /* : Bool */;
val* var81 /* : ANodes[APropdef] */;
val* var83 /* : ANodes[APropdef] */;
short int var84 /* : Bool */;
val* var85 /* : TKwend */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AStdClassdef> */
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
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 422);
show_backtrace(1);
}
{
nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_doc= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
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
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 426);
show_backtrace(1);
}
{
nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_kwredef= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
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
cltype27 = type_nit__AVisibility.color;
idtype28 = type_nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 430);
show_backtrace(1);
}
{
nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_visibility= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 433);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AClasskind> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AClasskind> */
var35 = var30 == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
/* <var_new_child:nullable ANode> isa AClasskind */
cltype37 = type_nit__AClasskind.color;
idtype38 = type_nit__AClasskind.id;
if(var_new_child == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_new_child->type->table_size) {
var36 = 0;
} else {
var36 = var_new_child->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
var_class_name39 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AClasskind", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 434);
show_backtrace(1);
}
{
nit__parser_prod___AStdClassdef___n_classkind_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_classkind= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
if (var40 == NULL) {
var41 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var40,var_old_child) on <var40:nullable TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var40,var_other) on <var40:nullable TClassid(TClassid)> */
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
/* <var_new_child:nullable ANode> isa nullable TClassid */
cltype48 = type_nullable__nit__TClassid.color;
idtype49 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TClassid", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 438);
show_backtrace(1);
}
{
nit__parser_prod___AStdClassdef___n_id_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_id= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (self) on <self:AStdClassdef> */
var53 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = nit___nit__ANodes___replace_child(var51, var_old_child, var_new_child);
}
if (var54){
goto RET_LABEL;
} else {
}
var55 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdClassdef> */
if (var55 == NULL) {
var56 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var55,var_old_child) on <var55:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var55,var_other) on <var55:nullable AAnnotations(AAnnotations)> */
var61 = var55 == var_other;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype63 = type_nullable__nit__AAnnotations.color;
idtype64 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var62 = 1;
} else {
if(cltype63 >= var_new_child->type->table_size) {
var62 = 0;
} else {
var62 = var_new_child->type->type_table[cltype63] == idtype64;
}
}
if (unlikely(!var62)) {
var_class_name65 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 443);
show_backtrace(1);
}
{
nit__parser_prod___AStdClassdef___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_annotations= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var66 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
if (var66 == NULL) {
var67 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var66,var_old_child) on <var66:nullable AExternCodeBlock> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var66,var_other) on <var66:nullable AExternCodeBlock(AExternCodeBlock)> */
var72 = var66 == var_other;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
if (var67){
/* <var_new_child:nullable ANode> isa nullable AExternCodeBlock */
cltype74 = type_nullable__nit__AExternCodeBlock.color;
idtype75 = type_nullable__nit__AExternCodeBlock.id;
if(var_new_child == NULL) {
var73 = 1;
} else {
if(cltype74 >= var_new_child->type->table_size) {
var73 = 0;
} else {
var73 = var_new_child->type->type_table[cltype74] == idtype75;
}
}
if (unlikely(!var73)) {
var_class_name76 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCodeBlock", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 447);
show_backtrace(1);
}
{
nit__parser_prod___AStdClassdef___n_extern_code_block_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_extern_code_block= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (self) on <self:AStdClassdef> */
var79 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1033);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = nit___nit__ANodes___replace_child(var77, var_old_child, var_new_child);
}
if (var80){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var83 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nit___nit__ANodes___replace_child(var81, var_old_child, var_new_child);
}
if (var84){
goto RET_LABEL;
} else {
}
var85 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 452);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var85,var_old_child) on <var85:TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var85,var_other) on <var85:TKwend> */
var90 = var85 == var_other;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
if (var86){
/* <var_new_child:nullable ANode> isa TKwend */
cltype92 = type_nit__TKwend.color;
idtype93 = type_nit__TKwend.id;
if(var_new_child == NULL) {
var91 = 0;
} else {
if(cltype92 >= var_new_child->type->table_size) {
var91 = 0;
} else {
var91 = var_new_child->type->type_table[cltype92] == idtype93;
}
}
if (unlikely(!var91)) {
var_class_name94 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwend", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 453);
show_backtrace(1);
}
{
nit__parser_prod___AStdClassdef___n_kwend_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_kwend= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_doc= for (self: AStdClassdef, nullable ADoc) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AStdClassdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwredef= for (self: AStdClassdef, nullable TKwredef) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AStdClassdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_visibility= for (self: AStdClassdef, nullable AVisibility) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AStdClassdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 471);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_classkind= for (self: AStdClassdef, AClasskind) */
void nit__parser_prod___AStdClassdef___n_classkind_61d(val* self, val* p0) {
val* var_node /* var node: AClasskind */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val = var_node; /* _n_classkind on <self:AStdClassdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AClasskind> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AClasskind> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_id= for (self: AStdClassdef, nullable TClassid) */
void nit__parser_prod___AStdClassdef___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TClassid */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val = var_node; /* _n_id on <self:AStdClassdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TClassid(TClassid)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TClassid(TClassid)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TClassid(TClassid)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_annotations= for (self: AStdClassdef, nullable AAnnotations) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_extern_code_block= for (self: AStdClassdef, nullable AExternCodeBlock) */
void nit__parser_prod___AStdClassdef___n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AStdClassdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwend= for (self: AStdClassdef, TKwend) */
void nit__parser_prod___AStdClassdef___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val = var_node; /* _n_kwend on <self:AStdClassdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwend> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwend> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#visit_all for (self: AStdClassdef, Visitor) */
void nit__parser_prod___AStdClassdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : AClasskind */;
val* var4 /* : nullable TClassid */;
val* var5 /* : ANodes[AFormaldef] */;
val* var7 /* : ANodes[AFormaldef] */;
val* var8 /* : nullable AAnnotations */;
val* var9 /* : nullable AExternCodeBlock */;
val* var10 /* : ANodes[ASuperclass] */;
val* var12 /* : ANodes[ASuperclass] */;
val* var13 /* : ANodes[APropdef] */;
val* var15 /* : ANodes[APropdef] */;
val* var16 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AStdClassdef> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 505);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (self) on <self:AStdClassdef> */
var7 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1027);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var5, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var5:ANodes[AFormaldef]>*/
}
var8 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdClassdef> */
{
nit___nit__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
{
nit___nit__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (self) on <self:AStdClassdef> */
var12 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1033);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var10, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var10:ANodes[ASuperclass]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var15 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var13, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var13:ANodes[APropdef]>*/
}
var16 = self->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 512);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var16); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#init_atopclassdef for (self: ATopClassdef, Collection[Object]) */
void nit__parser_prod___ATopClassdef___init_atopclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_n_propdefs = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:ATopClassdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_propdefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#replace_child for (self: ATopClassdef, ANode, nullable ANode) */
void nit__parser_prod___ATopClassdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:ATopClassdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
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
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#visit_all for (self: ATopClassdef, Visitor) */
void nit__parser_prod___ATopClassdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_v = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:ATopClassdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#init_amainclassdef for (self: AMainClassdef, Collection[Object]) */
void nit__parser_prod___AMainClassdef___init_amainclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_n_propdefs = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AMainClassdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___unsafe_add_all(var, var_n_propdefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#replace_child for (self: AMainClassdef, ANode, nullable ANode) */
void nit__parser_prod___AMainClassdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AMainClassdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
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
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#visit_all for (self: AMainClassdef, Visitor) */
void nit__parser_prod___AMainClassdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_v = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AMainClassdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__ANodes___visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#init_aconcreteclasskind for (self: AConcreteClasskind, nullable TKwclass) */
void nit__parser_prod___AConcreteClasskind___init_aconcreteclasskind(val* self, val* p0) {
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
var_n_kwclass = p0;
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 560);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AConcreteClasskind> */
if (var_n_kwclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 561);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass> */
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwclass->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#replace_child for (self: AConcreteClasskind, ANode, nullable ANode) */
void nit__parser_prod___AConcreteClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwclass */;
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
var = self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 566);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwclass> */
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
/* <var_new_child:nullable ANode> isa TKwclass */
cltype = type_nit__TKwclass.color;
idtype = type_nit__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwclass", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 567);
show_backtrace(1);
}
{
nit__parser_prod___AConcreteClasskind___n_kwclass_61d(self, var_new_child); /* Direct call parser_prod#AConcreteClasskind#n_kwclass= on <self:AConcreteClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#n_kwclass= for (self: AConcreteClasskind, TKwclass) */
void nit__parser_prod___AConcreteClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AConcreteClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwclass> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwclass> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#visit_all for (self: AConcreteClasskind, Visitor) */
void nit__parser_prod___AConcreteClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 581);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#init_aabstractclasskind for (self: AAbstractClasskind, nullable TKwabstract, nullable TKwclass) */
void nit__parser_prod___AAbstractClasskind___init_aabstractclasskind(val* self, val* p0, val* p1) {
val* var_n_kwabstract /* var n_kwabstract: nullable TKwabstract */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
var_n_kwabstract = p0;
var_n_kwclass = p1;
if (unlikely(var_n_kwabstract == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 590);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val = var_n_kwabstract; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var_n_kwabstract == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 591);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwabstract,self) on <var_n_kwabstract:nullable TKwabstract> */
if (unlikely(var_n_kwabstract == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwabstract->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwabstract:nullable TKwabstract> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 592);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AAbstractClasskind> */
if (var_n_kwclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 593);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass> */
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwclass->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#replace_child for (self: AAbstractClasskind, ANode, nullable ANode) */
void nit__parser_prod___AAbstractClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabstract */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : TKwclass */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 598);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwabstract> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwabstract> */
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
/* <var_new_child:nullable ANode> isa TKwabstract */
cltype = type_nit__TKwabstract.color;
idtype = type_nit__TKwabstract.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwabstract", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 599);
show_backtrace(1);
}
{
nit__parser_prod___AAbstractClasskind___n_kwabstract_61d(self, var_new_child); /* Direct call parser_prod#AAbstractClasskind#n_kwabstract= on <self:AAbstractClasskind>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 602);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:TKwclass> */
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
/* <var_new_child:nullable ANode> isa TKwclass */
cltype14 = type_nit__TKwclass.color;
idtype15 = type_nit__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwclass", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 603);
show_backtrace(1);
}
{
nit__parser_prod___AAbstractClasskind___n_kwclass_61d(self, var_new_child); /* Direct call parser_prod#AAbstractClasskind#n_kwclass= on <self:AAbstractClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwabstract= for (self: AAbstractClasskind, TKwabstract) */
void nit__parser_prod___AAbstractClasskind___n_kwabstract_61d(val* self, val* p0) {
val* var_node /* var node: TKwabstract */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val = var_node; /* _n_kwabstract on <self:AAbstractClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwabstract> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwabstract> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwclass= for (self: AAbstractClasskind, TKwclass) */
void nit__parser_prod___AAbstractClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AAbstractClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwclass> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwclass> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#visit_all for (self: AAbstractClasskind, Visitor) */
void nit__parser_prod___AAbstractClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabstract */;
val* var1 /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 622);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 623);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#init_ainterfaceclasskind for (self: AInterfaceClasskind, nullable TKwinterface) */
void nit__parser_prod___AInterfaceClasskind___init_ainterfaceclasskind(val* self, val* p0) {
val* var_n_kwinterface /* var n_kwinterface: nullable TKwinterface */;
var_n_kwinterface = p0;
if (unlikely(var_n_kwinterface == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 631);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_n_kwinterface; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var_n_kwinterface == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 632);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwinterface,self) on <var_n_kwinterface:nullable TKwinterface> */
if (unlikely(var_n_kwinterface == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwinterface->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinterface:nullable TKwinterface> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#replace_child for (self: AInterfaceClasskind, ANode, nullable ANode) */
void nit__parser_prod___AInterfaceClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwinterface */;
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
var = self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 637);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwinterface> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwinterface> */
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
/* <var_new_child:nullable ANode> isa TKwinterface */
cltype = type_nit__TKwinterface.color;
idtype = type_nit__TKwinterface.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwinterface", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 638);
show_backtrace(1);
}
{
nit__parser_prod___AInterfaceClasskind___n_kwinterface_61d(self, var_new_child); /* Direct call parser_prod#AInterfaceClasskind#n_kwinterface= on <self:AInterfaceClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#n_kwinterface= for (self: AInterfaceClasskind, TKwinterface) */
void nit__parser_prod___AInterfaceClasskind___n_kwinterface_61d(val* self, val* p0) {
val* var_node /* var node: TKwinterface */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_node; /* _n_kwinterface on <self:AInterfaceClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwinterface> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwinterface> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#visit_all for (self: AInterfaceClasskind, Visitor) */
void nit__parser_prod___AInterfaceClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwinterface */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 652);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#init_aenumclasskind for (self: AEnumClasskind, nullable TKwenum) */
void nit__parser_prod___AEnumClasskind___init_aenumclasskind(val* self, val* p0) {
val* var_n_kwenum /* var n_kwenum: nullable TKwenum */;
var_n_kwenum = p0;
if (unlikely(var_n_kwenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 660);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val = var_n_kwenum; /* _n_kwenum on <self:AEnumClasskind> */
if (var_n_kwenum == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 661);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwenum,self) on <var_n_kwenum:nullable TKwenum> */
if (unlikely(var_n_kwenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwenum->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwenum:nullable TKwenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#replace_child for (self: AEnumClasskind, ANode, nullable ANode) */
void nit__parser_prod___AEnumClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwenum */;
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
var = self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 666);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwenum> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwenum> */
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
/* <var_new_child:nullable ANode> isa TKwenum */
cltype = type_nit__TKwenum.color;
idtype = type_nit__TKwenum.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwenum", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 667);
show_backtrace(1);
}
{
nit__parser_prod___AEnumClasskind___n_kwenum_61d(self, var_new_child); /* Direct call parser_prod#AEnumClasskind#n_kwenum= on <self:AEnumClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#n_kwenum= for (self: AEnumClasskind, TKwenum) */
void nit__parser_prod___AEnumClasskind___n_kwenum_61d(val* self, val* p0) {
val* var_node /* var node: TKwenum */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val = var_node; /* _n_kwenum on <self:AEnumClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwenum> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#visit_all for (self: AEnumClasskind, Visitor) */
void nit__parser_prod___AEnumClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwenum */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 681);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#init_aexternclasskind for (self: AExternClasskind, nullable TKwextern, nullable TKwclass) */
void nit__parser_prod___AExternClasskind___init_aexternclasskind(val* self, val* p0, val* p1) {
val* var_n_kwextern /* var n_kwextern: nullable TKwextern */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwextern = p0;
var_n_kwclass = p1;
if (unlikely(var_n_kwextern == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 690);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val = var_n_kwextern; /* _n_kwextern on <self:AExternClasskind> */
if (var_n_kwextern == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 691);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwextern,self) on <var_n_kwextern:nullable TKwextern> */
if (unlikely(var_n_kwextern == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwextern->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwextern:nullable TKwextern> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AExternClasskind> */
var = NULL;
if (var_n_kwclass == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwclass,var) on <var_n_kwclass:nullable TKwclass> */
var_other = var;
{
var5 = ((short int (*)(val* self, val* p0))(var_n_kwclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwclass, var_other) /* == on <var_n_kwclass:nullable TKwclass(TKwclass)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass(TKwclass)> */
var_n_kwclass->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass(TKwclass)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#replace_child for (self: AExternClasskind, ANode, nullable ANode) */
void nit__parser_prod___AExternClasskind___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwextern */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable TKwclass */;
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
var = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 698);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwextern> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwextern> */
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
/* <var_new_child:nullable ANode> isa TKwextern */
cltype = type_nit__TKwextern.color;
idtype = type_nit__TKwextern.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwextern", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 699);
show_backtrace(1);
}
{
nit__parser_prod___AExternClasskind___n_kwextern_61d(self, var_new_child); /* Direct call parser_prod#AExternClasskind#n_kwextern= on <self:AExternClasskind>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var7,var_old_child) on <var7:nullable TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable TKwclass(TKwclass)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwclass */
cltype15 = type_nullable__nit__TKwclass.color;
idtype16 = type_nullable__nit__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwclass", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 703);
show_backtrace(1);
}
{
nit__parser_prod___AExternClasskind___n_kwclass_61d(self, var_new_child); /* Direct call parser_prod#AExternClasskind#n_kwclass= on <self:AExternClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwextern= for (self: AExternClasskind, TKwextern) */
void nit__parser_prod___AExternClasskind___n_kwextern_61d(val* self, val* p0) {
val* var_node /* var node: TKwextern */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val = var_node; /* _n_kwextern on <self:AExternClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwextern> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwextern> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwclass= for (self: AExternClasskind, nullable TKwclass) */
void nit__parser_prod___AExternClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwclass */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AExternClasskind> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwclass> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwclass(TKwclass)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwclass(TKwclass)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwclass(TKwclass)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#visit_all for (self: AExternClasskind, Visitor) */
void nit__parser_prod___AExternClasskind___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwextern */;
val* var1 /* : nullable TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 722);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#init_aformaldef for (self: AFormaldef, nullable TClassid, nullable AType, nullable AAnnotations) */
void nit__parser_prod___AFormaldef___init_aformaldef(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_type /* var n_type: nullable AType */;
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
var_n_id = p0;
var_n_type = p1;
var_n_annotations = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 733);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val = var_n_id; /* _n_id on <self:AFormaldef> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 734);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val = var_n_type; /* _n_type on <self:AFormaldef> */
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
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFormaldef> */
var8 = NULL;
if (var_n_annotations == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var8) on <var_n_annotations:nullable AAnnotations> */
var_other = var8;
{
var12 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL14:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#replace_child for (self: AFormaldef, ANode, nullable ANode) */
void nit__parser_prod___AFormaldef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TClassid */;
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
val* var18 /* : nullable AAnnotations */;
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
var = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 743);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TClassid> */
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
/* <var_new_child:nullable ANode> isa TClassid */
cltype = type_nit__TClassid.color;
idtype = type_nit__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 744);
show_backtrace(1);
}
{
nit__parser_prod___AFormaldef___n_id_61d(self, var_new_child); /* Direct call parser_prod#AFormaldef#n_id= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 748);
show_backtrace(1);
}
{
nit__parser_prod___AFormaldef___n_type_61d(self, var_new_child); /* Direct call parser_prod#AFormaldef#n_type= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var18,var_old_child) on <var18:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype26 = type_nullable__nit__AAnnotations.color;
idtype27 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 752);
show_backtrace(1);
}
{
nit__parser_prod___AFormaldef___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AFormaldef#n_annotations= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_id= for (self: AFormaldef, TClassid) */
void nit__parser_prod___AFormaldef___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val = var_node; /* _n_id on <self:AFormaldef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_type= for (self: AFormaldef, nullable AType) */
void nit__parser_prod___AFormaldef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val = var_node; /* _n_type on <self:AFormaldef> */
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
/* method parser_prod#AFormaldef#n_annotations= for (self: AFormaldef, nullable AAnnotations) */
void nit__parser_prod___AFormaldef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFormaldef> */
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
/* method parser_prod#AFormaldef#visit_all for (self: AFormaldef, Visitor) */
void nit__parser_prod___AFormaldef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TClassid */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 776);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#init_asuperclass for (self: ASuperclass, nullable TKwsuper, nullable AType, nullable AAnnotations) */
void nit__parser_prod___ASuperclass___init_asuperclass(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwsuper = p0;
var_n_type = p1;
var_n_annotations = p2;
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 788);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperclass> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 789);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwsuper->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 790);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_type].val = var_n_type; /* _n_type on <self:ASuperclass> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 791);
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
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperclass> */
var = NULL;
if (var_n_annotations == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var) on <var_n_annotations:nullable AAnnotations> */
var_other = var;
{
var6 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#replace_child for (self: ASuperclass, ANode, nullable ANode) */
void nit__parser_prod___ASuperclass___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var7 /* : AType */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
val* var17 /* : nullable AAnnotations */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_kwsuper].val; /* _n_kwsuper on <self:ASuperclass> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 798);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 799);
show_backtrace(1);
}
{
nit__parser_prod___ASuperclass___n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod#ASuperclass#n_kwsuper= on <self:ASuperclass>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 802);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 803);
show_backtrace(1);
}
{
nit__parser_prod___ASuperclass___n_type_61d(self, var_new_child); /* Direct call parser_prod#ASuperclass#n_type= on <self:ASuperclass>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperclass> */
if (var17 == NULL) {
var18 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var17,var_old_child) on <var17:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype25 = type_nullable__nit__AAnnotations.color;
idtype26 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 807);
show_backtrace(1);
}
{
nit__parser_prod___ASuperclass___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ASuperclass#n_annotations= on <self:ASuperclass>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_kwsuper= for (self: ASuperclass, TKwsuper) */
void nit__parser_prod___ASuperclass___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperclass> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_type= for (self: ASuperclass, AType) */
void nit__parser_prod___ASuperclass___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_type].val = var_node; /* _n_type on <self:ASuperclass> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_annotations= for (self: ASuperclass, nullable AAnnotations) */
void nit__parser_prod___ASuperclass___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperclass> */
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
/* method parser_prod#ASuperclass#visit_all for (self: ASuperclass, Visitor) */
void nit__parser_prod___ASuperclass___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
val* var1 /* : AType */;
val* var2 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_kwsuper].val; /* _n_kwsuper on <self:ASuperclass> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 831);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 832);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperclass> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#init_aattrpropdef for (self: AAttrPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwvar, nullable TId, nullable AType, nullable AExpr, nullable AAnnotations, nullable AExpr) */
void nit__parser_prod___AAttrPropdef___init_aattrpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwvar /* var n_kwvar: nullable TKwvar */;
val* var_n_id2 /* var n_id2: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_block /* var n_block: nullable AExpr */;
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
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwvar = p3;
var_n_id2 = p4;
var_n_type = p5;
var_n_expr = p6;
var_n_annotations = p7;
var_n_block = p8;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AAttrPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_doc, var_other) /* == on <var_n_doc:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAttrPropdef> */
var7 = NULL;
if (var_n_kwredef == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var7) on <var_n_kwredef:nullable TKwredef> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL13:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 853);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAttrPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 854);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL14:(void)0;
}
}
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 855);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AAttrPropdef> */
if (var_n_kwvar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 856);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwvar,self) on <var_n_kwvar:nullable TKwvar> */
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwvar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwvar:nullable TKwvar> */
RET_LABEL15:(void)0;
}
}
if (unlikely(var_n_id2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 857);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val = var_n_id2; /* _n_id2 on <self:AAttrPropdef> */
if (var_n_id2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 858);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id2,self) on <var_n_id2:nullable TId> */
if (unlikely(var_n_id2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id2->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id2:nullable TId> */
RET_LABEL16:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val = var_n_type; /* _n_type on <self:AAttrPropdef> */
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
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrPropdef> */
var24 = NULL;
if (var_n_expr == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_expr,var24) on <var_n_expr:nullable AExpr> */
var_other = var24;
{
var28 = ((short int (*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_expr, var_other) /* == on <var_n_expr:nullable AExpr(AExpr)>*/;
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL30:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAttrPropdef> */
var31 = NULL;
if (var_n_annotations == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var31) on <var_n_annotations:nullable AAnnotations> */
var_other = var31;
{
var35 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL37:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val = var_n_block; /* _n_block on <self:AAttrPropdef> */
var38 = NULL;
if (var_n_block == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var38) on <var_n_block:nullable AExpr> */
var_other = var38;
{
var42 = ((short int (*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL44:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#replace_child for (self: AAttrPropdef, ANode, nullable ANode) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : TKwvar */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : TId */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
val* var50 /* : nullable AType */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
val* var61 /* : nullable AExpr */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
val* var72 /* : nullable AAnnotations */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
val* var83 /* : nullable AExpr */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
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
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 872);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_doc= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
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
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 876);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_kwredef= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
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
cltype27 = type_nit__AVisibility.color;
idtype28 = type_nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 880);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_visibility= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 883);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TKwvar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TKwvar> */
var35 = var30 == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
/* <var_new_child:nullable ANode> isa TKwvar */
cltype37 = type_nit__TKwvar.color;
idtype38 = type_nit__TKwvar.id;
if(var_new_child == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_new_child->type->table_size) {
var36 = 0;
} else {
var36 = var_new_child->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
var_class_name39 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwvar", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 884);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___n_kwvar_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_kwvar= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 887);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var40,var_old_child) on <var40:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var40,var_other) on <var40:TId> */
var45 = var40 == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
/* <var_new_child:nullable ANode> isa TId */
cltype47 = type_nit__TId.color;
idtype48 = type_nit__TId.id;
if(var_new_child == NULL) {
var46 = 0;
} else {
if(cltype47 >= var_new_child->type->table_size) {
var46 = 0;
} else {
var46 = var_new_child->type->type_table[cltype47] == idtype48;
}
}
if (unlikely(!var46)) {
var_class_name49 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 888);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___n_id2_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_id2= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
if (var50 == NULL) {
var51 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var50,var_old_child) on <var50:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var50,var_other) on <var50:nullable AType(AType)> */
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
/* <var_new_child:nullable ANode> isa nullable AType */
cltype58 = type_nullable__nit__AType.color;
idtype59 = type_nullable__nit__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 892);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___n_type_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_type= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var61 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
if (var61 == NULL) {
var62 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var61,var_old_child) on <var61:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var61,var_other) on <var61:nullable AExpr(AExpr)> */
var67 = var61 == var_other;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype69 = type_nullable__nit__AExpr.color;
idtype70 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var68 = 1;
} else {
if(cltype69 >= var_new_child->type->table_size) {
var68 = 0;
} else {
var68 = var_new_child->type->type_table[cltype69] == idtype70;
}
}
if (unlikely(!var68)) {
var_class_name71 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 896);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_expr= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var72 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
if (var72 == NULL) {
var73 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var72,var_old_child) on <var72:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var72,var_other) on <var72:nullable AAnnotations(AAnnotations)> */
var78 = var72 == var_other;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
if (var73){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype80 = type_nullable__nit__AAnnotations.color;
idtype81 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var79 = 1;
} else {
if(cltype80 >= var_new_child->type->table_size) {
var79 = 0;
} else {
var79 = var_new_child->type->type_table[cltype80] == idtype81;
}
}
if (unlikely(!var79)) {
var_class_name82 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 900);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_annotations= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var83 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
if (var83 == NULL) {
var84 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var83,var_old_child) on <var83:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var83,var_other) on <var83:nullable AExpr(AExpr)> */
var89 = var83 == var_other;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype91 = type_nullable__nit__AExpr.color;
idtype92 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var90 = 1;
} else {
if(cltype91 >= var_new_child->type->table_size) {
var90 = 0;
} else {
var90 = var_new_child->type->type_table[cltype91] == idtype92;
}
}
if (unlikely(!var90)) {
var_class_name93 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 904);
show_backtrace(1);
}
{
nit__parser_prod___AAttrPropdef___n_block_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_block= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_doc= for (self: AAttrPropdef, nullable ADoc) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AAttrPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwredef= for (self: AAttrPropdef, nullable TKwredef) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AAttrPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_visibility= for (self: AAttrPropdef, nullable AVisibility) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AAttrPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 922);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwvar= for (self: AAttrPropdef, TKwvar) */
void nit__parser_prod___AAttrPropdef___n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val = var_node; /* _n_kwvar on <self:AAttrPropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwvar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwvar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_id2= for (self: AAttrPropdef, TId) */
void nit__parser_prod___AAttrPropdef___n_id2_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val = var_node; /* _n_id2 on <self:AAttrPropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_type= for (self: AAttrPropdef, nullable AType) */
void nit__parser_prod___AAttrPropdef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val = var_node; /* _n_type on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_expr= for (self: AAttrPropdef, nullable AExpr) */
void nit__parser_prod___AAttrPropdef___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val = var_node; /* _n_expr on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_annotations= for (self: AAttrPropdef, nullable AAnnotations) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_block= for (self: AAttrPropdef, nullable AExpr) */
void nit__parser_prod___AAttrPropdef___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val = var_node; /* _n_block on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#visit_all for (self: AAttrPropdef, Visitor) */
void nit__parser_prod___AAttrPropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwvar */;
val* var4 /* : TId */;
val* var5 /* : nullable AType */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable AAnnotations */;
val* var8 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 961);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 962);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#init_amainmethpropdef for (self: AMainMethPropdef, nullable TKwredef, nullable AExpr) */
void nit__parser_prod___AMainMethPropdef___init_amainmethpropdef(val* self, val* p0, val* p1) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_block /* var n_block: nullable AExpr */;
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
var_n_kwredef = p0;
var_n_block = p1;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMainMethPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMainMethPropdef> */
var7 = NULL;
if (var_n_block == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var7) on <var_n_block:nullable AExpr> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL13:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#replace_child for (self: AMainMethPropdef, ANode, nullable ANode) */
void nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
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
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 984);
show_backtrace(1);
}
{
nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AMainMethPropdef#n_kwredef= on <self:AMainMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 988);
show_backtrace(1);
}
{
nit__parser_prod___AMainMethPropdef___nit__parser_nodes__AMethPropdef__n_block_61d(self, var_new_child); /* Direct call parser_prod#AMainMethPropdef#n_block= on <self:AMainMethPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_kwredef= for (self: AMainMethPropdef, nullable TKwredef) */
void nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AMainMethPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMainMethPropdef#n_block= for (self: AMainMethPropdef, nullable AExpr) */
void nit__parser_prod___AMainMethPropdef___nit__parser_nodes__AMethPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AMainMethPropdef> */
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
/* method parser_prod#AMainMethPropdef#visit_all for (self: AMainMethPropdef, Visitor) */
void nit__parser_prod___AMainMethPropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#init_atypepropdef for (self: ATypePropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwtype, nullable TClassid, nullable AType, nullable AAnnotations) */
void nit__parser_prod___ATypePropdef___init_atypepropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
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
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwtype = p3;
var_n_id = p4;
var_n_type = p5;
var_n_annotations = p6;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:ATypePropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_doc, var_other) /* == on <var_n_doc:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:ATypePropdef> */
var7 = NULL;
if (var_n_kwredef == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var7) on <var_n_kwredef:nullable TKwredef> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL13:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1026);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ATypePropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1027);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL14:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1028);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ATypePropdef> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1029);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_kwtype->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL15:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1030);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val = var_n_id; /* _n_id on <self:ATypePropdef> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1031);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1032);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val = var_n_type; /* _n_type on <self:ATypePropdef> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1033);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL17:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATypePropdef> */
var18 = NULL;
if (var_n_annotations == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var18) on <var_n_annotations:nullable AAnnotations> */
var_other = var18;
{
var22 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL24:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#replace_child for (self: ATypePropdef, ANode, nullable ANode) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : TClassid */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
val* var50 /* : AType */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
val* var60 /* : nullable AAnnotations */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ATypePropdef> */
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
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1041);
show_backtrace(1);
}
{
nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_doc= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
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
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1045);
show_backtrace(1);
}
{
nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_kwredef= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
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
cltype27 = type_nit__AVisibility.color;
idtype28 = type_nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1049);
show_backtrace(1);
}
{
nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_visibility= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1052);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TKwtype> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TKwtype> */
var35 = var30 == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
/* <var_new_child:nullable ANode> isa TKwtype */
cltype37 = type_nit__TKwtype.color;
idtype38 = type_nit__TKwtype.id;
if(var_new_child == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_new_child->type->table_size) {
var36 = 0;
} else {
var36 = var_new_child->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
var_class_name39 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwtype", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1053);
show_backtrace(1);
}
{
nit__parser_prod___ATypePropdef___n_kwtype_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_kwtype= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1056);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var40,var_old_child) on <var40:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var40,var_other) on <var40:TClassid> */
var45 = var40 == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
/* <var_new_child:nullable ANode> isa TClassid */
cltype47 = type_nit__TClassid.color;
idtype48 = type_nit__TClassid.id;
if(var_new_child == NULL) {
var46 = 0;
} else {
if(cltype47 >= var_new_child->type->table_size) {
var46 = 0;
} else {
var46 = var_new_child->type->type_table[cltype47] == idtype48;
}
}
if (unlikely(!var46)) {
var_class_name49 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1057);
show_backtrace(1);
}
{
nit__parser_prod___ATypePropdef___n_id_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_id= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1060);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var50,var_old_child) on <var50:AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var50,var_other) on <var50:AType> */
var55 = var50 == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
/* <var_new_child:nullable ANode> isa AType */
cltype57 = type_nit__AType.color;
idtype58 = type_nit__AType.id;
if(var_new_child == NULL) {
var56 = 0;
} else {
if(cltype57 >= var_new_child->type->table_size) {
var56 = 0;
} else {
var56 = var_new_child->type->type_table[cltype57] == idtype58;
}
}
if (unlikely(!var56)) {
var_class_name59 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1061);
show_backtrace(1);
}
{
nit__parser_prod___ATypePropdef___n_type_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_type= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var60 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
if (var60 == NULL) {
var61 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var60,var_old_child) on <var60:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var60,var_other) on <var60:nullable AAnnotations(AAnnotations)> */
var66 = var60 == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype68 = type_nullable__nit__AAnnotations.color;
idtype69 = type_nullable__nit__AAnnotations.id;
if(var_new_child == NULL) {
var67 = 1;
} else {
if(cltype68 >= var_new_child->type->table_size) {
var67 = 0;
} else {
var67 = var_new_child->type->type_table[cltype68] == idtype69;
}
}
if (unlikely(!var67)) {
var_class_name70 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1065);
show_backtrace(1);
}
{
nit__parser_prod___ATypePropdef___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ATypePropdef#n_annotations= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_doc= for (self: ATypePropdef, nullable ADoc) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:ATypePropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwredef= for (self: ATypePropdef, nullable TKwredef) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:ATypePropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_visibility= for (self: ATypePropdef, nullable AVisibility) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:ATypePropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1083);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_kwtype= for (self: ATypePropdef, TKwtype) */
void nit__parser_prod___ATypePropdef___n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val = var_node; /* _n_kwtype on <self:ATypePropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwtype> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtype> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_id= for (self: ATypePropdef, TClassid) */
void nit__parser_prod___ATypePropdef___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val = var_node; /* _n_id on <self:ATypePropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_type= for (self: ATypePropdef, AType) */
void nit__parser_prod___ATypePropdef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val = var_node; /* _n_type on <self:ATypePropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ATypePropdef#n_annotations= for (self: ATypePropdef, nullable AAnnotations) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATypePropdef> */
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
/* method parser_prod#ATypePropdef#visit_all for (self: ATypePropdef, Visitor) */
void nit__parser_prod___ATypePropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwtype */;
val* var4 /* : TClassid */;
val* var5 /* : AType */;
val* var6 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ATypePropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1112);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1113);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1114);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#init_amethpropdef for (self: AMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable TKwinit, nullable TKwnew, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExternCalls, nullable AExternCodeBlock, nullable AExpr) */
void nit__parser_prod___AMethPropdef___init_amethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_extern_calls /* var n_extern_calls: nullable AExternCalls */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
val* var_n_block /* var n_block: nullable AExpr */;
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
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var51 /* : null */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var58 /* : null */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmeth = p3;
var_n_kwinit = p4;
var_n_kwnew = p5;
var_n_methid = p6;
var_n_signature = p7;
var_n_annotations = p8;
var_n_extern_calls = p9;
var_n_extern_code_block = p10;
var_n_block = p11;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AMethPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_doc, var_other) /* == on <var_n_doc:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMethPropdef> */
var7 = NULL;
if (var_n_kwredef == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwredef,var7) on <var_n_kwredef:nullable TKwredef> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwredef, var_other) /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL13:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1138);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AMethPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1139);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL14:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AMethPropdef> */
var15 = NULL;
if (var_n_kwmeth == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwmeth,var15) on <var_n_kwmeth:nullable TKwmeth> */
var_other = var15;
{
var19 = ((short int (*)(val* self, val* p0))(var_n_kwmeth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwmeth, var_other) /* == on <var_n_kwmeth:nullable TKwmeth(TKwmeth)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwmeth,self) on <var_n_kwmeth:nullable TKwmeth(TKwmeth)> */
var_n_kwmeth->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwmeth:nullable TKwmeth(TKwmeth)> */
RET_LABEL21:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AMethPropdef> */
var22 = NULL;
if (var_n_kwinit == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,var22) on <var_n_kwinit:nullable TKwinit> */
var_other = var22;
{
var26 = ((short int (*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwinit, var_other) /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/;
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwinit,self) on <var_n_kwinit:nullable TKwinit(TKwinit)> */
var_n_kwinit->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinit:nullable TKwinit(TKwinit)> */
RET_LABEL28:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:AMethPropdef> */
var29 = NULL;
if (var_n_kwnew == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var29) on <var_n_kwnew:nullable TKwnew> */
var_other = var29;
{
var33 = ((short int (*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnew,self) on <var_n_kwnew:nullable TKwnew(TKwnew)> */
var_n_kwnew->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnew:nullable TKwnew(TKwnew)> */
RET_LABEL35:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AMethPropdef> */
var36 = NULL;
if (var_n_methid == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_methid,var36) on <var_n_methid:nullable AMethid> */
var_other = var36;
{
var40 = ((short int (*)(val* self, val* p0))(var_n_methid->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_methid, var_other) /* == on <var_n_methid:nullable AMethid(AMethid)>*/;
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid(AMethid)> */
var_n_methid->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid(AMethid)> */
RET_LABEL42:(void)0;
}
}
} else {
}
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1148);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AMethPropdef> */
if (var_n_signature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1149);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_signature,self) on <var_n_signature:nullable ASignature> */
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_signature->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_signature:nullable ASignature> */
RET_LABEL43:(void)0;
}
}
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AMethPropdef> */
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
var48 = ((short int (*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL50:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AMethPropdef> */
var51 = NULL;
if (var_n_extern_calls == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_calls,var51) on <var_n_extern_calls:nullable AExternCalls> */
var_other = var51;
{
var55 = ((short int (*)(val* self, val* p0))(var_n_extern_calls->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_extern_calls, var_other) /* == on <var_n_extern_calls:nullable AExternCalls(AExternCalls)>*/;
}
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_calls,self) on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
var_n_extern_calls->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
RET_LABEL57:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AMethPropdef> */
var58 = NULL;
if (var_n_extern_code_block == NULL) {
var59 = 0; /* is null */
} else {
var59 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_code_block,var58) on <var_n_extern_code_block:nullable AExternCodeBlock> */
var_other = var58;
{
var62 = ((short int (*)(val* self, val* p0))(var_n_extern_code_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_extern_code_block, var_other) /* == on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
}
var63 = !var62;
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_code_block,self) on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var_n_extern_code_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL64:(void)0;
}
}
} else {
}
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMethPropdef> */
var65 = NULL;
if (var_n_block == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var65) on <var_n_block:nullable AExpr> */
var_other = var65;
{
var69 = ((short int (*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
}
var70 = !var69;
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL71:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#replace_child for (self: AMethPropdef, ANode, nullable ANode) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var41 /* : nullable TKwinit */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable TKwnew */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
val* var63 /* : nullable AMethid */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
val* var74 /* : nullable ASignature */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
val* var85 /* : nullable AAnnotations */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
val* var96 /* : nullable AExternCalls */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
val* var107 /* : nullable AExternCodeBlock */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
val* var118 /* : nullable AExpr */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
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
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1163);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_doc= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
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
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1167);
show_backtrace(1);
}
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child) /* n_kwredef= on <self:AMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
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
cltype27 = type_nit__AVisibility.color;
idtype28 = type_nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1171);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_visibility= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
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
/* <var_new_child:nullable ANode> isa nullable TKwmeth */
cltype38 = type_nullable__nit__TKwmeth.color;
idtype39 = type_nullable__nit__TKwmeth.id;
if(var_new_child == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_new_child->type->table_size) {
var37 = 0;
} else {
var37 = var_new_child->type->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwmeth", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1175);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___n_kwmeth_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_kwmeth= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable TKwinit> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable TKwinit(TKwinit)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwinit */
cltype49 = type_nullable__nit__TKwinit.color;
idtype50 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwinit", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1179);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___n_kwinit_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_kwinit= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable TKwnew> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable TKwnew(TKwnew)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwnew */
cltype60 = type_nullable__nit__TKwnew.color;
idtype61 = type_nullable__nit__TKwnew.id;
if(var_new_child == NULL) {
var59 = 1;
} else {
if(cltype60 >= var_new_child->type->table_size) {
var59 = 0;
} else {
var59 = var_new_child->type->type_table[cltype60] == idtype61;
}
}
if (unlikely(!var59)) {
var_class_name62 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwnew", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1183);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___n_kwnew_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_kwnew= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
if (var63 == NULL) {
var64 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var63,var_old_child) on <var63:nullable AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:nullable AMethid(AMethid)> */
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
/* <var_new_child:nullable ANode> isa nullable AMethid */
cltype71 = type_nullable__nit__AMethid.color;
idtype72 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AMethid", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1187);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___n_methid_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_methid= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
if (var74 == NULL) {
var75 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var74,var_old_child) on <var74:nullable ASignature> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var74,var_other) on <var74:nullable ASignature(ASignature)> */
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
/* <var_new_child:nullable ANode> isa ASignature */
cltype82 = type_nit__ASignature.color;
idtype83 = type_nit__ASignature.id;
if(var_new_child == NULL) {
var81 = 0;
} else {
if(cltype82 >= var_new_child->type->table_size) {
var81 = 0;
} else {
var81 = var_new_child->type->type_table[cltype82] == idtype83;
}
}
if (unlikely(!var81)) {
var_class_name84 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ASignature", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1191);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___n_signature_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_signature= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var85 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AMethPropdef> */
if (var85 == NULL) {
var86 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var85,var_old_child) on <var85:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var85,var_other) on <var85:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype93 = type_nullable__nit__AAnnotations.color;
idtype94 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1195);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___nit__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_annotations= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var96 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
if (var96 == NULL) {
var97 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var96,var_old_child) on <var96:nullable AExternCalls> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var96,var_other) on <var96:nullable AExternCalls(AExternCalls)> */
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
/* <var_new_child:nullable ANode> isa nullable AExternCalls */
cltype104 = type_nullable__nit__AExternCalls.color;
idtype105 = type_nullable__nit__AExternCalls.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCalls", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1199);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___n_extern_calls_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_extern_calls= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var107 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
if (var107 == NULL) {
var108 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var107,var_old_child) on <var107:nullable AExternCodeBlock> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var107,var_other) on <var107:nullable AExternCodeBlock(AExternCodeBlock)> */
var113 = var107 == var_other;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (var108){
/* <var_new_child:nullable ANode> isa nullable AExternCodeBlock */
cltype115 = type_nullable__nit__AExternCodeBlock.color;
idtype116 = type_nullable__nit__AExternCodeBlock.id;
if(var_new_child == NULL) {
var114 = 1;
} else {
if(cltype115 >= var_new_child->type->table_size) {
var114 = 0;
} else {
var114 = var_new_child->type->type_table[cltype115] == idtype116;
}
}
if (unlikely(!var114)) {
var_class_name117 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCodeBlock", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1203);
show_backtrace(1);
}
{
nit__parser_prod___AMethPropdef___n_extern_code_block_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_extern_code_block= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var118 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
if (var118 == NULL) {
var119 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var118,var_old_child) on <var118:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var118,var_other) on <var118:nullable AExpr(AExpr)> */
var124 = var118 == var_other;
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
var119 = var120;
}
if (var119){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype126 = type_nullable__nit__AExpr.color;
idtype127 = type_nullable__nit__AExpr.id;
if(var_new_child == NULL) {
var125 = 1;
} else {
if(cltype126 >= var_new_child->type->table_size) {
var125 = 0;
} else {
var125 = var_new_child->type->type_table[cltype126] == idtype127;
}
}
if (unlikely(!var125)) {
var_class_name128 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1207);
show_backtrace(1);
}
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__AMethPropdef__n_block_61d]))(self, var_new_child) /* n_block= on <self:AMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_doc= for (self: AMethPropdef, nullable ADoc) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AMethPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ADoc(ADoc)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwredef= for (self: AMethPropdef, nullable TKwredef) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AMethPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwredef(TKwredef)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_visibility= for (self: AMethPropdef, nullable AVisibility) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1225);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwmeth= for (self: AMethPropdef, nullable TKwmeth) */
void nit__parser_prod___AMethPropdef___n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwmeth */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwmeth> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwmeth(TKwmeth)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwmeth(TKwmeth)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwmeth(TKwmeth)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwinit= for (self: AMethPropdef, nullable TKwinit) */
void nit__parser_prod___AMethPropdef___n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwinit */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val = var_node; /* _n_kwinit on <self:AMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwinit> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwinit(TKwinit)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwinit(TKwinit)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwinit(TKwinit)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwnew= for (self: AMethPropdef, nullable TKwnew) */
void nit__parser_prod___AMethPropdef___n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnew */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val = var_node; /* _n_kwnew on <self:AMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var) on <var_node:nullable TKwnew> */
var_other = var;
{
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwnew(TKwnew)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwnew(TKwnew)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwnew(TKwnew)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_methid= for (self: AMethPropdef, nullable AMethid) */
void nit__parser_prod___AMethPropdef___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AMethPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AMethid(AMethid)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AMethid(AMethid)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AMethid(AMethid)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_signature= for (self: AMethPropdef, nullable ASignature) */
void nit__parser_prod___AMethPropdef___n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1250);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ASignature> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ASignature> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_annotations= for (self: AMethPropdef, nullable AAnnotations) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_extern_calls= for (self: AMethPropdef, nullable AExternCalls) */
void nit__parser_prod___AMethPropdef___n_extern_calls_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCalls */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val = var_node; /* _n_extern_calls on <self:AMethPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExternCalls(AExternCalls)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExternCalls(AExternCalls)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCalls(AExternCalls)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_extern_code_block= for (self: AMethPropdef, nullable AExternCodeBlock) */
void nit__parser_prod___AMethPropdef___n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AMethPropdef> */
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
var4 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_block= for (self: AMethPropdef, nullable AExpr) */
void nit__parser_prod___AMethPropdef___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#visit_all for (self: AMethPropdef, Visitor) */
void nit__parser_prod___AMethPropdef___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : nullable TKwmeth */;
val* var4 /* : nullable TKwinit */;
val* var5 /* : nullable TKwnew */;
val* var6 /* : nullable AMethid */;
val* var7 /* : nullable ASignature */;
val* var8 /* : nullable AAnnotations */;
val* var9 /* : nullable AExternCalls */;
val* var10 /* : nullable AExternCodeBlock */;
val* var11 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var10 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var10); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var11 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
{
nit___nit__Visitor___enter_visit(var_v, var11); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#init_aidmethid for (self: AIdMethid, nullable TId) */
void nit__parser_prod___AIdMethid___init_aidmethid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1295);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val = var_n_id; /* _n_id on <self:AIdMethid> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1296);
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
/* method parser_prod#AIdMethid#replace_child for (self: AIdMethid, ANode, nullable ANode) */
void nit__parser_prod___AIdMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1301);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1302);
show_backtrace(1);
}
{
nit__parser_prod___AIdMethid___n_id_61d(self, var_new_child); /* Direct call parser_prod#AIdMethid#n_id= on <self:AIdMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#n_id= for (self: AIdMethid, TId) */
void nit__parser_prod___AIdMethid___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val = var_node; /* _n_id on <self:AIdMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIdMethid#visit_all for (self: AIdMethid, Visitor) */
void nit__parser_prod___AIdMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1316);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#init_aplusmethid for (self: APlusMethid, nullable TPlus) */
void nit__parser_prod___APlusMethid___init_aplusmethid(val* self, val* p0) {
val* var_n_plus /* var n_plus: nullable TPlus */;
var_n_plus = p0;
if (unlikely(var_n_plus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1324);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__APlusMethid___n_plus].val = var_n_plus; /* _n_plus on <self:APlusMethid> */
if (var_n_plus == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1325);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_plus,self) on <var_n_plus:nullable TPlus> */
if (unlikely(var_n_plus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_plus->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_plus:nullable TPlus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#replace_child for (self: APlusMethid, ANode, nullable ANode) */
void nit__parser_prod___APlusMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPlus */;
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
var = self->attrs[COLOR_nit__parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_plus");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1330);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TPlus> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TPlus> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1331);
show_backtrace(1);
}
{
nit__parser_prod___APlusMethid___n_plus_61d(self, var_new_child); /* Direct call parser_prod#APlusMethid#n_plus= on <self:APlusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#n_plus= for (self: APlusMethid, TPlus) */
void nit__parser_prod___APlusMethid___n_plus_61d(val* self, val* p0) {
val* var_node /* var node: TPlus */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__APlusMethid___n_plus].val = var_node; /* _n_plus on <self:APlusMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TPlus> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TPlus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APlusMethid#visit_all for (self: APlusMethid, Visitor) */
void nit__parser_prod___APlusMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPlus */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__APlusMethid___n_plus].val; /* _n_plus on <self:APlusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_plus");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1345);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#init_aminusmethid for (self: AMinusMethid, nullable TMinus) */
void nit__parser_prod___AMinusMethid___init_aminusmethid(val* self, val* p0) {
val* var_n_minus /* var n_minus: nullable TMinus */;
var_n_minus = p0;
if (unlikely(var_n_minus == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1353);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AMinusMethid___n_minus].val = var_n_minus; /* _n_minus on <self:AMinusMethid> */
if (var_n_minus == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1354);
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
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#replace_child for (self: AMinusMethid, ANode, nullable ANode) */
void nit__parser_prod___AMinusMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nit__parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1359);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1360);
show_backtrace(1);
}
{
nit__parser_prod___AMinusMethid___n_minus_61d(self, var_new_child); /* Direct call parser_prod#AMinusMethid#n_minus= on <self:AMinusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#n_minus= for (self: AMinusMethid, TMinus) */
void nit__parser_prod___AMinusMethid___n_minus_61d(val* self, val* p0) {
val* var_node /* var node: TMinus */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AMinusMethid___n_minus].val = var_node; /* _n_minus on <self:AMinusMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TMinus> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TMinus> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMinusMethid#visit_all for (self: AMinusMethid, Visitor) */
void nit__parser_prod___AMinusMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TMinus */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AMinusMethid___n_minus].val; /* _n_minus on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_minus");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1374);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#init_astarmethid for (self: AStarMethid, nullable TStar) */
void nit__parser_prod___AStarMethid___init_astarmethid(val* self, val* p0) {
val* var_n_star /* var n_star: nullable TStar */;
var_n_star = p0;
if (unlikely(var_n_star == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1382);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStarMethid___n_star].val = var_n_star; /* _n_star on <self:AStarMethid> */
if (var_n_star == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1383);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_star,self) on <var_n_star:nullable TStar> */
if (unlikely(var_n_star == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_star->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_star:nullable TStar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#replace_child for (self: AStarMethid, ANode, nullable ANode) */
void nit__parser_prod___AStarMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStar */;
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
var = self->attrs[COLOR_nit__parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_star");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1388);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TStar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TStar> */
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
/* <var_new_child:nullable ANode> isa TStar */
cltype = type_nit__TStar.color;
idtype = type_nit__TStar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1389);
show_backtrace(1);
}
{
nit__parser_prod___AStarMethid___n_star_61d(self, var_new_child); /* Direct call parser_prod#AStarMethid#n_star= on <self:AStarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#n_star= for (self: AStarMethid, TStar) */
void nit__parser_prod___AStarMethid___n_star_61d(val* self, val* p0) {
val* var_node /* var node: TStar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStarMethid___n_star].val = var_node; /* _n_star on <self:AStarMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TStar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TStar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarMethid#visit_all for (self: AStarMethid, Visitor) */
void nit__parser_prod___AStarMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStarMethid___n_star].val; /* _n_star on <self:AStarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_star");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1403);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#init_astarstarmethid for (self: AStarstarMethid, nullable TStarstar) */
void nit__parser_prod___AStarstarMethid___init_astarstarmethid(val* self, val* p0) {
val* var_n_starstar /* var n_starstar: nullable TStarstar */;
var_n_starstar = p0;
if (unlikely(var_n_starstar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1411);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__AStarstarMethid___n_starstar].val = var_n_starstar; /* _n_starstar on <self:AStarstarMethid> */
if (var_n_starstar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1412);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_starstar,self) on <var_n_starstar:nullable TStarstar> */
if (unlikely(var_n_starstar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_starstar->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_starstar:nullable TStarstar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#replace_child for (self: AStarstarMethid, ANode, nullable ANode) */
void nit__parser_prod___AStarstarMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TStarstar */;
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
var = self->attrs[COLOR_nit__parser_nodes__AStarstarMethid___n_starstar].val; /* _n_starstar on <self:AStarstarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starstar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1417);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TStarstar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TStarstar> */
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
/* <var_new_child:nullable ANode> isa TStarstar */
cltype = type_nit__TStarstar.color;
idtype = type_nit__TStarstar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TStarstar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1418);
show_backtrace(1);
}
{
nit__parser_prod___AStarstarMethid___n_starstar_61d(self, var_new_child); /* Direct call parser_prod#AStarstarMethid#n_starstar= on <self:AStarstarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#n_starstar= for (self: AStarstarMethid, TStarstar) */
void nit__parser_prod___AStarstarMethid___n_starstar_61d(val* self, val* p0) {
val* var_node /* var node: TStarstar */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__AStarstarMethid___n_starstar].val = var_node; /* _n_starstar on <self:AStarstarMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TStarstar> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TStarstar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStarstarMethid#visit_all for (self: AStarstarMethid, Visitor) */
void nit__parser_prod___AStarstarMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TStarstar */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__AStarstarMethid___n_starstar].val; /* _n_starstar on <self:AStarstarMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_starstar");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1432);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#init_aslashmethid for (self: ASlashMethid, nullable TSlash) */
void nit__parser_prod___ASlashMethid___init_aslashmethid(val* self, val* p0) {
val* var_n_slash /* var n_slash: nullable TSlash */;
var_n_slash = p0;
if (unlikely(var_n_slash == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1440);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__ASlashMethid___n_slash].val = var_n_slash; /* _n_slash on <self:ASlashMethid> */
if (var_n_slash == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1441);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_slash,self) on <var_n_slash:nullable TSlash> */
if (unlikely(var_n_slash == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_slash->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_slash:nullable TSlash> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#replace_child for (self: ASlashMethid, ANode, nullable ANode) */
void nit__parser_prod___ASlashMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TSlash */;
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
var = self->attrs[COLOR_nit__parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_slash");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1446);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TSlash> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TSlash> */
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
/* <var_new_child:nullable ANode> isa TSlash */
cltype = type_nit__TSlash.color;
idtype = type_nit__TSlash.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TSlash", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1447);
show_backtrace(1);
}
{
nit__parser_prod___ASlashMethid___n_slash_61d(self, var_new_child); /* Direct call parser_prod#ASlashMethid#n_slash= on <self:ASlashMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#n_slash= for (self: ASlashMethid, TSlash) */
void nit__parser_prod___ASlashMethid___n_slash_61d(val* self, val* p0) {
val* var_node /* var node: TSlash */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__ASlashMethid___n_slash].val = var_node; /* _n_slash on <self:ASlashMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TSlash> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TSlash> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASlashMethid#visit_all for (self: ASlashMethid, Visitor) */
void nit__parser_prod___ASlashMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TSlash */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__ASlashMethid___n_slash].val; /* _n_slash on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_slash");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1461);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#init_apercentmethid for (self: APercentMethid, nullable TPercent) */
void nit__parser_prod___APercentMethid___init_apercentmethid(val* self, val* p0) {
val* var_n_percent /* var n_percent: nullable TPercent */;
var_n_percent = p0;
if (unlikely(var_n_percent == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1469);
show_backtrace(1);
}
self->attrs[COLOR_nit__parser_nodes__APercentMethid___n_percent].val = var_n_percent; /* _n_percent on <self:APercentMethid> */
if (var_n_percent == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1470);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_percent,self) on <var_n_percent:nullable TPercent> */
if (unlikely(var_n_percent == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var_n_percent->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_percent:nullable TPercent> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#replace_child for (self: APercentMethid, ANode, nullable ANode) */
void nit__parser_prod___APercentMethid___nit__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TPercent */;
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
var = self->attrs[COLOR_nit__parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_percent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1475);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TPercent> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TPercent> */
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
/* <var_new_child:nullable ANode> isa TPercent */
cltype = type_nit__TPercent.color;
idtype = type_nit__TPercent.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPercent", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1476);
show_backtrace(1);
}
{
nit__parser_prod___APercentMethid___n_percent_61d(self, var_new_child); /* Direct call parser_prod#APercentMethid#n_percent= on <self:APercentMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#n_percent= for (self: APercentMethid, TPercent) */
void nit__parser_prod___APercentMethid___n_percent_61d(val* self, val* p0) {
val* var_node /* var node: TPercent */;
var_node = p0;
self->attrs[COLOR_nit__parser_nodes__APercentMethid___n_percent].val = var_node; /* _n_percent on <self:APercentMethid> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TPercent> */
var_node->attrs[COLOR_nit__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TPercent> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APercentMethid#visit_all for (self: APercentMethid, Visitor) */
void nit__parser_prod___APercentMethid___nit__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TPercent */;
var_v = p0;
var = self->attrs[COLOR_nit__parser_nodes__APercentMethid___n_percent].val; /* _n_percent on <self:APercentMethid> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_percent");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_prod, 1490);
show_backtrace(1);
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
