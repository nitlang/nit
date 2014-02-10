#include "cpp.sep.0.h"
/* method cpp#FFILanguageAssignationPhase#cpp_language for (self: FFILanguageAssignationPhase): FFILanguage */
val* cpp__FFILanguageAssignationPhase__cpp_language(val* self) {
val* var /* : FFILanguage */;
val* var1 /* : FFILanguage */;
var1 = self->attrs[COLOR_cpp__FFILanguageAssignationPhase___64dcpp_language].val; /* @cpp_language on <self:FFILanguageAssignationPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cpp_language");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 24);
exit(1);
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
exit(1);
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
val* var6 /* : Writer */;
val* var7 /* : Location */;
val* var8 /* : String */;
val* var9 /* : Writer */;
val* var10 /* : nullable CPPCompilationUnit */;
val* var11 /* : Writer */;
val* var12 /* : String */;
val* var13 /* : Writer */;
short int var14 /* : Bool */;
val* var15 /* : nullable CPPCompilationUnit */;
val* var16 /* : Writer */;
val* var17 /* : Location */;
val* var18 /* : String */;
val* var19 /* : Writer */;
val* var20 /* : nullable CPPCompilationUnit */;
val* var21 /* : Writer */;
val* var22 /* : String */;
val* var23 /* : Writer */;
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
CHECK_NEW_cpp__CPPCompilationUnit(var3);
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file_61d]))(var_nmodule, var3) /* cpp_file= on <var_nmodule:AModule>*/;
} else {
}
var4 = ((short int (*)(val*))(var_block->class->vft[COLOR_cpp__AExternCodeBlock__is_cpp_header]))(var_block) /* is_cpp_header on <var_block:AExternCodeBlock>*/;
if (var4){
var5 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 42);
exit(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var5) /* header_custom on <var5:nullable CPPCompilationUnit>*/;
}
var7 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_c__Location__as_line_pragma]))(var7) /* as_line_pragma on <var7:Location>*/;
var9 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_compiling_writer__Writer__add]))(var6, var8) /* add on <var6:Writer>*/;
var9;
var10 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 43);
exit(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var10) /* header_custom on <var10:nullable CPPCompilationUnit>*/;
}
var12 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
var13 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_compiling_writer__Writer__add]))(var11, var12) /* add on <var11:Writer>*/;
var13;
} else {
var14 = ((short int (*)(val*))(var_block->class->vft[COLOR_cpp__AExternCodeBlock__is_cpp_body]))(var_block) /* is_cpp_body on <var_block:AExternCodeBlock>*/;
if (var14){
var15 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 45);
exit(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_c_tools__CCompilationUnit__body_custom]))(var15) /* body_custom on <var15:nullable CPPCompilationUnit>*/;
}
var17 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_c__Location__as_line_pragma]))(var17) /* as_line_pragma on <var17:Location>*/;
var19 = ((val* (*)(val*, val*))(var16->class->vft[COLOR_compiling_writer__Writer__add]))(var16, var18) /* add on <var16:Writer>*/;
var19;
var20 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var20 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 46);
exit(1);
} else {
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_c_tools__CCompilationUnit__body_custom]))(var20) /* body_custom on <var20:nullable CPPCompilationUnit>*/;
}
var22 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
var23 = ((val* (*)(val*, val*))(var21->class->vft[COLOR_compiling_writer__Writer__add]))(var21, var22) /* add on <var21:Writer>*/;
var23;
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
val* var_blind_csig /* var blind_csig: String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : SignatureLength */;
val* var24 /* : CppCallContext */;
val* var25 /* : String */;
val* var_cpp_signature /* var cpp_signature: String */;
val* var26 /* : Writer */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : Writer */;
val* var37 /* : nullable CPPCompilationUnit */;
val* var38 /* : Writer */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Writer */;
val* var45 /* : nullable CPPCompilationUnit */;
val* var46 /* : Writer */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
val* var56 /* : Writer */;
val* var57 /* : nullable CPPCompilationUnit */;
val* var58 /* : Writer */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : Writer */;
val* var65 /* : ExternCFunction */;
val* var_fc /* var fc: CFunction */;
val* var66 /* : Writer */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : SignatureLength */;
val* var73 /* : CppCallContext */;
val* var74 /* : null */;
val* var75 /* : String */;
val* var76 /* : Writer */;
val* var77 /* : Writer */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
val* var83 /* : Writer */;
val* var84 /* : CFunction */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var_param_name /* var param_name: String */;
val* var92 /* : ToCppCallContext */;
val* var93 /* : String */;
val* var_type_name /* var type_name: String */;
val* var94 /* : MClass */;
val* var95 /* : nullable ForeignType */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
val* var99 /* : Writer */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
val* var120 /* : Array[Object] */;
long var121 /* : Int */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : String */;
val* var124 /* : Writer */;
val* var125 /* : Writer */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
val* var141 /* : Array[Object] */;
long var142 /* : Int */;
val* var143 /* : NativeArray[Object] */;
val* var144 /* : String */;
val* var145 /* : Writer */;
val* var146 /* : nullable MPropDef */;
val* var147 /* : nullable MSignature */;
val* var148 /* : Array[MParameter] */;
val* var149 /* : Iterator[nullable Object] */;
short int var150 /* : Bool */;
val* var151 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var152 /* : String */;
val* var_param_name153 /* var param_name: String */;
val* var154 /* : ToCppCallContext */;
val* var155 /* : MType */;
val* var156 /* : String */;
val* var_type_name157 /* var type_name: String */;
val* var158 /* : MClass */;
val* var159 /* : nullable ForeignType */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
val* var163 /* : Writer */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : String */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : String */;
val* var184 /* : Array[Object] */;
long var185 /* : Int */;
val* var186 /* : NativeArray[Object] */;
val* var187 /* : String */;
val* var188 /* : Writer */;
val* var189 /* : Writer */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : String */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : String */;
val* var205 /* : Array[Object] */;
long var206 /* : Int */;
val* var207 /* : NativeArray[Object] */;
val* var208 /* : String */;
val* var209 /* : Writer */;
val* var210 /* : Writer */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
val* var216 /* : SignatureLength */;
val* var217 /* : CppCallContext */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : String */;
val* var223 /* : String */;
val* var224 /* : Writer */;
val* var225 /* : Writer */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : String */;
val* var231 /* : Writer */;
val* var232 /* : nullable CPPCompilationUnit */;
val* var233 /* : CFunction */;
val* var234 /* : Writer */;
val* var235 /* : Location */;
val* var236 /* : String */;
val* var237 /* : Writer */;
val* var238 /* : Writer */;
val* var239 /* : String */;
val* var240 /* : Writer */;
val* var241 /* : nullable CPPCompilationUnit */;
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
CHECK_NEW_cpp__CPPCompilationUnit(var3);
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file_61d]))(var_nmodule, var3) /* cpp_file= on <var_nmodule:AModule>*/;
} else {
}
var4 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 54);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 55);
exit(1);
}
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_modelize_class__AClassdef__mclass]))(var5) /* mclass on <var5:nullable ANode(AClassdef)>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 55);
exit(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MClass__mclass_type]))(var7) /* mclass_type on <var7:nullable MClass>*/;
}
var_mclass_type = var8;
var9 = ((val* (*)(val*))(var_m->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_m) /* mpropdef on <var_m:AExternPropdef>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 56);
exit(1);
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
var_blind_csig = var17;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "___cpp_impl";
var21 = 11;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:CPPLanguage>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__cpp_call_context]))(self) /* cpp_call_context on <self:CPPLanguage>*/;
var25 = ((val* (*)(val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_csignature]))(var_mproperty, var_mclass_type, var_mmodule, var19, var23, var24) /* build_csignature on <var_mproperty:MMethod>*/;
var_cpp_signature = var25;
var26 = ((val* (*)(val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__body_decl]))(var_ecc) /* body_decl on <var_ecc:CCompilationUnit>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = ";\n";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 2;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var_blind_csig;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
CHECK_NEW_array__Array(var32);
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
var36 = ((val* (*)(val*, val*))(var26->class->vft[COLOR_compiling_writer__Writer__add]))(var26, var35) /* add on <var26:Writer>*/;
var36;
var37 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 68);
exit(1);
} else {
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var37) /* header_decl on <var37:nullable CPPCompilationUnit>*/;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "extern \"C\" {\n";
var42 = 13;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = ((val* (*)(val*, val*))(var38->class->vft[COLOR_compiling_writer__Writer__add]))(var38, var40) /* add on <var38:Writer>*/;
var44;
var45 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var45 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 69);
exit(1);
} else {
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var45) /* header_decl on <var45:nullable CPPCompilationUnit>*/;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = ";\n";
var50 = 2;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 2;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var_blind_csig;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var48;
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
CHECK_NEW_array__Array(var52);
}
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
var56 = ((val* (*)(val*, val*))(var46->class->vft[COLOR_compiling_writer__Writer__add]))(var46, var55) /* add on <var46:Writer>*/;
var56;
var57 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var57 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 70);
exit(1);
} else {
var58 = ((val* (*)(val*))(var57->class->vft[COLOR_c_tools__CCompilationUnit__header_decl]))(var57) /* header_decl on <var57:nullable CPPCompilationUnit>*/;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "}\n";
var62 = 2;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*, val*))(var58->class->vft[COLOR_compiling_writer__Writer__add]))(var58, var60) /* add on <var58:Writer>*/;
var64;
var65 = NEW_c__ExternCFunction(&type_c__ExternCFunction);
((void (*)(val*, val*, val*))(var65->class->vft[COLOR_c__ExternCFunction__init]))(var65, var_m, var_mmodule) /* init on <var65:ExternCFunction>*/;
CHECK_NEW_c__ExternCFunction(var65);
var_fc = var65;
var66 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "___cpp_impl_mid";
var70 = 15;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:CPPLanguage>*/;
var73 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__cpp_call_context]))(self) /* cpp_call_context on <self:CPPLanguage>*/;
var74 = NULL;
var75 = ((val* (*)(val*, val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_ccall]))(var_mproperty, var_mclass_type, var_mmodule, var68, var72, var73, var74) /* build_ccall on <var_mproperty:MMethod>*/;
var76 = ((val* (*)(val*, val*))(var66->class->vft[COLOR_compiling_writer__Writer__add]))(var66, var75) /* add on <var66:Writer>*/;
var76;
var77 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce78) {
var79 = varonce78;
} else {
var80 = "\n";
var81 = 1;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = ((val* (*)(val*, val*))(var77->class->vft[COLOR_compiling_writer__Writer__add]))(var77, var79) /* add on <var77:Writer>*/;
var83;
((void (*)(val*, val*))(var_ecc->class->vft[COLOR_c_tools__CCompilationUnit__add_exported_function]))(var_ecc, var_fc) /* add_exported_function on <var_ecc:CCompilationUnit>*/;
var84 = NEW_c_tools__CFunction(&type_c_tools__CFunction);
((void (*)(val*, val*))(var84->class->vft[COLOR_c_tools__CFunction__init]))(var84, var_blind_csig) /* init on <var84:CFunction>*/;
CHECK_NEW_c_tools__CFunction(var84);
var_fc = var84;
var85 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MMethod>*/;
var86 = !var85;
if (var86){
if (varonce87) {
var88 = varonce87;
} else {
var89 = "recv";
var90 = 4;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var_param_name = var88;
var92 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__to_cpp_call_context]))(self) /* to_cpp_call_context on <self:CPPLanguage>*/;
var93 = ((val* (*)(val*, val*))(var92->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(var92, var_mclass_type) /* name_mtype on <var92:ToCppCallContext>*/;
var_type_name = var93;
var94 = ((val* (*)(val*))(var_mclass_type->class->vft[COLOR_model__MClassType__mclass]))(var_mclass_type) /* mclass on <var_mclass_type:MClassType>*/;
var95 = ((val* (*)(val*))(var94->class->vft[COLOR_extern_classes__MClass__ftype]))(var94) /* ftype on <var94:MClass>*/;
/* <var95:nullable ForeignType> isa ForeignCppType */
cltype97 = type_cpp__ForeignCppType.color;
idtype98 = type_cpp__ForeignCppType.id;
if(var95 == NULL) {
var96 = 0;
} else {
if(cltype97 >= var95->type->table_size) {
var96 = 0;
} else {
var96 = var95->type->type_table[cltype97] == idtype98;
}
}
if (var96){
var99 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = " ";
var103 = 1;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "_for_cpp = static_cast<";
var108 = 23;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = ">(";
var113 = 2;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = ");\n";
var118 = 3;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 8;
var122 = NEW_array__NativeArray(var121, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var122)->values[0] = (val*) var_type_name;
((struct instance_array__NativeArray*)var122)->values[1] = (val*) var101;
((struct instance_array__NativeArray*)var122)->values[2] = (val*) var_param_name;
((struct instance_array__NativeArray*)var122)->values[3] = (val*) var106;
((struct instance_array__NativeArray*)var122)->values[4] = (val*) var_type_name;
((struct instance_array__NativeArray*)var122)->values[5] = (val*) var111;
((struct instance_array__NativeArray*)var122)->values[6] = (val*) var_param_name;
((struct instance_array__NativeArray*)var122)->values[7] = (val*) var116;
((void (*)(val*, val*, long))(var120->class->vft[COLOR_array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
CHECK_NEW_array__Array(var120);
}
var123 = ((val* (*)(val*))(var120->class->vft[COLOR_string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
var124 = ((val* (*)(val*, val*))(var99->class->vft[COLOR_compiling_writer__Writer__add]))(var99, var123) /* add on <var99:Writer>*/;
var124;
} else {
var125 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce126) {
var127 = varonce126;
} else {
var128 = " ";
var129 = 1;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = "_for_cpp = ";
var134 = 11;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = ";\n";
var139 = 2;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 6;
var143 = NEW_array__NativeArray(var142, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var143)->values[0] = (val*) var_type_name;
((struct instance_array__NativeArray*)var143)->values[1] = (val*) var127;
((struct instance_array__NativeArray*)var143)->values[2] = (val*) var_param_name;
((struct instance_array__NativeArray*)var143)->values[3] = (val*) var132;
((struct instance_array__NativeArray*)var143)->values[4] = (val*) var_param_name;
((struct instance_array__NativeArray*)var143)->values[5] = (val*) var137;
((void (*)(val*, val*, long))(var141->class->vft[COLOR_array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
CHECK_NEW_array__Array(var141);
}
var144 = ((val* (*)(val*))(var141->class->vft[COLOR_string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
var145 = ((val* (*)(val*, val*))(var125->class->vft[COLOR_compiling_writer__Writer__add]))(var125, var144) /* add on <var125:Writer>*/;
var145;
}
} else {
}
var146 = ((val* (*)(val*))(var_m->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_m) /* mpropdef on <var_m:AExternPropdef>*/;
if (var146 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 91);
exit(1);
} else {
var147 = ((val* (*)(val*))(var146->class->vft[COLOR_model__MMethodDef__msignature]))(var146) /* msignature on <var146:nullable MPropDef(nullable MMethodDef)>*/;
}
if (var147 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 91);
exit(1);
} else {
var148 = ((val* (*)(val*))(var147->class->vft[COLOR_model__MSignature__mparameters]))(var147) /* mparameters on <var147:nullable MSignature>*/;
}
var149 = ((val* (*)(val*))(var148->class->vft[COLOR_abstract_collection__Collection__iterator]))(var148) /* iterator on <var148:Array[MParameter]>*/;
for(;;) {
var150 = ((short int (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var149) /* is_ok on <var149:Iterator[nullable Object]>*/;
if(!var150) break;
var151 = ((val* (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__item]))(var149) /* item on <var149:Iterator[nullable Object]>*/;
var_param = var151;
var152 = ((val* (*)(val*))(var_param->class->vft[COLOR_model__MParameter__name]))(var_param) /* name on <var_param:MParameter>*/;
var_param_name153 = var152;
var154 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__to_cpp_call_context]))(self) /* to_cpp_call_context on <self:CPPLanguage>*/;
var155 = ((val* (*)(val*))(var_param->class->vft[COLOR_model__MParameter__mtype]))(var_param) /* mtype on <var_param:MParameter>*/;
var156 = ((val* (*)(val*, val*))(var154->class->vft[COLOR_nitni_utilities__CallContext__name_mtype]))(var154, var155) /* name_mtype on <var154:ToCppCallContext>*/;
var_type_name157 = var156;
var158 = ((val* (*)(val*))(var_mclass_type->class->vft[COLOR_model__MClassType__mclass]))(var_mclass_type) /* mclass on <var_mclass_type:MClassType>*/;
var159 = ((val* (*)(val*))(var158->class->vft[COLOR_extern_classes__MClass__ftype]))(var158) /* ftype on <var158:MClass>*/;
/* <var159:nullable ForeignType> isa ForeignCppType */
cltype161 = type_cpp__ForeignCppType.color;
idtype162 = type_cpp__ForeignCppType.id;
if(var159 == NULL) {
var160 = 0;
} else {
if(cltype161 >= var159->type->table_size) {
var160 = 0;
} else {
var160 = var159->type->type_table[cltype161] == idtype162;
}
}
if (var160){
var163 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce164) {
var165 = varonce164;
} else {
var166 = " ";
var167 = 1;
var168 = string__NativeString__to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = "_for_cpp = static_cast<";
var172 = 23;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
if (varonce174) {
var175 = varonce174;
} else {
var176 = ">(";
var177 = 2;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = ");\n";
var182 = 3;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
var184 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var184 = array_instance Array[Object] */
var185 = 8;
var186 = NEW_array__NativeArray(var185, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var186)->values[0] = (val*) var_type_name157;
((struct instance_array__NativeArray*)var186)->values[1] = (val*) var165;
((struct instance_array__NativeArray*)var186)->values[2] = (val*) var_param_name153;
((struct instance_array__NativeArray*)var186)->values[3] = (val*) var170;
((struct instance_array__NativeArray*)var186)->values[4] = (val*) var_type_name157;
((struct instance_array__NativeArray*)var186)->values[5] = (val*) var175;
((struct instance_array__NativeArray*)var186)->values[6] = (val*) var_param_name153;
((struct instance_array__NativeArray*)var186)->values[7] = (val*) var180;
((void (*)(val*, val*, long))(var184->class->vft[COLOR_array__Array__with_native]))(var184, var186, var185) /* with_native on <var184:Array[Object]>*/;
CHECK_NEW_array__Array(var184);
}
var187 = ((val* (*)(val*))(var184->class->vft[COLOR_string__Object__to_s]))(var184) /* to_s on <var184:Array[Object]>*/;
var188 = ((val* (*)(val*, val*))(var163->class->vft[COLOR_compiling_writer__Writer__add]))(var163, var187) /* add on <var163:Writer>*/;
var188;
} else {
var189 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce190) {
var191 = varonce190;
} else {
var192 = " ";
var193 = 1;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = "_for_cpp = ";
var198 = 11;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = ";\n";
var203 = 2;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
var205 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var205 = array_instance Array[Object] */
var206 = 6;
var207 = NEW_array__NativeArray(var206, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var207)->values[0] = (val*) var_type_name157;
((struct instance_array__NativeArray*)var207)->values[1] = (val*) var191;
((struct instance_array__NativeArray*)var207)->values[2] = (val*) var_param_name153;
((struct instance_array__NativeArray*)var207)->values[3] = (val*) var196;
((struct instance_array__NativeArray*)var207)->values[4] = (val*) var_param_name153;
((struct instance_array__NativeArray*)var207)->values[5] = (val*) var201;
((void (*)(val*, val*, long))(var205->class->vft[COLOR_array__Array__with_native]))(var205, var207, var206) /* with_native on <var205:Array[Object]>*/;
CHECK_NEW_array__Array(var205);
}
var208 = ((val* (*)(val*))(var205->class->vft[COLOR_string__Object__to_s]))(var205) /* to_s on <var205:Array[Object]>*/;
var209 = ((val* (*)(val*, val*))(var189->class->vft[COLOR_compiling_writer__Writer__add]))(var189, var208) /* add on <var189:Writer>*/;
var209;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__next]))(var149) /* next on <var149:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var210 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce211) {
var212 = varonce211;
} else {
var213 = "___cpp_impl";
var214 = 11;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = ((val* (*)(val*))(self->class->vft[COLOR_nitni_utilities__Object__long_signature]))(self) /* long_signature on <self:CPPLanguage>*/;
var217 = ((val* (*)(val*))(self->class->vft[COLOR_cpp__Object__cpp_call_context]))(self) /* cpp_call_context on <self:CPPLanguage>*/;
if (varonce218) {
var219 = varonce218;
} else {
var220 = "_for_cpp";
var221 = 8;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
var223 = ((val* (*)(val*, val*, val*, val*, val*, val*, val*))(var_mproperty->class->vft[COLOR_nitni_utilities__MMethod__build_ccall]))(var_mproperty, var_mclass_type, var_mmodule, var212, var216, var217, var219) /* build_ccall on <var_mproperty:MMethod>*/;
var224 = ((val* (*)(val*, val*))(var210->class->vft[COLOR_compiling_writer__Writer__add]))(var210, var223) /* add on <var210:Writer>*/;
var224;
var225 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
if (varonce226) {
var227 = varonce226;
} else {
var228 = "\n";
var229 = 1;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
var231 = ((val* (*)(val*, val*))(var225->class->vft[COLOR_compiling_writer__Writer__add]))(var225, var227) /* add on <var225:Writer>*/;
var231;
var232 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var232 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 102);
exit(1);
} else {
((void (*)(val*, val*))(var232->class->vft[COLOR_c_tools__CCompilationUnit__add_local_function]))(var232, var_fc) /* add_local_function on <var232:nullable CPPCompilationUnit>*/;
}
var233 = NEW_c_tools__CFunction(&type_c_tools__CFunction);
((void (*)(val*, val*))(var233->class->vft[COLOR_c_tools__CFunction__init]))(var233, var_cpp_signature) /* init on <var233:CFunction>*/;
CHECK_NEW_c_tools__CFunction(var233);
var_fc = var233;
var234 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__decls]))(var_fc) /* decls on <var_fc:CFunction>*/;
var235 = ((val* (*)(val*))(var_block->class->vft[COLOR_parser_nodes__ANode__location]))(var_block) /* location on <var_block:AExternCodeBlock>*/;
var236 = ((val* (*)(val*))(var235->class->vft[COLOR_c__Location__as_line_pragma]))(var235) /* as_line_pragma on <var235:Location>*/;
var237 = ((val* (*)(val*, val*))(var234->class->vft[COLOR_compiling_writer__Writer__add]))(var234, var236) /* add on <var234:Writer>*/;
var237;
var238 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
var239 = ((val* (*)(val*))(var_block->class->vft[COLOR_ffi_base__AExternCodeBlock__code]))(var_block) /* code on <var_block:AExternCodeBlock>*/;
var240 = ((val* (*)(val*, val*))(var238->class->vft[COLOR_compiling_writer__Writer__add]))(var238, var239) /* add on <var238:Writer>*/;
var240;
var241 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var241 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 108);
exit(1);
} else {
((void (*)(val*, val*))(var241->class->vft[COLOR_c_tools__CCompilationUnit__add_local_function]))(var241, var_fc) /* add_local_function on <var241:nullable CPPCompilationUnit>*/;
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
CHECK_NEW_cpp__ForeignCppType(var1);
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
val* var3 /* : Writer */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : Writer */;
val* var9 /* : Writer */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : nullable MModule */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
val* var26 /* : Writer */;
val* var27 /* : Writer */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : Writer */;
val* var34 /* : ExternCppFile */;
val* var_file /* var file: ExternCppFile */;
val* var35 /* : Array[ExternFile] */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 118);
exit(1);
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
var8 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_compiling_writer__Writer__add]))(var3, var4) /* add on <var3:Writer>*/;
var8;
var9 = ((val* (*)(val*))(var_cpp_file->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var_cpp_file) /* header_custom on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "#include \"";
var13 = 10;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 122);
exit(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_model_base__MModule__name]))(var15) /* name on <var15:nullable MModule>*/;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "._ffi.h\"\n";
var20 = 9;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var16;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
CHECK_NEW_array__Array(var22);
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
var26 = ((val* (*)(val*, val*))(var9->class->vft[COLOR_compiling_writer__Writer__add]))(var9, var25) /* add on <var9:Writer>*/;
var26;
var27 = ((val* (*)(val*))(var_cpp_file->class->vft[COLOR_c_tools__CCompilationUnit__header_custom]))(var_cpp_file) /* header_custom on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "}\n";
var31 = 2;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = ((val* (*)(val*, val*))(var27->class->vft[COLOR_compiling_writer__Writer__add]))(var27, var29) /* add on <var27:Writer>*/;
var33;
var34 = ((val* (*)(val*, val*, val*))(var_cpp_file->class->vft[COLOR_cpp__CPPCompilationUnit__write_to_files]))(var_cpp_file, var_nmodule, var_compdir) /* write_to_files on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)>*/;
var_file = var34;
var35 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_ffi_base__AModule__ffi_files]))(var_nmodule) /* ffi_files on <var_nmodule:AModule>*/;
((void (*)(val*, val*))(var35->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var35, var_file) /* add on <var35:Array[ExternFile]>*/;
var36 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_c__AModule__c_linker_options]))(var_nmodule) /* c_linker_options on <var_nmodule:AModule>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = " -lstdc++";
var40 = 9;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 2;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var38;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
CHECK_NEW_array__Array(var42);
}
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_c__AModule__c_linker_options_61d]))(var_nmodule, var45) /* c_linker_options= on <var_nmodule:AModule>*/;
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 142);
exit(1);
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
CHECK_NEW_array__Array(var1);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 156);
exit(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model_base__MModule__name]))(var7) /* name on <var7:nullable MModule>*/;
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
CHECK_NEW_array__Array(var15);
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
CHECK_NEW_array__Array(var29);
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
CHECK_NEW_array__Array(var51);
}
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
var55 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var55->class->vft[COLOR_array__Array__init]))(var55) /* init on <var55:Array[String]>*/;
CHECK_NEW_array__Array(var55);
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_ffi_base__CCompilationUnit__write_header_to_file]))(self, var_amodule, var54, var55, var_guard) /* write_header_to_file on <self:CPPCompilationUnit>*/;
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
var57 = 3;
((void (*)(val*, long))(var56->class->vft[COLOR_array__Array__with_capacity]))(var56, var57) /* with_capacity on <var56:Array[Object]>*/;
CHECK_NEW_array__Array(var56);
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
CHECK_NEW_array__Array(var75);
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
CHECK_NEW_array__Array(var89);
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
CHECK_NEW_array__Array(var103);
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
CHECK_NEW_array__Array(var112);
}
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
((void (*)(val*, val*))(var106->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var106, var115) /* add on <var106:Array[String]>*/;
var116 = NEW_cpp__ExternCppFile(&type_cpp__ExternCppFile);
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
var118 = 5;
((void (*)(val*, long))(var117->class->vft[COLOR_array__Array__with_capacity]))(var117, var118) /* with_capacity on <var117:Array[Object]>*/;
CHECK_NEW_array__Array(var117);
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
CHECK_NEW_cpp__ExternCppFile(var116);
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 175);
exit(1);
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
CHECK_NEW_array__Array(var1);
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
CHECK_NEW_array__Array(var1);
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 189);
exit(1);
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
CHECK_NEW_cpp__CppCallContext(var2);
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
CHECK_NEW_cpp__ToCppCallContext(var2);
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
CHECK_NEW_cpp__FromCppCallContext(var2);
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
val* var14 /* : Writer */;
val* var15 /* : Writer */;
val* var16 /* : nullable CPPCompilationUnit */;
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
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 211);
exit(1);
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
CHECK_NEW_c_tools__CFunction(var13);
var_fc = var13;
var14 = ((val* (*)(val*))(var_fc->class->vft[COLOR_c_tools__CFunction__exprs]))(var_fc) /* exprs on <var_fc:CFunction>*/;
var15 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_compiling_writer__Writer__add]))(var14, var_ccall) /* add on <var14:Writer>*/;
var15;
var16 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_file]))(var_nmodule) /* cpp_file on <var_nmodule:AModule>*/;
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/cpp.nit", 217);
exit(1);
} else {
((void (*)(val*, val*))(var16->class->vft[COLOR_c_tools__CCompilationUnit__add_local_function]))(var16, var_fc) /* add_local_function on <var16:nullable CPPCompilationUnit>*/;
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
CHECK_NEW_array__Array(var8);
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
CHECK_NEW_array__Array(var8);
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
