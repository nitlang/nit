#include "cpp.sep.0.h"
/* method cpp#FFILanguageAssignationPhase#cpp_language for (self: FFILanguageAssignationPhase): FFILanguage */
val* cpp__FFILanguageAssignationPhase__cpp_language(val* self) {
val* var /* : FFILanguage */;
val* var1 /* : FFILanguage */;
var1 = self->attrs[COLOR_cpp__FFILanguageAssignationPhase___64dcpp_language].val; /* @cpp_language on <self:FFILanguageAssignationPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cpp_language");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#FFILanguageAssignationPhase#cpp_language for (self: Object): FFILanguage */
val* VIRTUAL_cpp__FFILanguageAssignationPhase__cpp_language(val* self) {
val* var /* : FFILanguage */;
val* var1 /* : FFILanguage */;
var1 = cpp__FFILanguageAssignationPhase__cpp_language(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#FFILanguageAssignationPhase#cpp_language= for (self: FFILanguageAssignationPhase, FFILanguage) */
void cpp__FFILanguageAssignationPhase__cpp_language_61d(val* self, val* p0) {
self->attrs[COLOR_cpp__FFILanguageAssignationPhase___64dcpp_language].val = p0; /* @cpp_language on <self:FFILanguageAssignationPhase> */
RET_LABEL:;
}
/* method cpp#FFILanguageAssignationPhase#cpp_language= for (self: Object, FFILanguage) */
void VIRTUAL_cpp__FFILanguageAssignationPhase__cpp_language_61d(val* self, val* p0) {
cpp__FFILanguageAssignationPhase__cpp_language_61d(self, p0);
RET_LABEL:;
}
/* method cpp#AModule#cpp_file for (self: AModule): nullable CPPCompilationUnit */
val* cpp__AModule__cpp_file(val* self) {
val* var /* : nullable CPPCompilationUnit */;
val* var1 /* : nullable CPPCompilationUnit */;
var1 = self->attrs[COLOR_cpp__AModule___64dcpp_file].val; /* @cpp_file on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#AModule#cpp_file for (self: Object): nullable CPPCompilationUnit */
val* VIRTUAL_cpp__AModule__cpp_file(val* self) {
val* var /* : nullable CPPCompilationUnit */;
val* var1 /* : nullable CPPCompilationUnit */;
var1 = cpp__AModule__cpp_file(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#AModule#cpp_file= for (self: AModule, nullable CPPCompilationUnit) */
void cpp__AModule__cpp_file_61d(val* self, val* p0) {
self->attrs[COLOR_cpp__AModule___64dcpp_file].val = p0; /* @cpp_file on <self:AModule> */
RET_LABEL:;
}
/* method cpp#AModule#cpp_file= for (self: Object, nullable CPPCompilationUnit) */
void VIRTUAL_cpp__AModule__cpp_file_61d(val* self, val* p0) {
cpp__AModule__cpp_file_61d(self, p0);
RET_LABEL:;
}
/* method cpp#AModule#cpp_compiler_options for (self: AModule): String */
val* cpp__AModule__cpp_compiler_options(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_cpp__AModule___64dcpp_compiler_options].val; /* @cpp_compiler_options on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cpp_compiler_options");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 29);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#AModule#cpp_compiler_options for (self: Object): String */
val* VIRTUAL_cpp__AModule__cpp_compiler_options(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = cpp__AModule__cpp_compiler_options(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#AModule#cpp_compiler_options= for (self: AModule, String) */
void cpp__AModule__cpp_compiler_options_61d(val* self, val* p0) {
self->attrs[COLOR_cpp__AModule___64dcpp_compiler_options].val = p0; /* @cpp_compiler_options on <self:AModule> */
RET_LABEL:;
}
/* method cpp#AModule#cpp_compiler_options= for (self: Object, String) */
void VIRTUAL_cpp__AModule__cpp_compiler_options_61d(val* self, val* p0) {
cpp__AModule__cpp_compiler_options_61d(self, p0);
RET_LABEL:;
}
/* method cpp#CPPLanguage#identify_language for (self: CPPLanguage, AExternCodeBlock): Bool */
short int cpp__CPPLanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
val* var_n /* var n: AExternCodeBlock */;
short int var1 /* : Bool */;
var_n = p0;
var1 = ((short int (*)(val*))(var_n->class->vft[COLOR_cpp__AExternCodeBlock__is_cpp]))(var_n) /* is_cpp on <var_n:AExternCodeBlock>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#CPPLanguage#identify_language for (self: Object, AExternCodeBlock): Bool */
short int VIRTUAL_cpp__CPPLanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = cpp__CPPLanguage__identify_language(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#CPPLanguage#compile_module_block for (self: CPPLanguage, AExternCodeBlock, CCompilationUnit, AModule) */
void cpp__CPPLanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
val* var_block /* var block: AExternCodeBlock */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable CPPCompilationUnit */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : CPPCompilationUnit */;
short int var4 /* : Bool */;
val* var5 /* : nullable CPPCompilationUnit */;
val* var6 /* : Template */;
val* var7 /* : Location */;
val* var8 /* : String */;
val* var9 /* : nullable CPPCompilationUnit */;
val* var10 /* : Template */;
val* var11 /* : String */;
short int var12 /* : Bool */;
val* var13 /* : nullable CPPCompilationUnit */;
val* var14 /* : Template */;
val* var15 /* : Location */;
val* var16 /* : String */;
val* var17 /* : nullable CPPCompilationUnit */;
val* var18 /* : Template */;
val* var19 /* : String */;
var_block = p0;
var_ecc = p1;
var_nmodule = p2;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
var3 = NEW_cpp__CPPCompilationUnit(&type_cpp__CPPCompilationUnit);
((void (*)(val*))(var3->class->vft[COLOR_cpp__CPPCompilationUnit__init]))(var3) /* init on <var3:CPPCompilationUnit>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file_61d]))(var_nmodule, var3) /* cpp_file= on <var_nmodule:AModule>*/;
} else {
}
var4 = ((short int (*)(val*))(var_block->class->vft[COLOR_cpp__AExternCodeBlock__is_cpp_header]))(var_block) /* is_cpp_header on <var_block:AExternCodeBlock>*/;
if (var4){
var5 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 42);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var5) /* header_custom on <var5:nullable CPPCompilationUnit>*/;
}
var7 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_c__Location__as_line_pragma]))(var7) /* as_line_pragma on <var7:Location>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_template__Template__add]))(var6, var8) /* add on <var6:Template>*/;
var9 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 43);
show_backtrace(1);
} else {
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var9) /* header_custom on <var9:nullable CPPCompilationUnit>*/;
}
var11 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_template__Template__add]))(var10, var11) /* add on <var10:Template>*/;
} else {
var12 = ((short int (*)(val*))(var_block->class->vft[COLOR_cpp__AExternCodeBlock__is_cpp_body]))(var_block) /* is_cpp_body on <var_block:AExternCodeBlock>*/;
if (var12){
var13 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 45);
show_backtrace(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_c_tools__CCompilationUnit__body_custom]))(var13) /* body_custom on <var13:nullable CPPCompilationUnit>*/;
}
var15 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_c__Location__as_line_pragma]))(var15) /* as_line_pragma on <var15:Location>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_template__Template__add]))(var14, var16) /* add on <var14:Template>*/;
var17 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 46);
show_backtrace(1);
} else {
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_c_tools__CCompilationUnit__body_custom]))(var17) /* body_custom on <var17:nullable CPPCompilationUnit>*/;
}
var19 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
((void (*)(val*, val*))(var18->class->vft[COLOR_template__Template__add]))(var18, var19) /* add on <var18:Template>*/;
} else {
}
}
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_module_block for (self: Object, AExternCodeBlock, CCompilationUnit, AModule) */
void VIRTUAL_cpp__CPPLanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
cpp__CPPLanguage__compile_module_block(self, p0, p1, p2);
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_extern_method for (self: CPPLanguage, AExternCodeBlock, AExternPropdef, CCompilationUnit, AModule) */
void cpp__CPPLanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AExternPropdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable CPPCompilationUnit */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : CPPCompilationUnit */;
val* var4 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : nullable ANode */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var7 /* : nullable MClass */;
val* var8 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var9 /* : nullable MPropDef */;
val* var10 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : SignatureLength */;
val* var16 /* : CallContext */;
val* var17 /* : String */;
val* var_indirection_sig /* var indirection_sig: String */;
val* var18 /* : Template */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
val* var28 /* : ExternCFunction */;
val* var_fc /* var fc: CFunction */;
val* var29 /* : Template */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : SignatureLength */;
val* var36 /* : CppCallContext */;
val* var37 /* : null */;
val* var38 /* : String */;
val* var39 /* : Template */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : nullable CPPCompilationUnit */;
val* var46 /* : Template */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : nullable CPPCompilationUnit */;
val* var53 /* : Template */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
val* var63 /* : nullable CPPCompilationUnit */;
val* var64 /* : Template */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : CFunction */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var_param_name /* var param_name: String */;
val* var78 /* : ToCppCallContext */;
val* var79 /* : String */;
val* var_type_name /* var type_name: String */;
val* var80 /* : MClass */;
val* var81 /* : nullable ForeignType */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
val* var85 /* : Template */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
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
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var106 /* : Array[Object] */;
long var107 /* : Int */;
val* var108 /* : NativeArray[Object] */;
val* var109 /* : String */;
val* var110 /* : Template */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
val* var130 /* : nullable MPropDef */;
val* var131 /* : nullable MSignature */;
val* var132 /* : Array[MParameter] */;
val* var133 /* : Iterator[nullable Object] */;
short int var134 /* : Bool */;
val* var135 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var136 /* : String */;
val* var_param_name137 /* var param_name: String */;
val* var138 /* : ToCppCallContext */;
val* var139 /* : MType */;
val* var140 /* : String */;
val* var_type_name141 /* var type_name: String */;
val* var142 /* : MClass */;
val* var143 /* : nullable ForeignType */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
val* var147 /* : Template */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : String */;
val* var172 /* : Template */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : String */;
val* var192 /* : Template */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : String */;
val* var198 /* : SignatureLength */;
val* var199 /* : CppCallContext */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : String */;
val* var205 /* : String */;
val* var206 /* : Template */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : String */;
val* var212 /* : nullable CPPCompilationUnit */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : String */;
val* var218 /* : SignatureLength */;
val* var219 /* : CppCallContext */;
val* var220 /* : String */;
val* var_cpp_signature /* var cpp_signature: String */;
val* var221 /* : CFunction */;
val* var222 /* : Template */;
val* var223 /* : Location */;
val* var224 /* : String */;
val* var225 /* : Template */;
val* var226 /* : String */;
val* var227 /* : nullable CPPCompilationUnit */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_nmodule = p3;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
var3 = NEW_cpp__CPPCompilationUnit(&type_cpp__CPPCompilationUnit);
((void (*)(val*))(var3->class->vft[COLOR_cpp__CPPCompilationUnit__init]))(var3) /* init on <var3:CPPCompilationUnit>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file_61d]))(var_nmodule, var3) /* cpp_file= on <var_nmodule:AModule>*/;
} else {
}
var4 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 58);
show_backtrace(1);
}
var_mmodule = var4;
var5 = ((val* (*)(val*))(var_m->class->vft[COLOR_parser_nodes__ANode__parent]))(var_m) /* parent on <var_m:AExternPropdef>*/;
/* <var5:nullable ANode> isa AClassdef */
cltype = type_parser_nodes__AClassdef.color;
idtype = type_parser_nodes__AClassdef.id;
if(var5 == NULL) {
var6 = 0;
} else {
if(cltype >= var5->type->table_size) {
var6 = 0;
} else {
var6 = var5->type->type_table[cltype] == idtype;
}
}
if (!var6) {
var_class_name = var5 == NULL ? "null" : var5->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 59);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_modelize_class__AClassdef__mclass]))(var5) /* mclass on <var5:nullable ANode(AClassdef)>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 59);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MClass__mclass_type]))(var7) /* mclass_type on <var7:nullable MClass>*/;
}
var_mclass_type = var8;
var9 = ((val* (*)(val*))(var_m->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_m) /* mpropdef on <var_m:AExternPropdef>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 60);
show_backtrace(1);
} else {
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MPropDef__mproperty]))(var9) /* mproperty on <var9:nullable MPropDef(nullable MMethodDef)>*/;
}
var_mproperty = var10;
if (varonce) {
var11 = varonce;
} else {
var12 = "___cpp_impl_mid";
var13 = 15;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var15 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:CPPLanguage>*/;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__internal_call_context]))(self) /* internal_call_context on <self:CPPLanguage>*/;
var17 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var_mclass_type, var_mmodule, var11, var15, var16) /* build_csignature on <var_mproperty:MMethod>*/;
var_indirection_sig = var17;
var18 = ((val* (*)(val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__body_decl]))(var_ecc) /* body_decl on <var_ecc:CCompilationUnit>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = ";\n";
var22 = 2;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 2;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var_indirection_sig;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var20;
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
((void (*)(val*, val*))(var18->class->vft[COLOR_template__Template__add]))(var18, var27) /* add on <var18:Template>*/;
var28 = NEW_c__ExternCFunction(&type_c__ExternCFunction);
((void (*)(val*, val*, val*))(var28->class->vft[COLOR_c__ExternCFunction__init]))(var28, var_m, var_mmodule) /* init on <var28:ExternCFunction>*/;
var_fc = var28;
var29 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "___cpp_impl_mid";
var33 = 15;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:CPPLanguage>*/;
var36 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__cpp_call_context]))(self) /* cpp_call_context on <self:CPPLanguage>*/;
var37 = NULL;
var38 = ((val* (*)(val*, val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_ccall]))(var_mproperty, var_mclass_type, var_mmodule, var31, var35, var36, var37) /* build_ccall on <var_mproperty:MMethod>*/;
((void (*)(val*, val*))(var29->class->vft[COLOR_template__Template__add]))(var29, var38) /* add on <var29:Template>*/;
var39 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce40) {
var41 = varonce40;
} else {
var42 = "\n";
var43 = 1;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
((void (*)(val*, val*))(var39->class->vft[COLOR_template__Template__add]))(var39, var41) /* add on <var39:Template>*/;
((void (*)(val*, val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__add_exported_function]))(var_ecc, var_fc) /* add_exported_function on <var_ecc:CCompilationUnit>*/;
var45 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var45 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 79);
show_backtrace(1);
} else {
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var45) /* header_decl on <var45:nullable CPPCompilationUnit>*/;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "extern \"C\" {\n";
var50 = 13;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
((void (*)(val*, val*))(var46->class->vft[COLOR_template__Template__add]))(var46, var48) /* add on <var46:Template>*/;
var52 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var52 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 80);
show_backtrace(1);
} else {
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var52) /* header_decl on <var52:nullable CPPCompilationUnit>*/;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = ";\n";
var57 = 2;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 2;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var_indirection_sig;
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var55;
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
var62 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
((void (*)(val*, val*))(var53->class->vft[COLOR_template__Template__add]))(var53, var62) /* add on <var53:Template>*/;
var63 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var63 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 81);
show_backtrace(1);
} else {
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var63) /* header_decl on <var63:nullable CPPCompilationUnit>*/;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "}\n";
var68 = 2;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
((void (*)(val*, val*))(var64->class->vft[COLOR_template__Template__add]))(var64, var66) /* add on <var64:Template>*/;
var70 = NEW_c_tools__CFunction(&type_c_tools__CFunction);
((void (*)(val*, val*))(var70->class->vft[COLOR_c_tools__CFunction__init]))(var70, var_indirection_sig) /* init on <var70:CFunction>*/;
var_fc = var70;
var71 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MMethod>*/;
var72 = !var71;
if (var72){
if (varonce73) {
var74 = varonce73;
} else {
var75 = "recv";
var76 = 4;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var_param_name = var74;
var78 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__to_cpp_call_context]))(self) /* to_cpp_call_context on <self:CPPLanguage>*/;
var79 = ((val* (*)(val*, val*))(var78->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(var78, var_mclass_type) /* name_mtype on <var78:ToCppCallContext>*/;
var_type_name = var79;
var80 = ((val* (*)(val*))(var_mclass_type->class->vft[COLOR_model__MClassType__mclass]))(var_mclass_type) /* mclass on <var_mclass_type:MClassType>*/;
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_extern_classes__MClass__ftype]))(var80) /* ftype on <var80:MClass>*/;
/* <var81:nullable ForeignType> isa ForeignCppType */
cltype83 = type_cpp__ForeignCppType.color;
idtype84 = type_cpp__ForeignCppType.id;
if(var81 == NULL) {
var82 = 0;
} else {
if(cltype83 >= var81->type->table_size) {
var82 = 0;
} else {
var82 = var81->type->type_table[cltype83] == idtype84;
}
}
if (var82){
var85 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce86) {
var87 = varonce86;
} else {
var88 = " ";
var89 = 1;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "_for_cpp = static_cast<";
var94 = 23;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = ">(";
var99 = 2;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = ");\n";
var104 = 3;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 8;
var108 = NEW_array__NativeArray(var107, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var108)->values[0] = (val*) var_type_name;
((struct instance_array__NativeArray*)var108)->values[1] = (val*) var87;
((struct instance_array__NativeArray*)var108)->values[2] = (val*) var_param_name;
((struct instance_array__NativeArray*)var108)->values[3] = (val*) var92;
((struct instance_array__NativeArray*)var108)->values[4] = (val*) var_type_name;
((struct instance_array__NativeArray*)var108)->values[5] = (val*) var97;
((struct instance_array__NativeArray*)var108)->values[6] = (val*) var_param_name;
((struct instance_array__NativeArray*)var108)->values[7] = (val*) var102;
((void (*)(val*, val*, long))(var106->class->vft[COLOR_array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
((void (*)(val*, val*))(var85->class->vft[COLOR_template__Template__add]))(var85, var109) /* add on <var85:Template>*/;
} else {
var110 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce111) {
var112 = varonce111;
} else {
var113 = " ";
var114 = 1;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = "_for_cpp = ";
var119 = 11;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = ";\n";
var124 = 2;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 6;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var_type_name;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var128)->values[2] = (val*) var_param_name;
((struct instance_array__NativeArray*)var128)->values[3] = (val*) var117;
((struct instance_array__NativeArray*)var128)->values[4] = (val*) var_param_name;
((struct instance_array__NativeArray*)var128)->values[5] = (val*) var122;
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
((void (*)(val*, val*))(var110->class->vft[COLOR_template__Template__add]))(var110, var129) /* add on <var110:Template>*/;
}
} else {
}
var130 = ((val* (*)(val*))(var_m->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_m) /* mpropdef on <var_m:AExternPropdef>*/;
if (var130 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 95);
show_backtrace(1);
} else {
var131 = ((val* (*)(val*))(var130->class->vft[COLOR_model__MMethodDef__msignature]))(var130) /* msignature on <var130:nullable MPropDef(nullable MMethodDef)>*/;
}
if (var131 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 95);
show_backtrace(1);
} else {
var132 = ((val* (*)(val*))(var131->class->vft[COLOR_model__MSignature__mparameters]))(var131) /* mparameters on <var131:nullable MSignature>*/;
}
var133 = ((val* (*)(val*))(var132->class->vft[COLOR_abstract_collection__Collection__iterator]))(var132) /* iterator on <var132:Array[MParameter]>*/;
for(;;) {
var134 = ((short int (*)(val*))(var133->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var133) /* is_ok on <var133:Iterator[nullable Object]>*/;
if(!var134) break;
var135 = ((val* (*)(val*))(var133->class->vft[COLOR_abstract_collection__Iterator__item]))(var133) /* item on <var133:Iterator[nullable Object]>*/;
var_param = var135;
var136 = ((val* (*)(val*))(var_param->class->vft[COLOR_model__MParameter__name]))(var_param) /* name on <var_param:MParameter>*/;
var_param_name137 = var136;
var138 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__to_cpp_call_context]))(self) /* to_cpp_call_context on <self:CPPLanguage>*/;
var139 = ((val* (*)(val*))(var_param->class->vft[COLOR_model__MParameter__mtype]))(var_param) /* mtype on <var_param:MParameter>*/;
var140 = ((val* (*)(val*, val*))(var138->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(var138, var139) /* name_mtype on <var138:ToCppCallContext>*/;
var_type_name141 = var140;
var142 = ((val* (*)(val*))(var_mclass_type->class->vft[COLOR_model__MClassType__mclass]))(var_mclass_type) /* mclass on <var_mclass_type:MClassType>*/;
var143 = ((val* (*)(val*))(var142->class->vft[COLOR_extern_classes__MClass__ftype]))(var142) /* ftype on <var142:MClass>*/;
/* <var143:nullable ForeignType> isa ForeignCppType */
cltype145 = type_cpp__ForeignCppType.color;
idtype146 = type_cpp__ForeignCppType.id;
if(var143 == NULL) {
var144 = 0;
} else {
if(cltype145 >= var143->type->table_size) {
var144 = 0;
} else {
var144 = var143->type->type_table[cltype145] == idtype146;
}
}
if (var144){
var147 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce148) {
var149 = varonce148;
} else {
var150 = " ";
var151 = 1;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "_for_cpp = static_cast<";
var156 = 23;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = ">(";
var161 = 2;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = ");\n";
var166 = 3;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 8;
var170 = NEW_array__NativeArray(var169, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var170)->values[0] = (val*) var_type_name141;
((struct instance_array__NativeArray*)var170)->values[1] = (val*) var149;
((struct instance_array__NativeArray*)var170)->values[2] = (val*) var_param_name137;
((struct instance_array__NativeArray*)var170)->values[3] = (val*) var154;
((struct instance_array__NativeArray*)var170)->values[4] = (val*) var_type_name141;
((struct instance_array__NativeArray*)var170)->values[5] = (val*) var159;
((struct instance_array__NativeArray*)var170)->values[6] = (val*) var_param_name137;
((struct instance_array__NativeArray*)var170)->values[7] = (val*) var164;
((void (*)(val*, val*, long))(var168->class->vft[COLOR_array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
var171 = ((val* (*)(val*))(var168->class->vft[COLOR_string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
((void (*)(val*, val*))(var147->class->vft[COLOR_template__Template__add]))(var147, var171) /* add on <var147:Template>*/;
} else {
var172 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce173) {
var174 = varonce173;
} else {
var175 = " ";
var176 = 1;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = "_for_cpp = ";
var181 = 11;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = ";\n";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 6;
var190 = NEW_array__NativeArray(var189, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var190)->values[0] = (val*) var_type_name141;
((struct instance_array__NativeArray*)var190)->values[1] = (val*) var174;
((struct instance_array__NativeArray*)var190)->values[2] = (val*) var_param_name137;
((struct instance_array__NativeArray*)var190)->values[3] = (val*) var179;
((struct instance_array__NativeArray*)var190)->values[4] = (val*) var_param_name137;
((struct instance_array__NativeArray*)var190)->values[5] = (val*) var184;
((void (*)(val*, val*, long))(var188->class->vft[COLOR_array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
var191 = ((val* (*)(val*))(var188->class->vft[COLOR_string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
((void (*)(val*, val*))(var172->class->vft[COLOR_template__Template__add]))(var172, var191) /* add on <var172:Template>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var133->class->vft[COLOR_abstract_collection__Iterator__next]))(var133) /* next on <var133:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var192 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce193) {
var194 = varonce193;
} else {
var195 = "___cpp_impl";
var196 = 11;
var197 = string__NativeString__to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
var198 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:CPPLanguage>*/;
var199 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__cpp_call_context]))(self) /* cpp_call_context on <self:CPPLanguage>*/;
if (varonce200) {
var201 = varonce200;
} else {
var202 = "_for_cpp";
var203 = 8;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
var205 = ((val* (*)(val*, val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_ccall]))(var_mproperty, var_mclass_type, var_mmodule, var194, var198, var199, var201) /* build_ccall on <var_mproperty:MMethod>*/;
((void (*)(val*, val*))(var192->class->vft[COLOR_template__Template__add]))(var192, var205) /* add on <var192:Template>*/;
var206 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce207) {
var208 = varonce207;
} else {
var209 = "\n";
var210 = 1;
var211 = string__NativeString__to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
((void (*)(val*, val*))(var206->class->vft[COLOR_template__Template__add]))(var206, var208) /* add on <var206:Template>*/;
var212 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var212 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 106);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var212->class->vft[COLOR_c_tools__CCompilationUnit__add_local_function]))(var212, var_fc) /* add_local_function on <var212:nullable CPPCompilationUnit>*/;
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "___cpp_impl";
var216 = 11;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
var218 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:CPPLanguage>*/;
var219 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__cpp_call_context]))(self) /* cpp_call_context on <self:CPPLanguage>*/;
var220 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var_mclass_type, var_mmodule, var214, var218, var219) /* build_csignature on <var_mproperty:MMethod>*/;
var_cpp_signature = var220;
var221 = NEW_c_tools__CFunction(&type_c_tools__CFunction);
((void (*)(val*, val*))(var221->class->vft[COLOR_c_tools__CFunction__init]))(var221, var_cpp_signature) /* init on <var221:CFunction>*/;
var_fc = var221;
var222 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__decls]))(var_fc) /* decls on <var_fc:CFunction>*/;
var223 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var224 = ((val* (*)(val*))(var223->class->vft[COLOR_c__Location__as_line_pragma]))(var223) /* as_line_pragma on <var223:Location>*/;
((void (*)(val*, val*))(var222->class->vft[COLOR_template__Template__add]))(var222, var224) /* add on <var222:Template>*/;
var225 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
var226 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
((void (*)(val*, val*))(var225->class->vft[COLOR_template__Template__add]))(var225, var226) /* add on <var225:Template>*/;
var227 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var227 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 113);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var227->class->vft[COLOR_c_tools__CCompilationUnit__add_local_function]))(var227, var_fc) /* add_local_function on <var227:nullable CPPCompilationUnit>*/;
}
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_extern_method for (self: Object, AExternCodeBlock, AExternPropdef, CCompilationUnit, AModule) */
void VIRTUAL_cpp__CPPLanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
cpp__CPPLanguage__compile_extern_method(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_extern_class for (self: CPPLanguage, AExternCodeBlock, AClassdef, CCompilationUnit, AModule) */
void cpp__CPPLanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_nmodule /* var nmodule: AModule */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_nmodule = p3;
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_extern_class for (self: Object, AExternCodeBlock, AClassdef, CCompilationUnit, AModule) */
void VIRTUAL_cpp__CPPLanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
cpp__CPPLanguage__compile_extern_class(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method cpp#CPPLanguage#get_ftype for (self: CPPLanguage, AExternCodeBlock, AClassdef): ForeignType */
val* cpp__CPPLanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var1 /* : ForeignCppType */;
val* var2 /* : String */;
var_block = p0;
var_m = p1;
var1 = NEW_cpp__ForeignCppType(&type_cpp__ForeignCppType);
var2 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_cpp__ForeignCppType__init]))(var1, var2) /* init on <var1:ForeignCppType>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#CPPLanguage#get_ftype for (self: Object, AExternCodeBlock, AClassdef): ForeignType */
val* VIRTUAL_cpp__CPPLanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var1 /* : ForeignType */;
var1 = cpp__CPPLanguage__get_ftype(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#CPPLanguage#compile_to_files for (self: CPPLanguage, AModule, String) */
void cpp__CPPLanguage__compile_to_files(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_compdir /* var compdir: String */;
val* var /* : nullable CPPCompilationUnit */;
val* var_cpp_file /* var cpp_file: nullable CPPCompilationUnit */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : Template */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : Template */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : nullable MModule */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
val* var25 /* : Template */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : ExternCppFile */;
val* var_file /* var file: ExternCppFile */;
val* var32 /* : Array[ExternFile] */;
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
var_nmodule = p0;
var_compdir = p1;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
var_cpp_file = var;
var1 = NULL;
if (var_cpp_file == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 123);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var_cpp_file->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var_cpp_file) /* header_custom on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = "extern \"C\" {\n";
var6 = 13;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*))(var3->class->vft[COLOR_template__Template__add]))(var3, var4) /* add on <var3:Template>*/;
var8 = ((val* (*)(val*))(var_cpp_file->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var_cpp_file) /* header_custom on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "#include \"";
var12 = 10;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 127);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_mmodule__MModule__name]))(var14) /* name on <var14:nullable MModule>*/;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "._ffi.h\"\n";
var19 = 9;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var15;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
((void (*)(val*, val*))(var8->class->vft[COLOR_template__Template__add]))(var8, var24) /* add on <var8:Template>*/;
var25 = ((val* (*)(val*))(var_cpp_file->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var_cpp_file) /* header_custom on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "}\n";
var29 = 2;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(var25->class->vft[COLOR_template__Template__add]))(var25, var27) /* add on <var25:Template>*/;
var31 = ((val* (*)(val*, val*, val*))(var_cpp_file->class->vft[COLOR_cpp__CPPCompilationUnit__write_to_files]))(var_cpp_file, var_nmodule, var_compdir) /* write_to_files on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)>*/;
var_file = var31;
var32 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_ffi_base__AModule__ffi_files]))(var_nmodule) /* ffi_files on <var_nmodule:AModule>*/;
((void (*)(val*, val*))(var32->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var32, var_file) /* add on <var32:Array[ExternFile]>*/;
var33 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_c__AModule__c_linker_options]))(var_nmodule) /* c_linker_options on <var_nmodule:AModule>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = " -lstdc++";
var37 = 9;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 2;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var35;
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_c__AModule__c_linker_options_61d]))(var_nmodule, var42) /* c_linker_options= on <var_nmodule:AModule>*/;
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_to_files for (self: Object, AModule, String) */
void VIRTUAL_cpp__CPPLanguage__compile_to_files(val* self, val* p0, val* p1) {
cpp__CPPLanguage__compile_to_files(self, p0, p1);
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_callback for (self: CPPLanguage, NitniCallback, AModule, MModule, CCompilationUnit) */
void cpp__CPPLanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_callback /* var callback: NitniCallback */;
val* var_nmodule /* var nmodule: AModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_ecc /* var ecc: CCompilationUnit */;
var_callback = p0;
var_nmodule = p1;
var_mmodule = p2;
var_ecc = p3;
((void (*)(val*, val*, val*))(var_callback->class->vft[COLOR_cpp__NitniCallback__compile_callback_to_cpp]))(var_callback, var_nmodule, var_mmodule) /* compile_callback_to_cpp on <var_callback:NitniCallback>*/;
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_callback for (self: Object, NitniCallback, AModule, MModule, CCompilationUnit) */
void VIRTUAL_cpp__CPPLanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
cpp__CPPLanguage__compile_callback(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method cpp#AExternCodeBlock#is_cpp for (self: AExternCodeBlock): Bool */
short int cpp__AExternCodeBlock__is_cpp(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable String */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
val* var13 /* : nullable String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
short int var19 /* : Bool */;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name]))(self) /* language_name on <self:AExternCodeBlock>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
var_ = var4;
if (var4){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce) {
var7 = varonce;
} else {
var8 = "c++";
var9 = 3;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (var6 == NULL) {
var11 = 0; /* <var7:String> cannot be null */
} else {
var11 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var7) /* == on <var6:nullable String>*/;
}
var_12 = var11;
if (var11){
var5 = var_12;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "c++ ";
var17 = 4;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 147);
show_backtrace(1);
} else {
var19 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_string__AbstractString__has_prefix]))(var13, var15) /* has_prefix on <var13:nullable String>*/;
}
var5 = var19;
}
var1 = var5;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#AExternCodeBlock#is_cpp for (self: Object): Bool */
short int VIRTUAL_cpp__AExternCodeBlock__is_cpp(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = cpp__AExternCodeBlock__is_cpp(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#AExternCodeBlock#is_cpp_body for (self: AExternCodeBlock): Bool */
short int cpp__AExternCodeBlock__is_cpp_body(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable String */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
val* var13 /* : nullable String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
short int var19 /* : Bool */;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name]))(self) /* language_name on <self:AExternCodeBlock>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
var_ = var4;
if (var4){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce) {
var7 = varonce;
} else {
var8 = "c++";
var9 = 3;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (var6 == NULL) {
var11 = 0; /* <var7:String> cannot be null */
} else {
var11 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var7) /* == on <var6:nullable String>*/;
}
var_12 = var11;
if (var11){
var5 = var_12;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "c++ body";
var17 = 8;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (var13 == NULL) {
var19 = 0; /* <var15:String> cannot be null */
} else {
var19 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var15) /* == on <var13:nullable String>*/;
}
var5 = var19;
}
var1 = var5;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#AExternCodeBlock#is_cpp_body for (self: Object): Bool */
short int VIRTUAL_cpp__AExternCodeBlock__is_cpp_body(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = cpp__AExternCodeBlock__is_cpp_body(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#AExternCodeBlock#is_cpp_header for (self: AExternCodeBlock): Bool */
short int cpp__AExternCodeBlock__is_cpp_header(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable String */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : nullable String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
short int var10 /* : Bool */;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name]))(self) /* language_name on <self:AExternCodeBlock>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
var_ = var4;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__AExternCodeBlock__language_name_lowered]))(self) /* language_name_lowered on <self:AExternCodeBlock>*/;
if (varonce) {
var6 = varonce;
} else {
var7 = "c++ header";
var8 = 10;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
if (var5 == NULL) {
var10 = 0; /* <var6:String> cannot be null */
} else {
var10 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var6) /* == on <var5:nullable String>*/;
}
var1 = var10;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#AExternCodeBlock#is_cpp_header for (self: Object): Bool */
short int VIRTUAL_cpp__AExternCodeBlock__is_cpp_header(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = cpp__AExternCodeBlock__is_cpp_header(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#CPPCompilationUnit#write_to_files for (self: CPPCompilationUnit, AModule, String): ExternCppFile */
val* cpp__CPPCompilationUnit__write_to_files(val* self, val* p0, val* p1) {
val* var /* : ExternCppFile */;
val* var_amodule /* var amodule: AModule */;
val* var_compdir /* var compdir: String */;
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
val* var_base_name /* var base_name: String */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var_17 /* var : Array[Object] */;
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
val* var28 /* : String */;
val* var_h_file /* var h_file: String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var_31 /* var : Array[Object] */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var_guard /* var guard: String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
val* var55 /* : Array[String] */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var_58 /* var : Array[Object] */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var_c_file /* var c_file: String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : Array[Object] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[Object] */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : Array[Object] */;
long var90 /* : Int */;
val* var_91 /* var : Array[Object] */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : Array[String] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[String] */;
val* var106 /* : Array[String] */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
val* var116 /* : ExternCppFile */;
val* var117 /* : Array[Object] */;
long var118 /* : Int */;
val* var_119 /* var : Array[Object] */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : String */;
val* var135 /* : String */;
var_amodule = p0;
var_compdir = p1;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_amodule) /* mmodule on <var_amodule:AModule>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 161);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_mmodule__MModule__name]))(var7) /* name on <var7:nullable MModule>*/;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "._ffi";
var12 = 5;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_base_name = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
var16 = 3;
((void (*)(val*, long))(var15->class->vft[COLOR_array__Array__with_capacity]))(var15, var16) /* with_capacity on <var15:Array[Object]>*/;
var_17 = var15;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "";
var21 = 0;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_17->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_17, var19) /* add on <var_17:Array[Object]>*/;
((void (*)(val*, val*))(var_17->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_17, var_base_name) /* add on <var_17:Array[Object]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = ".hpp";
var26 = 4;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_17->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_17, var24) /* add on <var_17:Array[Object]>*/;
var28 = ((val* (*)(val*))(var_17->class->vft[COLOR_string__Object__to_s]))(var_17) /* to_s on <var_17:Array[Object]>*/;
var_h_file = var28;
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
var30 = 3;
((void (*)(val*, long))(var29->class->vft[COLOR_array__Array__with_capacity]))(var29, var30) /* with_capacity on <var29:Array[Object]>*/;
var_31 = var29;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "";
var35 = 0;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*))(var_31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_31, var33) /* add on <var_31:Array[Object]>*/;
var37 = ((val* (*)(val*))(var_amodule->class->vft[COLOR_nitni_base__AModule__cname]))(var_amodule) /* cname on <var_amodule:AModule>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:String>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_string__AbstractString__to_upper]))(var38) /* to_upper on <var38:String>*/;
((void (*)(val*, val*))(var_31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_31, var39) /* add on <var_31:Array[Object]>*/;
if (varonce40) {
var41 = varonce40;
} else {
var42 = "_NIT_HPP";
var43 = 8;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
((void (*)(val*, val*))(var_31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_31, var41) /* add on <var_31:Array[Object]>*/;
var45 = ((val* (*)(val*))(var_31->class->vft[COLOR_string__Object__to_s]))(var_31) /* to_s on <var_31:Array[Object]>*/;
var_guard = var45;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "/";
var49 = 1;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 3;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var47;
((struct instance_array__NativeArray*)var53)->values[2] = (val*) var_h_file;
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
var55 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var55->class->vft[COLOR_array__Array__init]))(var55) /* init on <var55:Array[String]>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_ffi_base__CCompilationUnit__write_header_to_file]))(self, var_amodule, var54, var55, var_guard) /* write_header_to_file on <self:CPPCompilationUnit>*/;
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
var57 = 3;
((void (*)(val*, long))(var56->class->vft[COLOR_array__Array__with_capacity]))(var56, var57) /* with_capacity on <var56:Array[Object]>*/;
var_58 = var56;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "";
var62 = 0;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
((void (*)(val*, val*))(var_58->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_58, var60) /* add on <var_58:Array[Object]>*/;
((void (*)(val*, val*))(var_58->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_58, var_base_name) /* add on <var_58:Array[Object]>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = ".cpp";
var67 = 4;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
((void (*)(val*, val*))(var_58->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_58, var65) /* add on <var_58:Array[Object]>*/;
var69 = ((val* (*)(val*))(var_58->class->vft[COLOR_string__Object__to_s]))(var_58) /* to_s on <var_58:Array[Object]>*/;
var_c_file = var69;
if (varonce70) {
var71 = varonce70;
} else {
var72 = "/";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 3;
var77 = NEW_array__NativeArray(var76, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var77)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var77)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var77)->values[2] = (val*) var_c_file;
((void (*)(val*, val*, long))(var75->class->vft[COLOR_array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
var78 = ((val* (*)(val*))(var75->class->vft[COLOR_string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = "<string>";
var82 = 8;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "<iostream>";
var87 = 10;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = NEW_array__Array(&type_array__Arraykernel__Object);
var90 = 3;
((void (*)(val*, long))(var89->class->vft[COLOR_array__Array__with_capacity]))(var89, var90) /* with_capacity on <var89:Array[Object]>*/;
var_91 = var89;
if (varonce92) {
var93 = varonce92;
} else {
var94 = "\"";
var95 = 1;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
((void (*)(val*, val*))(var_91->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_91, var93) /* add on <var_91:Array[Object]>*/;
((void (*)(val*, val*))(var_91->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_91, var_h_file) /* add on <var_91:Array[Object]>*/;
if (varonce97) {
var98 = varonce97;
} else {
var99 = "\"";
var100 = 1;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
((void (*)(val*, val*))(var_91->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_91, var98) /* add on <var_91:Array[Object]>*/;
var102 = ((val* (*)(val*))(var_91->class->vft[COLOR_string__Object__to_s]))(var_91) /* to_s on <var_91:Array[Object]>*/;
var103 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var103 = array_instance Array[String] */
var104 = 3;
var105 = NEW_array__NativeArray(var104, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var105)->values[0] = (val*) var80;
((struct instance_array__NativeArray*)var105)->values[1] = (val*) var85;
((struct instance_array__NativeArray*)var105)->values[2] = (val*) var102;
((void (*)(val*, val*, long))(var103->class->vft[COLOR_array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[String]>*/;
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_ffi_base__CCompilationUnit__write_body_to_file]))(self, var_amodule, var78, var103) /* write_body_to_file on <self:CPPCompilationUnit>*/;
var106 = ((val* (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__files]))(self) /* files on <self:CPPCompilationUnit>*/;
if (varonce107) {
var108 = varonce107;
} else {
var109 = "/";
var110 = 1;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 3;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var_compdir;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var108;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var_c_file;
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
((void (*)(val*, val*))(var106->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var106, var115) /* add on <var106:Array[String]>*/;
var116 = NEW_cpp__ExternCppFile(&type_cpp__ExternCppFile);
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
var118 = 5;
((void (*)(val*, long))(var117->class->vft[COLOR_array__Array__with_capacity]))(var117, var118) /* with_capacity on <var117:Array[Object]>*/;
var_119 = var117;
if (varonce120) {
var121 = varonce120;
} else {
var122 = "";
var123 = 0;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
((void (*)(val*, val*))(var_119->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_119, var121) /* add on <var_119:Array[Object]>*/;
((void (*)(val*, val*))(var_119->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_119, var_compdir) /* add on <var_119:Array[Object]>*/;
if (varonce125) {
var126 = varonce125;
} else {
var127 = "/";
var128 = 1;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
((void (*)(val*, val*))(var_119->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_119, var126) /* add on <var_119:Array[Object]>*/;
((void (*)(val*, val*))(var_119->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_119, var_c_file) /* add on <var_119:Array[Object]>*/;
if (varonce130) {
var131 = varonce130;
} else {
var132 = "";
var133 = 0;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
((void (*)(val*, val*))(var_119->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_119, var131) /* add on <var_119:Array[Object]>*/;
var135 = ((val* (*)(val*))(var_119->class->vft[COLOR_string__Object__to_s]))(var_119) /* to_s on <var_119:Array[Object]>*/;
((void (*)(val*, val*, val*))(var116->class->vft[COLOR_cpp__ExternCppFile__init]))(var116, var135, var_amodule) /* init on <var116:ExternCppFile>*/;
var = var116;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#CPPCompilationUnit#write_to_files for (self: Object, AModule, String): ExternCppFile */
val* VIRTUAL_cpp__CPPCompilationUnit__write_to_files(val* self, val* p0, val* p1) {
val* var /* : ExternCppFile */;
val* var1 /* : ExternCppFile */;
var1 = cpp__CPPCompilationUnit__write_to_files(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#CPPCompilationUnit#init for (self: CPPCompilationUnit) */
void cpp__CPPCompilationUnit__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_c_tools__CCompilationUnit__init]))(self) /* init on <self:CPPCompilationUnit>*/;
RET_LABEL:;
}
/* method cpp#CPPCompilationUnit#init for (self: Object) */
void VIRTUAL_cpp__CPPCompilationUnit__init(val* self) {
cpp__CPPCompilationUnit__init(self);
RET_LABEL:;
}
/* method cpp#ExternCppFile#amodule for (self: ExternCppFile): AModule */
val* cpp__ExternCppFile__amodule(val* self) {
val* var /* : AModule */;
val* var1 /* : AModule */;
var1 = self->attrs[COLOR_cpp__ExternCppFile___64damodule].val; /* @amodule on <self:ExternCppFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @amodule");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 180);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#amodule for (self: Object): AModule */
val* VIRTUAL_cpp__ExternCppFile__amodule(val* self) {
val* var /* : AModule */;
val* var1 /* : AModule */;
var1 = cpp__ExternCppFile__amodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#amodule= for (self: ExternCppFile, AModule) */
void cpp__ExternCppFile__amodule_61d(val* self, val* p0) {
self->attrs[COLOR_cpp__ExternCppFile___64damodule].val = p0; /* @amodule on <self:ExternCppFile> */
RET_LABEL:;
}
/* method cpp#ExternCppFile#amodule= for (self: Object, AModule) */
void VIRTUAL_cpp__ExternCppFile__amodule_61d(val* self, val* p0) {
cpp__ExternCppFile__amodule_61d(self, p0);
RET_LABEL:;
}
/* method cpp#ExternCppFile#init for (self: ExternCppFile, String, AModule) */
void cpp__ExternCppFile__init(val* self, val* p0, val* p1) {
val* var_path /* var path: String */;
val* var_amodule /* var amodule: AModule */;
var_path = p0;
var_amodule = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_ffi_base__ExternFile__init]))(self, p0) /* init on <self:ExternCppFile>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_cpp__ExternCppFile__amodule_61d]))(self, var_amodule) /* amodule= on <self:ExternCppFile>*/;
RET_LABEL:;
}
/* method cpp#ExternCppFile#init for (self: Object, String, AModule) */
void VIRTUAL_cpp__ExternCppFile__init(val* self, val* p0, val* p1) {
cpp__ExternCppFile__init(self, p0, p1);
RET_LABEL:;
}
/* method cpp#ExternCppFile#makefile_rule_name for (self: ExternCppFile): String */
val* cpp__ExternCppFile__makefile_rule_name(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ExternFile__filename]))(self) /* filename on <self:ExternCppFile>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = ((val* (*)(val*, val*))(var7->class->vft[COLOR_file__String__basename]))(var7, var9) /* basename on <var7:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = ".o";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
var19 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#makefile_rule_name for (self: Object): String */
val* VIRTUAL_cpp__ExternCppFile__makefile_rule_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = cpp__ExternCppFile__makefile_rule_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#makefile_rule_content for (self: ExternCppFile): String */
val* cpp__ExternCppFile__makefile_rule_content(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : AModule */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 7;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "g++ ";
var5 = 4;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__ExternCppFile__amodule]))(self) /* amodule on <self:ExternCppFile>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_cpp__AModule__cpp_compiler_options]))(var7) /* cpp_compiler_options on <var7:AModule>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = " -c ";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ExternFile__filename]))(self) /* filename on <self:ExternCppFile>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "";
var18 = 0;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_file__String__basename]))(var14, var16) /* basename on <var14:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var20) /* add on <var_:Array[Object]>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = " -o ";
var24 = 4;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var22) /* add on <var_:Array[Object]>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ExternFile__filename]))(self) /* filename on <self:ExternCppFile>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "";
var30 = 0;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = ((val* (*)(val*, val*))(var26->class->vft[COLOR_file__String__basename]))(var26, var28) /* basename on <var26:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var32) /* add on <var_:Array[Object]>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = ".o";
var36 = 2;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var34) /* add on <var_:Array[Object]>*/;
var38 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#makefile_rule_content for (self: Object): String */
val* VIRTUAL_cpp__ExternCppFile__makefile_rule_content(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = cpp__ExternCppFile__makefile_rule_content(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ForeignCppType#cpp_type for (self: ForeignCppType): String */
val* cpp__ForeignCppType__cpp_type(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_cpp__ForeignCppType___64dcpp_type].val; /* @cpp_type on <self:ForeignCppType> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cpp_type");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 194);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ForeignCppType#cpp_type for (self: Object): String */
val* VIRTUAL_cpp__ForeignCppType__cpp_type(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = cpp__ForeignCppType__cpp_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ForeignCppType#cpp_type= for (self: ForeignCppType, String) */
void cpp__ForeignCppType__cpp_type_61d(val* self, val* p0) {
self->attrs[COLOR_cpp__ForeignCppType___64dcpp_type].val = p0; /* @cpp_type on <self:ForeignCppType> */
RET_LABEL:;
}
/* method cpp#ForeignCppType#cpp_type= for (self: Object, String) */
void VIRTUAL_cpp__ForeignCppType__cpp_type_61d(val* self, val* p0) {
cpp__ForeignCppType__cpp_type_61d(self, p0);
RET_LABEL:;
}
/* method cpp#ForeignCppType#init for (self: ForeignCppType, String) */
void cpp__ForeignCppType__init(val* self, val* p0) {
val* var_cpp_type /* var cpp_type: String */;
var_cpp_type = p0;
((void (*)(val*))(self->class->vft[COLOR_ffi_base__ForeignType__init]))(self) /* init on <self:ForeignCppType>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_cpp__ForeignCppType__cpp_type_61d]))(self, var_cpp_type) /* cpp_type= on <self:ForeignCppType>*/;
RET_LABEL:;
}
/* method cpp#ForeignCppType#init for (self: Object, String) */
void VIRTUAL_cpp__ForeignCppType__init(val* self, val* p0) {
cpp__ForeignCppType__init(self, p0);
RET_LABEL:;
}
/* method cpp#NitniCallback#compile_callback_to_cpp for (self: NitniCallback, AModule, MModule) */
void cpp__NitniCallback__compile_callback_to_cpp(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_mmodule /* var mmodule: MModule */;
var_nmodule = p0;
var_mmodule = p1;
RET_LABEL:;
}
/* method cpp#NitniCallback#compile_callback_to_cpp for (self: Object, AModule, MModule) */
void VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp(val* self, val* p0, val* p1) {
cpp__NitniCallback__compile_callback_to_cpp(self, p0, p1);
RET_LABEL:;
}
/* method cpp#Object#cpp_call_context for (self: Object): CppCallContext */
val* cpp__Object__cpp_call_context(val* self) {
val* var /* : CppCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : CppCallContext */;
val* var2 /* : CppCallContext */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_cpp__CppCallContext(&type_cpp__CppCallContext);
((void (*)(val*))(var2->class->vft[COLOR_cpp__CppCallContext__init]))(var2) /* init on <var2:CppCallContext>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#Object#cpp_call_context for (self: Object): CppCallContext */
val* VIRTUAL_cpp__Object__cpp_call_context(val* self) {
val* var /* : CppCallContext */;
val* var1 /* : CppCallContext */;
var1 = cpp__Object__cpp_call_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#Object#to_cpp_call_context for (self: Object): ToCppCallContext */
val* cpp__Object__to_cpp_call_context(val* self) {
val* var /* : ToCppCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : ToCppCallContext */;
val* var2 /* : ToCppCallContext */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_cpp__ToCppCallContext(&type_cpp__ToCppCallContext);
((void (*)(val*))(var2->class->vft[COLOR_cpp__ToCppCallContext__init]))(var2) /* init on <var2:ToCppCallContext>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#Object#to_cpp_call_context for (self: Object): ToCppCallContext */
val* VIRTUAL_cpp__Object__to_cpp_call_context(val* self) {
val* var /* : ToCppCallContext */;
val* var1 /* : ToCppCallContext */;
var1 = cpp__Object__to_cpp_call_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#Object#from_cpp_call_context for (self: Object): FromCppCallContext */
val* cpp__Object__from_cpp_call_context(val* self) {
val* var /* : FromCppCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : FromCppCallContext */;
val* var2 /* : FromCppCallContext */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_cpp__FromCppCallContext(&type_cpp__FromCppCallContext);
((void (*)(val*))(var2->class->vft[COLOR_cpp__FromCppCallContext__init]))(var2) /* init on <var2:FromCppCallContext>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#Object#from_cpp_call_context for (self: Object): FromCppCallContext */
val* VIRTUAL_cpp__Object__from_cpp_call_context(val* self) {
val* var /* : FromCppCallContext */;
val* var1 /* : FromCppCallContext */;
var1 = cpp__Object__from_cpp_call_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#MExplicitCall#compile_callback_to_cpp for (self: MExplicitCall, AModule, MModule) */
void cpp__MExplicitCall__compile_callback_to_cpp(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : MClassType */;
val* var3 /* : null */;
val* var4 /* : SignatureLength */;
val* var5 /* : FromCppCallContext */;
val* var6 /* : String */;
val* var_cpp_signature /* var cpp_signature: String */;
val* var7 /* : MClassType */;
val* var8 /* : null */;
val* var9 /* : SignatureLength */;
val* var10 /* : FromCppCallContext */;
val* var11 /* : null */;
val* var12 /* : String */;
val* var_ccall /* var ccall: String */;
val* var13 /* : CFunction */;
val* var_fc /* var fc: CFunction */;
val* var14 /* : Template */;
val* var15 /* : nullable CPPCompilationUnit */;
var_nmodule = p0;
var_mmodule = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__mproperty]))(self) /* mproperty on <self:MExplicitCall>*/;
var_mproperty = var;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var1 = 0;
} else {
var1 = var_mproperty->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 216);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var3 = NULL;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__short_signature]))(self) /* short_signature on <self:MExplicitCall>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__from_cpp_call_context]))(self) /* from_cpp_call_context on <self:MExplicitCall>*/;
var6 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var2, var_mmodule, var3, var4, var5) /* build_csignature on <var_mproperty:MProperty(MMethod)>*/;
var_cpp_signature = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_callbacks__MExplicitCall__recv_mtype]))(self) /* recv_mtype on <self:MExplicitCall>*/;
var8 = NULL;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:MExplicitCall>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__from_cpp_call_context]))(self) /* from_cpp_call_context on <self:MExplicitCall>*/;
var11 = NULL;
var12 = ((val* (*)(val*, val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_ccall]))(var_mproperty, var7, var_mmodule, var8, var9, var10, var11) /* build_ccall on <var_mproperty:MProperty(MMethod)>*/;
var_ccall = var12;
var13 = NEW_c_tools__CFunction(&type_c_tools__CFunction);
((void (*)(val*, val*))(var13->class->vft[COLOR_c_tools__CFunction__init]))(var13, var_cpp_signature) /* init on <var13:CFunction>*/;
var_fc = var13;
var14 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_template__Template__add]))(var14, var_ccall) /* add on <var14:Template>*/;
var15 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 222);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var15->class->vft[COLOR_c_tools__CCompilationUnit__add_local_function]))(var15, var_fc) /* add_local_function on <var15:nullable CPPCompilationUnit>*/;
}
RET_LABEL:;
}
/* method cpp#MExplicitCall#compile_callback_to_cpp for (self: Object, AModule, MModule) */
void VIRTUAL_cpp__MExplicitCall__compile_callback_to_cpp(val* self, val* p0, val* p1) {
cpp__MExplicitCall__compile_callback_to_cpp(self, p0, p1);
RET_LABEL:;
}
/* method cpp#CppCallContext#name_mtype for (self: CppCallContext, MType): String */
val* cpp__CppCallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : MClass */;
val* var3 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : String */;
val* var8 /* : String */;
var_mtype = p0;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var1 = 0;
} else {
var1 = var_mtype->type->type_table[cltype] == idtype;
}
if (var1){
var2 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MType(MClassType)>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_extern_classes__MClass__ftype]))(var2) /* ftype on <var2:MClass>*/;
var_ftype = var3;
/* <var_ftype:nullable ForeignType> isa ForeignCppType */
cltype5 = type_cpp__ForeignCppType.color;
idtype6 = type_cpp__ForeignCppType.id;
if(var_ftype == NULL) {
var4 = 0;
} else {
if(cltype5 >= var_ftype->type->table_size) {
var4 = 0;
} else {
var4 = var_ftype->type->type_table[cltype5] == idtype6;
}
}
if (var4){
var7 = ((val* (*)(val*))(var_ftype->class->vft[COLOR_cpp__ForeignCppType__cpp_type]))(var_ftype) /* cpp_type on <var_ftype:nullable ForeignType(ForeignCppType)>*/;
var = var7;
goto RET_LABEL;
} else {
}
} else {
}
var8 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_nitni_base__MType__cname]))(var_mtype) /* cname on <var_mtype:MType>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#CppCallContext#name_mtype for (self: Object, MType): String */
val* VIRTUAL_cpp__CppCallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = cpp__CppCallContext__name_mtype(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#CppCallContext#init for (self: CppCallContext) */
void cpp__CppCallContext__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_nitni_utilities__CallContext__init]))(self) /* init on <self:CppCallContext>*/;
RET_LABEL:;
}
/* method cpp#CppCallContext#init for (self: Object) */
void VIRTUAL_cpp__CppCallContext__init(val* self) {
cpp__CppCallContext__init(self);
RET_LABEL:;
}
/* method cpp#ToCppCallContext#cast_to for (self: ToCppCallContext, MType, String): String */
val* cpp__ToCppCallContext__cast_to(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : MClass */;
val* var4 /* : nullable ForeignType */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var_10 /* var : Array[Object] */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
var_mtype = p0;
var_name = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var2;
if (var2){
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MType(MClassType)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_extern_classes__MClass__ftype]))(var3) /* ftype on <var3:MClass>*/;
/* <var4:nullable ForeignType> isa ForeignCppType */
cltype6 = type_cpp__ForeignCppType.color;
idtype7 = type_cpp__ForeignCppType.id;
if(var4 == NULL) {
var5 = 0;
} else {
if(cltype6 >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype6] == idtype7;
}
}
var1 = var5;
} else {
var1 = var_;
}
if (var1){
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
var9 = 3;
((void (*)(val*, long))(var8->class->vft[COLOR_array__Array__with_capacity]))(var8, var9) /* with_capacity on <var8:Array[Object]>*/;
var_10 = var8;
if (varonce) {
var11 = varonce;
} else {
var12 = "(void*)(";
var13 = 8;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
((void (*)(val*, val*))(var_10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_10, var11) /* add on <var_10:Array[Object]>*/;
((void (*)(val*, val*))(var_10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_10, var_name) /* add on <var_10:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = ")";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_10, var16) /* add on <var_10:Array[Object]>*/;
var20 = ((val* (*)(val*))(var_10->class->vft[COLOR_string__Object__to_s]))(var_10) /* to_s on <var_10:Array[Object]>*/;
var = var20;
goto RET_LABEL;
} else {
var = var_name;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method cpp#ToCppCallContext#cast_to for (self: Object, MType, String): String */
val* VIRTUAL_cpp__ToCppCallContext__cast_to(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = cpp__ToCppCallContext__cast_to(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ToCppCallContext#init for (self: ToCppCallContext) */
void cpp__ToCppCallContext__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_cpp__CppCallContext__init]))(self) /* init on <self:ToCppCallContext>*/;
RET_LABEL:;
}
/* method cpp#ToCppCallContext#init for (self: Object) */
void VIRTUAL_cpp__ToCppCallContext__init(val* self) {
cpp__ToCppCallContext__init(self);
RET_LABEL:;
}
/* method cpp#FromCppCallContext#cast_from for (self: FromCppCallContext, MType, String): String */
val* cpp__FromCppCallContext__cast_from(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : MClass */;
val* var4 /* : nullable ForeignType */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var_10 /* var : Array[Object] */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
var_mtype = p0;
var_name = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var2;
if (var2){
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MType(MClassType)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_extern_classes__MClass__ftype]))(var3) /* ftype on <var3:MClass>*/;
/* <var4:nullable ForeignType> isa ForeignCppType */
cltype6 = type_cpp__ForeignCppType.color;
idtype7 = type_cpp__ForeignCppType.id;
if(var4 == NULL) {
var5 = 0;
} else {
if(cltype6 >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype6] == idtype7;
}
}
var1 = var5;
} else {
var1 = var_;
}
if (var1){
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
var9 = 5;
((void (*)(val*, long))(var8->class->vft[COLOR_array__Array__with_capacity]))(var8, var9) /* with_capacity on <var8:Array[Object]>*/;
var_10 = var8;
if (varonce) {
var11 = varonce;
} else {
var12 = "static_cast<";
var13 = 12;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
((void (*)(val*, val*))(var_10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_10, var11) /* add on <var_10:Array[Object]>*/;
var15 = ((val* (*)(val*, val*))(self->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(self, var_mtype) /* name_mtype on <self:FromCppCallContext>*/;
((void (*)(val*, val*))(var_10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_10, var15) /* add on <var_10:Array[Object]>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = ">(";
var19 = 2;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
((void (*)(val*, val*))(var_10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_10, var17) /* add on <var_10:Array[Object]>*/;
((void (*)(val*, val*))(var_10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_10, var_name) /* add on <var_10:Array[Object]>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = ")";
var24 = 1;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_10, var22) /* add on <var_10:Array[Object]>*/;
var26 = ((val* (*)(val*))(var_10->class->vft[COLOR_string__Object__to_s]))(var_10) /* to_s on <var_10:Array[Object]>*/;
var = var26;
goto RET_LABEL;
} else {
var = var_name;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method cpp#FromCppCallContext#cast_from for (self: Object, MType, String): String */
val* VIRTUAL_cpp__FromCppCallContext__cast_from(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = cpp__FromCppCallContext__cast_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#FromCppCallContext#init for (self: FromCppCallContext) */
void cpp__FromCppCallContext__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_cpp__CppCallContext__init]))(self) /* init on <self:FromCppCallContext>*/;
RET_LABEL:;
}
/* method cpp#FromCppCallContext#init for (self: Object) */
void VIRTUAL_cpp__FromCppCallContext__init(val* self) {
cpp__FromCppCallContext__init(self);
RET_LABEL:;
}
