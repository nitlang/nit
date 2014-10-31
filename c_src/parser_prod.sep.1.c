#include "parser_prod.sep.0.h"
/* method parser_prod#AModule#init_amodule for (self: AModule, nullable AModuledecl, Collection[Object], Collection[Object], Collection[Object]) */
void parser_prod__AModule__init_amodule(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var6 /* : Bool */;
val* var8 /* : ANodes[AImport] */;
val* var10 /* : ANodes[AImport] */;
val* var11 /* : ANodes[AExternCodeBlock] */;
val* var13 /* : ANodes[AExternCodeBlock] */;
val* var14 /* : ANodes[AClassdef] */;
val* var16 /* : ANodes[AClassdef] */;
var_n_moduledecl = p0;
var_n_imports = p1;
var_n_extern_code_blocks = p2;
var_n_classdefs = p3;
self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val = var_n_moduledecl; /* _n_moduledecl on <self:AModule> */
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
var5 = ((short int (*)(val*, val*))(var_n_moduledecl->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_moduledecl, var_other) /* == on <var_n_moduledecl:nullable AModuledecl(AModuledecl)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_moduledecl,self) on <var_n_moduledecl:nullable AModuledecl(AModuledecl)> */
var_n_moduledecl->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_moduledecl:nullable AModuledecl(AModuledecl)> */
RET_LABEL7:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AModule#n_imports (self) on <self:AModule> */
var10 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 857);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var8, var_n_imports); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var8:ANodes[AImport]>*/
}
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:AModule> */
var13 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 858);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var11, var_n_extern_code_blocks); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var11:ANodes[AExternCodeBlock]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var16 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var14, var_n_classdefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var14:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AModule#init_amodule for (self: Object, nullable AModuledecl, Collection[Object], Collection[Object], Collection[Object]) */
void VIRTUAL_parser_prod__AModule__init_amodule(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AModule__init_amodule(self, p0, p1, p2, p3); /* Direct call parser_prod#AModule#init_amodule on <self:Object(AModule)>*/
RET_LABEL:;
}
/* method parser_prod#AModule#replace_child for (self: AModule, ANode, nullable ANode) */
void parser_prod__AModule__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
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
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 27);
show_backtrace(1);
}
{
parser_prod__AModule__n_moduledecl_61d(self, var_new_child); /* Direct call parser_prod#AModule#n_moduledecl= on <self:AModule>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_imports (self) on <self:AModule> */
var10 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 857);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = parser_nodes__ANodes__replace_child(var8, var_old_child, var_new_child);
}
if (var11){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:AModule> */
var14 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 858);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = parser_nodes__ANodes__replace_child(var12, var_old_child, var_new_child);
}
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var18 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = parser_nodes__ANodes__replace_child(var16, var_old_child, var_new_child);
}
if (var19){
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModule#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AModule__replace_child(val* self, val* p0, val* p1) {
parser_prod__AModule__replace_child(self, p0, p1); /* Direct call parser_prod#AModule#replace_child on <self:Object(AModule)>*/
RET_LABEL:;
}
/* method parser_prod#AModule#n_moduledecl= for (self: AModule, nullable AModuledecl) */
void parser_prod__AModule__n_moduledecl_61d(val* self, val* p0) {
val* var_node /* var node: nullable AModuledecl */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val = var_node; /* _n_moduledecl on <self:AModule> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AModuledecl(AModuledecl)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AModuledecl(AModuledecl)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AModuledecl(AModuledecl)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModule#n_moduledecl= for (self: Object, nullable AModuledecl) */
void VIRTUAL_parser_prod__AModule__n_moduledecl_61d(val* self, val* p0) {
parser_prod__AModule__n_moduledecl_61d(self, p0); /* Direct call parser_prod#AModule#n_moduledecl= on <self:Object(AModule)>*/
RET_LABEL:;
}
/* method parser_prod#AModule#visit_all for (self: AModule, Visitor) */
void parser_prod__AModule__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModuledecl */;
val* var1 /* : ANodes[AImport] */;
val* var3 /* : ANodes[AImport] */;
val* var4 /* : ANodes[AExternCodeBlock] */;
val* var6 /* : ANodes[AExternCodeBlock] */;
val* var7 /* : ANodes[AClassdef] */;
val* var9 /* : ANodes[AClassdef] */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AModule#n_imports (self) on <self:AModule> */
var3 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 857);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var1, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var1:ANodes[AImport]>*/
}
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:AModule> */
var6 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 858);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var4, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var4:ANodes[AExternCodeBlock]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var9 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var7, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var7:ANodes[AClassdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AModule#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AModule__visit_all(val* self, val* p0) {
parser_prod__AModule__visit_all(self, p0); /* Direct call parser_prod#AModule#visit_all on <self:Object(AModule)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#init_amoduledecl for (self: AModuledecl, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmodule, nullable AModuleName, nullable AAnnotations) */
void parser_prod__AModuledecl__init_amoduledecl(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
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
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmodule = p3;
var_n_name = p4;
var_n_annotations = p5;
self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val = var_n_doc; /* _n_doc on <self:AModuledecl> */
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
self->attrs[COLOR_parser_nodes__AModuledecl___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AModuledecl> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 64);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuledecl___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AModuledecl> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 65);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_kwmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 66);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val = var_n_kwmodule; /* _n_kwmodule on <self:AModuledecl> */
if (var_n_kwmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 67);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwmodule,self) on <var_n_kwmodule:nullable TKwmodule> */
if (unlikely(var_n_kwmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwmodule->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwmodule:nullable TKwmodule> */
RET_LABEL17:(void)0;
}
}
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 68);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val = var_n_name; /* _n_name on <self:AModuledecl> */
if (var_n_name == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 69);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_name,self) on <var_n_name:nullable AModuleName> */
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_name->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_name:nullable AModuleName> */
RET_LABEL18:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AModuledecl> */
var19 = NULL;
if (var_n_annotations == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var19) on <var_n_annotations:nullable AAnnotations> */
var_other = var19;
{
var24 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL26:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#init_amoduledecl for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmodule, nullable AModuleName, nullable AAnnotations) */
void VIRTUAL_parser_prod__AModuledecl__init_amoduledecl(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AModuledecl__init_amoduledecl(self, p0, p1, p2, p3, p4, p5); /* Direct call parser_prod#AModuledecl#init_amoduledecl on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#replace_child for (self: AModuledecl, ANode, nullable ANode) */
void parser_prod__AModuledecl__replace_child(val* self, val* p0, val* p1) {
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
val* var19 /* : AVisibility */;
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
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : AModuleName */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable AAnnotations */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val; /* _n_doc on <self:AModuledecl> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 77);
show_backtrace(1);
}
{
parser_prod__AModuledecl__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_doc= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AModuledecl___n_kwredef].val; /* _n_kwredef on <self:AModuledecl> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 81);
show_backtrace(1);
}
{
parser_prod__AModuledecl__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_kwredef= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AModuledecl___n_visibility].val; /* _n_visibility on <self:AModuledecl> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 84);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AVisibility> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 85);
show_backtrace(1);
}
{
parser_prod__AModuledecl__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_visibility= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 88);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TKwmodule> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TKwmodule> */
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
/* <var_new_child:nullable ANode> isa TKwmodule */
cltype38 = type_parser_nodes__TKwmodule.color;
idtype39 = type_parser_nodes__TKwmodule.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwmodule", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 89);
show_backtrace(1);
}
{
parser_prod__AModuledecl__n_kwmodule_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_kwmodule= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 92);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:AModuleName> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:AModuleName> */
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
/* <var_new_child:nullable ANode> isa AModuleName */
cltype49 = type_parser_nodes__AModuleName.color;
idtype50 = type_parser_nodes__AModuleName.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModuleName", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 93);
show_backtrace(1);
}
{
parser_prod__AModuledecl__n_name_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_name= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype60 = type_nullable_parser_nodes__AAnnotations.color;
idtype61 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 97);
show_backtrace(1);
}
{
parser_prod__AModuledecl__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AModuledecl#n_annotations= on <self:AModuledecl>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AModuledecl__replace_child(val* self, val* p0, val* p1) {
parser_prod__AModuledecl__replace_child(self, p0, p1); /* Direct call parser_prod#AModuledecl#replace_child on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_doc= for (self: AModuledecl, nullable ADoc) */
void parser_prod__AModuledecl__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val = var_node; /* _n_doc on <self:AModuledecl> */
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
/* method parser_prod#AModuledecl#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AModuledecl__n_doc_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_doc_61d(self, p0); /* Direct call parser_prod#AModuledecl#n_doc= on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_kwredef= for (self: AModuledecl, nullable TKwredef) */
void parser_prod__AModuledecl__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuledecl___n_kwredef].val = var_node; /* _n_kwredef on <self:AModuledecl> */
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
/* method parser_prod#AModuledecl#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AModuledecl__n_kwredef_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_kwredef_61d(self, p0); /* Direct call parser_prod#AModuledecl#n_kwredef= on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_visibility= for (self: AModuledecl, AVisibility) */
void parser_prod__AModuledecl__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuledecl___n_visibility].val = var_node; /* _n_visibility on <self:AModuledecl> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AVisibility> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__AModuledecl__n_visibility_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_visibility_61d(self, p0); /* Direct call parser_prod#AModuledecl#n_visibility= on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_kwmodule= for (self: AModuledecl, TKwmodule) */
void parser_prod__AModuledecl__n_kwmodule_61d(val* self, val* p0) {
val* var_node /* var node: TKwmodule */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val = var_node; /* _n_kwmodule on <self:AModuledecl> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwmodule> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwmodule> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_kwmodule= for (self: Object, TKwmodule) */
void VIRTUAL_parser_prod__AModuledecl__n_kwmodule_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_kwmodule_61d(self, p0); /* Direct call parser_prod#AModuledecl#n_kwmodule= on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_name= for (self: AModuledecl, AModuleName) */
void parser_prod__AModuledecl__n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val = var_node; /* _n_name on <self:AModuledecl> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AModuleName> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AModuleName> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_name= for (self: Object, AModuleName) */
void VIRTUAL_parser_prod__AModuledecl__n_name_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_name_61d(self, p0); /* Direct call parser_prod#AModuledecl#n_name= on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_annotations= for (self: AModuledecl, nullable AAnnotations) */
void parser_prod__AModuledecl__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AModuledecl> */
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
/* method parser_prod#AModuledecl#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AModuledecl__n_annotations_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_annotations_61d(self, p0); /* Direct call parser_prod#AModuledecl#n_annotations= on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AModuledecl#visit_all for (self: AModuledecl, Visitor) */
void parser_prod__AModuledecl__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : AVisibility */;
val* var3 /* : TKwmodule */;
val* var4 /* : AModuleName */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val; /* _n_doc on <self:AModuledecl> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AModuledecl___n_kwredef].val; /* _n_kwredef on <self:AModuledecl> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AModuledecl___n_visibility].val; /* _n_visibility on <self:AModuledecl> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 138);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwmodule");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 139);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 140);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AModuledecl__visit_all(val* self, val* p0) {
parser_prod__AModuledecl__visit_all(self, p0); /* Direct call parser_prod#AModuledecl#visit_all on <self:Object(AModuledecl)>*/
RET_LABEL:;
}
/* method parser_prod#AStdImport#init_astdimport for (self: AStdImport, nullable AVisibility, nullable TKwimport, nullable AModuleName, nullable AAnnotations) */
void parser_prod__AStdImport__init_astdimport(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var9 /* : Bool */;
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_name = p2;
var_n_annotations = p3;
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 152);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdImport> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 153);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 154);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AStdImport> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 155);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwimport->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 156);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_name].val = var_n_name; /* _n_name on <self:AStdImport> */
if (var_n_name == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 157);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_name,self) on <var_n_name:nullable AModuleName> */
if (unlikely(var_n_name == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_name->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_name:nullable AModuleName> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStdImport> */
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
var8 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL10:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#init_astdimport for (self: Object, nullable AVisibility, nullable TKwimport, nullable AModuleName, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStdImport__init_astdimport(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AStdImport__init_astdimport(self, p0, p1, p2, p3); /* Direct call parser_prod#AStdImport#init_astdimport on <self:Object(AStdImport)>*/
RET_LABEL:;
}
/* method parser_prod#AStdImport#replace_child for (self: AStdImport, ANode, nullable ANode) */
void parser_prod__AStdImport__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AVisibility */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TKwimport */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : AModuleName */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
val* var30 /* : nullable AAnnotations */;
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
var = self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 164);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AVisibility> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype = type_parser_nodes__AVisibility.color;
idtype = type_parser_nodes__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 165);
show_backtrace(1);
}
{
parser_prod__AStdImport__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AStdImport#n_visibility= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 168);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwimport> */
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
/* <var_new_child:nullable ANode> isa TKwimport */
cltype16 = type_parser_nodes__TKwimport.color;
idtype17 = type_parser_nodes__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 169);
show_backtrace(1);
}
{
parser_prod__AStdImport__n_kwimport_61d(self, var_new_child); /* Direct call parser_prod#AStdImport#n_kwimport= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 172);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AModuleName> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AModuleName> */
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
/* <var_new_child:nullable ANode> isa AModuleName */
cltype27 = type_parser_nodes__AModuleName.color;
idtype28 = type_parser_nodes__AModuleName.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModuleName", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 173);
show_backtrace(1);
}
{
parser_prod__AStdImport__n_name_61d(self, var_new_child); /* Direct call parser_prod#AStdImport#n_name= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
if (var30 == NULL) {
var31 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype38 = type_nullable_parser_nodes__AAnnotations.color;
idtype39 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 177);
show_backtrace(1);
}
{
parser_prod__AStdImport__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AStdImport#n_annotations= on <self:AStdImport>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStdImport__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStdImport__replace_child(self, p0, p1); /* Direct call parser_prod#AStdImport#replace_child on <self:Object(AStdImport)>*/
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_visibility= for (self: AStdImport, AVisibility) */
void parser_prod__AStdImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val = var_node; /* _n_visibility on <self:AStdImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AVisibility> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__AStdImport__n_visibility_61d(val* self, val* p0) {
parser_prod__AStdImport__n_visibility_61d(self, p0); /* Direct call parser_prod#AStdImport#n_visibility= on <self:Object(AStdImport)>*/
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_kwimport= for (self: AStdImport, TKwimport) */
void parser_prod__AStdImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val = var_node; /* _n_kwimport on <self:AStdImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_prod__AStdImport__n_kwimport_61d(val* self, val* p0) {
parser_prod__AStdImport__n_kwimport_61d(self, p0); /* Direct call parser_prod#AStdImport#n_kwimport= on <self:Object(AStdImport)>*/
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_name= for (self: AStdImport, AModuleName) */
void parser_prod__AStdImport__n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdImport___n_name].val = var_node; /* _n_name on <self:AStdImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AModuleName> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AModuleName> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_name= for (self: Object, AModuleName) */
void VIRTUAL_parser_prod__AStdImport__n_name_61d(val* self, val* p0) {
parser_prod__AStdImport__n_name_61d(self, p0); /* Direct call parser_prod#AStdImport#n_name= on <self:Object(AStdImport)>*/
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_annotations= for (self: AStdImport, nullable AAnnotations) */
void parser_prod__AStdImport__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStdImport> */
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
/* method parser_prod#AStdImport#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStdImport__n_annotations_61d(val* self, val* p0) {
parser_prod__AStdImport__n_annotations_61d(self, p0); /* Direct call parser_prod#AStdImport#n_annotations= on <self:Object(AStdImport)>*/
RET_LABEL:;
}
/* method parser_prod#AStdImport#visit_all for (self: AStdImport, Visitor) */
void parser_prod__AStdImport__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : AModuleName */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 206);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 207);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 208);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStdImport__visit_all(val* self, val* p0) {
parser_prod__AStdImport__visit_all(self, p0); /* Direct call parser_prod#AStdImport#visit_all on <self:Object(AStdImport)>*/
RET_LABEL:;
}
/* method parser_prod#ANoImport#init_anoimport for (self: ANoImport, nullable AVisibility, nullable TKwimport, nullable TKwend) */
void parser_prod__ANoImport__init_anoimport(val* self, val* p0, val* p1, val* p2) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_kwend = p2;
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 219);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ANoImport> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 220);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 221);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:ANoImport> */
if (var_n_kwimport == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 222);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwimport,self) on <var_n_kwimport:nullable TKwimport> */
if (unlikely(var_n_kwimport == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwimport->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwimport:nullable TKwimport> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 223);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ANoImport> */
if (var_n_kwend == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 224);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend> */
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwend->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#init_anoimport for (self: Object, nullable AVisibility, nullable TKwimport, nullable TKwend) */
void VIRTUAL_parser_prod__ANoImport__init_anoimport(val* self, val* p0, val* p1, val* p2) {
parser_prod__ANoImport__init_anoimport(self, p0, p1, p2); /* Direct call parser_prod#ANoImport#init_anoimport on <self:Object(ANoImport)>*/
RET_LABEL:;
}
/* method parser_prod#ANoImport#replace_child for (self: ANoImport, ANode, nullable ANode) */
void parser_prod__ANoImport__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AVisibility */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TKwimport */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : TKwend */;
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
var = self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 229);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:AVisibility> */
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
/* <var_new_child:nullable ANode> isa AVisibility */
cltype = type_parser_nodes__AVisibility.color;
idtype = type_parser_nodes__AVisibility.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVisibility", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 230);
show_backtrace(1);
}
{
parser_prod__ANoImport__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#ANoImport#n_visibility= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 233);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwimport> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwimport> */
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
/* <var_new_child:nullable ANode> isa TKwimport */
cltype16 = type_parser_nodes__TKwimport.color;
idtype17 = type_parser_nodes__TKwimport.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwimport", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 234);
show_backtrace(1);
}
{
parser_prod__ANoImport__n_kwimport_61d(self, var_new_child); /* Direct call parser_prod#ANoImport#n_kwimport= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 237);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:TKwend> */
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
/* <var_new_child:nullable ANode> isa TKwend */
cltype27 = type_parser_nodes__TKwend.color;
idtype28 = type_parser_nodes__TKwend.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwend", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 238);
show_backtrace(1);
}
{
parser_prod__ANoImport__n_kwend_61d(self, var_new_child); /* Direct call parser_prod#ANoImport#n_kwend= on <self:ANoImport>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANoImport__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANoImport__replace_child(self, p0, p1); /* Direct call parser_prod#ANoImport#replace_child on <self:Object(ANoImport)>*/
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_visibility= for (self: ANoImport, AVisibility) */
void parser_prod__ANoImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val = var_node; /* _n_visibility on <self:ANoImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AVisibility> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__ANoImport__n_visibility_61d(val* self, val* p0) {
parser_prod__ANoImport__n_visibility_61d(self, p0); /* Direct call parser_prod#ANoImport#n_visibility= on <self:Object(ANoImport)>*/
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwimport= for (self: ANoImport, TKwimport) */
void parser_prod__ANoImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val = var_node; /* _n_kwimport on <self:ANoImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwimport> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwimport> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_prod__ANoImport__n_kwimport_61d(val* self, val* p0) {
parser_prod__ANoImport__n_kwimport_61d(self, p0); /* Direct call parser_prod#ANoImport#n_kwimport= on <self:Object(ANoImport)>*/
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwend= for (self: ANoImport, TKwend) */
void parser_prod__ANoImport__n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val = var_node; /* _n_kwend on <self:ANoImport> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwend> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwend> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwend= for (self: Object, TKwend) */
void VIRTUAL_parser_prod__ANoImport__n_kwend_61d(val* self, val* p0) {
parser_prod__ANoImport__n_kwend_61d(self, p0); /* Direct call parser_prod#ANoImport#n_kwend= on <self:Object(ANoImport)>*/
RET_LABEL:;
}
/* method parser_prod#ANoImport#visit_all for (self: ANoImport, Visitor) */
void parser_prod__ANoImport__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 262);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwimport");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 263);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 264);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANoImport__visit_all(val* self, val* p0) {
parser_prod__ANoImport__visit_all(self, p0); /* Direct call parser_prod#ANoImport#visit_all on <self:Object(ANoImport)>*/
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#init_apublicvisibility for (self: APublicVisibility, nullable TKwpublic) */
void parser_prod__APublicVisibility__init_apublicvisibility(val* self, val* p0) {
val* var_n_kwpublic /* var n_kwpublic: nullable TKwpublic */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_n_kwpublic = p0;
self->attrs[COLOR_parser_nodes__APublicVisibility___n_kwpublic].val = var_n_kwpublic; /* _n_kwpublic on <self:APublicVisibility> */
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
var5 = ((short int (*)(val*, val*))(var_n_kwpublic->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwpublic, var_other) /* == on <var_n_kwpublic:nullable TKwpublic(TKwpublic)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwpublic,self) on <var_n_kwpublic:nullable TKwpublic(TKwpublic)> */
var_n_kwpublic->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwpublic:nullable TKwpublic(TKwpublic)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#init_apublicvisibility for (self: Object, nullable TKwpublic) */
void VIRTUAL_parser_prod__APublicVisibility__init_apublicvisibility(val* self, val* p0) {
parser_prod__APublicVisibility__init_apublicvisibility(self, p0); /* Direct call parser_prod#APublicVisibility#init_apublicvisibility on <self:Object(APublicVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#replace_child for (self: APublicVisibility, ANode, nullable ANode) */
void parser_prod__APublicVisibility__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
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
cltype = type_nullable_parser_nodes__TKwpublic.color;
idtype = type_nullable_parser_nodes__TKwpublic.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 279);
show_backtrace(1);
}
{
parser_prod__APublicVisibility__n_kwpublic_61d(self, var_new_child); /* Direct call parser_prod#APublicVisibility#n_kwpublic= on <self:APublicVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APublicVisibility__replace_child(val* self, val* p0, val* p1) {
parser_prod__APublicVisibility__replace_child(self, p0, p1); /* Direct call parser_prod#APublicVisibility#replace_child on <self:Object(APublicVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#n_kwpublic= for (self: APublicVisibility, nullable TKwpublic) */
void parser_prod__APublicVisibility__n_kwpublic_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwpublic */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APublicVisibility___n_kwpublic].val = var_node; /* _n_kwpublic on <self:APublicVisibility> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwpublic(TKwpublic)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwpublic(TKwpublic)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwpublic(TKwpublic)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#n_kwpublic= for (self: Object, nullable TKwpublic) */
void VIRTUAL_parser_prod__APublicVisibility__n_kwpublic_61d(val* self, val* p0) {
parser_prod__APublicVisibility__n_kwpublic_61d(self, p0); /* Direct call parser_prod#APublicVisibility#n_kwpublic= on <self:Object(APublicVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#visit_all for (self: APublicVisibility, Visitor) */
void parser_prod__APublicVisibility__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwpublic */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APublicVisibility___n_kwpublic].val; /* _n_kwpublic on <self:APublicVisibility> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APublicVisibility__visit_all(val* self, val* p0) {
parser_prod__APublicVisibility__visit_all(self, p0); /* Direct call parser_prod#APublicVisibility#visit_all on <self:Object(APublicVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#init_aprivatevisibility for (self: APrivateVisibility, nullable TKwprivate) */
void parser_prod__APrivateVisibility__init_aprivatevisibility(val* self, val* p0) {
val* var_n_kwprivate /* var n_kwprivate: nullable TKwprivate */;
var_n_kwprivate = p0;
if (unlikely(var_n_kwprivate == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 301);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val = var_n_kwprivate; /* _n_kwprivate on <self:APrivateVisibility> */
if (var_n_kwprivate == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 302);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwprivate,self) on <var_n_kwprivate:nullable TKwprivate> */
if (unlikely(var_n_kwprivate == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwprivate->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwprivate:nullable TKwprivate> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#init_aprivatevisibility for (self: Object, nullable TKwprivate) */
void VIRTUAL_parser_prod__APrivateVisibility__init_aprivatevisibility(val* self, val* p0) {
parser_prod__APrivateVisibility__init_aprivatevisibility(self, p0); /* Direct call parser_prod#APrivateVisibility#init_aprivatevisibility on <self:Object(APrivateVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#replace_child for (self: APrivateVisibility, ANode, nullable ANode) */
void parser_prod__APrivateVisibility__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwprivate */;
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
var = self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 307);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwprivate> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwprivate> */
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
/* <var_new_child:nullable ANode> isa TKwprivate */
cltype = type_parser_nodes__TKwprivate.color;
idtype = type_parser_nodes__TKwprivate.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwprivate", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 308);
show_backtrace(1);
}
{
parser_prod__APrivateVisibility__n_kwprivate_61d(self, var_new_child); /* Direct call parser_prod#APrivateVisibility#n_kwprivate= on <self:APrivateVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APrivateVisibility__replace_child(val* self, val* p0, val* p1) {
parser_prod__APrivateVisibility__replace_child(self, p0, p1); /* Direct call parser_prod#APrivateVisibility#replace_child on <self:Object(APrivateVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#n_kwprivate= for (self: APrivateVisibility, TKwprivate) */
void parser_prod__APrivateVisibility__n_kwprivate_61d(val* self, val* p0) {
val* var_node /* var node: TKwprivate */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val = var_node; /* _n_kwprivate on <self:APrivateVisibility> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwprivate> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwprivate> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#n_kwprivate= for (self: Object, TKwprivate) */
void VIRTUAL_parser_prod__APrivateVisibility__n_kwprivate_61d(val* self, val* p0) {
parser_prod__APrivateVisibility__n_kwprivate_61d(self, p0); /* Direct call parser_prod#APrivateVisibility#n_kwprivate= on <self:Object(APrivateVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#visit_all for (self: APrivateVisibility, Visitor) */
void parser_prod__APrivateVisibility__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprivate */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprivate");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 322);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APrivateVisibility__visit_all(val* self, val* p0) {
parser_prod__APrivateVisibility__visit_all(self, p0); /* Direct call parser_prod#APrivateVisibility#visit_all on <self:Object(APrivateVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#init_aprotectedvisibility for (self: AProtectedVisibility, nullable TKwprotected) */
void parser_prod__AProtectedVisibility__init_aprotectedvisibility(val* self, val* p0) {
val* var_n_kwprotected /* var n_kwprotected: nullable TKwprotected */;
var_n_kwprotected = p0;
if (unlikely(var_n_kwprotected == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 330);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val = var_n_kwprotected; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var_n_kwprotected == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 331);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwprotected,self) on <var_n_kwprotected:nullable TKwprotected> */
if (unlikely(var_n_kwprotected == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwprotected->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwprotected:nullable TKwprotected> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#init_aprotectedvisibility for (self: Object, nullable TKwprotected) */
void VIRTUAL_parser_prod__AProtectedVisibility__init_aprotectedvisibility(val* self, val* p0) {
parser_prod__AProtectedVisibility__init_aprotectedvisibility(self, p0); /* Direct call parser_prod#AProtectedVisibility#init_aprotectedvisibility on <self:Object(AProtectedVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#replace_child for (self: AProtectedVisibility, ANode, nullable ANode) */
void parser_prod__AProtectedVisibility__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwprotected */;
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
var = self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 336);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwprotected> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwprotected> */
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
/* <var_new_child:nullable ANode> isa TKwprotected */
cltype = type_parser_nodes__TKwprotected.color;
idtype = type_parser_nodes__TKwprotected.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwprotected", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 337);
show_backtrace(1);
}
{
parser_prod__AProtectedVisibility__n_kwprotected_61d(self, var_new_child); /* Direct call parser_prod#AProtectedVisibility#n_kwprotected= on <self:AProtectedVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AProtectedVisibility__replace_child(val* self, val* p0, val* p1) {
parser_prod__AProtectedVisibility__replace_child(self, p0, p1); /* Direct call parser_prod#AProtectedVisibility#replace_child on <self:Object(AProtectedVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#n_kwprotected= for (self: AProtectedVisibility, TKwprotected) */
void parser_prod__AProtectedVisibility__n_kwprotected_61d(val* self, val* p0) {
val* var_node /* var node: TKwprotected */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val = var_node; /* _n_kwprotected on <self:AProtectedVisibility> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwprotected> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwprotected> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#n_kwprotected= for (self: Object, TKwprotected) */
void VIRTUAL_parser_prod__AProtectedVisibility__n_kwprotected_61d(val* self, val* p0) {
parser_prod__AProtectedVisibility__n_kwprotected_61d(self, p0); /* Direct call parser_prod#AProtectedVisibility#n_kwprotected= on <self:Object(AProtectedVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#visit_all for (self: AProtectedVisibility, Visitor) */
void parser_prod__AProtectedVisibility__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprotected */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwprotected");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 351);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AProtectedVisibility__visit_all(val* self, val* p0) {
parser_prod__AProtectedVisibility__visit_all(self, p0); /* Direct call parser_prod#AProtectedVisibility#visit_all on <self:Object(AProtectedVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#init_aintrudevisibility for (self: AIntrudeVisibility, nullable TKwintrude) */
void parser_prod__AIntrudeVisibility__init_aintrudevisibility(val* self, val* p0) {
val* var_n_kwintrude /* var n_kwintrude: nullable TKwintrude */;
var_n_kwintrude = p0;
if (unlikely(var_n_kwintrude == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 359);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_n_kwintrude; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var_n_kwintrude == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 360);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwintrude,self) on <var_n_kwintrude:nullable TKwintrude> */
if (unlikely(var_n_kwintrude == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwintrude->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwintrude:nullable TKwintrude> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#init_aintrudevisibility for (self: Object, nullable TKwintrude) */
void VIRTUAL_parser_prod__AIntrudeVisibility__init_aintrudevisibility(val* self, val* p0) {
parser_prod__AIntrudeVisibility__init_aintrudevisibility(self, p0); /* Direct call parser_prod#AIntrudeVisibility#init_aintrudevisibility on <self:Object(AIntrudeVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#replace_child for (self: AIntrudeVisibility, ANode, nullable ANode) */
void parser_prod__AIntrudeVisibility__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwintrude */;
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
var = self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 365);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwintrude> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwintrude> */
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
/* <var_new_child:nullable ANode> isa TKwintrude */
cltype = type_parser_nodes__TKwintrude.color;
idtype = type_parser_nodes__TKwintrude.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwintrude", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 366);
show_backtrace(1);
}
{
parser_prod__AIntrudeVisibility__n_kwintrude_61d(self, var_new_child); /* Direct call parser_prod#AIntrudeVisibility#n_kwintrude= on <self:AIntrudeVisibility>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIntrudeVisibility__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIntrudeVisibility__replace_child(self, p0, p1); /* Direct call parser_prod#AIntrudeVisibility#replace_child on <self:Object(AIntrudeVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#n_kwintrude= for (self: AIntrudeVisibility, TKwintrude) */
void parser_prod__AIntrudeVisibility__n_kwintrude_61d(val* self, val* p0) {
val* var_node /* var node: TKwintrude */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_node; /* _n_kwintrude on <self:AIntrudeVisibility> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwintrude> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwintrude> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#n_kwintrude= for (self: Object, TKwintrude) */
void VIRTUAL_parser_prod__AIntrudeVisibility__n_kwintrude_61d(val* self, val* p0) {
parser_prod__AIntrudeVisibility__n_kwintrude_61d(self, p0); /* Direct call parser_prod#AIntrudeVisibility#n_kwintrude= on <self:Object(AIntrudeVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#visit_all for (self: AIntrudeVisibility, Visitor) */
void parser_prod__AIntrudeVisibility__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwintrude */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwintrude");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 380);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIntrudeVisibility__visit_all(val* self, val* p0) {
parser_prod__AIntrudeVisibility__visit_all(self, p0); /* Direct call parser_prod#AIntrudeVisibility#visit_all on <self:Object(AIntrudeVisibility)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#init_astdclassdef for (self: AStdClassdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AClasskind, nullable TClassid, Collection[Object], nullable AAnnotations, nullable AExternCodeBlock, Collection[Object], Collection[Object], nullable TKwend) */
void parser_prod__AStdClassdef__init_astdclassdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10) {
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
val* var26 /* : ANodes[AFormaldef] */;
val* var28 /* : ANodes[AFormaldef] */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var45 /* : ANodes[ASuperclass] */;
val* var47 /* : ANodes[ASuperclass] */;
val* var48 /* : ANodes[APropdef] */;
val* var50 /* : ANodes[APropdef] */;
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
self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val = var_n_doc; /* _n_doc on <self:AStdClassdef> */
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
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AStdClassdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 402);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdClassdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 403);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_classkind == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 404);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val = var_n_classkind; /* _n_classkind on <self:AStdClassdef> */
if (var_n_classkind == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 405);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_classkind,self) on <var_n_classkind:nullable AClasskind> */
if (unlikely(var_n_classkind == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_classkind->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_classkind:nullable AClasskind> */
RET_LABEL17:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val = var_n_id; /* _n_id on <self:AStdClassdef> */
var18 = NULL;
if (var_n_id == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_id,var18) on <var_n_id:nullable TClassid> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var_n_id->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_id, var_other) /* == on <var_n_id:nullable TClassid(TClassid)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid(TClassid)> */
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid(TClassid)> */
RET_LABEL25:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (self) on <self:AStdClassdef> */
var28 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var26, var_n_formaldefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var26:ANodes[AFormaldef]>*/
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStdClassdef> */
var29 = NULL;
if (var_n_annotations == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var29) on <var_n_annotations:nullable AAnnotations> */
var_other = var29;
{
var34 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var33 = var34;
}
var35 = !var33;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL36:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AStdClassdef> */
var37 = NULL;
if (var_n_extern_code_block == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_code_block,var37) on <var_n_extern_code_block:nullable AExternCodeBlock> */
var_other = var37;
{
var42 = ((short int (*)(val*, val*))(var_n_extern_code_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern_code_block, var_other) /* == on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
var41 = var42;
}
var43 = !var41;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_code_block,self) on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var_n_extern_code_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL44:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (self) on <self:AStdClassdef> */
var47 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 942);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var45, var_n_superclasses); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var45:ANodes[ASuperclass]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var50 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var48, var_n_propdefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var48:ANodes[APropdef]>*/
}
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 415);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val = var_n_kwend; /* _n_kwend on <self:AStdClassdef> */
if (var_n_kwend == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 416);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend> */
if (unlikely(var_n_kwend == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwend->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend> */
RET_LABEL51:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#init_astdclassdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AClasskind, nullable TClassid, Collection[Object], nullable AAnnotations, nullable AExternCodeBlock, Collection[Object], Collection[Object], nullable TKwend) */
void VIRTUAL_parser_prod__AStdClassdef__init_astdclassdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10) {
parser_prod__AStdClassdef__init_astdclassdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#replace_child for (self: AStdClassdef, ANode, nullable ANode) */
void parser_prod__AStdClassdef__replace_child(val* self, val* p0, val* p1) {
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
val* var19 /* : AVisibility */;
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
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : nullable TClassid */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : ANodes[AFormaldef] */;
val* var54 /* : ANodes[AFormaldef] */;
short int var55 /* : Bool */;
val* var56 /* : nullable AAnnotations */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
val* var67 /* : nullable AExternCodeBlock */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
val* var78 /* : ANodes[ASuperclass] */;
val* var80 /* : ANodes[ASuperclass] */;
short int var81 /* : Bool */;
val* var82 /* : ANodes[APropdef] */;
val* var84 /* : ANodes[APropdef] */;
short int var85 /* : Bool */;
val* var86 /* : TKwend */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val; /* _n_doc on <self:AStdClassdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 422);
show_backtrace(1);
}
{
parser_prod__AStdClassdef__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_doc= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 426);
show_backtrace(1);
}
{
parser_prod__AStdClassdef__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_kwredef= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 429);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:AVisibility> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:AVisibility> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 430);
show_backtrace(1);
}
{
parser_prod__AStdClassdef__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_visibility= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 433);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:AClasskind> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:AClasskind> */
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
/* <var_new_child:nullable ANode> isa AClasskind */
cltype38 = type_parser_nodes__AClasskind.color;
idtype39 = type_parser_nodes__AClasskind.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AClasskind", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 434);
show_backtrace(1);
}
{
parser_prod__AStdClassdef__n_classkind_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_classkind= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
if (var41 == NULL) {
var42 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:nullable TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:nullable TClassid(TClassid)> */
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
/* <var_new_child:nullable ANode> isa nullable TClassid */
cltype49 = type_nullable_parser_nodes__TClassid.color;
idtype50 = type_nullable_parser_nodes__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TClassid", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 438);
show_backtrace(1);
}
{
parser_prod__AStdClassdef__n_id_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_id= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (self) on <self:AStdClassdef> */
var54 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
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
var56 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdClassdef> */
if (var56 == NULL) {
var57 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var56,var_old_child) on <var56:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var56,var_other) on <var56:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype64 = type_nullable_parser_nodes__AAnnotations.color;
idtype65 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 443);
show_backtrace(1);
}
{
parser_prod__AStdClassdef__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_annotations= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
var67 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
if (var67 == NULL) {
var68 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var67,var_old_child) on <var67:nullable AExternCodeBlock> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var67,var_other) on <var67:nullable AExternCodeBlock(AExternCodeBlock)> */
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
/* <var_new_child:nullable ANode> isa nullable AExternCodeBlock */
cltype75 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype76 = type_nullable_parser_nodes__AExternCodeBlock.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExternCodeBlock", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 447);
show_backtrace(1);
}
{
parser_prod__AStdClassdef__n_extern_code_block_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_extern_code_block= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (self) on <self:AStdClassdef> */
var80 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 942);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = parser_nodes__ANodes__replace_child(var78, var_old_child, var_new_child);
}
if (var81){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var84 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = parser_nodes__ANodes__replace_child(var82, var_old_child, var_new_child);
}
if (var85){
goto RET_LABEL;
} else {
}
var86 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 452);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var86,var_old_child) on <var86:TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var86,var_other) on <var86:TKwend> */
var92 = var86 == var_other;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
if (var87){
/* <var_new_child:nullable ANode> isa TKwend */
cltype94 = type_parser_nodes__TKwend.color;
idtype95 = type_parser_nodes__TKwend.id;
if(var_new_child == NULL) {
var93 = 0;
} else {
if(cltype94 >= var_new_child->type->table_size) {
var93 = 0;
} else {
var93 = var_new_child->type->type_table[cltype94] == idtype95;
}
}
if (unlikely(!var93)) {
var_class_name96 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwend", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 453);
show_backtrace(1);
}
{
parser_prod__AStdClassdef__n_kwend_61d(self, var_new_child); /* Direct call parser_prod#AStdClassdef#n_kwend= on <self:AStdClassdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStdClassdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStdClassdef__replace_child(self, p0, p1); /* Direct call parser_prod#AStdClassdef#replace_child on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_doc= for (self: AStdClassdef, nullable ADoc) */
void parser_prod__AStdClassdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val = var_node; /* _n_doc on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AStdClassdef__n_doc_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_doc_61d(self, p0); /* Direct call parser_prod#AStdClassdef#n_doc= on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwredef= for (self: AStdClassdef, nullable TKwredef) */
void parser_prod__AStdClassdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AStdClassdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#AStdClassdef#n_kwredef= on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_visibility= for (self: AStdClassdef, AVisibility) */
void parser_prod__AStdClassdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val = var_node; /* _n_visibility on <self:AStdClassdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AVisibility> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__AStdClassdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_visibility_61d(self, p0); /* Direct call parser_prod#AStdClassdef#n_visibility= on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_classkind= for (self: AStdClassdef, AClasskind) */
void parser_prod__AStdClassdef__n_classkind_61d(val* self, val* p0) {
val* var_node /* var node: AClasskind */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val = var_node; /* _n_classkind on <self:AStdClassdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AClasskind> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AClasskind> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_classkind= for (self: Object, AClasskind) */
void VIRTUAL_parser_prod__AStdClassdef__n_classkind_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_classkind_61d(self, p0); /* Direct call parser_prod#AStdClassdef#n_classkind= on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_id= for (self: AStdClassdef, nullable TClassid) */
void parser_prod__AStdClassdef__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TClassid */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val = var_node; /* _n_id on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_id= for (self: Object, nullable TClassid) */
void VIRTUAL_parser_prod__AStdClassdef__n_id_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_id_61d(self, p0); /* Direct call parser_prod#AStdClassdef#n_id= on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_annotations= for (self: AStdClassdef, nullable AAnnotations) */
void parser_prod__AStdClassdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStdClassdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_annotations_61d(self, p0); /* Direct call parser_prod#AStdClassdef#n_annotations= on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_extern_code_block= for (self: AStdClassdef, nullable AExternCodeBlock) */
void parser_prod__AStdClassdef__n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AStdClassdef> */
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
/* method parser_prod#AStdClassdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AStdClassdef__n_extern_code_block_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_extern_code_block_61d(self, p0); /* Direct call parser_prod#AStdClassdef#n_extern_code_block= on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwend= for (self: AStdClassdef, TKwend) */
void parser_prod__AStdClassdef__n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val = var_node; /* _n_kwend on <self:AStdClassdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwend> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwend> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwend= for (self: Object, TKwend) */
void VIRTUAL_parser_prod__AStdClassdef__n_kwend_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_kwend_61d(self, p0); /* Direct call parser_prod#AStdClassdef#n_kwend= on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#visit_all for (self: AStdClassdef, Visitor) */
void parser_prod__AStdClassdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : AVisibility */;
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
var = self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val; /* _n_doc on <self:AStdClassdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 504);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classkind");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 505);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AStdClassdef#n_formaldefs (self) on <self:AStdClassdef> */
var7 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_formaldefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 940);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var5, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var5:ANodes[AFormaldef]>*/
}
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdClassdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes#AStdClassdef#n_superclasses (self) on <self:AStdClassdef> */
var12 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_superclasses");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 942);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var10, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var10:ANodes[ASuperclass]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var15 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var13, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var13:ANodes[APropdef]>*/
}
var16 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwend");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 512);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var16); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStdClassdef__visit_all(val* self, val* p0) {
parser_prod__AStdClassdef__visit_all(self, p0); /* Direct call parser_prod#AStdClassdef#visit_all on <self:Object(AStdClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#init_atopclassdef for (self: ATopClassdef, Collection[Object]) */
void parser_prod__ATopClassdef__init_atopclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_n_propdefs = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:ATopClassdef> */
var2 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_propdefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#init_atopclassdef for (self: Object, Collection[Object]) */
void VIRTUAL_parser_prod__ATopClassdef__init_atopclassdef(val* self, val* p0) {
parser_prod__ATopClassdef__init_atopclassdef(self, p0); /* Direct call parser_prod#ATopClassdef#init_atopclassdef on <self:Object(ATopClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#replace_child for (self: ATopClassdef, ANode, nullable ANode) */
void parser_prod__ATopClassdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:ATopClassdef> */
var2 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
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
/* method parser_prod#ATopClassdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ATopClassdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__ATopClassdef__replace_child(self, p0, p1); /* Direct call parser_prod#ATopClassdef#replace_child on <self:Object(ATopClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#visit_all for (self: ATopClassdef, Visitor) */
void parser_prod__ATopClassdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_v = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:ATopClassdef> */
var2 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ATopClassdef__visit_all(val* self, val* p0) {
parser_prod__ATopClassdef__visit_all(self, p0); /* Direct call parser_prod#ATopClassdef#visit_all on <self:Object(ATopClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#init_amainclassdef for (self: AMainClassdef, Collection[Object]) */
void parser_prod__AMainClassdef__init_amainclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_n_propdefs = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AMainClassdef> */
var2 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__unsafe_add_all(var, var_n_propdefs); /* Direct call parser_nodes#ANodes#unsafe_add_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#init_amainclassdef for (self: Object, Collection[Object]) */
void VIRTUAL_parser_prod__AMainClassdef__init_amainclassdef(val* self, val* p0) {
parser_prod__AMainClassdef__init_amainclassdef(self, p0); /* Direct call parser_prod#AMainClassdef#init_amainclassdef on <self:Object(AMainClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#replace_child for (self: AMainClassdef, ANode, nullable ANode) */
void parser_prod__AMainClassdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
short int var3 /* : Bool */;
var_old_child = p0;
var_new_child = p1;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AMainClassdef> */
var2 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
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
/* method parser_prod#AMainClassdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMainClassdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMainClassdef__replace_child(self, p0, p1); /* Direct call parser_prod#AMainClassdef#replace_child on <self:Object(AMainClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#visit_all for (self: AMainClassdef, Visitor) */
void parser_prod__AMainClassdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
var_v = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AMainClassdef> */
var2 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__ANodes__visit_all(var, var_v); /* Direct call parser_nodes#ANodes#visit_all on <var:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMainClassdef__visit_all(val* self, val* p0) {
parser_prod__AMainClassdef__visit_all(self, p0); /* Direct call parser_prod#AMainClassdef#visit_all on <self:Object(AMainClassdef)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#init_aconcreteclasskind for (self: AConcreteClasskind, nullable TKwclass) */
void parser_prod__AConcreteClasskind__init_aconcreteclasskind(val* self, val* p0) {
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
var_n_kwclass = p0;
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 560);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AConcreteClasskind> */
if (var_n_kwclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 561);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass> */
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwclass->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#init_aconcreteclasskind for (self: Object, nullable TKwclass) */
void VIRTUAL_parser_prod__AConcreteClasskind__init_aconcreteclasskind(val* self, val* p0) {
parser_prod__AConcreteClasskind__init_aconcreteclasskind(self, p0); /* Direct call parser_prod#AConcreteClasskind#init_aconcreteclasskind on <self:Object(AConcreteClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#replace_child for (self: AConcreteClasskind, ANode, nullable ANode) */
void parser_prod__AConcreteClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwclass */;
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
var = self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 566);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwclass> */
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
/* <var_new_child:nullable ANode> isa TKwclass */
cltype = type_parser_nodes__TKwclass.color;
idtype = type_parser_nodes__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwclass", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 567);
show_backtrace(1);
}
{
parser_prod__AConcreteClasskind__n_kwclass_61d(self, var_new_child); /* Direct call parser_prod#AConcreteClasskind#n_kwclass= on <self:AConcreteClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AConcreteClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AConcreteClasskind__replace_child(self, p0, p1); /* Direct call parser_prod#AConcreteClasskind#replace_child on <self:Object(AConcreteClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#n_kwclass= for (self: AConcreteClasskind, TKwclass) */
void parser_prod__AConcreteClasskind__n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AConcreteClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwclass> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwclass> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#n_kwclass= for (self: Object, TKwclass) */
void VIRTUAL_parser_prod__AConcreteClasskind__n_kwclass_61d(val* self, val* p0) {
parser_prod__AConcreteClasskind__n_kwclass_61d(self, p0); /* Direct call parser_prod#AConcreteClasskind#n_kwclass= on <self:Object(AConcreteClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#visit_all for (self: AConcreteClasskind, Visitor) */
void parser_prod__AConcreteClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 581);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AConcreteClasskind__visit_all(val* self, val* p0) {
parser_prod__AConcreteClasskind__visit_all(self, p0); /* Direct call parser_prod#AConcreteClasskind#visit_all on <self:Object(AConcreteClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#init_aabstractclasskind for (self: AAbstractClasskind, nullable TKwabstract, nullable TKwclass) */
void parser_prod__AAbstractClasskind__init_aabstractclasskind(val* self, val* p0, val* p1) {
val* var_n_kwabstract /* var n_kwabstract: nullable TKwabstract */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
var_n_kwabstract = p0;
var_n_kwclass = p1;
if (unlikely(var_n_kwabstract == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 590);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val = var_n_kwabstract; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var_n_kwabstract == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 591);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwabstract,self) on <var_n_kwabstract:nullable TKwabstract> */
if (unlikely(var_n_kwabstract == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwabstract->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwabstract:nullable TKwabstract> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 592);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AAbstractClasskind> */
if (var_n_kwclass == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 593);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass> */
if (unlikely(var_n_kwclass == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwclass->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#init_aabstractclasskind for (self: Object, nullable TKwabstract, nullable TKwclass) */
void VIRTUAL_parser_prod__AAbstractClasskind__init_aabstractclasskind(val* self, val* p0, val* p1) {
parser_prod__AAbstractClasskind__init_aabstractclasskind(self, p0, p1); /* Direct call parser_prod#AAbstractClasskind#init_aabstractclasskind on <self:Object(AAbstractClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#replace_child for (self: AAbstractClasskind, ANode, nullable ANode) */
void parser_prod__AAbstractClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabstract */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : TKwclass */;
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
var = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 598);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwabstract> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwabstract> */
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
/* <var_new_child:nullable ANode> isa TKwabstract */
cltype = type_parser_nodes__TKwabstract.color;
idtype = type_parser_nodes__TKwabstract.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwabstract", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 599);
show_backtrace(1);
}
{
parser_prod__AAbstractClasskind__n_kwabstract_61d(self, var_new_child); /* Direct call parser_prod#AAbstractClasskind#n_kwabstract= on <self:AAbstractClasskind>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 602);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:TKwclass> */
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
/* <var_new_child:nullable ANode> isa TKwclass */
cltype16 = type_parser_nodes__TKwclass.color;
idtype17 = type_parser_nodes__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwclass", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 603);
show_backtrace(1);
}
{
parser_prod__AAbstractClasskind__n_kwclass_61d(self, var_new_child); /* Direct call parser_prod#AAbstractClasskind#n_kwclass= on <self:AAbstractClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAbstractClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAbstractClasskind__replace_child(self, p0, p1); /* Direct call parser_prod#AAbstractClasskind#replace_child on <self:Object(AAbstractClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwabstract= for (self: AAbstractClasskind, TKwabstract) */
void parser_prod__AAbstractClasskind__n_kwabstract_61d(val* self, val* p0) {
val* var_node /* var node: TKwabstract */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val = var_node; /* _n_kwabstract on <self:AAbstractClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwabstract> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwabstract> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwabstract= for (self: Object, TKwabstract) */
void VIRTUAL_parser_prod__AAbstractClasskind__n_kwabstract_61d(val* self, val* p0) {
parser_prod__AAbstractClasskind__n_kwabstract_61d(self, p0); /* Direct call parser_prod#AAbstractClasskind#n_kwabstract= on <self:Object(AAbstractClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwclass= for (self: AAbstractClasskind, TKwclass) */
void parser_prod__AAbstractClasskind__n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AAbstractClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwclass> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwclass> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwclass= for (self: Object, TKwclass) */
void VIRTUAL_parser_prod__AAbstractClasskind__n_kwclass_61d(val* self, val* p0) {
parser_prod__AAbstractClasskind__n_kwclass_61d(self, p0); /* Direct call parser_prod#AAbstractClasskind#n_kwclass= on <self:Object(AAbstractClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#visit_all for (self: AAbstractClasskind, Visitor) */
void parser_prod__AAbstractClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabstract */;
val* var1 /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwabstract");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 622);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwclass");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 623);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAbstractClasskind__visit_all(val* self, val* p0) {
parser_prod__AAbstractClasskind__visit_all(self, p0); /* Direct call parser_prod#AAbstractClasskind#visit_all on <self:Object(AAbstractClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#init_ainterfaceclasskind for (self: AInterfaceClasskind, nullable TKwinterface) */
void parser_prod__AInterfaceClasskind__init_ainterfaceclasskind(val* self, val* p0) {
val* var_n_kwinterface /* var n_kwinterface: nullable TKwinterface */;
var_n_kwinterface = p0;
if (unlikely(var_n_kwinterface == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 631);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_n_kwinterface; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var_n_kwinterface == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 632);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwinterface,self) on <var_n_kwinterface:nullable TKwinterface> */
if (unlikely(var_n_kwinterface == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwinterface->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinterface:nullable TKwinterface> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#init_ainterfaceclasskind for (self: Object, nullable TKwinterface) */
void VIRTUAL_parser_prod__AInterfaceClasskind__init_ainterfaceclasskind(val* self, val* p0) {
parser_prod__AInterfaceClasskind__init_ainterfaceclasskind(self, p0); /* Direct call parser_prod#AInterfaceClasskind#init_ainterfaceclasskind on <self:Object(AInterfaceClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#replace_child for (self: AInterfaceClasskind, ANode, nullable ANode) */
void parser_prod__AInterfaceClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwinterface */;
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
var = self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 637);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwinterface> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwinterface> */
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
/* <var_new_child:nullable ANode> isa TKwinterface */
cltype = type_parser_nodes__TKwinterface.color;
idtype = type_parser_nodes__TKwinterface.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwinterface", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 638);
show_backtrace(1);
}
{
parser_prod__AInterfaceClasskind__n_kwinterface_61d(self, var_new_child); /* Direct call parser_prod#AInterfaceClasskind#n_kwinterface= on <self:AInterfaceClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInterfaceClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInterfaceClasskind__replace_child(self, p0, p1); /* Direct call parser_prod#AInterfaceClasskind#replace_child on <self:Object(AInterfaceClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#n_kwinterface= for (self: AInterfaceClasskind, TKwinterface) */
void parser_prod__AInterfaceClasskind__n_kwinterface_61d(val* self, val* p0) {
val* var_node /* var node: TKwinterface */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_node; /* _n_kwinterface on <self:AInterfaceClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwinterface> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwinterface> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#n_kwinterface= for (self: Object, TKwinterface) */
void VIRTUAL_parser_prod__AInterfaceClasskind__n_kwinterface_61d(val* self, val* p0) {
parser_prod__AInterfaceClasskind__n_kwinterface_61d(self, p0); /* Direct call parser_prod#AInterfaceClasskind#n_kwinterface= on <self:Object(AInterfaceClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#visit_all for (self: AInterfaceClasskind, Visitor) */
void parser_prod__AInterfaceClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwinterface */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinterface");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 652);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInterfaceClasskind__visit_all(val* self, val* p0) {
parser_prod__AInterfaceClasskind__visit_all(self, p0); /* Direct call parser_prod#AInterfaceClasskind#visit_all on <self:Object(AInterfaceClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#init_aenumclasskind for (self: AEnumClasskind, nullable TKwenum) */
void parser_prod__AEnumClasskind__init_aenumclasskind(val* self, val* p0) {
val* var_n_kwenum /* var n_kwenum: nullable TKwenum */;
var_n_kwenum = p0;
if (unlikely(var_n_kwenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 660);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val = var_n_kwenum; /* _n_kwenum on <self:AEnumClasskind> */
if (var_n_kwenum == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 661);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwenum,self) on <var_n_kwenum:nullable TKwenum> */
if (unlikely(var_n_kwenum == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwenum->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwenum:nullable TKwenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#init_aenumclasskind for (self: Object, nullable TKwenum) */
void VIRTUAL_parser_prod__AEnumClasskind__init_aenumclasskind(val* self, val* p0) {
parser_prod__AEnumClasskind__init_aenumclasskind(self, p0); /* Direct call parser_prod#AEnumClasskind#init_aenumclasskind on <self:Object(AEnumClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#replace_child for (self: AEnumClasskind, ANode, nullable ANode) */
void parser_prod__AEnumClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwenum */;
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
var = self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 666);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwenum> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwenum> */
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
/* <var_new_child:nullable ANode> isa TKwenum */
cltype = type_parser_nodes__TKwenum.color;
idtype = type_parser_nodes__TKwenum.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwenum", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 667);
show_backtrace(1);
}
{
parser_prod__AEnumClasskind__n_kwenum_61d(self, var_new_child); /* Direct call parser_prod#AEnumClasskind#n_kwenum= on <self:AEnumClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEnumClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEnumClasskind__replace_child(self, p0, p1); /* Direct call parser_prod#AEnumClasskind#replace_child on <self:Object(AEnumClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#n_kwenum= for (self: AEnumClasskind, TKwenum) */
void parser_prod__AEnumClasskind__n_kwenum_61d(val* self, val* p0) {
val* var_node /* var node: TKwenum */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val = var_node; /* _n_kwenum on <self:AEnumClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwenum> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwenum> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#n_kwenum= for (self: Object, TKwenum) */
void VIRTUAL_parser_prod__AEnumClasskind__n_kwenum_61d(val* self, val* p0) {
parser_prod__AEnumClasskind__n_kwenum_61d(self, p0); /* Direct call parser_prod#AEnumClasskind#n_kwenum= on <self:Object(AEnumClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#visit_all for (self: AEnumClasskind, Visitor) */
void parser_prod__AEnumClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwenum */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwenum");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 681);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEnumClasskind__visit_all(val* self, val* p0) {
parser_prod__AEnumClasskind__visit_all(self, p0); /* Direct call parser_prod#AEnumClasskind#visit_all on <self:Object(AEnumClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#init_aexternclasskind for (self: AExternClasskind, nullable TKwextern, nullable TKwclass) */
void parser_prod__AExternClasskind__init_aexternclasskind(val* self, val* p0, val* p1) {
val* var_n_kwextern /* var n_kwextern: nullable TKwextern */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_n_kwextern = p0;
var_n_kwclass = p1;
if (unlikely(var_n_kwextern == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 690);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val = var_n_kwextern; /* _n_kwextern on <self:AExternClasskind> */
if (var_n_kwextern == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 691);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwextern,self) on <var_n_kwextern:nullable TKwextern> */
if (unlikely(var_n_kwextern == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwextern->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwextern:nullable TKwextern> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AExternClasskind> */
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
var6 = ((short int (*)(val*, val*))(var_n_kwclass->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwclass, var_other) /* == on <var_n_kwclass:nullable TKwclass(TKwclass)>*/;
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
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwclass,self) on <var_n_kwclass:nullable TKwclass(TKwclass)> */
var_n_kwclass->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwclass:nullable TKwclass(TKwclass)> */
RET_LABEL8:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#init_aexternclasskind for (self: Object, nullable TKwextern, nullable TKwclass) */
void VIRTUAL_parser_prod__AExternClasskind__init_aexternclasskind(val* self, val* p0, val* p1) {
parser_prod__AExternClasskind__init_aexternclasskind(self, p0, p1); /* Direct call parser_prod#AExternClasskind#init_aexternclasskind on <self:Object(AExternClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#replace_child for (self: AExternClasskind, ANode, nullable ANode) */
void parser_prod__AExternClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwextern */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable TKwclass */;
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
var = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 698);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwextern> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwextern> */
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
/* <var_new_child:nullable ANode> isa TKwextern */
cltype = type_parser_nodes__TKwextern.color;
idtype = type_parser_nodes__TKwextern.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwextern", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 699);
show_backtrace(1);
}
{
parser_prod__AExternClasskind__n_kwextern_61d(self, var_new_child); /* Direct call parser_prod#AExternClasskind#n_kwextern= on <self:AExternClasskind>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable TKwclass> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable TKwclass(TKwclass)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwclass */
cltype16 = type_nullable_parser_nodes__TKwclass.color;
idtype17 = type_nullable_parser_nodes__TKwclass.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwclass", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 703);
show_backtrace(1);
}
{
parser_prod__AExternClasskind__n_kwclass_61d(self, var_new_child); /* Direct call parser_prod#AExternClasskind#n_kwclass= on <self:AExternClasskind>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternClasskind__replace_child(self, p0, p1); /* Direct call parser_prod#AExternClasskind#replace_child on <self:Object(AExternClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwextern= for (self: AExternClasskind, TKwextern) */
void parser_prod__AExternClasskind__n_kwextern_61d(val* self, val* p0) {
val* var_node /* var node: TKwextern */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val = var_node; /* _n_kwextern on <self:AExternClasskind> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwextern> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwextern> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwextern= for (self: Object, TKwextern) */
void VIRTUAL_parser_prod__AExternClasskind__n_kwextern_61d(val* self, val* p0) {
parser_prod__AExternClasskind__n_kwextern_61d(self, p0); /* Direct call parser_prod#AExternClasskind#n_kwextern= on <self:Object(AExternClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwclass= for (self: AExternClasskind, nullable TKwclass) */
void parser_prod__AExternClasskind__n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwclass */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AExternClasskind> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwclass(TKwclass)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwclass(TKwclass)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwclass(TKwclass)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwclass= for (self: Object, nullable TKwclass) */
void VIRTUAL_parser_prod__AExternClasskind__n_kwclass_61d(val* self, val* p0) {
parser_prod__AExternClasskind__n_kwclass_61d(self, p0); /* Direct call parser_prod#AExternClasskind#n_kwclass= on <self:Object(AExternClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#visit_all for (self: AExternClasskind, Visitor) */
void parser_prod__AExternClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwextern */;
val* var1 /* : nullable TKwclass */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwextern");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 722);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternClasskind__visit_all(val* self, val* p0) {
parser_prod__AExternClasskind__visit_all(self, p0); /* Direct call parser_prod#AExternClasskind#visit_all on <self:Object(AExternClasskind)>*/
RET_LABEL:;
}
/* method parser_prod#AFormaldef#init_aformaldef for (self: AFormaldef, nullable TClassid, nullable AType, nullable AAnnotations) */
void parser_prod__AFormaldef__init_aformaldef(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_n_id = p0;
var_n_type = p1;
var_n_annotations = p2;
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 733);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val = var_n_id; /* _n_id on <self:AFormaldef> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 734);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL1:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val = var_n_type; /* _n_type on <self:AFormaldef> */
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
var6 = ((short int (*)(val*, val*))(var_n_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_type, var_other) /* == on <var_n_type:nullable AType(AType)>*/;
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
{
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL8:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFormaldef> */
var9 = NULL;
if (var_n_annotations == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var9) on <var_n_annotations:nullable AAnnotations> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL16:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#init_aformaldef for (self: Object, nullable TClassid, nullable AType, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFormaldef__init_aformaldef(val* self, val* p0, val* p1, val* p2) {
parser_prod__AFormaldef__init_aformaldef(self, p0, p1, p2); /* Direct call parser_prod#AFormaldef#init_aformaldef on <self:Object(AFormaldef)>*/
RET_LABEL:;
}
/* method parser_prod#AFormaldef#replace_child for (self: AFormaldef, ANode, nullable ANode) */
void parser_prod__AFormaldef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TClassid */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var8 /* : nullable AType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var19 /* : nullable AAnnotations */;
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
var = self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 743);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TClassid> */
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
/* <var_new_child:nullable ANode> isa TClassid */
cltype = type_parser_nodes__TClassid.color;
idtype = type_parser_nodes__TClassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TClassid", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 744);
show_backtrace(1);
}
{
parser_prod__AFormaldef__n_id_61d(self, var_new_child); /* Direct call parser_prod#AFormaldef#n_id= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
if (var8 == NULL) {
var9 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var8,var_old_child) on <var8:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable AType(AType)> */
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
/* <var_new_child:nullable ANode> isa nullable AType */
cltype16 = type_nullable_parser_nodes__AType.color;
idtype17 = type_nullable_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 748);
show_backtrace(1);
}
{
parser_prod__AFormaldef__n_type_61d(self, var_new_child); /* Direct call parser_prod#AFormaldef#n_type= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype27 = type_nullable_parser_nodes__AAnnotations.color;
idtype28 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 752);
show_backtrace(1);
}
{
parser_prod__AFormaldef__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AFormaldef#n_annotations= on <self:AFormaldef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AFormaldef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AFormaldef__replace_child(self, p0, p1); /* Direct call parser_prod#AFormaldef#replace_child on <self:Object(AFormaldef)>*/
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_id= for (self: AFormaldef, TClassid) */
void parser_prod__AFormaldef__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val = var_node; /* _n_id on <self:AFormaldef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_prod__AFormaldef__n_id_61d(val* self, val* p0) {
parser_prod__AFormaldef__n_id_61d(self, p0); /* Direct call parser_prod#AFormaldef#n_id= on <self:Object(AFormaldef)>*/
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_type= for (self: AFormaldef, nullable AType) */
void parser_prod__AFormaldef__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val = var_node; /* _n_type on <self:AFormaldef> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AFormaldef__n_type_61d(val* self, val* p0) {
parser_prod__AFormaldef__n_type_61d(self, p0); /* Direct call parser_prod#AFormaldef#n_type= on <self:Object(AFormaldef)>*/
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_annotations= for (self: AFormaldef, nullable AAnnotations) */
void parser_prod__AFormaldef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFormaldef> */
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
/* method parser_prod#AFormaldef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFormaldef__n_annotations_61d(val* self, val* p0) {
parser_prod__AFormaldef__n_annotations_61d(self, p0); /* Direct call parser_prod#AFormaldef#n_annotations= on <self:Object(AFormaldef)>*/
RET_LABEL:;
}
/* method parser_prod#AFormaldef#visit_all for (self: AFormaldef, Visitor) */
void parser_prod__AFormaldef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TClassid */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 776);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AFormaldef__visit_all(val* self, val* p0) {
parser_prod__AFormaldef__visit_all(self, p0); /* Direct call parser_prod#AFormaldef#visit_all on <self:Object(AFormaldef)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperclass#init_asuperclass for (self: ASuperclass, nullable TKwsuper, nullable AType, nullable AAnnotations) */
void parser_prod__ASuperclass__init_asuperclass(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_n_kwsuper = p0;
var_n_type = p1;
var_n_annotations = p2;
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 788);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperclass> */
if (var_n_kwsuper == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 789);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwsuper->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL1:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 790);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val = var_n_type; /* _n_type on <self:ASuperclass> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 791);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_type->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperclass> */
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
var7 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#init_asuperclass for (self: Object, nullable TKwsuper, nullable AType, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASuperclass__init_asuperclass(val* self, val* p0, val* p1, val* p2) {
parser_prod__ASuperclass__init_asuperclass(self, p0, p1, p2); /* Direct call parser_prod#ASuperclass#init_asuperclass on <self:Object(ASuperclass)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperclass#replace_child for (self: ASuperclass, ANode, nullable ANode) */
void parser_prod__ASuperclass__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwsuper */;
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
val* var19 /* : nullable AAnnotations */;
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
var = self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val; /* _n_kwsuper on <self:ASuperclass> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 798);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var,var_old_child) on <var:TKwsuper> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:TKwsuper> */
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
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype = type_parser_nodes__TKwsuper.color;
idtype = type_parser_nodes__TKwsuper.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 799);
show_backtrace(1);
}
{
parser_prod__ASuperclass__n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod#ASuperclass#n_kwsuper= on <self:ASuperclass>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 802);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 803);
show_backtrace(1);
}
{
parser_prod__ASuperclass__n_type_61d(self, var_new_child); /* Direct call parser_prod#ASuperclass#n_type= on <self:ASuperclass>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperclass> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var19,var_old_child) on <var19:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other) on <var19:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype27 = type_nullable_parser_nodes__AAnnotations.color;
idtype28 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 807);
show_backtrace(1);
}
{
parser_prod__ASuperclass__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#ASuperclass#n_annotations= on <self:ASuperclass>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASuperclass__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASuperclass__replace_child(self, p0, p1); /* Direct call parser_prod#ASuperclass#replace_child on <self:Object(ASuperclass)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_kwsuper= for (self: ASuperclass, TKwsuper) */
void parser_prod__ASuperclass__n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperclass> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_prod__ASuperclass__n_kwsuper_61d(val* self, val* p0) {
parser_prod__ASuperclass__n_kwsuper_61d(self, p0); /* Direct call parser_prod#ASuperclass#n_kwsuper= on <self:Object(ASuperclass)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_type= for (self: ASuperclass, AType) */
void parser_prod__ASuperclass__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val = var_node; /* _n_type on <self:ASuperclass> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ASuperclass__n_type_61d(val* self, val* p0) {
parser_prod__ASuperclass__n_type_61d(self, p0); /* Direct call parser_prod#ASuperclass#n_type= on <self:Object(ASuperclass)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_annotations= for (self: ASuperclass, nullable AAnnotations) */
void parser_prod__ASuperclass__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperclass> */
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
/* method parser_prod#ASuperclass#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASuperclass__n_annotations_61d(val* self, val* p0) {
parser_prod__ASuperclass__n_annotations_61d(self, p0); /* Direct call parser_prod#ASuperclass#n_annotations= on <self:Object(ASuperclass)>*/
RET_LABEL:;
}
/* method parser_prod#ASuperclass#visit_all for (self: ASuperclass, Visitor) */
void parser_prod__ASuperclass__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
val* var1 /* : AType */;
val* var2 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val; /* _n_kwsuper on <self:ASuperclass> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 831);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 832);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperclass> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASuperclass__visit_all(val* self, val* p0) {
parser_prod__ASuperclass__visit_all(self, p0); /* Direct call parser_prod#ASuperclass#visit_all on <self:Object(ASuperclass)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#init_aattrpropdef for (self: AAttrPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwvar, nullable TId, nullable AType, nullable AExpr, nullable AAnnotations, nullable AExpr) */
void parser_prod__AAttrPropdef__init_aattrpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
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
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
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
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwvar = p3;
var_n_id2 = p4;
var_n_type = p5;
var_n_expr = p6;
var_n_annotations = p7;
var_n_block = p8;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AAttrPropdef> */
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
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAttrPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 853);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAttrPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 854);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 855);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AAttrPropdef> */
if (var_n_kwvar == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 856);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwvar,self) on <var_n_kwvar:nullable TKwvar> */
if (unlikely(var_n_kwvar == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwvar->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwvar:nullable TKwvar> */
RET_LABEL17:(void)0;
}
}
if (unlikely(var_n_id2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 857);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val = var_n_id2; /* _n_id2 on <self:AAttrPropdef> */
if (var_n_id2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 858);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id2,self) on <var_n_id2:nullable TId> */
if (unlikely(var_n_id2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_id2->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id2:nullable TId> */
RET_LABEL18:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val = var_n_type; /* _n_type on <self:AAttrPropdef> */
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
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrPropdef> */
var27 = NULL;
if (var_n_expr == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_expr,var27) on <var_n_expr:nullable AExpr> */
var_other = var27;
{
var32 = ((short int (*)(val*, val*))(var_n_expr->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_expr, var_other) /* == on <var_n_expr:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL34:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAttrPropdef> */
var35 = NULL;
if (var_n_annotations == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var35) on <var_n_annotations:nullable AAnnotations> */
var_other = var35;
{
var40 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL42:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val = var_n_block; /* _n_block on <self:AAttrPropdef> */
var43 = NULL;
if (var_n_block == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var43) on <var_n_block:nullable AExpr> */
var_other = var43;
{
var48 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL50:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#init_aattrpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwvar, nullable TId, nullable AType, nullable AExpr, nullable AAnnotations, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrPropdef__init_aattrpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
parser_prod__AAttrPropdef__init_aattrpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#replace_child for (self: AAttrPropdef, ANode, nullable ANode) */
void parser_prod__AAttrPropdef__replace_child(val* self, val* p0, val* p1) {
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
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : TId */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
val* var52 /* : nullable AType */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
val* var63 /* : nullable AExpr */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
val* var74 /* : nullable AAnnotations */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
val* var85 /* : nullable AExpr */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 872);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_doc= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 876);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_kwredef= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 880);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_visibility= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 883);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var30,var_old_child) on <var30:TKwvar> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var30,var_other) on <var30:TKwvar> */
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
/* <var_new_child:nullable ANode> isa TKwvar */
cltype38 = type_parser_nodes__TKwvar.color;
idtype39 = type_parser_nodes__TKwvar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwvar", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 884);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_kwvar_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_kwvar= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 887);
show_backtrace(1);
}
{
{ /* Inline kernel#Object#== (var41,var_old_child) on <var41:TId> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var41,var_other) on <var41:TId> */
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
/* <var_new_child:nullable ANode> isa TId */
cltype49 = type_parser_nodes__TId.color;
idtype50 = type_parser_nodes__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 888);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_id2_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_id2= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var52,var_old_child) on <var52:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var52,var_other) on <var52:nullable AType(AType)> */
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
/* <var_new_child:nullable ANode> isa nullable AType */
cltype60 = type_nullable_parser_nodes__AType.color;
idtype61 = type_nullable_parser_nodes__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 892);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_type_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_type= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
if (var63 == NULL) {
var64 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var63,var_old_child) on <var63:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype71 = type_nullable_parser_nodes__AExpr.color;
idtype72 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 896);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_expr_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_expr= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
if (var74 == NULL) {
var75 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var74,var_old_child) on <var74:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var74,var_other) on <var74:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype82 = type_nullable_parser_nodes__AAnnotations.color;
idtype83 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 900);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_annotations= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
var85 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
if (var85 == NULL) {
var86 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel#Object#== (var85,var_old_child) on <var85:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel#Object#is_same_instance (var85,var_other) on <var85:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype93 = type_nullable_parser_nodes__AExpr.color;
idtype94 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 904);
show_backtrace(1);
}
{
parser_prod__AAttrPropdef__n_block_61d(self, var_new_child); /* Direct call parser_prod#AAttrPropdef#n_block= on <self:AAttrPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAttrPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAttrPropdef__replace_child(self, p0, p1); /* Direct call parser_prod#AAttrPropdef#replace_child on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_doc= for (self: AAttrPropdef, nullable ADoc) */
void parser_prod__AAttrPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AAttrPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_doc_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_doc= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwredef= for (self: AAttrPropdef, nullable TKwredef) */
void parser_prod__AAttrPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AAttrPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_kwredef= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_visibility= for (self: AAttrPropdef, nullable AVisibility) */
void parser_prod__AAttrPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_node; /* _n_visibility on <self:AAttrPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 922);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AAttrPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_visibility_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_visibility= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwvar= for (self: AAttrPropdef, TKwvar) */
void parser_prod__AAttrPropdef__n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val = var_node; /* _n_kwvar on <self:AAttrPropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TKwvar> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwvar> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwvar= for (self: Object, TKwvar) */
void VIRTUAL_parser_prod__AAttrPropdef__n_kwvar_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_kwvar_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_kwvar= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_id2= for (self: AAttrPropdef, TId) */
void parser_prod__AAttrPropdef__n_id2_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val = var_node; /* _n_id2 on <self:AAttrPropdef> */
{
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_id2= for (self: Object, TId) */
void VIRTUAL_parser_prod__AAttrPropdef__n_id2_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_id2_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_id2= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_type= for (self: AAttrPropdef, nullable AType) */
void parser_prod__AAttrPropdef__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val = var_node; /* _n_type on <self:AAttrPropdef> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable AType(AType)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AType(AType)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AType(AType)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AAttrPropdef__n_type_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_type_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_type= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_expr= for (self: AAttrPropdef, nullable AExpr) */
void parser_prod__AAttrPropdef__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val = var_node; /* _n_expr on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrPropdef__n_expr_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_expr_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_expr= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_annotations= for (self: AAttrPropdef, nullable AAnnotations) */
void parser_prod__AAttrPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAttrPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_annotations_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_annotations= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_block= for (self: AAttrPropdef, nullable AExpr) */
void parser_prod__AAttrPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val = var_node; /* _n_block on <self:AAttrPropdef> */
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
/* method parser_prod#AAttrPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrPropdef__n_block_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_block_61d(self, p0); /* Direct call parser_prod#AAttrPropdef#n_block= on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#visit_all for (self: AAttrPropdef, Visitor) */
void parser_prod__AAttrPropdef__visit_all(val* self, val* p0) {
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
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var1); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var2); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwvar");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 961);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 962);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var5); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var6); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var7); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
{
parser_nodes__Visitor__enter_visit(var_v, var8); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAttrPropdef__visit_all(val* self, val* p0) {
parser_prod__AAttrPropdef__visit_all(self, p0); /* Direct call parser_prod#AAttrPropdef#visit_all on <self:Object(AAttrPropdef)>*/
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 988);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1026);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ATypePropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1027);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1028);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_kwtype].val = var_n_kwtype; /* _n_kwtype on <self:ATypePropdef> */
if (var_n_kwtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1029);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_kwtype,self) on <var_n_kwtype:nullable TKwtype> */
if (unlikely(var_n_kwtype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_kwtype->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwtype:nullable TKwtype> */
RET_LABEL17:(void)0;
}
}
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1030);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val = var_n_id; /* _n_id on <self:ATypePropdef> */
if (var_n_id == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1031);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_id,self) on <var_n_id:nullable TClassid> */
if (unlikely(var_n_id == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_id->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TClassid> */
RET_LABEL18:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1032);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val = var_n_type; /* _n_type on <self:ATypePropdef> */
if (var_n_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1033);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_type,self) on <var_n_type:nullable AType> */
if (unlikely(var_n_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1041);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1045);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1049);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1052);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1053);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1056);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1057);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1060);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1061);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1065);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1083);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1112);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var3); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1113);
show_backtrace(1);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1114);
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
/* method parser_prod#AMethPropdef#init_amethpropdef for (self: AMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable TKwinit, nullable TKwnew, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExternCalls, nullable AExternCodeBlock, nullable AExpr) */
void parser_prod__AMethPropdef__init_amethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11) {
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
short int var6 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var33 /* : null */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var50 /* : null */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var58 /* : null */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var66 /* : null */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var74 /* : null */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
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
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AMethPropdef> */
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
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1138);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AMethPropdef> */
if (var_n_visibility == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1139);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility> */
if (unlikely(var_n_visibility == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_visibility->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility> */
RET_LABEL16:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AMethPropdef> */
var17 = NULL;
if (var_n_kwmeth == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwmeth,var17) on <var_n_kwmeth:nullable TKwmeth> */
var_other = var17;
{
var22 = ((short int (*)(val*, val*))(var_n_kwmeth->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwmeth, var_other) /* == on <var_n_kwmeth:nullable TKwmeth(TKwmeth)>*/;
var21 = var22;
}
var23 = !var21;
var19 = var23;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwmeth,self) on <var_n_kwmeth:nullable TKwmeth(TKwmeth)> */
var_n_kwmeth->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwmeth:nullable TKwmeth(TKwmeth)> */
RET_LABEL24:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AMethPropdef> */
var25 = NULL;
if (var_n_kwinit == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,var25) on <var_n_kwinit:nullable TKwinit> */
var_other = var25;
{
var30 = ((short int (*)(val*, val*))(var_n_kwinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwinit, var_other) /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_n_kwinit,self) on <var_n_kwinit:nullable TKwinit(TKwinit)> */
var_n_kwinit->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwinit:nullable TKwinit(TKwinit)> */
RET_LABEL32:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val = var_n_kwnew; /* _n_kwnew on <self:AMethPropdef> */
var33 = NULL;
if (var_n_kwnew == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var33) on <var_n_kwnew:nullable TKwnew> */
var_other = var33;
{
var38 = ((short int (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
var37 = var38;
}
var39 = !var37;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_kwnew,self) on <var_n_kwnew:nullable TKwnew(TKwnew)> */
var_n_kwnew->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnew:nullable TKwnew(TKwnew)> */
RET_LABEL40:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AMethPropdef> */
var41 = NULL;
if (var_n_methid == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_methid,var41) on <var_n_methid:nullable AMethid> */
var_other = var41;
{
var46 = ((short int (*)(val*, val*))(var_n_methid->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_methid, var_other) /* == on <var_n_methid:nullable AMethid(AMethid)>*/;
var45 = var46;
}
var47 = !var45;
var43 = var47;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_methid,self) on <var_n_methid:nullable AMethid(AMethid)> */
var_n_methid->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_methid:nullable AMethid(AMethid)> */
RET_LABEL48:(void)0;
}
}
} else {
}
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1148);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AMethPropdef> */
if (var_n_signature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1149);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_n_signature,self) on <var_n_signature:nullable ASignature> */
if (unlikely(var_n_signature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_n_signature->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_signature:nullable ASignature> */
RET_LABEL49:(void)0;
}
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AMethPropdef> */
var50 = NULL;
if (var_n_annotations == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_annotations,var50) on <var_n_annotations:nullable AAnnotations> */
var_other = var50;
{
var55 = ((short int (*)(val*, val*))(var_n_annotations->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_annotations, var_other) /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
var54 = var55;
}
var56 = !var54;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL57:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AMethPropdef> */
var58 = NULL;
if (var_n_extern_calls == NULL) {
var59 = 0; /* is null */
} else {
var59 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_calls,var58) on <var_n_extern_calls:nullable AExternCalls> */
var_other = var58;
{
var63 = ((short int (*)(val*, val*))(var_n_extern_calls->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern_calls, var_other) /* == on <var_n_extern_calls:nullable AExternCalls(AExternCalls)>*/;
var62 = var63;
}
var64 = !var62;
var60 = var64;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_calls,self) on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
var_n_extern_calls->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_calls:nullable AExternCalls(AExternCalls)> */
RET_LABEL65:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AMethPropdef> */
var66 = NULL;
if (var_n_extern_code_block == NULL) {
var67 = 0; /* is null */
} else {
var67 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_extern_code_block,var66) on <var_n_extern_code_block:nullable AExternCodeBlock> */
var_other = var66;
{
var71 = ((short int (*)(val*, val*))(var_n_extern_code_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_extern_code_block, var_other) /* == on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
var70 = var71;
}
var72 = !var70;
var68 = var72;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
if (var67){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_extern_code_block,self) on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var_n_extern_code_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
RET_LABEL73:(void)0;
}
}
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AMethPropdef> */
var74 = NULL;
if (var_n_block == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var74) on <var_n_block:nullable AExpr> */
var_other = var74;
{
var79 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var78 = var79;
}
var80 = !var78;
var76 = var80;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
{
{ /* Inline parser_nodes#ANode#parent= (var_n_block,self) on <var_n_block:nullable AExpr(AExpr)> */
var_n_block->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_n_block:nullable AExpr(AExpr)> */
RET_LABEL81:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#init_amethpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable TKwinit, nullable TKwnew, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExternCalls, nullable AExternCodeBlock, nullable AExpr) */
void VIRTUAL_parser_prod__AMethPropdef__init_amethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10, val* p11) {
parser_prod__AMethPropdef__init_amethpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#replace_child for (self: AMethPropdef, ANode, nullable ANode) */
void parser_prod__AMethPropdef__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1163);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_doc_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_doc= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1167);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__APropdef__n_kwredef_61d]))(self, var_new_child) /* n_kwredef= on <self:AMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1171);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_visibility_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_visibility= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
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
cltype38 = type_nullable_parser_nodes__TKwmeth.color;
idtype39 = type_nullable_parser_nodes__TKwmeth.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1175);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_kwmeth_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_kwmeth= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var41 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
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
cltype49 = type_nullable_parser_nodes__TKwinit.color;
idtype50 = type_nullable_parser_nodes__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1179);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_kwinit_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_kwinit= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
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
cltype60 = type_nullable_parser_nodes__TKwnew.color;
idtype61 = type_nullable_parser_nodes__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1183);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_kwnew_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_kwnew= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var63 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
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
cltype71 = type_nullable_parser_nodes__AMethid.color;
idtype72 = type_nullable_parser_nodes__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1187);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_methid_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_methid= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var74 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
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
cltype82 = type_parser_nodes__ASignature.color;
idtype83 = type_parser_nodes__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1191);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_signature_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_signature= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var85 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AMethPropdef> */
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
cltype93 = type_nullable_parser_nodes__AAnnotations.color;
idtype94 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1195);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_annotations_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_annotations= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var96 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
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
cltype104 = type_nullable_parser_nodes__AExternCalls.color;
idtype105 = type_nullable_parser_nodes__AExternCalls.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1199);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_extern_calls_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_extern_calls= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var107 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
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
cltype115 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype116 = type_nullable_parser_nodes__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1203);
show_backtrace(1);
}
{
parser_prod__AMethPropdef__n_extern_code_block_61d(self, var_new_child); /* Direct call parser_prod#AMethPropdef#n_extern_code_block= on <self:AMethPropdef>*/
}
goto RET_LABEL;
} else {
}
var118 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
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
cltype126 = type_nullable_parser_nodes__AExpr.color;
idtype127 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1207);
show_backtrace(1);
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_block_61d]))(self, var_new_child) /* n_block= on <self:AMethPropdef>*/;
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMethPropdef__replace_child(self, p0, p1); /* Direct call parser_prod#AMethPropdef#replace_child on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_doc= for (self: AMethPropdef, nullable ADoc) */
void parser_prod__AMethPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AMethPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_doc_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_doc= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwredef= for (self: AMethPropdef, nullable TKwredef) */
void parser_prod__AMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_kwredef_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_kwredef= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_visibility= for (self: AMethPropdef, nullable AVisibility) */
void parser_prod__AMethPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val = var_node; /* _n_visibility on <self:AMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1225);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable AVisibility> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_visibility_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_visibility= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwmeth= for (self: AMethPropdef, nullable TKwmeth) */
void parser_prod__AMethPropdef__n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwmeth */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AMethPropdef> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwmeth(TKwmeth)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwmeth(TKwmeth)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwmeth(TKwmeth)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwmeth= for (self: Object, nullable TKwmeth) */
void VIRTUAL_parser_prod__AMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_kwmeth_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_kwmeth= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwinit= for (self: AMethPropdef, nullable TKwinit) */
void parser_prod__AMethPropdef__n_kwinit_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwinit */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val = var_node; /* _n_kwinit on <self:AMethPropdef> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwinit(TKwinit)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwinit(TKwinit)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwinit(TKwinit)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwinit= for (self: Object, nullable TKwinit) */
void VIRTUAL_parser_prod__AMethPropdef__n_kwinit_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_kwinit_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_kwinit= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwnew= for (self: AMethPropdef, nullable TKwnew) */
void parser_prod__AMethPropdef__n_kwnew_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnew */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val = var_node; /* _n_kwnew on <self:AMethPropdef> */
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
var5 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable TKwnew(TKwnew)>*/;
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
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable TKwnew(TKwnew)> */
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwnew(TKwnew)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwnew= for (self: Object, nullable TKwnew) */
void VIRTUAL_parser_prod__AMethPropdef__n_kwnew_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_kwnew_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_kwnew= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_methid= for (self: AMethPropdef, nullable AMethid) */
void parser_prod__AMethPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AMethPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_methid_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_methid= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_signature= for (self: AMethPropdef, nullable ASignature) */
void parser_prod__AMethPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AMethPropdef> */
if (var_node == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_prod.nit", 1250);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent= (var_node,self) on <var_node:nullable ASignature> */
if (unlikely(var_node == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var_node->attrs[COLOR_parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable ASignature> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AMethPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_signature_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_signature= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_annotations= for (self: AMethPropdef, nullable AAnnotations) */
void parser_prod__AMethPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AMethPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_annotations_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_annotations= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_extern_calls= for (self: AMethPropdef, nullable AExternCalls) */
void parser_prod__AMethPropdef__n_extern_calls_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCalls */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_calls].val = var_node; /* _n_extern_calls on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_extern_calls= for (self: Object, nullable AExternCalls) */
void VIRTUAL_parser_prod__AMethPropdef__n_extern_calls_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_extern_calls_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_extern_calls= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_extern_code_block= for (self: AMethPropdef, nullable AExternCodeBlock) */
void parser_prod__AMethPropdef__n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AMethPropdef__n_extern_code_block_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_extern_code_block_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_extern_code_block= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_block= for (self: AMethPropdef, nullable AExpr) */
void parser_prod__AMethPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val = var_node; /* _n_block on <self:AMethPropdef> */
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
/* method parser_prod#AMethPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AMethPropdef__n_block_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_block_61d(self, p0); /* Direct call parser_prod#AMethPropdef#n_block= on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
