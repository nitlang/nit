#include "nitc__parser_prod.sep.0.h"
/* method parser_prod$AMethPropdef$visit_all for (self: AMethPropdef, Visitor) */
void nitc__parser_prod___AMethPropdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
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
val* var11 /* : nullable TKwdo */;
val* var12 /* : nullable AExpr */;
val* var13 /* : nullable TKwend */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var6 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var8 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var10 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var10); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var11 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwdo].val; /* _n_kwdo on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var11); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var12 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var12); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var13 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwend].val; /* _n_kwend on <self:AMethPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var13); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ASuperPropdef$init_asuperpropdef for (self: ASuperPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwsuper, nullable AType, nullable AAnnotations) */
void nitc__parser_prod___ASuperPropdef___init_asuperpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
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
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ASuperPropdef> */
RET_LABEL1:(void)0;
}
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwsuper = p3;
var_n_type = p4;
var_n_annotations = p5;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:ASuperPropdef> */
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
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:ASuperPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1323);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ASuperPropdef> */
if (var_n_visibility == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1324);
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
if (unlikely(var_n_kwsuper == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1325);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperPropdef> */
if (var_n_kwsuper == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1326);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwsuper,self) on <var_n_kwsuper:nullable TKwsuper> */
if (unlikely(var_n_kwsuper == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwsuper->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwsuper:nullable TKwsuper> */
RET_LABEL14:(void)0;
}
}
if (unlikely(var_n_type == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1327);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val = var_n_type; /* _n_type on <self:ASuperPropdef> */
if (var_n_type == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1328);
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
RET_LABEL15:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperPropdef> */
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
/* method parser_prod$ASuperPropdef$replace_child for (self: ASuperPropdef, ANode, nullable ANode) */
void nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var30 /* : TKwsuper */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : AType */;
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
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ASuperPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1336);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod$ASuperPropdef$n_doc= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ASuperPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1340);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod$ASuperPropdef$n_kwredef= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ASuperPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1344);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$ASuperPropdef$n_visibility= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_kwsuper].val; /* _n_kwsuper on <self:ASuperPropdef> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1347);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var30,var_old_child) on <var30:TKwsuper> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var30,var_other) on <var30:TKwsuper> */
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
/* <var_new_child:nullable ANode> isa TKwsuper */
cltype37 = type_nitc__TKwsuper.color;
idtype38 = type_nitc__TKwsuper.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwsuper", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1348);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperPropdef___n_kwsuper_61d(self, var_new_child); /* Direct call parser_prod$ASuperPropdef$n_kwsuper= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <self:ASuperPropdef> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1351);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:AType> */
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
/* <var_new_child:nullable ANode> isa AType */
cltype47 = type_nitc__AType.color;
idtype48 = type_nitc__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AType", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1352);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperPropdef___n_type_61d(self, var_new_child); /* Direct call parser_prod$ASuperPropdef$n_type= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1356);
fatal_exit(1);
}
{
nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$ASuperPropdef$n_annotations= on <self:ASuperPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASuperPropdef$n_doc= for (self: ASuperPropdef, nullable ADoc) */
void nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:ASuperPropdef> */
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
/* method parser_prod$ASuperPropdef$n_kwredef= for (self: ASuperPropdef, nullable TKwredef) */
void nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:ASuperPropdef> */
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
/* method parser_prod$ASuperPropdef$n_visibility= for (self: ASuperPropdef, nullable AVisibility) */
void nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:ASuperPropdef> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1374);
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
/* method parser_prod$ASuperPropdef$n_kwsuper= for (self: ASuperPropdef, TKwsuper) */
void nitc__parser_prod___ASuperPropdef___n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperPropdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwsuper> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwsuper> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASuperPropdef$n_type= for (self: ASuperPropdef, AType) */
void nitc__parser_prod___ASuperPropdef___n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val = var_node; /* _n_type on <self:ASuperPropdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AType> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AType> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASuperPropdef$n_annotations= for (self: ASuperPropdef, nullable AAnnotations) */
void nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperPropdef> */
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
/* method parser_prod$ASuperPropdef$visit_all for (self: ASuperPropdef, Visitor) */
void nitc__parser_prod___ASuperPropdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : TKwsuper */;
val* var4 /* : AType */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:ASuperPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ASuperPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ASuperPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_kwsuper].val; /* _n_kwsuper on <self:ASuperPropdef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwsuper");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1398);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ASuperPropdef___n_type].val; /* _n_type on <self:ASuperPropdef> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1399);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAnnotPropdef$init_aannotpropdef for (self: AAnnotPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AAtid, nullable TOpar, Collection[Object], nullable TCpar, nullable AAnnotations) */
void nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_atid /* var n_atid: nullable AAtid */;
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_args /* var n_args: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
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
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var26 /* : ANodes[AExpr] */;
val* var28 /* : ANodes[AExpr] */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AAnnotPropdef> */
RET_LABEL1:(void)0;
}
}
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_atid = p3;
var_n_opar = p4;
var_n_args = p5;
var_n_cpar = p6;
var_n_annotations = p7;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_n_doc; /* _n_doc on <self:AAnnotPropdef> */
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
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAnnotPropdef> */
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
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAnnotPropdef> */
if (var_n_visibility == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_visibility,((val*)NULL)) on <var_n_visibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_n_visibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_visibility, var_other); /* == on <var_n_visibility:nullable AVisibility(AVisibility)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_visibility,self) on <var_n_visibility:nullable AVisibility(AVisibility)> */
var_n_visibility->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_visibility:nullable AVisibility(AVisibility)> */
RET_LABEL18:(void)0;
}
}
} else {
}
if (unlikely(var_n_atid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1421);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val = var_n_atid; /* _n_atid on <self:AAnnotPropdef> */
if (var_n_atid == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1422);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_atid,self) on <var_n_atid:nullable AAtid> */
if (unlikely(var_n_atid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_atid->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_atid:nullable AAtid> */
RET_LABEL19:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_opar].val = var_n_opar; /* _n_opar on <self:AAnnotPropdef> */
if (var_n_opar == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_opar, var_other); /* == on <var_n_opar:nullable TOpar(TOpar)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL25:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (self) on <self:AAnnotPropdef> */
var28 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotPropdef> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var26, var_n_args); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var26:ANodes[AExpr]>*/
}
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_cpar].val = var_n_cpar; /* _n_cpar on <self:AAnnotPropdef> */
if (var_n_cpar == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_n_cpar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_cpar, var_other); /* == on <var_n_cpar:nullable TCpar(TCpar)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL34:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAnnotPropdef> */
if (var_n_annotations == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL40:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotPropdef$replace_child for (self: AAnnotPropdef, ANode, nullable ANode) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : nullable TOpar */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
val* var51 /* : ANodes[AExpr] */;
val* var53 /* : ANodes[AExpr] */;
short int var54 /* : Bool */;
val* var55 /* : nullable TCpar */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
val* var66 /* : nullable AAnnotations */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1435);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__ADefinition__n_doc_61d(self, var_new_child); /* Direct call parser_prod$AAnnotPropdef$n_doc= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAnnotPropdef> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1439);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(self, var_new_child); /* Direct call parser_prod$AAnnotPropdef$n_kwredef= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAnnotPropdef> */
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
/* <var_new_child:nullable ANode> isa nullable AVisibility */
cltype27 = type_nullable__nitc__AVisibility.color;
idtype28 = type_nullable__nitc__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1443);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(self, var_new_child); /* Direct call parser_prod$AAnnotPropdef$n_visibility= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotPropdef> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1446);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var30,var_old_child) on <var30:AAtid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var30,var_other) on <var30:AAtid> */
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
/* <var_new_child:nullable ANode> isa AAtid */
cltype37 = type_nitc__AAtid.color;
idtype38 = type_nitc__AAtid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AAtid", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1447);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__AAnnotation__n_atid_61d(self, var_new_child); /* Direct call parser_prod$AAnnotPropdef$n_atid= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotPropdef> */
if (var40 == NULL) {
var41 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:nullable TOpar(TOpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TOpar */
cltype48 = type_nullable__nitc__TOpar.color;
idtype49 = type_nullable__nitc__TOpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TOpar", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1451);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__AAnnotation__n_opar_61d(self, var_new_child); /* Direct call parser_prod$AAnnotPropdef$n_opar= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (self) on <self:AAnnotPropdef> */
var53 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotPropdef> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = nitc___nitc__ANodes___replace_child(var51, var_old_child, var_new_child);
}
if (var54){
goto RET_LABEL;
} else {
}
var55 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotPropdef> */
if (var55 == NULL) {
var56 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var55,var_old_child) on <var55:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var55,var_other) on <var55:nullable TCpar(TCpar)> */
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
/* <var_new_child:nullable ANode> isa nullable TCpar */
cltype63 = type_nullable__nitc__TCpar.color;
idtype64 = type_nullable__nitc__TCpar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCpar", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1456);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__AAnnotation__n_cpar_61d(self, var_new_child); /* Direct call parser_prod$AAnnotPropdef$n_cpar= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
var66 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotPropdef> */
if (var66 == NULL) {
var67 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var66,var_old_child) on <var66:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var66,var_other) on <var66:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype74 = type_nullable__nitc__AAnnotations.color;
idtype75 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1460);
fatal_exit(1);
}
{
nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AAnnotPropdef$n_annotations= on <self:AAnnotPropdef>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotPropdef$n_doc= for (self: AAnnotPropdef, nullable ADoc) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__ADefinition__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val = var_node; /* _n_doc on <self:AAnnotPropdef> */
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
/* method parser_prod$AAnnotPropdef$n_kwredef= for (self: AAnnotPropdef, nullable TKwredef) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__ADefinition__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val = var_node; /* _n_kwredef on <self:AAnnotPropdef> */
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
/* method parser_prod$AAnnotPropdef$n_visibility= for (self: AAnnotPropdef, nullable AVisibility) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__ADefinition__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val = var_node; /* _n_visibility on <self:AAnnotPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AVisibility> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AVisibility(AVisibility)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AVisibility(AVisibility)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AVisibility(AVisibility)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotPropdef$n_atid= for (self: AAnnotPropdef, AAtid) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__AAnnotation__n_atid_61d(val* self, val* p0) {
val* var_node /* var node: AAtid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val = var_node; /* _n_atid on <self:AAnnotPropdef> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AAtid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AAtid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAnnotPropdef$n_opar= for (self: AAnnotPropdef, nullable TOpar) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__AAnnotation__n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_opar].val = var_node; /* _n_opar on <self:AAnnotPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TOpar> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotPropdef$n_cpar= for (self: AAnnotPropdef, nullable TCpar) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__AAnnotation__n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_cpar].val = var_node; /* _n_cpar on <self:AAnnotPropdef> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TCpar> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAnnotPropdef$n_annotations= for (self: AAnnotPropdef, nullable AAnnotations) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAnnotPropdef> */
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
/* method parser_prod$AAnnotPropdef$visit_all for (self: AAnnotPropdef, Visitor) */
void nitc__parser_prod___AAnnotPropdef___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : nullable TKwredef */;
val* var2 /* : nullable AVisibility */;
val* var3 /* : AAtid */;
val* var4 /* : nullable TOpar */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : nullable TCpar */;
val* var9 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AAnnotPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAnnotPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAnnotPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotPropdef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1507);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (self) on <self:AAnnotPropdef> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotPropdef> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var5, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var5:ANodes[AExpr]>*/
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var8); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var9 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAnnotPropdef> */
{
nitc___nitc__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AIdMethid$init_aidmethid for (self: AIdMethid, nullable TId) */
void nitc__parser_prod___AIdMethid___init_aidmethid(val* self, val* p0) {
val* var_n_id /* var n_id: nullable TId */;
{
{ /* Inline kernel$Object$init (self) on <self:AIdMethid> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1519);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val = var_n_id; /* _n_id on <self:AIdMethid> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1520);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIdMethid$replace_child for (self: AIdMethid, ANode, nullable ANode) */
void nitc__parser_prod___AIdMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1525);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TId> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1526);
fatal_exit(1);
}
{
nitc__parser_prod___AIdMethid___n_id_61d(self, var_new_child); /* Direct call parser_prod$AIdMethid$n_id= on <self:AIdMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AIdMethid$n_id= for (self: AIdMethid, TId) */
void nitc__parser_prod___AIdMethid___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val = var_node; /* _n_id on <self:AIdMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AIdMethid$visit_all for (self: AIdMethid, Visitor) */
void nitc__parser_prod___AIdMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val; /* _n_id on <self:AIdMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1540);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$APlusMethid$init_aplusmethid for (self: APlusMethid, nullable TPlus) */
void nitc__parser_prod___APlusMethid___init_aplusmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPlus */;
{
{ /* Inline kernel$Object$init (self) on <self:APlusMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1548);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:APlusMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1549);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TPlus> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPlus> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APlusMethid$replace_child for (self: APlusMethid, ANode, nullable ANode) */
void nitc__parser_prod___APlusMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APlusMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1554);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TPlus.color;
idtype = type_nitc__TPlus.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1555);
fatal_exit(1);
}
{
nitc__parser_prod___APlusMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$APlusMethid$n_op= on <self:APlusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$APlusMethid$n_op= for (self: APlusMethid, Token) */
void nitc__parser_prod___APlusMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:APlusMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APlusMethid$visit_all for (self: APlusMethid, Visitor) */
void nitc__parser_prod___APlusMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APlusMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1569);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AMinusMethid$init_aminusmethid for (self: AMinusMethid, nullable TMinus) */
void nitc__parser_prod___AMinusMethid___init_aminusmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TMinus */;
{
{ /* Inline kernel$Object$init (self) on <self:AMinusMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1577);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AMinusMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1578);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TMinus> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TMinus> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMinusMethid$replace_child for (self: AMinusMethid, ANode, nullable ANode) */
void nitc__parser_prod___AMinusMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1583);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TMinus.color;
idtype = type_nitc__TMinus.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1584);
fatal_exit(1);
}
{
nitc__parser_prod___AMinusMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AMinusMethid$n_op= on <self:AMinusMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AMinusMethid$n_op= for (self: AMinusMethid, Token) */
void nitc__parser_prod___AMinusMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AMinusMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AMinusMethid$visit_all for (self: AMinusMethid, Visitor) */
void nitc__parser_prod___AMinusMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AMinusMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1598);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStarMethid$init_astarmethid for (self: AStarMethid, nullable TStar) */
void nitc__parser_prod___AStarMethid___init_astarmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStar */;
{
{ /* Inline kernel$Object$init (self) on <self:AStarMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1606);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AStarMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1607);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TStar> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStar> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarMethid$replace_child for (self: AStarMethid, ANode, nullable ANode) */
void nitc__parser_prod___AStarMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1612);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TStar.color;
idtype = type_nitc__TStar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1613);
fatal_exit(1);
}
{
nitc__parser_prod___AStarMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AStarMethid$n_op= on <self:AStarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStarMethid$n_op= for (self: AStarMethid, Token) */
void nitc__parser_prod___AStarMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AStarMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarMethid$visit_all for (self: AStarMethid, Visitor) */
void nitc__parser_prod___AStarMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1627);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStarstarMethid$init_astarstarmethid for (self: AStarstarMethid, nullable TStarstar) */
void nitc__parser_prod___AStarstarMethid___init_astarstarmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStarstar */;
{
{ /* Inline kernel$Object$init (self) on <self:AStarstarMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1635);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AStarstarMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1636);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TStarstar> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStarstar> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarstarMethid$replace_child for (self: AStarstarMethid, ANode, nullable ANode) */
void nitc__parser_prod___AStarstarMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarstarMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1641);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TStarstar.color;
idtype = type_nitc__TStarstar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1642);
fatal_exit(1);
}
{
nitc__parser_prod___AStarstarMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AStarstarMethid$n_op= on <self:AStarstarMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStarstarMethid$n_op= for (self: AStarstarMethid, Token) */
void nitc__parser_prod___AStarstarMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AStarstarMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarstarMethid$visit_all for (self: AStarstarMethid, Visitor) */
void nitc__parser_prod___AStarstarMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarstarMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1656);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ASlashMethid$init_aslashmethid for (self: ASlashMethid, nullable TSlash) */
void nitc__parser_prod___ASlashMethid___init_aslashmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TSlash */;
{
{ /* Inline kernel$Object$init (self) on <self:ASlashMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1664);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ASlashMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1665);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TSlash> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TSlash> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASlashMethid$replace_child for (self: ASlashMethid, ANode, nullable ANode) */
void nitc__parser_prod___ASlashMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1670);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TSlash.color;
idtype = type_nitc__TSlash.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1671);
fatal_exit(1);
}
{
nitc__parser_prod___ASlashMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$ASlashMethid$n_op= on <self:ASlashMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASlashMethid$n_op= for (self: ASlashMethid, Token) */
void nitc__parser_prod___ASlashMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ASlashMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ASlashMethid$visit_all for (self: ASlashMethid, Visitor) */
void nitc__parser_prod___ASlashMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ASlashMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1685);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$APercentMethid$init_apercentmethid for (self: APercentMethid, nullable TPercent) */
void nitc__parser_prod___APercentMethid___init_apercentmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPercent */;
{
{ /* Inline kernel$Object$init (self) on <self:APercentMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1693);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:APercentMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1694);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TPercent> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPercent> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APercentMethid$replace_child for (self: APercentMethid, ANode, nullable ANode) */
void nitc__parser_prod___APercentMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APercentMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1699);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TPercent.color;
idtype = type_nitc__TPercent.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1700);
fatal_exit(1);
}
{
nitc__parser_prod___APercentMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$APercentMethid$n_op= on <self:APercentMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$APercentMethid$n_op= for (self: APercentMethid, Token) */
void nitc__parser_prod___APercentMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:APercentMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APercentMethid$visit_all for (self: APercentMethid, Visitor) */
void nitc__parser_prod___APercentMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APercentMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1714);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AEqMethid$init_aeqmethid for (self: AEqMethid, nullable TEq) */
void nitc__parser_prod___AEqMethid___init_aeqmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TEq */;
{
{ /* Inline kernel$Object$init (self) on <self:AEqMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1722);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AEqMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1723);
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
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEqMethid$replace_child for (self: AEqMethid, ANode, nullable ANode) */
void nitc__parser_prod___AEqMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AEqMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1728);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TEq.color;
idtype = type_nitc__TEq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1729);
fatal_exit(1);
}
{
nitc__parser_prod___AEqMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AEqMethid$n_op= on <self:AEqMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AEqMethid$n_op= for (self: AEqMethid, Token) */
void nitc__parser_prod___AEqMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AEqMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AEqMethid$visit_all for (self: AEqMethid, Visitor) */
void nitc__parser_prod___AEqMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AEqMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1743);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ANeMethid$init_anemethid for (self: ANeMethid, nullable TNe) */
void nitc__parser_prod___ANeMethid___init_anemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TNe */;
{
{ /* Inline kernel$Object$init (self) on <self:ANeMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1751);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ANeMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1752);
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
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANeMethid$replace_child for (self: ANeMethid, ANode, nullable ANode) */
void nitc__parser_prod___ANeMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ANeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1757);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TNe.color;
idtype = type_nitc__TNe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1758);
fatal_exit(1);
}
{
nitc__parser_prod___ANeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$ANeMethid$n_op= on <self:ANeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ANeMethid$n_op= for (self: ANeMethid, Token) */
void nitc__parser_prod___ANeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ANeMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ANeMethid$visit_all for (self: ANeMethid, Visitor) */
void nitc__parser_prod___ANeMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ANeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1772);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALeMethid$init_alemethid for (self: ALeMethid, nullable TLe) */
void nitc__parser_prod___ALeMethid___init_alemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLe */;
{
{ /* Inline kernel$Object$init (self) on <self:ALeMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1780);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ALeMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1781);
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
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALeMethid$replace_child for (self: ALeMethid, ANode, nullable ANode) */
void nitc__parser_prod___ALeMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1786);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TLe.color;
idtype = type_nitc__TLe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1787);
fatal_exit(1);
}
{
nitc__parser_prod___ALeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$ALeMethid$n_op= on <self:ALeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALeMethid$n_op= for (self: ALeMethid, Token) */
void nitc__parser_prod___ALeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ALeMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALeMethid$visit_all for (self: ALeMethid, Visitor) */
void nitc__parser_prod___ALeMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1801);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AGeMethid$init_agemethid for (self: AGeMethid, nullable TGe) */
void nitc__parser_prod___AGeMethid___init_agemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGe */;
{
{ /* Inline kernel$Object$init (self) on <self:AGeMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1809);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AGeMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1810);
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
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGeMethid$replace_child for (self: AGeMethid, ANode, nullable ANode) */
void nitc__parser_prod___AGeMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1815);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TGe.color;
idtype = type_nitc__TGe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1816);
fatal_exit(1);
}
{
nitc__parser_prod___AGeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AGeMethid$n_op= on <self:AGeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AGeMethid$n_op= for (self: AGeMethid, Token) */
void nitc__parser_prod___AGeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AGeMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGeMethid$visit_all for (self: AGeMethid, Visitor) */
void nitc__parser_prod___AGeMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1830);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALtMethid$init_altmethid for (self: ALtMethid, nullable TLt) */
void nitc__parser_prod___ALtMethid___init_altmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLt */;
{
{ /* Inline kernel$Object$init (self) on <self:ALtMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1838);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ALtMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1839);
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
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALtMethid$replace_child for (self: ALtMethid, ANode, nullable ANode) */
void nitc__parser_prod___ALtMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALtMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1844);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TLt.color;
idtype = type_nitc__TLt.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1845);
fatal_exit(1);
}
{
nitc__parser_prod___ALtMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$ALtMethid$n_op= on <self:ALtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALtMethid$n_op= for (self: ALtMethid, Token) */
void nitc__parser_prod___ALtMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ALtMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALtMethid$visit_all for (self: ALtMethid, Visitor) */
void nitc__parser_prod___ALtMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALtMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1859);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AGtMethid$init_agtmethid for (self: AGtMethid, nullable TGt) */
void nitc__parser_prod___AGtMethid___init_agtmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGt */;
{
{ /* Inline kernel$Object$init (self) on <self:AGtMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1867);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AGtMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1868);
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
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGtMethid$replace_child for (self: AGtMethid, ANode, nullable ANode) */
void nitc__parser_prod___AGtMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGtMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1873);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TGt.color;
idtype = type_nitc__TGt.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1874);
fatal_exit(1);
}
{
nitc__parser_prod___AGtMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AGtMethid$n_op= on <self:AGtMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AGtMethid$n_op= for (self: AGtMethid, Token) */
void nitc__parser_prod___AGtMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AGtMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGtMethid$visit_all for (self: AGtMethid, Visitor) */
void nitc__parser_prod___AGtMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGtMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1888);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALlMethid$init_allmethid for (self: ALlMethid, nullable TLl) */
void nitc__parser_prod___ALlMethid___init_allmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TLl */;
{
{ /* Inline kernel$Object$init (self) on <self:ALlMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1896);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ALlMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1897);
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
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALlMethid$replace_child for (self: ALlMethid, ANode, nullable ANode) */
void nitc__parser_prod___ALlMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALlMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1902);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TLl.color;
idtype = type_nitc__TLl.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1903);
fatal_exit(1);
}
{
nitc__parser_prod___ALlMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$ALlMethid$n_op= on <self:ALlMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALlMethid$n_op= for (self: ALlMethid, Token) */
void nitc__parser_prod___ALlMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ALlMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALlMethid$visit_all for (self: ALlMethid, Visitor) */
void nitc__parser_prod___ALlMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ALlMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1917);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AGgMethid$init_aggmethid for (self: AGgMethid, nullable TGg) */
void nitc__parser_prod___AGgMethid___init_aggmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TGg */;
{
{ /* Inline kernel$Object$init (self) on <self:AGgMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1925);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AGgMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1926);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TGg> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TGg> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGgMethid$replace_child for (self: AGgMethid, ANode, nullable ANode) */
void nitc__parser_prod___AGgMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGgMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1931);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TGg.color;
idtype = type_nitc__TGg.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1932);
fatal_exit(1);
}
{
nitc__parser_prod___AGgMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AGgMethid$n_op= on <self:AGgMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AGgMethid$n_op= for (self: AGgMethid, Token) */
void nitc__parser_prod___AGgMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AGgMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AGgMethid$visit_all for (self: AGgMethid, Visitor) */
void nitc__parser_prod___AGgMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AGgMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1946);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AStarshipMethid$init_astarshipmethid for (self: AStarshipMethid, nullable TStarship) */
void nitc__parser_prod___AStarshipMethid___init_astarshipmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TStarship */;
{
{ /* Inline kernel$Object$init (self) on <self:AStarshipMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1954);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AStarshipMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1955);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TStarship> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TStarship> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarshipMethid$replace_child for (self: AStarshipMethid, ANode, nullable ANode) */
void nitc__parser_prod___AStarshipMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1960);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
cltype = type_nitc__TStarship.color;
idtype = type_nitc__TStarship.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1961);
fatal_exit(1);
}
{
nitc__parser_prod___AStarshipMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AStarshipMethid$n_op= on <self:AStarshipMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AStarshipMethid$n_op= for (self: AStarshipMethid, Token) */
void nitc__parser_prod___AStarshipMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AStarshipMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AStarshipMethid$visit_all for (self: AStarshipMethid, Visitor) */
void nitc__parser_prod___AStarshipMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AStarshipMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1975);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$APipeMethid$init_apipemethid for (self: APipeMethid, nullable TPipe) */
void nitc__parser_prod___APipeMethid___init_apipemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TPipe */;
{
{ /* Inline kernel$Object$init (self) on <self:APipeMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1983);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:APipeMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1984);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TPipe> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TPipe> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APipeMethid$replace_child for (self: APipeMethid, ANode, nullable ANode) */
void nitc__parser_prod___APipeMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APipeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1989);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TPipe */
cltype = type_nitc__TPipe.color;
idtype = type_nitc__TPipe.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TPipe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 1990);
fatal_exit(1);
}
{
nitc__parser_prod___APipeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$APipeMethid$n_op= on <self:APipeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$APipeMethid$n_op= for (self: APipeMethid, Token) */
void nitc__parser_prod___APipeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:APipeMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$APipeMethid$visit_all for (self: APipeMethid, Visitor) */
void nitc__parser_prod___APipeMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:APipeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2004);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ACaretMethid$init_acaretmethid for (self: ACaretMethid, nullable TCaret) */
void nitc__parser_prod___ACaretMethid___init_acaretmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TCaret */;
{
{ /* Inline kernel$Object$init (self) on <self:ACaretMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2012);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ACaretMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2013);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TCaret> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TCaret> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACaretMethid$replace_child for (self: ACaretMethid, ANode, nullable ANode) */
void nitc__parser_prod___ACaretMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ACaretMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2018);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TCaret */
cltype = type_nitc__TCaret.color;
idtype = type_nitc__TCaret.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TCaret", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2019);
fatal_exit(1);
}
{
nitc__parser_prod___ACaretMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$ACaretMethid$n_op= on <self:ACaretMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ACaretMethid$n_op= for (self: ACaretMethid, Token) */
void nitc__parser_prod___ACaretMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ACaretMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ACaretMethid$visit_all for (self: ACaretMethid, Visitor) */
void nitc__parser_prod___ACaretMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ACaretMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2033);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAmpMethid$init_aampmethid for (self: AAmpMethid, nullable TAmp) */
void nitc__parser_prod___AAmpMethid___init_aampmethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TAmp */;
{
{ /* Inline kernel$Object$init (self) on <self:AAmpMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2041);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:AAmpMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2042);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TAmp> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TAmp> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAmpMethid$replace_child for (self: AAmpMethid, ANode, nullable ANode) */
void nitc__parser_prod___AAmpMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AAmpMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2047);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TAmp */
cltype = type_nitc__TAmp.color;
idtype = type_nitc__TAmp.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TAmp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2048);
fatal_exit(1);
}
{
nitc__parser_prod___AAmpMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$AAmpMethid$n_op= on <self:AAmpMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAmpMethid$n_op= for (self: AAmpMethid, Token) */
void nitc__parser_prod___AAmpMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:AAmpMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAmpMethid$visit_all for (self: AAmpMethid, Visitor) */
void nitc__parser_prod___AAmpMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:AAmpMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2062);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ATildeMethid$init_atildemethid for (self: ATildeMethid, nullable TTilde) */
void nitc__parser_prod___ATildeMethid___init_atildemethid(val* self, val* p0) {
val* var_n_op /* var n_op: nullable TTilde */;
{
{ /* Inline kernel$Object$init (self) on <self:ATildeMethid> */
RET_LABEL1:(void)0;
}
}
var_n_op = p0;
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2070);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_n_op; /* _n_op on <self:ATildeMethid> */
if (var_n_op == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2071);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_op,self) on <var_n_op:nullable TTilde> */
if (unlikely(var_n_op == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_op->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_op:nullable TTilde> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATildeMethid$replace_child for (self: ATildeMethid, ANode, nullable ANode) */
void nitc__parser_prod___ATildeMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ATildeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2076);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:Token> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:Token> */
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
/* <var_new_child:nullable ANode> isa TTilde */
cltype = type_nitc__TTilde.color;
idtype = type_nitc__TTilde.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TTilde", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2077);
fatal_exit(1);
}
{
nitc__parser_prod___ATildeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(self, var_new_child); /* Direct call parser_prod$ATildeMethid$n_op= on <self:ATildeMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ATildeMethid$n_op= for (self: ATildeMethid, Token) */
void nitc__parser_prod___ATildeMethid___nitc__parser_nodes__AOperatorMethid__n_op_61d(val* self, val* p0) {
val* var_node /* var node: Token */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val = var_node; /* _n_op on <self:ATildeMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:Token> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:Token> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ATildeMethid$visit_all for (self: ATildeMethid, Visitor) */
void nitc__parser_prod___ATildeMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : Token */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AOperatorMethid___n_op].val; /* _n_op on <self:ATildeMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2091);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ABraMethid$init_abramethid for (self: ABraMethid, nullable TObra, nullable TCbra) */
void nitc__parser_prod___ABraMethid___init_abramethid(val* self, val* p0, val* p1) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
{
{ /* Inline kernel$Object$init (self) on <self:ABraMethid> */
RET_LABEL1:(void)0;
}
}
var_n_obra = p0;
var_n_cbra = p1;
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2100);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraMethid> */
if (var_n_obra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2101);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_obra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2102);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraMethid> */
if (var_n_cbra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2103);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraMethid$replace_child for (self: ABraMethid, ANode, nullable ANode) */
void nitc__parser_prod___ABraMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2108);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TObra> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2109);
fatal_exit(1);
}
{
nitc__parser_prod___ABraMethid___n_obra_61d(self, var_new_child); /* Direct call parser_prod$ABraMethid$n_obra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2112);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TCbra> */
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
cltype14 = type_nitc__TCbra.color;
idtype15 = type_nitc__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2113);
fatal_exit(1);
}
{
nitc__parser_prod___ABraMethid___n_cbra_61d(self, var_new_child); /* Direct call parser_prod$ABraMethid$n_cbra= on <self:ABraMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABraMethid$n_obra= for (self: ABraMethid, TObra) */
void nitc__parser_prod___ABraMethid___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraMethid___n_obra].val = var_node; /* _n_obra on <self:ABraMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraMethid$n_cbra= for (self: ABraMethid, TCbra) */
void nitc__parser_prod___ABraMethid___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraMethid$visit_all for (self: ABraMethid, Visitor) */
void nitc__parser_prod___ABraMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABraMethid___n_obra].val; /* _n_obra on <self:ABraMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2132);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABraMethid___n_cbra].val; /* _n_cbra on <self:ABraMethid> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2133);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AAssignMethid$init_aassignmethid for (self: AAssignMethid, nullable TId, nullable TAssign) */
void nitc__parser_prod___AAssignMethid___init_aassignmethid(val* self, val* p0, val* p1) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_assign /* var n_assign: nullable TAssign */;
{
{ /* Inline kernel$Object$init (self) on <self:AAssignMethid> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_assign = p1;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2142);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignMethid___n_id].val = var_n_id; /* _n_id on <self:AAssignMethid> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2143);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2144);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AAssignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:AAssignMethid> */
if (var_n_assign == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2145);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAssignMethid$replace_child for (self: AAssignMethid, ANode, nullable ANode) */
void nitc__parser_prod___AAssignMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2150);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TId> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2151);
fatal_exit(1);
}
{
nitc__parser_prod___AAssignMethid___n_id_61d(self, var_new_child); /* Direct call parser_prod$AAssignMethid$n_id= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2154);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TAssign> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2155);
fatal_exit(1);
}
{
nitc__parser_prod___AAssignMethid___n_assign_61d(self, var_new_child); /* Direct call parser_prod$AAssignMethid$n_assign= on <self:AAssignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AAssignMethid$n_id= for (self: AAssignMethid, TId) */
void nitc__parser_prod___AAssignMethid___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignMethid___n_id].val = var_node; /* _n_id on <self:AAssignMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAssignMethid$n_assign= for (self: AAssignMethid, TAssign) */
void nitc__parser_prod___AAssignMethid___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AAssignMethid___n_assign].val = var_node; /* _n_assign on <self:AAssignMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AAssignMethid$visit_all for (self: AAssignMethid, Visitor) */
void nitc__parser_prod___AAssignMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AAssignMethid___n_id].val; /* _n_id on <self:AAssignMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2174);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AAssignMethid___n_assign].val; /* _n_assign on <self:AAssignMethid> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2175);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ABraassignMethid$init_abraassignmethid for (self: ABraassignMethid, nullable TObra, nullable TCbra, nullable TAssign) */
void nitc__parser_prod___ABraassignMethid___init_abraassignmethid(val* self, val* p0, val* p1, val* p2) {
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_assign /* var n_assign: nullable TAssign */;
{
{ /* Inline kernel$Object$init (self) on <self:ABraassignMethid> */
RET_LABEL1:(void)0;
}
}
var_n_obra = p0;
var_n_cbra = p1;
var_n_assign = p2;
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2185);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_obra].val = var_n_obra; /* _n_obra on <self:ABraassignMethid> */
if (var_n_obra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2186);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_obra,self) on <var_n_obra:nullable TObra> */
if (unlikely(var_n_obra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_obra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2187);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_cbra].val = var_n_cbra; /* _n_cbra on <self:ABraassignMethid> */
if (var_n_cbra == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2188);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra> */
if (unlikely(var_n_cbra == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_cbra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra> */
RET_LABEL3:(void)0;
}
}
if (unlikely(var_n_assign == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2189);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_assign].val = var_n_assign; /* _n_assign on <self:ABraassignMethid> */
if (var_n_assign == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2190);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_assign,self) on <var_n_assign:nullable TAssign> */
if (unlikely(var_n_assign == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_assign->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraassignMethid$replace_child for (self: ABraassignMethid, ANode, nullable ANode) */
void nitc__parser_prod___ABraassignMethid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2195);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TObra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TObra> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2196);
fatal_exit(1);
}
{
nitc__parser_prod___ABraassignMethid___n_obra_61d(self, var_new_child); /* Direct call parser_prod$ABraassignMethid$n_obra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2199);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:TCbra> */
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
cltype14 = type_nitc__TCbra.color;
idtype15 = type_nitc__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2200);
fatal_exit(1);
}
{
nitc__parser_prod___ABraassignMethid___n_cbra_61d(self, var_new_child); /* Direct call parser_prod$ABraassignMethid$n_cbra= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2203);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var17,var_old_child) on <var17:TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:TAssign> */
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
cltype24 = type_nitc__TAssign.color;
idtype25 = type_nitc__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2204);
fatal_exit(1);
}
{
nitc__parser_prod___ABraassignMethid___n_assign_61d(self, var_new_child); /* Direct call parser_prod$ABraassignMethid$n_assign= on <self:ABraassignMethid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABraassignMethid$n_obra= for (self: ABraassignMethid, TObra) */
void nitc__parser_prod___ABraassignMethid___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: TObra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_obra].val = var_node; /* _n_obra on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TObra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TObra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraassignMethid$n_cbra= for (self: ABraassignMethid, TCbra) */
void nitc__parser_prod___ABraassignMethid___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: TCbra */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_cbra].val = var_node; /* _n_cbra on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TCbra> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TCbra> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraassignMethid$n_assign= for (self: ABraassignMethid, TAssign) */
void nitc__parser_prod___ABraassignMethid___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: TAssign */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_assign].val = var_node; /* _n_assign on <self:ABraassignMethid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TAssign> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TAssign> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABraassignMethid$visit_all for (self: ABraassignMethid, Visitor) */
void nitc__parser_prod___ABraassignMethid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TObra */;
val* var1 /* : TCbra */;
val* var2 /* : TAssign */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_obra].val; /* _n_obra on <self:ABraassignMethid> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_obra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2228);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_cbra].val; /* _n_cbra on <self:ABraassignMethid> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_cbra");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2229);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__ABraassignMethid___n_assign].val; /* _n_assign on <self:ABraassignMethid> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2230);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AQid$init_aqid for (self: AQid, nullable AQualified, nullable TId) */
void nitc__parser_prod___AQid___init_aqid(val* self, val* p0, val* p1) {
val* var_n_qualified /* var n_qualified: nullable AQualified */;
val* var_n_id /* var n_id: nullable TId */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AQid> */
RET_LABEL1:(void)0;
}
}
var_n_qualified = p0;
var_n_id = p1;
self->attrs[COLOR_nitc__parser_nodes__AQid___n_qualified].val = var_n_qualified; /* _n_qualified on <self:AQid> */
if (var_n_qualified == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_qualified,((val*)NULL)) on <var_n_qualified:nullable AQualified> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_qualified->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_qualified, var_other); /* == on <var_n_qualified:nullable AQualified(AQualified)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_qualified,self) on <var_n_qualified:nullable AQualified(AQualified)> */
var_n_qualified->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_qualified:nullable AQualified(AQualified)> */
RET_LABEL6:(void)0;
}
}
} else {
}
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2241);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val = var_n_id; /* _n_id on <self:AQid> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2242);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AQid$replace_child for (self: AQid, ANode, nullable ANode) */
void nitc__parser_prod___AQid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TId */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AQid___n_qualified].val; /* _n_qualified on <self:AQid> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable AQualified> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable AQualified(AQualified)> */
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
cltype = type_nullable__nitc__AQualified.color;
idtype = type_nullable__nitc__AQualified.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2248);
fatal_exit(1);
}
{
nitc__parser_prod___AQid___n_qualified_61d(self, var_new_child); /* Direct call parser_prod$AQid$n_qualified= on <self:AQid>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <self:AQid> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2251);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:TId> */
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
/* <var_new_child:nullable ANode> isa TId */
cltype15 = type_nitc__TId.color;
idtype16 = type_nitc__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2252);
fatal_exit(1);
}
{
nitc__parser_prod___AQid___n_id_61d(self, var_new_child); /* Direct call parser_prod$AQid$n_id= on <self:AQid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AQid$n_qualified= for (self: AQid, nullable AQualified) */
void nitc__parser_prod___AQid___n_qualified_61d(val* self, val* p0) {
val* var_node /* var node: nullable AQualified */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AQid___n_qualified].val = var_node; /* _n_qualified on <self:AQid> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AQualified> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AQualified(AQualified)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AQualified(AQualified)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AQualified(AQualified)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AQid$n_id= for (self: AQid, TId) */
void nitc__parser_prod___AQid___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val = var_node; /* _n_id on <self:AQid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AQid$visit_all for (self: AQid, Visitor) */
void nitc__parser_prod___AQid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AQualified */;
val* var1 /* : TId */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AQid___n_qualified].val; /* _n_qualified on <self:AQid> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <self:AQid> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2272);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AQclassid$init_aqclassid for (self: AQclassid, nullable AQualified, nullable TClassid) */
void nitc__parser_prod___AQclassid___init_aqclassid(val* self, val* p0, val* p1) {
val* var_n_qualified /* var n_qualified: nullable AQualified */;
val* var_n_id /* var n_id: nullable TClassid */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AQclassid> */
RET_LABEL1:(void)0;
}
}
var_n_qualified = p0;
var_n_id = p1;
self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val = var_n_qualified; /* _n_qualified on <self:AQclassid> */
if (var_n_qualified == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_qualified,((val*)NULL)) on <var_n_qualified:nullable AQualified> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_qualified->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_qualified, var_other); /* == on <var_n_qualified:nullable AQualified(AQualified)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_qualified,self) on <var_n_qualified:nullable AQualified(AQualified)> */
var_n_qualified->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_qualified:nullable AQualified(AQualified)> */
RET_LABEL6:(void)0;
}
}
} else {
}
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2283);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val = var_n_id; /* _n_id on <self:AQclassid> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2284);
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
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AQclassid$replace_child for (self: AQclassid, ANode, nullable ANode) */
void nitc__parser_prod___AQclassid___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : TClassid */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <self:AQclassid> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable AQualified> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable AQualified(AQualified)> */
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
cltype = type_nullable__nitc__AQualified.color;
idtype = type_nullable__nitc__AQualified.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2290);
fatal_exit(1);
}
{
nitc__parser_prod___AQclassid___n_qualified_61d(self, var_new_child); /* Direct call parser_prod$AQclassid$n_qualified= on <self:AQclassid>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <self:AQclassid> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2293);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:TClassid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:TClassid> */
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
cltype15 = type_nitc__TClassid.color;
idtype16 = type_nitc__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2294);
fatal_exit(1);
}
{
nitc__parser_prod___AQclassid___n_id_61d(self, var_new_child); /* Direct call parser_prod$AQclassid$n_id= on <self:AQclassid>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AQclassid$n_qualified= for (self: AQclassid, nullable AQualified) */
void nitc__parser_prod___AQclassid___n_qualified_61d(val* self, val* p0) {
val* var_node /* var node: nullable AQualified */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val = var_node; /* _n_qualified on <self:AQclassid> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable AQualified> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable AQualified(AQualified)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AQualified(AQualified)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AQualified(AQualified)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AQclassid$n_id= for (self: AQclassid, TClassid) */
void nitc__parser_prod___AQclassid___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val = var_node; /* _n_id on <self:AQclassid> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TClassid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TClassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AQclassid$visit_all for (self: AQclassid, Visitor) */
void nitc__parser_prod___AQclassid___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AQualified */;
val* var1 /* : TClassid */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <self:AQclassid> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <self:AQclassid> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2314);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ASignature$init_asignature for (self: ASignature, nullable TOpar, Collection[Object], nullable TCpar, nullable AType) */
void nitc__parser_prod___ASignature___init_asignature(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_opar /* var n_opar: nullable TOpar */;
val* var_n_params /* var n_params: Collection[Object] */;
val* var_n_cpar /* var n_cpar: nullable TCpar */;
val* var_n_type /* var n_type: nullable AType */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var7 /* : ANodes[AParam] */;
val* var9 /* : ANodes[AParam] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ASignature> */
RET_LABEL1:(void)0;
}
}
var_n_opar = p0;
var_n_params = p1;
var_n_cpar = p2;
var_n_type = p3;
self->attrs[COLOR_nitc__parser_nodes__ASignature___n_opar].val = var_n_opar; /* _n_opar on <self:ASignature> */
if (var_n_opar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_opar,((val*)NULL)) on <var_n_opar:nullable TOpar> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_opar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_opar, var_other); /* == on <var_n_opar:nullable TOpar(TOpar)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_opar,self) on <var_n_opar:nullable TOpar(TOpar)> */
var_n_opar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_opar:nullable TOpar(TOpar)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$ASignature$n_params (self) on <self:ASignature> */
var9 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var7, var_n_params); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var7:ANodes[AParam]>*/
}
self->attrs[COLOR_nitc__parser_nodes__ASignature___n_cpar].val = var_n_cpar; /* _n_cpar on <self:ASignature> */
if (var_n_cpar == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_cpar,((val*)NULL)) on <var_n_cpar:nullable TCpar> */
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
{ /* Inline parser_nodes$ANode$parent= (var_n_cpar,self) on <var_n_cpar:nullable TCpar(TCpar)> */
var_n_cpar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cpar:nullable TCpar(TCpar)> */
RET_LABEL15:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val = var_n_type; /* _n_type on <self:ASignature> */
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
RET_LABEL:;
}
/* method parser_prod$ASignature$replace_child for (self: ASignature, ANode, nullable ANode) */
void nitc__parser_prod___ASignature___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TOpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TOpar(TOpar)> */
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
cltype = type_nullable__nitc__TOpar.color;
idtype = type_nullable__nitc__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2337);
fatal_exit(1);
}
{
nitc__parser_prod___ASignature___n_opar_61d(self, var_new_child); /* Direct call parser_prod$ASignature$n_opar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ASignature$n_params (self) on <self:ASignature> */
var10 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
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
var12 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var12,var_old_child) on <var12:nullable TCpar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var12,var_other) on <var12:nullable TCpar(TCpar)> */
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
cltype20 = type_nullable__nitc__TCpar.color;
idtype21 = type_nullable__nitc__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2342);
fatal_exit(1);
}
{
nitc__parser_prod___ASignature___n_cpar_61d(self, var_new_child); /* Direct call parser_prod$ASignature$n_cpar= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
var23 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
if (var23 == NULL) {
var24 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var23,var_old_child) on <var23:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var23,var_other) on <var23:nullable AType(AType)> */
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
cltype31 = type_nullable__nitc__AType.color;
idtype32 = type_nullable__nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2346);
fatal_exit(1);
}
{
nitc__parser_prod___ASignature___n_type_61d(self, var_new_child); /* Direct call parser_prod$ASignature$n_type= on <self:ASignature>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASignature$n_opar= for (self: ASignature, nullable TOpar) */
void nitc__parser_prod___ASignature___n_opar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TOpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASignature___n_opar].val = var_node; /* _n_opar on <self:ASignature> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TOpar> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TOpar(TOpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TOpar(TOpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASignature$n_cpar= for (self: ASignature, nullable TCpar) */
void nitc__parser_prod___ASignature___n_cpar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCpar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASignature___n_cpar].val = var_node; /* _n_cpar on <self:ASignature> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TCpar> */
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TCpar(TCpar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TCpar(TCpar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ASignature$n_type= for (self: ASignature, nullable AType) */
void nitc__parser_prod___ASignature___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val = var_node; /* _n_type on <self:ASignature> */
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
/* method parser_prod$ASignature$visit_all for (self: ASignature, Visitor) */
void nitc__parser_prod___ASignature___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TOpar */;
val* var1 /* : ANodes[AParam] */;
val* var3 /* : ANodes[AParam] */;
val* var4 /* : nullable TCpar */;
val* var5 /* : nullable AType */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$ASignature$n_params (self) on <self:ASignature> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var1, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var1:ANodes[AParam]>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_cpar].val; /* _n_cpar on <self:ASignature> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AParam$init_aparam for (self: AParam, nullable TId, nullable AType, nullable TDotdotdot, nullable AAnnotations) */
void nitc__parser_prod___AParam___init_aparam(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_dotdotdot /* var n_dotdotdot: nullable TDotdotdot */;
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
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AParam> */
RET_LABEL1:(void)0;
}
}
var_n_id = p0;
var_n_type = p1;
var_n_dotdotdot = p2;
var_n_annotations = p3;
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2384);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val = var_n_id; /* _n_id on <self:AParam> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2385);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val = var_n_type; /* _n_type on <self:AParam> */
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
self->attrs[COLOR_nitc__parser_nodes__AParam___n_dotdotdot].val = var_n_dotdotdot; /* _n_dotdotdot on <self:AParam> */
if (var_n_dotdotdot == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_dotdotdot,((val*)NULL)) on <var_n_dotdotdot:nullable TDotdotdot> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_n_dotdotdot->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_dotdotdot, var_other); /* == on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_dotdotdot,self) on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)> */
var_n_dotdotdot->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_dotdotdot:nullable TDotdotdot(TDotdotdot)> */
RET_LABEL13:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AParam> */
if (var_n_annotations == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL19:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AParam$replace_child for (self: AParam, ANode, nullable ANode) */
void nitc__parser_prod___AParam___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2396);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TId> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2397);
fatal_exit(1);
}
{
nitc__parser_prod___AParam___n_id_61d(self, var_new_child); /* Direct call parser_prod$AParam$n_id= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2401);
fatal_exit(1);
}
{
nitc__parser_prod___AParam___n_type_61d(self, var_new_child); /* Direct call parser_prod$AParam$n_type= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:nullable TDotdotdot> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:nullable TDotdotdot(TDotdotdot)> */
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
cltype26 = type_nullable__nitc__TDotdotdot.color;
idtype27 = type_nullable__nitc__TDotdotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2405);
fatal_exit(1);
}
{
nitc__parser_prod___AParam___n_dotdotdot_61d(self, var_new_child); /* Direct call parser_prod$AParam$n_dotdotdot= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
var29 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
if (var29 == NULL) {
var30 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var29,var_old_child) on <var29:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var29,var_other) on <var29:nullable AAnnotations(AAnnotations)> */
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
cltype37 = type_nullable__nitc__AAnnotations.color;
idtype38 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2409);
fatal_exit(1);
}
{
nitc__parser_prod___AParam___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AParam$n_annotations= on <self:AParam>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AParam$n_id= for (self: AParam, TId) */
void nitc__parser_prod___AParam___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val = var_node; /* _n_id on <self:AParam> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AParam$n_type= for (self: AParam, nullable AType) */
void nitc__parser_prod___AParam___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val = var_node; /* _n_type on <self:AParam> */
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
/* method parser_prod$AParam$n_dotdotdot= for (self: AParam, nullable TDotdotdot) */
void nitc__parser_prod___AParam___n_dotdotdot_61d(val* self, val* p0) {
val* var_node /* var node: nullable TDotdotdot */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AParam___n_dotdotdot].val = var_node; /* _n_dotdotdot on <self:AParam> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TDotdotdot> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TDotdotdot(TDotdotdot)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TDotdotdot(TDotdotdot)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TDotdotdot(TDotdotdot)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AParam$n_annotations= for (self: AParam, nullable AAnnotations) */
void nitc__parser_prod___AParam___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AParam> */
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
/* method parser_prod$AParam$visit_all for (self: AParam, Visitor) */
void nitc__parser_prod___AParam___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TId */;
val* var1 /* : nullable AType */;
val* var2 /* : nullable TDotdotdot */;
val* var3 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2438);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <self:AParam> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <self:AParam> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AParam> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AType$init_atype for (self: AType, nullable TKwnullable, nullable AQclassid, nullable TObra, Collection[Object], nullable TCbra, nullable AAnnotations) */
void nitc__parser_prod___AType___init_atype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwnullable /* var n_kwnullable: nullable TKwnullable */;
val* var_n_qid /* var n_qid: nullable AQclassid */;
val* var_n_obra /* var n_obra: nullable TObra */;
val* var_n_types /* var n_types: Collection[Object] */;
val* var_n_cbra /* var n_cbra: nullable TCbra */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var14 /* : ANodes[AType] */;
val* var16 /* : ANodes[AType] */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AType> */
RET_LABEL1:(void)0;
}
}
var_n_kwnullable = p0;
var_n_qid = p1;
var_n_obra = p2;
var_n_types = p3;
var_n_cbra = p4;
var_n_annotations = p5;
self->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val = var_n_kwnullable; /* _n_kwnullable on <self:AType> */
if (var_n_kwnullable == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwnullable,((val*)NULL)) on <var_n_kwnullable:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_kwnullable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnullable, var_other); /* == on <var_n_kwnullable:nullable TKwnullable(TKwnullable)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwnullable,self) on <var_n_kwnullable:nullable TKwnullable(TKwnullable)> */
var_n_kwnullable->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwnullable:nullable TKwnullable(TKwnullable)> */
RET_LABEL6:(void)0;
}
}
} else {
}
if (unlikely(var_n_qid == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2456);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val = var_n_qid; /* _n_qid on <self:AType> */
if (var_n_qid == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2457);
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
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AType___n_obra].val = var_n_obra; /* _n_obra on <self:AType> */
if (var_n_obra == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_obra,((val*)NULL)) on <var_n_obra:nullable TObra> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_n_obra->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_obra, var_other); /* == on <var_n_obra:nullable TObra(TObra)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_obra,self) on <var_n_obra:nullable TObra(TObra)> */
var_n_obra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_obra:nullable TObra(TObra)> */
RET_LABEL13:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$AType$n_types (self) on <self:AType> */
var16 = self->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var14, var_n_types); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var14:ANodes[AType]>*/
}
self->attrs[COLOR_nitc__parser_nodes__AType___n_cbra].val = var_n_cbra; /* _n_cbra on <self:AType> */
if (var_n_cbra == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_cbra,((val*)NULL)) on <var_n_cbra:nullable TCbra> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_n_cbra->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_cbra, var_other); /* == on <var_n_cbra:nullable TCbra(TCbra)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_cbra,self) on <var_n_cbra:nullable TCbra(TCbra)> */
var_n_cbra->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_cbra:nullable TCbra(TCbra)> */
RET_LABEL22:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AType> */
if (var_n_annotations == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL28:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AType$replace_child for (self: AType, ANode, nullable ANode) */
void nitc__parser_prod___AType___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
val* var8 /* : AQclassid */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : nullable TObra */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
val* var29 /* : ANodes[AType] */;
val* var31 /* : ANodes[AType] */;
short int var32 /* : Bool */;
val* var33 /* : nullable TCbra */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
val* var44 /* : nullable AAnnotations */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwnullable> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwnullable(TKwnullable)> */
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
cltype = type_nullable__nitc__TKwnullable.color;
idtype = type_nullable__nitc__TKwnullable.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2470);
fatal_exit(1);
}
{
nitc__parser_prod___AType___n_kwnullable_61d(self, var_new_child); /* Direct call parser_prod$AType$n_kwnullable= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val; /* _n_qid on <self:AType> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2473);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:AQclassid> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:AQclassid> */
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
/* <var_new_child:nullable ANode> isa AQclassid */
cltype15 = type_nitc__AQclassid.color;
idtype16 = type_nitc__AQclassid.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AQclassid", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2474);
fatal_exit(1);
}
{
nitc__parser_prod___AType___n_qid_61d(self, var_new_child); /* Direct call parser_prod$AType$n_qid= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__AType___n_obra].val; /* _n_obra on <self:AType> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:nullable TObra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:nullable TObra(TObra)> */
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
/* <var_new_child:nullable ANode> isa nullable TObra */
cltype26 = type_nullable__nitc__TObra.color;
idtype27 = type_nullable__nitc__TObra.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TObra", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2478);
fatal_exit(1);
}
{
nitc__parser_prod___AType___n_obra_61d(self, var_new_child); /* Direct call parser_prod$AType$n_obra= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AType$n_types (self) on <self:AType> */
var31 = self->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = nitc___nitc__ANodes___replace_child(var29, var_old_child, var_new_child);
}
if (var32){
goto RET_LABEL;
} else {
}
var33 = self->attrs[COLOR_nitc__parser_nodes__AType___n_cbra].val; /* _n_cbra on <self:AType> */
if (var33 == NULL) {
var34 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var33,var_old_child) on <var33:nullable TCbra> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var33,var_other) on <var33:nullable TCbra(TCbra)> */
var39 = var33 == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
/* <var_new_child:nullable ANode> isa nullable TCbra */
cltype41 = type_nullable__nitc__TCbra.color;
idtype42 = type_nullable__nitc__TCbra.id;
if(var_new_child == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_new_child->type->table_size) {
var40 = 0;
} else {
var40 = var_new_child->type->type_table[cltype41] == idtype42;
}
}
if (unlikely(!var40)) {
var_class_name43 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TCbra", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2483);
fatal_exit(1);
}
{
nitc__parser_prod___AType___n_cbra_61d(self, var_new_child); /* Direct call parser_prod$AType$n_cbra= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
var44 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
if (var44 == NULL) {
var45 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var44,var_old_child) on <var44:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var44,var_other) on <var44:nullable AAnnotations(AAnnotations)> */
var50 = var44 == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype52 = type_nullable__nitc__AAnnotations.color;
idtype53 = type_nullable__nitc__AAnnotations.id;
if(var_new_child == NULL) {
var51 = 1;
} else {
if(cltype52 >= var_new_child->type->table_size) {
var51 = 0;
} else {
var51 = var_new_child->type->type_table[cltype52] == idtype53;
}
}
if (unlikely(!var51)) {
var_class_name54 = var_new_child == NULL ? "null" : var_new_child->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2487);
fatal_exit(1);
}
{
nitc__parser_prod___AType___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AType$n_annotations= on <self:AType>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AType$n_kwnullable= for (self: AType, nullable TKwnullable) */
void nitc__parser_prod___AType___n_kwnullable_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwnullable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val = var_node; /* _n_kwnullable on <self:AType> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwnullable(TKwnullable)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwnullable(TKwnullable)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwnullable(TKwnullable)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AType$n_qid= for (self: AType, AQclassid) */
void nitc__parser_prod___AType___n_qid_61d(val* self, val* p0) {
val* var_node /* var node: AQclassid */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val = var_node; /* _n_qid on <self:AType> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:AQclassid> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:AQclassid> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AType$n_obra= for (self: AType, nullable TObra) */
void nitc__parser_prod___AType___n_obra_61d(val* self, val* p0) {
val* var_node /* var node: nullable TObra */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AType___n_obra].val = var_node; /* _n_obra on <self:AType> */
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
/* method parser_prod$AType$n_cbra= for (self: AType, nullable TCbra) */
void nitc__parser_prod___AType___n_cbra_61d(val* self, val* p0) {
val* var_node /* var node: nullable TCbra */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AType___n_cbra].val = var_node; /* _n_cbra on <self:AType> */
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
/* method parser_prod$AType$n_annotations= for (self: AType, nullable AAnnotations) */
void nitc__parser_prod___AType___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AType> */
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
/* method parser_prod$AType$visit_all for (self: AType, Visitor) */
void nitc__parser_prod___AType___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwnullable */;
val* var1 /* : AQclassid */;
val* var2 /* : nullable TObra */;
val* var3 /* : ANodes[AType] */;
val* var5 /* : ANodes[AType] */;
val* var6 /* : nullable TCbra */;
val* var7 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <self:AType> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val; /* _n_qid on <self:AType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2522);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AType___n_obra].val; /* _n_obra on <self:AType> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
{
{ /* Inline parser_nodes$AType$n_types (self) on <self:AType> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <self:AType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var3, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var3:ANodes[AType]>*/
}
var6 = self->attrs[COLOR_nitc__parser_nodes__AType___n_cbra].val; /* _n_cbra on <self:AType> */
{
nitc___nitc__Visitor___enter_visit(var_v, var6); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var7 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AType> */
{
nitc___nitc__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ALabel$init_alabel for (self: ALabel, nullable TKwlabel, nullable TId) */
void nitc__parser_prod___ALabel___init_alabel(val* self, val* p0, val* p1) {
val* var_n_kwlabel /* var n_kwlabel: nullable TKwlabel */;
val* var_n_id /* var n_id: nullable TId */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ALabel> */
RET_LABEL1:(void)0;
}
}
var_n_kwlabel = p0;
var_n_id = p1;
if (unlikely(var_n_kwlabel == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2535);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ALabel___n_kwlabel].val = var_n_kwlabel; /* _n_kwlabel on <self:ALabel> */
if (var_n_kwlabel == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2536);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwlabel,self) on <var_n_kwlabel:nullable TKwlabel> */
if (unlikely(var_n_kwlabel == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwlabel->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwlabel:nullable TKwlabel> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ALabel___n_id].val = var_n_id; /* _n_id on <self:ALabel> */
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
RET_LABEL:;
}
/* method parser_prod$ALabel$replace_child for (self: ALabel, ANode, nullable ANode) */
void nitc__parser_prod___ALabel___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2543);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwlabel> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwlabel> */
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
cltype = type_nitc__TKwlabel.color;
idtype = type_nitc__TKwlabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2544);
fatal_exit(1);
}
{
nitc__parser_prod___ALabel___n_kwlabel_61d(self, var_new_child); /* Direct call parser_prod$ALabel$n_kwlabel= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2548);
fatal_exit(1);
}
{
nitc__parser_prod___ALabel___n_id_61d(self, var_new_child); /* Direct call parser_prod$ALabel$n_id= on <self:ALabel>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ALabel$n_kwlabel= for (self: ALabel, TKwlabel) */
void nitc__parser_prod___ALabel___n_kwlabel_61d(val* self, val* p0) {
val* var_node /* var node: TKwlabel */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabel___n_kwlabel].val = var_node; /* _n_kwlabel on <self:ALabel> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwlabel> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwlabel> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ALabel$n_id= for (self: ALabel, nullable TId) */
void nitc__parser_prod___ALabel___n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabel___n_id].val = var_node; /* _n_id on <self:ALabel> */
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
/* method parser_prod$ALabel$visit_all for (self: ALabel, Visitor) */
void nitc__parser_prod___ALabel___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwlabel */;
val* var1 /* : nullable TId */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ALabel___n_kwlabel].val; /* _n_kwlabel on <self:ALabel> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwlabel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2567);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ALabel___n_id].val; /* _n_id on <self:ALabel> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ABlockExpr$init_ablockexpr for (self: ABlockExpr, Collection[Object], nullable TKwend) */
void nitc__parser_prod___ABlockExpr___init_ablockexpr(val* self, val* p0, val* p1) {
val* var_n_expr /* var n_expr: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
val* var /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ABlockExpr> */
RET_LABEL1:(void)0;
}
}
var_n_expr = p0;
var_n_kwend = p1;
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc___nitc__ANodes___unsafe_add_all(var, var_n_expr); /* Direct call parser_nodes$ANodes$unsafe_add_all on <var:ANodes[AExpr]>*/
}
self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ABlockExpr> */
if (var_n_kwend == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwend,((val*)NULL)) on <var_n_kwend:nullable TKwend> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_n_kwend->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwend, var_other); /* == on <var_n_kwend:nullable TKwend(TKwend)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwend,self) on <var_n_kwend:nullable TKwend(TKwend)> */
var_n_kwend->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwend:nullable TKwend(TKwend)> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABlockExpr$replace_child for (self: ABlockExpr, ANode, nullable ANode) */
void nitc__parser_prod___ABlockExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
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
var4 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
if (var4 == NULL) {
var5 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var4,var_old_child) on <var4:nullable TKwend> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var4,var_other) on <var4:nullable TKwend(TKwend)> */
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
cltype = type_nullable__nitc__TKwend.color;
idtype = type_nullable__nitc__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2586);
fatal_exit(1);
}
{
nitc__parser_prod___ABlockExpr___n_kwend_61d(self, var_new_child); /* Direct call parser_prod$ABlockExpr$n_kwend= on <self:ABlockExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABlockExpr$n_kwend= for (self: ABlockExpr, nullable TKwend) */
void nitc__parser_prod___ABlockExpr___n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwend */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_kwend].val = var_node; /* _n_kwend on <self:ABlockExpr> */
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
/* method parser_prod$ABlockExpr$visit_all for (self: ABlockExpr, Visitor) */
void nitc__parser_prod___ABlockExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : nullable TKwend */;
var_v = p0;
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ANodes___visit_all(var, var_v); /* Direct call parser_nodes$ANodes$visit_all on <var:ANodes[AExpr]>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_kwend].val; /* _n_kwend on <self:ABlockExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AVardeclExpr$init_avardeclexpr for (self: AVardeclExpr, nullable TKwvar, nullable TId, nullable AType, nullable TAssign, nullable AExpr, nullable AAnnotations) */
void nitc__parser_prod___AVardeclExpr___init_avardeclexpr(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_kwvar /* var n_kwvar: nullable TKwvar */;
val* var_n_id /* var n_id: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_assign /* var n_assign: nullable TAssign */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
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
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:AVardeclExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwvar = p0;
var_n_id = p1;
var_n_type = p2;
var_n_assign = p3;
var_n_expr = p4;
var_n_annotations = p5;
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AVardeclExpr> */
if (var_n_kwvar == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwvar,((val*)NULL)) on <var_n_kwvar:nullable TKwvar> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_kwvar->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwvar, var_other); /* == on <var_n_kwvar:nullable TKwvar(TKwvar)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwvar,self) on <var_n_kwvar:nullable TKwvar(TKwvar)> */
var_n_kwvar->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwvar:nullable TKwvar(TKwvar)> */
RET_LABEL6:(void)0;
}
}
} else {
}
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2616);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_id].val = var_n_id; /* _n_id on <self:AVardeclExpr> */
if (var_n_id == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2617);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_id,self) on <var_n_id:nullable TId> */
if (unlikely(var_n_id == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_id->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_id:nullable TId> */
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_type].val = var_n_type; /* _n_type on <self:AVardeclExpr> */
if (var_n_type == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_type,((val*)NULL)) on <var_n_type:nullable AType> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_n_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_type, var_other); /* == on <var_n_type:nullable AType(AType)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_type,self) on <var_n_type:nullable AType(AType)> */
var_n_type->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_type:nullable AType(AType)> */
RET_LABEL13:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_assign].val = var_n_assign; /* _n_assign on <self:AVardeclExpr> */
if (var_n_assign == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_assign,((val*)NULL)) on <var_n_assign:nullable TAssign> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_n_assign->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_assign, var_other); /* == on <var_n_assign:nullable TAssign(TAssign)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_assign,self) on <var_n_assign:nullable TAssign(TAssign)> */
var_n_assign->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_assign:nullable TAssign(TAssign)> */
RET_LABEL19:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AVardeclExpr> */
if (var_n_expr == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_expr,((val*)NULL)) on <var_n_expr:nullable AExpr> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_expr, var_other); /* == on <var_n_expr:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL25:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AVardeclExpr> */
if (var_n_annotations == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_annotations,((val*)NULL)) on <var_n_annotations:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var29 = ((short int(*)(val* self, val* p0))(var_n_annotations->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_annotations, var_other); /* == on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_annotations,self) on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
var_n_annotations->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_annotations:nullable AAnnotations(AAnnotations)> */
RET_LABEL31:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AVardeclExpr$replace_child for (self: AVardeclExpr, ANode, nullable ANode) */
void nitc__parser_prod___AVardeclExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwvar */;
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
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
val* var18 /* : nullable AType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
val* var29 /* : nullable TAssign */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
val* var40 /* : nullable AExpr */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
val* var51 /* : nullable AAnnotations */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwvar> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwvar(TKwvar)> */
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
/* <var_new_child:nullable ANode> isa nullable TKwvar */
cltype = type_nullable__nitc__TKwvar.color;
idtype = type_nullable__nitc__TKwvar.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TKwvar", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2631);
fatal_exit(1);
}
{
nitc__parser_prod___AVardeclExpr___n_kwvar_61d(self, var_new_child); /* Direct call parser_prod$AVardeclExpr$n_kwvar= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2634);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var8,var_old_child) on <var8:TId> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:TId> */
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
/* <var_new_child:nullable ANode> isa TId */
cltype15 = type_nitc__TId.color;
idtype16 = type_nitc__TId.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TId", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2635);
fatal_exit(1);
}
{
nitc__parser_prod___AVardeclExpr___n_id_61d(self, var_new_child); /* Direct call parser_prod$AVardeclExpr$n_id= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
if (var18 == NULL) {
var19 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var18,var_old_child) on <var18:nullable AType> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var18,var_other) on <var18:nullable AType(AType)> */
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
/* <var_new_child:nullable ANode> isa nullable AType */
cltype26 = type_nullable__nitc__AType.color;
idtype27 = type_nullable__nitc__AType.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AType", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2639);
fatal_exit(1);
}
{
nitc__parser_prod___AVardeclExpr___n_type_61d(self, var_new_child); /* Direct call parser_prod$AVardeclExpr$n_type= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var29 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
if (var29 == NULL) {
var30 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var29,var_old_child) on <var29:nullable TAssign> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var29,var_other) on <var29:nullable TAssign(TAssign)> */
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
/* <var_new_child:nullable ANode> isa nullable TAssign */
cltype37 = type_nullable__nitc__TAssign.color;
idtype38 = type_nullable__nitc__TAssign.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable TAssign", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2643);
fatal_exit(1);
}
{
nitc__parser_prod___AVardeclExpr___n_assign_61d(self, var_new_child); /* Direct call parser_prod$AVardeclExpr$n_assign= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var40 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
if (var40 == NULL) {
var41 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var40,var_old_child) on <var40:nullable AExpr> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:nullable AExpr(AExpr)> */
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
/* <var_new_child:nullable ANode> isa nullable AExpr */
cltype48 = type_nullable__nitc__AExpr.color;
idtype49 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AExpr", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2647);
fatal_exit(1);
}
{
nitc__parser_prod___AVardeclExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AVardeclExpr$n_expr= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
var51 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
if (var51 == NULL) {
var52 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var51,var_old_child) on <var51:nullable AAnnotations> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var51,var_other) on <var51:nullable AAnnotations(AAnnotations)> */
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
/* <var_new_child:nullable ANode> isa nullable AAnnotations */
cltype59 = type_nullable__nitc__AAnnotations.color;
idtype60 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable AAnnotations", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2651);
fatal_exit(1);
}
{
nitc__parser_prod___AVardeclExpr___nitc__parser_nodes__Prod__n_annotations_61d(self, var_new_child); /* Direct call parser_prod$AVardeclExpr$n_annotations= on <self:AVardeclExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AVardeclExpr$n_kwvar= for (self: AVardeclExpr, nullable TKwvar) */
void nitc__parser_prod___AVardeclExpr___n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwvar */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_kwvar].val = var_node; /* _n_kwvar on <self:AVardeclExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwvar> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwvar(TKwvar)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwvar(TKwvar)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwvar(TKwvar)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AVardeclExpr$n_id= for (self: AVardeclExpr, TId) */
void nitc__parser_prod___AVardeclExpr___n_id_61d(val* self, val* p0) {
val* var_node /* var node: TId */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_id].val = var_node; /* _n_id on <self:AVardeclExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TId> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TId> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AVardeclExpr$n_type= for (self: AVardeclExpr, nullable AType) */
void nitc__parser_prod___AVardeclExpr___n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_type].val = var_node; /* _n_type on <self:AVardeclExpr> */
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
/* method parser_prod$AVardeclExpr$n_assign= for (self: AVardeclExpr, nullable TAssign) */
void nitc__parser_prod___AVardeclExpr___n_assign_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAssign */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_assign].val = var_node; /* _n_assign on <self:AVardeclExpr> */
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
/* method parser_prod$AVardeclExpr$n_expr= for (self: AVardeclExpr, nullable AExpr) */
void nitc__parser_prod___AVardeclExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val = var_node; /* _n_expr on <self:AVardeclExpr> */
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
/* method parser_prod$AVardeclExpr$n_annotations= for (self: AVardeclExpr, nullable AAnnotations) */
void nitc__parser_prod___AVardeclExpr___nitc__parser_nodes__Prod__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AVardeclExpr> */
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
/* method parser_prod$AVardeclExpr$visit_all for (self: AVardeclExpr, Visitor) */
void nitc__parser_prod___AVardeclExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwvar */;
val* var1 /* : TId */;
val* var2 /* : nullable AType */;
val* var3 /* : nullable TAssign */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_kwvar].val; /* _n_kwvar on <self:AVardeclExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2691);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var2 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var2); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var3 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_assign].val; /* _n_assign on <self:AVardeclExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var3); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var4 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var4); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var5 = self->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AVardeclExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var5); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AReturnExpr$init_areturnexpr for (self: AReturnExpr, nullable TKwreturn, nullable AExpr) */
void nitc__parser_prod___AReturnExpr___init_areturnexpr(val* self, val* p0, val* p1) {
val* var_n_kwreturn /* var n_kwreturn: nullable TKwreturn */;
val* var_n_expr /* var n_expr: nullable AExpr */;
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
{ /* Inline kernel$Object$init (self) on <self:AReturnExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwreturn = p0;
var_n_expr = p1;
self->attrs[COLOR_nitc__parser_nodes__AReturnExpr___n_kwreturn].val = var_n_kwreturn; /* _n_kwreturn on <self:AReturnExpr> */
if (var_n_kwreturn == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwreturn,((val*)NULL)) on <var_n_kwreturn:nullable TKwreturn> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_n_kwreturn->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwreturn, var_other); /* == on <var_n_kwreturn:nullable TKwreturn(TKwreturn)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_kwreturn,self) on <var_n_kwreturn:nullable TKwreturn(TKwreturn)> */
var_n_kwreturn->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwreturn:nullable TKwreturn(TKwreturn)> */
RET_LABEL6:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AReturnExpr> */
if (var_n_expr == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_expr,((val*)NULL)) on <var_n_expr:nullable AExpr> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_expr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_expr, var_other); /* == on <var_n_expr:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_expr,self) on <var_n_expr:nullable AExpr(AExpr)> */
var_n_expr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_expr:nullable AExpr(AExpr)> */
RET_LABEL12:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AReturnExpr$replace_child for (self: AReturnExpr, ANode, nullable ANode) */
void nitc__parser_prod___AReturnExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwreturn> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwreturn(TKwreturn)> */
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
cltype = type_nullable__nitc__TKwreturn.color;
idtype = type_nullable__nitc__TKwreturn.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2713);
fatal_exit(1);
}
{
nitc__parser_prod___AReturnExpr___n_kwreturn_61d(self, var_new_child); /* Direct call parser_prod$AReturnExpr$n_kwreturn= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2717);
fatal_exit(1);
}
{
nitc__parser_prod___AReturnExpr___nitc__parser_nodes__AEscapeExpr__n_expr_61d(self, var_new_child); /* Direct call parser_prod$AReturnExpr$n_expr= on <self:AReturnExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AReturnExpr$n_kwreturn= for (self: AReturnExpr, nullable TKwreturn) */
void nitc__parser_prod___AReturnExpr___n_kwreturn_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwreturn */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AReturnExpr___n_kwreturn].val = var_node; /* _n_kwreturn on <self:AReturnExpr> */
if (var_node == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable TKwreturn> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable TKwreturn(TKwreturn)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwreturn(TKwreturn)> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwreturn(TKwreturn)> */
RET_LABEL5:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$AReturnExpr$n_expr= for (self: AReturnExpr, nullable AExpr) */
void nitc__parser_prod___AReturnExpr___nitc__parser_nodes__AEscapeExpr__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val = var_node; /* _n_expr on <self:AReturnExpr> */
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
/* method parser_prod$AReturnExpr$visit_all for (self: AReturnExpr, Visitor) */
void nitc__parser_prod___AReturnExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwreturn */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AReturnExpr___n_kwreturn].val; /* _n_kwreturn on <self:AReturnExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$AYieldExpr$init_ayieldexpr for (self: AYieldExpr, nullable TKwyield, nullable AExpr) */
void nitc__parser_prod___AYieldExpr___init_ayieldexpr(val* self, val* p0, val* p1) {
val* var_n_kwyield /* var n_kwyield: nullable TKwyield */;
val* var_n_expr /* var n_expr: nullable AExpr */;
{
{ /* Inline kernel$Object$init (self) on <self:AYieldExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwyield = p0;
var_n_expr = p1;
if (unlikely(var_n_kwyield == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2746);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AYieldExpr___n_kwyield].val = var_n_kwyield; /* _n_kwyield on <self:AYieldExpr> */
if (var_n_kwyield == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2747);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwyield,self) on <var_n_kwyield:nullable TKwyield> */
if (unlikely(var_n_kwyield == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwyield->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwyield:nullable TKwyield> */
RET_LABEL2:(void)0;
}
}
if (unlikely(var_n_expr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2748);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__AYieldExpr___n_expr].val = var_n_expr; /* _n_expr on <self:AYieldExpr> */
if (var_n_expr == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2749);
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
/* method parser_prod$AYieldExpr$replace_child for (self: AYieldExpr, ANode, nullable ANode) */
void nitc__parser_prod___AYieldExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable TKwyield */;
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
var = self->attrs[COLOR_nitc__parser_nodes__AYieldExpr___n_kwyield].val; /* _n_kwyield on <self:AYieldExpr> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var,var_old_child) on <var:nullable TKwyield> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:nullable TKwyield(TKwyield)> */
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
/* <var_new_child:nullable ANode> isa TKwyield */
cltype = type_nitc__TKwyield.color;
idtype = type_nitc__TKwyield.id;
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "TKwyield", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2755);
fatal_exit(1);
}
{
nitc__parser_prod___AYieldExpr___n_kwyield_61d(self, var_new_child); /* Direct call parser_prod$AYieldExpr$n_kwyield= on <self:AYieldExpr>*/
}
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_nitc__parser_nodes__AYieldExpr___n_expr].val; /* _n_expr on <self:AYieldExpr> */
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
/* <var_new_child:nullable ANode> isa AExpr */
cltype16 = type_nitc__AExpr.color;
idtype17 = type_nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2759);
fatal_exit(1);
}
{
nitc__parser_prod___AYieldExpr___n_expr_61d(self, var_new_child); /* Direct call parser_prod$AYieldExpr$n_expr= on <self:AYieldExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$AYieldExpr$n_kwyield= for (self: AYieldExpr, nullable TKwyield) */
void nitc__parser_prod___AYieldExpr___n_kwyield_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwyield */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AYieldExpr___n_kwyield].val = var_node; /* _n_kwyield on <self:AYieldExpr> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2767);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable TKwyield> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable TKwyield> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AYieldExpr$n_expr= for (self: AYieldExpr, nullable AExpr) */
void nitc__parser_prod___AYieldExpr___n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__AYieldExpr___n_expr].val = var_node; /* _n_expr on <self:AYieldExpr> */
if (var_node == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2772);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:nullable AExpr> */
if (unlikely(var_node == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:nullable AExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$AYieldExpr$visit_all for (self: AYieldExpr, Visitor) */
void nitc__parser_prod___AYieldExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable TKwyield */;
val* var1 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__AYieldExpr___n_kwyield].val; /* _n_kwyield on <self:AYieldExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__AYieldExpr___n_expr].val; /* _n_expr on <self:AYieldExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
/* method parser_prod$ABreakExpr$init_abreakexpr for (self: ABreakExpr, nullable TKwbreak, nullable ALabel) */
void nitc__parser_prod___ABreakExpr___init_abreakexpr(val* self, val* p0, val* p1) {
val* var_n_kwbreak /* var n_kwbreak: nullable TKwbreak */;
val* var_n_label /* var n_label: nullable ALabel */;
short int var /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:ABreakExpr> */
RET_LABEL1:(void)0;
}
}
var_n_kwbreak = p0;
var_n_label = p1;
if (unlikely(var_n_kwbreak == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2788);
fatal_exit(1);
}
self->attrs[COLOR_nitc__parser_nodes__ABreakExpr___n_kwbreak].val = var_n_kwbreak; /* _n_kwbreak on <self:ABreakExpr> */
if (var_n_kwbreak == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2789);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent= (var_n_kwbreak,self) on <var_n_kwbreak:nullable TKwbreak> */
if (unlikely(var_n_kwbreak == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var_n_kwbreak->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_kwbreak:nullable TKwbreak> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_n_label; /* _n_label on <self:ABreakExpr> */
if (var_n_label == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_label,((val*)NULL)) on <var_n_label:nullable ALabel> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_n_label->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_label, var_other); /* == on <var_n_label:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes$ANode$parent= (var_n_label,self) on <var_n_label:nullable ALabel(ALabel)> */
var_n_label->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_n_label:nullable ALabel(ALabel)> */
RET_LABEL7:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABreakExpr$replace_child for (self: ABreakExpr, ANode, nullable ANode) */
void nitc__parser_prod___ABreakExpr___nitc__parser_nodes__ANode__replace_child(val* self, val* p0, val* p1) {
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
var = self->attrs[COLOR_nitc__parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2796);
fatal_exit(1);
}
{
{ /* Inline kernel$Object$== (var,var_old_child) on <var:TKwbreak> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var,var_other) on <var:TKwbreak> */
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
cltype = type_nitc__TKwbreak.color;
idtype = type_nitc__TKwbreak.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2797);
fatal_exit(1);
}
{
nitc__parser_prod___ABreakExpr___n_kwbreak_61d(self, var_new_child); /* Direct call parser_prod$ABreakExpr$n_kwbreak= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
var7 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
if (var7 == NULL) {
var8 = 0; /* <var_old_child:ANode> cannot be null */
} else {
{ /* Inline kernel$Object$== (var7,var_old_child) on <var7:nullable ALabel> */
var_other = var_old_child;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:nullable ALabel(ALabel)> */
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
cltype15 = type_nullable__nitc__ALabel.color;
idtype16 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2801);
fatal_exit(1);
}
{
nitc__parser_prod___ABreakExpr___nitc__parser_nodes__ALabelable__n_label_61d(self, var_new_child); /* Direct call parser_prod$ABreakExpr$n_label= on <self:ABreakExpr>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod$ABreakExpr$n_kwbreak= for (self: ABreakExpr, TKwbreak) */
void nitc__parser_prod___ABreakExpr___n_kwbreak_61d(val* self, val* p0) {
val* var_node /* var node: TKwbreak */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ABreakExpr___n_kwbreak].val = var_node; /* _n_kwbreak on <self:ABreakExpr> */
{
{ /* Inline parser_nodes$ANode$parent= (var_node,self) on <var_node:TKwbreak> */
var_node->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = self; /* _parent on <var_node:TKwbreak> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method parser_prod$ABreakExpr$n_label= for (self: ABreakExpr, nullable ALabel) */
void nitc__parser_prod___ABreakExpr___nitc__parser_nodes__ALabelable__n_label_61d(val* self, val* p0) {
val* var_node /* var node: nullable ALabel */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_node = p0;
self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val = var_node; /* _n_label on <self:ABreakExpr> */
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
/* method parser_prod$ABreakExpr$visit_all for (self: ABreakExpr, Visitor) */
void nitc__parser_prod___ABreakExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwbreak */;
val* var1 /* : nullable ALabel */;
var_v = p0;
var = self->attrs[COLOR_nitc__parser_nodes__ABreakExpr___n_kwbreak].val; /* _n_kwbreak on <self:ABreakExpr> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwbreak");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_prod, 2820);
fatal_exit(1);
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
var1 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
{
nitc___nitc__Visitor___enter_visit(var_v, var1); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:Visitor>*/
}
RET_LABEL:;
}
