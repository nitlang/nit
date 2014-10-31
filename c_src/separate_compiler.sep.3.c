#include "separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompilerVisitor#unbox_extern for (self: Object, RuntimeVariable, MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__unbox_extern(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#box_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : MClassKind */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : AbstractCompiler */;
val* var37 /* : AbstractCompiler */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
val* var41 /* : MClassType */;
short int var43 /* : Bool */;
val* var44 /* : MClassType */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : MClass */;
val* var51 /* : MClassType */;
val* var53 /* : MClassType */;
val* var_valtype /* var valtype: MClassType */;
val* var54 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var55 /* : Bool */;
val* var56 /* : AbstractCompiler */;
val* var58 /* : AbstractCompiler */;
val* var59 /* : nullable RapidTypeAnalysis */;
val* var61 /* : nullable RapidTypeAnalysis */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var_69 /* var : Bool */;
val* var70 /* : AbstractCompiler */;
val* var72 /* : AbstractCompiler */;
val* var73 /* : nullable RapidTypeAnalysis */;
val* var75 /* : nullable RapidTypeAnalysis */;
val* var76 /* : HashSet[MClassType] */;
val* var78 /* : HashSet[MClassType] */;
val* var79 /* : MType */;
val* var81 /* : MType */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : MType */;
val* var94 /* : MType */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
val* var100 /* : MType */;
val* var102 /* : MType */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : Array[Object] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[Object] */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
val* var122 /* : String */;
val* var123 /* : Array[Object] */;
long var124 /* : Int */;
val* var125 /* : NativeArray[Object] */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : MType */;
val* var145 /* : MType */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
val* var151 /* : Array[Object] */;
long var152 /* : Int */;
val* var153 /* : NativeArray[Object] */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
val* var160 /* : String */;
val* var161 /* : Array[Object] */;
long var162 /* : Int */;
val* var163 /* : NativeArray[Object] */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : FlatString */;
val* var176 /* : Array[Object] */;
long var177 /* : Int */;
val* var178 /* : NativeArray[Object] */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : FlatString */;
val* var185 /* : String */;
val* var186 /* : Array[Object] */;
long var187 /* : Int */;
val* var188 /* : NativeArray[Object] */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
val* var201 /* : Array[Object] */;
long var202 /* : Int */;
val* var203 /* : NativeArray[Object] */;
val* var204 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var7,var10) on <var7:MClassKind> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
var2 = var11;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce) {
var24 = varonce;
} else {
var25 = "NativeString";
var26 = 12;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
{
{ /* Inline kernel#Object#!= (var21,var24) on <var21:String> */
var_other31 = var24;
{
var33 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_other31) /* == on <var21:String>*/;
var32 = var33;
}
var34 = !var32;
var29 = var34;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
var1 = var28;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var37 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var35) on <var35:AbstractCompiler(SeparateCompiler)> */
var40 = var35->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var35:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MModule#pointer_type (var38) on <var38:MModule> */
var43 = var38->attrs[COLOR_model__MModule___pointer_type].val != NULL; /* _pointer_type on <var38:MModule> */
if(likely(var43)) {
var44 = var38->attrs[COLOR_model__MModule___pointer_type].val; /* _pointer_type on <var38:MModule> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pointer_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 217);
show_backtrace(1);
}
} else {
if (varonce45) {
var46 = varonce45;
} else {
var47 = "Pointer";
var48 = 7;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
var50 = model__MModule__get_primitive_class(var38, var46);
}
{
{ /* Inline model#MClass#mclass_type (var50) on <var50:MClass> */
var53 = var50->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var50:MClass> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var38->attrs[COLOR_model__MModule___pointer_type].val = var51; /* _pointer_type on <var38:MModule> */
var44 = var51;
}
var41 = var44;
RET_LABEL42:(void)0;
}
}
var_valtype = var41;
{
var54 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res = var54;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var58 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var56) on <var56:AbstractCompiler(SeparateCompiler)> */
var61 = var56->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var56:AbstractCompiler(SeparateCompiler)> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var62 = NULL;
if (var59 == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var59,var62) on <var59:nullable RapidTypeAnalysis> */
var_other31 = var62;
{
var67 = ((short int (*)(val*, val*))(var59->class->vft[COLOR_kernel__Object___61d_61d]))(var59, var_other31) /* == on <var59:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var66 = var67;
}
var68 = !var66;
var64 = var68;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
var_69 = var63;
if (var63){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var72 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var70) on <var70:AbstractCompiler(SeparateCompiler)> */
var75 = var70->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var70:AbstractCompiler(SeparateCompiler)> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (var73 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1032);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var73) on <var73:nullable RapidTypeAnalysis> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var78 = var73->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var73:nullable RapidTypeAnalysis> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", "rapid_type_analysis.nit", 53);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var81 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:MType> isa MClassType */
cltype83 = type_model__MClassType.color;
idtype84 = type_model__MClassType.id;
if(cltype83 >= var79->type->table_size) {
var82 = 0;
} else {
var82 = var79->type->type_table[cltype83] == idtype84;
}
if (unlikely(!var82)) {
var_class_name = var79 == NULL ? "null" : var79->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1032);
show_backtrace(1);
}
{
var85 = hash_collection__HashSet__has(var76, var79);
}
var86 = !var85;
var55 = var86;
} else {
var55 = var_69;
}
if (var55){
if (varonce87) {
var88 = varonce87;
} else {
var89 = "/*no boxing of ";
var90 = 15;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var94 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = ": ";
var98 = 2;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var102 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = " is not live! */";
var106 = 16;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var108 = array_instance Array[Object] */
var109 = 5;
var110 = NEW_array__NativeArray(var109, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var110)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var110)->values[1] = (val*) var92;
((struct instance_array__NativeArray*)var110)->values[2] = (val*) var96;
((struct instance_array__NativeArray*)var110)->values[3] = (val*) var100;
((struct instance_array__NativeArray*)var110)->values[4] = (val*) var104;
{
((void (*)(val*, val*, long))(var108->class->vft[COLOR_array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[Object]>*/;
}
}
{
var111 = ((val* (*)(val*))(var108->class->vft[COLOR_string__Object__to_s]))(var108) /* to_s on <var108:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var111); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = "PRINT_ERROR(\"Dead code executed!\\n\"); show_backtrace(1);";
var115 = 56;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = "BOX_";
var120 = 4;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
{
var122 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
var123 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var123 = array_instance Array[Object] */
var124 = 2;
var125 = NEW_array__NativeArray(var124, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var125)->values[0] = (val*) var118;
((struct instance_array__NativeArray*)var125)->values[1] = (val*) var122;
{
((void (*)(val*, val*, long))(var123->class->vft[COLOR_array__Array__with_native]))(var123, var125, var124) /* with_native on <var123:Array[Object]>*/;
}
}
{
var126 = ((val* (*)(val*))(var123->class->vft[COLOR_string__Object__to_s]))(var123) /* to_s on <var123:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var126); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = " = BOX_";
var130 = 7;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
{
var132 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "(";
var136 = 1;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "); /* boxing ";
var141 = 13;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var145 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = " */";
var149 = 3;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
var151 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var151 = array_instance Array[Object] */
var152 = 8;
var153 = NEW_array__NativeArray(var152, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var153)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var153)->values[1] = (val*) var128;
((struct instance_array__NativeArray*)var153)->values[2] = (val*) var132;
((struct instance_array__NativeArray*)var153)->values[3] = (val*) var134;
((struct instance_array__NativeArray*)var153)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var153)->values[5] = (val*) var139;
((struct instance_array__NativeArray*)var153)->values[6] = (val*) var143;
((struct instance_array__NativeArray*)var153)->values[7] = (val*) var147;
{
((void (*)(val*, val*, long))(var151->class->vft[COLOR_array__Array__with_native]))(var151, var153, var152) /* with_native on <var151:Array[Object]>*/;
}
}
{
var154 = ((val* (*)(val*))(var151->class->vft[COLOR_string__Object__to_s]))(var151) /* to_s on <var151:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = "type_";
var158 = 5;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
{
var160 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
var161 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var161 = array_instance Array[Object] */
var162 = 2;
var163 = NEW_array__NativeArray(var162, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var163)->values[0] = (val*) var156;
((struct instance_array__NativeArray*)var163)->values[1] = (val*) var160;
{
((void (*)(val*, val*, long))(var161->class->vft[COLOR_array__Array__with_native]))(var161, var163, var162) /* with_native on <var161:Array[Object]>*/;
}
}
{
var164 = ((val* (*)(val*))(var161->class->vft[COLOR_string__Object__to_s]))(var161) /* to_s on <var161:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var164); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "->type = &type_";
var168 = 15;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
{
var170 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = ";";
var174 = 1;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var176 = array_instance Array[Object] */
var177 = 4;
var178 = NEW_array__NativeArray(var177, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var178)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var178)->values[1] = (val*) var166;
((struct instance_array__NativeArray*)var178)->values[2] = (val*) var170;
((struct instance_array__NativeArray*)var178)->values[3] = (val*) var172;
{
((void (*)(val*, val*, long))(var176->class->vft[COLOR_array__Array__with_native]))(var176, var178, var177) /* with_native on <var176:Array[Object]>*/;
}
}
{
var179 = ((val* (*)(val*))(var176->class->vft[COLOR_string__Object__to_s]))(var176) /* to_s on <var176:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var179); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = "class_";
var183 = 6;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
{
var185 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
var186 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var186 = array_instance Array[Object] */
var187 = 2;
var188 = NEW_array__NativeArray(var187, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var188)->values[0] = (val*) var181;
((struct instance_array__NativeArray*)var188)->values[1] = (val*) var185;
{
((void (*)(val*, val*, long))(var186->class->vft[COLOR_array__Array__with_native]))(var186, var188, var187) /* with_native on <var186:Array[Object]>*/;
}
}
{
var189 = ((val* (*)(val*))(var186->class->vft[COLOR_string__Object__to_s]))(var186) /* to_s on <var186:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var189); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "->class = &class_";
var193 = 17;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
{
var195 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = ";";
var199 = 1;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
var201 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var201 = array_instance Array[Object] */
var202 = 4;
var203 = NEW_array__NativeArray(var202, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var203)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var203)->values[1] = (val*) var191;
((struct instance_array__NativeArray*)var203)->values[2] = (val*) var195;
((struct instance_array__NativeArray*)var203)->values[3] = (val*) var197;
{
((void (*)(val*, val*, long))(var201->class->vft[COLOR_array__Array__with_native]))(var201, var203, var202) /* with_native on <var201:Array[Object]>*/;
}
}
{
var204 = ((val* (*)(val*))(var201->class->vft[COLOR_string__Object__to_s]))(var201) /* to_s on <var201:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var204); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#box_extern for (self: Object, RuntimeVariable, MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__box_extern(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : Set[MType] */;
val* var25 /* : Set[MType] */;
val* var26 /* : MType */;
val* var28 /* : MType */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : MType */;
val* var36 /* : MType */;
val* var37 /* : String */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : MType */;
val* var49 /* : MType */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__MType__ctype]))(var1) /* ctype on <var1:MType>*/;
}
if (varonce) {
var5 = varonce;
} else {
var6 = "val*";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var10 = string__FlatString___61d_61d(var4, var5);
var9 = var10;
}
if (var9){
if (varonce11) {
var12 = varonce11;
} else {
var13 = "->type";
var14 = 6;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 2;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var_value;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
var = var19;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var20) on <var20:AbstractCompiler(SeparateCompiler)> */
var25 = var20->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var20:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 156);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var28 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
((void (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var23, var26) /* add on <var23:Set[MType]>*/;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "type_";
var32 = 5;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var36 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_compiler__MType__c_name]))(var34) /* c_name on <var34:MType>*/;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 2;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var30;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var37;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "(&type_";
var45 = 7;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var49 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_compiler__MType__c_name]))(var47) /* c_name on <var47:MType>*/;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ")";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var50;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var52;
{
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
var = var59;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateCompilerVisitor__type_info(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#compile_callsite for (self: SeparateCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : nullable RapidTypeAnalysis */;
val* var6 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
val* var7 /* : MMethod */;
val* var9 /* : MMethod */;
val* var_mmethod /* var mmethod: MMethod */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : ModelBuilder */;
val* var17 /* : ModelBuilder */;
val* var18 /* : ToolContext */;
val* var20 /* : ToolContext */;
val* var21 /* : OptionBool */;
val* var23 /* : OptionBool */;
val* var24 /* : nullable Object */;
val* var26 /* : nullable Object */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Set[MMethodDef] */;
val* var_tgs /* var tgs: Set[MMethodDef] */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var48 /* : nullable Object */;
val* var49 /* : nullable Object */;
val* var50 /* : MClassDef */;
val* var52 /* : MClassDef */;
val* var53 /* : MClassType */;
val* var55 /* : MClassType */;
val* var56 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : null */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
static val* varonce;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_args = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var1:AbstractCompiler(SeparateCompiler)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_rta = var4;
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var9 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_mmethod = var7;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var12) on <var12:AbstractCompiler(SeparateCompiler)> */
var17 = var12->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var12:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var15) on <var15:ModelBuilder> */
var20 = var15->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var15:ModelBuilder> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_direct_call_monomorph (var18) on <var18:ToolContext> */
var23 = var18->attrs[COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <var18:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 36);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline opts#Option#value (var21) on <var21:OptionBool> */
var26 = var21->attrs[COLOR_opts__Option___value].val; /* _value on <var21:OptionBool> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = ((struct instance_kernel__Bool*)var24)->value; /* autounbox from nullable Object to Bool */;
var_ = var27;
if (var27){
var28 = NULL;
if (var_rta == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,var28) on <var_rta:nullable RapidTypeAnalysis> */
var_other = var28;
{
var33 = ((short int (*)(val*, val*))(var_rta->class->vft[COLOR_kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
var32 = var33;
}
var34 = !var32;
var30 = var34;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
var11 = var29;
} else {
var11 = var_;
}
var_35 = var11;
if (var11){
{
{ /* Inline model#MMethod#is_root_init (var_mmethod) on <var_mmethod:MMethod> */
var38 = var_mmethod->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var_mmethod:MMethod> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = !var36;
var10 = var39;
} else {
var10 = var_35;
}
if (var10){
{
var40 = rapid_type_analysis__RapidTypeAnalysis__live_targets(var_rta, var_callsite);
}
var_tgs = var40;
{
var41 = ((long (*)(val*))(var_tgs->class->vft[COLOR_abstract_collection__Collection__length]))(var_tgs) /* length on <var_tgs:Set[MMethodDef]>*/;
}
var42 = 1;
{
{ /* Inline kernel#Int#== (var41,var42) on <var41:Int> */
var46 = var41 == var42;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
{
var47 = separate_compiler__SeparateCompilerVisitor__before_send(self, var_mmethod, var_args);
}
var_res0 = var47;
{
var48 = ((val* (*)(val*))(var_tgs->class->vft[COLOR_abstract_collection__Collection__first]))(var_tgs) /* first on <var_tgs:Set[MMethodDef]>*/;
}
{
var49 = ((val* (*)(val*))(var_tgs->class->vft[COLOR_abstract_collection__Collection__first]))(var_tgs) /* first on <var_tgs:Set[MMethodDef]>*/;
}
{
{ /* Inline model#MPropDef#mclassdef (var49) on <var49:nullable Object(MMethodDef)> */
var52 = var49->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var49:nullable Object(MMethodDef)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var50) on <var50:MClassDef> */
var55 = var50->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var50:MClassDef> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = separate_compiler__SeparateCompilerVisitor__call(self, var48, var53, var_args);
}
var_res = var56;
var57 = NULL;
if (var_res0 == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res0,var57) on <var_res0:nullable RuntimeVariable> */
var_other = var57;
{
var62 = ((short int (*)(val*, val*))(var_res0->class->vft[COLOR_kernel__Object___61d_61d]))(var_res0, var_other) /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/;
var61 = var62;
}
var63 = !var61;
var59 = var63;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
var64 = NULL;
if (var_res == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var64) on <var_res:nullable RuntimeVariable> */
var_other = var64;
{
var69 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var68 = var69;
}
var70 = !var68;
var66 = var70;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1074);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(self, var_res0, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (varonce) {
var71 = varonce;
} else {
var72 = "}";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce = var71;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var71); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
{
var75 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__compile_callsite]))(self, p0, p1) /* compile_callsite on <self:SeparateCompilerVisitor>*/;
}
var = var75;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#compile_callsite for (self: Object, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__compile_callsite(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AbstractCompiler */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var_m /* var m: MModule */;
val* var22 /* : AbstractCompiler */;
val* var24 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var27 /* : AbstractCompiler */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
val* var32 /* : nullable Object */;
val* var33 /* : MType */;
val* var35 /* : MType */;
val* var36 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var37 /* : AbstractCompiler */;
val* var39 /* : AbstractCompiler */;
val* var41 /* : String */;
val* var42 /* : nullable RuntimeVariable */;
var_mmethod = p0;
var_arguments = p1;
{
var1 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var2) /* ctype on <var2:MType>*/;
}
if (varonce) {
var6 = varonce;
} else {
var7 = "val*";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
{ /* Inline kernel#Object#!= (var5,var6) on <var5:String> */
var_other = var6;
{
var14 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:String>*/;
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var18 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var16) on <var16:AbstractCompiler(SeparateCompiler)> */
var21 = var16->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var16:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_m = var19;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var24 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var27 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule (var25) on <var25:AbstractCompiler(SeparateCompiler)> */
var30 = var25->attrs[COLOR_abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var25:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 467);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var22,var28) on <var22:AbstractCompiler(SeparateCompiler)> */
var22->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var28; /* _mainmodule on <var22:AbstractCompiler(SeparateCompiler)> */
RET_LABEL31:(void)0;
}
}
{
var32 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var32) on <var32:nullable Object(RuntimeVariable)> */
var35 = var32->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var32:nullable Object(RuntimeVariable)> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = abstract_compiler__AbstractCompilerVisitor__monomorphic_send(self, var_mmethod, var33, var_arguments);
}
var_res = var36;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var39 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var37,var_m) on <var37:AbstractCompiler(SeparateCompiler)> */
var37->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_m; /* _mainmodule on <var37:AbstractCompiler(SeparateCompiler)> */
RET_LABEL40:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var41 = separate_compiler__MProperty__const_color(var_mmethod);
}
{
var42 = separate_compiler__SeparateCompilerVisitor__table_send(self, var_mmethod, var_arguments, var41);
}
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#send for (self: Object, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__send(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#before_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__before_send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var2 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
val* var22 /* : String */;
val* var24 /* : String */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
val* var32 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var42 /* : Bool */;
val* var43 /* : MType */;
val* var45 /* : MType */;
short int var46 /* : Bool */;
int cltype;
int idtype;
short int var_47 /* var : Bool */;
short int var_maybenull /* var maybenull: Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : MClassType */;
val* var73 /* : RuntimeVariable */;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var76 /* : MType */;
val* var78 /* : MType */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : MType */;
val* var98 /* : MType */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
val* var122 /* : Array[Object] */;
long var123 /* : Int */;
val* var124 /* : NativeArray[Object] */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
val* var136 /* : MClassType */;
val* var137 /* : RuntimeVariable */;
long var138 /* : Int */;
val* var139 /* : nullable Object */;
val* var_arg140 /* var arg: RuntimeVariable */;
val* var141 /* : MType */;
val* var143 /* : MType */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : Array[Object] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[Object] */;
val* var160 /* : String */;
val* var161 /* : MType */;
val* var163 /* : MType */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : FlatString */;
val* var187 /* : Array[Object] */;
long var188 /* : Int */;
val* var189 /* : NativeArray[Object] */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : FlatString */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : FlatString */;
short int var206 /* : Bool */;
val* var207 /* : AbstractCompiler */;
val* var209 /* : AbstractCompiler */;
val* var210 /* : ModelBuilder */;
val* var212 /* : ModelBuilder */;
val* var213 /* : ToolContext */;
val* var215 /* : ToolContext */;
val* var216 /* : OptionBool */;
val* var218 /* : OptionBool */;
val* var219 /* : nullable Object */;
val* var221 /* : nullable Object */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var_224 /* var : Bool */;
short int var225 /* : Bool */;
val* var226 /* : String */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var_236 /* var : Bool */;
val* var237 /* : String */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : FlatString */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
val* var247 /* : null */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
val* var254 /* : MClassType */;
val* var255 /* : RuntimeVariable */;
long var256 /* : Int */;
val* var257 /* : nullable Object */;
val* var_arg258 /* var arg: RuntimeVariable */;
val* var259 /* : MType */;
val* var261 /* : MType */;
short int var262 /* : Bool */;
int cltype263;
int idtype264;
val* var265 /* : String */;
val* var267 /* : String */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : FlatString */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : FlatString */;
val* var280 /* : Array[Object] */;
long var281 /* : Int */;
val* var282 /* : NativeArray[Object] */;
val* var283 /* : String */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
long var287 /* : Int */;
val* var288 /* : FlatString */;
val* var289 /* : Array[Object] */;
long var290 /* : Int */;
val* var291 /* : NativeArray[Object] */;
val* var292 /* : String */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : FlatString */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
var_mmethod = p0;
var_arguments = p1;
var1 = NULL;
var_res = var1;
{
var2 = abstract_collection__SequenceRead__first(var_arguments);
}
var_recv = var2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var7 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler(SeparateCompiler)> */
var10 = var5->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 57);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts#Option#value (var14) on <var14:OptionBool> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionBool> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = ((struct instance_kernel__Bool*)var17)->value; /* autounbox from nullable Object to Bool */;
var21 = !var20;
var_ = var21;
if (var21){
var4 = var_;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var24 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (varonce) {
var25 = varonce;
} else {
var26 = "==";
var27 = 2;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
var30 = string__FlatString___61d_61d(var22, var25);
var29 = var30;
}
var4 = var29;
}
var_31 = var4;
if (var4){
var3 = var_31;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var34 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "!=";
var38 = 2;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
var41 = string__FlatString___61d_61d(var32, var36);
var40 = var41;
}
var3 = var40;
}
var_consider_null = var3;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var45 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
/* <var43:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var43->type->table_size) {
var46 = 0;
} else {
var46 = var43->type->type_table[cltype] == idtype;
}
var_47 = var46;
if (var46){
var42 = var_consider_null;
} else {
var42 = var_47;
}
var_maybenull = var42;
if (var_maybenull){
if (varonce48) {
var49 = varonce48;
} else {
var50 = "if (";
var51 = 4;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = " == NULL) {";
var56 = 11;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var54;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var64 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "==";
var68 = 2;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
var71 = string__FlatString___61d_61d(var62, var66);
var70 = var71;
}
if (var70){
{
var72 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var73 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var72);
}
var_res = var73;
var74 = 1;
{
var75 = array__Array___91d_93d(var_arguments, var74);
}
var_arg = var75;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var78 = var_arg->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
/* <var76:MType> isa MNullableType */
cltype80 = type_model__MNullableType.color;
idtype81 = type_model__MNullableType.id;
if(cltype80 >= var76->type->table_size) {
var79 = 0;
} else {
var79 = var76->type->type_table[cltype80] == idtype81;
}
if (var79){
if (varonce82) {
var83 = varonce82;
} else {
var84 = " = (";
var85 = 4;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = " == NULL);";
var90 = 10;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 4;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var83;
((struct instance_array__NativeArray*)var94)->values[2] = (val*) var_arg;
((struct instance_array__NativeArray*)var94)->values[3] = (val*) var88;
{
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
}
{
var95 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var95); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var98 = var_arg->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
/* <var96:MType> isa MNullType */
cltype100 = type_model__MNullType.color;
idtype101 = type_model__MNullType.id;
if(cltype100 >= var96->type->table_size) {
var99 = 0;
} else {
var99 = var96->type->type_table[cltype100] == idtype101;
}
if (var99){
if (varonce102) {
var103 = varonce102;
} else {
var104 = " = 1; /* is null */";
var105 = 19;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 2;
var109 = NEW_array__NativeArray(var108, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var109)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var109)->values[1] = (val*) var103;
{
((void (*)(val*, val*, long))(var107->class->vft[COLOR_array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val*))(var107->class->vft[COLOR_string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var110); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce111) {
var112 = varonce111;
} else {
var113 = " = 0; /* ";
var114 = 9;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
var116 = abstract_compiler__RuntimeVariable__inspect(var_arg);
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = " cannot be null */";
var120 = 18;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var122 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var122 = array_instance Array[Object] */
var123 = 4;
var124 = NEW_array__NativeArray(var123, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var124)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var124)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var124)->values[2] = (val*) var116;
((struct instance_array__NativeArray*)var124)->values[3] = (val*) var118;
{
((void (*)(val*, val*, long))(var122->class->vft[COLOR_array__Array__with_native]))(var122, var124, var123) /* with_native on <var122:Array[Object]>*/;
}
}
{
var125 = ((val* (*)(val*))(var122->class->vft[COLOR_string__Object__to_s]))(var122) /* to_s on <var122:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var125); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var128 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "!=";
var132 = 2;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
{
var135 = string__FlatString___61d_61d(var126, var130);
var134 = var135;
}
if (var134){
{
var136 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var137 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var136);
}
var_res = var137;
var138 = 1;
{
var139 = array__Array___91d_93d(var_arguments, var138);
}
var_arg140 = var139;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg140) on <var_arg140:RuntimeVariable> */
var143 = var_arg140->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg140:RuntimeVariable> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
/* <var141:MType> isa MNullableType */
cltype145 = type_model__MNullableType.color;
idtype146 = type_model__MNullableType.id;
if(cltype145 >= var141->type->table_size) {
var144 = 0;
} else {
var144 = var141->type->type_table[cltype145] == idtype146;
}
if (var144){
if (varonce147) {
var148 = varonce147;
} else {
var149 = " = (";
var150 = 4;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = " != NULL);";
var155 = 10;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 4;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var159)->values[1] = (val*) var148;
((struct instance_array__NativeArray*)var159)->values[2] = (val*) var_arg140;
((struct instance_array__NativeArray*)var159)->values[3] = (val*) var153;
{
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[Object]>*/;
}
}
{
var160 = ((val* (*)(val*))(var157->class->vft[COLOR_string__Object__to_s]))(var157) /* to_s on <var157:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg140) on <var_arg140:RuntimeVariable> */
var163 = var_arg140->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg140:RuntimeVariable> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
/* <var161:MType> isa MNullType */
cltype165 = type_model__MNullType.color;
idtype166 = type_model__MNullType.id;
if(cltype165 >= var161->type->table_size) {
var164 = 0;
} else {
var164 = var161->type->type_table[cltype165] == idtype166;
}
if (var164){
if (varonce167) {
var168 = varonce167;
} else {
var169 = " = 0; /* is null */";
var170 = 19;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 2;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var168;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce176) {
var177 = varonce176;
} else {
var178 = " = 1; /* ";
var179 = 9;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
{
var181 = abstract_compiler__RuntimeVariable__inspect(var_arg140);
}
if (varonce182) {
var183 = varonce182;
} else {
var184 = " cannot be null */";
var185 = 18;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
var187 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var187 = array_instance Array[Object] */
var188 = 4;
var189 = NEW_array__NativeArray(var188, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var189)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var189)->values[1] = (val*) var177;
((struct instance_array__NativeArray*)var189)->values[2] = (val*) var181;
((struct instance_array__NativeArray*)var189)->values[3] = (val*) var183;
{
((void (*)(val*, val*, long))(var187->class->vft[COLOR_array__Array__with_native]))(var187, var189, var188) /* with_native on <var187:Array[Object]>*/;
}
}
{
var190 = ((val* (*)(val*))(var187->class->vft[COLOR_string__Object__to_s]))(var187) /* to_s on <var187:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var190); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (varonce191) {
var192 = varonce191;
} else {
var193 = "Receiver is null";
var194 = 16;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var192); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
}
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = "} else {";
var199 = 8;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var197); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce201) {
var202 = varonce201;
} else {
var203 = "{";
var204 = 1;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var202); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var209 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var207) on <var207:AbstractCompiler(SeparateCompiler)> */
var212 = var207->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var207:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var210) on <var210:ModelBuilder> */
var215 = var210->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var210:ModelBuilder> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_shortcut_equate (var213) on <var213:ToolContext> */
var218 = var213->attrs[COLOR_separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <var213:ToolContext> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 30);
show_backtrace(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline opts#Option#value (var216) on <var216:OptionBool> */
var221 = var216->attrs[COLOR_opts__Option___value].val; /* _value on <var216:OptionBool> */
var219 = var221;
RET_LABEL220:(void)0;
}
}
var222 = ((struct instance_kernel__Bool*)var219)->value; /* autounbox from nullable Object to Bool */;
var223 = !var222;
var_224 = var223;
if (var223){
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var228 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = "==";
var232 = 2;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
{
var235 = string__FlatString___61d_61d(var226, var230);
var234 = var235;
}
var_236 = var234;
if (var234){
var225 = var_236;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var239 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (varonce240) {
var241 = varonce240;
} else {
var242 = "!=";
var243 = 2;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
{
var246 = string__FlatString___61d_61d(var237, var241);
var245 = var246;
}
var225 = var245;
}
var206 = var225;
} else {
var206 = var_224;
}
if (var206){
var247 = NULL;
if (var_res == NULL) {
var248 = 1; /* is null */
} else {
var248 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var247) on <var_res:nullable RuntimeVariable> */
var_other = var247;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var253 = var_res == var_other;
var251 = var253;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
}
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
{
var254 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var255 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var254);
}
var_res = var255;
} else {
}
var256 = 1;
{
var257 = array__Array___91d_93d(var_arguments, var256);
}
var_arg258 = var257;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg258) on <var_arg258:RuntimeVariable> */
var261 = var_arg258->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg258:RuntimeVariable> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
/* <var259:MType> isa MNullType */
cltype263 = type_model__MNullType.color;
idtype264 = type_model__MNullType.id;
if(cltype263 >= var259->type->table_size) {
var262 = 0;
} else {
var262 = var259->type->type_table[cltype263] == idtype264;
}
if (var262){
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var267 = var_mmethod->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var267 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "==";
var271 = 2;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
{
var274 = string__FlatString___61d_61d(var265, var269);
var273 = var274;
}
if (var273){
if (varonce275) {
var276 = varonce275;
} else {
var277 = " = 0; /* arg is null but recv is not */";
var278 = 39;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
var280 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var280 = array_instance Array[Object] */
var281 = 2;
var282 = NEW_array__NativeArray(var281, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var282)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var282)->values[1] = (val*) var276;
{
((void (*)(val*, val*, long))(var280->class->vft[COLOR_array__Array__with_native]))(var280, var282, var281) /* with_native on <var280:Array[Object]>*/;
}
}
{
var283 = ((val* (*)(val*))(var280->class->vft[COLOR_string__Object__to_s]))(var280) /* to_s on <var280:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var283); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce284) {
var285 = varonce284;
} else {
var286 = " = 1; /* arg is null and recv is not */";
var287 = 39;
var288 = string__NativeString__to_s_with_length(var286, var287);
var285 = var288;
varonce284 = var285;
}
var289 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var289 = array_instance Array[Object] */
var290 = 2;
var291 = NEW_array__NativeArray(var290, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var291)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var291)->values[1] = (val*) var285;
{
((void (*)(val*, val*, long))(var289->class->vft[COLOR_array__Array__with_native]))(var289, var291, var290) /* with_native on <var289:Array[Object]>*/;
}
}
{
var292 = ((val* (*)(val*))(var289->class->vft[COLOR_string__Object__to_s]))(var289) /* to_s on <var289:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var292); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
if (varonce293) {
var294 = varonce293;
} else {
var295 = "}";
var296 = 1;
var297 = string__NativeString__to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var294); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = "if (0) {";
var301 = 8;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var299); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#before_send for (self: Object, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__before_send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__before_send(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#table_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable], String): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__table_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var_const_color /* var const_color: String */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var_ /* var : ModelBuilder */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
val* var16 /* : AbstractCompiler */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : ModelBuilder */;
val* var21 /* : ModelBuilder */;
val* var22 /* : ToolContext */;
val* var24 /* : ToolContext */;
val* var25 /* : OptionBool */;
val* var27 /* : OptionBool */;
val* var28 /* : nullable Object */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
long var36 /* : Int */;
long var38 /* : Int */;
val* var39 /* : MPropDef */;
val* var41 /* : MPropDef */;
val* var42 /* : nullable MSignature */;
val* var44 /* : nullable MSignature */;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
long var68 /* : Int */;
long var70 /* : Int */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : Object */;
val* var80 /* : String */;
val* var81 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var82 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var83 /* : MPropDef */;
val* var85 /* : MPropDef */;
val* var86 /* : nullable MSignature */;
val* var88 /* : nullable MSignature */;
val* var89 /* : MPropDef */;
val* var91 /* : MPropDef */;
val* var92 /* : MClassDef */;
val* var94 /* : MClassDef */;
val* var95 /* : MClassType */;
val* var97 /* : MClassType */;
val* var98 /* : MPropDef */;
val* var100 /* : MPropDef */;
val* var101 /* : MClassDef */;
val* var103 /* : MClassDef */;
val* var104 /* : MClassType */;
val* var106 /* : MClassType */;
val* var107 /* : MPropDef */;
val* var109 /* : MPropDef */;
val* var110 /* : MClassDef */;
val* var112 /* : MClassDef */;
val* var113 /* : MModule */;
val* var115 /* : MModule */;
short int var116 /* : Bool */;
val* var117 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var118 /* : nullable MType */;
val* var120 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var121 /* : null */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var129 /* : RuntimeVariable */;
val* var130 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var131 /* : FlatBuffer */;
val* var_ss /* var ss: FlatBuffer */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
val* var137 /* : Array[Object] */;
long var138 /* : Int */;
val* var139 /* : NativeArray[Object] */;
val* var140 /* : String */;
long var141 /* : Int */;
long var_i /* var i: Int */;
long var142 /* : Int */;
long var_143 /* var : Int */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
const char* var_class_name149;
short int var150 /* : Bool */;
long var151 /* : Int */;
long var152 /* : Int */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const char* var_class_name157;
long var158 /* : Int */;
val* var159 /* : nullable Object */;
val* var_a /* var a: RuntimeVariable */;
val* var160 /* : Array[MParameter] */;
val* var162 /* : Array[MParameter] */;
val* var163 /* : nullable Object */;
val* var164 /* : MType */;
val* var166 /* : MType */;
val* var_t /* var t: MType */;
long var167 /* : Int */;
long var169 /* : Int */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
long var174 /* : Int */;
long var175 /* : Int */;
short int var177 /* : Bool */;
int cltype178;
int idtype179;
const char* var_class_name180;
long var181 /* : Int */;
val* var182 /* : nullable Object */;
val* var183 /* : MType */;
val* var185 /* : MType */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
val* var190 /* : FlatString */;
val* var191 /* : String */;
val* var192 /* : Array[Object] */;
long var193 /* : Int */;
val* var194 /* : NativeArray[Object] */;
val* var195 /* : String */;
val* var196 /* : RuntimeVariable */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
val* var202 /* : Array[Object] */;
long var203 /* : Int */;
val* var204 /* : NativeArray[Object] */;
val* var205 /* : String */;
long var206 /* : Int */;
long var207 /* : Int */;
val* var208 /* : null */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
val* var_r /* var r: nullable Object */;
val* var220 /* : String */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : FlatString */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : FlatString */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : FlatString */;
val* var236 /* : nullable Object */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
long var240 /* : Int */;
val* var241 /* : FlatString */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : FlatString */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
long var250 /* : Int */;
val* var251 /* : FlatString */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : FlatString */;
val* var257 /* : nullable Object */;
val* var258 /* : String */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
long var262 /* : Int */;
val* var263 /* : FlatString */;
val* var264 /* : Array[Object] */;
long var265 /* : Int */;
val* var266 /* : NativeArray[Object] */;
val* var267 /* : String */;
val* var_call /* var call: String */;
val* var268 /* : null */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
val* var_other272 /* var other: nullable Object */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : FlatString */;
val* var286 /* : Array[Object] */;
long var287 /* : Int */;
val* var288 /* : NativeArray[Object] */;
val* var289 /* : String */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : FlatString */;
val* var295 /* : Array[Object] */;
long var296 /* : Int */;
val* var297 /* : NativeArray[Object] */;
val* var298 /* : String */;
val* var299 /* : null */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
val* var306 /* : null */;
short int var307 /* : Bool */;
short int var308 /* : Bool */;
short int var310 /* : Bool */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
var_mmethod = p0;
var_arguments = p1;
var_const_color = p2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var_) on <var_:ModelBuilder> */
var9 = var_->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var_:ModelBuilder> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = 1;
{
{ /* Inline kernel#Int#+ (var7,var10) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var14 = var7 + var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables= (var_,var11) on <var_:ModelBuilder> */
var_->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l = var11; /* _nb_invok_by_tables on <var_:ModelBuilder> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var18 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var16) on <var16:AbstractCompiler(SeparateCompiler)> */
var21 = var16->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var16:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var19) on <var19:ModelBuilder> */
var24 = var19->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var19:ModelBuilder> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var22) on <var22:ToolContext> */
var27 = var22->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var22:ToolContext> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 63);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline opts#Option#value (var25) on <var25:OptionBool> */
var30 = var25->attrs[COLOR_opts__Option___value].val; /* _value on <var25:OptionBool> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = ((struct instance_kernel__Bool*)var28)->value; /* autounbox from nullable Object to Bool */;
if (var31){
if (varonce) {
var32 = varonce;
} else {
var33 = "count_invoke_by_tables++;";
var34 = 25;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var38 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var41 = var_mmethod->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var39) on <var39:MPropDef(MMethodDef)> */
var44 = var39->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var39:MPropDef(MMethodDef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1167);
show_backtrace(1);
} else {
var45 = model__MSignature__arity(var42);
}
var46 = 1;
{
{ /* Inline kernel#Int#+ (var45,var46) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var53 = var45 + var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var36,var47) on <var36:Int> */
var57 = var36 == var47;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (unlikely(!var54)) {
if (varonce58) {
var59 = varonce58;
} else {
var60 = "Invalid arity for ";
var61 = 18;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = ". ";
var66 = 2;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var70 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = " arguments given.";
var74 = 17;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 5;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var_mmethod;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var64;
var79 = BOX_kernel__Int(var68); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var78)->values[3] = (val*) var79;
((struct instance_array__NativeArray*)var78)->values[4] = (val*) var72;
{
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__debug(self, var80); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1167);
show_backtrace(1);
}
{
var81 = abstract_collection__SequenceRead__first(var_arguments);
}
var_recv = var81;
{
var82 = separate_compiler__SeparateCompilerVisitor__before_send(self, var_mmethod, var_arguments);
}
var_res0 = var82;
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var85 = var_mmethod->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var83) on <var83:MPropDef(MMethodDef)> */
var88 = var83->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var83:MPropDef(MMethodDef)> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var91 = var_mmethod->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var89) on <var89:MPropDef(MMethodDef)> */
var94 = var89->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var89:MPropDef(MMethodDef)> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var92) on <var92:MClassDef> */
var97 = var92->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var92:MClassDef> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var100 = var_mmethod->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var98) on <var98:MPropDef(MMethodDef)> */
var103 = var98->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var98:MPropDef(MMethodDef)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var101) on <var101:MClassDef> */
var106 = var101->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var101:MClassDef> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var109 = var_mmethod->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var107) on <var107:MPropDef(MMethodDef)> */
var112 = var107->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var107:MPropDef(MMethodDef)> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var110) on <var110:MClassDef> */
var115 = var110->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var110:MClassDef> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
var116 = 1;
if (var86 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1173);
show_backtrace(1);
} else {
var117 = model__MSignature__resolve_for(var86, var95, var104, var113, var116);
}
var_msignature = var117;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var120 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_ret = var118;
var121 = NULL;
if (var_ret == NULL) {
var122 = 1; /* is null */
} else {
var122 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var121) on <var_ret:nullable MType> */
var_other = var121;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var127 = var_ret == var_other;
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
var123 = var125;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
var122 = var123;
}
if (var122){
var128 = NULL;
var_res = var128;
} else {
{
var129 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_ret);
}
var_res = var129;
}
var130 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var130->class->vft[COLOR_kernel__Object__init]))(var130) /* init on <var130:FlatBuffer>*/;
}
var_s = var130;
var131 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var131->class->vft[COLOR_kernel__Object__init]))(var131) /* init on <var131:FlatBuffer>*/;
}
var_ss = var131;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "val*";
var135 = 4;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
{
string__FlatBuffer__append(var_s, var133); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
var137 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var137 = array_instance Array[Object] */
var138 = 1;
var139 = NEW_array__NativeArray(var138, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var139)->values[0] = (val*) var_recv;
{
((void (*)(val*, val*, long))(var137->class->vft[COLOR_array__Array__with_native]))(var137, var139, var138) /* with_native on <var137:Array[Object]>*/;
}
}
{
var140 = ((val* (*)(val*))(var137->class->vft[COLOR_string__Object__to_s]))(var137) /* to_s on <var137:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_ss, var140); /* Direct call string#FlatBuffer#append on <var_ss:FlatBuffer>*/
}
var141 = 0;
var_i = var141;
{
var142 = model__MSignature__arity(var_msignature);
}
var_143 = var142;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_143) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_143:Int> isa OTHER */
/* <var_143:Int> isa OTHER */
var146 = 1; /* easy <var_143:Int> isa OTHER*/
if (unlikely(!var146)) {
var_class_name149 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name149);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var150 = var_i < var_143;
var144 = var150;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
if (var144){
var151 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var151) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var151:Int> isa OTHER */
/* <var151:Int> isa OTHER */
var154 = 1; /* easy <var151:Int> isa OTHER*/
if (unlikely(!var154)) {
var_class_name157 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name157);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var158 = var_i + var151;
var152 = var158;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
{
var159 = array__Array___91d_93d(var_arguments, var152);
}
var_a = var159;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var162 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
var163 = array__Array___91d_93d(var160, var_i);
}
{
{ /* Inline model#MParameter#mtype (var163) on <var163:nullable Object(MParameter)> */
var166 = var163->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var163:nullable Object(MParameter)> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
var_t = var164;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var169 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var167) on <var_i:Int> */
var173 = var_i == var167;
var171 = var173;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
var170 = var171;
}
if (var170){
var174 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var174) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var174:Int> isa OTHER */
/* <var174:Int> isa OTHER */
var177 = 1; /* easy <var174:Int> isa OTHER*/
if (unlikely(!var177)) {
var_class_name180 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name180);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var181 = var_i + var174;
var175 = var181;
goto RET_LABEL176;
RET_LABEL176:(void)0;
}
}
{
var182 = array__Array___91d_93d(var_arguments, var175);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var182) on <var182:nullable Object(RuntimeVariable)> */
var185 = var182->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var182:nullable Object(RuntimeVariable)> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
var_t = var183;
} else {
}
if (varonce186) {
var187 = varonce186;
} else {
var188 = ", ";
var189 = 2;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
{
var191 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t) /* ctype on <var_t:MType>*/;
}
var192 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var192 = array_instance Array[Object] */
var193 = 2;
var194 = NEW_array__NativeArray(var193, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var194)->values[0] = (val*) var187;
((struct instance_array__NativeArray*)var194)->values[1] = (val*) var191;
{
((void (*)(val*, val*, long))(var192->class->vft[COLOR_array__Array__with_native]))(var192, var194, var193) /* with_native on <var192:Array[Object]>*/;
}
}
{
var195 = ((val* (*)(val*))(var192->class->vft[COLOR_string__Object__to_s]))(var192) /* to_s on <var192:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_s, var195); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
{
var196 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_a, var_t);
}
var_a = var196;
if (varonce197) {
var198 = varonce197;
} else {
var199 = ", ";
var200 = 2;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 2;
var204 = NEW_array__NativeArray(var203, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var204)->values[0] = (val*) var198;
((struct instance_array__NativeArray*)var204)->values[1] = (val*) var_a;
{
((void (*)(val*, val*, long))(var202->class->vft[COLOR_array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
}
{
var205 = ((val* (*)(val*))(var202->class->vft[COLOR_string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_ss, var205); /* Direct call string#FlatBuffer#append on <var_ss:FlatBuffer>*/
}
var206 = 1;
{
var207 = kernel__Int__successor(var_i, var206);
}
var_i = var207;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var208 = NULL;
if (var_ret == NULL) {
var209 = 1; /* is null */
} else {
var209 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var208) on <var_ret:nullable MType> */
var_other = var208;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var214 = var_ret == var_other;
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
var209 = var210;
}
if (var209){
if (varonce215) {
var216 = varonce215;
} else {
var217 = "void";
var218 = 4;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var_r = var216;
} else {
{
var220 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
}
var_r = var220;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var_const_color); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce221) {
var222 = varonce221;
} else {
var223 = "((";
var224 = 2;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
if (varonce226) {
var227 = varonce226;
} else {
var228 = " (*)(";
var229 = 5;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
if (varonce231) {
var232 = varonce231;
} else {
var233 = "))(";
var234 = 3;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
{
var236 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce237) {
var238 = varonce237;
} else {
var239 = "->class->vft[";
var240 = 13;
var241 = string__NativeString__to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = "]))(";
var245 = 4;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
if (varonce247) {
var248 = varonce247;
} else {
var249 = ") /* ";
var250 = 5;
var251 = string__NativeString__to_s_with_length(var249, var250);
var248 = var251;
varonce247 = var248;
}
if (varonce252) {
var253 = varonce252;
} else {
var254 = " on ";
var255 = 4;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
{
var257 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var258 = abstract_compiler__RuntimeVariable__inspect(var257);
}
if (varonce259) {
var260 = varonce259;
} else {
var261 = "*/";
var262 = 2;
var263 = string__NativeString__to_s_with_length(var261, var262);
var260 = var263;
varonce259 = var260;
}
var264 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var264 = array_instance Array[Object] */
var265 = 15;
var266 = NEW_array__NativeArray(var265, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var266)->values[0] = (val*) var222;
((struct instance_array__NativeArray*)var266)->values[1] = (val*) var_r;
((struct instance_array__NativeArray*)var266)->values[2] = (val*) var227;
((struct instance_array__NativeArray*)var266)->values[3] = (val*) var_s;
((struct instance_array__NativeArray*)var266)->values[4] = (val*) var232;
((struct instance_array__NativeArray*)var266)->values[5] = (val*) var236;
((struct instance_array__NativeArray*)var266)->values[6] = (val*) var238;
((struct instance_array__NativeArray*)var266)->values[7] = (val*) var_const_color;
((struct instance_array__NativeArray*)var266)->values[8] = (val*) var243;
((struct instance_array__NativeArray*)var266)->values[9] = (val*) var_ss;
((struct instance_array__NativeArray*)var266)->values[10] = (val*) var248;
((struct instance_array__NativeArray*)var266)->values[11] = (val*) var_mmethod;
((struct instance_array__NativeArray*)var266)->values[12] = (val*) var253;
((struct instance_array__NativeArray*)var266)->values[13] = (val*) var258;
((struct instance_array__NativeArray*)var266)->values[14] = (val*) var260;
{
((void (*)(val*, val*, long))(var264->class->vft[COLOR_array__Array__with_native]))(var264, var266, var265) /* with_native on <var264:Array[Object]>*/;
}
}
{
var267 = ((val* (*)(val*))(var264->class->vft[COLOR_string__Object__to_s]))(var264) /* to_s on <var264:Array[Object]>*/;
}
var_call = var267;
var268 = NULL;
if (var_res == NULL) {
var269 = 0; /* is null */
} else {
var269 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var268) on <var_res:nullable RuntimeVariable> */
var_other272 = var268;
{
var274 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other272) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var273 = var274;
}
var275 = !var273;
var270 = var275;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
var269 = var270;
}
if (var269){
if (varonce276) {
var277 = varonce276;
} else {
var278 = " = ";
var279 = 3;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
if (varonce281) {
var282 = varonce281;
} else {
var283 = ";";
var284 = 1;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
var286 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var286 = array_instance Array[Object] */
var287 = 4;
var288 = NEW_array__NativeArray(var287, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var288)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var288)->values[1] = (val*) var277;
((struct instance_array__NativeArray*)var288)->values[2] = (val*) var_call;
((struct instance_array__NativeArray*)var288)->values[3] = (val*) var282;
{
((void (*)(val*, val*, long))(var286->class->vft[COLOR_array__Array__with_native]))(var286, var288, var287) /* with_native on <var286:Array[Object]>*/;
}
}
{
var289 = ((val* (*)(val*))(var286->class->vft[COLOR_string__Object__to_s]))(var286) /* to_s on <var286:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var289); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce290) {
var291 = varonce290;
} else {
var292 = ";";
var293 = 1;
var294 = string__NativeString__to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
var295 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var295 = array_instance Array[Object] */
var296 = 2;
var297 = NEW_array__NativeArray(var296, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var297)->values[0] = (val*) var_call;
((struct instance_array__NativeArray*)var297)->values[1] = (val*) var291;
{
((void (*)(val*, val*, long))(var295->class->vft[COLOR_array__Array__with_native]))(var295, var297, var296) /* with_native on <var295:Array[Object]>*/;
}
}
{
var298 = ((val* (*)(val*))(var295->class->vft[COLOR_string__Object__to_s]))(var295) /* to_s on <var295:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var298); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var299 = NULL;
if (var_res0 == NULL) {
var300 = 0; /* is null */
} else {
var300 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res0,var299) on <var_res0:nullable RuntimeVariable> */
var_other272 = var299;
{
var304 = ((short int (*)(val*, val*))(var_res0->class->vft[COLOR_kernel__Object___61d_61d]))(var_res0, var_other272) /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/;
var303 = var304;
}
var305 = !var303;
var301 = var305;
goto RET_LABEL302;
RET_LABEL302:(void)0;
}
var300 = var301;
}
if (var300){
var306 = NULL;
if (var_res == NULL) {
var307 = 0; /* is null */
} else {
var307 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var306) on <var_res:nullable RuntimeVariable> */
var_other272 = var306;
{
var311 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other272) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var310 = var311;
}
var312 = !var310;
var308 = var312;
goto RET_LABEL309;
RET_LABEL309:(void)0;
}
var307 = var308;
}
if (unlikely(!var307)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1210);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(self, var_res0, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (varonce313) {
var314 = varonce313;
} else {
var315 = "}";
var316 = 1;
var317 = string__NativeString__to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var314); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#table_send for (self: Object, MMethod, Array[RuntimeVariable], String): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__table_send(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#call for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : nullable MSignature */;
val* var6 /* : nullable MSignature */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
long var26 /* : Int */;
long var28 /* : Int */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : Object */;
val* var38 /* : String */;
val* var39 /* : nullable MSignature */;
val* var41 /* : nullable MSignature */;
val* var42 /* : nullable MType */;
val* var44 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var53 /* : MClassDef */;
val* var55 /* : MClassDef */;
val* var56 /* : MClassType */;
val* var58 /* : MClassType */;
val* var59 /* : MClassDef */;
val* var61 /* : MClassDef */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
val* var65 /* : MClassDef */;
val* var67 /* : MClassDef */;
val* var68 /* : MModule */;
val* var70 /* : MModule */;
short int var71 /* : Bool */;
val* var72 /* : MType */;
val* var73 /* : RuntimeVariable */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var_ /* var : Bool */;
val* var79 /* : AbstractCompiler */;
val* var81 /* : AbstractCompiler */;
val* var82 /* : ModelBuilder */;
val* var84 /* : ModelBuilder */;
val* var85 /* : ToolContext */;
val* var87 /* : ToolContext */;
val* var88 /* : OptionBool */;
val* var90 /* : OptionBool */;
val* var91 /* : nullable Object */;
val* var93 /* : nullable Object */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var_96 /* var : Bool */;
short int var97 /* : Bool */;
val* var98 /* : AbstractCompiler */;
val* var100 /* : AbstractCompiler */;
val* var101 /* : ModelBuilder */;
val* var103 /* : ModelBuilder */;
val* var104 /* : ToolContext */;
val* var106 /* : ToolContext */;
val* var107 /* : OptionBool */;
val* var109 /* : OptionBool */;
val* var110 /* : nullable Object */;
val* var112 /* : nullable Object */;
short int var113 /* : Bool */;
short int var_114 /* var : Bool */;
short int var115 /* : Bool */;
val* var116 /* : AbstractCompiler */;
val* var118 /* : AbstractCompiler */;
val* var119 /* : ModelBuilder */;
val* var121 /* : ModelBuilder */;
val* var_122 /* var : ModelBuilder */;
long var123 /* : Int */;
long var125 /* : Int */;
long var126 /* : Int */;
long var127 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
long var133 /* : Int */;
val* var135 /* : AbstractCompiler */;
val* var137 /* : AbstractCompiler */;
val* var138 /* : ModelBuilder */;
val* var140 /* : ModelBuilder */;
val* var141 /* : ToolContext */;
val* var143 /* : ToolContext */;
val* var144 /* : OptionBool */;
val* var146 /* : OptionBool */;
val* var147 /* : nullable Object */;
val* var149 /* : nullable Object */;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
val* var156 /* : Frame */;
val* var_frame /* var frame: Frame */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var162 /* : String */;
val* var165 /* : nullable Frame */;
val* var167 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
val* var190 /* : nullable Object */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
val* var201 /* : nullable RuntimeVariable */;
val* var202 /* : nullable String */;
val* var204 /* : nullable String */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
val* var210 /* : Array[Object] */;
long var211 /* : Int */;
val* var212 /* : NativeArray[Object] */;
val* var213 /* : String */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
long var217 /* : Int */;
val* var218 /* : FlatString */;
val* var220 /* : AbstractCompiler */;
val* var222 /* : AbstractCompiler */;
val* var223 /* : ModelBuilder */;
val* var225 /* : ModelBuilder */;
val* var_226 /* var : ModelBuilder */;
long var227 /* : Int */;
long var229 /* : Int */;
long var230 /* : Int */;
long var231 /* : Int */;
short int var233 /* : Bool */;
int cltype234;
int idtype235;
const char* var_class_name236;
long var237 /* : Int */;
val* var239 /* : AbstractCompiler */;
val* var241 /* : AbstractCompiler */;
val* var242 /* : ModelBuilder */;
val* var244 /* : ModelBuilder */;
val* var245 /* : ToolContext */;
val* var247 /* : ToolContext */;
val* var248 /* : OptionBool */;
val* var250 /* : OptionBool */;
val* var251 /* : nullable Object */;
val* var253 /* : nullable Object */;
short int var254 /* : Bool */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : FlatString */;
val* var260 /* : String */;
val* var261 /* : null */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
short int var265 /* : Bool */;
short int var267 /* : Bool */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
long var272 /* : Int */;
val* var273 /* : FlatString */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
long var277 /* : Int */;
val* var278 /* : FlatString */;
val* var279 /* : String */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
long var283 /* : Int */;
val* var284 /* : FlatString */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
long var288 /* : Int */;
val* var289 /* : FlatString */;
val* var290 /* : nullable Object */;
val* var291 /* : String */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
val* var297 /* : Array[Object] */;
long var298 /* : Int */;
val* var299 /* : NativeArray[Object] */;
val* var300 /* : String */;
val* var301 /* : null */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
long var305 /* : Int */;
val* var306 /* : FlatString */;
val* var307 /* : String */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : FlatString */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
val* var318 /* : String */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
long var322 /* : Int */;
val* var323 /* : FlatString */;
val* var324 /* : Array[Object] */;
long var325 /* : Int */;
val* var326 /* : NativeArray[Object] */;
val* var327 /* : String */;
var_mmethoddef = p0;
var_recvtype = p1;
var_arguments = p2;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var3 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var6 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1222);
show_backtrace(1);
} else {
var7 = model__MSignature__arity(var4);
}
var8 = 1;
{
{ /* Inline kernel#Int#+ (var7,var8) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var12 = var7 + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,var9) on <var1:Int> */
var16 = var1 == var9;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (unlikely(!var13)) {
if (varonce) {
var17 = varonce;
} else {
var18 = "Invalid arity for ";
var19 = 18;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = ". ";
var24 = 2;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var28 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = " arguments given.";
var32 = 17;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 5;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var_mmethoddef;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var22;
var37 = BOX_kernel__Int(var26); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var36)->values[3] = (val*) var37;
((struct instance_array__NativeArray*)var36)->values[4] = (val*) var30;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var38 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__debug(self, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1222);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var41 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1225);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var39) on <var39:nullable MSignature> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var44 = var39->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var39:nullable MSignature> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_ret = var42;
var45 = NULL;
if (var_ret == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var45) on <var_ret:nullable MType> */
var_other = var45;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var51 = var_ret == var_other;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
var52 = NULL;
var_res = var52;
} else {
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var55 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var53) on <var53:MClassDef> */
var58 = var53->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var53:MClassDef> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var61 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var59) on <var59:MClassDef> */
var64 = var59->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var59:MClassDef> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var67 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var65) on <var65:MClassDef> */
var70 = var65->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var65:MClassDef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var71 = 1;
{
var72 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var56, var62, var68, var71) /* resolve_for on <var_ret:nullable MType(MType)>*/;
}
var_ret = var72;
{
var73 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_ret);
}
var_res = var73;
}
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var78 = var_mmethoddef->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
var_ = var76;
if (var76){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var81 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var79) on <var79:AbstractCompiler(SeparateCompiler)> */
var84 = var79->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var79:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var82) on <var82:ModelBuilder> */
var87 = var82->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var82:ModelBuilder> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_inline_intern (var85) on <var85:ToolContext> */
var90 = var85->attrs[COLOR_separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <var85:ToolContext> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 26);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline opts#Option#value (var88) on <var88:OptionBool> */
var93 = var88->attrs[COLOR_opts__Option___value].val; /* _value on <var88:OptionBool> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var94 = ((struct instance_kernel__Bool*)var91)->value; /* autounbox from nullable Object to Bool */;
var95 = !var94;
var75 = var95;
} else {
var75 = var_;
}
var_96 = var75;
if (var75){
var74 = var_96;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var100 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var98) on <var98:AbstractCompiler(SeparateCompiler)> */
var103 = var98->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var98:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var101) on <var101:ModelBuilder> */
var106 = var101->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var101:ModelBuilder> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_some_methods (var104) on <var104:ToolContext> */
var109 = var104->attrs[COLOR_separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <var104:ToolContext> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 34);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline opts#Option#value (var107) on <var107:OptionBool> */
var112 = var107->attrs[COLOR_opts__Option___value].val; /* _value on <var107:OptionBool> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
var113 = ((struct instance_kernel__Bool*)var110)->value; /* autounbox from nullable Object to Bool */;
var_114 = var113;
if (var113){
{
var115 = abstract_compiler__MMethodDef__can_inline(var_mmethoddef, self);
}
var97 = var115;
} else {
var97 = var_114;
}
var74 = var97;
}
if (var74){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var118 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var116) on <var116:AbstractCompiler(SeparateCompiler)> */
var121 = var116->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var116:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_122 = var119;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var_122) on <var_122:ModelBuilder> */
var125 = var_122->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var_122:ModelBuilder> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
var126 = 1;
{
{ /* Inline kernel#Int#+ (var123,var126) on <var123:Int> */
/* Covariant cast for argument 0 (i) <var126:Int> isa OTHER */
/* <var126:Int> isa OTHER */
var129 = 1; /* easy <var126:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var133 = var123 + var126;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline= (var_122,var127) on <var_122:ModelBuilder> */
var_122->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l = var127; /* _nb_invok_by_inline on <var_122:ModelBuilder> */
RET_LABEL134:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var137 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var135) on <var135:AbstractCompiler(SeparateCompiler)> */
var140 = var135->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var135:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var138) on <var138:ModelBuilder> */
var143 = var138->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var138:ModelBuilder> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var141) on <var141:ToolContext> */
var146 = var141->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var141:ToolContext> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 63);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline opts#Option#value (var144) on <var144:OptionBool> */
var149 = var144->attrs[COLOR_opts__Option___value].val; /* _value on <var144:OptionBool> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
var150 = ((struct instance_kernel__Bool*)var147)->value; /* autounbox from nullable Object to Bool */;
if (var150){
if (varonce151) {
var152 = varonce151;
} else {
var153 = "count_invoke_by_inline++;";
var154 = 25;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var156 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
((void (*)(val*, val*))(var156->class->vft[COLOR_abstract_compiler__Frame__visitor_61d]))(var156, self) /* visitor= on <var156:Frame>*/;
}
{
((void (*)(val*, val*))(var156->class->vft[COLOR_abstract_compiler__Frame__mpropdef_61d]))(var156, var_mmethoddef) /* mpropdef= on <var156:Frame>*/;
}
{
((void (*)(val*, val*))(var156->class->vft[COLOR_abstract_compiler__Frame__receiver_61d]))(var156, var_recvtype) /* receiver= on <var156:Frame>*/;
}
{
((void (*)(val*, val*))(var156->class->vft[COLOR_abstract_compiler__Frame__arguments_61d]))(var156, var_arguments) /* arguments= on <var156:Frame>*/;
}
{
((void (*)(val*))(var156->class->vft[COLOR_kernel__Object__init]))(var156) /* init on <var156:Frame>*/;
}
var_frame = var156;
if (varonce157) {
var158 = varonce157;
} else {
var159 = "RET_LABEL";
var160 = 9;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
var162 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var158);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel= (var_frame,var162) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = var162; /* _returnlabel on <var_frame:Frame> */
RET_LABEL163:(void)0;
}
}
{
{ /* Inline abstract_compiler#Frame#returnvar= (var_frame,var_res) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val = var_res; /* _returnvar on <var_frame:Frame> */
RET_LABEL164:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var167 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
var_old_frame = var165;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL168:(void)0;
}
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = "{ /* Inline ";
var172 = 12;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
if (varonce174) {
var175 = varonce174;
} else {
var176 = " (";
var177 = 2;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = ",";
var182 = 1;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
{
var184 = string__Collection__join(var_arguments, var180);
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = ") on ";
var188 = 5;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
{
var190 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var191 = abstract_compiler__RuntimeVariable__inspect(var190);
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = " */";
var195 = 3;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 7;
var199 = NEW_array__NativeArray(var198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var199)->values[0] = (val*) var170;
((struct instance_array__NativeArray*)var199)->values[1] = (val*) var_mmethoddef;
((struct instance_array__NativeArray*)var199)->values[2] = (val*) var175;
((struct instance_array__NativeArray*)var199)->values[3] = (val*) var184;
((struct instance_array__NativeArray*)var199)->values[4] = (val*) var186;
((struct instance_array__NativeArray*)var199)->values[5] = (val*) var191;
((struct instance_array__NativeArray*)var199)->values[6] = (val*) var193;
{
((void (*)(val*, val*, long))(var197->class->vft[COLOR_array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val*))(var197->class->vft[COLOR_string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var200); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var201 = abstract_compiler__MMethodDef__compile_inside_to_c(var_mmethoddef, self, var_arguments);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel (var_frame) on <var_frame:Frame> */
var204 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var_frame:Frame> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1244);
show_backtrace(1);
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = ":(void)0;";
var208 = 9;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
var210 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var210 = array_instance Array[Object] */
var211 = 2;
var212 = NEW_array__NativeArray(var211, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var212)->values[0] = (val*) var202;
((struct instance_array__NativeArray*)var212)->values[1] = (val*) var206;
{
((void (*)(val*, val*, long))(var210->class->vft[COLOR_array__Array__with_native]))(var210, var212, var211) /* with_native on <var210:Array[Object]>*/;
}
}
{
var213 = ((val* (*)(val*))(var210->class->vft[COLOR_string__Object__to_s]))(var210) /* to_s on <var210:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var213); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce214) {
var215 = varonce214;
} else {
var216 = "}";
var217 = 1;
var218 = string__NativeString__to_s_with_length(var216, var217);
var215 = var218;
varonce214 = var215;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var215); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL219:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var222 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var220) on <var220:AbstractCompiler(SeparateCompiler)> */
var225 = var220->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var220:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
var_226 = var223;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var_226) on <var_226:ModelBuilder> */
var229 = var_226->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var_226:ModelBuilder> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
var230 = 1;
{
{ /* Inline kernel#Int#+ (var227,var230) on <var227:Int> */
/* Covariant cast for argument 0 (i) <var230:Int> isa OTHER */
/* <var230:Int> isa OTHER */
var233 = 1; /* easy <var230:Int> isa OTHER*/
if (unlikely(!var233)) {
var_class_name236 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name236);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var237 = var227 + var230;
var231 = var237;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct= (var_226,var231) on <var_226:ModelBuilder> */
var_226->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l = var231; /* _nb_invok_by_direct on <var_226:ModelBuilder> */
RET_LABEL238:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var241 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var239) on <var239:AbstractCompiler(SeparateCompiler)> */
var244 = var239->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var239:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var244 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var242 = var244;
RET_LABEL243:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var242) on <var242:ModelBuilder> */
var247 = var242->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var242:ModelBuilder> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var245) on <var245:ToolContext> */
var250 = var245->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var245:ToolContext> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 63);
show_backtrace(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
{ /* Inline opts#Option#value (var248) on <var248:OptionBool> */
var253 = var248->attrs[COLOR_opts__Option___value].val; /* _value on <var248:OptionBool> */
var251 = var253;
RET_LABEL252:(void)0;
}
}
var254 = ((struct instance_kernel__Bool*)var251)->value; /* autounbox from nullable Object to Bool */;
if (var254){
if (varonce255) {
var256 = varonce255;
} else {
var257 = "count_invoke_by_direct++;";
var258 = 25;
var259 = string__NativeString__to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var256); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
separate_compiler__SeparateCompilerVisitor__adapt_signature(self, var_mmethoddef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
var260 = abstract_compiler__MPropDef__c_name(var_mmethoddef);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var260); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
var261 = NULL;
if (var_res == NULL) {
var262 = 1; /* is null */
} else {
var262 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var261) on <var_res:nullable RuntimeVariable> */
var_other = var261;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var267 = var_res == var_other;
var265 = var267;
goto RET_LABEL266;
RET_LABEL266:(void)0;
}
}
var263 = var265;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
var262 = var263;
}
if (var262){
{
var268 = abstract_compiler__MPropDef__c_name(var_mmethoddef);
}
if (varonce269) {
var270 = varonce269;
} else {
var271 = "(";
var272 = 1;
var273 = string__NativeString__to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
if (varonce274) {
var275 = varonce274;
} else {
var276 = ", ";
var277 = 2;
var278 = string__NativeString__to_s_with_length(var276, var277);
var275 = var278;
varonce274 = var275;
}
{
var279 = string__Collection__join(var_arguments, var275);
}
if (varonce280) {
var281 = varonce280;
} else {
var282 = "); /* Direct call ";
var283 = 18;
var284 = string__NativeString__to_s_with_length(var282, var283);
var281 = var284;
varonce280 = var281;
}
if (varonce285) {
var286 = varonce285;
} else {
var287 = " on ";
var288 = 4;
var289 = string__NativeString__to_s_with_length(var287, var288);
var286 = var289;
varonce285 = var286;
}
{
var290 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var291 = abstract_compiler__RuntimeVariable__inspect(var290);
}
if (varonce292) {
var293 = varonce292;
} else {
var294 = "*/";
var295 = 2;
var296 = string__NativeString__to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
var297 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var297 = array_instance Array[Object] */
var298 = 8;
var299 = NEW_array__NativeArray(var298, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var299)->values[0] = (val*) var268;
((struct instance_array__NativeArray*)var299)->values[1] = (val*) var270;
((struct instance_array__NativeArray*)var299)->values[2] = (val*) var279;
((struct instance_array__NativeArray*)var299)->values[3] = (val*) var281;
((struct instance_array__NativeArray*)var299)->values[4] = (val*) var_mmethoddef;
((struct instance_array__NativeArray*)var299)->values[5] = (val*) var286;
((struct instance_array__NativeArray*)var299)->values[6] = (val*) var291;
((struct instance_array__NativeArray*)var299)->values[7] = (val*) var293;
{
((void (*)(val*, val*, long))(var297->class->vft[COLOR_array__Array__with_native]))(var297, var299, var298) /* with_native on <var297:Array[Object]>*/;
}
}
{
var300 = ((val* (*)(val*))(var297->class->vft[COLOR_string__Object__to_s]))(var297) /* to_s on <var297:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var300); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var301 = NULL;
var = var301;
goto RET_LABEL;
} else {
if (varonce302) {
var303 = varonce302;
} else {
var304 = " = ";
var305 = 3;
var306 = string__NativeString__to_s_with_length(var304, var305);
var303 = var306;
varonce302 = var303;
}
{
var307 = abstract_compiler__MPropDef__c_name(var_mmethoddef);
}
if (varonce308) {
var309 = varonce308;
} else {
var310 = "(";
var311 = 1;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
if (varonce313) {
var314 = varonce313;
} else {
var315 = ", ";
var316 = 2;
var317 = string__NativeString__to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
{
var318 = string__Collection__join(var_arguments, var314);
}
if (varonce319) {
var320 = varonce319;
} else {
var321 = ");";
var322 = 2;
var323 = string__NativeString__to_s_with_length(var321, var322);
var320 = var323;
varonce319 = var320;
}
var324 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var324 = array_instance Array[Object] */
var325 = 6;
var326 = NEW_array__NativeArray(var325, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var326)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var326)->values[1] = (val*) var303;
((struct instance_array__NativeArray*)var326)->values[2] = (val*) var307;
((struct instance_array__NativeArray*)var326)->values[3] = (val*) var309;
((struct instance_array__NativeArray*)var326)->values[4] = (val*) var318;
((struct instance_array__NativeArray*)var326)->values[5] = (val*) var320;
{
((void (*)(val*, val*, long))(var324->class->vft[COLOR_array__Array__with_native]))(var324, var326, var325) /* with_native on <var324:Array[Object]>*/;
}
}
{
var327 = ((val* (*)(val*))(var324->class->vft[COLOR_string__Object__to_s]))(var324) /* to_s on <var324:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var327); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#call for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__call(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#supercall for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AbstractCompiler */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var_main /* var main: MModule */;
val* var22 /* : AbstractCompiler */;
val* var24 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var27 /* : AbstractCompiler */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
val* var32 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var33 /* : AbstractCompiler */;
val* var35 /* : AbstractCompiler */;
val* var37 /* : MProperty */;
val* var39 /* : MProperty */;
val* var40 /* : String */;
val* var41 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_arguments = p2;
{
var1 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var2) /* ctype on <var2:MType>*/;
}
if (varonce) {
var6 = varonce;
} else {
var7 = "val*";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
{ /* Inline kernel#Object#!= (var5,var6) on <var5:String> */
var_other = var6;
{
var14 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:String>*/;
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var18 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var16) on <var16:AbstractCompiler(SeparateCompiler)> */
var21 = var16->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var16:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 463);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_main = var19;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var24 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var27 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule (var25) on <var25:AbstractCompiler(SeparateCompiler)> */
var30 = var25->attrs[COLOR_abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var25:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 467);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var22,var28) on <var22:AbstractCompiler(SeparateCompiler)> */
var22->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var28; /* _mainmodule on <var22:AbstractCompiler(SeparateCompiler)> */
RET_LABEL31:(void)0;
}
}
{
var32 = abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(self, var_m, var_recvtype, var_arguments);
}
var_res = var32;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var35 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var33,var_main) on <var33:AbstractCompiler(SeparateCompiler)> */
var33->attrs[COLOR_abstract_compiler__AbstractCompiler___mainmodule].val = var_main; /* _mainmodule on <var33:AbstractCompiler(SeparateCompiler)> */
RET_LABEL36:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var39 = var_m->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = separate_compiler__MPropDef__const_color(var_m);
}
{
var41 = separate_compiler__SeparateCompilerVisitor__table_send(self, var37, var_arguments, var40);
}
var = var41;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#supercall for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__supercall(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#vararg_instance for (self: SeparateCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_varargs /* var varargs: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : nullable Frame */;
val* var3 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
val* var4 /* : Frame */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : Array[RuntimeVariable] */;
long var12 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: Frame */;
val* var14 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_mpropdef = p0;
var_recv = p1;
var_varargs = p2;
var_elttype = p3;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old_frame = var1;
var4 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var7 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var12 = 1;
{
array__Array__with_capacity(var11, var12); /* Direct call array#Array#with_capacity on <var11:Array[RuntimeVariable]>*/
}
var_ = var11;
{
array__AbstractArray__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_compiler__Frame__visitor_61d]))(var4, self) /* visitor= on <var4:Frame>*/;
}
{
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_compiler__Frame__mpropdef_61d]))(var4, var_mpropdef) /* mpropdef= on <var4:Frame>*/;
}
{
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_compiler__Frame__receiver_61d]))(var4, var8) /* receiver= on <var4:Frame>*/;
}
{
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_compiler__Frame__arguments_61d]))(var4, var_) /* arguments= on <var4:Frame>*/;
}
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Frame>*/;
}
var_frame = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL13:(void)0;
}
}
{
var14 = separate_compiler__SeparateCompilerVisitor__array_instance(self, var_varargs, var_elttype);
}
var_res = var14;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL15:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#vararg_instance for (self: Object, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__vararg_instance(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#isset_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : MPropDef */;
val* var5 /* : MPropDef */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var9 /* : MPropDef */;
val* var11 /* : MPropDef */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var18 /* : MClassType */;
val* var20 /* : MClassType */;
val* var21 /* : MModule */;
val* var23 /* : MModule */;
short int var24 /* : Bool */;
val* var25 /* : MType */;
short int var26 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : AbstractCompiler */;
val* var49 /* : AbstractCompiler */;
val* var50 /* : ModelBuilder */;
val* var52 /* : ModelBuilder */;
val* var53 /* : ToolContext */;
val* var55 /* : ToolContext */;
val* var56 /* : OptionBool */;
val* var58 /* : OptionBool */;
val* var59 /* : nullable Object */;
val* var61 /* : nullable Object */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
val* var152 /* : String */;
var_a = p0;
var_recv = p1;
{
abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var2 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var1);
}
var_res = var2;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var5 = var_a->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var3) on <var3:MPropDef(MAttributeDef)> */
var8 = var3->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var3:MPropDef(MAttributeDef)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1305);
show_backtrace(1);
}
var_mtype = var6;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var11 = var_a->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var9) on <var9:MPropDef(MAttributeDef)> */
var14 = var9->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var9:MPropDef(MAttributeDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_intromclassdef = var12;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var17 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var20 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var23 = var_intromclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = 1;
{
var25 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var15, var18, var21, var24) /* resolve_for on <var_mtype:MType>*/;
}
var_mtype = var25;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var26 = 0;
} else {
var26 = var_mtype->type->type_table[cltype] == idtype;
}
if (var26){
if (varonce) {
var27 = varonce;
} else {
var28 = " = 1; /* easy isset: ";
var29 = 21;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = " on ";
var34 = 4;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
var36 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = " */";
var40 = 3;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 6;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var27;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var_a;
((struct instance_array__NativeArray*)var44)->values[3] = (val*) var32;
((struct instance_array__NativeArray*)var44)->values[4] = (val*) var36;
((struct instance_array__NativeArray*)var44)->values[5] = (val*) var38;
{
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
}
{
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var46 = separate_compiler__MProperty__const_color(var_a);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var49 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var47) on <var47:AbstractCompiler(SeparateCompiler)> */
var52 = var47->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var47:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var50) on <var50:ModelBuilder> */
var55 = var50->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var50:ModelBuilder> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var53) on <var53:ToolContext> */
var58 = var53->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var53:ToolContext> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 28);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline opts#Option#value (var56) on <var56:OptionBool> */
var61 = var56->attrs[COLOR_opts__Option___value].val; /* _value on <var56:OptionBool> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var62 = ((struct instance_kernel__Bool*)var59)->value; /* autounbox from nullable Object to Bool */;
if (var62){
if (varonce63) {
var64 = varonce63;
} else {
var65 = " = ";
var66 = 3;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "->attrs[";
var71 = 8;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var73 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "] != NULL; /* ";
var77 = 14;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = " on ";
var82 = 4;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
var84 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "*/";
var88 = 2;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 10;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var64;
((struct instance_array__NativeArray*)var92)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var92)->values[3] = (val*) var69;
((struct instance_array__NativeArray*)var92)->values[4] = (val*) var73;
((struct instance_array__NativeArray*)var92)->values[5] = (val*) var75;
((struct instance_array__NativeArray*)var92)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var92)->values[7] = (val*) var80;
((struct instance_array__NativeArray*)var92)->values[8] = (val*) var84;
((struct instance_array__NativeArray*)var92)->values[9] = (val*) var86;
{
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val*))(var90->class->vft[COLOR_string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var93); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
var94 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = "val*";
var98 = 4;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
var101 = string__FlatString___61d_61d(var94, var96);
var100 = var101;
}
if (var100){
if (varonce102) {
var103 = varonce102;
} else {
var104 = " = ";
var105 = 3;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "->attrs[";
var110 = 8;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
var112 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "].val != NULL; /* ";
var116 = 18;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = " on ";
var121 = 4;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
{
var123 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = " */";
var127 = 3;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 10;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var103;
((struct instance_array__NativeArray*)var131)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var131)->values[3] = (val*) var108;
((struct instance_array__NativeArray*)var131)->values[4] = (val*) var112;
((struct instance_array__NativeArray*)var131)->values[5] = (val*) var114;
((struct instance_array__NativeArray*)var131)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var131)->values[7] = (val*) var119;
((struct instance_array__NativeArray*)var131)->values[8] = (val*) var123;
((struct instance_array__NativeArray*)var131)->values[9] = (val*) var125;
{
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
}
}
{
var132 = ((val* (*)(val*))(var129->class->vft[COLOR_string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var132); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce133) {
var134 = varonce133;
} else {
var135 = " = 1; /* NOT YET IMPLEMENTED: isset of primitives: ";
var136 = 51;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = " on ";
var141 = 4;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
{
var143 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = " */";
var147 = 3;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 6;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var151)->values[1] = (val*) var134;
((struct instance_array__NativeArray*)var151)->values[2] = (val*) var_a;
((struct instance_array__NativeArray*)var151)->values[3] = (val*) var139;
((struct instance_array__NativeArray*)var151)->values[4] = (val*) var143;
((struct instance_array__NativeArray*)var151)->values[5] = (val*) var145;
{
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
}
{
var152 = ((val* (*)(val*))(var149->class->vft[COLOR_string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#isset_attribute for (self: Object, MAttribute, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__isset_attribute(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#read_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var_ret /* var ret: MType */;
val* var7 /* : MPropDef */;
val* var9 /* : MPropDef */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
short int var22 /* : Bool */;
val* var23 /* : MType */;
val* var24 /* : AbstractCompiler */;
val* var26 /* : AbstractCompiler */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
val* var33 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var36 /* : nullable Object */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
val* var40 /* : AbstractCompiler */;
val* var42 /* : AbstractCompiler */;
val* var_ /* var : SeparateCompiler */;
long var43 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var50 /* : Int */;
static val* varonce;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : AbstractCompiler */;
val* var59 /* : AbstractCompiler */;
val* var60 /* : ModelBuilder */;
val* var62 /* : ModelBuilder */;
val* var63 /* : ToolContext */;
val* var65 /* : ToolContext */;
val* var66 /* : OptionBool */;
val* var68 /* : OptionBool */;
val* var69 /* : nullable Object */;
val* var71 /* : nullable Object */;
short int var72 /* : Bool */;
val* var73 /* : MClassType */;
val* var74 /* : MType */;
val* var_cret /* var cret: MType */;
val* var75 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
short int var112 /* : Bool */;
short int var_113 /* var : Bool */;
val* var114 /* : AbstractCompiler */;
val* var116 /* : AbstractCompiler */;
val* var117 /* : ModelBuilder */;
val* var119 /* : ModelBuilder */;
val* var120 /* : ToolContext */;
val* var122 /* : ToolContext */;
val* var123 /* : OptionBool */;
val* var125 /* : OptionBool */;
val* var126 /* : nullable Object */;
val* var128 /* : nullable Object */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
val* var141 /* : Array[Object] */;
long var142 /* : Int */;
val* var143 /* : NativeArray[Object] */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
val* var150 /* : String */;
val* var152 /* : String */;
val* var153 /* : Array[Object] */;
long var154 /* : Int */;
val* var155 /* : NativeArray[Object] */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var162 /* : AbstractCompiler */;
val* var164 /* : AbstractCompiler */;
val* var165 /* : ModelBuilder */;
val* var167 /* : ModelBuilder */;
val* var168 /* : ToolContext */;
val* var170 /* : ToolContext */;
val* var171 /* : OptionBool */;
val* var173 /* : OptionBool */;
val* var174 /* : nullable Object */;
val* var176 /* : nullable Object */;
short int var177 /* : Bool */;
val* var178 /* : AbstractCompiler */;
val* var180 /* : AbstractCompiler */;
val* var_181 /* var : SeparateCompiler */;
long var182 /* : Int */;
long var184 /* : Int */;
long var185 /* : Int */;
long var186 /* : Int */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
const char* var_class_name191;
long var192 /* : Int */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : FlatString */;
val* var199 /* : RuntimeVariable */;
val* var200 /* : RuntimeVariable */;
val* var_res201 /* var res: RuntimeVariable */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
long var205 /* : Int */;
val* var206 /* : FlatString */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : FlatString */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
val* var218 /* : String */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
long var222 /* : Int */;
val* var223 /* : FlatString */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : FlatString */;
val* var229 /* : String */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
long var233 /* : Int */;
val* var234 /* : FlatString */;
val* var235 /* : Array[Object] */;
long var236 /* : Int */;
val* var237 /* : NativeArray[Object] */;
val* var238 /* : String */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : FlatString */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var_249 /* var : Bool */;
short int var250 /* : Bool */;
int cltype251;
int idtype252;
short int var253 /* : Bool */;
short int var_254 /* var : Bool */;
val* var255 /* : AbstractCompiler */;
val* var257 /* : AbstractCompiler */;
val* var258 /* : ModelBuilder */;
val* var260 /* : ModelBuilder */;
val* var261 /* : ToolContext */;
val* var263 /* : ToolContext */;
val* var264 /* : OptionBool */;
val* var266 /* : OptionBool */;
val* var267 /* : nullable Object */;
val* var269 /* : nullable Object */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
long var275 /* : Int */;
val* var276 /* : FlatString */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
val* var282 /* : Array[Object] */;
long var283 /* : Int */;
val* var284 /* : NativeArray[Object] */;
val* var285 /* : String */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
val* var291 /* : String */;
val* var293 /* : String */;
val* var294 /* : Array[Object] */;
long var295 /* : Int */;
val* var296 /* : NativeArray[Object] */;
val* var297 /* : String */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
val* var303 /* : AbstractCompiler */;
val* var305 /* : AbstractCompiler */;
val* var306 /* : ModelBuilder */;
val* var308 /* : ModelBuilder */;
val* var309 /* : ToolContext */;
val* var311 /* : ToolContext */;
val* var312 /* : OptionBool */;
val* var314 /* : OptionBool */;
val* var315 /* : nullable Object */;
val* var317 /* : nullable Object */;
short int var318 /* : Bool */;
val* var319 /* : AbstractCompiler */;
val* var321 /* : AbstractCompiler */;
val* var_322 /* var : SeparateCompiler */;
long var323 /* : Int */;
long var325 /* : Int */;
long var326 /* : Int */;
long var327 /* : Int */;
short int var329 /* : Bool */;
int cltype330;
int idtype331;
const char* var_class_name332;
long var333 /* : Int */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
long var338 /* : Int */;
val* var339 /* : FlatString */;
var_a = p0;
var_recv = p1;
{
abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var3 = var_a->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var1) on <var1:MPropDef(MAttributeDef)> */
var6 = var1->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var1:MPropDef(MAttributeDef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1333);
show_backtrace(1);
}
var_ret = var4;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var9 = var_a->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var7) on <var7:MPropDef(MAttributeDef)> */
var12 = var7->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var7:MPropDef(MAttributeDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_intromclassdef = var10;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var15 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var18 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var21 = var_intromclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = 1;
{
var23 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var13, var16, var19, var22) /* resolve_for on <var_ret:MType>*/;
}
var_ret = var23;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var26 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var24) on <var24:AbstractCompiler(SeparateCompiler)> */
var29 = var24->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var24:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var27) on <var27:ModelBuilder> */
var32 = var27->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var27:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var30) on <var30:ToolContext> */
var35 = var30->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var30:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline opts#Option#value (var33) on <var33:OptionBool> */
var38 = var33->attrs[COLOR_opts__Option___value].val; /* _value on <var33:OptionBool> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = ((struct instance_kernel__Bool*)var36)->value; /* autounbox from nullable Object to Bool */;
if (var39){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var42 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_ = var40;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (var_) on <var_:SeparateCompiler> */
var45 = var_->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <var_:SeparateCompiler> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = 1;
{
{ /* Inline kernel#Int#+ (var43,var46) on <var43:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var50 = var43 + var46;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count= (var_,var47) on <var_:SeparateCompiler> */
var_->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l = var47; /* _attr_read_count on <var_:SeparateCompiler> */
RET_LABEL51:(void)0;
}
}
if (varonce) {
var52 = varonce;
} else {
var53 = "count_attr_reads++;";
var54 = 19;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce = var52;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var56 = separate_compiler__MProperty__const_color(var_a);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var56); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var59 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var57) on <var57:AbstractCompiler(SeparateCompiler)> */
var62 = var57->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var57:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var60) on <var60:ModelBuilder> */
var65 = var60->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var60:ModelBuilder> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var63) on <var63:ToolContext> */
var68 = var63->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var63:ToolContext> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 28);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline opts#Option#value (var66) on <var66:OptionBool> */
var71 = var66->attrs[COLOR_opts__Option___value].val; /* _value on <var66:OptionBool> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var72 = ((struct instance_kernel__Bool*)var69)->value; /* autounbox from nullable Object to Bool */;
if (var72){
{
var73 = abstract_compiler__AbstractCompilerVisitor__object_type(self);
}
{
var74 = model__MType__as_nullable(var73);
}
var_cret = var74;
{
var75 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_cret);
}
var_res = var75;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (var_res,var_ret) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val = var_ret; /* _mcasttype on <var_res:RuntimeVariable> */
RET_LABEL76:(void)0;
}
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = " = ";
var80 = 3;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "->attrs[";
var85 = 8;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
var87 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "]; /* ";
var91 = 6;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = " on ";
var96 = 4;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
var98 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = " */";
var102 = 3;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 10;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var78;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var106)->values[3] = (val*) var83;
((struct instance_array__NativeArray*)var106)->values[4] = (val*) var87;
((struct instance_array__NativeArray*)var106)->values[5] = (val*) var89;
((struct instance_array__NativeArray*)var106)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var106)->values[7] = (val*) var94;
((struct instance_array__NativeArray*)var106)->values[8] = (val*) var98;
((struct instance_array__NativeArray*)var106)->values[9] = (val*) var100;
{
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
/* <var_ret:MType> isa MNullableType */
cltype110 = type_model__MNullableType.color;
idtype111 = type_model__MNullableType.id;
if(cltype110 >= var_ret->type->table_size) {
var109 = 0;
} else {
var109 = var_ret->type->type_table[cltype110] == idtype111;
}
var112 = !var109;
var_113 = var112;
if (var112){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var116 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var114) on <var114:AbstractCompiler(SeparateCompiler)> */
var119 = var114->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var114:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var117) on <var117:ModelBuilder> */
var122 = var117->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var117:ModelBuilder> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var120) on <var120:ToolContext> */
var125 = var120->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var120:ToolContext> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 51);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline opts#Option#value (var123) on <var123:OptionBool> */
var128 = var123->attrs[COLOR_opts__Option___value].val; /* _value on <var123:OptionBool> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
var129 = ((struct instance_kernel__Bool*)var126)->value; /* autounbox from nullable Object to Bool */;
var130 = !var129;
var108 = var130;
} else {
var108 = var_113;
}
if (var108){
if (varonce131) {
var132 = varonce131;
} else {
var133 = "if (unlikely(";
var134 = 13;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " == NULL)) {";
var139 = 12;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 3;
var143 = NEW_array__NativeArray(var142, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var143)->values[0] = (val*) var132;
((struct instance_array__NativeArray*)var143)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var143)->values[2] = (val*) var137;
{
((void (*)(val*, val*, long))(var141->class->vft[COLOR_array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
}
}
{
var144 = ((val* (*)(val*))(var141->class->vft[COLOR_string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var144); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "Uninitialized attribute ";
var148 = 24;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var152 = var_a->attrs[COLOR_model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
var153 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var153 = array_instance Array[Object] */
var154 = 2;
var155 = NEW_array__NativeArray(var154, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var155)->values[0] = (val*) var146;
((struct instance_array__NativeArray*)var155)->values[1] = (val*) var150;
{
((void (*)(val*, val*, long))(var153->class->vft[COLOR_array__Array__with_native]))(var153, var155, var154) /* with_native on <var153:Array[Object]>*/;
}
}
{
var156 = ((val* (*)(val*))(var153->class->vft[COLOR_string__Object__to_s]))(var153) /* to_s on <var153:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var156); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = "}";
var160 = 1;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var158); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var164 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var162) on <var162:AbstractCompiler(SeparateCompiler)> */
var167 = var162->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var162:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var165) on <var165:ModelBuilder> */
var170 = var165->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var165:ModelBuilder> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var168) on <var168:ToolContext> */
var173 = var168->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var168:ToolContext> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
show_backtrace(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline opts#Option#value (var171) on <var171:OptionBool> */
var176 = var171->attrs[COLOR_opts__Option___value].val; /* _value on <var171:OptionBool> */
var174 = var176;
RET_LABEL175:(void)0;
}
}
var177 = ((struct instance_kernel__Bool*)var174)->value; /* autounbox from nullable Object to Bool */;
if (var177){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var180 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
var_181 = var178;
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (var_181) on <var_181:SeparateCompiler> */
var184 = var_181->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_181:SeparateCompiler> */
var182 = var184;
RET_LABEL183:(void)0;
}
}
var185 = 1;
{
{ /* Inline kernel#Int#+ (var182,var185) on <var182:Int> */
/* Covariant cast for argument 0 (i) <var185:Int> isa OTHER */
/* <var185:Int> isa OTHER */
var188 = 1; /* easy <var185:Int> isa OTHER*/
if (unlikely(!var188)) {
var_class_name191 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var192 = var182 + var185;
var186 = var192;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count= (var_181,var186) on <var_181:SeparateCompiler> */
var_181->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l = var186; /* _isset_checks_count on <var_181:SeparateCompiler> */
RET_LABEL193:(void)0;
}
}
if (varonce194) {
var195 = varonce194;
} else {
var196 = "count_isset_checks++;";
var197 = 21;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var195); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
{
var199 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_res, var_ret);
}
var = var199;
goto RET_LABEL;
} else {
{
var200 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_ret);
}
var_res201 = var200;
if (varonce202) {
var203 = varonce202;
} else {
var204 = " = ";
var205 = 3;
var206 = string__NativeString__to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
if (varonce207) {
var208 = varonce207;
} else {
var209 = "->attrs[";
var210 = 8;
var211 = string__NativeString__to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
{
var212 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "].";
var216 = 2;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
var218 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctypename]))(var_ret) /* ctypename on <var_ret:MType>*/;
}
if (varonce219) {
var220 = varonce219;
} else {
var221 = "; /* ";
var222 = 5;
var223 = string__NativeString__to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
if (varonce224) {
var225 = varonce224;
} else {
var226 = " on ";
var227 = 4;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
{
var229 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce230) {
var231 = varonce230;
} else {
var232 = " */";
var233 = 3;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
var235 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var235 = array_instance Array[Object] */
var236 = 12;
var237 = NEW_array__NativeArray(var236, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var237)->values[0] = (val*) var_res201;
((struct instance_array__NativeArray*)var237)->values[1] = (val*) var203;
((struct instance_array__NativeArray*)var237)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var237)->values[3] = (val*) var208;
((struct instance_array__NativeArray*)var237)->values[4] = (val*) var212;
((struct instance_array__NativeArray*)var237)->values[5] = (val*) var214;
((struct instance_array__NativeArray*)var237)->values[6] = (val*) var218;
((struct instance_array__NativeArray*)var237)->values[7] = (val*) var220;
((struct instance_array__NativeArray*)var237)->values[8] = (val*) var_a;
((struct instance_array__NativeArray*)var237)->values[9] = (val*) var225;
((struct instance_array__NativeArray*)var237)->values[10] = (val*) var229;
((struct instance_array__NativeArray*)var237)->values[11] = (val*) var231;
{
((void (*)(val*, val*, long))(var235->class->vft[COLOR_array__Array__with_native]))(var235, var237, var236) /* with_native on <var235:Array[Object]>*/;
}
}
{
var238 = ((val* (*)(val*))(var235->class->vft[COLOR_string__Object__to_s]))(var235) /* to_s on <var235:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var241 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:MType>*/;
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = "val*";
var245 = 4;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
{
var248 = string__FlatString___61d_61d(var241, var243);
var247 = var248;
}
var_249 = var247;
if (var247){
/* <var_ret:MType> isa MNullableType */
cltype251 = type_model__MNullableType.color;
idtype252 = type_model__MNullableType.id;
if(cltype251 >= var_ret->type->table_size) {
var250 = 0;
} else {
var250 = var_ret->type->type_table[cltype251] == idtype252;
}
var253 = !var250;
var240 = var253;
} else {
var240 = var_249;
}
var_254 = var240;
if (var240){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var257 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var257 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var255) on <var255:AbstractCompiler(SeparateCompiler)> */
var260 = var255->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var255:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var258) on <var258:ModelBuilder> */
var263 = var258->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var258:ModelBuilder> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var261) on <var261:ToolContext> */
var266 = var261->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var261:ToolContext> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 51);
show_backtrace(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
{ /* Inline opts#Option#value (var264) on <var264:OptionBool> */
var269 = var264->attrs[COLOR_opts__Option___value].val; /* _value on <var264:OptionBool> */
var267 = var269;
RET_LABEL268:(void)0;
}
}
var270 = ((struct instance_kernel__Bool*)var267)->value; /* autounbox from nullable Object to Bool */;
var271 = !var270;
var239 = var271;
} else {
var239 = var_254;
}
if (var239){
if (varonce272) {
var273 = varonce272;
} else {
var274 = "if (unlikely(";
var275 = 13;
var276 = string__NativeString__to_s_with_length(var274, var275);
var273 = var276;
varonce272 = var273;
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = " == NULL)) {";
var280 = 12;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
var282 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var282 = array_instance Array[Object] */
var283 = 3;
var284 = NEW_array__NativeArray(var283, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var284)->values[0] = (val*) var273;
((struct instance_array__NativeArray*)var284)->values[1] = (val*) var_res201;
((struct instance_array__NativeArray*)var284)->values[2] = (val*) var278;
{
((void (*)(val*, val*, long))(var282->class->vft[COLOR_array__Array__with_native]))(var282, var284, var283) /* with_native on <var282:Array[Object]>*/;
}
}
{
var285 = ((val* (*)(val*))(var282->class->vft[COLOR_string__Object__to_s]))(var282) /* to_s on <var282:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var285); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce286) {
var287 = varonce286;
} else {
var288 = "Uninitialized attribute ";
var289 = 24;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var293 = var_a->attrs[COLOR_model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
var294 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var294 = array_instance Array[Object] */
var295 = 2;
var296 = NEW_array__NativeArray(var295, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var296)->values[0] = (val*) var287;
((struct instance_array__NativeArray*)var296)->values[1] = (val*) var291;
{
((void (*)(val*, val*, long))(var294->class->vft[COLOR_array__Array__with_native]))(var294, var296, var295) /* with_native on <var294:Array[Object]>*/;
}
}
{
var297 = ((val* (*)(val*))(var294->class->vft[COLOR_string__Object__to_s]))(var294) /* to_s on <var294:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var297); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce298) {
var299 = varonce298;
} else {
var300 = "}";
var301 = 1;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var299); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var305 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var305 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var303) on <var303:AbstractCompiler(SeparateCompiler)> */
var308 = var303->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var303:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var306) on <var306:ModelBuilder> */
var311 = var306->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var306:ModelBuilder> */
if (unlikely(var311 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var309) on <var309:ToolContext> */
var314 = var309->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var309:ToolContext> */
if (unlikely(var314 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 65);
show_backtrace(1);
}
var312 = var314;
RET_LABEL313:(void)0;
}
}
{
{ /* Inline opts#Option#value (var312) on <var312:OptionBool> */
var317 = var312->attrs[COLOR_opts__Option___value].val; /* _value on <var312:OptionBool> */
var315 = var317;
RET_LABEL316:(void)0;
}
}
var318 = ((struct instance_kernel__Bool*)var315)->value; /* autounbox from nullable Object to Bool */;
if (var318){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var321 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var321 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var319 = var321;
RET_LABEL320:(void)0;
}
}
var_322 = var319;
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (var_322) on <var_322:SeparateCompiler> */
var325 = var_322->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_322:SeparateCompiler> */
var323 = var325;
RET_LABEL324:(void)0;
}
}
var326 = 1;
{
{ /* Inline kernel#Int#+ (var323,var326) on <var323:Int> */
/* Covariant cast for argument 0 (i) <var326:Int> isa OTHER */
/* <var326:Int> isa OTHER */
var329 = 1; /* easy <var326:Int> isa OTHER*/
if (unlikely(!var329)) {
var_class_name332 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name332);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var333 = var323 + var326;
var327 = var333;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count= (var_322,var327) on <var_322:SeparateCompiler> */
var_322->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l = var327; /* _isset_checks_count on <var_322:SeparateCompiler> */
RET_LABEL334:(void)0;
}
}
if (varonce335) {
var336 = varonce335;
} else {
var337 = "count_isset_checks++;";
var338 = 21;
var339 = string__NativeString__to_s_with_length(var337, var338);
var336 = var339;
varonce335 = var336;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var336); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
var = var_res201;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#read_attribute for (self: Object, MAttribute, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__read_attribute(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#write_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable, RuntimeVariable) */
void separate_compiler__SeparateCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var /* : MPropDef */;
val* var2 /* : MPropDef */;
val* var3 /* : nullable MType */;
val* var5 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var6 /* : MPropDef */;
val* var8 /* : MPropDef */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
short int var21 /* : Bool */;
val* var22 /* : MType */;
val* var23 /* : RuntimeVariable */;
val* var24 /* : String */;
val* var25 /* : AbstractCompiler */;
val* var27 /* : AbstractCompiler */;
val* var28 /* : ModelBuilder */;
val* var30 /* : ModelBuilder */;
val* var31 /* : ToolContext */;
val* var33 /* : ToolContext */;
val* var34 /* : OptionBool */;
val* var36 /* : OptionBool */;
val* var37 /* : nullable Object */;
val* var39 /* : nullable Object */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
val* var_attr /* var attr: String */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
int cltype;
int idtype;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : MClassType */;
val* var124 /* : MType */;
val* var125 /* : RuntimeVariable */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
val* var147 /* : Array[Object] */;
long var148 /* : Int */;
val* var149 /* : NativeArray[Object] */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : FlatString */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : FlatString */;
val* var177 /* : Array[Object] */;
long var178 /* : Int */;
val* var179 /* : NativeArray[Object] */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : FlatString */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
val* var214 /* : Array[Object] */;
long var215 /* : Int */;
val* var216 /* : NativeArray[Object] */;
val* var217 /* : String */;
var_a = p0;
var_recv = p1;
var_value = p2;
{
abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var2 = var_a->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var) on <var:MPropDef(MAttributeDef)> */
var5 = var->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var:MPropDef(MAttributeDef)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1390);
show_backtrace(1);
}
var_mtype = var3;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var8 = var_a->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var6) on <var6:MPropDef(MAttributeDef)> */
var11 = var6->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var6:MPropDef(MAttributeDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_intromclassdef = var9;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var14 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var17 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var20 = var_intromclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
{
var22 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var12, var15, var18, var21) /* resolve_for on <var_mtype:MType>*/;
}
var_mtype = var22;
{
var23 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_value, var_mtype);
}
var_value = var23;
{
var24 = separate_compiler__MProperty__const_color(var_a);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var27 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var25) on <var25:AbstractCompiler(SeparateCompiler)> */
var30 = var25->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var25:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var28) on <var28:ModelBuilder> */
var33 = var28->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var28:ModelBuilder> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var31) on <var31:ToolContext> */
var36 = var31->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var31:ToolContext> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 28);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline opts#Option#value (var34) on <var34:OptionBool> */
var39 = var34->attrs[COLOR_opts__Option___value].val; /* _value on <var34:OptionBool> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var40 = ((struct instance_kernel__Bool*)var37)->value; /* autounbox from nullable Object to Bool */;
if (var40){
if (varonce) {
var41 = varonce;
} else {
var42 = "->attrs[";
var43 = 8;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce = var41;
}
{
var45 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "]";
var49 = 1;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 4;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var41;
((struct instance_array__NativeArray*)var53)->values[2] = (val*) var45;
((struct instance_array__NativeArray*)var53)->values[3] = (val*) var47;
{
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
var_attr = var54;
{
var55 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "val*";
var59 = 4;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
{ /* Inline kernel#Object#!= (var55,var57) on <var55:String> */
var_other = var57;
{
var65 = ((short int (*)(val*, val*))(var55->class->vft[COLOR_kernel__Object___61d_61d]))(var55, var_other) /* == on <var55:String>*/;
var64 = var65;
}
var66 = !var64;
var62 = var66;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var67 = 0;
} else {
var67 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var67)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1401);
show_backtrace(1);
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "if (";
var71 = 4;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = " != NULL) {";
var76 = 11;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 3;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var_attr;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var74;
{
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "((struct instance_";
var85 = 18;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
var87 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "*)";
var91 = 2;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = ")->value = ";
var96 = 11;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "; /* ";
var101 = 5;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = " on ";
var106 = 4;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
var108 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = " */";
var112 = 3;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 11;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var83;
((struct instance_array__NativeArray*)var116)->values[1] = (val*) var87;
((struct instance_array__NativeArray*)var116)->values[2] = (val*) var89;
((struct instance_array__NativeArray*)var116)->values[3] = (val*) var_attr;
((struct instance_array__NativeArray*)var116)->values[4] = (val*) var94;
((struct instance_array__NativeArray*)var116)->values[5] = (val*) var_value;
((struct instance_array__NativeArray*)var116)->values[6] = (val*) var99;
((struct instance_array__NativeArray*)var116)->values[7] = (val*) var_a;
((struct instance_array__NativeArray*)var116)->values[8] = (val*) var104;
((struct instance_array__NativeArray*)var116)->values[9] = (val*) var108;
((struct instance_array__NativeArray*)var116)->values[10] = (val*) var110;
{
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
}
{
var117 = ((val* (*)(val*))(var114->class->vft[COLOR_string__Object__to_s]))(var114) /* to_s on <var114:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var117); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = "} else {";
var121 = 8;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var119); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var123 = abstract_compiler__AbstractCompilerVisitor__object_type(self);
}
{
var124 = model__MType__as_nullable(var123);
}
{
var125 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_value, var124);
}
var_value = var125;
if (varonce126) {
var127 = varonce126;
} else {
var128 = " = ";
var129 = 3;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = "; /* ";
var134 = 5;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " on ";
var139 = 4;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
{
var141 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = " */";
var145 = 3;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
var147 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var147 = array_instance Array[Object] */
var148 = 8;
var149 = NEW_array__NativeArray(var148, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var149)->values[0] = (val*) var_attr;
((struct instance_array__NativeArray*)var149)->values[1] = (val*) var127;
((struct instance_array__NativeArray*)var149)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var149)->values[3] = (val*) var132;
((struct instance_array__NativeArray*)var149)->values[4] = (val*) var_a;
((struct instance_array__NativeArray*)var149)->values[5] = (val*) var137;
((struct instance_array__NativeArray*)var149)->values[6] = (val*) var141;
((struct instance_array__NativeArray*)var149)->values[7] = (val*) var143;
{
((void (*)(val*, val*, long))(var147->class->vft[COLOR_array__Array__with_native]))(var147, var149, var148) /* with_native on <var147:Array[Object]>*/;
}
}
{
var150 = ((val* (*)(val*))(var147->class->vft[COLOR_string__Object__to_s]))(var147) /* to_s on <var147:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var150); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = "}";
var154 = 1;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce156) {
var157 = varonce156;
} else {
var158 = " = ";
var159 = 3;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
if (varonce161) {
var162 = varonce161;
} else {
var163 = "; /* ";
var164 = 5;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = " on ";
var169 = 4;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
{
var171 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce172) {
var173 = varonce172;
} else {
var174 = " */";
var175 = 3;
var176 = string__NativeString__to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
var177 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var177 = array_instance Array[Object] */
var178 = 8;
var179 = NEW_array__NativeArray(var178, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var179)->values[0] = (val*) var_attr;
((struct instance_array__NativeArray*)var179)->values[1] = (val*) var157;
((struct instance_array__NativeArray*)var179)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var179)->values[3] = (val*) var162;
((struct instance_array__NativeArray*)var179)->values[4] = (val*) var_a;
((struct instance_array__NativeArray*)var179)->values[5] = (val*) var167;
((struct instance_array__NativeArray*)var179)->values[6] = (val*) var171;
((struct instance_array__NativeArray*)var179)->values[7] = (val*) var173;
{
((void (*)(val*, val*, long))(var177->class->vft[COLOR_array__Array__with_native]))(var177, var179, var178) /* with_native on <var177:Array[Object]>*/;
}
}
{
var180 = ((val* (*)(val*))(var177->class->vft[COLOR_string__Object__to_s]))(var177) /* to_s on <var177:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var180); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
} else {
if (varonce181) {
var182 = varonce181;
} else {
var183 = "->attrs[";
var184 = 8;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
var186 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = "].";
var190 = 2;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
{
var192 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctypename]))(var_mtype) /* ctypename on <var_mtype:MType>*/;
}
if (varonce193) {
var194 = varonce193;
} else {
var195 = " = ";
var196 = 3;
var197 = string__NativeString__to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
if (varonce198) {
var199 = varonce198;
} else {
var200 = "; /* ";
var201 = 5;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = " on ";
var206 = 4;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
{
var208 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = " */";
var212 = 3;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
var214 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var214 = array_instance Array[Object] */
var215 = 12;
var216 = NEW_array__NativeArray(var215, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var216)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var216)->values[1] = (val*) var182;
((struct instance_array__NativeArray*)var216)->values[2] = (val*) var186;
((struct instance_array__NativeArray*)var216)->values[3] = (val*) var188;
((struct instance_array__NativeArray*)var216)->values[4] = (val*) var192;
((struct instance_array__NativeArray*)var216)->values[5] = (val*) var194;
((struct instance_array__NativeArray*)var216)->values[6] = (val*) var_value;
((struct instance_array__NativeArray*)var216)->values[7] = (val*) var199;
((struct instance_array__NativeArray*)var216)->values[8] = (val*) var_a;
((struct instance_array__NativeArray*)var216)->values[9] = (val*) var204;
((struct instance_array__NativeArray*)var216)->values[10] = (val*) var208;
((struct instance_array__NativeArray*)var216)->values[11] = (val*) var210;
{
((void (*)(val*, val*, long))(var214->class->vft[COLOR_array__Array__with_native]))(var214, var216, var215) /* with_native on <var214:Array[Object]>*/;
}
}
{
var217 = ((val* (*)(val*))(var214->class->vft[COLOR_string__Object__to_s]))(var214) /* to_s on <var214:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var217); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#write_attribute for (self: Object, MAttribute, RuntimeVariable, RuntimeVariable) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
separate_compiler__SeparateCompilerVisitor__write_attribute(self, p0, p1, p2); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_live_open_type for (self: SeparateCompilerVisitor, MType) */
void separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_col /* var col: String */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
var_mtype = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler(SeparateCompiler)> */
var5 = var->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 47);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#Option#value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = ((struct instance_kernel__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
var16 = !var15;
if (var16){
goto RET_LABEL;
} else {
}
{
var17 = separate_compiler__MType__const_color(var_mtype);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var17); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
var18 = separate_compiler__MType__const_color(var_mtype);
}
var_col = var18;
if (varonce) {
var19 = varonce;
} else {
var20 = "if(";
var21 = 3;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = " == -1) {";
var26 = 9;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var_col;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
{
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "PRINT_ERROR(\"Resolution of a dead open type: %s\\n\", \"";
var35 = 53;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
var37 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
}
{
var38 = string__Text__escape_to_c(var37);
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "\");";
var42 = 3;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var38;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var40;
{
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
}
{
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var47); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "open type dead";
var51 = 14;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "}";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_live_open_type for (self: Object, MType) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(val* self, val* p0) {
separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(self, p0); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_cast_type for (self: SeparateCompilerVisitor, String) */
void separate_compiler__SeparateCompilerVisitor__hardening_cast_type(val* self, val* p0) {
val* var_t /* var t: String */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
var_t = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler(SeparateCompiler)> */
var5 = var->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 47);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#Option#value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = ((struct instance_kernel__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
var16 = !var15;
if (var16){
goto RET_LABEL;
} else {
}
if (varonce) {
var17 = varonce;
} else {
var18 = "if(";
var19 = 3;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " == NULL) {";
var24 = 11;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var22;
{
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "cast type null";
var33 = 14;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "}";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "if(";
var43 = 3;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "->id == -1 || ";
var48 = 14;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "->color == -1) {";
var53 = 16;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 5;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var46;
((struct instance_array__NativeArray*)var57)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var57)->values[4] = (val*) var51;
{
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var58); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "PRINT_ERROR(\"Try to cast on a dead cast type: %s\\n\", ";
var62 = 53;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "->name);";
var67 = 8;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "cast type dead";
var76 = 14;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var74); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "}";
var81 = 1;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_cast_type for (self: Object, String) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_cast_type(val* self, val* p0) {
separate_compiler__SeparateCompilerVisitor__hardening_cast_type(self, p0); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#init_instance for (self: SeparateCompilerVisitor, MClassType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : String */;
val* var13 /* : AbstractCompiler */;
val* var15 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Frame */;
val* var23 /* : nullable Frame */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : nullable Frame */;
val* var32 /* : nullable Frame */;
val* var33 /* : Array[RuntimeVariable] */;
val* var35 /* : Array[RuntimeVariable] */;
val* var36 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var37 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
val* var44 /* : MClass */;
val* var46 /* : MClass */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
val* var68 /* : RuntimeVariable */;
val* var69 /* : Set[MType] */;
val* var71 /* : Set[MType] */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : String */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
val* var87 /* : MClass */;
val* var89 /* : MClass */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
val* var102 /* : Array[Object] */;
long var103 /* : Int */;
val* var104 /* : NativeArray[Object] */;
val* var105 /* : String */;
val* var106 /* : RuntimeVariable */;
var_mtype = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "NEW_";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var7 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__MClass__c_name(var5);
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var8;
{
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val*))(var9->class->vft[COLOR_string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var15 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_compiler = var13;
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var17 = 0;
} else {
var17 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var17;
if (var17){
{
{ /* Inline model#MGenericType#need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var20 = var_mtype->attrs[COLOR_model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var16 = var18;
} else {
var16 = var_;
}
if (var16){
{
separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1450);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var21) on <var21:nullable Frame> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var26 = var21->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var21:nullable Frame> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
separate_compiler__SeparateCompilerVisitor__link_unresolved_type(self, var27, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var32 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1451);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var30) on <var30:nullable Frame> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var35 = var30->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var30:nullable Frame> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = abstract_collection__SequenceRead__first(var33);
}
var_recv = var36;
{
var37 = separate_compiler__SeparateCompilerVisitor__type_info(self, var_recv);
}
var_recv_type_info = var37;
{
var38 = separate_compiler__MType__const_color(var_mtype);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "NEW_";
var42 = 4;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var46 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = abstract_compiler__MClass__c_name(var44);
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "(";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "->resolution_table->types[";
var56 = 26;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
var58 = separate_compiler__MType__const_color(var_mtype);
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "])";
var62 = 2;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 7;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var47;
((struct instance_array__NativeArray*)var66)->values[2] = (val*) var49;
((struct instance_array__NativeArray*)var66)->values[3] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var66)->values[4] = (val*) var54;
((struct instance_array__NativeArray*)var66)->values[5] = (val*) var58;
((struct instance_array__NativeArray*)var66)->values[6] = (val*) var60;
{
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
var68 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var67, var_mtype);
}
var = var68;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var71 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 156);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
((void (*)(val*, val*))(var69->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var69, var_mtype) /* add on <var69:Set[MType]>*/;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "type_";
var75 = 5;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
var77 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 2;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var73;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var77;
{
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "NEW_";
var85 = 4;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var89 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = abstract_compiler__MClass__c_name(var87);
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "(&type_";
var94 = 7;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
var96 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = ")";
var100 = 1;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var102 = array_instance Array[Object] */
var103 = 5;
var104 = NEW_array__NativeArray(var103, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var104)->values[0] = (val*) var83;
((struct instance_array__NativeArray*)var104)->values[1] = (val*) var90;
((struct instance_array__NativeArray*)var104)->values[2] = (val*) var92;
((struct instance_array__NativeArray*)var104)->values[3] = (val*) var96;
((struct instance_array__NativeArray*)var104)->values[4] = (val*) var98;
{
((void (*)(val*, val*, long))(var102->class->vft[COLOR_array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Object]>*/;
}
}
{
var105 = ((val* (*)(val*))(var102->class->vft[COLOR_string__Object__to_s]))(var102) /* to_s on <var102:Array[Object]>*/;
}
{
var106 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var105, var_mtype);
}
var = var106;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#init_instance for (self: Object, MClassType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__init_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
