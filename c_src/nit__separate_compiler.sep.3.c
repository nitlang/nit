#include "nit__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompilerVisitor#box_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var22 /* : String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var_valtype /* var valtype: MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var40 /* : Bool */;
val* var41 /* : AbstractCompiler */;
val* var43 /* : AbstractCompiler */;
val* var44 /* : nullable RapidTypeAnalysis */;
val* var46 /* : nullable RapidTypeAnalysis */;
val* var47 /* : null */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
val* var54 /* : AbstractCompiler */;
val* var56 /* : AbstractCompiler */;
val* var57 /* : nullable RapidTypeAnalysis */;
val* var59 /* : nullable RapidTypeAnalysis */;
val* var60 /* : HashSet[MClassType] */;
val* var62 /* : HashSet[MClassType] */;
val* var63 /* : MType */;
val* var65 /* : MType */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : MType */;
val* var78 /* : MType */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : MType */;
val* var86 /* : MType */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : String */;
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
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : MType */;
val* var129 /* : MType */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
val* var135 /* : Array[Object] */;
long var136 /* : Int */;
val* var137 /* : NativeArray[Object] */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
val* var144 /* : String */;
val* var145 /* : Array[Object] */;
long var146 /* : Int */;
val* var147 /* : NativeArray[Object] */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
val* var160 /* : Array[Object] */;
long var161 /* : Int */;
val* var162 /* : NativeArray[Object] */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : FlatString */;
val* var169 /* : String */;
val* var170 /* : Array[Object] */;
long var171 /* : Int */;
val* var172 /* : NativeArray[Object] */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : FlatString */;
val* var185 /* : Array[Object] */;
long var186 /* : Int */;
val* var187 /* : NativeArray[Object] */;
val* var188 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var7,var10) on <var7:MClassKind> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var15 = var7 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var2 = var11;
} else {
var2 = var_;
}
var_16 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#name (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce) {
var23 = varonce;
} else {
var24 = "NativeString";
var25 = 12;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
{ /* Inline kernel#Object#!= (var20,var23) on <var20:String> */
var_other29 = var23;
{
var30 = ((short int (*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var_other29) /* == on <var20:String>*/;
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_16;
}
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var34 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var32) on <var32:AbstractCompiler(SeparateCompiler)> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit__model___MModule___pointer_type(var35);
}
var_valtype = var38;
{
var39 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var39;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var43 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var41) on <var41:AbstractCompiler(SeparateCompiler)> */
var46 = var41->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var41:AbstractCompiler(SeparateCompiler)> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = NULL;
if (var44 == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var44,var47) on <var44:nullable RapidTypeAnalysis> */
var_other29 = var47;
{
var51 = ((short int (*)(val* self, val* p0))(var44->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var44, var_other29) /* == on <var44:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
var_53 = var48;
if (var48){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var56 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var54) on <var54:AbstractCompiler(SeparateCompiler)> */
var59 = var54->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var54:AbstractCompiler(SeparateCompiler)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1043);
show_backtrace(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var57) on <var57:nullable RapidTypeAnalysis> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var62 = var57->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var57:nullable RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 53);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var65 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
/* <var63:MType> isa MClassType */
cltype67 = type_nit__MClassType.color;
idtype68 = type_nit__MClassType.id;
if(cltype67 >= var63->type->table_size) {
var66 = 0;
} else {
var66 = var63->type->type_table[cltype67] == idtype68;
}
if (unlikely(!var66)) {
var_class_name = var63 == NULL ? "null" : var63->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1043);
show_backtrace(1);
}
{
var69 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var60, var63);
}
var70 = !var69;
var40 = var70;
} else {
var40 = var_53;
}
if (var40){
if (varonce71) {
var72 = varonce71;
} else {
var73 = "/*no boxing of ";
var74 = 15;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var78 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = ": ";
var82 = 2;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var86 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = " is not live! */";
var90 = 16;
var91 = standard___standard__NativeString___to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 5;
var94 = NEW_standard__NativeArray(var93, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var94)->values[0] = (val*) var72;
((struct instance_standard__NativeArray*)var94)->values[1] = (val*) var76;
((struct instance_standard__NativeArray*)var94)->values[2] = (val*) var80;
((struct instance_standard__NativeArray*)var94)->values[3] = (val*) var84;
((struct instance_standard__NativeArray*)var94)->values[4] = (val*) var88;
{
((void (*)(val* self, val* p0, long p1))(var92->class->vft[COLOR_standard__array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
}
{
var95 = ((val* (*)(val* self))(var92->class->vft[COLOR_standard__string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var95); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "PRINT_ERROR(\"Dead code executed!\\n\"); show_backtrace(1);";
var99 = 56;
var100 = standard___standard__NativeString___to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "BOX_";
var104 = 4;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = ((val* (*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
var107 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 2;
var109 = NEW_standard__NativeArray(var108, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var109)->values[0] = (val*) var102;
((struct instance_standard__NativeArray*)var109)->values[1] = (val*) var106;
{
((void (*)(val* self, val* p0, long p1))(var107->class->vft[COLOR_standard__array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val* self))(var107->class->vft[COLOR_standard__string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var110); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = " = BOX_";
var114 = 7;
var115 = standard___standard__NativeString___to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
var116 = ((val* (*)(val* self))(var_valtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = "(";
var120 = 1;
var121 = standard___standard__NativeString___to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = "); /* boxing ";
var125 = 13;
var126 = standard___standard__NativeString___to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var129 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = " */";
var133 = 3;
var134 = standard___standard__NativeString___to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var135 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 8;
var137 = NEW_standard__NativeArray(var136, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var137)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var137)->values[1] = (val*) var112;
((struct instance_standard__NativeArray*)var137)->values[2] = (val*) var116;
((struct instance_standard__NativeArray*)var137)->values[3] = (val*) var118;
((struct instance_standard__NativeArray*)var137)->values[4] = (val*) var_value;
((struct instance_standard__NativeArray*)var137)->values[5] = (val*) var123;
((struct instance_standard__NativeArray*)var137)->values[6] = (val*) var127;
((struct instance_standard__NativeArray*)var137)->values[7] = (val*) var131;
{
((void (*)(val* self, val* p0, long p1))(var135->class->vft[COLOR_standard__array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val* self))(var135->class->vft[COLOR_standard__string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var138); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = "type_";
var142 = 5;
var143 = standard___standard__NativeString___to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
{
var144 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
var145 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var145 = array_instance Array[Object] */
var146 = 2;
var147 = NEW_standard__NativeArray(var146, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var147)->values[0] = (val*) var140;
((struct instance_standard__NativeArray*)var147)->values[1] = (val*) var144;
{
((void (*)(val* self, val* p0, long p1))(var145->class->vft[COLOR_standard__array__Array__with_native]))(var145, var147, var146) /* with_native on <var145:Array[Object]>*/;
}
}
{
var148 = ((val* (*)(val* self))(var145->class->vft[COLOR_standard__string__Object__to_s]))(var145) /* to_s on <var145:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = "->type = &type_";
var152 = 15;
var153 = standard___standard__NativeString___to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
{
var154 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = ";";
var158 = 1;
var159 = standard___standard__NativeString___to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
var160 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var160 = array_instance Array[Object] */
var161 = 4;
var162 = NEW_standard__NativeArray(var161, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var162)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var162)->values[1] = (val*) var150;
((struct instance_standard__NativeArray*)var162)->values[2] = (val*) var154;
((struct instance_standard__NativeArray*)var162)->values[3] = (val*) var156;
{
((void (*)(val* self, val* p0, long p1))(var160->class->vft[COLOR_standard__array__Array__with_native]))(var160, var162, var161) /* with_native on <var160:Array[Object]>*/;
}
}
{
var163 = ((val* (*)(val* self))(var160->class->vft[COLOR_standard__string__Object__to_s]))(var160) /* to_s on <var160:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var163); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce164) {
var165 = varonce164;
} else {
var166 = "class_";
var167 = 6;
var168 = standard___standard__NativeString___to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
{
var169 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
var170 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var170 = array_instance Array[Object] */
var171 = 2;
var172 = NEW_standard__NativeArray(var171, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var172)->values[0] = (val*) var165;
((struct instance_standard__NativeArray*)var172)->values[1] = (val*) var169;
{
((void (*)(val* self, val* p0, long p1))(var170->class->vft[COLOR_standard__array__Array__with_native]))(var170, var172, var171) /* with_native on <var170:Array[Object]>*/;
}
}
{
var173 = ((val* (*)(val* self))(var170->class->vft[COLOR_standard__string__Object__to_s]))(var170) /* to_s on <var170:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var173); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce174) {
var175 = varonce174;
} else {
var176 = "->class = &class_";
var177 = 17;
var178 = standard___standard__NativeString___to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
{
var179 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = ";";
var183 = 1;
var184 = standard___standard__NativeString___to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var185 = array_instance Array[Object] */
var186 = 4;
var187 = NEW_standard__NativeArray(var186, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var187)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var187)->values[1] = (val*) var175;
((struct instance_standard__NativeArray*)var187)->values[2] = (val*) var179;
((struct instance_standard__NativeArray*)var187)->values[3] = (val*) var181;
{
((void (*)(val* self, val* p0, long p1))(var185->class->vft[COLOR_standard__array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[Object]>*/;
}
}
{
var188 = ((val* (*)(val* self))(var185->class->vft[COLOR_standard__string__Object__to_s]))(var185) /* to_s on <var185:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var188); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
/* method separate_compiler#SeparateCompilerVisitor#type_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nit___nit__SeparateCompilerVisitor___type_info(val* self, val* p0) {
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
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
val* var19 /* : AbstractCompiler */;
val* var21 /* : AbstractCompiler */;
val* var22 /* : Set[MType] */;
val* var24 /* : Set[MType] */;
val* var25 /* : MType */;
val* var27 /* : MType */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : MType */;
val* var35 /* : MType */;
val* var36 /* : String */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : MType */;
val* var48 /* : MType */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val* self))(var1->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var1) /* ctype on <var1:MType>*/;
}
if (varonce) {
var5 = varonce;
} else {
var6 = "val*";
var7 = 4;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var9 = ((short int (*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var5) /* == on <var4:String>*/;
}
if (var9){
if (varonce10) {
var11 = varonce10;
} else {
var12 = "->type";
var13 = 6;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 2;
var17 = NEW_standard__NativeArray(var16, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var17)->values[0] = (val*) var_value;
((struct instance_standard__NativeArray*)var17)->values[1] = (val*) var11;
{
((void (*)(val* self, val* p0, long p1))(var15->class->vft[COLOR_standard__array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
}
{
var18 = ((val* (*)(val* self))(var15->class->vft[COLOR_standard__string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
}
var = var18;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var21 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var19) on <var19:AbstractCompiler(SeparateCompiler)> */
var24 = var19->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var19:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 121);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var27 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var22->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var22, var25) /* add on <var22:Set[MType]>*/;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "type_";
var31 = 5;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var35 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = ((val* (*)(val* self))(var33->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var33) /* c_name on <var33:MType>*/;
}
var37 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 2;
var39 = NEW_standard__NativeArray(var38, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var39)->values[0] = (val*) var29;
((struct instance_standard__NativeArray*)var39)->values[1] = (val*) var36;
{
((void (*)(val* self, val* p0, long p1))(var37->class->vft[COLOR_standard__array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val* self))(var37->class->vft[COLOR_standard__string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "(&type_";
var44 = 7;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var48 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = ((val* (*)(val* self))(var46->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var46) /* c_name on <var46:MType>*/;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = ")";
var53 = 1;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 3;
var57 = NEW_standard__NativeArray(var56, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var57)->values[0] = (val*) var42;
((struct instance_standard__NativeArray*)var57)->values[1] = (val*) var49;
((struct instance_standard__NativeArray*)var57)->values[2] = (val*) var51;
{
((void (*)(val* self, val* p0, long p1))(var55->class->vft[COLOR_standard__array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var58 = ((val* (*)(val* self))(var55->class->vft[COLOR_standard__string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
var = var58;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#compile_callsite for (self: SeparateCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
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
short int var_34 /* var : Bool */;
val* var35 /* : MMethodDef */;
val* var37 /* : MMethodDef */;
val* var38 /* : Array[MProperty] */;
val* var40 /* : Array[MProperty] */;
short int var41 /* : Bool */;
val* var42 /* : Set[MMethodDef] */;
val* var_tgs /* var tgs: Set[MMethodDef] */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var49 /* : nullable Object */;
val* var50 /* : nullable Object */;
val* var51 /* : MClassDef */;
val* var53 /* : MClassDef */;
val* var54 /* : MClassType */;
val* var56 /* : MClassType */;
val* var57 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var58 /* : null */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : null */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
static val* varonce;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_args = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var1:AbstractCompiler(SeparateCompiler)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_rta = var4;
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var9 = var_callsite->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_mmethod = var7;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var12) on <var12:AbstractCompiler(SeparateCompiler)> */
var17 = var12->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var12:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var15) on <var15:ModelBuilder> */
var20 = var15->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var15:ModelBuilder> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_direct_call_monomorph (var18) on <var18:ToolContext> */
var23 = var18->attrs[COLOR_nit__separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <var18:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 39);
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
var27 = ((struct instance_standard__Bool*)var24)->value; /* autounbox from nullable Object to Bool */;
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
var32 = ((short int (*)(val* self, val* p0))(var_rta->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rta, var_other) /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/;
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
var11 = var29;
} else {
var11 = var_;
}
var_34 = var11;
if (var11){
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var37 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var35) on <var35:MMethodDef> */
var40 = var35->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var35:MMethodDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var38);
}
var10 = var41;
} else {
var10 = var_34;
}
if (var10){
{
var42 = nit___nit__RapidTypeAnalysis___live_targets(var_rta, var_callsite);
}
var_tgs = var42;
{
var43 = ((long (*)(val* self))(var_tgs->class->vft[COLOR_standard__abstract_collection__Collection__length]))(var_tgs) /* length on <var_tgs:Set[MMethodDef]>*/;
}
var44 = 1;
{
{ /* Inline kernel#Int#== (var43,var44) on <var43:Int> */
var47 = var43 == var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
var48 = nit___nit__SeparateCompilerVisitor___before_send(self, var_mmethod, var_args);
}
var_res0 = var48;
{
var49 = ((val* (*)(val* self))(var_tgs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_tgs) /* first on <var_tgs:Set[MMethodDef]>*/;
}
{
var50 = ((val* (*)(val* self))(var_tgs->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var_tgs) /* first on <var_tgs:Set[MMethodDef]>*/;
}
{
{ /* Inline model#MPropDef#mclassdef (var50) on <var50:nullable Object(MMethodDef)> */
var53 = var50->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var50:nullable Object(MMethodDef)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var51) on <var51:MClassDef> */
var56 = var51->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var51:MClassDef> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(self, var49, var54, var_args);
}
var_res = var57;
var58 = NULL;
if (var_res0 == NULL) {
var59 = 0; /* is null */
} else {
var59 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res0,var58) on <var_res0:nullable RuntimeVariable> */
var_other = var58;
{
var62 = ((short int (*)(val* self, val* p0))(var_res0->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res0, var_other) /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var63 = !var62;
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
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
var68 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1085);
show_backtrace(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(self, var_res0, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (varonce) {
var70 = varonce;
} else {
var71 = "}";
var72 = 1;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce = var70;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var70); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
{
var74 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, p0, p1) /* compile_callsite on <self:SeparateCompilerVisitor>*/;
}
var = var74;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1) {
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
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var_m /* var m: MModule */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var26 /* : MModule */;
val* var28 /* : MModule */;
val* var30 /* : nullable Object */;
val* var31 /* : MType */;
val* var33 /* : MType */;
val* var34 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var35 /* : AbstractCompiler */;
val* var37 /* : AbstractCompiler */;
val* var39 /* : String */;
val* var40 /* : nullable RuntimeVariable */;
var_mmethod = p0;
var_arguments = p1;
{
var1 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val* (*)(val* self))(var2->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var2) /* ctype on <var2:MType>*/;
}
if (varonce) {
var6 = varonce;
} else {
var7 = "val*";
var8 = 4;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
{ /* Inline kernel#Object#!= (var5,var6) on <var5:String> */
var_other = var6;
{
var12 = ((short int (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:String>*/;
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var16 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var14) on <var14:AbstractCompiler(SeparateCompiler)> */
var19 = var14->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var14:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_m = var17;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule (var23) on <var23:AbstractCompiler(SeparateCompiler)> */
var28 = var23->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var23:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 478);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var20,var26) on <var20:AbstractCompiler(SeparateCompiler)> */
var20->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var26; /* _mainmodule on <var20:AbstractCompiler(SeparateCompiler)> */
RET_LABEL29:(void)0;
}
}
{
var30 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var30) on <var30:nullable Object(RuntimeVariable)> */
var33 = var30->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var30:nullable Object(RuntimeVariable)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nit___nit__AbstractCompilerVisitor___monomorphic_send(self, var_mmethod, var31, var_arguments);
}
var_res = var34;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var37 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var35,var_m) on <var35:AbstractCompiler(SeparateCompiler)> */
var35->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var_m; /* _mainmodule on <var35:AbstractCompiler(SeparateCompiler)> */
RET_LABEL38:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var39 = nit__separate_compiler___MEntity___const_color(var_mmethod);
}
{
var40 = nit___nit__SeparateCompilerVisitor___table_send(self, var_mmethod, var_arguments, var39);
}
var = var40;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#before_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___before_send(val* self, val* p0, val* p1) {
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
short int var_30 /* var : Bool */;
val* var31 /* : String */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
short int var39 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : MType */;
val* var44 /* : MType */;
short int var45 /* : Bool */;
int cltype;
int idtype;
short int var_46 /* var : Bool */;
val* var47 /* : MType */;
val* var49 /* : MType */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
short int var_53 /* var : Bool */;
short int var_maybenull /* var maybenull: Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
short int var68 /* : Bool */;
val* var69 /* : String */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
short int var77 /* : Bool */;
short int var_78 /* var : Bool */;
val* var79 /* : String */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
short int var87 /* : Bool */;
val* var88 /* : MClassType */;
val* var89 /* : RuntimeVariable */;
long var90 /* : Int */;
val* var91 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var92 /* : MType */;
val* var94 /* : MType */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
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
val* var108 /* : Array[Object] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[Object] */;
val* var111 /* : String */;
val* var112 /* : MType */;
val* var114 /* : MType */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
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
val* var138 /* : Array[Object] */;
long var139 /* : Int */;
val* var140 /* : NativeArray[Object] */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
short int var150 /* : Bool */;
val* var151 /* : MClassType */;
val* var152 /* : RuntimeVariable */;
long var153 /* : Int */;
val* var154 /* : nullable Object */;
val* var_arg155 /* var arg: RuntimeVariable */;
val* var156 /* : MType */;
val* var158 /* : MType */;
short int var159 /* : Bool */;
int cltype160;
int idtype161;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : String */;
val* var176 /* : MType */;
val* var178 /* : MType */;
short int var179 /* : Bool */;
int cltype180;
int idtype181;
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
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
val* var202 /* : Array[Object] */;
long var203 /* : Int */;
val* var204 /* : NativeArray[Object] */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : FlatString */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : FlatString */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
short int var221 /* : Bool */;
val* var222 /* : AbstractCompiler */;
val* var224 /* : AbstractCompiler */;
val* var225 /* : ModelBuilder */;
val* var227 /* : ModelBuilder */;
val* var228 /* : ToolContext */;
val* var230 /* : ToolContext */;
val* var231 /* : OptionBool */;
val* var233 /* : OptionBool */;
val* var234 /* : nullable Object */;
val* var236 /* : nullable Object */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var_239 /* var : Bool */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
val* var242 /* : String */;
val* var244 /* : String */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : FlatString */;
short int var250 /* : Bool */;
short int var_251 /* var : Bool */;
val* var252 /* : String */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : FlatString */;
short int var260 /* : Bool */;
short int var_261 /* var : Bool */;
val* var262 /* : String */;
val* var264 /* : String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : FlatString */;
short int var270 /* : Bool */;
long var271 /* : Int */;
val* var272 /* : nullable Object */;
val* var_arg273 /* var arg: RuntimeVariable */;
val* var274 /* : MType */;
val* var276 /* : MType */;
short int var277 /* : Bool */;
int cltype278;
int idtype279;
val* var280 /* : null */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var284 /* : Bool */;
short int var286 /* : Bool */;
val* var287 /* : MClassType */;
val* var288 /* : RuntimeVariable */;
val* var289 /* : String */;
val* var291 /* : String */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
short int var297 /* : Bool */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
val* var303 /* : Array[Object] */;
long var304 /* : Int */;
val* var305 /* : NativeArray[Object] */;
val* var306 /* : String */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : FlatString */;
val* var312 /* : Array[Object] */;
long var313 /* : Int */;
val* var314 /* : NativeArray[Object] */;
val* var315 /* : String */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
long var319 /* : Int */;
val* var320 /* : FlatString */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
long var324 /* : Int */;
val* var325 /* : FlatString */;
var_mmethod = p0;
var_arguments = p1;
var1 = NULL;
var_res = var1;
{
var2 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var_recv = var2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var7 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler(SeparateCompiler)> */
var10 = var5->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 55);
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
var20 = ((struct instance_standard__Bool*)var17)->value; /* autounbox from nullable Object to Bool */;
var21 = !var20;
var_ = var21;
if (var21){
var4 = var_;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var24 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
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
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
var29 = ((short int (*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var25) /* == on <var22:String>*/;
}
var4 = var29;
}
var_30 = var4;
if (var4){
var3 = var_30;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var33 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "!=";
var37 = 2;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
var39 = ((short int (*)(val* self, val* p0))(var31->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var31, var35) /* == on <var31:String>*/;
}
var3 = var39;
}
var_consider_null = var3;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var44 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
/* <var42:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var42->type->table_size) {
var45 = 0;
} else {
var45 = var42->type->type_table[cltype] == idtype;
}
var_46 = var45;
if (var45){
var41 = var_46;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var49 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
/* <var47:MType> isa MNullType */
cltype51 = type_nit__MNullType.color;
idtype52 = type_nit__MNullType.id;
if(cltype51 >= var47->type->table_size) {
var50 = 0;
} else {
var50 = var47->type->type_table[cltype51] == idtype52;
}
var41 = var50;
}
var_53 = var41;
if (var41){
var40 = var_consider_null;
} else {
var40 = var_53;
}
var_maybenull = var40;
if (var_maybenull){
if (varonce54) {
var55 = varonce54;
} else {
var56 = "if (";
var57 = 4;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = " == NULL) {";
var62 = 11;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 3;
var66 = NEW_standard__NativeArray(var65, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var66)->values[0] = (val*) var55;
((struct instance_standard__NativeArray*)var66)->values[1] = (val*) var_recv;
((struct instance_standard__NativeArray*)var66)->values[2] = (val*) var60;
{
((void (*)(val* self, val* p0, long p1))(var64->class->vft[COLOR_standard__array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val* self))(var64->class->vft[COLOR_standard__string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var71 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "==";
var75 = 2;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
var77 = ((short int (*)(val* self, val* p0))(var69->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var69, var73) /* == on <var69:String>*/;
}
var_78 = var77;
if (var77){
var68 = var_78;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var81 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "is_same_instance";
var85 = 16;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
var87 = ((short int (*)(val* self, val* p0))(var79->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var79, var83) /* == on <var79:String>*/;
}
var68 = var87;
}
if (var68){
{
var88 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var89 = nit___nit__AbstractCompilerVisitor___new_var(self, var88);
}
var_res = var89;
var90 = 1;
{
var91 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var90);
}
var_arg = var91;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var94 = var_arg->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
/* <var92:MType> isa MNullableType */
cltype96 = type_nit__MNullableType.color;
idtype97 = type_nit__MNullableType.id;
if(cltype96 >= var92->type->table_size) {
var95 = 0;
} else {
var95 = var92->type->type_table[cltype96] == idtype97;
}
if (var95){
if (varonce98) {
var99 = varonce98;
} else {
var100 = " = (";
var101 = 4;
var102 = standard___standard__NativeString___to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = " == NULL);";
var106 = 10;
var107 = standard___standard__NativeString___to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var108 = array_instance Array[Object] */
var109 = 4;
var110 = NEW_standard__NativeArray(var109, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var110)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var110)->values[1] = (val*) var99;
((struct instance_standard__NativeArray*)var110)->values[2] = (val*) var_arg;
((struct instance_standard__NativeArray*)var110)->values[3] = (val*) var104;
{
((void (*)(val* self, val* p0, long p1))(var108->class->vft[COLOR_standard__array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[Object]>*/;
}
}
{
var111 = ((val* (*)(val* self))(var108->class->vft[COLOR_standard__string__Object__to_s]))(var108) /* to_s on <var108:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var111); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var114 = var_arg->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
/* <var112:MType> isa MNullType */
cltype116 = type_nit__MNullType.color;
idtype117 = type_nit__MNullType.id;
if(cltype116 >= var112->type->table_size) {
var115 = 0;
} else {
var115 = var112->type->type_table[cltype116] == idtype117;
}
if (var115){
if (varonce118) {
var119 = varonce118;
} else {
var120 = " = 1; /* is null */";
var121 = 19;
var122 = standard___standard__NativeString___to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var123 = array_instance Array[Object] */
var124 = 2;
var125 = NEW_standard__NativeArray(var124, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var125)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var125)->values[1] = (val*) var119;
{
((void (*)(val* self, val* p0, long p1))(var123->class->vft[COLOR_standard__array__Array__with_native]))(var123, var125, var124) /* with_native on <var123:Array[Object]>*/;
}
}
{
var126 = ((val* (*)(val* self))(var123->class->vft[COLOR_standard__string__Object__to_s]))(var123) /* to_s on <var123:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var126); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce127) {
var128 = varonce127;
} else {
var129 = " = 0; /* ";
var130 = 9;
var131 = standard___standard__NativeString___to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
{
var132 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_arg);
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = " cannot be null */";
var136 = 18;
var137 = standard___standard__NativeString___to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var138 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var138 = array_instance Array[Object] */
var139 = 4;
var140 = NEW_standard__NativeArray(var139, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var140)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var140)->values[1] = (val*) var128;
((struct instance_standard__NativeArray*)var140)->values[2] = (val*) var132;
((struct instance_standard__NativeArray*)var140)->values[3] = (val*) var134;
{
((void (*)(val* self, val* p0, long p1))(var138->class->vft[COLOR_standard__array__Array__with_native]))(var138, var140, var139) /* with_native on <var138:Array[Object]>*/;
}
}
{
var141 = ((val* (*)(val* self))(var138->class->vft[COLOR_standard__string__Object__to_s]))(var138) /* to_s on <var138:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var141); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var144 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "!=";
var148 = 2;
var149 = standard___standard__NativeString___to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
var150 = ((short int (*)(val* self, val* p0))(var142->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var142, var146) /* == on <var142:String>*/;
}
if (var150){
{
var151 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var152 = nit___nit__AbstractCompilerVisitor___new_var(self, var151);
}
var_res = var152;
var153 = 1;
{
var154 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var153);
}
var_arg155 = var154;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg155) on <var_arg155:RuntimeVariable> */
var158 = var_arg155->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg155:RuntimeVariable> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
/* <var156:MType> isa MNullableType */
cltype160 = type_nit__MNullableType.color;
idtype161 = type_nit__MNullableType.id;
if(cltype160 >= var156->type->table_size) {
var159 = 0;
} else {
var159 = var156->type->type_table[cltype160] == idtype161;
}
if (var159){
if (varonce162) {
var163 = varonce162;
} else {
var164 = " = (";
var165 = 4;
var166 = standard___standard__NativeString___to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = " != NULL);";
var170 = 10;
var171 = standard___standard__NativeString___to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 4;
var174 = NEW_standard__NativeArray(var173, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var174)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var174)->values[1] = (val*) var163;
((struct instance_standard__NativeArray*)var174)->values[2] = (val*) var_arg155;
((struct instance_standard__NativeArray*)var174)->values[3] = (val*) var168;
{
((void (*)(val* self, val* p0, long p1))(var172->class->vft[COLOR_standard__array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val* self))(var172->class->vft[COLOR_standard__string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg155) on <var_arg155:RuntimeVariable> */
var178 = var_arg155->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg155:RuntimeVariable> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
/* <var176:MType> isa MNullType */
cltype180 = type_nit__MNullType.color;
idtype181 = type_nit__MNullType.id;
if(cltype180 >= var176->type->table_size) {
var179 = 0;
} else {
var179 = var176->type->type_table[cltype180] == idtype181;
}
if (var179){
if (varonce182) {
var183 = varonce182;
} else {
var184 = " = 0; /* is null */";
var185 = 19;
var186 = standard___standard__NativeString___to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
var187 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var187 = array_instance Array[Object] */
var188 = 2;
var189 = NEW_standard__NativeArray(var188, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var189)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var189)->values[1] = (val*) var183;
{
((void (*)(val* self, val* p0, long p1))(var187->class->vft[COLOR_standard__array__Array__with_native]))(var187, var189, var188) /* with_native on <var187:Array[Object]>*/;
}
}
{
var190 = ((val* (*)(val* self))(var187->class->vft[COLOR_standard__string__Object__to_s]))(var187) /* to_s on <var187:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var190); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce191) {
var192 = varonce191;
} else {
var193 = " = 1; /* ";
var194 = 9;
var195 = standard___standard__NativeString___to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
var196 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_arg155);
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = " cannot be null */";
var200 = 18;
var201 = standard___standard__NativeString___to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 4;
var204 = NEW_standard__NativeArray(var203, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var204)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var204)->values[1] = (val*) var192;
((struct instance_standard__NativeArray*)var204)->values[2] = (val*) var196;
((struct instance_standard__NativeArray*)var204)->values[3] = (val*) var198;
{
((void (*)(val* self, val* p0, long p1))(var202->class->vft[COLOR_standard__array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
}
{
var205 = ((val* (*)(val* self))(var202->class->vft[COLOR_standard__string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var205); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (varonce206) {
var207 = varonce206;
} else {
var208 = "Receiver is null";
var209 = 16;
var210 = standard___standard__NativeString___to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var207); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
}
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = "} else {";
var214 = 8;
var215 = standard___standard__NativeString___to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var212); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce216) {
var217 = varonce216;
} else {
var218 = "{";
var219 = 1;
var220 = standard___standard__NativeString___to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var217); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var224 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var222) on <var222:AbstractCompiler(SeparateCompiler)> */
var227 = var222->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var222:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var225) on <var225:ModelBuilder> */
var230 = var225->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var225:ModelBuilder> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_shortcut_equate (var228) on <var228:ToolContext> */
var233 = var228->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <var228:ToolContext> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 30);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline opts#Option#value (var231) on <var231:OptionBool> */
var236 = var231->attrs[COLOR_opts__Option___value].val; /* _value on <var231:OptionBool> */
var234 = var236;
RET_LABEL235:(void)0;
}
}
var237 = ((struct instance_standard__Bool*)var234)->value; /* autounbox from nullable Object to Bool */;
var238 = !var237;
var_239 = var238;
if (var238){
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var244 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var244 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var242 = var244;
RET_LABEL243:(void)0;
}
}
if (varonce245) {
var246 = varonce245;
} else {
var247 = "==";
var248 = 2;
var249 = standard___standard__NativeString___to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
{
var250 = ((short int (*)(val* self, val* p0))(var242->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var242, var246) /* == on <var242:String>*/;
}
var_251 = var250;
if (var250){
var241 = var_251;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var254 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
if (varonce255) {
var256 = varonce255;
} else {
var257 = "!=";
var258 = 2;
var259 = standard___standard__NativeString___to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
{
var260 = ((short int (*)(val* self, val* p0))(var252->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var252, var256) /* == on <var252:String>*/;
}
var241 = var260;
}
var_261 = var241;
if (var241){
var240 = var_261;
} else {
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var264 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
if (varonce265) {
var266 = varonce265;
} else {
var267 = "is_same_instance";
var268 = 16;
var269 = standard___standard__NativeString___to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
{
var270 = ((short int (*)(val* self, val* p0))(var262->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var262, var266) /* == on <var262:String>*/;
}
var240 = var270;
}
var221 = var240;
} else {
var221 = var_239;
}
if (var221){
var271 = 1;
{
var272 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var271);
}
var_arg273 = var272;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_arg273) on <var_arg273:RuntimeVariable> */
var276 = var_arg273->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg273:RuntimeVariable> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
/* <var274:MType> isa MNullType */
cltype278 = type_nit__MNullType.color;
idtype279 = type_nit__MNullType.id;
if(cltype278 >= var274->type->table_size) {
var277 = 0;
} else {
var277 = var274->type->type_table[cltype278] == idtype279;
}
if (var277){
var280 = NULL;
if (var_res == NULL) {
var281 = 1; /* is null */
} else {
var281 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var280) on <var_res:nullable RuntimeVariable> */
var_other = var280;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var286 = var_res == var_other;
var284 = var286;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
}
var282 = var284;
goto RET_LABEL283;
RET_LABEL283:(void)0;
}
var281 = var282;
}
if (var281){
{
var287 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var288 = nit___nit__AbstractCompilerVisitor___new_var(self, var287);
}
var_res = var288;
} else {
}
{
{ /* Inline model#MProperty#name (var_mmethod) on <var_mmethod:MMethod> */
var291 = var_mmethod->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var291 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var289 = var291;
RET_LABEL290:(void)0;
}
}
if (varonce292) {
var293 = varonce292;
} else {
var294 = "!=";
var295 = 2;
var296 = standard___standard__NativeString___to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
{
var297 = ((short int (*)(val* self, val* p0))(var289->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var289, var293) /* == on <var289:String>*/;
}
if (var297){
if (varonce298) {
var299 = varonce298;
} else {
var300 = " = 1; /* arg is null and recv is not */";
var301 = 39;
var302 = standard___standard__NativeString___to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
var303 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var303 = array_instance Array[Object] */
var304 = 2;
var305 = NEW_standard__NativeArray(var304, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var305)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var305)->values[1] = (val*) var299;
{
((void (*)(val* self, val* p0, long p1))(var303->class->vft[COLOR_standard__array__Array__with_native]))(var303, var305, var304) /* with_native on <var303:Array[Object]>*/;
}
}
{
var306 = ((val* (*)(val* self))(var303->class->vft[COLOR_standard__string__Object__to_s]))(var303) /* to_s on <var303:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var306); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce307) {
var308 = varonce307;
} else {
var309 = " = 0; /* arg is null but recv is not */";
var310 = 39;
var311 = standard___standard__NativeString___to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
var312 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var312 = array_instance Array[Object] */
var313 = 2;
var314 = NEW_standard__NativeArray(var313, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var314)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var314)->values[1] = (val*) var308;
{
((void (*)(val* self, val* p0, long p1))(var312->class->vft[COLOR_standard__array__Array__with_native]))(var312, var314, var313) /* with_native on <var312:Array[Object]>*/;
}
}
{
var315 = ((val* (*)(val* self))(var312->class->vft[COLOR_standard__string__Object__to_s]))(var312) /* to_s on <var312:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var315); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
if (varonce316) {
var317 = varonce316;
} else {
var318 = "}";
var319 = 1;
var320 = standard___standard__NativeString___to_s_with_length(var318, var319);
var317 = var320;
varonce316 = var317;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var317); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce321) {
var322 = varonce321;
} else {
var323 = "if (0) {";
var324 = 8;
var325 = standard___standard__NativeString___to_s_with_length(var323, var324);
var322 = var325;
varonce321 = var322;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var322); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
/* method separate_compiler#SeparateCompilerVisitor#table_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable], String): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___table_send(val* self, val* p0, val* p1, val* p2) {
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
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
long var67 /* : Int */;
long var69 /* : Int */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : Array[Object] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[Object] */;
val* var78 /* : Object */;
val* var79 /* : String */;
val* var80 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var81 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var82 /* : MPropDef */;
val* var84 /* : MPropDef */;
val* var85 /* : SeparateRuntimeFunction */;
val* var_runtime_function /* var runtime_function: SeparateRuntimeFunction */;
val* var86 /* : MSignature */;
val* var88 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var89 /* : nullable MType */;
val* var91 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var92 /* : null */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var100 /* : RuntimeVariable */;
val* var101 /* : FlatBuffer */;
val* var_ss /* var ss: FlatBuffer */;
val* var103 /* : Array[Object] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[Object] */;
val* var106 /* : String */;
long var107 /* : Int */;
long var_i /* var i: Int */;
long var108 /* : Int */;
long var_109 /* var : Int */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
short int var116 /* : Bool */;
long var117 /* : Int */;
long var118 /* : Int */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
long var124 /* : Int */;
val* var125 /* : nullable Object */;
val* var_a /* var a: RuntimeVariable */;
val* var126 /* : Array[MParameter] */;
val* var128 /* : Array[MParameter] */;
val* var129 /* : nullable Object */;
val* var130 /* : MType */;
val* var132 /* : MType */;
val* var_t /* var t: MType */;
long var133 /* : Int */;
long var135 /* : Int */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
long var139 /* : Int */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
val* var147 /* : nullable Object */;
val* var148 /* : MType */;
val* var150 /* : MType */;
val* var151 /* : RuntimeVariable */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : Array[Object] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[Object] */;
val* var160 /* : String */;
long var161 /* : Int */;
long var162 /* : Int */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
val* var168 /* : String */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
val* var180 /* : nullable Object */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
val* var190 /* : FlatString */;
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
val* var201 /* : nullable Object */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
val* var208 /* : Array[Object] */;
long var209 /* : Int */;
val* var210 /* : NativeArray[Object] */;
val* var211 /* : String */;
val* var_call /* var call: String */;
val* var212 /* : null */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
val* var_other216 /* var other: nullable Object */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
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
val* var229 /* : Array[Object] */;
long var230 /* : Int */;
val* var231 /* : NativeArray[Object] */;
val* var232 /* : String */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : FlatString */;
val* var238 /* : Array[Object] */;
long var239 /* : Int */;
val* var240 /* : NativeArray[Object] */;
val* var241 /* : String */;
val* var242 /* : null */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
val* var248 /* : null */;
short int var249 /* : Bool */;
short int var250 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : FlatString */;
var_mmethod = p0;
var_arguments = p1;
var_const_color = p2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var_) on <var_:ModelBuilder> */
var9 = var_->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var_:ModelBuilder> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var_->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l = var11; /* _nb_invok_by_tables on <var_:ModelBuilder> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var18 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var16) on <var16:AbstractCompiler(SeparateCompiler)> */
var21 = var16->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var16:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var19) on <var19:ModelBuilder> */
var24 = var19->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var19:ModelBuilder> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var22) on <var22:ToolContext> */
var27 = var22->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var22:ToolContext> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 61);
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
var31 = ((struct instance_standard__Bool*)var28)->value; /* autounbox from nullable Object to Bool */;
if (var31){
if (varonce) {
var32 = varonce;
} else {
var33 = "count_invoke_by_tables++;";
var34 = 25;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var38 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var41 = var_mmethod->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var39) on <var39:MPropDef(MMethodDef)> */
var44 = var39->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var39:MPropDef(MMethodDef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1178);
show_backtrace(1);
} else {
var45 = nit___nit__MSignature___arity(var42);
}
var46 = 1;
{
{ /* Inline kernel#Int#+ (var45,var46) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var56 = var36 == var47;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (unlikely(!var54)) {
if (varonce57) {
var58 = varonce57;
} else {
var59 = "Invalid arity for ";
var60 = 18;
var61 = standard___standard__NativeString___to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = ". ";
var65 = 2;
var66 = standard___standard__NativeString___to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var69 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = " arguments given.";
var73 = 17;
var74 = standard___standard__NativeString___to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 5;
var77 = NEW_standard__NativeArray(var76, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var77)->values[0] = (val*) var58;
((struct instance_standard__NativeArray*)var77)->values[1] = (val*) var_mmethod;
((struct instance_standard__NativeArray*)var77)->values[2] = (val*) var63;
var78 = BOX_standard__Int(var67); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var77)->values[3] = (val*) var78;
((struct instance_standard__NativeArray*)var77)->values[4] = (val*) var71;
{
((void (*)(val* self, val* p0, long p1))(var75->class->vft[COLOR_standard__array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val* self))(var75->class->vft[COLOR_standard__string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___debug(self, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1178);
show_backtrace(1);
}
{
var80 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
var_recv = var80;
{
var81 = nit___nit__SeparateCompilerVisitor___before_send(self, var_mmethod, var_arguments);
}
var_res0 = var81;
{
{ /* Inline model#MProperty#intro (var_mmethod) on <var_mmethod:MMethod> */
var84 = var_mmethod->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mmethod:MMethod> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = nit__separate_compiler___MMethodDef___virtual_runtime_function(var82);
}
var_runtime_function = var85;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (var_runtime_function) on <var_runtime_function:SeparateRuntimeFunction> */
var88 = var_runtime_function->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <var_runtime_function:SeparateRuntimeFunction> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_msignature = var86;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var91 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var_ret = var89;
var92 = NULL;
if (var_ret == NULL) {
var93 = 1; /* is null */
} else {
var93 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var92) on <var_ret:nullable MType> */
var_other = var92;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var98 = var_ret == var_other;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (var93){
var99 = NULL;
var_res = var99;
} else {
{
var100 = nit___nit__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var100;
}
var101 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var101) on <var101:FlatBuffer> */
{
((void (*)(val* self))(var101->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var101) /* init on <var101:FlatBuffer>*/;
}
RET_LABEL102:(void)0;
}
}
var_ss = var101;
var103 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var103 = array_instance Array[Object] */
var104 = 1;
var105 = NEW_standard__NativeArray(var104, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var105)->values[0] = (val*) var_recv;
{
((void (*)(val* self, val* p0, long p1))(var103->class->vft[COLOR_standard__array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[Object]>*/;
}
}
{
var106 = ((val* (*)(val* self))(var103->class->vft[COLOR_standard__string__Object__to_s]))(var103) /* to_s on <var103:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_ss, var106); /* Direct call string#FlatBuffer#append on <var_ss:FlatBuffer>*/
}
var107 = 0;
var_i = var107;
{
var108 = nit___nit__MSignature___arity(var_msignature);
}
var_109 = var108;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_109) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_109:Int> isa OTHER */
/* <var_109:Int> isa OTHER */
var112 = 1; /* easy <var_109:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var116 = var_i < var_109;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
if (var110){
var117 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var117) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var117:Int> isa OTHER */
/* <var117:Int> isa OTHER */
var120 = 1; /* easy <var117:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var124 = var_i + var117;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
var125 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var118);
}
var_a = var125;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var128 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var126, var_i);
}
{
{ /* Inline model#MParameter#mtype (var129) on <var129:nullable Object(MParameter)> */
var132 = var129->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var129:nullable Object(MParameter)> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
var_t = var130;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var135 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var133) on <var_i:Int> */
var138 = var_i == var133;
var136 = var138;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
if (var136){
var139 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var139) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var139:Int> isa OTHER */
/* <var139:Int> isa OTHER */
var142 = 1; /* easy <var139:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var146 = var_i + var139;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
{
var147 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var140);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var147) on <var147:nullable Object(RuntimeVariable)> */
var150 = var147->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var147:nullable Object(RuntimeVariable)> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
var_t = var148;
} else {
}
{
var151 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_a, var_t);
}
var_a = var151;
if (varonce152) {
var153 = varonce152;
} else {
var154 = ", ";
var155 = 2;
var156 = standard___standard__NativeString___to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 2;
var159 = NEW_standard__NativeArray(var158, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var159)->values[0] = (val*) var153;
((struct instance_standard__NativeArray*)var159)->values[1] = (val*) var_a;
{
((void (*)(val* self, val* p0, long p1))(var157->class->vft[COLOR_standard__array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[Object]>*/;
}
}
{
var160 = ((val* (*)(val* self))(var157->class->vft[COLOR_standard__string__Object__to_s]))(var157) /* to_s on <var157:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_ss, var160); /* Direct call string#FlatBuffer#append on <var_ss:FlatBuffer>*/
}
var161 = 1;
{
var162 = standard___standard__Int___Discrete__successor(var_i, var161);
}
var_i = var162;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_const_color); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = "((";
var166 = 2;
var167 = standard___standard__NativeString___to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
{
var168 = nit___nit__SeparateRuntimeFunction___c_ret(var_runtime_function);
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = " (*)";
var172 = 4;
var173 = standard___standard__NativeString___to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
{
var174 = nit___nit__SeparateRuntimeFunction___c_sig(var_runtime_function);
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = ")(";
var178 = 2;
var179 = standard___standard__NativeString___to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
{
var180 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
if (varonce181) {
var182 = varonce181;
} else {
var183 = "->class->vft[";
var184 = 13;
var185 = standard___standard__NativeString___to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
if (varonce186) {
var187 = varonce186;
} else {
var188 = "]))(";
var189 = 4;
var190 = standard___standard__NativeString___to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = ") /* ";
var194 = 5;
var195 = standard___standard__NativeString___to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = " on ";
var199 = 4;
var200 = standard___standard__NativeString___to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
{
var201 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var202 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var201);
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = "*/";
var206 = 2;
var207 = standard___standard__NativeString___to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
var208 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var208 = array_instance Array[Object] */
var209 = 15;
var210 = NEW_standard__NativeArray(var209, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var210)->values[0] = (val*) var164;
((struct instance_standard__NativeArray*)var210)->values[1] = (val*) var168;
((struct instance_standard__NativeArray*)var210)->values[2] = (val*) var170;
((struct instance_standard__NativeArray*)var210)->values[3] = (val*) var174;
((struct instance_standard__NativeArray*)var210)->values[4] = (val*) var176;
((struct instance_standard__NativeArray*)var210)->values[5] = (val*) var180;
((struct instance_standard__NativeArray*)var210)->values[6] = (val*) var182;
((struct instance_standard__NativeArray*)var210)->values[7] = (val*) var_const_color;
((struct instance_standard__NativeArray*)var210)->values[8] = (val*) var187;
((struct instance_standard__NativeArray*)var210)->values[9] = (val*) var_ss;
((struct instance_standard__NativeArray*)var210)->values[10] = (val*) var192;
((struct instance_standard__NativeArray*)var210)->values[11] = (val*) var_mmethod;
((struct instance_standard__NativeArray*)var210)->values[12] = (val*) var197;
((struct instance_standard__NativeArray*)var210)->values[13] = (val*) var202;
((struct instance_standard__NativeArray*)var210)->values[14] = (val*) var204;
{
((void (*)(val* self, val* p0, long p1))(var208->class->vft[COLOR_standard__array__Array__with_native]))(var208, var210, var209) /* with_native on <var208:Array[Object]>*/;
}
}
{
var211 = ((val* (*)(val* self))(var208->class->vft[COLOR_standard__string__Object__to_s]))(var208) /* to_s on <var208:Array[Object]>*/;
}
var_call = var211;
var212 = NULL;
if (var_res == NULL) {
var213 = 0; /* is null */
} else {
var213 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var212) on <var_res:nullable RuntimeVariable> */
var_other216 = var212;
{
var217 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other216) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var218 = !var217;
var214 = var218;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
var213 = var214;
}
if (var213){
if (varonce219) {
var220 = varonce219;
} else {
var221 = " = ";
var222 = 3;
var223 = standard___standard__NativeString___to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
if (varonce224) {
var225 = varonce224;
} else {
var226 = ";";
var227 = 1;
var228 = standard___standard__NativeString___to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
var229 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var229 = array_instance Array[Object] */
var230 = 4;
var231 = NEW_standard__NativeArray(var230, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var231)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var231)->values[1] = (val*) var220;
((struct instance_standard__NativeArray*)var231)->values[2] = (val*) var_call;
((struct instance_standard__NativeArray*)var231)->values[3] = (val*) var225;
{
((void (*)(val* self, val* p0, long p1))(var229->class->vft[COLOR_standard__array__Array__with_native]))(var229, var231, var230) /* with_native on <var229:Array[Object]>*/;
}
}
{
var232 = ((val* (*)(val* self))(var229->class->vft[COLOR_standard__string__Object__to_s]))(var229) /* to_s on <var229:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var232); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce233) {
var234 = varonce233;
} else {
var235 = ";";
var236 = 1;
var237 = standard___standard__NativeString___to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
var238 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var238 = array_instance Array[Object] */
var239 = 2;
var240 = NEW_standard__NativeArray(var239, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var240)->values[0] = (val*) var_call;
((struct instance_standard__NativeArray*)var240)->values[1] = (val*) var234;
{
((void (*)(val* self, val* p0, long p1))(var238->class->vft[COLOR_standard__array__Array__with_native]))(var238, var240, var239) /* with_native on <var238:Array[Object]>*/;
}
}
{
var241 = ((val* (*)(val* self))(var238->class->vft[COLOR_standard__string__Object__to_s]))(var238) /* to_s on <var238:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var241); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var242 = NULL;
if (var_res0 == NULL) {
var243 = 0; /* is null */
} else {
var243 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res0,var242) on <var_res0:nullable RuntimeVariable> */
var_other216 = var242;
{
var246 = ((short int (*)(val* self, val* p0))(var_res0->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res0, var_other216) /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var247 = !var246;
var244 = var247;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
var243 = var244;
}
if (var243){
var248 = NULL;
if (var_res == NULL) {
var249 = 0; /* is null */
} else {
var249 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var248) on <var_res:nullable RuntimeVariable> */
var_other216 = var248;
{
var252 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other216) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var253 = !var252;
var250 = var253;
goto RET_LABEL251;
RET_LABEL251:(void)0;
}
var249 = var250;
}
if (unlikely(!var249)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1217);
show_backtrace(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(self, var_res0, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (varonce254) {
var255 = varonce254;
} else {
var256 = "}";
var257 = 1;
var258 = standard___standard__NativeString___to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var255); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#call for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
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
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
long var25 /* : Int */;
long var27 /* : Int */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : Object */;
val* var37 /* : String */;
val* var38 /* : nullable MSignature */;
val* var40 /* : nullable MSignature */;
val* var41 /* : nullable MType */;
val* var43 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var52 /* : MClassDef */;
val* var54 /* : MClassDef */;
val* var55 /* : MClassType */;
val* var57 /* : MClassType */;
val* var58 /* : MClassDef */;
val* var60 /* : MClassDef */;
val* var61 /* : MClassType */;
val* var63 /* : MClassType */;
val* var64 /* : MClassDef */;
val* var66 /* : MClassDef */;
val* var67 /* : MModule */;
val* var69 /* : MModule */;
short int var70 /* : Bool */;
val* var71 /* : MType */;
val* var72 /* : RuntimeVariable */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var_ /* var : Bool */;
val* var78 /* : AbstractCompiler */;
val* var80 /* : AbstractCompiler */;
val* var81 /* : ModelBuilder */;
val* var83 /* : ModelBuilder */;
val* var84 /* : ToolContext */;
val* var86 /* : ToolContext */;
val* var87 /* : OptionBool */;
val* var89 /* : OptionBool */;
val* var90 /* : nullable Object */;
val* var92 /* : nullable Object */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var_95 /* var : Bool */;
short int var96 /* : Bool */;
val* var97 /* : AbstractCompiler */;
val* var99 /* : AbstractCompiler */;
val* var100 /* : ModelBuilder */;
val* var102 /* : ModelBuilder */;
val* var103 /* : ToolContext */;
val* var105 /* : ToolContext */;
val* var106 /* : OptionBool */;
val* var108 /* : OptionBool */;
val* var109 /* : nullable Object */;
val* var111 /* : nullable Object */;
short int var112 /* : Bool */;
short int var_113 /* var : Bool */;
short int var114 /* : Bool */;
val* var115 /* : AbstractCompiler */;
val* var117 /* : AbstractCompiler */;
val* var118 /* : ModelBuilder */;
val* var120 /* : ModelBuilder */;
val* var_121 /* var : ModelBuilder */;
long var122 /* : Int */;
long var124 /* : Int */;
long var125 /* : Int */;
long var126 /* : Int */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
long var132 /* : Int */;
val* var134 /* : AbstractCompiler */;
val* var136 /* : AbstractCompiler */;
val* var137 /* : ModelBuilder */;
val* var139 /* : ModelBuilder */;
val* var140 /* : ToolContext */;
val* var142 /* : ToolContext */;
val* var143 /* : OptionBool */;
val* var145 /* : OptionBool */;
val* var146 /* : nullable Object */;
val* var148 /* : nullable Object */;
short int var149 /* : Bool */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : FlatString */;
val* var155 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
val* var161 /* : String */;
val* var164 /* : nullable StaticFrame */;
val* var166 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : FlatString */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : FlatString */;
val* var189 /* : nullable Object */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
val* var196 /* : Array[Object] */;
long var197 /* : Int */;
val* var198 /* : NativeArray[Object] */;
val* var199 /* : String */;
val* var200 /* : nullable RuntimeVariable */;
val* var201 /* : nullable String */;
val* var203 /* : nullable String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : FlatString */;
val* var209 /* : Array[Object] */;
long var210 /* : Int */;
val* var211 /* : NativeArray[Object] */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
val* var219 /* : AbstractCompiler */;
val* var221 /* : AbstractCompiler */;
val* var222 /* : ModelBuilder */;
val* var224 /* : ModelBuilder */;
val* var_225 /* var : ModelBuilder */;
long var226 /* : Int */;
long var228 /* : Int */;
long var229 /* : Int */;
long var230 /* : Int */;
short int var232 /* : Bool */;
int cltype233;
int idtype234;
const char* var_class_name235;
long var236 /* : Int */;
val* var238 /* : AbstractCompiler */;
val* var240 /* : AbstractCompiler */;
val* var241 /* : ModelBuilder */;
val* var243 /* : ModelBuilder */;
val* var244 /* : ToolContext */;
val* var246 /* : ToolContext */;
val* var247 /* : OptionBool */;
val* var249 /* : OptionBool */;
val* var250 /* : nullable Object */;
val* var252 /* : nullable Object */;
short int var253 /* : Bool */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : FlatString */;
val* var259 /* : String */;
val* var260 /* : null */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
short int var264 /* : Bool */;
short int var266 /* : Bool */;
val* var267 /* : String */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : FlatString */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : FlatString */;
val* var278 /* : String */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : NativeString */;
long var282 /* : Int */;
val* var283 /* : FlatString */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
long var287 /* : Int */;
val* var288 /* : FlatString */;
val* var289 /* : nullable Object */;
val* var290 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
val* var296 /* : Array[Object] */;
long var297 /* : Int */;
val* var298 /* : NativeArray[Object] */;
val* var299 /* : String */;
val* var300 /* : null */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
val* var306 /* : String */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : FlatString */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
long var315 /* : Int */;
val* var316 /* : FlatString */;
val* var317 /* : String */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : FlatString */;
val* var323 /* : Array[Object] */;
long var324 /* : Int */;
val* var325 /* : NativeArray[Object] */;
val* var326 /* : String */;
var_mmethoddef = p0;
var_recvtype = p1;
var_arguments = p2;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var3 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var6 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1229);
show_backtrace(1);
} else {
var7 = nit___nit__MSignature___arity(var4);
}
var8 = 1;
{
{ /* Inline kernel#Int#+ (var7,var8) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var15 = var1 == var9;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (unlikely(!var13)) {
if (varonce) {
var16 = varonce;
} else {
var17 = "Invalid arity for ";
var18 = 18;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = ". ";
var23 = 2;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var27 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = " arguments given.";
var31 = 17;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 5;
var35 = NEW_standard__NativeArray(var34, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var35)->values[0] = (val*) var16;
((struct instance_standard__NativeArray*)var35)->values[1] = (val*) var_mmethoddef;
((struct instance_standard__NativeArray*)var35)->values[2] = (val*) var21;
var36 = BOX_standard__Int(var25); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var35)->values[3] = (val*) var36;
((struct instance_standard__NativeArray*)var35)->values[4] = (val*) var29;
{
((void (*)(val* self, val* p0, long p1))(var33->class->vft[COLOR_standard__array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var33->class->vft[COLOR_standard__string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___debug(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1229);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var40 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1232);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var38) on <var38:nullable MSignature> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var43 = var38->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var38:nullable MSignature> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_ret = var41;
var44 = NULL;
if (var_ret == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var44) on <var_ret:nullable MType> */
var_other = var44;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var50 = var_ret == var_other;
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
var51 = NULL;
var_res = var51;
} else {
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var54 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var52) on <var52:MClassDef> */
var57 = var52->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var52:MClassDef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var60 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var58) on <var58:MClassDef> */
var63 = var58->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var58:MClassDef> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var66 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var64) on <var64:MClassDef> */
var69 = var64->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var64:MClassDef> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
var70 = 1;
{
var71 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nit__model__MType__resolve_for]))(var_ret, var55, var61, var67, var70) /* resolve_for on <var_ret:nullable MType(MType)>*/;
}
var_ret = var71;
{
var72 = nit___nit__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var72;
}
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var77 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_ = var75;
if (var75){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var80 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var78) on <var78:AbstractCompiler(SeparateCompiler)> */
var83 = var78->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var78:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var81) on <var81:ModelBuilder> */
var86 = var81->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var81:ModelBuilder> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_inline_intern (var84) on <var84:ToolContext> */
var89 = var84->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <var84:ToolContext> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 26);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline opts#Option#value (var87) on <var87:OptionBool> */
var92 = var87->attrs[COLOR_opts__Option___value].val; /* _value on <var87:OptionBool> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
var93 = ((struct instance_standard__Bool*)var90)->value; /* autounbox from nullable Object to Bool */;
var94 = !var93;
var74 = var94;
} else {
var74 = var_;
}
var_95 = var74;
if (var74){
var73 = var_95;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var99 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var97) on <var97:AbstractCompiler(SeparateCompiler)> */
var102 = var97->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var97:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var100) on <var100:ModelBuilder> */
var105 = var100->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var100:ModelBuilder> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_some_methods (var103) on <var103:ToolContext> */
var108 = var103->attrs[COLOR_nit__separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <var103:ToolContext> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 37);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline opts#Option#value (var106) on <var106:OptionBool> */
var111 = var106->attrs[COLOR_opts__Option___value].val; /* _value on <var106:OptionBool> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
var112 = ((struct instance_standard__Bool*)var109)->value; /* autounbox from nullable Object to Bool */;
var_113 = var112;
if (var112){
{
var114 = nit__abstract_compiler___MMethodDef___can_inline(var_mmethoddef, self);
}
var96 = var114;
} else {
var96 = var_113;
}
var73 = var96;
}
if (var73){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var117 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var115) on <var115:AbstractCompiler(SeparateCompiler)> */
var120 = var115->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var115:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_121 = var118;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var_121) on <var_121:ModelBuilder> */
var124 = var_121->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var_121:ModelBuilder> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
var125 = 1;
{
{ /* Inline kernel#Int#+ (var122,var125) on <var122:Int> */
/* Covariant cast for argument 0 (i) <var125:Int> isa OTHER */
/* <var125:Int> isa OTHER */
var128 = 1; /* easy <var125:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var132 = var122 + var125;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline= (var_121,var126) on <var_121:ModelBuilder> */
var_121->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l = var126; /* _nb_invok_by_inline on <var_121:ModelBuilder> */
RET_LABEL133:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var136 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var134) on <var134:AbstractCompiler(SeparateCompiler)> */
var139 = var134->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var134:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var137) on <var137:ModelBuilder> */
var142 = var137->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var137:ModelBuilder> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var140) on <var140:ToolContext> */
var145 = var140->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var140:ToolContext> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 61);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline opts#Option#value (var143) on <var143:OptionBool> */
var148 = var143->attrs[COLOR_opts__Option___value].val; /* _value on <var143:OptionBool> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
var149 = ((struct instance_standard__Bool*)var146)->value; /* autounbox from nullable Object to Bool */;
if (var149){
if (varonce150) {
var151 = varonce150;
} else {
var152 = "count_invoke_by_inline++;";
var153 = 25;
var154 = standard___standard__NativeString___to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var151); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var155 = NEW_nit__StaticFrame(&type_nit__StaticFrame);
{
((void (*)(val* self, val* p0))(var155->class->vft[COLOR_nit__abstract_compiler__StaticFrame__visitor_61d]))(var155, self) /* visitor= on <var155:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var155->class->vft[COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d]))(var155, var_mmethoddef) /* mpropdef= on <var155:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var155->class->vft[COLOR_nit__abstract_compiler__StaticFrame__receiver_61d]))(var155, var_recvtype) /* receiver= on <var155:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var155->class->vft[COLOR_nit__abstract_compiler__StaticFrame__arguments_61d]))(var155, var_arguments) /* arguments= on <var155:StaticFrame>*/;
}
{
((void (*)(val* self))(var155->class->vft[COLOR_standard__kernel__Object__init]))(var155) /* init on <var155:StaticFrame>*/;
}
var_frame = var155;
if (varonce156) {
var157 = varonce156;
} else {
var158 = "RET_LABEL";
var159 = 9;
var160 = standard___standard__NativeString___to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
{
var161 = nit___nit__AbstractCompilerVisitor___get_name(self, var157);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var161) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val = var161; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL162:(void)0;
}
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var_res) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val = var_res; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL163:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var166 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
var_old_frame = var164;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL167:(void)0;
}
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = "{ /* Inline ";
var171 = 12;
var172 = standard___standard__NativeString___to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = " (";
var176 = 2;
var177 = standard___standard__NativeString___to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = ",";
var181 = 1;
var182 = standard___standard__NativeString___to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
{
var183 = standard__string___Collection___join(var_arguments, var179);
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = ") on ";
var187 = 5;
var188 = standard___standard__NativeString___to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
{
var189 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var190 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var189);
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = " */";
var194 = 3;
var195 = standard___standard__NativeString___to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var196 = array_instance Array[Object] */
var197 = 7;
var198 = NEW_standard__NativeArray(var197, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var198)->values[0] = (val*) var169;
((struct instance_standard__NativeArray*)var198)->values[1] = (val*) var_mmethoddef;
((struct instance_standard__NativeArray*)var198)->values[2] = (val*) var174;
((struct instance_standard__NativeArray*)var198)->values[3] = (val*) var183;
((struct instance_standard__NativeArray*)var198)->values[4] = (val*) var185;
((struct instance_standard__NativeArray*)var198)->values[5] = (val*) var190;
((struct instance_standard__NativeArray*)var198)->values[6] = (val*) var192;
{
((void (*)(val* self, val* p0, long p1))(var196->class->vft[COLOR_standard__array__Array__with_native]))(var196, var198, var197) /* with_native on <var196:Array[Object]>*/;
}
}
{
var199 = ((val* (*)(val* self))(var196->class->vft[COLOR_standard__string__Object__to_s]))(var196) /* to_s on <var196:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var199); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var200 = nit__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, self, var_arguments);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var203 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var201 = var203;
RET_LABEL202:(void)0;
}
}
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1251);
show_backtrace(1);
}
if (varonce204) {
var205 = varonce204;
} else {
var206 = ":(void)0;";
var207 = 9;
var208 = standard___standard__NativeString___to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
var209 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var209 = array_instance Array[Object] */
var210 = 2;
var211 = NEW_standard__NativeArray(var210, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var211)->values[0] = (val*) var201;
((struct instance_standard__NativeArray*)var211)->values[1] = (val*) var205;
{
((void (*)(val* self, val* p0, long p1))(var209->class->vft[COLOR_standard__array__Array__with_native]))(var209, var211, var210) /* with_native on <var209:Array[Object]>*/;
}
}
{
var212 = ((val* (*)(val* self))(var209->class->vft[COLOR_standard__string__Object__to_s]))(var209) /* to_s on <var209:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var212); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "}";
var216 = 1;
var217 = standard___standard__NativeString___to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var214); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL218:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var221 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var219) on <var219:AbstractCompiler(SeparateCompiler)> */
var224 = var219->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var219:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
var_225 = var222;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var_225) on <var_225:ModelBuilder> */
var228 = var_225->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var_225:ModelBuilder> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
var229 = 1;
{
{ /* Inline kernel#Int#+ (var226,var229) on <var226:Int> */
/* Covariant cast for argument 0 (i) <var229:Int> isa OTHER */
/* <var229:Int> isa OTHER */
var232 = 1; /* easy <var229:Int> isa OTHER*/
if (unlikely(!var232)) {
var_class_name235 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name235);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var236 = var226 + var229;
var230 = var236;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct= (var_225,var230) on <var_225:ModelBuilder> */
var_225->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l = var230; /* _nb_invok_by_direct on <var_225:ModelBuilder> */
RET_LABEL237:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var240 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var238) on <var238:AbstractCompiler(SeparateCompiler)> */
var243 = var238->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var238:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var243 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var241 = var243;
RET_LABEL242:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var241) on <var241:ModelBuilder> */
var246 = var241->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var241:ModelBuilder> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var244) on <var244:ToolContext> */
var249 = var244->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var244:ToolContext> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 61);
show_backtrace(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
{
{ /* Inline opts#Option#value (var247) on <var247:OptionBool> */
var252 = var247->attrs[COLOR_opts__Option___value].val; /* _value on <var247:OptionBool> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
var253 = ((struct instance_standard__Bool*)var250)->value; /* autounbox from nullable Object to Bool */;
if (var253){
if (varonce254) {
var255 = varonce254;
} else {
var256 = "count_invoke_by_direct++;";
var257 = 25;
var258 = standard___standard__NativeString___to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var255); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(self, var_mmethoddef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
var259 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(var_mmethoddef);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var259); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
var260 = NULL;
if (var_res == NULL) {
var261 = 1; /* is null */
} else {
var261 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var260) on <var_res:nullable RuntimeVariable> */
var_other = var260;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var266 = var_res == var_other;
var264 = var266;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
}
var262 = var264;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
var261 = var262;
}
if (var261){
{
var267 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(var_mmethoddef);
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "(";
var271 = 1;
var272 = standard___standard__NativeString___to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = ", ";
var276 = 2;
var277 = standard___standard__NativeString___to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
{
var278 = standard__string___Collection___join(var_arguments, var274);
}
if (varonce279) {
var280 = varonce279;
} else {
var281 = "); /* Direct call ";
var282 = 18;
var283 = standard___standard__NativeString___to_s_with_length(var281, var282);
var280 = var283;
varonce279 = var280;
}
if (varonce284) {
var285 = varonce284;
} else {
var286 = " on ";
var287 = 4;
var288 = standard___standard__NativeString___to_s_with_length(var286, var287);
var285 = var288;
varonce284 = var285;
}
{
var289 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var290 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var289);
}
if (varonce291) {
var292 = varonce291;
} else {
var293 = "*/";
var294 = 2;
var295 = standard___standard__NativeString___to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
var296 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var296 = array_instance Array[Object] */
var297 = 8;
var298 = NEW_standard__NativeArray(var297, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var298)->values[0] = (val*) var267;
((struct instance_standard__NativeArray*)var298)->values[1] = (val*) var269;
((struct instance_standard__NativeArray*)var298)->values[2] = (val*) var278;
((struct instance_standard__NativeArray*)var298)->values[3] = (val*) var280;
((struct instance_standard__NativeArray*)var298)->values[4] = (val*) var_mmethoddef;
((struct instance_standard__NativeArray*)var298)->values[5] = (val*) var285;
((struct instance_standard__NativeArray*)var298)->values[6] = (val*) var290;
((struct instance_standard__NativeArray*)var298)->values[7] = (val*) var292;
{
((void (*)(val* self, val* p0, long p1))(var296->class->vft[COLOR_standard__array__Array__with_native]))(var296, var298, var297) /* with_native on <var296:Array[Object]>*/;
}
}
{
var299 = ((val* (*)(val* self))(var296->class->vft[COLOR_standard__string__Object__to_s]))(var296) /* to_s on <var296:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var299); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var300 = NULL;
var = var300;
goto RET_LABEL;
} else {
if (varonce301) {
var302 = varonce301;
} else {
var303 = " = ";
var304 = 3;
var305 = standard___standard__NativeString___to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
{
var306 = nit___nit__MPropDef___nit__model_base__MEntity__c_name(var_mmethoddef);
}
if (varonce307) {
var308 = varonce307;
} else {
var309 = "(";
var310 = 1;
var311 = standard___standard__NativeString___to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
if (varonce312) {
var313 = varonce312;
} else {
var314 = ", ";
var315 = 2;
var316 = standard___standard__NativeString___to_s_with_length(var314, var315);
var313 = var316;
varonce312 = var313;
}
{
var317 = standard__string___Collection___join(var_arguments, var313);
}
if (varonce318) {
var319 = varonce318;
} else {
var320 = ");";
var321 = 2;
var322 = standard___standard__NativeString___to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
var323 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var323 = array_instance Array[Object] */
var324 = 6;
var325 = NEW_standard__NativeArray(var324, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var325)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var325)->values[1] = (val*) var302;
((struct instance_standard__NativeArray*)var325)->values[2] = (val*) var306;
((struct instance_standard__NativeArray*)var325)->values[3] = (val*) var308;
((struct instance_standard__NativeArray*)var325)->values[4] = (val*) var317;
((struct instance_standard__NativeArray*)var325)->values[5] = (val*) var319;
{
((void (*)(val* self, val* p0, long p1))(var323->class->vft[COLOR_standard__array__Array__with_native]))(var323, var325, var324) /* with_native on <var323:Array[Object]>*/;
}
}
{
var326 = ((val* (*)(val* self))(var323->class->vft[COLOR_standard__string__Object__to_s]))(var323) /* to_s on <var323:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var326); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#supercall for (self: SeparateCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
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
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var_main /* var main: MModule */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var26 /* : MModule */;
val* var28 /* : MModule */;
val* var30 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var31 /* : AbstractCompiler */;
val* var33 /* : AbstractCompiler */;
val* var35 /* : MProperty */;
val* var37 /* : MProperty */;
val* var38 /* : String */;
val* var39 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_arguments = p2;
{
var1 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val* (*)(val* self))(var2->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var2) /* ctype on <var2:MType>*/;
}
if (varonce) {
var6 = varonce;
} else {
var7 = "val*";
var8 = 4;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
{ /* Inline kernel#Object#!= (var5,var6) on <var5:String> */
var_other = var6;
{
var12 = ((short int (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:String>*/;
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var16 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var14) on <var14:AbstractCompiler(SeparateCompiler)> */
var19 = var14->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var14:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 474);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_main = var17;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule (var23) on <var23:AbstractCompiler(SeparateCompiler)> */
var28 = var23->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var23:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 478);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var20,var26) on <var20:AbstractCompiler(SeparateCompiler)> */
var20->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var26; /* _mainmodule on <var20:AbstractCompiler(SeparateCompiler)> */
RET_LABEL29:(void)0;
}
}
{
var30 = nit___nit__AbstractCompilerVisitor___monomorphic_super_send(self, var_m, var_recvtype, var_arguments);
}
var_res = var30;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var33 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (var31,var_main) on <var31:AbstractCompiler(SeparateCompiler)> */
var31->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var_main; /* _mainmodule on <var31:AbstractCompiler(SeparateCompiler)> */
RET_LABEL34:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var37 = var_m->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit__separate_compiler___MEntity___const_color(var_m);
}
{
var39 = nit___nit__SeparateCompilerVisitor___table_send(self, var35, var_arguments, var38);
}
var = var39;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#vararg_instance for (self: SeparateCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_varargs /* var varargs: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var4 /* : StaticFrame */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : Array[RuntimeVariable] */;
long var12 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: StaticFrame */;
val* var14 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_mpropdef = p0;
var_recv = p1;
var_varargs = p2;
var_elttype = p3;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old_frame = var1;
var4 = NEW_nit__StaticFrame(&type_nit__StaticFrame);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var7 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var12 = 1;
{
standard___standard__Array___with_capacity(var11, var12); /* Direct call array#Array#with_capacity on <var11:Array[RuntimeVariable]>*/
}
var_ = var11;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
((void (*)(val* self, val* p0))(var4->class->vft[COLOR_nit__abstract_compiler__StaticFrame__visitor_61d]))(var4, self) /* visitor= on <var4:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var4->class->vft[COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d]))(var4, var_mpropdef) /* mpropdef= on <var4:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var4->class->vft[COLOR_nit__abstract_compiler__StaticFrame__receiver_61d]))(var4, var8) /* receiver= on <var4:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var4->class->vft[COLOR_nit__abstract_compiler__StaticFrame__arguments_61d]))(var4, var_) /* arguments= on <var4:StaticFrame>*/;
}
{
((void (*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4) /* init on <var4:StaticFrame>*/;
}
var_frame = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL13:(void)0;
}
}
{
var14 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(self, var_varargs, var_elttype);
}
var_res = var14;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL15:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#isset_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
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
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
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
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
val* var128 /* : Array[Object] */;
long var129 /* : Int */;
val* var130 /* : NativeArray[Object] */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : FlatString */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : FlatString */;
val* var148 /* : Array[Object] */;
long var149 /* : Int */;
val* var150 /* : NativeArray[Object] */;
val* var151 /* : String */;
var_a = p0;
var_recv = p1;
{
nit___nit__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
var1 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nit___nit__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var5 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var3) on <var3:MPropDef(MAttributeDef)> */
var8 = var3->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var3:MPropDef(MAttributeDef)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1312);
show_backtrace(1);
}
var_mtype = var6;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var11 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var9) on <var9:MPropDef(MAttributeDef)> */
var14 = var9->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var9:MPropDef(MAttributeDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_intromclassdef = var12;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var17 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var20 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var23 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = 1;
{
var25 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var15, var18, var21, var24) /* resolve_for on <var_mtype:MType>*/;
}
var_mtype = var25;
/* <var_mtype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
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
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = " on ";
var34 = 4;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
var36 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = " */";
var40 = 3;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 6;
var44 = NEW_standard__NativeArray(var43, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var44)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var44)->values[1] = (val*) var27;
((struct instance_standard__NativeArray*)var44)->values[2] = (val*) var_a;
((struct instance_standard__NativeArray*)var44)->values[3] = (val*) var32;
((struct instance_standard__NativeArray*)var44)->values[4] = (val*) var36;
((struct instance_standard__NativeArray*)var44)->values[5] = (val*) var38;
{
((void (*)(val* self, val* p0, long p1))(var42->class->vft[COLOR_standard__array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
}
{
var45 = ((val* (*)(val* self))(var42->class->vft[COLOR_standard__string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var46 = nit__separate_compiler___MEntity___const_color(var_a);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var49 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var47) on <var47:AbstractCompiler(SeparateCompiler)> */
var52 = var47->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var47:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var50) on <var50:ModelBuilder> */
var55 = var50->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var50:ModelBuilder> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var53) on <var53:ToolContext> */
var58 = var53->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var53:ToolContext> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 28);
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
var62 = ((struct instance_standard__Bool*)var59)->value; /* autounbox from nullable Object to Bool */;
if (var62){
if (varonce63) {
var64 = varonce63;
} else {
var65 = " = ";
var66 = 3;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "->attrs[";
var71 = 8;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var73 = nit__separate_compiler___MEntity___const_color(var_a);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "] != NULL; /* ";
var77 = 14;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = " on ";
var82 = 4;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
var84 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "*/";
var88 = 2;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 10;
var92 = NEW_standard__NativeArray(var91, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var92)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var92)->values[1] = (val*) var64;
((struct instance_standard__NativeArray*)var92)->values[2] = (val*) var_recv;
((struct instance_standard__NativeArray*)var92)->values[3] = (val*) var69;
((struct instance_standard__NativeArray*)var92)->values[4] = (val*) var73;
((struct instance_standard__NativeArray*)var92)->values[5] = (val*) var75;
((struct instance_standard__NativeArray*)var92)->values[6] = (val*) var_a;
((struct instance_standard__NativeArray*)var92)->values[7] = (val*) var80;
((struct instance_standard__NativeArray*)var92)->values[8] = (val*) var84;
((struct instance_standard__NativeArray*)var92)->values[9] = (val*) var86;
{
((void (*)(val* self, val* p0, long p1))(var90->class->vft[COLOR_standard__array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val* self))(var90->class->vft[COLOR_standard__string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var93); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
var94 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = "val*";
var98 = 4;
var99 = standard___standard__NativeString___to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
var100 = ((short int (*)(val* self, val* p0))(var94->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var94, var96) /* == on <var94:String>*/;
}
if (var100){
if (varonce101) {
var102 = varonce101;
} else {
var103 = " = ";
var104 = 3;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "->attrs[";
var109 = 8;
var110 = standard___standard__NativeString___to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
{
var111 = nit__separate_compiler___MEntity___const_color(var_a);
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = "].val != NULL; /* ";
var115 = 18;
var116 = standard___standard__NativeString___to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = " on ";
var120 = 4;
var121 = standard___standard__NativeString___to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
{
var122 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = " */";
var126 = 3;
var127 = standard___standard__NativeString___to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
var128 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var128 = array_instance Array[Object] */
var129 = 10;
var130 = NEW_standard__NativeArray(var129, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var130)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var130)->values[1] = (val*) var102;
((struct instance_standard__NativeArray*)var130)->values[2] = (val*) var_recv;
((struct instance_standard__NativeArray*)var130)->values[3] = (val*) var107;
((struct instance_standard__NativeArray*)var130)->values[4] = (val*) var111;
((struct instance_standard__NativeArray*)var130)->values[5] = (val*) var113;
((struct instance_standard__NativeArray*)var130)->values[6] = (val*) var_a;
((struct instance_standard__NativeArray*)var130)->values[7] = (val*) var118;
((struct instance_standard__NativeArray*)var130)->values[8] = (val*) var122;
((struct instance_standard__NativeArray*)var130)->values[9] = (val*) var124;
{
((void (*)(val* self, val* p0, long p1))(var128->class->vft[COLOR_standard__array__Array__with_native]))(var128, var130, var129) /* with_native on <var128:Array[Object]>*/;
}
}
{
var131 = ((val* (*)(val* self))(var128->class->vft[COLOR_standard__string__Object__to_s]))(var128) /* to_s on <var128:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var131); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce132) {
var133 = varonce132;
} else {
var134 = " = 1; /* NOT YET IMPLEMENTED: isset of primitives: ";
var135 = 51;
var136 = standard___standard__NativeString___to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = " on ";
var140 = 4;
var141 = standard___standard__NativeString___to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
{
var142 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = " */";
var146 = 3;
var147 = standard___standard__NativeString___to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 6;
var150 = NEW_standard__NativeArray(var149, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var150)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var150)->values[1] = (val*) var133;
((struct instance_standard__NativeArray*)var150)->values[2] = (val*) var_a;
((struct instance_standard__NativeArray*)var150)->values[3] = (val*) var138;
((struct instance_standard__NativeArray*)var150)->values[4] = (val*) var142;
((struct instance_standard__NativeArray*)var150)->values[5] = (val*) var144;
{
((void (*)(val* self, val* p0, long p1))(var148->class->vft[COLOR_standard__array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
}
}
{
var151 = ((val* (*)(val* self))(var148->class->vft[COLOR_standard__string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var151); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#read_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
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
short int var_248 /* var : Bool */;
short int var249 /* : Bool */;
int cltype250;
int idtype251;
short int var252 /* : Bool */;
short int var_253 /* var : Bool */;
val* var254 /* : AbstractCompiler */;
val* var256 /* : AbstractCompiler */;
val* var257 /* : ModelBuilder */;
val* var259 /* : ModelBuilder */;
val* var260 /* : ToolContext */;
val* var262 /* : ToolContext */;
val* var263 /* : OptionBool */;
val* var265 /* : OptionBool */;
val* var266 /* : nullable Object */;
val* var268 /* : nullable Object */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
long var274 /* : Int */;
val* var275 /* : FlatString */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
val* var281 /* : Array[Object] */;
long var282 /* : Int */;
val* var283 /* : NativeArray[Object] */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
long var288 /* : Int */;
val* var289 /* : FlatString */;
val* var290 /* : String */;
val* var292 /* : String */;
val* var293 /* : Array[Object] */;
long var294 /* : Int */;
val* var295 /* : NativeArray[Object] */;
val* var296 /* : String */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
long var300 /* : Int */;
val* var301 /* : FlatString */;
val* var302 /* : AbstractCompiler */;
val* var304 /* : AbstractCompiler */;
val* var305 /* : ModelBuilder */;
val* var307 /* : ModelBuilder */;
val* var308 /* : ToolContext */;
val* var310 /* : ToolContext */;
val* var311 /* : OptionBool */;
val* var313 /* : OptionBool */;
val* var314 /* : nullable Object */;
val* var316 /* : nullable Object */;
short int var317 /* : Bool */;
val* var318 /* : AbstractCompiler */;
val* var320 /* : AbstractCompiler */;
val* var_321 /* var : SeparateCompiler */;
long var322 /* : Int */;
long var324 /* : Int */;
long var325 /* : Int */;
long var326 /* : Int */;
short int var328 /* : Bool */;
int cltype329;
int idtype330;
const char* var_class_name331;
long var332 /* : Int */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
var_a = p0;
var_recv = p1;
{
nit___nit__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var3 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var1) on <var1:MPropDef(MAttributeDef)> */
var6 = var1->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var1:MPropDef(MAttributeDef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1340);
show_backtrace(1);
}
var_ret = var4;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var9 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var7) on <var7:MPropDef(MAttributeDef)> */
var12 = var7->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var7:MPropDef(MAttributeDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_intromclassdef = var10;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var15 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var18 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var21 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = 1;
{
var23 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nit__model__MType__resolve_for]))(var_ret, var13, var16, var19, var22) /* resolve_for on <var_ret:MType>*/;
}
var_ret = var23;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var26 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var24) on <var24:AbstractCompiler(SeparateCompiler)> */
var29 = var24->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var24:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var27) on <var27:ModelBuilder> */
var32 = var27->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var27:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var30) on <var30:ToolContext> */
var35 = var30->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var30:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 63);
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
var39 = ((struct instance_standard__Bool*)var36)->value; /* autounbox from nullable Object to Bool */;
if (var39){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var42 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_ = var40;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (var_) on <var_:SeparateCompiler> */
var45 = var_->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <var_:SeparateCompiler> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var_->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l = var47; /* _attr_read_count on <var_:SeparateCompiler> */
RET_LABEL51:(void)0;
}
}
if (varonce) {
var52 = varonce;
} else {
var53 = "count_attr_reads++;";
var54 = 19;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce = var52;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var56 = nit__separate_compiler___MEntity___const_color(var_a);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var56); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var59 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var57) on <var57:AbstractCompiler(SeparateCompiler)> */
var62 = var57->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var57:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var60) on <var60:ModelBuilder> */
var65 = var60->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var60:ModelBuilder> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var63) on <var63:ToolContext> */
var68 = var63->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var63:ToolContext> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 28);
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
var72 = ((struct instance_standard__Bool*)var69)->value; /* autounbox from nullable Object to Bool */;
if (var72){
{
var73 = nit___nit__AbstractCompilerVisitor___object_type(self);
}
{
var74 = nit___nit__MType___as_nullable(var73);
}
var_cret = var74;
{
var75 = nit___nit__AbstractCompilerVisitor___new_var(self, var_cret);
}
var_res = var75;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (var_res,var_ret) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val = var_ret; /* _mcasttype on <var_res:RuntimeVariable> */
RET_LABEL76:(void)0;
}
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = " = ";
var80 = 3;
var81 = standard___standard__NativeString___to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "->attrs[";
var85 = 8;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
var87 = nit__separate_compiler___MEntity___const_color(var_a);
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "]; /* ";
var91 = 6;
var92 = standard___standard__NativeString___to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = " on ";
var96 = 4;
var97 = standard___standard__NativeString___to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
var98 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = " */";
var102 = 3;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 10;
var106 = NEW_standard__NativeArray(var105, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var106)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var106)->values[1] = (val*) var78;
((struct instance_standard__NativeArray*)var106)->values[2] = (val*) var_recv;
((struct instance_standard__NativeArray*)var106)->values[3] = (val*) var83;
((struct instance_standard__NativeArray*)var106)->values[4] = (val*) var87;
((struct instance_standard__NativeArray*)var106)->values[5] = (val*) var89;
((struct instance_standard__NativeArray*)var106)->values[6] = (val*) var_a;
((struct instance_standard__NativeArray*)var106)->values[7] = (val*) var94;
((struct instance_standard__NativeArray*)var106)->values[8] = (val*) var98;
((struct instance_standard__NativeArray*)var106)->values[9] = (val*) var100;
{
((void (*)(val* self, val* p0, long p1))(var104->class->vft[COLOR_standard__array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val* self))(var104->class->vft[COLOR_standard__string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
/* <var_ret:MType> isa MNullableType */
cltype110 = type_nit__MNullableType.color;
idtype111 = type_nit__MNullableType.id;
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
var116 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var114) on <var114:AbstractCompiler(SeparateCompiler)> */
var119 = var114->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var114:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var117) on <var117:ModelBuilder> */
var122 = var117->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var117:ModelBuilder> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var120) on <var120:ToolContext> */
var125 = var120->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var120:ToolContext> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 49);
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
var129 = ((struct instance_standard__Bool*)var126)->value; /* autounbox from nullable Object to Bool */;
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
var135 = standard___standard__NativeString___to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " == NULL)) {";
var139 = 12;
var140 = standard___standard__NativeString___to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 3;
var143 = NEW_standard__NativeArray(var142, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var143)->values[0] = (val*) var132;
((struct instance_standard__NativeArray*)var143)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var143)->values[2] = (val*) var137;
{
((void (*)(val* self, val* p0, long p1))(var141->class->vft[COLOR_standard__array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
}
}
{
var144 = ((val* (*)(val* self))(var141->class->vft[COLOR_standard__string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var144); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "Uninitialized attribute ";
var148 = 24;
var149 = standard___standard__NativeString___to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var152 = var_a->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
var153 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var153 = array_instance Array[Object] */
var154 = 2;
var155 = NEW_standard__NativeArray(var154, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var155)->values[0] = (val*) var146;
((struct instance_standard__NativeArray*)var155)->values[1] = (val*) var150;
{
((void (*)(val* self, val* p0, long p1))(var153->class->vft[COLOR_standard__array__Array__with_native]))(var153, var155, var154) /* with_native on <var153:Array[Object]>*/;
}
}
{
var156 = ((val* (*)(val* self))(var153->class->vft[COLOR_standard__string__Object__to_s]))(var153) /* to_s on <var153:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var156); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = "}";
var160 = 1;
var161 = standard___standard__NativeString___to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var158); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var164 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var162) on <var162:AbstractCompiler(SeparateCompiler)> */
var167 = var162->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var162:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var165) on <var165:ModelBuilder> */
var170 = var165->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var165:ModelBuilder> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var168) on <var168:ToolContext> */
var173 = var168->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var168:ToolContext> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 63);
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
var177 = ((struct instance_standard__Bool*)var174)->value; /* autounbox from nullable Object to Bool */;
if (var177){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var180 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
var_181 = var178;
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (var_181) on <var_181:SeparateCompiler> */
var184 = var_181->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_181:SeparateCompiler> */
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
var_class_name191 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
var_181->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = var186; /* _isset_checks_count on <var_181:SeparateCompiler> */
RET_LABEL193:(void)0;
}
}
if (varonce194) {
var195 = varonce194;
} else {
var196 = "count_isset_checks++;";
var197 = 21;
var198 = standard___standard__NativeString___to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var195); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
{
var199 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_res, var_ret);
}
var = var199;
goto RET_LABEL;
} else {
{
var200 = nit___nit__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res201 = var200;
if (varonce202) {
var203 = varonce202;
} else {
var204 = " = ";
var205 = 3;
var206 = standard___standard__NativeString___to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
if (varonce207) {
var208 = varonce207;
} else {
var209 = "->attrs[";
var210 = 8;
var211 = standard___standard__NativeString___to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
{
var212 = nit__separate_compiler___MEntity___const_color(var_a);
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "].";
var216 = 2;
var217 = standard___standard__NativeString___to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
{
var218 = ((val* (*)(val* self))(var_ret->class->vft[COLOR_nit__abstract_compiler__MType__ctypename]))(var_ret) /* ctypename on <var_ret:MType>*/;
}
if (varonce219) {
var220 = varonce219;
} else {
var221 = "; /* ";
var222 = 5;
var223 = standard___standard__NativeString___to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
if (varonce224) {
var225 = varonce224;
} else {
var226 = " on ";
var227 = 4;
var228 = standard___standard__NativeString___to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
{
var229 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce230) {
var231 = varonce230;
} else {
var232 = " */";
var233 = 3;
var234 = standard___standard__NativeString___to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
var235 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var235 = array_instance Array[Object] */
var236 = 12;
var237 = NEW_standard__NativeArray(var236, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var237)->values[0] = (val*) var_res201;
((struct instance_standard__NativeArray*)var237)->values[1] = (val*) var203;
((struct instance_standard__NativeArray*)var237)->values[2] = (val*) var_recv;
((struct instance_standard__NativeArray*)var237)->values[3] = (val*) var208;
((struct instance_standard__NativeArray*)var237)->values[4] = (val*) var212;
((struct instance_standard__NativeArray*)var237)->values[5] = (val*) var214;
((struct instance_standard__NativeArray*)var237)->values[6] = (val*) var218;
((struct instance_standard__NativeArray*)var237)->values[7] = (val*) var220;
((struct instance_standard__NativeArray*)var237)->values[8] = (val*) var_a;
((struct instance_standard__NativeArray*)var237)->values[9] = (val*) var225;
((struct instance_standard__NativeArray*)var237)->values[10] = (val*) var229;
((struct instance_standard__NativeArray*)var237)->values[11] = (val*) var231;
{
((void (*)(val* self, val* p0, long p1))(var235->class->vft[COLOR_standard__array__Array__with_native]))(var235, var237, var236) /* with_native on <var235:Array[Object]>*/;
}
}
{
var238 = ((val* (*)(val* self))(var235->class->vft[COLOR_standard__string__Object__to_s]))(var235) /* to_s on <var235:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var241 = ((val* (*)(val* self))(var_ret->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:MType>*/;
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = "val*";
var245 = 4;
var246 = standard___standard__NativeString___to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
{
var247 = ((short int (*)(val* self, val* p0))(var241->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var241, var243) /* == on <var241:String>*/;
}
var_248 = var247;
if (var247){
/* <var_ret:MType> isa MNullableType */
cltype250 = type_nit__MNullableType.color;
idtype251 = type_nit__MNullableType.id;
if(cltype250 >= var_ret->type->table_size) {
var249 = 0;
} else {
var249 = var_ret->type->type_table[cltype250] == idtype251;
}
var252 = !var249;
var240 = var252;
} else {
var240 = var_248;
}
var_253 = var240;
if (var240){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var256 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var254) on <var254:AbstractCompiler(SeparateCompiler)> */
var259 = var254->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var254:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var257) on <var257:ModelBuilder> */
var262 = var257->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var257:ModelBuilder> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var260) on <var260:ToolContext> */
var265 = var260->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var260:ToolContext> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 49);
show_backtrace(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
{ /* Inline opts#Option#value (var263) on <var263:OptionBool> */
var268 = var263->attrs[COLOR_opts__Option___value].val; /* _value on <var263:OptionBool> */
var266 = var268;
RET_LABEL267:(void)0;
}
}
var269 = ((struct instance_standard__Bool*)var266)->value; /* autounbox from nullable Object to Bool */;
var270 = !var269;
var239 = var270;
} else {
var239 = var_253;
}
if (var239){
if (varonce271) {
var272 = varonce271;
} else {
var273 = "if (unlikely(";
var274 = 13;
var275 = standard___standard__NativeString___to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
if (varonce276) {
var277 = varonce276;
} else {
var278 = " == NULL)) {";
var279 = 12;
var280 = standard___standard__NativeString___to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
var281 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var281 = array_instance Array[Object] */
var282 = 3;
var283 = NEW_standard__NativeArray(var282, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var283)->values[0] = (val*) var272;
((struct instance_standard__NativeArray*)var283)->values[1] = (val*) var_res201;
((struct instance_standard__NativeArray*)var283)->values[2] = (val*) var277;
{
((void (*)(val* self, val* p0, long p1))(var281->class->vft[COLOR_standard__array__Array__with_native]))(var281, var283, var282) /* with_native on <var281:Array[Object]>*/;
}
}
{
var284 = ((val* (*)(val* self))(var281->class->vft[COLOR_standard__string__Object__to_s]))(var281) /* to_s on <var281:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var284); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce285) {
var286 = varonce285;
} else {
var287 = "Uninitialized attribute ";
var288 = 24;
var289 = standard___standard__NativeString___to_s_with_length(var287, var288);
var286 = var289;
varonce285 = var286;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var292 = var_a->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
var293 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var293 = array_instance Array[Object] */
var294 = 2;
var295 = NEW_standard__NativeArray(var294, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var295)->values[0] = (val*) var286;
((struct instance_standard__NativeArray*)var295)->values[1] = (val*) var290;
{
((void (*)(val* self, val* p0, long p1))(var293->class->vft[COLOR_standard__array__Array__with_native]))(var293, var295, var294) /* with_native on <var293:Array[Object]>*/;
}
}
{
var296 = ((val* (*)(val* self))(var293->class->vft[COLOR_standard__string__Object__to_s]))(var293) /* to_s on <var293:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var296); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce297) {
var298 = varonce297;
} else {
var299 = "}";
var300 = 1;
var301 = standard___standard__NativeString___to_s_with_length(var299, var300);
var298 = var301;
varonce297 = var298;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var298); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var304 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var304 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var302 = var304;
RET_LABEL303:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var302) on <var302:AbstractCompiler(SeparateCompiler)> */
var307 = var302->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var302:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var307 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var305) on <var305:ModelBuilder> */
var310 = var305->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var305:ModelBuilder> */
if (unlikely(var310 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var308) on <var308:ToolContext> */
var313 = var308->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var308:ToolContext> */
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 63);
show_backtrace(1);
}
var311 = var313;
RET_LABEL312:(void)0;
}
}
{
{ /* Inline opts#Option#value (var311) on <var311:OptionBool> */
var316 = var311->attrs[COLOR_opts__Option___value].val; /* _value on <var311:OptionBool> */
var314 = var316;
RET_LABEL315:(void)0;
}
}
var317 = ((struct instance_standard__Bool*)var314)->value; /* autounbox from nullable Object to Bool */;
if (var317){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var320 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
var_321 = var318;
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (var_321) on <var_321:SeparateCompiler> */
var324 = var_321->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_321:SeparateCompiler> */
var322 = var324;
RET_LABEL323:(void)0;
}
}
var325 = 1;
{
{ /* Inline kernel#Int#+ (var322,var325) on <var322:Int> */
/* Covariant cast for argument 0 (i) <var325:Int> isa OTHER */
/* <var325:Int> isa OTHER */
var328 = 1; /* easy <var325:Int> isa OTHER*/
if (unlikely(!var328)) {
var_class_name331 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name331);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var332 = var322 + var325;
var326 = var332;
goto RET_LABEL327;
RET_LABEL327:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count= (var_321,var326) on <var_321:SeparateCompiler> */
var_321->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = var326; /* _isset_checks_count on <var_321:SeparateCompiler> */
RET_LABEL333:(void)0;
}
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = "count_isset_checks++;";
var337 = 21;
var338 = standard___standard__NativeString___to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var335); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
/* method separate_compiler#SeparateCompilerVisitor#write_attribute for (self: SeparateCompilerVisitor, MAttribute, RuntimeVariable, RuntimeVariable) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
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
val* var_other /* var other: nullable Object */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
int cltype;
int idtype;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : MClassType */;
val* var122 /* : MType */;
val* var123 /* : RuntimeVariable */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : FlatString */;
val* var139 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
val* var145 /* : Array[Object] */;
long var146 /* : Int */;
val* var147 /* : NativeArray[Object] */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : FlatString */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : FlatString */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : Array[Object] */;
long var176 /* : Int */;
val* var177 /* : NativeArray[Object] */;
val* var178 /* : String */;
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
val* var206 /* : String */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : FlatString */;
val* var212 /* : Array[Object] */;
long var213 /* : Int */;
val* var214 /* : NativeArray[Object] */;
val* var215 /* : String */;
var_a = p0;
var_recv = p1;
var_value = p2;
{
nit___nit__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var2 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var) on <var:MPropDef(MAttributeDef)> */
var5 = var->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var:MPropDef(MAttributeDef)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1397);
show_backtrace(1);
}
var_mtype = var3;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var8 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var6) on <var6:MPropDef(MAttributeDef)> */
var11 = var6->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var6:MPropDef(MAttributeDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_intromclassdef = var9;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var14 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var17 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var20 = var_intromclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 1;
{
var22 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var12, var15, var18, var21) /* resolve_for on <var_mtype:MType>*/;
}
var_mtype = var22;
{
var23 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var_mtype);
}
var_value = var23;
{
var24 = nit__separate_compiler___MEntity___const_color(var_a);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var27 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var25) on <var25:AbstractCompiler(SeparateCompiler)> */
var30 = var25->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var25:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var28) on <var28:ModelBuilder> */
var33 = var28->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var28:ModelBuilder> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var31) on <var31:ToolContext> */
var36 = var31->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var31:ToolContext> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 28);
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
var40 = ((struct instance_standard__Bool*)var37)->value; /* autounbox from nullable Object to Bool */;
if (var40){
if (varonce) {
var41 = varonce;
} else {
var42 = "->attrs[";
var43 = 8;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce = var41;
}
{
var45 = nit__separate_compiler___MEntity___const_color(var_a);
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "]";
var49 = 1;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 4;
var53 = NEW_standard__NativeArray(var52, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var53)->values[0] = (val*) var_recv;
((struct instance_standard__NativeArray*)var53)->values[1] = (val*) var41;
((struct instance_standard__NativeArray*)var53)->values[2] = (val*) var45;
((struct instance_standard__NativeArray*)var53)->values[3] = (val*) var47;
{
((void (*)(val* self, val* p0, long p1))(var51->class->vft[COLOR_standard__array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val* self))(var51->class->vft[COLOR_standard__string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
var_attr = var54;
{
var55 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "val*";
var59 = 4;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
{ /* Inline kernel#Object#!= (var55,var57) on <var55:String> */
var_other = var57;
{
var63 = ((short int (*)(val* self, val* p0))(var55->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var55, var_other) /* == on <var55:String>*/;
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var65 = 0;
} else {
var65 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1408);
show_backtrace(1);
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "if (";
var69 = 4;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = " != NULL) {";
var74 = 11;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_standard__NativeArray(var77, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var78)->values[0] = (val*) var67;
((struct instance_standard__NativeArray*)var78)->values[1] = (val*) var_attr;
((struct instance_standard__NativeArray*)var78)->values[2] = (val*) var72;
{
((void (*)(val* self, val* p0, long p1))(var76->class->vft[COLOR_standard__array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val* self))(var76->class->vft[COLOR_standard__string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "((struct instance_";
var83 = 18;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
var85 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MType(MClassType)>*/;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "*)";
var89 = 2;
var90 = standard___standard__NativeString___to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = ")->value = ";
var94 = 11;
var95 = standard___standard__NativeString___to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "; /* ";
var99 = 5;
var100 = standard___standard__NativeString___to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = " on ";
var104 = 4;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = " */";
var110 = 3;
var111 = standard___standard__NativeString___to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 11;
var114 = NEW_standard__NativeArray(var113, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var114)->values[0] = (val*) var81;
((struct instance_standard__NativeArray*)var114)->values[1] = (val*) var85;
((struct instance_standard__NativeArray*)var114)->values[2] = (val*) var87;
((struct instance_standard__NativeArray*)var114)->values[3] = (val*) var_attr;
((struct instance_standard__NativeArray*)var114)->values[4] = (val*) var92;
((struct instance_standard__NativeArray*)var114)->values[5] = (val*) var_value;
((struct instance_standard__NativeArray*)var114)->values[6] = (val*) var97;
((struct instance_standard__NativeArray*)var114)->values[7] = (val*) var_a;
((struct instance_standard__NativeArray*)var114)->values[8] = (val*) var102;
((struct instance_standard__NativeArray*)var114)->values[9] = (val*) var106;
((struct instance_standard__NativeArray*)var114)->values[10] = (val*) var108;
{
((void (*)(val* self, val* p0, long p1))(var112->class->vft[COLOR_standard__array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val* self))(var112->class->vft[COLOR_standard__string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = "} else {";
var119 = 8;
var120 = standard___standard__NativeString___to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var117); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var121 = nit___nit__AbstractCompilerVisitor___object_type(self);
}
{
var122 = nit___nit__MType___as_nullable(var121);
}
{
var123 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var122);
}
var_value = var123;
if (varonce124) {
var125 = varonce124;
} else {
var126 = " = ";
var127 = 3;
var128 = standard___standard__NativeString___to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "; /* ";
var132 = 5;
var133 = standard___standard__NativeString___to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
if (varonce134) {
var135 = varonce134;
} else {
var136 = " on ";
var137 = 4;
var138 = standard___standard__NativeString___to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
{
var139 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = " */";
var143 = 3;
var144 = standard___standard__NativeString___to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
var145 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var145 = array_instance Array[Object] */
var146 = 8;
var147 = NEW_standard__NativeArray(var146, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var147)->values[0] = (val*) var_attr;
((struct instance_standard__NativeArray*)var147)->values[1] = (val*) var125;
((struct instance_standard__NativeArray*)var147)->values[2] = (val*) var_value;
((struct instance_standard__NativeArray*)var147)->values[3] = (val*) var130;
((struct instance_standard__NativeArray*)var147)->values[4] = (val*) var_a;
((struct instance_standard__NativeArray*)var147)->values[5] = (val*) var135;
((struct instance_standard__NativeArray*)var147)->values[6] = (val*) var139;
((struct instance_standard__NativeArray*)var147)->values[7] = (val*) var141;
{
((void (*)(val* self, val* p0, long p1))(var145->class->vft[COLOR_standard__array__Array__with_native]))(var145, var147, var146) /* with_native on <var145:Array[Object]>*/;
}
}
{
var148 = ((val* (*)(val* self))(var145->class->vft[COLOR_standard__string__Object__to_s]))(var145) /* to_s on <var145:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = "}";
var152 = 1;
var153 = standard___standard__NativeString___to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var150); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce154) {
var155 = varonce154;
} else {
var156 = " = ";
var157 = 3;
var158 = standard___standard__NativeString___to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = "; /* ";
var162 = 5;
var163 = standard___standard__NativeString___to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
if (varonce164) {
var165 = varonce164;
} else {
var166 = " on ";
var167 = 4;
var168 = standard___standard__NativeString___to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
{
var169 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = " */";
var173 = 3;
var174 = standard___standard__NativeString___to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
var175 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var175 = array_instance Array[Object] */
var176 = 8;
var177 = NEW_standard__NativeArray(var176, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var177)->values[0] = (val*) var_attr;
((struct instance_standard__NativeArray*)var177)->values[1] = (val*) var155;
((struct instance_standard__NativeArray*)var177)->values[2] = (val*) var_value;
((struct instance_standard__NativeArray*)var177)->values[3] = (val*) var160;
((struct instance_standard__NativeArray*)var177)->values[4] = (val*) var_a;
((struct instance_standard__NativeArray*)var177)->values[5] = (val*) var165;
((struct instance_standard__NativeArray*)var177)->values[6] = (val*) var169;
((struct instance_standard__NativeArray*)var177)->values[7] = (val*) var171;
{
((void (*)(val* self, val* p0, long p1))(var175->class->vft[COLOR_standard__array__Array__with_native]))(var175, var177, var176) /* with_native on <var175:Array[Object]>*/;
}
}
{
var178 = ((val* (*)(val* self))(var175->class->vft[COLOR_standard__string__Object__to_s]))(var175) /* to_s on <var175:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var178); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
} else {
if (varonce179) {
var180 = varonce179;
} else {
var181 = "->attrs[";
var182 = 8;
var183 = standard___standard__NativeString___to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
{
var184 = nit__separate_compiler___MEntity___const_color(var_a);
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = "].";
var188 = 2;
var189 = standard___standard__NativeString___to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
{
var190 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctypename]))(var_mtype) /* ctypename on <var_mtype:MType>*/;
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = " = ";
var194 = 3;
var195 = standard___standard__NativeString___to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
if (varonce196) {
var197 = varonce196;
} else {
var198 = "; /* ";
var199 = 5;
var200 = standard___standard__NativeString___to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
if (varonce201) {
var202 = varonce201;
} else {
var203 = " on ";
var204 = 4;
var205 = standard___standard__NativeString___to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
{
var206 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
if (varonce207) {
var208 = varonce207;
} else {
var209 = " */";
var210 = 3;
var211 = standard___standard__NativeString___to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
var212 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var212 = array_instance Array[Object] */
var213 = 12;
var214 = NEW_standard__NativeArray(var213, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var214)->values[0] = (val*) var_recv;
((struct instance_standard__NativeArray*)var214)->values[1] = (val*) var180;
((struct instance_standard__NativeArray*)var214)->values[2] = (val*) var184;
((struct instance_standard__NativeArray*)var214)->values[3] = (val*) var186;
((struct instance_standard__NativeArray*)var214)->values[4] = (val*) var190;
((struct instance_standard__NativeArray*)var214)->values[5] = (val*) var192;
((struct instance_standard__NativeArray*)var214)->values[6] = (val*) var_value;
((struct instance_standard__NativeArray*)var214)->values[7] = (val*) var197;
((struct instance_standard__NativeArray*)var214)->values[8] = (val*) var_a;
((struct instance_standard__NativeArray*)var214)->values[9] = (val*) var202;
((struct instance_standard__NativeArray*)var214)->values[10] = (val*) var206;
((struct instance_standard__NativeArray*)var214)->values[11] = (val*) var208;
{
((void (*)(val* self, val* p0, long p1))(var212->class->vft[COLOR_standard__array__Array__with_native]))(var212, var214, var213) /* with_native on <var212:Array[Object]>*/;
}
}
{
var215 = ((val* (*)(val* self))(var212->class->vft[COLOR_standard__string__Object__to_s]))(var212) /* to_s on <var212:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var215); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_live_open_type for (self: SeparateCompilerVisitor, MType) */
void nit___nit__SeparateCompilerVisitor___hardening_live_open_type(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler(SeparateCompiler)> */
var5 = var->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 45);
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
var15 = ((struct instance_standard__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
var16 = !var15;
if (var16){
goto RET_LABEL;
} else {
}
{
var17 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var17); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
var18 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
var_col = var18;
if (varonce) {
var19 = varonce;
} else {
var20 = "if(";
var21 = 3;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = " == -1) {";
var26 = 9;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_standard__NativeArray(var29, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var30)->values[0] = (val*) var19;
((struct instance_standard__NativeArray*)var30)->values[1] = (val*) var_col;
((struct instance_standard__NativeArray*)var30)->values[2] = (val*) var24;
{
((void (*)(val* self, val* p0, long p1))(var28->class->vft[COLOR_standard__array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val* self))(var28->class->vft[COLOR_standard__string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "PRINT_ERROR(\"Resolution of a dead open type: %s\\n\", \"";
var35 = 53;
var36 = standard___standard__NativeString___to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
var37 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
}
{
var38 = standard___standard__Text___escape_to_c(var37);
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "\");";
var42 = 3;
var43 = standard___standard__NativeString___to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_standard__NativeArray(var45, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var46)->values[0] = (val*) var33;
((struct instance_standard__NativeArray*)var46)->values[1] = (val*) var38;
((struct instance_standard__NativeArray*)var46)->values[2] = (val*) var40;
{
((void (*)(val* self, val* p0, long p1))(var44->class->vft[COLOR_standard__array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
}
{
var47 = ((val* (*)(val* self))(var44->class->vft[COLOR_standard__string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var47); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "open type dead";
var51 = 14;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "}";
var56 = 1;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#hardening_cast_type for (self: SeparateCompilerVisitor, String) */
void nit___nit__SeparateCompilerVisitor___hardening_cast_type(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler(SeparateCompiler)> */
var5 = var->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 45);
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
var15 = ((struct instance_standard__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
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
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " == NULL) {";
var24 = 11;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_standard__NativeArray(var27, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var28)->values[0] = (val*) var17;
((struct instance_standard__NativeArray*)var28)->values[1] = (val*) var_t;
((struct instance_standard__NativeArray*)var28)->values[2] = (val*) var22;
{
((void (*)(val* self, val* p0, long p1))(var26->class->vft[COLOR_standard__array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val* self))(var26->class->vft[COLOR_standard__string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "cast type null";
var33 = 14;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "}";
var38 = 1;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "if(";
var43 = 3;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "->id == -1 || ";
var48 = 14;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "->color == -1) {";
var53 = 16;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 5;
var57 = NEW_standard__NativeArray(var56, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var57)->values[0] = (val*) var41;
((struct instance_standard__NativeArray*)var57)->values[1] = (val*) var_t;
((struct instance_standard__NativeArray*)var57)->values[2] = (val*) var46;
((struct instance_standard__NativeArray*)var57)->values[3] = (val*) var_t;
((struct instance_standard__NativeArray*)var57)->values[4] = (val*) var51;
{
((void (*)(val* self, val* p0, long p1))(var55->class->vft[COLOR_standard__array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var58 = ((val* (*)(val* self))(var55->class->vft[COLOR_standard__string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var58); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "PRINT_ERROR(\"Try to cast on a dead cast type: %s\\n\", ";
var62 = 53;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "->name);";
var67 = 8;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_standard__NativeArray(var70, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_standard__NativeArray*)var71)->values[1] = (val*) var_t;
((struct instance_standard__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_standard__array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val* self))(var69->class->vft[COLOR_standard__string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "cast type dead";
var76 = 14;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var74); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "}";
var81 = 1;
var82 = standard___standard__NativeString___to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#init_instance for (self: SeparateCompilerVisitor, MClassType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
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
val* var21 /* : nullable StaticFrame */;
val* var23 /* : nullable StaticFrame */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : nullable StaticFrame */;
val* var32 /* : nullable StaticFrame */;
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var7 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__MClass___nit__model_base__MEntity__c_name(var5);
}
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_standard__NativeArray(var10, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var8;
{
((void (*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val* self))(var9->class->vft[COLOR_standard__string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_compiler = var13;
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var17 = 0;
} else {
var17 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var17;
if (var17){
{
{ /* Inline model#MGenericType#need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var20 = var_mtype->attrs[COLOR_nit__model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
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
nit___nit__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1457);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var21) on <var21:nullable StaticFrame> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var26 = var21->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var21:nullable StaticFrame> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___link_unresolved_type(self, var27, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var32 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1458);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var30) on <var30:nullable StaticFrame> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var35 = var30->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var30:nullable StaticFrame> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = standard___standard__SequenceRead___Collection__first(var33);
}
var_recv = var36;
{
var37 = nit___nit__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var37;
{
var38 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "NEW_";
var42 = 4;
var43 = standard___standard__NativeString___to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var46 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = nit___nit__MClass___nit__model_base__MEntity__c_name(var44);
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "(";
var51 = 1;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "->resolution_table->types[";
var56 = 26;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
var58 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "])";
var62 = 2;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 7;
var66 = NEW_standard__NativeArray(var65, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var66)->values[0] = (val*) var40;
((struct instance_standard__NativeArray*)var66)->values[1] = (val*) var47;
((struct instance_standard__NativeArray*)var66)->values[2] = (val*) var49;
((struct instance_standard__NativeArray*)var66)->values[3] = (val*) var_recv_type_info;
((struct instance_standard__NativeArray*)var66)->values[4] = (val*) var54;
((struct instance_standard__NativeArray*)var66)->values[5] = (val*) var58;
((struct instance_standard__NativeArray*)var66)->values[6] = (val*) var60;
{
((void (*)(val* self, val* p0, long p1))(var64->class->vft[COLOR_standard__array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val* self))(var64->class->vft[COLOR_standard__string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
var68 = nit___nit__AbstractCompilerVisitor___new_expr(self, var67, var_mtype);
}
var = var68;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var71 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 121);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var69->class->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var69, var_mtype) /* add on <var69:Set[MType]>*/;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "type_";
var75 = 5;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
var77 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
var78 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 2;
var80 = NEW_standard__NativeArray(var79, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var80)->values[0] = (val*) var73;
((struct instance_standard__NativeArray*)var80)->values[1] = (val*) var77;
{
((void (*)(val* self, val* p0, long p1))(var78->class->vft[COLOR_standard__array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val* self))(var78->class->vft[COLOR_standard__string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = "NEW_";
var85 = 4;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var89 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = nit___nit__MClass___nit__model_base__MEntity__c_name(var87);
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "(&type_";
var94 = 7;
var95 = standard___standard__NativeString___to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
var96 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = ")";
var100 = 1;
var101 = standard___standard__NativeString___to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var102 = array_instance Array[Object] */
var103 = 5;
var104 = NEW_standard__NativeArray(var103, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var104)->values[0] = (val*) var83;
((struct instance_standard__NativeArray*)var104)->values[1] = (val*) var90;
((struct instance_standard__NativeArray*)var104)->values[2] = (val*) var92;
((struct instance_standard__NativeArray*)var104)->values[3] = (val*) var96;
((struct instance_standard__NativeArray*)var104)->values[4] = (val*) var98;
{
((void (*)(val* self, val* p0, long p1))(var102->class->vft[COLOR_standard__array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Object]>*/;
}
}
{
var105 = ((val* (*)(val* self))(var102->class->vft[COLOR_standard__string__Object__to_s]))(var102) /* to_s on <var102:Array[Object]>*/;
}
{
var106 = nit___nit__AbstractCompilerVisitor___new_expr(self, var105, var_mtype);
}
var = var106;
goto RET_LABEL;
RET_LABEL:;
return var;
}
