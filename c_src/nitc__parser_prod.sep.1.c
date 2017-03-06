#include "nitc__parser_prod.sep.0.h"
/* method parser_prod$AModule$init_amodule for (self: AModule, nullable AModuledecl, Collection[Object], Collection[Object], Collection[Object]) */
void nitc__parser_prod___AModule___init_amodule(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_moduledecl /* var n_moduledecl: nullable AModuledecl */;
val* var_n_imports /* var n_imports: Collection[Object] */;
val* var_n_extern_code_blocks /* var n_extern_code_blocks: Collection[Object] */;
val* var_n_classdefs /* var n_classdefs: Collection[Object] */;
short int var /* : Bool */;
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
{
{ /* Inline kernel$Object$init (self) on <self:AModule> */
RET_LABEL1:(void)0;
}
}
var_n_moduledecl = p0;
var_n_imports = p1;
var_n_extern_code_blocks = p2;
var_n_classdefs = p3;
self->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val = var_n_moduledecl; /* _n_moduledecl on <self:AModule> */
if (var_n_moduledecl == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_moduledecl,((val*)NULL)) on <var_n_moduledecl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_moduledecl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_moduledecl, var_other); /* == on <var_n_moduledecl:nullable AModuledecl(AModuledecl)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_moduledecl,self) on <var_n_moduledecl:nullable AModuledecl(AModuledecl)> */
var_n_moduledecl->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_moduledecl:nullable AModuledecl(AModuledecl)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AModule$n_imports (self) on <self:AModule> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var7, var_n_imports); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var7:ANodes[AImport]>*/
}
{
{ /* Inline parser_nodes$AModule$n_extern_code_blocks (self) on <self:AModule> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1122);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var10, var_n_extern_code_blocks); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var10:ANodes[AExternCodeBlock]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (self) on <self:AModule> */
var15 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var13, var_n_classdefs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var13:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
/* method parser_prod$AModule$replace_child for (self: AModule, ANode, nullable ANode) */
void nitc__parser_prod___AModule___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable AModuledecl> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable AModuledecl(AModuledecl)> */
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
cltype = type_nullable__nitc__AModuledecl.color;
idtype = type_nullable__nitc__AModuledecl.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 27);
fatal_exit(1);
}
{
nitc__parser_prod___AModule___n_moduledecl_61d(self, var_new_child); /* Direct call parser_prod$AModule$n_moduledecl= on <self:AModule>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AModule$n_imports (self) on <self:AModule> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
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
{
{ /* Inline parser_nodes$AModule$n_extern_code_blocks (self) on <self:AModule> */
var14 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1122);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nitc___nitc__ANodes___replace_child(var12, var_old_child, var_new_child);
}
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (self) on <self:AModule> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__ANodes___replace_child(var16, var_old_child, var_new_child);
}
if (var19){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModule$n_moduledecl= for (self: AModule, nullable AModuledecl) */
void nitc__parser_prod___AModule___n_moduledecl_61d(val* self, val* p0) {
val* var_node /* var node: nullable AModuledecl */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val = var_node; /* _n_moduledecl on <self:AModule> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AModuledecl(AModuledecl)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AModuledecl(AModuledecl)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AModuledecl(AModuledecl)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModule$visit_all for (self: AModule, Visitor) */
void nitc__parser_prod___AModule___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModuledecl */;
val* var1 /* : ANodes[AImport] */;
val* var3 /* : ANodes[AImport] */;
val* var4 /* : ANodes[AExternCodeBlock] */;
val* var6 /* : ANodes[AExternCodeBlock] */;
val* var7 /* : ANodes[AClassdef] */;
val* var9 /* : ANodes[AClassdef] */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AModule$n_imports (self) on <self:AModule> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var1:ANodes[AImport]>*/
}
{
{ /* Inline parser_nodes$AModule$n_extern_code_blocks (self) on <self:AModule> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1122);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var4, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var4:ANodes[AExternCodeBlock]>*/
}
{
{ /* Inline parser_nodes$AModule$n_classdefs (self) on <self:AModule> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var7, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var7:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$init_amoduledecl for (self: AModuledecl, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmodule, nullable AModuleName, nullable AAnnotations) */
void nitc__parser_prod___AModuledecl___init_amoduledecl(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmodule /* var n_kwmodule: nullable TKwmodule */;
val* var_n_name /* var n_name: nullable AModuleName */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AModuledecl> */
RET_LABEL1:(void)0;
}
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmodule = p3;
var_n_name = p4;
var_n_annotations = p5;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AModuledecl> */
if (var_n_doc == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_doc,((val*)NULL)) on <var_n_doc:nullable ADoc> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_doc, var_other); /* == on <var_n_doc:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AModuledecl> */
if (var_n_kwredef == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwredef,((val*)NULL)) on <var_n_kwredef:nullable TKwredef> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwredef, var_other); /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL12:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 64);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AModuledecl> */
if (var_n_visibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 65);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL13:(void)0;
}
}
if (unlikely(var_n_kwmodule == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 66);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_kwmodule].val = var_n_kwmodule; /* _n_kwmodule on <self:AModuledecl> */
if (var_n_kwmodule == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 67);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwmodule,self) on <var_n_kwmodule:nullable TKwmodule> */
if (unlikely(var_n_kwmodule == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwmodule->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwmodule:nullable TKwmodule> */
RET_LABEL14:(void)0;
}
}
if (unlikely(var_n_name == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 68);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val = var_n_name; /* _n_name on <self:AModuledecl> */
if (var_n_name == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 69);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_name,self) on <var_n_name:nullable AModuleName> */
if (unlikely(var_n_name == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_name->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_name:nullable AModuleName> */
RET_LABEL15:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AModuledecl> */
if (var_n_annotations == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL21:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$replace_child for (self: AModuledecl, ANode, nullable ANode) */
void nitc__parser_prod___AModuledecl___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AModuledecl> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable ADoc> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable ADoc(ADoc)> */
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
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 77);
fatal_exit(1);
}
{
nitc__parser_prod___AModuledecl___nitc__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod$AModuledecl$n_doc= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AModuledecl> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable TKwredef(TKwredef)> */
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
cltype16 = type_nullable__nitc__TKwredef.color;
idtype17 = type_nullable__nitc__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 81);
fatal_exit(1);
}
{
nitc__parser_prod___AModuledecl___nitc__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod$AModuledecl$n_kwredef= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AModuledecl> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var19,var_old_child) on <var19:nullable AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other) on <var19:nullable AVisibility(AVisibility)> */
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
cltype27 = type_nitc__AVisibility.color;
idtype28 = type_nitc__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 85);
fatal_exit(1);
}
{
nitc__parser_prod___AModuledecl___nitc__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$AModuledecl$n_visibility= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 88);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var30,var_old_child) on <var30:TKwmodule> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var30,var_other) on <var30:TKwmodule> */
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
cltype37 = type_nitc__TKwmodule.color;
idtype38 = type_nitc__TKwmodule.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 89);
fatal_exit(1);
}
{
nitc__parser_prod___AModuledecl___n_kwmodule_61d(self, var_new_child); /* Direct call parser_prod$AModuledecl$n_kwmodule= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 92);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:AModuleName> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:AModuleName> */
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
cltype47 = type_nitc__AModuleName.color;
idtype48 = type_nitc__AModuleName.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 93);
fatal_exit(1);
}
{
nitc__parser_prod___AModuledecl___n_name_61d(self, var_new_child); /* Direct call parser_prod$AModuledecl$n_name= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
if (var50 == NULL) {
var51 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var50,var_old_child) on <var50:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var50,var_other) on <var50:nullable AAnnotations(AAnnotations)> */
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
cltype58 = type_nullable__nitc__AAnnotations.color;
idtype59 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 97);
fatal_exit(1);
}
{
nitc__parser_prod___AModuledecl___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AModuledecl$n_annotations= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$n_doc= for (self: AModuledecl, nullable ADoc) */
void nitc__parser_prod___AModuledecl___nitc__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AModuledecl> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ADoc> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$n_kwredef= for (self: AModuledecl, nullable TKwredef) */
void nitc__parser_prod___AModuledecl___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AModuledecl> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwredef> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$n_visibility= for (self: AModuledecl, nullable AVisibility) */
void nitc__parser_prod___AModuledecl___nitc__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AModuledecl> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 115);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$n_kwmodule= for (self: AModuledecl, TKwmodule) */
void nitc__parser_prod___AModuledecl___n_kwmodule_61d(val* self, val* p0) {
val* var_node /* var node: TKwmodule */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_kwmodule].val = var_node; /* _n_kwmodule on <self:AModuledecl> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwmodule> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwmodule> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$n_name= for (self: AModuledecl, AModuleName) */
void nitc__parser_prod___AModuledecl___n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val = var_node; /* _n_name on <self:AModuledecl> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AModuleName> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AModuleName> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$n_annotations= for (self: AModuledecl, nullable AAnnotations) */
void nitc__parser_prod___AModuledecl___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AModuledecl> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AModuledecl$visit_all for (self: AModuledecl, Visitor) */
void nitc__parser_prod___AModuledecl___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwmodule */;
val* var4 /* : AModuleName */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AModuledecl> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AModuledecl> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AModuledecl> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 139);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 140);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStdImport$init_astdimport for (self: AStdImport, nullable AVisibility, nullable TKwimport, nullable AModuleName, nullable AAnnotations) */
void nitc__parser_prod___AStdImport___init_astdimport(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_name /* var n_name: nullable AModuleName */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AStdImport> */
RET_LABEL1:(void)0;
}
}
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_name = p2;
var_n_annotations = p3;
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 152);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdImport> */
if (var_n_visibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 153);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwimport == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 154);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AStdImport> */
if (var_n_kwimport == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 155);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwimport->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_name == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 156);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val = var_n_name; /* _n_name on <self:AStdImport> */
if (var_n_name == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 157);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_name,self) on <var_n_name:nullable AModuleName> */
if (unlikely(var_n_name == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_name->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_name:nullable AModuleName> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStdImport> */
if (var_n_annotations == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdImport$replace_child for (self: AStdImport, ANode, nullable ANode) */
void nitc__parser_prod___AStdImport___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 164);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AVisibility> */
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
cltype = type_nitc__AVisibility.color;
idtype = type_nitc__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 165);
fatal_exit(1);
}
{
nitc__parser_prod___AStdImport___nitc__parser_nodes__AImport__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$AStdImport$n_visibility= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 168);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TKwimport> */
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
cltype14 = type_nitc__TKwimport.color;
idtype15 = type_nitc__TKwimport.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 169);
fatal_exit(1);
}
{
nitc__parser_prod___AStdImport___nitc__parser_nodes__AImport__n_kwimport_61d(self, var_new_child); /* Direct call parser_prod$AStdImport$n_kwimport= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 172);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:AModuleName> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:AModuleName> */
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
cltype24 = type_nitc__AModuleName.color;
idtype25 = type_nitc__AModuleName.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 173);
fatal_exit(1);
}
{
nitc__parser_prod___AStdImport___n_name_61d(self, var_new_child); /* Direct call parser_prod$AStdImport$n_name= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
if (var27 == NULL) {
var28 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var27,var_old_child) on <var27:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var27,var_other) on <var27:nullable AAnnotations(AAnnotations)> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 177);
fatal_exit(1);
}
{
nitc__parser_prod___AStdImport___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AStdImport$n_annotations= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdImport$n_visibility= for (self: AStdImport, AVisibility) */
void nitc__parser_prod___AStdImport___nitc__parser_nodes__AImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val = var_node; /* _n_visibility on <self:AStdImport> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AVisibility> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStdImport$n_kwimport= for (self: AStdImport, TKwimport) */
void nitc__parser_prod___AStdImport___nitc__parser_nodes__AImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AImport___n_kwimport].val = var_node; /* _n_kwimport on <self:AStdImport> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStdImport$n_name= for (self: AStdImport, AModuleName) */
void nitc__parser_prod___AStdImport___n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val = var_node; /* _n_name on <self:AStdImport> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AModuleName> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AModuleName> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStdImport$n_annotations= for (self: AStdImport, nullable AAnnotations) */
void nitc__parser_prod___AStdImport___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStdImport> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdImport$visit_all for (self: AStdImport, Visitor) */
void nitc__parser_prod___AStdImport___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : AModuleName */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 206);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 207);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 208);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ANoImport$init_anoimport for (self: ANoImport, nullable AVisibility, nullable TKwimport, nullable TKwend) */
void nitc__parser_prod___ANoImport___init_anoimport(val* self, val* p0, val* p1, val* p2) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
{
{ /* Inline kernel$Object$init (self) on <self:ANoImport> */
RET_LABEL1:(void)0;
}
}
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_kwend = p2;
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 219);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ANoImport> */
if (var_n_visibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 220);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwimport == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 221);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:ANoImport> */
if (var_n_kwimport == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 222);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwimport->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_kwend == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 223);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ANoImport___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ANoImport> */
if (var_n_kwend == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 224);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend> */
if (unlikely(var_n_kwend == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwend->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANoImport$replace_child for (self: ANoImport, ANode, nullable ANode) */
void nitc__parser_prod___ANoImport___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 229);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:AVisibility> */
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
cltype = type_nitc__AVisibility.color;
idtype = type_nitc__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 230);
fatal_exit(1);
}
{
nitc__parser_prod___ANoImport___nitc__parser_nodes__AImport__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$ANoImport$n_visibility= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 233);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TKwimport> */
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
cltype14 = type_nitc__TKwimport.color;
idtype15 = type_nitc__TKwimport.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 234);
fatal_exit(1);
}
{
nitc__parser_prod___ANoImport___nitc__parser_nodes__AImport__n_kwimport_61d(self, var_new_child); /* Direct call parser_prod$ANoImport$n_kwimport= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 237);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TKwend> */
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
cltype24 = type_nitc__TKwend.color;
idtype25 = type_nitc__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 238);
fatal_exit(1);
}
{
nitc__parser_prod___ANoImport___n_kwend_61d(self, var_new_child); /* Direct call parser_prod$ANoImport$n_kwend= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ANoImport$n_visibility= for (self: ANoImport, AVisibility) */
void nitc__parser_prod___ANoImport___nitc__parser_nodes__AImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val = var_node; /* _n_visibility on <self:ANoImport> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AVisibility> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANoImport$n_kwimport= for (self: ANoImport, TKwimport) */
void nitc__parser_prod___ANoImport___nitc__parser_nodes__AImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AImport___n_kwimport].val = var_node; /* _n_kwimport on <self:ANoImport> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANoImport$n_kwend= for (self: ANoImport, TKwend) */
void nitc__parser_prod___ANoImport___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ANoImport___n_kwend].val = var_node; /* _n_kwend on <self:ANoImport> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwend> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwend> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANoImport$visit_all for (self: ANoImport, Visitor) */
void nitc__parser_prod___ANoImport___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 262);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 263);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 264);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$APublicVisibility$init_apublicvisibility for (self: APublicVisibility, nullable TKwpublic) */
void nitc__parser_prod___APublicVisibility___init_apublicvisibility(val* self, val* p0) {
val* var_n_kwpublic /* var n_kwpublic: nullable TKwpublic */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:APublicVisibility> */
RET_LABEL1:(void)0;
}
}
var_n_kwpublic = p0;
self->attrs[COLOR_nitc__parser_nodes__APublicVisibility___n_kwpublic].val = var_n_kwpublic; /* _n_kwpublic on <self:APublicVisibility> */
if (var_n_kwpublic == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwpublic,((val*)NULL)) on <var_n_kwpublic:nullable TKwpublic> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_kwpublic->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwpublic, var_other); /* == on <var_n_kwpublic:nullable TKwpublic(TKwpublic)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwpublic,self) on <var_n_kwpublic:nullable TKwpublic(TKwpublic)> */
var_n_kwpublic->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwpublic:nullable TKwpublic(TKwpublic)> */
RET_LABEL6:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$APublicVisibility$replace_child for (self: APublicVisibility, ANode, nullable ANode) */
void nitc__parser_prod___APublicVisibility___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwpublic> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwpublic(TKwpublic)> */
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
cltype = type_nullable__nitc__TKwpublic.color;
idtype = type_nullable__nitc__TKwpublic.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 279);
fatal_exit(1);
}
{
nitc__parser_prod___APublicVisibility___n_kwpublic_61d(self, var_new_child); /* Direct call parser_prod$APublicVisibility$n_kwpublic= on <self:APublicVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$APublicVisibility$n_kwpublic= for (self: APublicVisibility, nullable TKwpublic) */
void nitc__parser_prod___APublicVisibility___n_kwpublic_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwpublic */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__APublicVisibility___n_kwpublic].val = var_node; /* _n_kwpublic on <self:APublicVisibility> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwpublic> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwpublic(TKwpublic)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwpublic(TKwpublic)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwpublic(TKwpublic)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$APublicVisibility$visit_all for (self: APublicVisibility, Visitor) */
void nitc__parser_prod___APublicVisibility___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwpublic */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$APrivateVisibility$init_aprivatevisibility for (self: APrivateVisibility, nullable TKwprivate) */
void nitc__parser_prod___APrivateVisibility___init_aprivatevisibility(val* self, val* p0) {
val* var_n_kwprivate /* var n_kwprivate: nullable TKwprivate */;
{
{ /* Inline kernel$Object$init (self) on <self:APrivateVisibility> */
RET_LABEL1:(void)0;
}
}
var_n_kwprivate = p0;
if (unlikely(var_n_kwprivate == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 301);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__APrivateVisibility___n_kwprivate].val = var_n_kwprivate; /* _n_kwprivate on <self:APrivateVisibility> */
if (var_n_kwprivate == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 302);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwprivate,self) on <var_n_kwprivate:nullable TKwprivate> */
if (unlikely(var_n_kwprivate == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwprivate->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwprivate:nullable TKwprivate> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APrivateVisibility$replace_child for (self: APrivateVisibility, ANode, nullable ANode) */
void nitc__parser_prod___APrivateVisibility___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 307);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwprivate> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwprivate> */
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
cltype = type_nitc__TKwprivate.color;
idtype = type_nitc__TKwprivate.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 308);
fatal_exit(1);
}
{
nitc__parser_prod___APrivateVisibility___n_kwprivate_61d(self, var_new_child); /* Direct call parser_prod$APrivateVisibility$n_kwprivate= on <self:APrivateVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$APrivateVisibility$n_kwprivate= for (self: APrivateVisibility, TKwprivate) */
void nitc__parser_prod___APrivateVisibility___n_kwprivate_61d(val* self, val* p0) {
val* var_node /* var node: TKwprivate */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__APrivateVisibility___n_kwprivate].val = var_node; /* _n_kwprivate on <self:APrivateVisibility> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwprivate> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwprivate> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APrivateVisibility$visit_all for (self: APrivateVisibility, Visitor) */
void nitc__parser_prod___APrivateVisibility___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprivate */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 322);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AProtectedVisibility$init_aprotectedvisibility for (self: AProtectedVisibility, nullable TKwprotected) */
void nitc__parser_prod___AProtectedVisibility___init_aprotectedvisibility(val* self, val* p0) {
val* var_n_kwprotected /* var n_kwprotected: nullable TKwprotected */;
{
{ /* Inline kernel$Object$init (self) on <self:AProtectedVisibility> */
RET_LABEL1:(void)0;
}
}
var_n_kwprotected = p0;
if (unlikely(var_n_kwprotected == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 330);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AProtectedVisibility___n_kwprotected].val = var_n_kwprotected; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var_n_kwprotected == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 331);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwprotected,self) on <var_n_kwprotected:nullable TKwprotected> */
if (unlikely(var_n_kwprotected == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwprotected->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwprotected:nullable TKwprotected> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AProtectedVisibility$replace_child for (self: AProtectedVisibility, ANode, nullable ANode) */
void nitc__parser_prod___AProtectedVisibility___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 336);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwprotected> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwprotected> */
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
cltype = type_nitc__TKwprotected.color;
idtype = type_nitc__TKwprotected.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 337);
fatal_exit(1);
}
{
nitc__parser_prod___AProtectedVisibility___n_kwprotected_61d(self, var_new_child); /* Direct call parser_prod$AProtectedVisibility$n_kwprotected= on <self:AProtectedVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AProtectedVisibility$n_kwprotected= for (self: AProtectedVisibility, TKwprotected) */
void nitc__parser_prod___AProtectedVisibility___n_kwprotected_61d(val* self, val* p0) {
val* var_node /* var node: TKwprotected */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AProtectedVisibility___n_kwprotected].val = var_node; /* _n_kwprotected on <self:AProtectedVisibility> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwprotected> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwprotected> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AProtectedVisibility$visit_all for (self: AProtectedVisibility, Visitor) */
void nitc__parser_prod___AProtectedVisibility___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprotected */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 351);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AIntrudeVisibility$init_aintrudevisibility for (self: AIntrudeVisibility, nullable TKwintrude) */
void nitc__parser_prod___AIntrudeVisibility___init_aintrudevisibility(val* self, val* p0) {
val* var_n_kwintrude /* var n_kwintrude: nullable TKwintrude */;
{
{ /* Inline kernel$Object$init (self) on <self:AIntrudeVisibility> */
RET_LABEL1:(void)0;
}
}
var_n_kwintrude = p0;
if (unlikely(var_n_kwintrude == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 359);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_n_kwintrude; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var_n_kwintrude == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 360);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwintrude,self) on <var_n_kwintrude:nullable TKwintrude> */
if (unlikely(var_n_kwintrude == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwintrude->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwintrude:nullable TKwintrude> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIntrudeVisibility$replace_child for (self: AIntrudeVisibility, ANode, nullable ANode) */
void nitc__parser_prod___AIntrudeVisibility___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 365);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwintrude> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwintrude> */
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
cltype = type_nitc__TKwintrude.color;
idtype = type_nitc__TKwintrude.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 366);
fatal_exit(1);
}
{
nitc__parser_prod___AIntrudeVisibility___n_kwintrude_61d(self, var_new_child); /* Direct call parser_prod$AIntrudeVisibility$n_kwintrude= on <self:AIntrudeVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIntrudeVisibility$n_kwintrude= for (self: AIntrudeVisibility, TKwintrude) */
void nitc__parser_prod___AIntrudeVisibility___n_kwintrude_61d(val* self, val* p0) {
val* var_node /* var node: TKwintrude */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_node; /* _n_kwintrude on <self:AIntrudeVisibility> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwintrude> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwintrude> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIntrudeVisibility$visit_all for (self: AIntrudeVisibility, Visitor) */
void nitc__parser_prod___AIntrudeVisibility___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwintrude */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 380);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$init_astdclassdef for (self: AStdClassdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AClasskind, nullable AQclassid, nullable TObra, Collection[Object], nullable TCbra, nullable AExternCodeBlock, Collection[Object], nullable TKwend) */
void nitc__parser_prod___AStdClassdef___init_astdclassdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_classkind /* var n_classkind: nullable AClasskind */;
val* var_n_qid /* var n_qid: nullable AQclassid */;
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_formaldefs /* var n_formaldefs: Collection[Object] */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var27 /* : ANodes[AFormaldef] */;
val* var29 /* : ANodes[AFormaldef] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var42 /* : ANodes[APropdef] */;
val* var44 /* : ANodes[APropdef] */;
{
{ /* Inline kernel$Object$init (self) on <self:AStdClassdef> */
RET_LABEL1:(void)0;
}
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_classkind = p3;
var_n_qid = p4;
var_n_obra = p5;
var_n_formaldefs = p6;
var_n_cbra = p7;
var_n_extern_code_block = p8;
var_n_propdefs = p9;
var_n_kwend = p10;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AStdClassdef> */
if (var_n_doc == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_doc,((val*)NULL)) on <var_n_doc:nullable ADoc> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_doc, var_other); /* == on <var_n_doc:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AStdClassdef> */
if (var_n_kwredef == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwredef,((val*)NULL)) on <var_n_kwredef:nullable TKwredef> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwredef, var_other); /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL12:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 402);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdClassdef> */
if (var_n_visibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 403);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL13:(void)0;
}
}
if (unlikely(var_n_classkind == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 404);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_classkind].val = var_n_classkind; /* _n_classkind on <self:AStdClassdef> */
if (var_n_classkind == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 405);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_classkind,self) on <var_n_classkind:nullable AClasskind> */
if (unlikely(var_n_classkind == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_classkind->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_classkind:nullable AClasskind> */
RET_LABEL14:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_qid].val = var_n_qid; /* _n_qid on <self:AStdClassdef> */
if (var_n_qid == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_qid,((val*)NULL)) on <var_n_qid:nullable AQclassid> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_n_qid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_qid, var_other); /* == on <var_n_qid:nullable AQclassid(AQclassid)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_qid,self) on <var_n_qid:nullable AQclassid(AQclassid)> */
var_n_qid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_qid:nullable AQclassid(AQclassid)> */
RET_LABEL20:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_obra].val = var_n_obra; /* _n_obra on <self:AStdClassdef> */
if (var_n_obra == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_obra,((val*)NULL)) on <var_n_obra:nullable TObra> */
var_other = ((val*)NULL);
{
var24 = ((short int(*)(val* self, val* p0))(var_n_obra->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_obra, var_other); /* == on <var_n_obra:nullable TObra(TObra)>*/
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_obra,self) on <var_n_obra:nullable TObra(TObra)> */
var_n_obra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra(TObra)> */
RET_LABEL26:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AStdClassdef$n_formaldefs (self) on <self:AStdClassdef> */
var29 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1236);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var27, var_n_formaldefs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var27:ANodes[AFormaldef]>*/
}
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AStdClassdef> */
if (var_n_cbra == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_cbra,((val*)NULL)) on <var_n_cbra:nullable TCbra> */
var_other = ((val*)NULL);
{
var33 = ((short int(*)(val* self, val* p0))(var_n_cbra->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_cbra, var_other); /* == on <var_n_cbra:nullable TCbra(TCbra)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra(TCbra)> */
var_n_cbra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra(TCbra)> */
RET_LABEL35:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AStdClassdef> */
if (var_n_extern_code_block == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_extern_code_block,((val*)NULL)) on <var_n_extern_code_block:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var39 = ((short int(*)(val* self, val* p0))(var_n_extern_code_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_extern_code_block, var_other); /* == on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_extern_code_block,self) on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var_n_extern_code_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL41:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:AStdClassdef> */
var44 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var42, var_n_propdefs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var42:ANodes[APropdef]>*/
}
if (unlikely(var_n_kwend == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 416);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_kwend].val = var_n_kwend; /* _n_kwend on <self:AStdClassdef> */
if (var_n_kwend == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 417);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend> */
if (unlikely(var_n_kwend == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwend->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend> */
RET_LABEL45:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$replace_child for (self: AStdClassdef, ANode, nullable ANode) */
void nitc__parser_prod___AStdClassdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var40 /* : nullable AQclassid */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
val* var51 /* : nullable TObra */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
val* var62 /* : ANodes[AFormaldef] */;
val* var64 /* : ANodes[AFormaldef] */;
short int var65 /* : Bool */;
val* var66 /* : nullable TCbra */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
val* var77 /* : nullable AExternCodeBlock */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
val* var88 /* : ANodes[APropdef] */;
val* var90 /* : ANodes[APropdef] */;
short int var91 /* : Bool */;
val* var92 /* : TKwend */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AStdClassdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable ADoc> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable ADoc(ADoc)> */
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
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 423);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___nitc__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_doc= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable TKwredef(TKwredef)> */
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
cltype16 = type_nullable__nitc__TKwredef.color;
idtype17 = type_nullable__nitc__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 427);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_kwredef= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var19,var_old_child) on <var19:nullable AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other) on <var19:nullable AVisibility(AVisibility)> */
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
cltype27 = type_nitc__AVisibility.color;
idtype28 = type_nitc__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 431);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___nitc__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_visibility= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 434);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var30,var_old_child) on <var30:AClasskind> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var30,var_other) on <var30:AClasskind> */
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
cltype37 = type_nitc__AClasskind.color;
idtype38 = type_nitc__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 435);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___n_classkind_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_classkind= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_qid].val; /* _n_qid on <self:AStdClassdef> */
if (var40 == NULL) {
var41 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:nullable AQclassid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:nullable AQclassid(AQclassid)> */
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
/* <var_new_child:nullable ANode> isa nullable AQclassid */
cltype48 = type_nullable__nitc__AQclassid.color;
idtype49 = type_nullable__nitc__AQclassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AQclassid", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 439);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___n_qid_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_qid= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var51 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_obra].val; /* _n_obra on <self:AStdClassdef> */
if (var51 == NULL) {
var52 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var51,var_old_child) on <var51:nullable TObra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var51,var_other) on <var51:nullable TObra(TObra)> */
var57 = var51 == var_other;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
/* <var_new_child:nullable ANode> isa nullable TObra */
cltype59 = type_nullable__nitc__TObra.color;
idtype60 = type_nullable__nitc__TObra.id;
if(var_new_child == NULL) {
var58 = 1;
} else {
if(cltype59 >= var_new_child->type->table_size) {
var58 = 0;
} else {
var58 = var_new_child->type->type_table[cltype59] == idtype60;
}
}
if (unlikely(!var58)) {
var_class_name61 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TObra", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 443);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___n_obra_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_obra= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AStdClassdef$n_formaldefs (self) on <self:AStdClassdef> */
var64 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1236);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc___nitc__ANodes___replace_child(var62, var_old_child, var_new_child);
}
if (var65){
goto RET_LABEL;
} else {
}
var66 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_cbra].val; /* _n_cbra on <self:AStdClassdef> */
if (var66 == NULL) {
var67 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var66,var_old_child) on <var66:nullable TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var66,var_other) on <var66:nullable TCbra(TCbra)> */
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
/* <var_new_child:nullable ANode> isa nullable TCbra */
cltype74 = type_nullable__nitc__TCbra.color;
idtype75 = type_nullable__nitc__TCbra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCbra", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 448);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___n_cbra_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_cbra= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var77 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
if (var77 == NULL) {
var78 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var77,var_old_child) on <var77:nullable AExternCodeBlock> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var77,var_other) on <var77:nullable AExternCodeBlock(AExternCodeBlock)> */
var83 = var77 == var_other;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
/* <var_new_child:nullable ANode> isa nullable AExternCodeBlock */
cltype85 = type_nullable__nitc__AExternCodeBlock.color;
idtype86 = type_nullable__nitc__AExternCodeBlock.id;
if(var_new_child == NULL) {
var84 = 1;
} else {
if(cltype85 >= var_new_child->type->table_size) {
var84 = 0;
} else {
var84 = var_new_child->type->type_table[cltype85] == idtype86;
}
}
if (unlikely(!var84)) {
var_class_name87 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCodeBlock", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 452);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___n_extern_code_block_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_extern_code_block= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:AStdClassdef> */
var90 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var90 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = nitc___nitc__ANodes___replace_child(var88, var_old_child, var_new_child);
}
if (var91){
goto RET_LABEL;
} else {
}
var92 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 456);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var92,var_old_child) on <var92:TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var92,var_other) on <var92:TKwend> */
var97 = var92 == var_other;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
if (var93){
/* <var_new_child:nullable ANode> isa TKwend */
cltype99 = type_nitc__TKwend.color;
idtype100 = type_nitc__TKwend.id;
if(var_new_child == NULL) {
var98 = 0;
} else {
if(cltype99 >= var_new_child->type->table_size) {
var98 = 0;
} else {
var98 = var_new_child->type->type_table[cltype99] == idtype100;
}
}
if (unlikely(!var98)) {
var_class_name101 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwend", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 457);
fatal_exit(1);
}
{
nitc__parser_prod___AStdClassdef___n_kwend_61d(self, var_new_child); /* Direct call parser_prod$AStdClassdef$n_kwend= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_doc= for (self: AStdClassdef, nullable ADoc) */
void nitc__parser_prod___AStdClassdef___nitc__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AStdClassdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ADoc> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_kwredef= for (self: AStdClassdef, nullable TKwredef) */
void nitc__parser_prod___AStdClassdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AStdClassdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwredef> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_visibility= for (self: AStdClassdef, nullable AVisibility) */
void nitc__parser_prod___AStdClassdef___nitc__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AStdClassdef> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 475);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_classkind= for (self: AStdClassdef, AClasskind) */
void nitc__parser_prod___AStdClassdef___n_classkind_61d(val* self, val* p0) {
val* var_node /* var node: AClasskind */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_classkind].val = var_node; /* _n_classkind on <self:AStdClassdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AClasskind> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AClasskind> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_qid= for (self: AStdClassdef, nullable AQclassid) */
void nitc__parser_prod___AStdClassdef___n_qid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AQclassid */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_qid].val = var_node; /* _n_qid on <self:AStdClassdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AQclassid> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AQclassid(AQclassid)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AQclassid(AQclassid)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AQclassid(AQclassid)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_obra= for (self: AStdClassdef, nullable TObra) */
void nitc__parser_prod___AStdClassdef___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: nullable TObra */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_obra].val = var_node; /* _n_obra on <self:AStdClassdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TObra> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TObra(TObra)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TObra(TObra)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TObra(TObra)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_cbra= for (self: AStdClassdef, nullable TCbra) */
void nitc__parser_prod___AStdClassdef___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCbra */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_cbra].val = var_node; /* _n_cbra on <self:AStdClassdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TCbra> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TCbra(TCbra)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TCbra(TCbra)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCbra(TCbra)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_extern_code_block= for (self: AStdClassdef, nullable AExternCodeBlock) */
void nitc__parser_prod___AStdClassdef___n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AStdClassdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$n_kwend= for (self: AStdClassdef, TKwend) */
void nitc__parser_prod___AStdClassdef___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_kwend].val = var_node; /* _n_kwend on <self:AStdClassdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwend> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwend> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStdClassdef$visit_all for (self: AStdClassdef, Visitor) */
void nitc__parser_prod___AStdClassdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : AClasskind */;
val* var4 /* : nullable AQclassid */;
val* var5 /* : nullable TObra */;
val* var6 /* : ANodes[AFormaldef] */;
val* var8 /* : ANodes[AFormaldef] */;
val* var9 /* : nullable TCbra */;
val* var10 /* : nullable AExternCodeBlock */;
val* var11 /* : ANodes[APropdef] */;
val* var13 /* : ANodes[APropdef] */;
val* var14 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AStdClassdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 514);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_qid].val; /* _n_qid on <self:AStdClassdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_obra].val; /* _n_obra on <self:AStdClassdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AStdClassdef$n_formaldefs (self) on <self:AStdClassdef> */
var8 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1236);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var6, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var6:ANodes[AFormaldef]>*/
}
var9 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_cbra].val; /* _n_cbra on <self:AStdClassdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var10 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var10); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:AStdClassdef> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var11, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var11:ANodes[APropdef]>*/
}
var14 = self->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 521);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var14); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ATopClassdef$init_atopclassdef for (self: ATopClassdef, Collection[Object]) */
void nitc__parser_prod___ATopClassdef___init_atopclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : ANodes[APropdef] */;
val* var3 /* : ANodes[APropdef] */;
{
{ /* Inline kernel$Object$init (self) on <self:ATopClassdef> */
RET_LABEL1:(void)0;
}
}
var_n_propdefs = p0;
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:ATopClassdef> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_propdefs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod$ATopClassdef$replace_child for (self: ATopClassdef, ANode, nullable ANode) */
void nitc__parser_prod___ATopClassdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:ATopClassdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
/* method parser_prod$ATopClassdef$visit_all for (self: ATopClassdef, Visitor) */
void nitc__parser_prod___ATopClassdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_v = p0;
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:ATopClassdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod$AMainClassdef$init_amainclassdef for (self: AMainClassdef, Collection[Object]) */
void nitc__parser_prod___AMainClassdef___init_amainclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : ANodes[APropdef] */;
val* var3 /* : ANodes[APropdef] */;
{
{ /* Inline kernel$Object$init (self) on <self:AMainClassdef> */
RET_LABEL1:(void)0;
}
}
var_n_propdefs = p0;
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:AMainClassdef> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_propdefs); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod$AMainClassdef$replace_child for (self: AMainClassdef, ANode, nullable ANode) */
void nitc__parser_prod___AMainClassdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:AMainClassdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
/* method parser_prod$AMainClassdef$visit_all for (self: AMainClassdef, Visitor) */
void nitc__parser_prod___AMainClassdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_v = p0;
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (self) on <self:AMainClassdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod$AConcreteClasskind$init_aconcreteclasskind for (self: AConcreteClasskind, nullable TKwclass) */
void nitc__parser_prod___AConcreteClasskind___init_aconcreteclasskind(val* self, val* p0) {
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
{
{ /* Inline kernel$Object$init (self) on <self:AConcreteClasskind> */
RET_LABEL1:(void)0;
}
}
var_n_kwclass = p0;
if (unlikely(var_n_kwclass == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 569);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AConcreteClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AConcreteClasskind> */
if (var_n_kwclass == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 570);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass> */
if (unlikely(var_n_kwclass == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwclass->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AConcreteClasskind$replace_child for (self: AConcreteClasskind, ANode, nullable ANode) */
void nitc__parser_prod___AConcreteClasskind___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 575);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwclass> */
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
cltype = type_nitc__TKwclass.color;
idtype = type_nitc__TKwclass.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 576);
fatal_exit(1);
}
{
nitc__parser_prod___AConcreteClasskind___n_kwclass_61d(self, var_new_child); /* Direct call parser_prod$AConcreteClasskind$n_kwclass= on <self:AConcreteClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AConcreteClasskind$n_kwclass= for (self: AConcreteClasskind, TKwclass) */
void nitc__parser_prod___AConcreteClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AConcreteClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AConcreteClasskind> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwclass> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwclass> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AConcreteClasskind$visit_all for (self: AConcreteClasskind, Visitor) */
void nitc__parser_prod___AConcreteClasskind___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 590);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAbstractClasskind$init_aabstractclasskind for (self: AAbstractClasskind, nullable TKwabstract, nullable TKwclass) */
void nitc__parser_prod___AAbstractClasskind___init_aabstractclasskind(val* self, val* p0, val* p1) {
val* var_n_kwabstract /* var n_kwabstract: nullable TKwabstract */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
{
{ /* Inline kernel$Object$init (self) on <self:AAbstractClasskind> */
RET_LABEL1:(void)0;
}
}
var_n_kwabstract = p0;
var_n_kwclass = p1;
if (unlikely(var_n_kwabstract == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 599);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAbstractClasskind___n_kwabstract].val = var_n_kwabstract; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var_n_kwabstract == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 600);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwabstract,self) on <var_n_kwabstract:nullable TKwabstract> */
if (unlikely(var_n_kwabstract == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwabstract->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwabstract:nullable TKwabstract> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwclass == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 601);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAbstractClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AAbstractClasskind> */
if (var_n_kwclass == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 602);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass> */
if (unlikely(var_n_kwclass == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwclass->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAbstractClasskind$replace_child for (self: AAbstractClasskind, ANode, nullable ANode) */
void nitc__parser_prod___AAbstractClasskind___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 607);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwabstract> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwabstract> */
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
cltype = type_nitc__TKwabstract.color;
idtype = type_nitc__TKwabstract.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 608);
fatal_exit(1);
}
{
nitc__parser_prod___AAbstractClasskind___n_kwabstract_61d(self, var_new_child); /* Direct call parser_prod$AAbstractClasskind$n_kwabstract= on <self:AAbstractClasskind>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 611);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TKwclass> */
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
cltype14 = type_nitc__TKwclass.color;
idtype15 = type_nitc__TKwclass.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 612);
fatal_exit(1);
}
{
nitc__parser_prod___AAbstractClasskind___n_kwclass_61d(self, var_new_child); /* Direct call parser_prod$AAbstractClasskind$n_kwclass= on <self:AAbstractClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAbstractClasskind$n_kwabstract= for (self: AAbstractClasskind, TKwabstract) */
void nitc__parser_prod___AAbstractClasskind___n_kwabstract_61d(val* self, val* p0) {
val* var_node /* var node: TKwabstract */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAbstractClasskind___n_kwabstract].val = var_node; /* _n_kwabstract on <self:AAbstractClasskind> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwabstract> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwabstract> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAbstractClasskind$n_kwclass= for (self: AAbstractClasskind, TKwclass) */
void nitc__parser_prod___AAbstractClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAbstractClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AAbstractClasskind> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwclass> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwclass> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAbstractClasskind$visit_all for (self: AAbstractClasskind, Visitor) */
void nitc__parser_prod___AAbstractClasskind___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabstract */;
val* var1 /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 631);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 632);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AInterfaceClasskind$init_ainterfaceclasskind for (self: AInterfaceClasskind, nullable TKwinterface) */
void nitc__parser_prod___AInterfaceClasskind___init_ainterfaceclasskind(val* self, val* p0) {
val* var_n_kwinterface /* var n_kwinterface: nullable TKwinterface */;
{
{ /* Inline kernel$Object$init (self) on <self:AInterfaceClasskind> */
RET_LABEL1:(void)0;
}
}
var_n_kwinterface = p0;
if (unlikely(var_n_kwinterface == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 640);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_n_kwinterface; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var_n_kwinterface == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 641);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwinterface,self) on <var_n_kwinterface:nullable TKwinterface> */
if (unlikely(var_n_kwinterface == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwinterface->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinterface:nullable TKwinterface> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AInterfaceClasskind$replace_child for (self: AInterfaceClasskind, ANode, nullable ANode) */
void nitc__parser_prod___AInterfaceClasskind___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 646);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwinterface> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwinterface> */
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
cltype = type_nitc__TKwinterface.color;
idtype = type_nitc__TKwinterface.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 647);
fatal_exit(1);
}
{
nitc__parser_prod___AInterfaceClasskind___n_kwinterface_61d(self, var_new_child); /* Direct call parser_prod$AInterfaceClasskind$n_kwinterface= on <self:AInterfaceClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AInterfaceClasskind$n_kwinterface= for (self: AInterfaceClasskind, TKwinterface) */
void nitc__parser_prod___AInterfaceClasskind___n_kwinterface_61d(val* self, val* p0) {
val* var_node /* var node: TKwinterface */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_node; /* _n_kwinterface on <self:AInterfaceClasskind> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwinterface> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwinterface> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AInterfaceClasskind$visit_all for (self: AInterfaceClasskind, Visitor) */
void nitc__parser_prod___AInterfaceClasskind___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwinterface */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 661);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AEnumClasskind$init_aenumclasskind for (self: AEnumClasskind, nullable TKwenum) */
void nitc__parser_prod___AEnumClasskind___init_aenumclasskind(val* self, val* p0) {
val* var_n_kwenum /* var n_kwenum: nullable TKwenum */;
{
{ /* Inline kernel$Object$init (self) on <self:AEnumClasskind> */
RET_LABEL1:(void)0;
}
}
var_n_kwenum = p0;
if (unlikely(var_n_kwenum == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 669);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AEnumClasskind___n_kwenum].val = var_n_kwenum; /* _n_kwenum on <self:AEnumClasskind> */
if (var_n_kwenum == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 670);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwenum,self) on <var_n_kwenum:nullable TKwenum> */
if (unlikely(var_n_kwenum == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwenum->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwenum:nullable TKwenum> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEnumClasskind$replace_child for (self: AEnumClasskind, ANode, nullable ANode) */
void nitc__parser_prod___AEnumClasskind___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 675);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwenum> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwenum> */
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
cltype = type_nitc__TKwenum.color;
idtype = type_nitc__TKwenum.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 676);
fatal_exit(1);
}
{
nitc__parser_prod___AEnumClasskind___n_kwenum_61d(self, var_new_child); /* Direct call parser_prod$AEnumClasskind$n_kwenum= on <self:AEnumClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AEnumClasskind$n_kwenum= for (self: AEnumClasskind, TKwenum) */
void nitc__parser_prod___AEnumClasskind___n_kwenum_61d(val* self, val* p0) {
val* var_node /* var node: TKwenum */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AEnumClasskind___n_kwenum].val = var_node; /* _n_kwenum on <self:AEnumClasskind> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwenum> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEnumClasskind$visit_all for (self: AEnumClasskind, Visitor) */
void nitc__parser_prod___AEnumClasskind___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwenum */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 690);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AExternClasskind$init_aexternclasskind for (self: AExternClasskind, nullable TKwextern, nullable TKwclass) */
void nitc__parser_prod___AExternClasskind___init_aexternclasskind(val* self, val* p0, val* p1) {
val* var_n_kwextern /* var n_kwextern: nullable TKwextern */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AExternClasskind> */
RET_LABEL1:(void)0;
}
}
var_n_kwextern = p0;
var_n_kwclass = p1;
if (unlikely(var_n_kwextern == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 699);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AExternClasskind___n_kwextern].val = var_n_kwextern; /* _n_kwextern on <self:AExternClasskind> */
if (var_n_kwextern == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 700);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwextern,self) on <var_n_kwextern:nullable TKwextern> */
if (unlikely(var_n_kwextern == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwextern->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwextern:nullable TKwextern> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AExternClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AExternClasskind> */
if (var_n_kwclass == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwclass,((val*)NULL)) on <var_n_kwclass:nullable TKwclass> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_kwclass->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwclass, var_other); /* == on <var_n_kwclass:nullable TKwclass(TKwclass)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass(TKwclass)> */
var_n_kwclass->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass(TKwclass)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AExternClasskind$replace_child for (self: AExternClasskind, ANode, nullable ANode) */
void nitc__parser_prod___AExternClasskind___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 707);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwextern> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwextern> */
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
cltype = type_nitc__TKwextern.color;
idtype = type_nitc__TKwextern.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 708);
fatal_exit(1);
}
{
nitc__parser_prod___AExternClasskind___n_kwextern_61d(self, var_new_child); /* Direct call parser_prod$AExternClasskind$n_kwextern= on <self:AExternClasskind>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable TKwclass(TKwclass)> */
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
cltype15 = type_nullable__nitc__TKwclass.color;
idtype16 = type_nullable__nitc__TKwclass.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 712);
fatal_exit(1);
}
{
nitc__parser_prod___AExternClasskind___n_kwclass_61d(self, var_new_child); /* Direct call parser_prod$AExternClasskind$n_kwclass= on <self:AExternClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AExternClasskind$n_kwextern= for (self: AExternClasskind, TKwextern) */
void nitc__parser_prod___AExternClasskind___n_kwextern_61d(val* self, val* p0) {
val* var_node /* var node: TKwextern */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AExternClasskind___n_kwextern].val = var_node; /* _n_kwextern on <self:AExternClasskind> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwextern> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwextern> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AExternClasskind$n_kwclass= for (self: AExternClasskind, nullable TKwclass) */
void nitc__parser_prod___AExternClasskind___n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwclass */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AExternClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AExternClasskind> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwclass> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwclass(TKwclass)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwclass(TKwclass)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwclass(TKwclass)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AExternClasskind$visit_all for (self: AExternClasskind, Visitor) */
void nitc__parser_prod___AExternClasskind___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwextern */;
val* var1 /* : nullable TKwclass */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 731);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AFormaldef$init_aformaldef for (self: AFormaldef, nullable TClassid, nullable AType, nullable AAnnotations) */
void nitc__parser_prod___AFormaldef___init_aformaldef(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
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
{ /* Inline kernel$Object$init (self) on <self:AFormaldef> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_type = p1;
var_n_annotations = p2;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 742);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val = var_n_id; /* _n_id on <self:AFormaldef> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 743);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_type].val = var_n_type; /* _n_type on <self:AFormaldef> */
if (var_n_type == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_type,((val*)NULL)) on <var_n_type:nullable AType> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_type, var_other); /* == on <var_n_type:nullable AType(AType)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFormaldef> */
if (var_n_annotations == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL13:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFormaldef$replace_child for (self: AFormaldef, ANode, nullable ANode) */
void nitc__parser_prod___AFormaldef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 752);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TClassid> */
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
cltype = type_nitc__TClassid.color;
idtype = type_nitc__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 753);
fatal_exit(1);
}
{
nitc__parser_prod___AFormaldef___n_id_61d(self, var_new_child); /* Direct call parser_prod$AFormaldef$n_id= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable AType(AType)> */
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
cltype15 = type_nullable__nitc__AType.color;
idtype16 = type_nullable__nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 757);
fatal_exit(1);
}
{
nitc__parser_prod___AFormaldef___n_type_61d(self, var_new_child); /* Direct call parser_prod$AFormaldef$n_type= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:nullable AAnnotations(AAnnotations)> */
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
cltype26 = type_nullable__nitc__AAnnotations.color;
idtype27 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 761);
fatal_exit(1);
}
{
nitc__parser_prod___AFormaldef___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AFormaldef$n_annotations= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFormaldef$n_id= for (self: AFormaldef, TClassid) */
void nitc__parser_prod___AFormaldef___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val = var_node; /* _n_id on <self:AFormaldef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AFormaldef$n_type= for (self: AFormaldef, nullable AType) */
void nitc__parser_prod___AFormaldef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_type].val = var_node; /* _n_type on <self:AFormaldef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AType> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AType(AType)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFormaldef$n_annotations= for (self: AFormaldef, nullable AAnnotations) */
void nitc__parser_prod___AFormaldef___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFormaldef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AFormaldef$visit_all for (self: AFormaldef, Visitor) */
void nitc__parser_prod___AFormaldef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TClassid */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 785);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$init_aattrpropdef for (self: AAttrPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations, nullable TKwdo, nullable AExpr, nullable TKwend) */
void nitc__parser_prod___AAttrPropdef___init_aattrpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwvar /* var n_kwvar: nullable TKwvar */;
val* var_n_id2 /* var n_id2: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AAttrPropdef> */
RET_LABEL1:(void)0;
}
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwvar = p3;
var_n_id2 = p4;
var_n_type = p5;
var_n_assign = p6;
var_n_expr = p7;
var_n_annotations = p8;
var_n_kwdo = p9;
var_n_block = p10;
var_n_kwend = p11;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AAttrPropdef> */
if (var_n_doc == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_doc,((val*)NULL)) on <var_n_doc:nullable ADoc> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_doc, var_other); /* == on <var_n_doc:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAttrPropdef> */
if (var_n_kwredef == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwredef,((val*)NULL)) on <var_n_kwredef:nullable TKwredef> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwredef, var_other); /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL12:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 810);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAttrPropdef> */
if (var_n_visibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 811);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL13:(void)0;
}
}
if (unlikely(var_n_kwvar == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 812);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AAttrPropdef> */
if (var_n_kwvar == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 813);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwvar,self) on <var_n_kwvar:nullable TKwvar> */
if (unlikely(var_n_kwvar == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwvar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwvar:nullable TKwvar> */
RET_LABEL14:(void)0;
}
}
if (unlikely(var_n_id2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 814);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val = var_n_id2; /* _n_id2 on <self:AAttrPropdef> */
if (var_n_id2 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 815);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id2,self) on <var_n_id2:nullable TId> */
if (unlikely(var_n_id2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id2->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id2:nullable TId> */
RET_LABEL15:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val = var_n_type; /* _n_type on <self:AAttrPropdef> */
if (var_n_type == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_type,((val*)NULL)) on <var_n_type:nullable AType> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_type, var_other); /* == on <var_n_type:nullable AType(AType)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL21:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_assign].val = var_n_assign; /* _n_assign on <self:AAttrPropdef> */
if (var_n_assign == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_assign,((val*)NULL)) on <var_n_assign:nullable TAssign> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_assign, var_other); /* == on <var_n_assign:nullable TAssign(TAssign)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_assign,self) on <var_n_assign:nullable TAssign(TAssign)> */
var_n_assign->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign(TAssign)> */
RET_LABEL27:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrPropdef> */
if (var_n_expr == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_expr,((val*)NULL)) on <var_n_expr:nullable AExpr> */
var_other = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_expr, var_other); /* == on <var_n_expr:nullable AExpr(AExpr)>*/
}
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL33:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAttrPropdef> */
if (var_n_annotations == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL39:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AAttrPropdef> */
if (var_n_kwdo == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwdo,((val*)NULL)) on <var_n_kwdo:nullable TKwdo> */
var_other = ((val*)NULL);
{
var43 = ((short int(*)(val* self, val* p0))(var_n_kwdo->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwdo, var_other); /* == on <var_n_kwdo:nullable TKwdo(TKwdo)>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo(TKwdo)> */
var_n_kwdo->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo(TKwdo)> */
RET_LABEL45:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val = var_n_block; /* _n_block on <self:AAttrPropdef> */
if (var_n_block == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var49 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL51:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwend].val = var_n_kwend; /* _n_kwend on <self:AAttrPropdef> */
if (var_n_kwend == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwend,((val*)NULL)) on <var_n_kwend:nullable TKwend> */
var_other = ((val*)NULL);
{
var55 = ((short int(*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwend, var_other); /* == on <var_n_kwend:nullable TKwend(TKwend)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend(TKwend)> */
var_n_kwend->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend(TKwend)> */
RET_LABEL57:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$replace_child for (self: AAttrPropdef, ANode, nullable ANode) */
void nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var61 /* : nullable TAssign */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
val* var72 /* : nullable AExpr */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
val* var83 /* : nullable AAnnotations */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
val* var94 /* : nullable TKwdo */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
val* var105 /* : nullable AExpr */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
val* var116 /* : nullable TKwend */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable ADoc> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable ADoc(ADoc)> */
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
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 835);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_doc= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable TKwredef(TKwredef)> */
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
cltype16 = type_nullable__nitc__TKwredef.color;
idtype17 = type_nullable__nitc__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 839);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_kwredef= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var19,var_old_child) on <var19:nullable AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other) on <var19:nullable AVisibility(AVisibility)> */
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
cltype27 = type_nitc__AVisibility.color;
idtype28 = type_nitc__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 843);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_visibility= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 846);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var30,var_old_child) on <var30:TKwvar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var30,var_other) on <var30:TKwvar> */
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
cltype37 = type_nitc__TKwvar.color;
idtype38 = type_nitc__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 847);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___n_kwvar_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_kwvar= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 850);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:TId> */
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
cltype47 = type_nitc__TId.color;
idtype48 = type_nitc__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 851);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___n_id2_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_id2= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
if (var50 == NULL) {
var51 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var50,var_old_child) on <var50:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var50,var_other) on <var50:nullable AType(AType)> */
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
cltype58 = type_nullable__nitc__AType.color;
idtype59 = type_nullable__nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 855);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___n_type_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_type= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var61 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_assign].val; /* _n_assign on <self:AAttrPropdef> */
if (var61 == NULL) {
var62 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var61,var_old_child) on <var61:nullable TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var61,var_other) on <var61:nullable TAssign(TAssign)> */
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
/* <var_new_child:nullable ANode> isa nullable TAssign */
cltype69 = type_nullable__nitc__TAssign.color;
idtype70 = type_nullable__nitc__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAssign", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 859);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___n_assign_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_assign= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var72 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
if (var72 == NULL) {
var73 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var72,var_old_child) on <var72:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var72,var_other) on <var72:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype80 = type_nullable__nitc__AExpr.color;
idtype81 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 863);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_expr= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var83 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
if (var83 == NULL) {
var84 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var83,var_old_child) on <var83:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var83,var_other) on <var83:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype91 = type_nullable__nitc__AAnnotations.color;
idtype92 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 867);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_annotations= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var94 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwdo].val; /* _n_kwdo on <self:AAttrPropdef> */
if (var94 == NULL) {
var95 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var94,var_old_child) on <var94:nullable TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var94,var_other) on <var94:nullable TKwdo(TKwdo)> */
var100 = var94 == var_other;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
/* <var_new_child:nullable ANode> isa nullable TKwdo */
cltype102 = type_nullable__nitc__TKwdo.color;
idtype103 = type_nullable__nitc__TKwdo.id;
if(var_new_child == NULL) {
var101 = 1;
} else {
if(cltype102 >= var_new_child->type->table_size) {
var101 = 0;
} else {
var101 = var_new_child->type->type_table[cltype102] == idtype103;
}
}
if (unlikely(!var101)) {
var_class_name104 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwdo", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 871);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_kwdo= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var105 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
if (var105 == NULL) {
var106 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var105,var_old_child) on <var105:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var105,var_other) on <var105:nullable AExpr(AExpr)> */
var111 = var105 == var_other;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
var106 = var107;
}
if (var106){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype113 = type_nullable__nitc__AExpr.color;
idtype114 = type_nullable__nitc__AExpr.id;
if(var_new_child == NULL) {
var112 = 1;
} else {
if(cltype113 >= var_new_child->type->table_size) {
var112 = 0;
} else {
var112 = var_new_child->type->type_table[cltype113] == idtype114;
}
}
if (unlikely(!var112)) {
var_class_name115 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 875);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___n_block_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_block= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var116 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwend].val; /* _n_kwend on <self:AAttrPropdef> */
if (var116 == NULL) {
var117 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var116,var_old_child) on <var116:nullable TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var116,var_other) on <var116:nullable TKwend(TKwend)> */
var122 = var116 == var_other;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
if (var117){
/* <var_new_child:nullable ANode> isa nullable TKwend */
cltype124 = type_nullable__nitc__TKwend.color;
idtype125 = type_nullable__nitc__TKwend.id;
if(var_new_child == NULL) {
var123 = 1;
} else {
if(cltype124 >= var_new_child->type->table_size) {
var123 = 0;
} else {
var123 = var_new_child->type->type_table[cltype124] == idtype125;
}
}
if (unlikely(!var123)) {
var_class_name126 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwend", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 879);
fatal_exit(1);
}
{
nitc__parser_prod___AAttrPropdef___n_kwend_61d(self, var_new_child); /* Direct call parser_prod$AAttrPropdef$n_kwend= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_doc= for (self: AAttrPropdef, nullable ADoc) */
void nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AAttrPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ADoc> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_kwredef= for (self: AAttrPropdef, nullable TKwredef) */
void nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AAttrPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwredef> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_visibility= for (self: AAttrPropdef, nullable AVisibility) */
void nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AAttrPropdef> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 897);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_kwvar= for (self: AAttrPropdef, TKwvar) */
void nitc__parser_prod___AAttrPropdef___n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwvar].val = var_node; /* _n_kwvar on <self:AAttrPropdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwvar> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwvar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_id2= for (self: AAttrPropdef, TId) */
void nitc__parser_prod___AAttrPropdef___n_id2_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val = var_node; /* _n_id2 on <self:AAttrPropdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_type= for (self: AAttrPropdef, nullable AType) */
void nitc__parser_prod___AAttrPropdef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val = var_node; /* _n_type on <self:AAttrPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AType> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AType(AType)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_assign= for (self: AAttrPropdef, nullable TAssign) */
void nitc__parser_prod___AAttrPropdef___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAssign */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_assign].val = var_node; /* _n_assign on <self:AAttrPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TAssign> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TAssign(TAssign)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TAssign(TAssign)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TAssign(TAssign)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_expr= for (self: AAttrPropdef, nullable AExpr) */
void nitc__parser_prod___AAttrPropdef___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val = var_node; /* _n_expr on <self:AAttrPropdef> */
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
/* method parser_prod$AAttrPropdef$n_annotations= for (self: AAttrPropdef, nullable AAnnotations) */
void nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAttrPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_kwdo= for (self: AAttrPropdef, nullable TKwdo) */
void nitc__parser_prod___AAttrPropdef___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwdo */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwdo].val = var_node; /* _n_kwdo on <self:AAttrPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwdo> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwdo(TKwdo)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwdo(TKwdo)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwdo(TKwdo)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$n_block= for (self: AAttrPropdef, nullable AExpr) */
void nitc__parser_prod___AAttrPropdef___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val = var_node; /* _n_block on <self:AAttrPropdef> */
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
/* method parser_prod$AAttrPropdef$n_kwend= for (self: AAttrPropdef, nullable TKwend) */
void nitc__parser_prod___AAttrPropdef___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwend].val = var_node; /* _n_kwend on <self:AAttrPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwend> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwend(TKwend)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwend(TKwend)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwend(TKwend)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAttrPropdef$visit_all for (self: AAttrPropdef, Visitor) */
void nitc__parser_prod___AAttrPropdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwvar */;
val* var4 /* : TId */;
val* var5 /* : nullable AType */;
val* var6 /* : nullable TAssign */;
val* var7 /* : nullable AExpr */;
val* var8 /* : nullable AAnnotations */;
val* var9 /* : nullable TKwdo */;
val* var10 /* : nullable AExpr */;
val* var11 /* : nullable TKwend */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 951);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 952);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_assign].val; /* _n_assign on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwdo].val; /* _n_kwdo on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var10 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var10); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var11 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_kwend].val; /* _n_kwend on <self:AAttrPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var11); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AMainMethPropdef$init_amainmethpropdef for (self: AMainMethPropdef, nullable TKwredef, nullable AExpr) */
void nitc__parser_prod___AMainMethPropdef___init_amainmethpropdef(val* self, val* p0, val* p1) {
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_block /* var n_block: nullable AExpr */;
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
{ /* Inline kernel$Object$init (self) on <self:AMainMethPropdef> */
RET_LABEL1:(void)0;
}
}
var_n_kwredef = p0;
var_n_block = p1;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMainMethPropdef> */
if (var_n_kwredef == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwredef,((val*)NULL)) on <var_n_kwredef:nullable TKwredef> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwredef, var_other); /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMainMethPropdef> */
if (var_n_block == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL12:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMainMethPropdef$replace_child for (self: AMainMethPropdef, ANode, nullable ANode) */
void nitc__parser_prod___AMainMethPropdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwredef(TKwredef)> */
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
cltype = type_nullable__nitc__TKwredef.color;
idtype = type_nullable__nitc__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 977);
fatal_exit(1);
}
{
nitc__parser_prod___AMainMethPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod$AMainMethPropdef$n_kwredef= on <self:AMainMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable AExpr(AExpr)> */
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
cltype16 = type_nullable__nitc__AExpr.color;
idtype17 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 981);
fatal_exit(1);
}
{
nitc__parser_prod___AMainMethPropdef___nitc__parser_nodes__AMethPropdef__n_block_61d(self, var_new_child); /* Direct call parser_prod$AMainMethPropdef$n_block= on <self:AMainMethPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMainMethPropdef$n_kwredef= for (self: AMainMethPropdef, nullable TKwredef) */
void nitc__parser_prod___AMainMethPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AMainMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwredef> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMainMethPropdef$n_block= for (self: AMainMethPropdef, nullable AExpr) */
void nitc__parser_prod___AMainMethPropdef___nitc__parser_nodes__AMethPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AMainMethPropdef> */
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
/* method parser_prod$AMainMethPropdef$visit_all for (self: AMainMethPropdef, Visitor) */
void nitc__parser_prod___AMainMethPropdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwredef */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMainMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMainMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$init_atypepropdef for (self: ATypePropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwtype, nullable AQclassid, nullable AType, nullable AAnnotations) */
void nitc__parser_prod___ATypePropdef___init_atypepropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwtype /* var n_kwtype: nullable TKwtype */;
val* var_n_qid /* var n_qid: nullable AQclassid */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ATypePropdef> */
RET_LABEL1:(void)0;
}
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwtype = p3;
var_n_qid = p4;
var_n_type = p5;
var_n_annotations = p6;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:ATypePropdef> */
if (var_n_doc == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_doc,((val*)NULL)) on <var_n_doc:nullable ADoc> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_doc, var_other); /* == on <var_n_doc:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:ATypePropdef> */
if (var_n_kwredef == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwredef,((val*)NULL)) on <var_n_kwredef:nullable TKwredef> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwredef, var_other); /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL12:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1019);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ATypePropdef> */
if (var_n_visibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1020);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL13:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1021);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ATypePropdef> */
if (var_n_kwtype == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1022);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwtype->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL14:(void)0;
}
}
if (unlikely(var_n_qid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1023);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val = var_n_qid; /* _n_qid on <self:ATypePropdef> */
if (var_n_qid == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1024);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_qid,self) on <var_n_qid:nullable AQclassid> */
if (unlikely(var_n_qid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_qid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_qid:nullable AQclassid> */
RET_LABEL15:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1025);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val = var_n_type; /* _n_type on <self:ATypePropdef> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1026);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL16:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ATypePropdef> */
if (var_n_annotations == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL22:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$replace_child for (self: ATypePropdef, ANode, nullable ANode) */
void nitc__parser_prod___ATypePropdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var40 /* : AQclassid */;
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
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ATypePropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable ADoc> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable ADoc(ADoc)> */
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
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1034);
fatal_exit(1);
}
{
nitc__parser_prod___ATypePropdef___nitc__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod$ATypePropdef$n_doc= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable TKwredef(TKwredef)> */
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
cltype16 = type_nullable__nitc__TKwredef.color;
idtype17 = type_nullable__nitc__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1038);
fatal_exit(1);
}
{
nitc__parser_prod___ATypePropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod$ATypePropdef$n_kwredef= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var19,var_old_child) on <var19:nullable AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other) on <var19:nullable AVisibility(AVisibility)> */
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
cltype27 = type_nitc__AVisibility.color;
idtype28 = type_nitc__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1042);
fatal_exit(1);
}
{
nitc__parser_prod___ATypePropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$ATypePropdef$n_visibility= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1045);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var30,var_old_child) on <var30:TKwtype> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var30,var_other) on <var30:TKwtype> */
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
cltype37 = type_nitc__TKwtype.color;
idtype38 = type_nitc__TKwtype.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1046);
fatal_exit(1);
}
{
nitc__parser_prod___ATypePropdef___n_kwtype_61d(self, var_new_child); /* Direct call parser_prod$ATypePropdef$n_kwtype= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val; /* _n_qid on <self:ATypePropdef> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1049);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:AQclassid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:AQclassid> */
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
/* <var_new_child:nullable ANode> isa AQclassid */
cltype47 = type_nitc__AQclassid.color;
idtype48 = type_nitc__AQclassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AQclassid", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1050);
fatal_exit(1);
}
{
nitc__parser_prod___ATypePropdef___n_qid_61d(self, var_new_child); /* Direct call parser_prod$ATypePropdef$n_qid= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1053);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var50,var_old_child) on <var50:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var50,var_other) on <var50:AType> */
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
cltype57 = type_nitc__AType.color;
idtype58 = type_nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1054);
fatal_exit(1);
}
{
nitc__parser_prod___ATypePropdef___n_type_61d(self, var_new_child); /* Direct call parser_prod$ATypePropdef$n_type= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
var60 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
if (var60 == NULL) {
var61 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var60,var_old_child) on <var60:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var60,var_other) on <var60:nullable AAnnotations(AAnnotations)> */
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
cltype68 = type_nullable__nitc__AAnnotations.color;
idtype69 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1058);
fatal_exit(1);
}
{
nitc__parser_prod___ATypePropdef___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$ATypePropdef$n_annotations= on <self:ATypePropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$n_doc= for (self: ATypePropdef, nullable ADoc) */
void nitc__parser_prod___ATypePropdef___nitc__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:ATypePropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ADoc> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$n_kwredef= for (self: ATypePropdef, nullable TKwredef) */
void nitc__parser_prod___ATypePropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:ATypePropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwredef> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$n_visibility= for (self: ATypePropdef, nullable AVisibility) */
void nitc__parser_prod___ATypePropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:ATypePropdef> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1076);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$n_kwtype= for (self: ATypePropdef, TKwtype) */
void nitc__parser_prod___ATypePropdef___n_kwtype_61d(val* self, val* p0) {
val* var_node /* var node: TKwtype */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_kwtype].val = var_node; /* _n_kwtype on <self:ATypePropdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwtype> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwtype> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$n_qid= for (self: ATypePropdef, AQclassid) */
void nitc__parser_prod___ATypePropdef___n_qid_61d(val* self, val* p0) {
val* var_node /* var node: AQclassid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val = var_node; /* _n_qid on <self:ATypePropdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AQclassid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AQclassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$n_type= for (self: ATypePropdef, AType) */
void nitc__parser_prod___ATypePropdef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val = var_node; /* _n_type on <self:ATypePropdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$n_annotations= for (self: ATypePropdef, nullable AAnnotations) */
void nitc__parser_prod___ATypePropdef___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ATypePropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATypePropdef$visit_all for (self: ATypePropdef, Visitor) */
void nitc__parser_prod___ATypePropdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwtype */;
val* var4 /* : AQclassid */;
val* var5 /* : AType */;
val* var6 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ATypePropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_kwtype].val; /* _n_kwtype on <self:ATypePropdef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1105);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val; /* _n_qid on <self:ATypePropdef> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1106);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1107);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ATypePropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$init_amethpropdef for (self: AMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable TKwinit, nullable TKwnew, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExternCalls, nullable AExternCodeBlock, nullable TKwdo, nullable AExpr, nullable TKwend) */
void nitc__parser_prod___AMethPropdef___init_amethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11, val* p12, val* p13) {
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
val* var_n_kwdo /* var n_kwdo: nullable TKwdo */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AMethPropdef> */
RET_LABEL1:(void)0;
}
}
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
var_n_kwdo = p11;
var_n_block = p12;
var_n_kwend = p13;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AMethPropdef> */
if (var_n_doc == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_doc,((val*)NULL)) on <var_n_doc:nullable ADoc> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_doc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_doc, var_other); /* == on <var_n_doc:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_doc,self) on <var_n_doc:nullable ADoc(ADoc)> */
var_n_doc->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_doc:nullable ADoc(ADoc)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMethPropdef> */
if (var_n_kwredef == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwredef,((val*)NULL)) on <var_n_kwredef:nullable TKwredef> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwredef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwredef, var_other); /* == on <var_n_kwredef:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwredef,self) on <var_n_kwredef:nullable TKwredef(TKwredef)> */
var_n_kwredef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwredef:nullable TKwredef(TKwredef)> */
RET_LABEL12:(void)0;
}
}
} else {
}
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1133);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AMethPropdef> */
if (var_n_visibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1134);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL13:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AMethPropdef> */
if (var_n_kwmeth == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwmeth,((val*)NULL)) on <var_n_kwmeth:nullable TKwmeth> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_n_kwmeth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwmeth, var_other); /* == on <var_n_kwmeth:nullable TKwmeth(TKwmeth)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwmeth,self) on <var_n_kwmeth:nullable TKwmeth(TKwmeth)> */
var_n_kwmeth->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwmeth:nullable TKwmeth(TKwmeth)> */
RET_LABEL19:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AMethPropdef> */
if (var_n_kwinit == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwinit,((val*)NULL)) on <var_n_kwinit:nullable TKwinit> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwinit,self) on <var_n_kwinit:nullable TKwinit(TKwinit)> */
var_n_kwinit->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinit:nullable TKwinit(TKwinit)> */
RET_LABEL25:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:AMethPropdef> */
if (var_n_kwnew == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var29 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_kwnew,self) on <var_n_kwnew:nullable TKwnew(TKwnew)> */
var_n_kwnew->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnew:nullable TKwnew(TKwnew)> */
RET_LABEL31:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AMethPropdef> */
if (var_n_methid == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_methid,((val*)NULL)) on <var_n_methid:nullable AMethid> */
var_other = ((val*)NULL);
{
var35 = ((short int(*)(val* self, val* p0))(var_n_methid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_methid, var_other); /* == on <var_n_methid:nullable AMethid(AMethid)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_methid,self) on <var_n_methid:nullable AMethid(AMethid)> */
var_n_methid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid(AMethid)> */
RET_LABEL37:(void)0;
}
}
} else {
}
if (unlikely(var_n_signature == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1143);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AMethPropdef> */
if (var_n_signature == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1144);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_signature,self) on <var_n_signature:nullable ASignature> */
if (unlikely(var_n_signature == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_signature->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_signature:nullable ASignature> */
RET_LABEL38:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AMethPropdef> */
if (var_n_annotations == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL44:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AMethPropdef> */
if (var_n_extern_calls == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_extern_calls,((val*)NULL)) on <var_n_extern_calls:nullable AExternCalls> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_n_extern_calls->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_extern_calls, var_other); /* == on <var_n_extern_calls:nullable AExternCalls(AExternCalls)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_extern_calls,self) on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
var_n_extern_calls->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
RET_LABEL50:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AMethPropdef> */
if (var_n_extern_code_block == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_extern_code_block,((val*)NULL)) on <var_n_extern_code_block:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var54 = ((short int(*)(val* self, val* p0))(var_n_extern_code_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_extern_code_block, var_other); /* == on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var55 = !var54;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_extern_code_block,self) on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var_n_extern_code_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL56:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwdo].val = var_n_kwdo; /* _n_kwdo on <self:AMethPropdef> */
if (var_n_kwdo == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwdo,((val*)NULL)) on <var_n_kwdo:nullable TKwdo> */
var_other = ((val*)NULL);
{
var60 = ((short int(*)(val* self, val* p0))(var_n_kwdo->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwdo, var_other); /* == on <var_n_kwdo:nullable TKwdo(TKwdo)>*/
}
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_kwdo,self) on <var_n_kwdo:nullable TKwdo(TKwdo)> */
var_n_kwdo->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwdo:nullable TKwdo(TKwdo)> */
RET_LABEL62:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMethPropdef> */
if (var_n_block == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var66 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
}
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL68:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwend].val = var_n_kwend; /* _n_kwend on <self:AMethPropdef> */
if (var_n_kwend == NULL) {
var69 = 0; /* is null */
} else {
var69 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwend,((val*)NULL)) on <var_n_kwend:nullable TKwend> */
var_other = ((val*)NULL);
{
var72 = ((short int(*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwend, var_other); /* == on <var_n_kwend:nullable TKwend(TKwend)>*/
}
var73 = !var72;
var70 = var73;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend(TKwend)> */
var_n_kwend->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend(TKwend)> */
RET_LABEL74:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$replace_child for (self: AMethPropdef, ANode, nullable ANode) */
void nitc__parser_prod___AMethPropdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var118 /* : nullable TKwdo */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
val* var129 /* : nullable AExpr */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
val* var140 /* : nullable TKwend */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
const char* var_class_name150;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable ADoc> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable ADoc(ADoc)> */
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
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1162);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___nitc__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_doc= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:nullable TKwredef> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:nullable TKwredef(TKwredef)> */
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
cltype16 = type_nullable__nitc__TKwredef.color;
idtype17 = type_nullable__nitc__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1166);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ADefinition__n_kwredef_61d]))(self, var_new_child); /* n_kwredef= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var19,var_old_child) on <var19:nullable AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other) on <var19:nullable AVisibility(AVisibility)> */
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
cltype27 = type_nitc__AVisibility.color;
idtype28 = type_nitc__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1170);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_visibility= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var30,var_old_child) on <var30:nullable TKwmeth> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var30,var_other) on <var30:nullable TKwmeth(TKwmeth)> */
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
cltype38 = type_nullable__nitc__TKwmeth.color;
idtype39 = type_nullable__nitc__TKwmeth.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1174);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_kwmeth_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_kwmeth= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var41,var_old_child) on <var41:nullable TKwinit> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var41,var_other) on <var41:nullable TKwinit(TKwinit)> */
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
cltype49 = type_nullable__nitc__TKwinit.color;
idtype50 = type_nullable__nitc__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1178);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_kwinit_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_kwinit= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var52,var_old_child) on <var52:nullable TKwnew> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var52,var_other) on <var52:nullable TKwnew(TKwnew)> */
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
cltype60 = type_nullable__nitc__TKwnew.color;
idtype61 = type_nullable__nitc__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1182);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_kwnew_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_kwnew= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
if (var63 == NULL) {
var64 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var63,var_old_child) on <var63:nullable AMethid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var63,var_other) on <var63:nullable AMethid(AMethid)> */
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
cltype71 = type_nullable__nitc__AMethid.color;
idtype72 = type_nullable__nitc__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1186);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_methid_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_methid= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
if (var74 == NULL) {
var75 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var74,var_old_child) on <var74:nullable ASignature> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var74,var_other) on <var74:nullable ASignature(ASignature)> */
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
cltype82 = type_nitc__ASignature.color;
idtype83 = type_nitc__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1190);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_signature_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_signature= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var85 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AMethPropdef> */
if (var85 == NULL) {
var86 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var85,var_old_child) on <var85:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var85,var_other) on <var85:nullable AAnnotations(AAnnotations)> */
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
cltype93 = type_nullable__nitc__AAnnotations.color;
idtype94 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1194);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_annotations= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var96 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
if (var96 == NULL) {
var97 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var96,var_old_child) on <var96:nullable AExternCalls> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var96,var_other) on <var96:nullable AExternCalls(AExternCalls)> */
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
cltype104 = type_nullable__nitc__AExternCalls.color;
idtype105 = type_nullable__nitc__AExternCalls.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1198);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_extern_calls_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_extern_calls= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var107 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
if (var107 == NULL) {
var108 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var107,var_old_child) on <var107:nullable AExternCodeBlock> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var107,var_other) on <var107:nullable AExternCodeBlock(AExternCodeBlock)> */
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
cltype115 = type_nullable__nitc__AExternCodeBlock.color;
idtype116 = type_nullable__nitc__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1202);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_extern_code_block_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_extern_code_block= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var118 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwdo].val; /* _n_kwdo on <self:AMethPropdef> */
if (var118 == NULL) {
var119 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var118,var_old_child) on <var118:nullable TKwdo> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var118,var_other) on <var118:nullable TKwdo(TKwdo)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwdo */
cltype126 = type_nullable__nitc__TKwdo.color;
idtype127 = type_nullable__nitc__TKwdo.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwdo", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1206);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_kwdo_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_kwdo= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var129 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
if (var129 == NULL) {
var130 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var129,var_old_child) on <var129:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var129,var_other) on <var129:nullable AExpr(AExpr)> */
var135 = var129 == var_other;
var133 = var135;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
}
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
var130 = var131;
}
if (var130){
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype137 = type_nullable__nitc__AExpr.color;
idtype138 = type_nullable__nitc__AExpr.id;
if(var_new_child == NULL) {
var136 = 1;
} else {
if(cltype137 >= var_new_child->type->table_size) {
var136 = 0;
} else {
var136 = var_new_child->type->type_table[cltype137] == idtype138;
}
}
if (unlikely(!var136)) {
var_class_name139 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1210);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__AMethPropdef__n_block_61d]))(self, var_new_child); /* n_block= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var140 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwend].val; /* _n_kwend on <self:AMethPropdef> */
if (var140 == NULL) {
var141 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var140,var_old_child) on <var140:nullable TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var140,var_other) on <var140:nullable TKwend(TKwend)> */
var146 = var140 == var_other;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
/* <var_new_child:nullable ANode> isa nullable TKwend */
cltype148 = type_nullable__nitc__TKwend.color;
idtype149 = type_nullable__nitc__TKwend.id;
if(var_new_child == NULL) {
var147 = 1;
} else {
if(cltype148 >= var_new_child->type->table_size) {
var147 = 0;
} else {
var147 = var_new_child->type->type_table[cltype148] == idtype149;
}
}
if (unlikely(!var147)) {
var_class_name150 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwend", var_class_name150);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1214);
fatal_exit(1);
}
{
nitc__parser_prod___AMethPropdef___n_kwend_61d(self, var_new_child); /* Direct call parser_prod$AMethPropdef$n_kwend= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_doc= for (self: AMethPropdef, nullable ADoc) */
void nitc__parser_prod___AMethPropdef___nitc__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ADoc> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ADoc(ADoc)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ADoc(ADoc)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ADoc(ADoc)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_kwredef= for (self: AMethPropdef, nullable TKwredef) */
void nitc__parser_prod___AMethPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwredef> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwredef(TKwredef)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwredef(TKwredef)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwredef(TKwredef)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_visibility= for (self: AMethPropdef, nullable AVisibility) */
void nitc__parser_prod___AMethPropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AMethPropdef> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1232);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_kwmeth= for (self: AMethPropdef, nullable TKwmeth) */
void nitc__parser_prod___AMethPropdef___n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwmeth */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwmeth> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwmeth(TKwmeth)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwmeth(TKwmeth)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwmeth(TKwmeth)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_kwinit= for (self: AMethPropdef, nullable TKwinit) */
void nitc__parser_prod___AMethPropdef___n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwinit */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val = var_node; /* _n_kwinit on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwinit> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwinit(TKwinit)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwinit(TKwinit)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwinit(TKwinit)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_kwnew= for (self: AMethPropdef, nullable TKwnew) */
void nitc__parser_prod___AMethPropdef___n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnew */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwnew].val = var_node; /* _n_kwnew on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwnew> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwnew(TKwnew)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwnew(TKwnew)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwnew(TKwnew)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_methid= for (self: AMethPropdef, nullable AMethid) */
void nitc__parser_prod___AMethPropdef___n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AMethid> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AMethid(AMethid)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AMethid(AMethid)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AMethid(AMethid)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_signature= for (self: AMethPropdef, nullable ASignature) */
void nitc__parser_prod___AMethPropdef___n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AMethPropdef> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1257);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable ASignature> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ASignature> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_annotations= for (self: AMethPropdef, nullable AAnnotations) */
void nitc__parser_prod___AMethPropdef___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AAnnotations> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AAnnotations(AAnnotations)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AAnnotations(AAnnotations)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_extern_calls= for (self: AMethPropdef, nullable AExternCalls) */
void nitc__parser_prod___AMethPropdef___n_extern_calls_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCalls */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_calls].val = var_node; /* _n_extern_calls on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExternCalls> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AExternCalls(AExternCalls)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExternCalls(AExternCalls)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCalls(AExternCalls)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_extern_code_block= for (self: AMethPropdef, nullable AExternCodeBlock) */
void nitc__parser_prod___AMethPropdef___n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_kwdo= for (self: AMethPropdef, nullable TKwdo) */
void nitc__parser_prod___AMethPropdef___n_kwdo_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwdo */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwdo].val = var_node; /* _n_kwdo on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwdo> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwdo(TKwdo)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwdo(TKwdo)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwdo(TKwdo)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMethPropdef$n_block= for (self: AMethPropdef, nullable AExpr) */
void nitc__parser_prod___AMethPropdef___n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AMethPropdef> */
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
/* method parser_prod$AMethPropdef$n_kwend= for (self: AMethPropdef, nullable TKwend) */
void nitc__parser_prod___AMethPropdef___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwend].val = var_node; /* _n_kwend on <self:AMethPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwend> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwend(TKwend)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwend(TKwend)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwend(TKwend)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
