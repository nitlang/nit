#include "nitc__light_ffi_base.sep.0.h"
/* method light_ffi_base$ToolContext$ffi_language_assignation_phase for (self: ToolContext): Phase */
val* nitc__light_ffi_base___ToolContext___ffi_language_assignation_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__light_ffi_base__ToolContext___ffi_language_assignation_phase].val; /* _ffi_language_assignation_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_language_assignation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base$FFILanguageAssignationPhase$languages for (self: FFILanguageAssignationPhase): Array[FFILanguage] */
val* nitc___nitc__FFILanguageAssignationPhase___languages(val* self) {
val* var /* : Array[FFILanguage] */;
val* var1 /* : Array[FFILanguage] */;
var1 = self->attrs[COLOR_nitc__light_ffi_base__FFILanguageAssignationPhase___languages].val; /* _languages on <self:FFILanguageAssignationPhase> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base$FFILanguageAssignationPhase$process_nmodule for (self: FFILanguageAssignationPhase, AModule) */
void nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
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
{ /* Inline parser_nodes$AModule$n_extern_code_blocks (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1122);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExternCodeBlock]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExternCodeBlock]>*/
}
var_block = var6;
{
nitc___nitc__FFILanguageAssignationPhase___verify_foreign_code_on_node(self, var_block); /* Direct call light_ffi_base$FFILanguageAssignationPhase$verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExternCodeBlock]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExternCodeBlock]>*/
}
RET_LABEL:;
}
/* method light_ffi_base$FFILanguageAssignationPhase$process_npropdef for (self: FFILanguageAssignationPhase, APropdef) */
void nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
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
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline parser_nodes$AMethPropdef$n_extern_code_block (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var3 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <var_npropdef:APropdef(AMethPropdef)> */
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
{ /* Inline kernel$Object$!= (var_code_block,((val*)NULL)) on <var_code_block:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_code_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_code_block, var_other); /* == on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/
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
nitc___nitc__FFILanguageAssignationPhase___verify_foreign_code_on_node(self, var_code_block); /* Direct call light_ffi_base$FFILanguageAssignationPhase$verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method light_ffi_base$FFILanguageAssignationPhase$process_nclassdef for (self: FFILanguageAssignationPhase, AClassdef) */
void nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_nclassdef(val* self, val* p0) {
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
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var1 = 0;
} else {
var1 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
{
{ /* Inline parser_nodes$AStdClassdef$n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var4 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
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
{ /* Inline kernel$Object$!= (var2,((val*)NULL)) on <var2:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable AExternCodeBlock(AExternCodeBlock)>*/
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
{ /* Inline parser_nodes$AStdClassdef$n_extern_code_block (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var12 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 59);
fatal_exit(1);
}
{
nitc___nitc__FFILanguageAssignationPhase___verify_foreign_code_on_node(self, var10); /* Direct call light_ffi_base$FFILanguageAssignationPhase$verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/
}
} else {
}
RET_LABEL:;
}
/* method light_ffi_base$FFILanguageAssignationPhase$verify_foreign_code_on_node for (self: FFILanguageAssignationPhase, AExternCodeBlock) */
void nitc___nitc__FFILanguageAssignationPhase___verify_foreign_code_on_node(val* self, val* p0) {
val* var_n /* var n: AExternCodeBlock */;
short int var_found /* var found: Bool */;
val* var /* : Array[FFILanguage] */;
val* var2 /* : Array[FFILanguage] */;
val* var_ /* var : Array[FFILanguage] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[FFILanguage] */;
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
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : Message */;
short int var25 /* : Bool */;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
val* var29 /* : Location */;
val* var31 /* : Location */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : Message */;
var_n = p0;
var_found = 0;
{
{ /* Inline light_ffi_base$FFILanguageAssignationPhase$languages (self) on <self:FFILanguageAssignationPhase> */
var2 = self->attrs[COLOR_nitc__light_ffi_base__FFILanguageAssignationPhase___languages].val; /* _languages on <self:FFILanguageAssignationPhase> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 36);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[FFILanguage]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[FFILanguage]>*/
}
var_v = var6;
{
var7 = nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__identify_language(var_v, var_n);
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
{ /* Inline phase$Phase$toolcontext (self) on <self:FFILanguageAssignationPhase> */
var12 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:FFILanguageAssignationPhase> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_n) on <var_n:AExternCodeBlock> */
var15 = var_n->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_n:AExternCodeBlock> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
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
var19 = (val*)(57l<<2|1);
var20 = (val*)(57l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce = var16;
}
{
var23 = nitc___nitc__ToolContext___error(var10, var13, var16);
}
} else {
}
{
{ /* Inline light_ffi_base$AExternCodeBlock$language= (var_n,var_v) on <var_n:AExternCodeBlock> */
var_n->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val = var_v; /* _language on <var_n:AExternCodeBlock> */
RET_LABEL24:(void)0;
}
}
var_found = 1;
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[FFILanguage]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[FFILanguage]>*/
}
var25 = !var_found;
if (var25){
{
{ /* Inline phase$Phase$toolcontext (self) on <self:FFILanguageAssignationPhase> */
var28 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:FFILanguageAssignationPhase> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_n) on <var_n:AExternCodeBlock> */
var31 = var_n->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_n:AExternCodeBlock> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "FFI Error: unsupported language.";
var36 = (val*)(32l<<2|1);
var37 = (val*)(32l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
{
var40 = nitc___nitc__ToolContext___error(var26, var29, var33);
}
} else {
}
RET_LABEL:;
}
/* method light_ffi_base$MModule$ffi_files for (self: MModule): Array[ExternFile] */
val* nitc__light_ffi_base___MModule___ffi_files(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <self:MModule> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base$AExternCodeBlock$language_name for (self: AExternCodeBlock): nullable String */
val* nitc__light_ffi_base___AExternCodeBlock___language_name(val* self) {
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
{ /* Inline parser_nodes$AExternCodeBlock$n_in_language (self) on <self:AExternCodeBlock> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
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
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable AInLanguage> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable AInLanguage(AInLanguage)> */
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
{ /* Inline parser_nodes$AExternCodeBlock$n_in_language (self) on <self:AExternCodeBlock> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 90);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$AInLanguage$n_string (var10) on <var10:nullable AInLanguage> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2930);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nitc__parser_nodes__AInLanguage___n_string].val; /* _n_string on <var10:nullable AInLanguage> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2930);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__light_ffi_base___TString___without_quotes(var13);
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base$AExternCodeBlock$language_name_lowered for (self: AExternCodeBlock): nullable String */
val* nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable String */;
val* var5 /* : Text */;
{
var1 = nitc__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable String>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = nitc__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var4 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 96);
fatal_exit(1);
} else {
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__to_lower]))(var4); /* to_lower on <var4:nullable String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base$AExternCodeBlock$code for (self: AExternCodeBlock): String */
val* nitc__light_ffi_base___AExternCodeBlock___code(val* self) {
val* var /* : String */;
val* var1 /* : TExternCodeSegment */;
val* var3 /* : TExternCodeSegment */;
val* var4 /* : String */;
{
{ /* Inline parser_nodes$AExternCodeBlock$n_extern_code_segment (self) on <self:AExternCodeBlock> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2941);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__light_ffi_base___TExternCodeSegment___without_guard(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base$AExternCodeBlock$language for (self: AExternCodeBlock): nullable FFILanguage */
val* nitc__light_ffi_base___AExternCodeBlock___language(val* self) {
val* var /* : nullable FFILanguage */;
val* var1 /* : nullable FFILanguage */;
var1 = self->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <self:AExternCodeBlock> */
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base$AExternCodeBlock$language= for (self: AExternCodeBlock, nullable FFILanguage) */
void nitc__light_ffi_base___AExternCodeBlock___language_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val = p0; /* _language on <self:AExternCodeBlock> */
RET_LABEL:;
}
/* method light_ffi_base$FFILanguage$ffi_language_assignation_phase for (self: FFILanguage): FFILanguageAssignationPhase */
val* nitc___nitc__FFILanguage___ffi_language_assignation_phase(val* self) {
val* var /* : FFILanguageAssignationPhase */;
val* var1 /* : FFILanguageAssignationPhase */;
var1 = self->attrs[COLOR_nitc__light_ffi_base__FFILanguage___ffi_language_assignation_phase].val; /* _ffi_language_assignation_phase on <self:FFILanguage> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_language_assignation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 109);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method light_ffi_base$FFILanguage$ffi_language_assignation_phase= for (self: FFILanguage, FFILanguageAssignationPhase) */
void nitc___nitc__FFILanguage___ffi_language_assignation_phase_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__light_ffi_base__FFILanguage___ffi_language_assignation_phase].val = p0; /* _ffi_language_assignation_phase on <self:FFILanguage> */
RET_LABEL:;
}
/* method light_ffi_base$FFILanguage$init for (self: FFILanguage) */
void nitc___nitc__FFILanguage___core__kernel__Object__init(val* self) {
val* var /* : FFILanguageAssignationPhase */;
val* var2 /* : FFILanguageAssignationPhase */;
val* var3 /* : Array[FFILanguage] */;
val* var5 /* : Array[FFILanguage] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__FFILanguage___core__kernel__Object__init]))(self); /* init on <self:FFILanguage>*/
}
{
{ /* Inline light_ffi_base$FFILanguage$ffi_language_assignation_phase (self) on <self:FFILanguage> */
var2 = self->attrs[COLOR_nitc__light_ffi_base__FFILanguage___ffi_language_assignation_phase].val; /* _ffi_language_assignation_phase on <self:FFILanguage> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_language_assignation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 109);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline light_ffi_base$FFILanguageAssignationPhase$languages (var) on <var:FFILanguageAssignationPhase> */
var5 = var->attrs[COLOR_nitc__light_ffi_base__FFILanguageAssignationPhase___languages].val; /* _languages on <var:FFILanguageAssignationPhase> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 36);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array$Array$add on <var3:Array[FFILanguage]>*/
}
RET_LABEL:;
}
/* method light_ffi_base$TString$without_quotes for (self: TString): String */
val* nitc__light_ffi_base___TString___without_quotes(val* self) {
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
var1 = nitc__lexer_work___Token___text(self);
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel$Int$>= (var2,2l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var5 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var6 = var2 >= 2l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 142);
fatal_exit(1);
}
{
var7 = nitc__lexer_work___Token___text(self);
}
{
var8 = nitc__lexer_work___Token___text(self);
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__Text__length]))(var8); /* length on <var8:String>*/
}
{
{ /* Inline kernel$Int$- (var9,2l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var12 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var16 = var9 - 2l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var17 = ((val*(*)(val* self, long p0, long p1))(var7->class->vft[COLOR_core__abstract_text__Text__substring]))(var7, 1l, var10); /* substring on <var7:String>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base$TExternCodeSegment$without_guard for (self: TExternCodeSegment): String */
val* nitc__light_ffi_base___TExternCodeSegment___without_guard(val* self) {
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
var1 = nitc__lexer_work___Token___text(self);
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel$Int$>= (var2,4l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var5 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var6 = var2 >= 4l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 151);
fatal_exit(1);
}
{
var7 = nitc__lexer_work___Token___text(self);
}
{
var8 = nitc__lexer_work___Token___text(self);
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__Text__length]))(var8); /* length on <var8:String>*/
}
{
{ /* Inline kernel$Int$- (var9,4l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var12 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var16 = var9 - 4l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var17 = ((val*(*)(val* self, long p0, long p1))(var7->class->vft[COLOR_core__abstract_text__Text__substring]))(var7, 2l, var10); /* substring on <var7:String>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method light_ffi_base$CCompilationUnit$write_as_impl for (self: CCompilationUnit, MModule, String) */
void nitc__light_ffi_base___CCompilationUnit___write_as_impl(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_base_name /* var base_name: String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var_h_file /* var h_file: String */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : String */;
val* var33 /* : Text */;
val* var34 /* : String */;
val* var_guard /* var guard: String */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
val* var45 /* : String */;
val* var46 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
val* var65 /* : String */;
val* var_c_file /* var c_file: String */;
val* var67 /* : NativeArray[String] */;
static val* varonce66;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
val* var76 /* : String */;
val* var77 /* : Array[String] */;
val* var_78 /* var : Array[String] */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable Bool */;
val* var121 /* : String */;
val* var122 /* : Array[String] */;
val* var124 /* : Array[String] */;
val* var126 /* : NativeArray[String] */;
static val* varonce125;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
val* var135 /* : String */;
var_mmodule = p0;
var_compdir = p1;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "._ffi";
var5 = (val*)(5l<<2|1);
var6 = (val*)(5l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[1]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var9 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
((struct instance_core__NativeArray*)var)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
var_base_name = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ".h";
var17 = (val*)(2l<<2|1);
var18 = (val*)(2l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[1]=var14;
} else {
var12 = varonce11;
varonce11 = NULL;
}
((struct instance_core__NativeArray*)var12)->values[0]=var_base_name;
{
var21 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
var_h_file = var21;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "_NIT_H";
var28 = (val*)(6l<<2|1);
var29 = (val*)(6l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[1]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var32 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
{
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var32); /* to_upper on <var32:String>*/
}
((struct instance_core__NativeArray*)var23)->values[0]=var33;
{
var34 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
var_guard = var34;
if (unlikely(varonce35==NULL)) {
var36 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "/";
var41 = (val*)(1l<<2|1);
var42 = (val*)(1l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[1]=var38;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_core__NativeArray*)var36)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var36)->values[2]=var_h_file;
{
var45 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
var46 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var46, 1l); /* Direct call array$Array$with_capacity on <var46:Array[String]>*/
}
var_ = var46;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "<stdint.h>";
var51 = (val*)(10l<<2|1);
var52 = (val*)(10l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var48); /* Direct call array$AbstractArray$push on <var_:Array[String]>*/
}
{
nitc__light_ffi_base___CCompilationUnit___write_header_to_file(self, var_mmodule, var45, var_, var_guard); /* Direct call light_ffi_base$CCompilationUnit$write_header_to_file on <self:CCompilationUnit>*/
}
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = ".c";
var61 = (val*)(2l<<2|1);
var62 = (val*)(2l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[1]=var58;
} else {
var56 = varonce55;
varonce55 = NULL;
}
((struct instance_core__NativeArray*)var56)->values[0]=var_base_name;
{
var65 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
var_c_file = var65;
if (unlikely(varonce66==NULL)) {
var67 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "/";
var72 = (val*)(1l<<2|1);
var73 = (val*)(1l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var67)->values[1]=var69;
} else {
var67 = varonce66;
varonce66 = NULL;
}
((struct instance_core__NativeArray*)var67)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var67)->values[2]=var_c_file;
{
var76 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce66 = var67;
var77 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var77, 4l); /* Direct call array$Array$with_capacity on <var77:Array[String]>*/
}
var_78 = var77;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "<stdlib.h>";
var83 = (val*)(10l<<2|1);
var84 = (val*)(10l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_78, var80); /* Direct call array$AbstractArray$push on <var_78:Array[String]>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "<stdio.h>";
var91 = (val*)(9l<<2|1);
var92 = (val*)(9l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_78, var88); /* Direct call array$AbstractArray$push on <var_78:Array[String]>*/
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "<stdint.h>";
var99 = (val*)(10l<<2|1);
var100 = (val*)(10l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_78, var96); /* Direct call array$AbstractArray$push on <var_78:Array[String]>*/
}
if (unlikely(varonce103==NULL)) {
var104 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "\"";
var109 = (val*)(1l<<2|1);
var110 = (val*)(1l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var104)->values[0]=var106;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "\"";
var117 = (val*)(1l<<2|1);
var118 = (val*)(1l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var104)->values[2]=var114;
} else {
var104 = varonce103;
varonce103 = NULL;
}
((struct instance_core__NativeArray*)var104)->values[1]=var_h_file;
{
var121 = ((val*(*)(val* self))(var104->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_78, var121); /* Direct call array$AbstractArray$push on <var_78:Array[String]>*/
}
{
nitc__light_ffi_base___CCompilationUnit___write_body_to_file(self, var_mmodule, var76, var_78); /* Direct call light_ffi_base$CCompilationUnit$write_body_to_file on <self:CCompilationUnit>*/
}
{
{ /* Inline c_tools$CCompilationUnit$files (self) on <self:CCompilationUnit> */
var124 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <self:CCompilationUnit> */
if (unlikely(var124 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
if (unlikely(varonce125==NULL)) {
var126 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "/";
var131 = (val*)(1l<<2|1);
var132 = (val*)(1l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var126)->values[1]=var128;
} else {
var126 = varonce125;
varonce125 = NULL;
}
((struct instance_core__NativeArray*)var126)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var126)->values[2]=var_c_file;
{
var135 = ((val*(*)(val* self))(var126->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce125 = var126;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var122, var135); /* Direct call array$Array$add on <var122:Array[String]>*/
}
RET_LABEL:;
}
/* method light_ffi_base$CCompilationUnit$write_header_to_file for (self: CCompilationUnit, MModule, String, Array[String], String) */
void nitc__light_ffi_base___CCompilationUnit___write_header_to_file(val* self, val* p0, val* p1, val* p2, val* p3) {
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
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var_module_info /* var module_info: String */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : String */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
val* var_ /* var : Array[String] */;
val* var60 /* : IndexedIterator[nullable Object] */;
val* var_61 /* var : IndexedIterator[String] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_incl /* var incl: String */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
var_mmodule = p0;
var_file = p1;
var_includes = p2;
var_guard = p3;
var = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var, var_file); /* Direct call file$FileWriter$open on <var:FileWriter>*/
}
var_stream = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/*\n\tExtern implementation of Nit module ";
var6 = (val*)(40l<<2|1);
var7 = (val*)(40l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\n*/\n";
var14 = (val*)(4l<<2|1);
var15 = (val*)(4l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline mmodule$MModule$name (var_mmodule) on <var_mmodule:MModule> */
var20 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:MModule> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
((struct instance_core__NativeArray*)var1)->values[1]=var18;
{
var21 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_module_info = var21;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var_module_info); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "#ifndef ";
var28 = (val*)(8l<<2|1);
var29 = (val*)(8l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "\n";
var36 = (val*)(1l<<2|1);
var37 = (val*)(1l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var23)->values[2]=var33;
} else {
var23 = varonce22;
varonce22 = NULL;
}
((struct instance_core__NativeArray*)var23)->values[1]=var_guard;
{
var40 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var40); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "#define ";
var47 = (val*)(8l<<2|1);
var48 = (val*)(8l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "\n\n";
var55 = (val*)(2l<<2|1);
var56 = (val*)(2l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var42)->values[2]=var52;
} else {
var42 = varonce41;
varonce41 = NULL;
}
((struct instance_core__NativeArray*)var42)->values[1]=var_guard;
{
var59 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var59); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
var_ = var_includes;
{
var60 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_61 = var60;
for(;;) {
{
var62 = ((short int(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_61); /* is_ok on <var_61:IndexedIterator[String]>*/
}
if (var62){
} else {
goto BREAK_label;
}
{
var63 = ((val*(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_61); /* item on <var_61:IndexedIterator[String]>*/
}
var_incl = var63;
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "#include ";
var70 = (val*)(9l<<2|1);
var71 = (val*)(9l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[0]=var67;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "\n";
var78 = (val*)(1l<<2|1);
var79 = (val*)(1l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var65)->values[2]=var75;
} else {
var65 = varonce64;
varonce64 = NULL;
}
((struct instance_core__NativeArray*)var65)->values[1]=var_incl;
{
var82 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var82); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_61); /* next on <var_61:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_61); /* finish on <var_61:IndexedIterator[String]>*/
}
{
nitc___nitc__CCompilationUnit___compile_header_core(self, var_stream); /* Direct call c_tools$CCompilationUnit$compile_header_core on <self:CCompilationUnit>*/
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "#endif\n";
var87 = (val*)(7l<<2|1);
var88 = (val*)(7l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var84); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_stream); /* Direct call file$FileWriter$close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method light_ffi_base$CCompilationUnit$write_body_to_file for (self: CCompilationUnit, MModule, String, Array[String]) */
void nitc__light_ffi_base___CCompilationUnit___write_body_to_file(val* self, val* p0, val* p1, val* p2) {
val* var_mmodule /* var mmodule: MModule */;
val* var_file /* var file: String */;
val* var_includes /* var includes: Array[String] */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var_module_info /* var module_info: String */;
val* var_ /* var : Array[String] */;
val* var22 /* : IndexedIterator[nullable Object] */;
val* var_23 /* var : IndexedIterator[String] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_incl /* var incl: String */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
val* var44 /* : String */;
var_mmodule = p0;
var_file = p1;
var_includes = p2;
var = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var, var_file); /* Direct call file$FileWriter$open on <var:FileWriter>*/
}
var_stream = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/*\n\tExtern implementation of Nit module ";
var6 = (val*)(40l<<2|1);
var7 = (val*)(40l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\n*/\n";
var14 = (val*)(4l<<2|1);
var15 = (val*)(4l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline mmodule$MModule$name (var_mmodule) on <var_mmodule:MModule> */
var20 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:MModule> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
((struct instance_core__NativeArray*)var1)->values[1]=var18;
{
var21 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_module_info = var21;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var_module_info); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
var_ = var_includes;
{
var22 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:IndexedIterator[String]>*/
}
if (var24){
} else {
goto BREAK_label;
}
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:IndexedIterator[String]>*/
}
var_incl = var25;
if (unlikely(varonce26==NULL)) {
var27 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "#include ";
var32 = (val*)(9l<<2|1);
var33 = (val*)(9l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "\n";
var40 = (val*)(1l<<2|1);
var41 = (val*)(1l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var27)->values[2]=var37;
} else {
var27 = varonce26;
varonce26 = NULL;
}
((struct instance_core__NativeArray*)var27)->values[1]=var_incl;
{
var44 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var44); /* Direct call file$FileWriter$write on <var_stream:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:IndexedIterator[String]>*/
}
{
nitc___nitc__CCompilationUnit___compile_body_core(self, var_stream); /* Direct call c_tools$CCompilationUnit$compile_body_core on <self:CCompilationUnit>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_stream); /* Direct call file$FileWriter$close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method light_ffi_base$ForeignType$ctype for (self: ForeignType): String */
val* nitc___nitc__ForeignType___ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "void*";
var4 = (val*)(5l<<2|1);
var5 = (val*)(5l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
