#include "nit__light_ffi_base.sep.0.h"
/* method light_ffi_base#ToolContext#ffi_language_assignation_phase for (self: ToolContext): Phase */
val* nit__light_ffi_base___ToolContext___ffi_language_assignation_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__light_ffi_base__ToolContext___ffi_language_assignation_phase].val; /* _ffi_language_assignation_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_language_assignation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base#FFILanguageAssignationPhase#languages for (self: FFILanguageAssignationPhase): Array[FFILanguage] */
val* nit___nit__FFILanguageAssignationPhase___languages(val* self) {
val* var /* : Array[FFILanguage] */;
val* var1 /* : Array[FFILanguage] */;
var1 = self->attrs[COLOR_nit__light_ffi_base__FFILanguageAssignationPhase___languages].val; /* _languages on <self:FFILanguageAssignationPhase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base#FFILanguageAssignationPhase#process_nmodule for (self: FFILanguageAssignationPhase, AModule) */
void nit___nit__FFILanguageAssignationPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ANodes[AExternCodeBlock] */;
val* var2 /* : ANodes[AExternCodeBlock] */;
val* var_ /* var : ANodes[AExternCodeBlock] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AExternCodeBlock] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_block /* var block: AExternCodeBlock */;
var_nmodule = p0;
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1093);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExternCodeBlock]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExternCodeBlock]>*/
}
var_block = var6;
{
nit___nit__FFILanguageAssignationPhase___verify_foreign_code_on_node(self, var_block); /* Direct call light_ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExternCodeBlock]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExternCodeBlock]>*/
}
RET_LABEL:;
}
/* method light_ffi_base#FFILanguageAssignationPhase#process_npropdef for (self: FFILanguageAssignationPhase, APropdef) */
void nit___nit__FFILanguageAssignationPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable AExternCodeBlock */;
val* var3 /* : nullable AExternCodeBlock */;
val* var_code_block /* var code_block: nullable AExternCodeBlock */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var3 = var_npropdef->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <var_npropdef:APropdef(AMethPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_code_block = var1;
if (var_code_block == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_code_block,((val*)NULL)) on <var_code_block:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_code_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_code_block, var_other); /* == on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/
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
nit___nit__FFILanguageAssignationPhase___verify_foreign_code_on_node(self, var_code_block); /* Direct call light_ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method light_ffi_base#FFILanguageAssignationPhase#process_nclassdef for (self: FFILanguageAssignationPhase, AClassdef) */
void nit___nit__FFILanguageAssignationPhase___nit__phase__Phase__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var2 /* : nullable AExternCodeBlock */;
val* var4 /* : nullable AExternCodeBlock */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable AExternCodeBlock */;
val* var12 /* : nullable AExternCodeBlock */;
var_nclassdef = p0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nit__AStdClassdef.color;
idtype = type_nit__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var1 = 0;
} else {
var1 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
{
{ /* Inline parser_nodes#AStdClassdef#n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var4 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,((val*)NULL)) on <var2:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var = var5;
} else {
var = var_;
}
if (var){
{
{ /* Inline parser_nodes#AStdClassdef#n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var12 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 59);
fatal_exit(1);
}
{
nit___nit__FFILanguageAssignationPhase___verify_foreign_code_on_node(self, var10); /* Direct call light_ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/
}
} else {
}
RET_LABEL:;
}
/* method light_ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node for (self: FFILanguageAssignationPhase, AExternCodeBlock) */
void nit___nit__FFILanguageAssignationPhase___verify_foreign_code_on_node(val* self, val* p0) {
val* var_n /* var n: AExternCodeBlock */;
short int var_found /* var found: Bool */;
val* var /* : Array[FFILanguage] */;
val* var2 /* : Array[FFILanguage] */;
val* var_ /* var : Array[FFILanguage] */;
val* var3 /* : ArrayIterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[FFILanguage] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_v /* var v: FFILanguage */;
short int var7 /* : Bool */;
short int var_identified /* var identified: Bool */;
short int var8 /* : Bool */;
short int var_9 /* var : Bool */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var13 /* : Location */;
val* var15 /* : Location */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : Message */;
short int var21 /* : Bool */;
val* var22 /* : ToolContext */;
val* var24 /* : ToolContext */;
val* var25 /* : Location */;
val* var27 /* : Location */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : Message */;
var_n = p0;
var_found = 0;
{
{ /* Inline light_ffi_base#FFILanguageAssignationPhase#languages (self) on <self:FFILanguageAssignationPhase> */
var2 = self->attrs[COLOR_nit__light_ffi_base__FFILanguageAssignationPhase___languages].val; /* _languages on <self:FFILanguageAssignationPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 36);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_4);
}
if (var5){
{
var6 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_4);
}
var_v = var6;
{
var7 = nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__identify_language(var_v, var_n);
}
var_identified = var7;
if (var_identified){
var_9 = var_found;
if (var_found){
var8 = var_identified;
} else {
var8 = var_9;
}
if (var8){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:FFILanguageAssignationPhase> */
var12 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:FFILanguageAssignationPhase> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_n) on <var_n:AExternCodeBlock> */
var15 = var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_n:AExternCodeBlock> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "FFI Error: two languages identified as possible handlers.";
var18 = standard___standard__NativeString___to_s_with_length(var17, 57l);
var16 = var18;
varonce = var16;
}
{
var19 = nit___nit__ToolContext___error(var10, var13, var16);
}
} else {
}
{
{ /* Inline light_ffi_base#AExternCodeBlock#language= (var_n,var_v) on <var_n:AExternCodeBlock> */
var_n->attrs[COLOR_nit__light_ffi_base__AExternCodeBlock___language].val = var_v; /* _language on <var_n:AExternCodeBlock> */
RET_LABEL20:(void)0;
}
}
var_found = 1;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_4); /* Direct call array#ArrayIterator#next on <var_4:ArrayIterator[FFILanguage]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_4); /* Direct call array#ArrayIterator#finish on <var_4:ArrayIterator[FFILanguage]>*/
}
var21 = !var_found;
if (var21){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:FFILanguageAssignationPhase> */
var24 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:FFILanguageAssignationPhase> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_n) on <var_n:AExternCodeBlock> */
var27 = var_n->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_n:AExternCodeBlock> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "FFI Error: unsupported language.";
var31 = standard___standard__NativeString___to_s_with_length(var30, 32l);
var29 = var31;
varonce28 = var29;
}
{
var32 = nit___nit__ToolContext___error(var22, var25, var29);
}
} else {
}
RET_LABEL:;
}
/* method light_ffi_base#MModule#ffi_files for (self: MModule): Array[ExternFile] */
val* nit__light_ffi_base___MModule___ffi_files(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_nit__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 82);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base#AExternCodeBlock#language_name for (self: AExternCodeBlock): nullable String */
val* nit__light_ffi_base___AExternCodeBlock___language_name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable AInLanguage */;
val* var3 /* : nullable AInLanguage */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable AInLanguage */;
val* var12 /* : nullable AInLanguage */;
val* var13 /* : TString */;
val* var15 /* : TString */;
val* var16 /* : String */;
{
{ /* Inline parser_nodes#AExternCodeBlock#n_in_language (self) on <self:AExternCodeBlock> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable AInLanguage> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable AInLanguage(AInLanguage)> */
var9 = var1 == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AExternCodeBlock#n_in_language (self) on <self:AExternCodeBlock> */
var12 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 90);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AInLanguage#n_string (var10) on <var10:nullable AInLanguage> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2911);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nit__parser_nodes__AInLanguage___n_string].val; /* _n_string on <var10:nullable AInLanguage> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2911);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit__light_ffi_base___TString___without_quotes(var13);
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base#AExternCodeBlock#language_name_lowered for (self: AExternCodeBlock): nullable String */
val* nit__light_ffi_base___AExternCodeBlock___language_name_lowered(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable String */;
val* var5 /* : String */;
{
var1 = nit__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable String>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = nit__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 96);
fatal_exit(1);
} else {
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__String__to_lower]))(var4); /* to_lower on <var4:nullable String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base#AExternCodeBlock#code for (self: AExternCodeBlock): String */
val* nit__light_ffi_base___AExternCodeBlock___code(val* self) {
val* var /* : String */;
val* var1 /* : TExternCodeSegment */;
val* var3 /* : TExternCodeSegment */;
val* var4 /* : String */;
{
{ /* Inline parser_nodes#AExternCodeBlock#n_extern_code_segment (self) on <self:AExternCodeBlock> */
var3 = self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2922);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__light_ffi_base___TExternCodeSegment___without_guard(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base#AExternCodeBlock#language for (self: AExternCodeBlock): nullable FFILanguage */
val* nit__light_ffi_base___AExternCodeBlock___language(val* self) {
val* var /* : nullable FFILanguage */;
val* var1 /* : nullable FFILanguage */;
var1 = self->attrs[COLOR_nit__light_ffi_base__AExternCodeBlock___language].val; /* _language on <self:AExternCodeBlock> */
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base#AExternCodeBlock#language= for (self: AExternCodeBlock, nullable FFILanguage) */
void nit__light_ffi_base___AExternCodeBlock___language_61d(val* self, val* p0) {
self->attrs[COLOR_nit__light_ffi_base__AExternCodeBlock___language].val = p0; /* _language on <self:AExternCodeBlock> */
RET_LABEL:;
}
/* method light_ffi_base#FFILanguage#ffi_language_assignation_phase for (self: FFILanguage): FFILanguageAssignationPhase */
val* nit___nit__FFILanguage___ffi_language_assignation_phase(val* self) {
val* var /* : FFILanguageAssignationPhase */;
val* var1 /* : FFILanguageAssignationPhase */;
var1 = self->attrs[COLOR_nit__light_ffi_base__FFILanguage___ffi_language_assignation_phase].val; /* _ffi_language_assignation_phase on <self:FFILanguage> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_language_assignation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 109);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base#FFILanguage#ffi_language_assignation_phase= for (self: FFILanguage, FFILanguageAssignationPhase) */
void nit___nit__FFILanguage___ffi_language_assignation_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__light_ffi_base__FFILanguage___ffi_language_assignation_phase].val = p0; /* _ffi_language_assignation_phase on <self:FFILanguage> */
RET_LABEL:;
}
/* method light_ffi_base#FFILanguage#init for (self: FFILanguage) */
void nit___nit__FFILanguage___standard__kernel__Object__init(val* self) {
val* var /* : FFILanguageAssignationPhase */;
val* var2 /* : FFILanguageAssignationPhase */;
val* var3 /* : Array[FFILanguage] */;
val* var5 /* : Array[FFILanguage] */;
{
{ /* Inline light_ffi_base#FFILanguage#ffi_language_assignation_phase (self) on <self:FFILanguage> */
var2 = self->attrs[COLOR_nit__light_ffi_base__FFILanguage___ffi_language_assignation_phase].val; /* _ffi_language_assignation_phase on <self:FFILanguage> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_language_assignation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 109);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline light_ffi_base#FFILanguageAssignationPhase#languages (var) on <var:FFILanguageAssignationPhase> */
var5 = var->attrs[COLOR_nit__light_ffi_base__FFILanguageAssignationPhase___languages].val; /* _languages on <var:FFILanguageAssignationPhase> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 36);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[FFILanguage]>*/
}
RET_LABEL:;
}
/* method light_ffi_base#TString#without_quotes for (self: TString): String */
val* nit__light_ffi_base___TString___without_quotes(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : String */;
val* var8 /* : String */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
val* var17 /* : Text */;
{
var1 = nit__lexer_work___Token___text(self);
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel#Int#>= (var2,2l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var5 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var6 = var2 >= 2l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 142);
fatal_exit(1);
}
{
var7 = nit__lexer_work___Token___text(self);
}
{
var8 = nit__lexer_work___Token___text(self);
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_standard__string__Text__length]))(var8); /* length on <var8:String>*/
}
{
{ /* Inline kernel#Int#- (var9,2l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var12 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var16 = var9 - 2l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var17 = ((val*(*)(val* self, long p0, long p1))(var7->class->vft[COLOR_standard__string__Text__substring]))(var7, 1l, var10); /* substring on <var7:String>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base#TExternCodeSegment#without_guard for (self: TExternCodeSegment): String */
val* nit__light_ffi_base___TExternCodeSegment___without_guard(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : String */;
val* var8 /* : String */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
val* var17 /* : Text */;
{
var1 = nit__lexer_work___Token___text(self);
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_standard__string__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel#Int#>= (var2,4l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var5 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var6 = var2 >= 4l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 151);
fatal_exit(1);
}
{
var7 = nit__lexer_work___Token___text(self);
}
{
var8 = nit__lexer_work___Token___text(self);
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_standard__string__Text__length]))(var8); /* length on <var8:String>*/
}
{
{ /* Inline kernel#Int#- (var9,4l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var12 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var16 = var9 - 4l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var17 = ((val*(*)(val* self, long p0, long p1))(var7->class->vft[COLOR_standard__string__Text__substring]))(var7, 2l, var10); /* substring on <var7:String>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base#CCompilationUnit#write_as_impl for (self: CCompilationUnit, MModule, String) */
void nit__light_ffi_base___CCompilationUnit___write_as_impl(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_base_name /* var base_name: String */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
val* var_h_file /* var h_file: String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_guard /* var guard: String */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
val* var30 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
val* var41 /* : String */;
val* var_c_file /* var c_file: String */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
val* var48 /* : String */;
val* var49 /* : Array[String] */;
val* var_50 /* var : Array[String] */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var73 /* : String */;
val* var74 /* : Array[String] */;
val* var76 /* : Array[String] */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
val* var83 /* : String */;
var_mmodule = p0;
var_compdir = p1;
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "._ffi";
var4 = standard___standard__NativeString___to_s_with_length(var3, 5l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[1]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var5 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_mmodule);
}
((struct instance_standard__NativeArray*)var)->values[0]=var5;
{
var6 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
var_base_name = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ".h";
var12 = standard___standard__NativeString___to_s_with_length(var11, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[1]=var10;
} else {
var8 = varonce7;
varonce7 = NULL;
}
((struct instance_standard__NativeArray*)var8)->values[0]=var_base_name;
{
var13 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
var_h_file = var13;
if (unlikely(varonce14==NULL)) {
var15 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "_NIT_H";
var19 = standard___standard__NativeString___to_s_with_length(var18, 6l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[1]=var17;
} else {
var15 = varonce14;
varonce14 = NULL;
}
{
var20 = nit___nit__MModule___nit__model_base__MEntity__c_name(var_mmodule);
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__String__to_upper]))(var20); /* to_upper on <var20:String>*/
}
((struct instance_standard__NativeArray*)var15)->values[0]=var21;
{
var22 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
var_guard = var22;
if (unlikely(varonce23==NULL)) {
var24 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "/";
var28 = standard___standard__NativeString___to_s_with_length(var27, 1l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[1]=var26;
} else {
var24 = varonce23;
varonce23 = NULL;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var_compdir;
((struct instance_standard__NativeArray*)var24)->values[2]=var_h_file;
{
var29 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
var30 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___with_capacity(var30, 1l); /* Direct call array#Array#with_capacity on <var30:Array[String]>*/
}
var_ = var30;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "<stdint.h>";
var34 = standard___standard__NativeString___to_s_with_length(var33, 10l);
var32 = var34;
varonce31 = var32;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var32); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
nit__light_ffi_base___CCompilationUnit___write_header_to_file(self, var_mmodule, var29, var_, var_guard); /* Direct call light_ffi_base#CCompilationUnit#write_header_to_file on <self:CCompilationUnit>*/
}
if (unlikely(varonce35==NULL)) {
var36 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = ".c";
var40 = standard___standard__NativeString___to_s_with_length(var39, 2l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[1]=var38;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_standard__NativeArray*)var36)->values[0]=var_base_name;
{
var41 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
var_c_file = var41;
if (unlikely(varonce42==NULL)) {
var43 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "/";
var47 = standard___standard__NativeString___to_s_with_length(var46, 1l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var43)->values[1]=var45;
} else {
var43 = varonce42;
varonce42 = NULL;
}
((struct instance_standard__NativeArray*)var43)->values[0]=var_compdir;
((struct instance_standard__NativeArray*)var43)->values[2]=var_c_file;
{
var48 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
var49 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___with_capacity(var49, 4l); /* Direct call array#Array#with_capacity on <var49:Array[String]>*/
}
var_50 = var49;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "<stdlib.h>";
var54 = standard___standard__NativeString___to_s_with_length(var53, 10l);
var52 = var54;
varonce51 = var52;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_50, var52); /* Direct call array#AbstractArray#push on <var_50:Array[String]>*/
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "<stdio.h>";
var58 = standard___standard__NativeString___to_s_with_length(var57, 9l);
var56 = var58;
varonce55 = var56;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_50, var56); /* Direct call array#AbstractArray#push on <var_50:Array[String]>*/
}
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "<stdint.h>";
var62 = standard___standard__NativeString___to_s_with_length(var61, 10l);
var60 = var62;
varonce59 = var60;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_50, var60); /* Direct call array#AbstractArray#push on <var_50:Array[String]>*/
}
if (unlikely(varonce63==NULL)) {
var64 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "\"";
var68 = standard___standard__NativeString___to_s_with_length(var67, 1l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var64)->values[0]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "\"";
var72 = standard___standard__NativeString___to_s_with_length(var71, 1l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var64)->values[2]=var70;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_standard__NativeArray*)var64)->values[1]=var_h_file;
{
var73 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_50, var73); /* Direct call array#AbstractArray#push on <var_50:Array[String]>*/
}
{
nit__light_ffi_base___CCompilationUnit___write_body_to_file(self, var_mmodule, var48, var_50); /* Direct call light_ffi_base#CCompilationUnit#write_body_to_file on <self:CCompilationUnit>*/
}
{
{ /* Inline c_tools#CCompilationUnit#files (self) on <self:CCompilationUnit> */
var76 = self->attrs[COLOR_nit__c_tools__CCompilationUnit___files].val; /* _files on <self:CCompilationUnit> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__c_tools, 47);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (unlikely(varonce77==NULL)) {
var78 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "/";
var82 = standard___standard__NativeString___to_s_with_length(var81, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var78)->values[1]=var80;
} else {
var78 = varonce77;
varonce77 = NULL;
}
((struct instance_standard__NativeArray*)var78)->values[0]=var_compdir;
((struct instance_standard__NativeArray*)var78)->values[2]=var_c_file;
{
var83 = ((val*(*)(val* self))(var78->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var74, var83); /* Direct call array#Array#add on <var74:Array[String]>*/
}
RET_LABEL:;
}
/* method light_ffi_base#CCompilationUnit#write_header_to_file for (self: CCompilationUnit, MModule, String, Array[String], String) */
void nit__light_ffi_base___CCompilationUnit___write_header_to_file(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_mmodule /* var mmodule: MModule */;
val* var_file /* var file: String */;
val* var_includes /* var includes: Array[String] */;
val* var_guard /* var guard: String */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_module_info /* var module_info: String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : String */;
val* var_ /* var : Array[String] */;
val* var36 /* : ArrayIterator[nullable Object] */;
val* var_37 /* var : ArrayIterator[String] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_incl /* var incl: String */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
var_mmodule = p0;
var_file = p1;
var_includes = p2;
var_guard = p3;
var = NEW_standard__FileWriter(&type_standard__FileWriter);
{
standard___standard__FileWriter___open(var, var_file); /* Direct call file#FileWriter#open on <var:FileWriter>*/
}
var_stream = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/*\n\tExtern implementation of Nit module ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 40l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\n*/\n";
var9 = standard___standard__NativeString___to_s_with_length(var8, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:MModule> */
var12 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_mmodule:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var13 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_module_info = var13;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var_module_info); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (unlikely(varonce14==NULL)) {
var15 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "#ifndef ";
var19 = standard___standard__NativeString___to_s_with_length(var18, 8l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "\n";
var23 = standard___standard__NativeString___to_s_with_length(var22, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce14;
varonce14 = NULL;
}
((struct instance_standard__NativeArray*)var15)->values[1]=var_guard;
{
var24 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var24); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (unlikely(varonce25==NULL)) {
var26 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "#define ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 8l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "\n\n";
var34 = standard___standard__NativeString___to_s_with_length(var33, 2l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var26)->values[2]=var32;
} else {
var26 = varonce25;
varonce25 = NULL;
}
((struct instance_standard__NativeArray*)var26)->values[1]=var_guard;
{
var35 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var35); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
var_ = var_includes;
{
var36 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_37 = var36;
for(;;) {
{
var38 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_37);
}
if (var38){
{
var39 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_37);
}
var_incl = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "#include ";
var45 = standard___standard__NativeString___to_s_with_length(var44, 9l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "\n";
var49 = standard___standard__NativeString___to_s_with_length(var48, 1l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[2]=var47;
} else {
var41 = varonce40;
varonce40 = NULL;
}
((struct instance_standard__NativeArray*)var41)->values[1]=var_incl;
{
var50 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var50); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_37); /* Direct call array#ArrayIterator#next on <var_37:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_37); /* Direct call array#ArrayIterator#finish on <var_37:ArrayIterator[String]>*/
}
{
nit___nit__CCompilationUnit___compile_header_core(self, var_stream); /* Direct call c_tools#CCompilationUnit#compile_header_core on <self:CCompilationUnit>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "#endif\n";
var54 = standard___standard__NativeString___to_s_with_length(var53, 7l);
var52 = var54;
varonce51 = var52;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var52); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_stream); /* Direct call file#FileWriter#close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method light_ffi_base#CCompilationUnit#write_body_to_file for (self: CCompilationUnit, MModule, String, Array[String]) */
void nit__light_ffi_base___CCompilationUnit___write_body_to_file(val* self, val* p0, val* p1, val* p2) {
val* var_mmodule /* var mmodule: MModule */;
val* var_file /* var file: String */;
val* var_includes /* var includes: Array[String] */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_module_info /* var module_info: String */;
val* var_ /* var : Array[String] */;
val* var14 /* : ArrayIterator[nullable Object] */;
val* var_15 /* var : ArrayIterator[String] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_incl /* var incl: String */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
var_mmodule = p0;
var_file = p1;
var_includes = p2;
var = NEW_standard__FileWriter(&type_standard__FileWriter);
{
standard___standard__FileWriter___open(var, var_file); /* Direct call file#FileWriter#open on <var:FileWriter>*/
}
var_stream = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/*\n\tExtern implementation of Nit module ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 40l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\n*/\n";
var9 = standard___standard__NativeString___to_s_with_length(var8, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:MModule> */
var12 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var_mmodule:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var13 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_module_info = var13;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var_module_info); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
var_ = var_includes;
{
var14 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_15);
}
if (var16){
{
var17 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_15);
}
var_incl = var17;
if (unlikely(varonce18==NULL)) {
var19 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "#include ";
var23 = standard___standard__NativeString___to_s_with_length(var22, 9l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "\n";
var27 = standard___standard__NativeString___to_s_with_length(var26, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var19)->values[2]=var25;
} else {
var19 = varonce18;
varonce18 = NULL;
}
((struct instance_standard__NativeArray*)var19)->values[1]=var_incl;
{
var28 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var28); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_15); /* Direct call array#ArrayIterator#next on <var_15:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_15); /* Direct call array#ArrayIterator#finish on <var_15:ArrayIterator[String]>*/
}
{
nit___nit__CCompilationUnit___compile_body_core(self, var_stream); /* Direct call c_tools#CCompilationUnit#compile_body_core on <self:CCompilationUnit>*/
}
{
standard___standard__FileWriter___standard__stream__Stream__close(var_stream); /* Direct call file#FileWriter#close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method light_ffi_base#ForeignType#ctype for (self: ForeignType): String */
val* nit___nit__ForeignType___ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "void*";
var3 = standard___standard__NativeString___to_s_with_length(var2, 5l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
