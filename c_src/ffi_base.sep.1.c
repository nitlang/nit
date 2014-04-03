#include "ffi_base.sep.0.h"
/* method ffi_base#ToolContext#ffi_language_assignation_phase for (self: ToolContext): Phase */
val* ffi_base__ToolContext__ffi_language_assignation_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_ffi_base__ToolContext___64dffi_language_assignation_phase].val; /* @ffi_language_assignation_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @ffi_language_assignation_phase");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#ToolContext#ffi_language_assignation_phase for (self: Object): Phase */
val* VIRTUAL_ffi_base__ToolContext__ffi_language_assignation_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = ffi_base__ToolContext__ffi_language_assignation_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#ToolContext#ffi_language_assignation_phase= for (self: ToolContext, Phase) */
void ffi_base__ToolContext__ffi_language_assignation_phase_61d(val* self, val* p0) {
self->attrs[COLOR_ffi_base__ToolContext___64dffi_language_assignation_phase].val = p0; /* @ffi_language_assignation_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method ffi_base#ToolContext#ffi_language_assignation_phase= for (self: Object, Phase) */
void VIRTUAL_ffi_base__ToolContext__ffi_language_assignation_phase_61d(val* self, val* p0) {
ffi_base__ToolContext__ffi_language_assignation_phase_61d(self, p0);
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#languages for (self: FFILanguageAssignationPhase): Array[FFILanguage] */
val* ffi_base__FFILanguageAssignationPhase__languages(val* self) {
val* var /* : Array[FFILanguage] */;
val* var1 /* : Array[FFILanguage] */;
var1 = self->attrs[COLOR_ffi_base__FFILanguageAssignationPhase___64dlanguages].val; /* @languages on <self:FFILanguageAssignationPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @languages");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 32);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#FFILanguageAssignationPhase#languages for (self: Object): Array[FFILanguage] */
val* VIRTUAL_ffi_base__FFILanguageAssignationPhase__languages(val* self) {
val* var /* : Array[FFILanguage] */;
val* var1 /* : Array[FFILanguage] */;
var1 = ffi_base__FFILanguageAssignationPhase__languages(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#FFILanguageAssignationPhase#languages= for (self: FFILanguageAssignationPhase, Array[FFILanguage]) */
void ffi_base__FFILanguageAssignationPhase__languages_61d(val* self, val* p0) {
self->attrs[COLOR_ffi_base__FFILanguageAssignationPhase___64dlanguages].val = p0; /* @languages on <self:FFILanguageAssignationPhase> */
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#languages= for (self: Object, Array[FFILanguage]) */
void VIRTUAL_ffi_base__FFILanguageAssignationPhase__languages_61d(val* self, val* p0) {
ffi_base__FFILanguageAssignationPhase__languages_61d(self, p0);
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#process_nmodule for (self: FFILanguageAssignationPhase, AModule) */
void ffi_base__FFILanguageAssignationPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ANodes[AExternCodeBlock] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_block /* var block: AExternCodeBlock */;
var_nmodule = p0;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_extern_code_blocks]))(var_nmodule) /* n_extern_code_blocks on <var_nmodule:AModule>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[AExternCodeBlock]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_block = var3;
((void (*)(val*, val*))(self->class->vft[COLOR_ffi_base__FFILanguageAssignationPhase__verify_foreign_code_on_node]))(self, var_block) /* verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_nmodule(val* self, val* p0) {
ffi_base__FFILanguageAssignationPhase__process_nmodule(self, p0);
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#process_npropdef for (self: FFILanguageAssignationPhase, APropdef) */
void ffi_base__FFILanguageAssignationPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable AExternCodeBlock */;
val* var_code_block /* var code_block: nullable AExternCodeBlock */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AExternPropdef */
cltype = type_parser_nodes__AExternPropdef.color;
idtype = type_parser_nodes__AExternPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AExternPropdef__n_extern_code_block]))(var_npropdef) /* n_extern_code_block on <var_npropdef:APropdef(AExternPropdef)>*/;
var_code_block = var1;
var2 = NULL;
if (var_code_block == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(self->class->vft[COLOR_ffi_base__FFILanguageAssignationPhase__verify_foreign_code_on_node]))(self, var_code_block) /* verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/;
} else {
}
} else {
}
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_npropdef(val* self, val* p0) {
ffi_base__FFILanguageAssignationPhase__process_npropdef(self, p0);
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#process_nclassdef for (self: FFILanguageAssignationPhase, AClassdef) */
void ffi_base__FFILanguageAssignationPhase__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var2 /* : nullable AExternCodeBlock */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable AExternCodeBlock */;
var_nclassdef = p0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var1 = 0;
} else {
var1 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
var2 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
var = var4;
} else {
var = var_;
}
if (var){
var5 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_extern_code_block]))(var_nclassdef) /* n_extern_code_block on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 55);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_ffi_base__FFILanguageAssignationPhase__verify_foreign_code_on_node]))(self, var5) /* verify_foreign_code_on_node on <self:FFILanguageAssignationPhase>*/;
} else {
}
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#process_nclassdef for (self: Object, AClassdef) */
void VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_nclassdef(val* self, val* p0) {
ffi_base__FFILanguageAssignationPhase__process_nclassdef(self, p0);
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node for (self: FFILanguageAssignationPhase, AExternCodeBlock) */
void ffi_base__FFILanguageAssignationPhase__verify_foreign_code_on_node(val* self, val* p0) {
val* var_n /* var n: AExternCodeBlock */;
short int var /* : Bool */;
short int var_found /* var found: Bool */;
val* var1 /* : Array[FFILanguage] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_v /* var v: FFILanguage */;
short int var5 /* : Bool */;
short int var_identified /* var identified: Bool */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
val* var7 /* : ToolContext */;
val* var8 /* : Location */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : ToolContext */;
val* var16 /* : Location */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
var_n = p0;
var = 0;
var_found = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__FFILanguageAssignationPhase__languages]))(self) /* languages on <self:FFILanguageAssignationPhase>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:Array[FFILanguage]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_v = var4;
var5 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_ffi_base__FFILanguage__identify_language]))(var_v, var_n) /* identify_language on <var_v:FFILanguage>*/;
var_identified = var5;
if (var_identified){
var_ = var_found;
if (var_found){
var6 = var_identified;
} else {
var6 = var_;
}
if (var6){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:FFILanguageAssignationPhase>*/;
var8 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__location]))(var_n) /* location on <var_n:AExternCodeBlock>*/;
if (varonce) {
var9 = varonce;
} else {
var10 = "Two languages identified as possible handlers.";
var11 = 46;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_toolcontext__ToolContext__error]))(var7, var8, var9) /* error on <var7:ToolContext>*/;
} else {
}
((void (*)(val*, val*))(var_n->class->vft[COLOR_ffi_base__AExternCodeBlock__language_61d]))(var_n, var_v) /* language= on <var_n:AExternCodeBlock>*/;
var13 = 1;
var_found = var13;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var14 = !var_found;
if (var14){
var15 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:FFILanguageAssignationPhase>*/;
var16 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__location]))(var_n) /* location on <var_n:AExternCodeBlock>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "Unsupported language.";
var20 = 21;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
((void (*)(val*, val*, val*))(var15->class->vft[COLOR_toolcontext__ToolContext__error]))(var15, var16, var18) /* error on <var15:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node for (self: Object, AExternCodeBlock) */
void VIRTUAL_ffi_base__FFILanguageAssignationPhase__verify_foreign_code_on_node(val* self, val* p0) {
ffi_base__FFILanguageAssignationPhase__verify_foreign_code_on_node(self, p0);
RET_LABEL:;
}
/* method ffi_base#AModule#ffi_files for (self: AModule): Array[ExternFile] */
val* ffi_base__AModule__ffi_files(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_ffi_base__AModule___64dffi_files].val; /* @ffi_files on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @ffi_files");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 78);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#AModule#ffi_files for (self: Object): Array[ExternFile] */
val* VIRTUAL_ffi_base__AModule__ffi_files(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = ffi_base__AModule__ffi_files(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#AModule#ffi_files= for (self: AModule, Array[ExternFile]) */
void ffi_base__AModule__ffi_files_61d(val* self, val* p0) {
self->attrs[COLOR_ffi_base__AModule___64dffi_files].val = p0; /* @ffi_files on <self:AModule> */
RET_LABEL:;
}
/* method ffi_base#AModule#ffi_files= for (self: Object, Array[ExternFile]) */
void VIRTUAL_ffi_base__AModule__ffi_files_61d(val* self, val* p0) {
ffi_base__AModule__ffi_files_61d(self, p0);
RET_LABEL:;
}
/* method ffi_base#AExternCodeBlock#language_name for (self: AExternCodeBlock): nullable String */
val* ffi_base__AExternCodeBlock__language_name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable AInLanguage */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : nullable AInLanguage */;
val* var6 /* : TString */;
val* var7 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternCodeBlock__n_in_language]))(self) /* n_in_language on <self:AExternCodeBlock>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternCodeBlock__n_in_language]))(self) /* n_in_language on <self:AExternCodeBlock>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 84);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_parser_nodes__AInLanguage__n_string]))(var5) /* n_string on <var5:nullable AInLanguage>*/;
}
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_ffi_base__TString__without_quotes]))(var6) /* without_quotes on <var6:TString>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ffi_base#AExternCodeBlock#language_name for (self: Object): nullable String */
val* VIRTUAL_ffi_base__AExternCodeBlock__language_name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = ffi_base__AExternCodeBlock__language_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#AExternCodeBlock#language_name_lowered for (self: AExternCodeBlock): nullable String */
val* ffi_base__AExternCodeBlock__language_name_lowered(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : nullable String */;
val* var6 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name]))(self) /* language_name on <self:AExternCodeBlock>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name]))(self) /* language_name on <self:AExternCodeBlock>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 88);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_string__AbstractString__to_lower]))(var5) /* to_lower on <var5:nullable String>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ffi_base#AExternCodeBlock#language_name_lowered for (self: Object): nullable String */
val* VIRTUAL_ffi_base__AExternCodeBlock__language_name_lowered(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = ffi_base__AExternCodeBlock__language_name_lowered(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#AExternCodeBlock#code for (self: AExternCodeBlock): String */
val* ffi_base__AExternCodeBlock__code(val* self) {
val* var /* : String */;
val* var1 /* : TExternCodeSegment */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternCodeBlock__n_extern_code_segment]))(self) /* n_extern_code_segment on <self:AExternCodeBlock>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_ffi_base__TExternCodeSegment__without_guard]))(var1) /* without_guard on <var1:TExternCodeSegment>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ffi_base#AExternCodeBlock#code for (self: Object): String */
val* VIRTUAL_ffi_base__AExternCodeBlock__code(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ffi_base__AExternCodeBlock__code(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#AExternCodeBlock#language for (self: AExternCodeBlock): nullable FFILanguage */
val* ffi_base__AExternCodeBlock__language(val* self) {
val* var /* : nullable FFILanguage */;
val* var1 /* : nullable FFILanguage */;
var1 = self->attrs[COLOR_ffi_base__AExternCodeBlock___64dlanguage].val; /* @language on <self:AExternCodeBlock> */
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#AExternCodeBlock#language for (self: Object): nullable FFILanguage */
val* VIRTUAL_ffi_base__AExternCodeBlock__language(val* self) {
val* var /* : nullable FFILanguage */;
val* var1 /* : nullable FFILanguage */;
var1 = ffi_base__AExternCodeBlock__language(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#AExternCodeBlock#language= for (self: AExternCodeBlock, nullable FFILanguage) */
void ffi_base__AExternCodeBlock__language_61d(val* self, val* p0) {
self->attrs[COLOR_ffi_base__AExternCodeBlock___64dlanguage].val = p0; /* @language on <self:AExternCodeBlock> */
RET_LABEL:;
}
/* method ffi_base#AExternCodeBlock#language= for (self: Object, nullable FFILanguage) */
void VIRTUAL_ffi_base__AExternCodeBlock__language_61d(val* self, val* p0) {
ffi_base__AExternCodeBlock__language_61d(self, p0);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#init for (self: FFILanguage, FFILanguageAssignationPhase) */
void ffi_base__FFILanguage__init(val* self, val* p0) {
val* var_ffi_language_assignation_phase /* var ffi_language_assignation_phase: FFILanguageAssignationPhase */;
val* var /* : Array[FFILanguage] */;
var_ffi_language_assignation_phase = p0;
var = ((val* (*)(val*))(var_ffi_language_assignation_phase->class->vft[COLOR_ffi_base__FFILanguageAssignationPhase__languages]))(var_ffi_language_assignation_phase) /* languages on <var_ffi_language_assignation_phase:FFILanguageAssignationPhase>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, self) /* add on <var:Array[FFILanguage]>*/;
RET_LABEL:;
}
/* method ffi_base#FFILanguage#init for (self: Object, FFILanguageAssignationPhase) */
void VIRTUAL_ffi_base__FFILanguage__init(val* self, val* p0) {
ffi_base__FFILanguage__init(self, p0);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#identify_language for (self: FFILanguage, AExternCodeBlock): Bool */
short int ffi_base__FFILanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "identify_language", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 104);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method ffi_base#FFILanguage#identify_language for (self: Object, AExternCodeBlock): Bool */
short int VIRTUAL_ffi_base__FFILanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = ffi_base__FFILanguage__identify_language(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#FFILanguage#compile_module_block for (self: FFILanguage, AExternCodeBlock, CCompilationUnit, AModule) */
void ffi_base__FFILanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compile_module_block", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 107);
show_backtrace(1);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#compile_module_block for (self: Object, AExternCodeBlock, CCompilationUnit, AModule) */
void VIRTUAL_ffi_base__FFILanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
ffi_base__FFILanguage__compile_module_block(self, p0, p1, p2);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#compile_extern_method for (self: FFILanguage, AExternCodeBlock, AExternPropdef, CCompilationUnit, AModule) */
void ffi_base__FFILanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compile_extern_method", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 110);
show_backtrace(1);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#compile_extern_method for (self: Object, AExternCodeBlock, AExternPropdef, CCompilationUnit, AModule) */
void VIRTUAL_ffi_base__FFILanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
ffi_base__FFILanguage__compile_extern_method(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#compile_extern_class for (self: FFILanguage, AExternCodeBlock, AClassdef, CCompilationUnit, AModule) */
void ffi_base__FFILanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compile_extern_class", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 114);
show_backtrace(1);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#compile_extern_class for (self: Object, AExternCodeBlock, AClassdef, CCompilationUnit, AModule) */
void VIRTUAL_ffi_base__FFILanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
ffi_base__FFILanguage__compile_extern_class(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#get_ftype for (self: FFILanguage, AExternCodeBlock, AClassdef): ForeignType */
val* ffi_base__FFILanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "get_ftype", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 118);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method ffi_base#FFILanguage#get_ftype for (self: Object, AExternCodeBlock, AClassdef): ForeignType */
val* VIRTUAL_ffi_base__FFILanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var1 /* : ForeignType */;
var1 = ffi_base__FFILanguage__get_ftype(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#FFILanguage#compile_callback for (self: FFILanguage, NitniCallback, AModule, MModule, CCompilationUnit) */
void ffi_base__FFILanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compile_callback", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 121);
show_backtrace(1);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#compile_callback for (self: Object, NitniCallback, AModule, MModule, CCompilationUnit) */
void VIRTUAL_ffi_base__FFILanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
ffi_base__FFILanguage__compile_callback(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method ffi_base#FFILanguage#compile_to_files for (self: FFILanguage, AModule, String) */
void ffi_base__FFILanguage__compile_to_files(val* self, val* p0, val* p1) {
val* var_amodule /* var amodule: AModule */;
val* var_directory /* var directory: String */;
var_amodule = p0;
var_directory = p1;
RET_LABEL:;
}
/* method ffi_base#FFILanguage#compile_to_files for (self: Object, AModule, String) */
void VIRTUAL_ffi_base__FFILanguage__compile_to_files(val* self, val* p0, val* p1) {
ffi_base__FFILanguage__compile_to_files(self, p0, p1);
RET_LABEL:;
}
/* method ffi_base#TString#without_quotes for (self: TString): String */
val* ffi_base__TString__without_quotes(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : String */;
long var9 /* : Int */;
val* var10 /* : String */;
long var11 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
val* var16 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TString>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:String>*/;
var3 = 2;
{ /* Inline kernel#Int#>= (var2,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var7 = var2 >= var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 133);
show_backtrace(1);
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TString>*/;
var9 = 1;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TString>*/;
var11 = ((long (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__length]))(var10) /* length on <var10:String>*/;
var12 = 2;
{ /* Inline kernel#Int#- (var11,var12) */
var15 = var11 - var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var16 = ((val* (*)(val*, long, long))(var8->class->vft[COLOR_string__AbstractString__substring]))(var8, var9, var13) /* substring on <var8:String>*/;
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ffi_base#TString#without_quotes for (self: Object): String */
val* VIRTUAL_ffi_base__TString__without_quotes(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ffi_base__TString__without_quotes(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#TExternCodeSegment#without_guard for (self: TExternCodeSegment): String */
val* ffi_base__TExternCodeSegment__without_guard(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : String */;
long var9 /* : Int */;
val* var10 /* : String */;
long var11 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
val* var16 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TExternCodeSegment>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:String>*/;
var3 = 4;
{ /* Inline kernel#Int#>= (var2,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var7 = var2 >= var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 142);
show_backtrace(1);
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TExternCodeSegment>*/;
var9 = 2;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__Token__text]))(self) /* text on <self:TExternCodeSegment>*/;
var11 = ((long (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__length]))(var10) /* length on <var10:String>*/;
var12 = 4;
{ /* Inline kernel#Int#- (var11,var12) */
var15 = var11 - var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var16 = ((val* (*)(val*, long, long))(var8->class->vft[COLOR_string__AbstractString__substring]))(var8, var9, var13) /* substring on <var8:String>*/;
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ffi_base#TExternCodeSegment#without_guard for (self: Object): String */
val* VIRTUAL_ffi_base__TExternCodeSegment__without_guard(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ffi_base__TExternCodeSegment__without_guard(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#ExternFile#filename for (self: ExternFile): String */
val* ffi_base__ExternFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_ffi_base__ExternFile___64dfilename].val; /* @filename on <self:ExternFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @filename");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 149);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#ExternFile#filename for (self: Object): String */
val* VIRTUAL_ffi_base__ExternFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ffi_base__ExternFile__filename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#ExternFile#filename= for (self: ExternFile, String) */
void ffi_base__ExternFile__filename_61d(val* self, val* p0) {
self->attrs[COLOR_ffi_base__ExternFile___64dfilename].val = p0; /* @filename on <self:ExternFile> */
RET_LABEL:;
}
/* method ffi_base#ExternFile#filename= for (self: Object, String) */
void VIRTUAL_ffi_base__ExternFile__filename_61d(val* self, val* p0) {
ffi_base__ExternFile__filename_61d(self, p0);
RET_LABEL:;
}
/* method ffi_base#ExternFile#makefile_rule_name for (self: ExternFile): String */
val* ffi_base__ExternFile__makefile_rule_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "makefile_rule_name", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 152);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method ffi_base#ExternFile#makefile_rule_name for (self: Object): String */
val* VIRTUAL_ffi_base__ExternFile__makefile_rule_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ffi_base__ExternFile__makefile_rule_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#ExternFile#makefile_rule_content for (self: ExternFile): String */
val* ffi_base__ExternFile__makefile_rule_content(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "makefile_rule_content", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 153);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method ffi_base#ExternFile#makefile_rule_content for (self: Object): String */
val* VIRTUAL_ffi_base__ExternFile__makefile_rule_content(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ffi_base__ExternFile__makefile_rule_content(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#ExternFile#init for (self: ExternFile, String) */
void ffi_base__ExternFile__init(val* self, val* p0) {
self->attrs[COLOR_ffi_base__ExternFile___64dfilename].val = p0; /* @filename on <self:ExternFile> */
RET_LABEL:;
}
/* method ffi_base#ExternFile#init for (self: Object, String) */
void VIRTUAL_ffi_base__ExternFile__init(val* self, val* p0) {
ffi_base__ExternFile__init(self, p0);
RET_LABEL:;
}
/* method ffi_base#CCompilationUnit#write_as_impl for (self: CCompilationUnit, AModule, String) */
void ffi_base__CCompilationUnit__write_as_impl(val* self, val* p0, val* p1) {
val* var_amodule /* var amodule: AModule */;
val* var_compdir /* var compdir: String */;
val* var /* : Array[Object] */;
long var1 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : nullable MModule */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var_base_name /* var base_name: String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var_16 /* var : Array[Object] */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var_h_file /* var h_file: String */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var_30 /* var : Array[Object] */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var_guard /* var guard: String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
val* var54 /* : Array[String] */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var_57 /* var : Array[Object] */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var_c_file /* var c_file: String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
val* var88 /* : Array[Object] */;
long var89 /* : Int */;
val* var_90 /* var : Array[Object] */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var102 /* : Array[String] */;
long var103 /* : Int */;
val* var104 /* : NativeArray[String] */;
val* var105 /* : Array[String] */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : String */;
var_amodule = p0;
var_compdir = p1;
var = NEW_array__Array(&type_array__Arraykernel__Object);
var1 = 3;
((void (*)(val*, long))(var->class->vft[COLOR_array__Array__with_capacity]))(var, var1) /* with_capacity on <var:Array[Object]>*/;
var_ = var;
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var2) /* add on <var_:Array[Object]>*/;
var6 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 159);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_mmodule__MModule__name]))(var6) /* name on <var6:nullable MModule>*/;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "._ffi";
var11 = 5;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_base_name = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
var15 = 3;
((void (*)(val*, long))(var14->class->vft[COLOR_array__Array__with_capacity]))(var14, var15) /* with_capacity on <var14:Array[Object]>*/;
var_16 = var14;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "";
var20 = 0;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
((void (*)(val*, val*))(var_16->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_16, var18) /* add on <var_16:Array[Object]>*/;
((void (*)(val*, val*))(var_16->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_16, var_base_name) /* add on <var_16:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = ".h";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_16->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_16, var23) /* add on <var_16:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_16->class->vft[COLOR_string__Object__to_s]))(var_16) /* to_s on <var_16:Array[Object]>*/;
var_h_file = var27;
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
var29 = 3;
((void (*)(val*, long))(var28->class->vft[COLOR_array__Array__with_capacity]))(var28, var29) /* with_capacity on <var28:Array[Object]>*/;
var_30 = var28;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "";
var34 = 0;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
((void (*)(val*, val*))(var_30->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_30, var32) /* add on <var_30:Array[Object]>*/;
var36 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_nitni_base__AModule__cname]))(var_amodule) /* cname on <var_amodule:AModule>*/;
var37 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:String>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_string__AbstractString__to_upper]))(var37) /* to_upper on <var37:String>*/;
((void (*)(val*, val*))(var_30->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_30, var38) /* add on <var_30:Array[Object]>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "_NIT_H";
var42 = 6;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
((void (*)(val*, val*))(var_30->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_30, var40) /* add on <var_30:Array[Object]>*/;
var44 = ((val* (*)(val*))(var_30->class->vft[COLOR_string__Object__to_s]))(var_30) /* to_s on <var_30:Array[Object]>*/;
var_guard = var44;
if (varonce45) {
var46 = varonce45;
} else {
var47 = "/";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 3;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var46;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var_h_file;
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
var54 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var54->class->vft[COLOR_array__Array__init]))(var54) /* init on <var54:Array[String]>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_ffi_base__CCompilationUnit__write_header_to_file]))(self, var_amodule, var53, var54, var_guard) /* write_header_to_file on <self:CCompilationUnit>*/;
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
var56 = 3;
((void (*)(val*, long))(var55->class->vft[COLOR_array__Array__with_capacity]))(var55, var56) /* with_capacity on <var55:Array[Object]>*/;
var_57 = var55;
if (varonce58) {
var59 = varonce58;
} else {
var60 = "";
var61 = 0;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
((void (*)(val*, val*))(var_57->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_57, var59) /* add on <var_57:Array[Object]>*/;
((void (*)(val*, val*))(var_57->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_57, var_base_name) /* add on <var_57:Array[Object]>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = ".c";
var66 = 2;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
((void (*)(val*, val*))(var_57->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_57, var64) /* add on <var_57:Array[Object]>*/;
var68 = ((val* (*)(val*))(var_57->class->vft[COLOR_string__Object__to_s]))(var_57) /* to_s on <var_57:Array[Object]>*/;
var_c_file = var68;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "/";
var72 = 1;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 3;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var70;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var_c_file;
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
if (varonce78) {
var79 = varonce78;
} else {
var80 = "<stdlib.h>";
var81 = 10;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = "<stdio.h>";
var86 = 9;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var88 = NEW_array__Array(&type_array__Arraykernel__Object);
var89 = 3;
((void (*)(val*, long))(var88->class->vft[COLOR_array__Array__with_capacity]))(var88, var89) /* with_capacity on <var88:Array[Object]>*/;
var_90 = var88;
if (varonce91) {
var92 = varonce91;
} else {
var93 = "\"";
var94 = 1;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
((void (*)(val*, val*))(var_90->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_90, var92) /* add on <var_90:Array[Object]>*/;
((void (*)(val*, val*))(var_90->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_90, var_h_file) /* add on <var_90:Array[Object]>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "\"";
var99 = 1;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
((void (*)(val*, val*))(var_90->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_90, var97) /* add on <var_90:Array[Object]>*/;
var101 = ((val* (*)(val*))(var_90->class->vft[COLOR_string__Object__to_s]))(var_90) /* to_s on <var_90:Array[Object]>*/;
var102 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var102 = array_instance Array[String] */
var103 = 3;
var104 = NEW_array__NativeArray(var103, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var104)->values[0] = (val*) var79;
((struct instance_array__NativeArray*)var104)->values[1] = (val*) var84;
((struct instance_array__NativeArray*)var104)->values[2] = (val*) var101;
((void (*)(val*, val*, long))(var102->class->vft[COLOR_array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[String]>*/;
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_ffi_base__CCompilationUnit__write_body_to_file]))(self, var_amodule, var77, var102) /* write_body_to_file on <self:CCompilationUnit>*/;
var105 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__files]))(self) /* files on <self:CCompilationUnit>*/;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "/";
var109 = 1;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 3;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var107;
((struct instance_array__NativeArray*)var113)->values[2] = (val*) var_c_file;
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
}
var114 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
((void (*)(val*, val*))(var105->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var105, var114) /* add on <var105:Array[String]>*/;
RET_LABEL:;
}
/* method ffi_base#CCompilationUnit#write_as_impl for (self: Object, AModule, String) */
void VIRTUAL_ffi_base__CCompilationUnit__write_as_impl(val* self, val* p0, val* p1) {
ffi_base__CCompilationUnit__write_as_impl(self, p0, p1);
RET_LABEL:;
}
/* method ffi_base#CCompilationUnit#write_header_to_file for (self: CCompilationUnit, AModule, String, Array[String], String) */
void ffi_base__CCompilationUnit__write_header_to_file(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_amodule /* var amodule: AModule */;
val* var_file /* var file: String */;
val* var_includes /* var includes: Array[String] */;
val* var_guard /* var guard: String */;
val* var /* : OFStream */;
val* var_stream /* var stream: OFStream */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : nullable MModule */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_module_info /* var module_info: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
val* var43 /* : Iterator[nullable Object] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_incl /* var incl: String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
var_amodule = p0;
var_file = p1;
var_includes = p2;
var_guard = p3;
var = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var->class->vft[COLOR_file__OFStream__open]))(var, var_file) /* open on <var:OFStream>*/;
var_stream = var;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "/*\n\11Extern implementation of Nit module ";
var5 = 40;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 176);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_mmodule__MModule__name]))(var7) /* name on <var7:nullable MModule>*/;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "\n*/\n";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_module_info = var14;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var_module_info) /* write on <var_stream:OFStream>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "#ifndef ";
var18 = 8;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\n";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_guard;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var28) /* write on <var_stream:OFStream>*/;
if (varonce29) {
var30 = varonce29;
} else {
var31 = "#define ";
var32 = 8;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "\n\n";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var30;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var_guard;
((struct instance_array__NativeArray*)var41)->values[2] = (val*) var35;
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var42) /* write on <var_stream:OFStream>*/;
var43 = ((val* (*)(val*))(var_includes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_includes) /* iterator on <var_includes:Array[String]>*/;
for(;;) {
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var43) /* is_ok on <var43:Iterator[nullable Object]>*/;
if(!var44) break;
var45 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__item]))(var43) /* item on <var43:Iterator[nullable Object]>*/;
var_incl = var45;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "#include ";
var49 = 9;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "\n";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var_incl;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var59) /* write on <var_stream:OFStream>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__next]))(var43) /* next on <var43:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__compile_header_core]))(self, var_stream) /* compile_header_core on <self:CCompilationUnit>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = "#endif\n";
var63 = 7;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var61) /* write on <var_stream:OFStream>*/;
((void (*)(val*))(var_stream->class->vft[COLOR_stream__IOS__close]))(var_stream) /* close on <var_stream:OFStream>*/;
RET_LABEL:;
}
/* method ffi_base#CCompilationUnit#write_header_to_file for (self: Object, AModule, String, Array[String], String) */
void VIRTUAL_ffi_base__CCompilationUnit__write_header_to_file(val* self, val* p0, val* p1, val* p2, val* p3) {
ffi_base__CCompilationUnit__write_header_to_file(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method ffi_base#CCompilationUnit#write_body_to_file for (self: CCompilationUnit, AModule, String, Array[String]) */
void ffi_base__CCompilationUnit__write_body_to_file(val* self, val* p0, val* p1, val* p2) {
val* var_amodule /* var amodule: AModule */;
val* var_file /* var file: String */;
val* var_includes /* var includes: Array[String] */;
val* var /* : OFStream */;
val* var_stream /* var stream: OFStream */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : nullable MModule */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_module_info /* var module_info: String */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_incl /* var incl: String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
var_amodule = p0;
var_file = p1;
var_includes = p2;
var = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var->class->vft[COLOR_file__OFStream__open]))(var, var_file) /* open on <var:OFStream>*/;
var_stream = var;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "/*\n\11Extern implementation of Nit module ";
var5 = 40;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/ffi_base.nit", 196);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_mmodule__MModule__name]))(var7) /* name on <var7:nullable MModule>*/;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "\n*/\n";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_module_info = var14;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var_module_info) /* write on <var_stream:OFStream>*/;
var15 = ((val* (*)(val*))(var_includes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_includes) /* iterator on <var_includes:Array[String]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_incl = var17;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "#include ";
var21 = 9;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\n";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var_incl;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(var_stream->class->vft[COLOR_stream__OStream__write]))(var_stream, var31) /* write on <var_stream:OFStream>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__compile_body_core]))(self, var_stream) /* compile_body_core on <self:CCompilationUnit>*/;
((void (*)(val*))(var_stream->class->vft[COLOR_stream__IOS__close]))(var_stream) /* close on <var_stream:OFStream>*/;
RET_LABEL:;
}
/* method ffi_base#CCompilationUnit#write_body_to_file for (self: Object, AModule, String, Array[String]) */
void VIRTUAL_ffi_base__CCompilationUnit__write_body_to_file(val* self, val* p0, val* p1, val* p2) {
ffi_base__CCompilationUnit__write_body_to_file(self, p0, p1, p2);
RET_LABEL:;
}
/* method ffi_base#ForeignType#ctype for (self: ForeignType): String */
val* ffi_base__ForeignType__ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "void*";
var3 = 5;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ffi_base#ForeignType#ctype for (self: Object): String */
val* VIRTUAL_ffi_base__ForeignType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ffi_base__ForeignType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method ffi_base#ForeignType#init for (self: ForeignType) */
void ffi_base__ForeignType__init(val* self) {
RET_LABEL:;
}
/* method ffi_base#ForeignType#init for (self: Object) */
void VIRTUAL_ffi_base__ForeignType__init(val* self) {
ffi_base__ForeignType__init(self);
RET_LABEL:;
}
