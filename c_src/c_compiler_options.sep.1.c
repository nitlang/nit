#include "c_compiler_options.sep.0.h"
/* method c_compiler_options#ToolContext#c_compiler_options_phase for (self: ToolContext): Phase */
val* c_compiler_options__ToolContext__c_compiler_options_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_c_compiler_options__ToolContext___64dc_compiler_options_phase].val; /* @c_compiler_options_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @c_compiler_options_phase");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 26);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#ToolContext#c_compiler_options_phase for (self: Object): Phase */
val* VIRTUAL_c_compiler_options__ToolContext__c_compiler_options_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = c_compiler_options__ToolContext__c_compiler_options_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#ToolContext#c_compiler_options_phase= for (self: ToolContext, Phase) */
void c_compiler_options__ToolContext__c_compiler_options_phase_61d(val* self, val* p0) {
self->attrs[COLOR_c_compiler_options__ToolContext___64dc_compiler_options_phase].val = p0; /* @c_compiler_options_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method c_compiler_options#ToolContext#c_compiler_options_phase= for (self: Object, Phase) */
void VIRTUAL_c_compiler_options__ToolContext__c_compiler_options_phase_61d(val* self, val* p0) {
c_compiler_options__ToolContext__c_compiler_options_phase_61d(self, p0);
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOptionsPhase#compiler_annotation_name for (self: CCompilerOptionsPhase): String */
val* c_compiler_options__CCompilerOptionsPhase__compiler_annotation_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "c_compiler_option";
var3 = 17;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#compiler_annotation_name for (self: Object): String */
val* VIRTUAL_c_compiler_options__CCompilerOptionsPhase__compiler_annotation_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c_compiler_options__CCompilerOptionsPhase__compiler_annotation_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#linker_annotation_name for (self: CCompilerOptionsPhase): String */
val* c_compiler_options__CCompilerOptionsPhase__linker_annotation_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "c_linker_option";
var3 = 15;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#linker_annotation_name for (self: Object): String */
val* VIRTUAL_c_compiler_options__CCompilerOptionsPhase__linker_annotation_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c_compiler_options__CCompilerOptionsPhase__linker_annotation_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#cpp_compiler_annotation_name for (self: CCompilerOptionsPhase): String */
val* c_compiler_options__CCompilerOptionsPhase__cpp_compiler_annotation_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "cpp_compiler_option";
var3 = 19;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#cpp_compiler_annotation_name for (self: Object): String */
val* VIRTUAL_c_compiler_options__CCompilerOptionsPhase__cpp_compiler_annotation_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c_compiler_options__CCompilerOptionsPhase__cpp_compiler_annotation_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_annotated_node for (self: CCompilerOptionsPhase, ANode, AAnnotation) */
void c_compiler_options__CCompilerOptionsPhase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var1 /* : Token */;
val* var2 /* : String */;
val* var_annotation_name /* var annotation_name: String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
val* var7 /* : String */;
short int var8 /* : Bool */;
short int var_9 /* var : Bool */;
val* var10 /* : String */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var13 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var15 /* : Bool */;
static val* varonce;
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
val* var29 /* : ANodes[AAtArg] */;
val* var_args /* var args: ANodes[AAtArg] */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
val* var41 /* : Array[Object] */;
long var42 /* : Int */;
val* var43 /* : NativeArray[Object] */;
val* var44 /* : String */;
val* var45 /* : Array[CCompilerOption] */;
val* var_options /* var options: Array[CCompilerOption] */;
val* var46 /* : Iterator[nullable Object] */;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_arg /* var arg: AAtArg */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
val* var67 /* : AExpr */;
val* var_expr /* var expr: AExpr */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
val* var71 /* : String */;
val* var_text /* var text: String */;
long var72 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
long var77 /* : Int */;
val* var78 /* : String */;
val* var79 /* : DirectCCompilerOption */;
val* var_opt /* var opt: DirectCCompilerOption */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
val* var83 /* : AExprs */;
val* var84 /* : Array[AExpr] */;
val* var_exec_args /* var exec_args: Array[AExpr] */;
short int var85 /* : Bool */;
val* var86 /* : TId */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
short int var93 /* : Bool */;
short int var_94 /* var : Bool */;
short int var95 /* : Bool */;
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
val* var110 /* : Array[String] */;
val* var_exec_args_as_strings /* var exec_args_as_strings: Array[String] */;
val* var111 /* : Iterator[nullable Object] */;
short int var112 /* : Bool */;
val* var113 /* : nullable Object */;
val* var_exec_arg /* var exec_arg: AExpr */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
short int var117 /* : Bool */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var_arg_string /* var arg_string: String */;
long var124 /* : Int */;
long var125 /* : Int */;
long var126 /* : Int */;
long var127 /* : Int */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : ExecCCompilerOption */;
val* var_opt132 /* var opt: ExecCCompilerOption */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[Object] */;
val* var146 /* : String */;
val* var148 /* : Array[DirectCCompilerOption] */;
val* var_simplified_options /* var simplified_options: Array[DirectCCompilerOption] */;
val* var149 /* : Iterator[nullable Object] */;
short int var150 /* : Bool */;
val* var151 /* : nullable Object */;
val* var_opt152 /* var opt: CCompilerOption */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
val* var156 /* : Array[String] */;
val* var_cmd_args /* var cmd_args: Array[String] */;
long var157 /* : Int */;
long var158 /* : Int */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
val* var162 /* : IProcess */;
long var163 /* : Int */;
val* var164 /* : nullable Object */;
val* var165 /* : Array[String] */;
val* var_proc /* var proc: nullable Object */;
long var166 /* : Int */;
long var167 /* : Int */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
const char* var_class_name;
short int var173 /* : Bool */;
long var174 /* : Int */;
long var175 /* : Int */;
long var176 /* : Int */;
long var177 /* : Int */;
long var179 /* : Int */;
val* var180 /* : Array[nullable Object] */;
val* var_rest_args /* var rest_args: Array[String] */;
val* var181 /* : IProcess */;
long var182 /* : Int */;
val* var183 /* : nullable Object */;
long var184 /* : Int */;
long var_status /* var status: Int */;
long var185 /* : Int */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
val* var190 /* : ACallExpr */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : String */;
val* var201 /* : Array[Object] */;
long var202 /* : Int */;
val* var203 /* : NativeArray[Object] */;
val* var204 /* : String */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
val* var216 /* : String */;
val* var_result /* var result: String */;
short int var217 /* : Bool */;
val* var218 /* : ACallExpr */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
long var222 /* : Int */;
val* var223 /* : String */;
val* var224 /* : DirectCCompilerOption */;
short int var225 /* : Bool */;
int cltype226;
int idtype227;
val* var229 /* : nullable ANode */;
short int var230 /* : Bool */;
int cltype231;
int idtype232;
const char* var_class_name233;
val* var_nmodule /* var nmodule: AModule */;
val* var234 /* : Iterator[nullable Object] */;
short int var235 /* : Bool */;
val* var236 /* : nullable Object */;
val* var_opt237 /* var opt: DirectCCompilerOption */;
val* var238 /* : String */;
val* var_cmd /* var cmd: String */;
val* var239 /* : String */;
short int var240 /* : Bool */;
val* var241 /* : String */;
short int var242 /* : Bool */;
val* var243 /* : String */;
short int var244 /* : Bool */;
var_nmoduledecl = p0;
var_nat = p1;
var = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__AAnnotation__n_atid]))(var_nat) /* n_atid on <var_nat:AAnnotation>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__AAtid__n_id]))(var) /* n_id on <var:AAtid>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:Token>*/;
var_annotation_name = var2;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__compiler_annotation_name]))(self) /* compiler_annotation_name on <self:CCompilerOptionsPhase>*/;
var6 = ((short int (*)(val*, val*))(var_annotation_name->class->vft[COLOR_kernel__Object___33d_61d]))(var_annotation_name, var5) /* != on <var_annotation_name:String>*/;
var_ = var6;
if (var6){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__linker_annotation_name]))(self) /* linker_annotation_name on <self:CCompilerOptionsPhase>*/;
var8 = ((short int (*)(val*, val*))(var_annotation_name->class->vft[COLOR_kernel__Object___33d_61d]))(var_annotation_name, var7) /* != on <var_annotation_name:String>*/;
var4 = var8;
} else {
var4 = var_;
}
var_9 = var4;
if (var4){
var10 = ((val* (*)(val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__cpp_compiler_annotation_name]))(self) /* cpp_compiler_annotation_name on <self:CCompilerOptionsPhase>*/;
var11 = ((short int (*)(val*, val*))(var_annotation_name->class->vft[COLOR_kernel__Object___33d_61d]))(var_annotation_name, var10) /* != on <var_annotation_name:String>*/;
var3 = var11;
} else {
var3 = var_9;
}
if (var3){
goto RET_LABEL;
} else {
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CCompilerOptionsPhase>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var12) /* modelbuilder on <var12:ToolContext>*/;
var_modelbuilder = var13;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_parser_nodes__AModuledecl.color;
idtype = type_parser_nodes__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var14 = 0;
} else {
var14 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var15 = !var14;
if (var15){
if (varonce) {
var16 = varonce;
} else {
var17 = "Syntax error: only the declaration of modules may use \"";
var18 = 55;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\".";
var23 = 2;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
CHECK_NEW_array__Array(var25);
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var28) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var29 = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__AAnnotation__n_args]))(var_nat) /* n_args on <var_nat:AAnnotation>*/;
var_args = var29;
var30 = ((short int (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_args) /* is_empty on <var_args:ANodes[AAtArg]>*/;
if (var30){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "Syntax error: \"";
var34 = 15;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "\" expects at least one argument.";
var39 = 32;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var41 = array_instance Array[Object] */
var42 = 3;
var43 = NEW_array__NativeArray(var42, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var43)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var43)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var43)->values[2] = (val*) var37;
((void (*)(val*, val*, long))(var41->class->vft[COLOR_array__Array__with_native]))(var41, var43, var42) /* with_native on <var41:Array[Object]>*/;
CHECK_NEW_array__Array(var41);
}
var44 = ((val* (*)(val*))(var41->class->vft[COLOR_string__Object__to_s]))(var41) /* to_s on <var41:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var44) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var45 = NEW_array__Array(&type_array__Arrayc_compiler_options__CCompilerOption);
((void (*)(val*))(var45->class->vft[COLOR_array__Array__init]))(var45) /* init on <var45:Array[CCompilerOption]>*/;
CHECK_NEW_array__Array(var45);
var_options = var45;
var46 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_args) /* iterator on <var_args:ANodes[AAtArg]>*/;
for(;;) {
var47 = ((short int (*)(val*))(var46->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var46) /* is_ok on <var46:Iterator[nullable Object]>*/;
if(!var47) break;
var48 = ((val* (*)(val*))(var46->class->vft[COLOR_abstract_collection__Iterator__item]))(var46) /* item on <var46:Iterator[nullable Object]>*/;
var_arg = var48;
/* <var_arg:AAtArg> isa AExprAtArg */
cltype50 = type_parser_nodes__AExprAtArg.color;
idtype51 = type_parser_nodes__AExprAtArg.id;
if(cltype50 >= var_arg->type->table_size) {
var49 = 0;
} else {
var49 = var_arg->type->type_table[cltype50] == idtype51;
}
var52 = !var49;
if (var52){
if (varonce53) {
var54 = varonce53;
} else {
var55 = "Syntax error: \"";
var56 = 15;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "\" expects its arguments to be the name of the package as String literals or a call to `exex(\"local_program\")`.";
var61 = 110;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 3;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
CHECK_NEW_array__Array(var63);
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var66) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var67 = ((val* (*)(val*))(var_arg->class->vft[COLOR_parser_nodes__AExprAtArg__n_expr]))(var_arg) /* n_expr on <var_arg:AAtArg(AExprAtArg)>*/;
var_expr = var67;
/* <var_expr:AExpr> isa AStringFormExpr */
cltype69 = type_parser_nodes__AStringFormExpr.color;
idtype70 = type_parser_nodes__AStringFormExpr.id;
if(cltype69 >= var_expr->type->table_size) {
var68 = 0;
} else {
var68 = var_expr->type->type_table[cltype69] == idtype70;
}
if (var68){
var71 = ((val* (*)(val*))(var_expr->class->vft[COLOR_modelize_property__Prod__collect_text]))(var_expr) /* collect_text on <var_expr:AExpr(AStringFormExpr)>*/;
var_text = var71;
var72 = 1;
var73 = ((long (*)(val*))(var_text->class->vft[COLOR_abstract_collection__Collection__length]))(var_text) /* length on <var_text:String>*/;
var74 = 2;
{ /* Inline kernel#Int#- (var73,var74) */
var77 = var73 - var74;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var78 = ((val* (*)(val*, long, long))(var_text->class->vft[COLOR_string__AbstractString__substring]))(var_text, var72, var75) /* substring on <var_text:String>*/;
var_text = var78;
var79 = NEW_c_compiler_options__DirectCCompilerOption(&type_c_compiler_options__DirectCCompilerOption);
((void (*)(val*, val*))(var79->class->vft[COLOR_c_compiler_options__DirectCCompilerOption__init]))(var79, var_text) /* init on <var79:DirectCCompilerOption>*/;
CHECK_NEW_c_compiler_options__DirectCCompilerOption(var79);
var_opt = var79;
((void (*)(val*, val*))(var_options->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_options, var_opt) /* add on <var_options:Array[CCompilerOption]>*/;
} else {
/* <var_expr:AExpr> isa ACallExpr */
cltype81 = type_parser_nodes__ACallExpr.color;
idtype82 = type_parser_nodes__ACallExpr.id;
if(cltype81 >= var_expr->type->table_size) {
var80 = 0;
} else {
var80 = var_expr->type->type_table[cltype81] == idtype82;
}
if (var80){
var83 = ((val* (*)(val*))(var_expr->class->vft[COLOR_parser_nodes__ACallFormExpr__n_args]))(var_expr) /* n_args on <var_expr:AExpr(ACallExpr)>*/;
var84 = ((val* (*)(val*))(var83->class->vft[COLOR_typing__AExprs__to_a]))(var83) /* to_a on <var83:AExprs>*/;
var_exec_args = var84;
var86 = ((val* (*)(val*))(var_expr->class->vft[COLOR_parser_nodes__ACallFormExpr__n_id]))(var_expr) /* n_id on <var_expr:AExpr(ACallExpr)>*/;
var87 = ((val* (*)(val*))(var86->class->vft[COLOR_parser_nodes__Token__text]))(var86) /* text on <var86:TId>*/;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "exec";
var91 = 4;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = ((short int (*)(val*, val*))(var87->class->vft[COLOR_kernel__Object___33d_61d]))(var87, var89) /* != on <var87:String>*/;
var_94 = var93;
if (var93){
var85 = var_94;
} else {
var95 = ((short int (*)(val*))(var_exec_args->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_exec_args) /* is_empty on <var_exec_args:Array[AExpr]>*/;
var85 = var95;
}
if (var85){
if (varonce96) {
var97 = varonce96;
} else {
var98 = "Syntax error: \"";
var99 = 15;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "\" accepts only calls to `exec` with the command as arguments.";
var104 = 61;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 3;
var108 = NEW_array__NativeArray(var107, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var108)->values[0] = (val*) var97;
((struct instance_array__NativeArray*)var108)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var108)->values[2] = (val*) var102;
((void (*)(val*, val*, long))(var106->class->vft[COLOR_array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
CHECK_NEW_array__Array(var106);
}
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var109) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var110 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var110->class->vft[COLOR_array__Array__init]))(var110) /* init on <var110:Array[String]>*/;
CHECK_NEW_array__Array(var110);
var_exec_args_as_strings = var110;
var111 = ((val* (*)(val*))(var_exec_args->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_exec_args) /* iterator on <var_exec_args:Array[AExpr]>*/;
for(;;) {
var112 = ((short int (*)(val*))(var111->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var111) /* is_ok on <var111:Iterator[nullable Object]>*/;
if(!var112) break;
var113 = ((val* (*)(val*))(var111->class->vft[COLOR_abstract_collection__Iterator__item]))(var111) /* item on <var111:Iterator[nullable Object]>*/;
var_exec_arg = var113;
/* <var_exec_arg:AExpr> isa AStringFormExpr */
cltype115 = type_parser_nodes__AStringFormExpr.color;
idtype116 = type_parser_nodes__AStringFormExpr.id;
if(cltype115 >= var_exec_arg->type->table_size) {
var114 = 0;
} else {
var114 = var_exec_arg->type->type_table[cltype115] == idtype116;
}
var117 = !var114;
if (var117){
if (varonce118) {
var119 = varonce118;
} else {
var120 = "Syntax error: calls to `exec` expects the arguments to be String literals.";
var121 = 74;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var119) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
var123 = ((val* (*)(val*))(var_exec_arg->class->vft[COLOR_modelize_property__Prod__collect_text]))(var_exec_arg) /* collect_text on <var_exec_arg:AExpr(AStringFormExpr)>*/;
var_arg_string = var123;
var124 = 1;
var125 = ((long (*)(val*))(var_arg_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_arg_string) /* length on <var_arg_string:String>*/;
var126 = 2;
{ /* Inline kernel#Int#- (var125,var126) */
var129 = var125 - var126;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var130 = ((val* (*)(val*, long, long))(var_arg_string->class->vft[COLOR_string__AbstractString__substring]))(var_arg_string, var124, var127) /* substring on <var_arg_string:String>*/;
var_arg_string = var130;
((void (*)(val*, val*))(var_exec_args_as_strings->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_exec_args_as_strings, var_arg_string) /* add on <var_exec_args_as_strings:Array[String]>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var111->class->vft[COLOR_abstract_collection__Iterator__next]))(var111) /* next on <var111:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var131 = NEW_c_compiler_options__ExecCCompilerOption(&type_c_compiler_options__ExecCCompilerOption);
((void (*)(val*, val*, val*))(var131->class->vft[COLOR_c_compiler_options__ExecCCompilerOption__init]))(var131, var_exec_args_as_strings, var_expr) /* init on <var131:ExecCCompilerOption>*/;
CHECK_NEW_c_compiler_options__ExecCCompilerOption(var131);
var_opt132 = var131;
((void (*)(val*, val*))(var_options->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_options, var_opt132) /* add on <var_options:Array[CCompilerOption]>*/;
} else {
if (varonce133) {
var134 = varonce133;
} else {
var135 = "Syntax error: \"";
var136 = 15;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "\" expects its arguments to be the name of the package as String literals.";
var141 = 73;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 3;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var134;
((struct instance_array__NativeArray*)var145)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var145)->values[2] = (val*) var139;
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
CHECK_NEW_array__Array(var143);
}
var146 = ((val* (*)(val*))(var143->class->vft[COLOR_string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var146) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
}
}
CONTINUE_label147: (void)0;
((void (*)(val*))(var46->class->vft[COLOR_abstract_collection__Iterator__next]))(var46) /* next on <var46:Iterator[nullable Object]>*/;
}
BREAK_label147: (void)0;
var148 = NEW_array__Array(&type_array__Arrayc_compiler_options__DirectCCompilerOption);
((void (*)(val*))(var148->class->vft[COLOR_array__Array__init]))(var148) /* init on <var148:Array[DirectCCompilerOption]>*/;
CHECK_NEW_array__Array(var148);
var_simplified_options = var148;
var149 = ((val* (*)(val*))(var_options->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_options) /* iterator on <var_options:Array[CCompilerOption]>*/;
for(;;) {
var150 = ((short int (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var149) /* is_ok on <var149:Iterator[nullable Object]>*/;
if(!var150) break;
var151 = ((val* (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__item]))(var149) /* item on <var149:Iterator[nullable Object]>*/;
var_opt152 = var151;
/* <var_opt152:CCompilerOption> isa ExecCCompilerOption */
cltype154 = type_c_compiler_options__ExecCCompilerOption.color;
idtype155 = type_c_compiler_options__ExecCCompilerOption.id;
if(cltype154 >= var_opt152->type->table_size) {
var153 = 0;
} else {
var153 = var_opt152->type->type_table[cltype154] == idtype155;
}
if (var153){
var156 = ((val* (*)(val*))(var_opt152->class->vft[COLOR_c_compiler_options__ExecCCompilerOption__command]))(var_opt152) /* command on <var_opt152:CCompilerOption(ExecCCompilerOption)>*/;
var_cmd_args = var156;
var157 = ((long (*)(val*))(var_cmd_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_cmd_args) /* length on <var_cmd_args:Array[String]>*/;
var158 = 1;
{ /* Inline kernel#Int#== (var157,var158) */
var161 = var157 == var158;
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
if (var159){
var162 = NEW_exec__IProcess(&type_exec__IProcess);
var163 = 0;
var164 = ((val* (*)(val*, long))(var_cmd_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_cmd_args, var163) /* [] on <var_cmd_args:Array[String]>*/;
var165 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var165->class->vft[COLOR_array__Array__init]))(var165) /* init on <var165:Array[String]>*/;
CHECK_NEW_array__Array(var165);
((void (*)(val*, val*, val*))(var162->class->vft[COLOR_exec__IProcess__from_a]))(var162, var164, var165) /* from_a on <var162:IProcess>*/;
CHECK_NEW_exec__IProcess(var162);
var_proc = var162;
} else {
var166 = ((long (*)(val*))(var_cmd_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_cmd_args) /* length on <var_cmd_args:Array[String]>*/;
var167 = 1;
{ /* Inline kernel#Int#> (var166,var167) */
/* Covariant cast for argument 0 (i) <var167:Int> isa OTHER */
/* <var167:Int> isa OTHER */
var170 = 1; /* easy <var167:Int> isa OTHER*/
if (!var170) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
exit(1);
}
var173 = var166 > var167;
var168 = var173;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
if (var168){
var174 = 1;
var175 = ((long (*)(val*))(var_cmd_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_cmd_args) /* length on <var_cmd_args:Array[String]>*/;
var176 = 1;
{ /* Inline kernel#Int#- (var175,var176) */
var179 = var175 - var176;
var177 = var179;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
var180 = ((val* (*)(val*, long, long))(var_cmd_args->class->vft[COLOR_collection__Sequence__subarray]))(var_cmd_args, var174, var177) /* subarray on <var_cmd_args:Array[String]>*/;
var_rest_args = var180;
var181 = NEW_exec__IProcess(&type_exec__IProcess);
var182 = 0;
var183 = ((val* (*)(val*, long))(var_cmd_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_cmd_args, var182) /* [] on <var_cmd_args:Array[String]>*/;
((void (*)(val*, val*, val*))(var181->class->vft[COLOR_exec__IProcess__from_a]))(var181, var183, var_rest_args) /* from_a on <var181:IProcess>*/;
CHECK_NEW_exec__IProcess(var181);
var_proc = var181;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 111);
exit(1);
}
}
((void (*)(val*))(var_proc->class->vft[COLOR_exec__Process__wait]))(var_proc) /* wait on <var_proc:nullable Object(IProcess)>*/;
var184 = ((long (*)(val*))(var_proc->class->vft[COLOR_exec__Process__status]))(var_proc) /* status on <var_proc:nullable Object(IProcess)>*/;
var_status = var184;
var185 = 0;
{ /* Inline kernel#Int#!= (var_status,var185) */
var188 = var_status == var185;
var189 = !var188;
var186 = var189;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
if (var186){
var190 = ((val* (*)(val*))(var_opt152->class->vft[COLOR_c_compiler_options__ExecCCompilerOption__exec_node]))(var_opt152) /* exec_node on <var_opt152:CCompilerOption(ExecCCompilerOption)>*/;
if (varonce191) {
var192 = varonce191;
} else {
var193 = "Annotation error: Something went wrong executing the argument of annotation \"";
var194 = 77;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = "\", make sure the command is valid.";
var199 = 34;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
var201 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var201 = array_instance Array[Object] */
var202 = 3;
var203 = NEW_array__NativeArray(var202, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var203)->values[0] = (val*) var192;
((struct instance_array__NativeArray*)var203)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var203)->values[2] = (val*) var197;
((void (*)(val*, val*, long))(var201->class->vft[COLOR_array__Array__with_native]))(var201, var203, var202) /* with_native on <var201:Array[Object]>*/;
CHECK_NEW_array__Array(var201);
}
var204 = ((val* (*)(val*))(var201->class->vft[COLOR_string__Object__to_s]))(var201) /* to_s on <var201:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var190, var204) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var205 = ((val* (*)(val*))(var_proc->class->vft[COLOR_stream__IStream__read_all]))(var_proc) /* read_all on <var_proc:nullable Object(IProcess)>*/;
if (varonce206) {
var207 = varonce206;
} else {
var208 = "\n";
var209 = 1;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = " ";
var214 = 1;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = ((val* (*)(val*, val*, val*))(var205->class->vft[COLOR_string_search__String__replace]))(var205, var207, var212) /* replace on <var205:String>*/;
var_result = var216;
var217 = ((short int (*)(val*))(var_result->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_result) /* is_empty on <var_result:String>*/;
if (var217){
var218 = ((val* (*)(val*))(var_opt152->class->vft[COLOR_c_compiler_options__ExecCCompilerOption__exec_node]))(var_opt152) /* exec_node on <var_opt152:CCompilerOption(ExecCCompilerOption)>*/;
if (varonce219) {
var220 = varonce219;
} else {
var221 = "Annotation error: Got no result from the command, make sure it is valid.";
var222 = 72;
var223 = string__NativeString__to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var218, var220) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var224 = NEW_c_compiler_options__DirectCCompilerOption(&type_c_compiler_options__DirectCCompilerOption);
((void (*)(val*, val*))(var224->class->vft[COLOR_c_compiler_options__DirectCCompilerOption__init]))(var224, var_result) /* init on <var224:DirectCCompilerOption>*/;
CHECK_NEW_c_compiler_options__DirectCCompilerOption(var224);
((void (*)(val*, val*))(var_simplified_options->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_simplified_options, var224) /* add on <var_simplified_options:Array[DirectCCompilerOption]>*/;
} else {
/* <var_opt152:CCompilerOption> isa DirectCCompilerOption */
cltype226 = type_c_compiler_options__DirectCCompilerOption.color;
idtype227 = type_c_compiler_options__DirectCCompilerOption.id;
if(cltype226 >= var_opt152->type->table_size) {
var225 = 0;
} else {
var225 = var_opt152->type->type_table[cltype226] == idtype227;
}
if (!var225) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 131);
exit(1);
}
((void (*)(val*, val*))(var_simplified_options->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_simplified_options, var_opt152) /* add on <var_simplified_options:Array[DirectCCompilerOption]>*/;
}
CONTINUE_label228: (void)0;
((void (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__next]))(var149) /* next on <var149:Iterator[nullable Object]>*/;
}
BREAK_label228: (void)0;
var229 = ((val* (*)(val*))(var_nmoduledecl->class->vft[COLOR_parser_nodes__ANode__parent]))(var_nmoduledecl) /* parent on <var_nmoduledecl:ANode(AModuledecl)>*/;
/* <var229:nullable ANode> isa AModule */
cltype231 = type_parser_nodes__AModule.color;
idtype232 = type_parser_nodes__AModule.id;
if(var229 == NULL) {
var230 = 0;
} else {
if(cltype231 >= var229->type->table_size) {
var230 = 0;
} else {
var230 = var229->type->type_table[cltype231] == idtype232;
}
}
if (!var230) {
var_class_name233 = var229 == NULL ? "null" : var229->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name233);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 137);
exit(1);
}
var_nmodule = var229;
var234 = ((val* (*)(val*))(var_simplified_options->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_simplified_options) /* iterator on <var_simplified_options:Array[DirectCCompilerOption]>*/;
for(;;) {
var235 = ((short int (*)(val*))(var234->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var234) /* is_ok on <var234:Iterator[nullable Object]>*/;
if(!var235) break;
var236 = ((val* (*)(val*))(var234->class->vft[COLOR_abstract_collection__Iterator__item]))(var234) /* item on <var234:Iterator[nullable Object]>*/;
var_opt237 = var236;
var238 = ((val* (*)(val*))(var_opt237->class->vft[COLOR_c_compiler_options__DirectCCompilerOption__option]))(var_opt237) /* option on <var_opt237:DirectCCompilerOption>*/;
var_cmd = var238;
var239 = ((val* (*)(val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__compiler_annotation_name]))(self) /* compiler_annotation_name on <self:CCompilerOptionsPhase>*/;
var240 = ((short int (*)(val*, val*))(var_annotation_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_annotation_name, var239) /* == on <var_annotation_name:String>*/;
if (var240){
((void (*)(val*, val*, val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__process_c_compiler_annotation]))(self, var_nmodule, var_cmd) /* process_c_compiler_annotation on <self:CCompilerOptionsPhase>*/;
} else {
var241 = ((val* (*)(val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__linker_annotation_name]))(self) /* linker_annotation_name on <self:CCompilerOptionsPhase>*/;
var242 = ((short int (*)(val*, val*))(var_annotation_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_annotation_name, var241) /* == on <var_annotation_name:String>*/;
if (var242){
((void (*)(val*, val*, val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__process_c_linker_annotation]))(self, var_nmodule, var_cmd) /* process_c_linker_annotation on <self:CCompilerOptionsPhase>*/;
} else {
var243 = ((val* (*)(val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__cpp_compiler_annotation_name]))(self) /* cpp_compiler_annotation_name on <self:CCompilerOptionsPhase>*/;
var244 = ((short int (*)(val*, val*))(var_annotation_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_annotation_name, var243) /* == on <var_annotation_name:String>*/;
if (var244){
((void (*)(val*, val*, val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOptionsPhase__process_cpp_compiler_annotation]))(self, var_nmodule, var_cmd) /* process_cpp_compiler_annotation on <self:CCompilerOptionsPhase>*/;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 147);
exit(1);
}
}
}
CONTINUE_label245: (void)0;
((void (*)(val*))(var234->class->vft[COLOR_abstract_collection__Iterator__next]))(var234) /* next on <var234:Iterator[nullable Object]>*/;
}
BREAK_label245: (void)0;
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_annotated_node for (self: Object, ANode, AAnnotation) */
void VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_annotated_node(val* self, val* p0, val* p1) {
c_compiler_options__CCompilerOptionsPhase__process_annotated_node(self, p0, p1);
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_c_compiler_annotation for (self: CCompilerOptionsPhase, AModule, String) */
void c_compiler_options__CCompilerOptionsPhase__process_c_compiler_annotation(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_opt /* var opt: String */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
var_nmodule = p0;
var_opt = p1;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_c__AModule__c_compiler_options]))(var_nmodule) /* c_compiler_options on <var_nmodule:AModule>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = " ";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 3;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var7)->values[1] = (val*) var1;
((struct instance_array__NativeArray*)var7)->values[2] = (val*) var_opt;
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
}
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_c__AModule__c_compiler_options_61d]))(var_nmodule, var8) /* c_compiler_options= on <var_nmodule:AModule>*/;
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_c_compiler_annotation for (self: Object, AModule, String) */
void VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_c_compiler_annotation(val* self, val* p0, val* p1) {
c_compiler_options__CCompilerOptionsPhase__process_c_compiler_annotation(self, p0, p1);
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_c_linker_annotation for (self: CCompilerOptionsPhase, AModule, String) */
void c_compiler_options__CCompilerOptionsPhase__process_c_linker_annotation(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_opt /* var opt: String */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
var_nmodule = p0;
var_opt = p1;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_c__AModule__c_linker_options]))(var_nmodule) /* c_linker_options on <var_nmodule:AModule>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = " ";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 3;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var7)->values[1] = (val*) var1;
((struct instance_array__NativeArray*)var7)->values[2] = (val*) var_opt;
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
}
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_c__AModule__c_linker_options_61d]))(var_nmodule, var8) /* c_linker_options= on <var_nmodule:AModule>*/;
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_c_linker_annotation for (self: Object, AModule, String) */
void VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_c_linker_annotation(val* self, val* p0, val* p1) {
c_compiler_options__CCompilerOptionsPhase__process_c_linker_annotation(self, p0, p1);
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_cpp_compiler_annotation for (self: CCompilerOptionsPhase, AModule, String) */
void c_compiler_options__CCompilerOptionsPhase__process_cpp_compiler_annotation(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_opt /* var opt: String */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
var_nmodule = p0;
var_opt = p1;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_compiler_options]))(var_nmodule) /* cpp_compiler_options on <var_nmodule:AModule>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = " ";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 3;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var7)->values[1] = (val*) var1;
((struct instance_array__NativeArray*)var7)->values[2] = (val*) var_opt;
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
}
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_cpp__AModule__cpp_compiler_options_61d]))(var_nmodule, var8) /* cpp_compiler_options= on <var_nmodule:AModule>*/;
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_cpp_compiler_annotation for (self: Object, AModule, String) */
void VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_cpp_compiler_annotation(val* self, val* p0, val* p1) {
c_compiler_options__CCompilerOptionsPhase__process_cpp_compiler_annotation(self, p0, p1);
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOption#init for (self: CCompilerOption) */
void c_compiler_options__CCompilerOption__init(val* self) {
RET_LABEL:;
}
/* method c_compiler_options#CCompilerOption#init for (self: Object) */
void VIRTUAL_c_compiler_options__CCompilerOption__init(val* self) {
c_compiler_options__CCompilerOption__init(self);
RET_LABEL:;
}
/* method c_compiler_options#DirectCCompilerOption#option for (self: DirectCCompilerOption): String */
val* c_compiler_options__DirectCCompilerOption__option(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_c_compiler_options__DirectCCompilerOption___64doption].val; /* @option on <self:DirectCCompilerOption> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @option");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 173);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#DirectCCompilerOption#option for (self: Object): String */
val* VIRTUAL_c_compiler_options__DirectCCompilerOption__option(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = c_compiler_options__DirectCCompilerOption__option(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#DirectCCompilerOption#option= for (self: DirectCCompilerOption, String) */
void c_compiler_options__DirectCCompilerOption__option_61d(val* self, val* p0) {
self->attrs[COLOR_c_compiler_options__DirectCCompilerOption___64doption].val = p0; /* @option on <self:DirectCCompilerOption> */
RET_LABEL:;
}
/* method c_compiler_options#DirectCCompilerOption#option= for (self: Object, String) */
void VIRTUAL_c_compiler_options__DirectCCompilerOption__option_61d(val* self, val* p0) {
c_compiler_options__DirectCCompilerOption__option_61d(self, p0);
RET_LABEL:;
}
/* method c_compiler_options#DirectCCompilerOption#init for (self: DirectCCompilerOption, String) */
void c_compiler_options__DirectCCompilerOption__init(val* self, val* p0) {
val* var_opt /* var opt: String */;
var_opt = p0;
((void (*)(val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOption__init]))(self) /* init on <self:DirectCCompilerOption>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_c_compiler_options__DirectCCompilerOption__option_61d]))(self, var_opt) /* option= on <self:DirectCCompilerOption>*/;
RET_LABEL:;
}
/* method c_compiler_options#DirectCCompilerOption#init for (self: Object, String) */
void VIRTUAL_c_compiler_options__DirectCCompilerOption__init(val* self, val* p0) {
c_compiler_options__DirectCCompilerOption__init(self, p0);
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#command for (self: ExecCCompilerOption): Array[String] */
val* c_compiler_options__ExecCCompilerOption__command(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_c_compiler_options__ExecCCompilerOption___64dcommand].val; /* @command on <self:ExecCCompilerOption> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @command");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 180);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#ExecCCompilerOption#command for (self: Object): Array[String] */
val* VIRTUAL_c_compiler_options__ExecCCompilerOption__command(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = c_compiler_options__ExecCCompilerOption__command(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#ExecCCompilerOption#command= for (self: ExecCCompilerOption, Array[String]) */
void c_compiler_options__ExecCCompilerOption__command_61d(val* self, val* p0) {
self->attrs[COLOR_c_compiler_options__ExecCCompilerOption___64dcommand].val = p0; /* @command on <self:ExecCCompilerOption> */
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#command= for (self: Object, Array[String]) */
void VIRTUAL_c_compiler_options__ExecCCompilerOption__command_61d(val* self, val* p0) {
c_compiler_options__ExecCCompilerOption__command_61d(self, p0);
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#exec_node for (self: ExecCCompilerOption): ACallExpr */
val* c_compiler_options__ExecCCompilerOption__exec_node(val* self) {
val* var /* : ACallExpr */;
val* var1 /* : ACallExpr */;
var1 = self->attrs[COLOR_c_compiler_options__ExecCCompilerOption___64dexec_node].val; /* @exec_node on <self:ExecCCompilerOption> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @exec_node");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/c_compiler_options.nit", 181);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#ExecCCompilerOption#exec_node for (self: Object): ACallExpr */
val* VIRTUAL_c_compiler_options__ExecCCompilerOption__exec_node(val* self) {
val* var /* : ACallExpr */;
val* var1 /* : ACallExpr */;
var1 = c_compiler_options__ExecCCompilerOption__exec_node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#ExecCCompilerOption#exec_node= for (self: ExecCCompilerOption, ACallExpr) */
void c_compiler_options__ExecCCompilerOption__exec_node_61d(val* self, val* p0) {
self->attrs[COLOR_c_compiler_options__ExecCCompilerOption___64dexec_node].val = p0; /* @exec_node on <self:ExecCCompilerOption> */
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#exec_node= for (self: Object, ACallExpr) */
void VIRTUAL_c_compiler_options__ExecCCompilerOption__exec_node_61d(val* self, val* p0) {
c_compiler_options__ExecCCompilerOption__exec_node_61d(self, p0);
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#init for (self: ExecCCompilerOption, Array[String], ACallExpr) */
void c_compiler_options__ExecCCompilerOption__init(val* self, val* p0, val* p1) {
val* var_command /* var command: Array[String] */;
val* var_exec_node /* var exec_node: ACallExpr */;
var_command = p0;
var_exec_node = p1;
((void (*)(val*))(self->class->vft[COLOR_c_compiler_options__CCompilerOption__init]))(self) /* init on <self:ExecCCompilerOption>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_c_compiler_options__ExecCCompilerOption__command_61d]))(self, var_command) /* command= on <self:ExecCCompilerOption>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_c_compiler_options__ExecCCompilerOption__exec_node_61d]))(self, var_exec_node) /* exec_node= on <self:ExecCCompilerOption>*/;
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#init for (self: Object, Array[String], ACallExpr) */
void VIRTUAL_c_compiler_options__ExecCCompilerOption__init(val* self, val* p0, val* p1) {
c_compiler_options__ExecCCompilerOption__init(self, p0, p1);
RET_LABEL:;
}
