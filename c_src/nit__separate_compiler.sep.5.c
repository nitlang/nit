#include "nit__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateRuntimeFunction#compile_to_c for (self: SeparateRuntimeFunction, AbstractCompiler) */
void nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var13 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var14 /* : RuntimeVariable */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : MType */;
val* var21 /* : MType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var22 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var23 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
val* var25 /* : MSignature */;
val* var27 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var28 /* : MSignature */;
val* var30 /* : MSignature */;
val* var31 /* : nullable MType */;
val* var33 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var34 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var36 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : MType */;
val* var58 /* : MType */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
long var63 /* : Int */;
long var_i /* var i: Int */;
long var64 /* : Int */;
long var_ /* var : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
val* var72 /* : Array[MParameter] */;
val* var74 /* : Array[MParameter] */;
val* var75 /* : nullable Object */;
val* var76 /* : MType */;
val* var78 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var79 /* : Int */;
long var81 /* : Int */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : MClass */;
val* var91 /* : Array[MType] */;
long var92 /* : Int */;
val* var_93 /* var : Array[MType] */;
val* var94 /* : MClassType */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
val* var100 /* : Array[Object] */;
long var101 /* : Int */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : String */;
val* var104 /* : RuntimeVariable */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : Object */;
val* var114 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
long var115 /* : Int */;
long var116 /* : Int */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
val* var122 /* : null */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
val* var133 /* : Array[Object] */;
long var134 /* : Int */;
val* var135 /* : NativeArray[Object] */;
val* var136 /* : String */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[Object] */;
val* var146 /* : String */;
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
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var162 /* : Array[Object] */;
long var163 /* : Int */;
val* var164 /* : NativeArray[Object] */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
val* var171 /* : Array[Object] */;
long var172 /* : Int */;
val* var173 /* : NativeArray[Object] */;
val* var174 /* : String */;
val* var175 /* : null */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
val* var181 /* : RuntimeVariable */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : String */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
val* var193 /* : nullable RuntimeVariable */;
val* var_subret /* var subret: nullable RuntimeVariable */;
val* var194 /* : null */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
val* var200 /* : null */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
val* var206 /* : nullable RuntimeVariable */;
val* var208 /* : nullable RuntimeVariable */;
val* var209 /* : nullable RuntimeVariable */;
val* var210 /* : nullable String */;
val* var212 /* : nullable String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
val* var218 /* : Array[Object] */;
long var219 /* : Int */;
val* var220 /* : NativeArray[Object] */;
val* var221 /* : String */;
val* var222 /* : null */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : FlatString */;
val* var233 /* : nullable RuntimeVariable */;
val* var235 /* : nullable RuntimeVariable */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : FlatString */;
val* var241 /* : Array[Object] */;
long var242 /* : Int */;
val* var243 /* : NativeArray[Object] */;
val* var244 /* : String */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : FlatString */;
val* var250 /* : HashMap[String, String] */;
val* var252 /* : HashMap[String, String] */;
val* var253 /* : String */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : FlatString */;
val* var260 /* : Location */;
val* var262 /* : Location */;
val* var263 /* : nullable SourceFile */;
val* var265 /* : nullable SourceFile */;
val* var266 /* : String */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
long var272 /* : Int */;
val* var273 /* : FlatString */;
val* var274 /* : Location */;
val* var276 /* : Location */;
long var277 /* : Int */;
long var279 /* : Int */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
long var283 /* : Int */;
val* var284 /* : FlatString */;
val* var285 /* : Array[Object] */;
long var286 /* : Int */;
val* var287 /* : NativeArray[Object] */;
val* var288 /* : Object */;
val* var289 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractRuntimeFunction__COMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1884);
show_backtrace(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1644);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmethoddef = var1;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var6 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1644);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_recv = var10;
{
var13 = ((val* (*)(val* self))(var_compiler->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler) /* new_visitor on <var_compiler:AbstractCompiler>*/;
}
var_v = var13;
var14 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (varonce) {
var15 = varonce;
} else {
var16 = "self";
var17 = 4;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_recv (self) on <self:SeparateRuntimeFunction> */
var21 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv].val; /* _called_recv on <self:SeparateRuntimeFunction> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1845);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var14->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var14, var15) /* name= on <var14:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var14->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var14, var19) /* mtype= on <var14:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var14->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var14, var_recv) /* mcasttype= on <var14:RuntimeVariable>*/;
}
{
((void (*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14) /* init on <var14:RuntimeVariable>*/;
}
var_selfvar = var14;
var22 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___standard__kernel__Object__init(var22); /* Direct call array#Array#init on <var22:Array[RuntimeVariable]>*/
}
var_arguments = var22;
var23 = NEW_nit__StaticFrame(&type_nit__StaticFrame);
{
((void (*)(val* self, val* p0))(var23->class->vft[COLOR_nit__abstract_compiler__StaticFrame__visitor_61d]))(var23, var_v) /* visitor= on <var23:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var23->class->vft[COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d]))(var23, var_mmethoddef) /* mpropdef= on <var23:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var23->class->vft[COLOR_nit__abstract_compiler__StaticFrame__receiver_61d]))(var23, var_recv) /* receiver= on <var23:StaticFrame>*/;
}
{
((void (*)(val* self, val* p0))(var23->class->vft[COLOR_nit__abstract_compiler__StaticFrame__arguments_61d]))(var23, var_arguments) /* arguments= on <var23:StaticFrame>*/;
}
{
((void (*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23) /* init on <var23:StaticFrame>*/;
}
var_frame = var23;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var27 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_msignature = var25;
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#called_signature (self) on <self:SeparateRuntimeFunction> */
var30 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature].val; /* _called_signature on <self:SeparateRuntimeFunction> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _called_signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1848);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var28) on <var28:MSignature> */
var33 = var28->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var28:MSignature> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_ret = var31;
var34 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var34) on <var34:FlatBuffer> */
{
((void (*)(val* self))(var34->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var34) /* init on <var34:FlatBuffer>*/;
}
RET_LABEL35:(void)0;
}
}
var_sig = var34;
var36 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var36) on <var36:FlatBuffer> */
{
((void (*)(val* self))(var36->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var36) /* init on <var36:FlatBuffer>*/;
}
RET_LABEL37:(void)0;
}
}
var_comment = var36;
{
var38 = nit___nit__SeparateRuntimeFunction___c_ret(self);
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var38); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = " ";
var42 = 1;
var43 = standard___standard__NativeString___to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var40); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
{
var44 = nit___nit__AbstractRuntimeFunction___c_name(self);
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var44); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
{
var45 = nit___nit__SeparateRuntimeFunction___c_sig(self);
}
{
standard___standard__FlatBuffer___Buffer__append(var_sig, var45); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "(";
var49 = 1;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ": ";
var54 = 2;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var58 = var_selfvar->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
var59 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 4;
var61 = NEW_standard__NativeArray(var60, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var61)->values[0] = (val*) var47;
((struct instance_standard__NativeArray*)var61)->values[1] = (val*) var_selfvar;
((struct instance_standard__NativeArray*)var61)->values[2] = (val*) var52;
((struct instance_standard__NativeArray*)var61)->values[3] = (val*) var56;
{
((void (*)(val* self, val* p0, long p1))(var59->class->vft[COLOR_standard__array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
}
{
var62 = ((val* (*)(val* self))(var59->class->vft[COLOR_standard__string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_comment, var62); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_arguments, var_selfvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var63 = 0;
var_i = var63;
{
var64 = nit___nit__MSignature___arity(var_msignature);
}
var_ = var64;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var67 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var71 = var_i < var_;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var74 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var72, var_i);
}
{
{ /* Inline model#MParameter#mtype (var75) on <var75:nullable Object(MParameter)> */
var78 = var75->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var75:nullable Object(MParameter)> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
var_mtype = var76;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var81 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var79) on <var_i:Int> */
var84 = var_i == var79;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
if (var82){
if (varonce85) {
var86 = varonce85;
} else {
var87 = "Array";
var88 = 5;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
var90 = nit___nit__AbstractCompilerVisitor___get_class(var_v, var86);
}
var91 = NEW_standard__Array(&type_standard__Array__nit__MType);
var92 = 1;
{
standard___standard__Array___with_capacity(var91, var92); /* Direct call array#Array#with_capacity on <var91:Array[MType]>*/
}
var_93 = var91;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_93, var_mtype); /* Direct call array#AbstractArray#push on <var_93:Array[MType]>*/
}
{
var94 = nit___nit__MClass___get_mtype(var90, var_93);
}
var_mtype = var94;
} else {
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = ", ";
var98 = 2;
var99 = standard___standard__NativeString___to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
var100 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var100 = array_instance Array[Object] */
var101 = 2;
var102 = NEW_standard__NativeArray(var101, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var102)->values[0] = (val*) var96;
((struct instance_standard__NativeArray*)var102)->values[1] = (val*) var_mtype;
{
((void (*)(val* self, val* p0, long p1))(var100->class->vft[COLOR_standard__array__Array__with_native]))(var100, var102, var101) /* with_native on <var100:Array[Object]>*/;
}
}
{
var103 = ((val* (*)(val* self))(var100->class->vft[COLOR_standard__string__Object__to_s]))(var100) /* to_s on <var100:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_comment, var103); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
var104 = NEW_nit__RuntimeVariable(&type_nit__RuntimeVariable);
if (varonce105) {
var106 = varonce105;
} else {
var107 = "p";
var108 = 1;
var109 = standard___standard__NativeString___to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 2;
var112 = NEW_standard__NativeArray(var111, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var112)->values[0] = (val*) var106;
var113 = BOX_standard__Int(var_i); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var112)->values[1] = (val*) var113;
{
((void (*)(val* self, val* p0, long p1))(var110->class->vft[COLOR_standard__array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var114 = ((val* (*)(val* self))(var110->class->vft[COLOR_standard__string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
{
((void (*)(val* self, val* p0))(var104->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__name_61d]))(var104, var114) /* name= on <var104:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var104->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d]))(var104, var_mtype) /* mtype= on <var104:RuntimeVariable>*/;
}
{
((void (*)(val* self, val* p0))(var104->class->vft[COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var104, var_mtype) /* mcasttype= on <var104:RuntimeVariable>*/;
}
{
((void (*)(val* self))(var104->class->vft[COLOR_standard__kernel__Object__init]))(var104) /* init on <var104:RuntimeVariable>*/;
}
var_argvar = var104;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_arguments, var_argvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var115 = 1;
{
var116 = standard___standard__Int___Discrete__successor(var_i, var115);
}
var_i = var116;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (varonce117) {
var118 = varonce117;
} else {
var119 = ")";
var120 = 1;
var121 = standard___standard__NativeString___to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
{
standard___standard__FlatBuffer___Buffer__append(var_comment, var118); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
var122 = NULL;
if (var_ret == NULL) {
var123 = 0; /* is null */
} else {
var123 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var122) on <var_ret:nullable MType> */
var_other = var122;
{
var126 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var127 = !var126;
var124 = var127;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (var123){
if (varonce128) {
var129 = varonce128;
} else {
var130 = ": ";
var131 = 2;
var132 = standard___standard__NativeString___to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var133 = array_instance Array[Object] */
var134 = 2;
var135 = NEW_standard__NativeArray(var134, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var135)->values[0] = (val*) var129;
((struct instance_standard__NativeArray*)var135)->values[1] = (val*) var_ret;
{
((void (*)(val* self, val* p0, long p1))(var133->class->vft[COLOR_standard__array__Array__with_native]))(var133, var135, var134) /* with_native on <var133:Array[Object]>*/;
}
}
{
var136 = ((val* (*)(val* self))(var133->class->vft[COLOR_standard__string__Object__to_s]))(var133) /* to_s on <var133:Array[Object]>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_comment, var136); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
} else {
}
{
var137 = nit___nit__AbstractRuntimeFunction___c_name(self);
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = ";";
var141 = 1;
var142 = standard___standard__NativeString___to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 2;
var145 = NEW_standard__NativeArray(var144, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var145)->values[0] = (val*) var_sig;
((struct instance_standard__NativeArray*)var145)->values[1] = (val*) var139;
{
((void (*)(val* self, val* p0, long p1))(var143->class->vft[COLOR_standard__array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
}
{
var146 = ((val* (*)(val* self))(var143->class->vft[COLOR_standard__string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
}
{
nit___nit__AbstractCompiler___provide_declaration(var_compiler, var137, var146); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var_compiler:AbstractCompiler>*/
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = "/* method ";
var150 = 10;
var151 = standard___standard__NativeString___to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = " for ";
var155 = 5;
var156 = standard___standard__NativeString___to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = " */";
var160 = 3;
var161 = standard___standard__NativeString___to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
var162 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var162 = array_instance Array[Object] */
var163 = 5;
var164 = NEW_standard__NativeArray(var163, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var164)->values[0] = (val*) var148;
((struct instance_standard__NativeArray*)var164)->values[1] = (val*) self;
((struct instance_standard__NativeArray*)var164)->values[2] = (val*) var153;
((struct instance_standard__NativeArray*)var164)->values[3] = (val*) var_comment;
((struct instance_standard__NativeArray*)var164)->values[4] = (val*) var158;
{
((void (*)(val* self, val* p0, long p1))(var162->class->vft[COLOR_standard__array__Array__with_native]))(var162, var164, var163) /* with_native on <var162:Array[Object]>*/;
}
}
{
var165 = ((val* (*)(val* self))(var162->class->vft[COLOR_standard__string__Object__to_s]))(var162) /* to_s on <var162:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var165); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = " {";
var169 = 2;
var170 = standard___standard__NativeString___to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
var171 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var171 = array_instance Array[Object] */
var172 = 2;
var173 = NEW_standard__NativeArray(var172, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var173)->values[0] = (val*) var_sig;
((struct instance_standard__NativeArray*)var173)->values[1] = (val*) var167;
{
((void (*)(val* self, val* p0, long p1))(var171->class->vft[COLOR_standard__array__Array__with_native]))(var171, var173, var172) /* with_native on <var171:Array[Object]>*/;
}
}
{
var174 = ((val* (*)(val* self))(var171->class->vft[COLOR_standard__string__Object__to_s]))(var171) /* to_s on <var171:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var174); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
var175 = NULL;
if (var_ret == NULL) {
var176 = 0; /* is null */
} else {
var176 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var175) on <var_ret:nullable MType> */
var_other = var175;
{
var179 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var180 = !var179;
var177 = var180;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
var176 = var177;
}
if (var176){
{
var181 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var181) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val = var181; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL182:(void)0;
}
}
} else {
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = "RET_LABEL";
var186 = 9;
var187 = standard___standard__NativeString___to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
{
var188 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var184);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var188) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val = var188; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL189:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#is_thunk (self) on <self:SeparateRuntimeFunction> */
var192 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s; /* _is_thunk on <self:SeparateRuntimeFunction> */
var190 = var192;
RET_LABEL191:(void)0;
}
}
if (var190){
{
var193 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(var_v, var_mmethoddef, var_recv, var_arguments);
}
var_subret = var193;
var194 = NULL;
if (var_ret == NULL) {
var195 = 0; /* is null */
} else {
var195 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var194) on <var_ret:nullable MType> */
var_other = var194;
{
var198 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var199 = !var198;
var196 = var199;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
var195 = var196;
}
if (var195){
var200 = NULL;
if (var_subret == NULL) {
var201 = 0; /* is null */
} else {
var201 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_subret,var200) on <var_subret:nullable RuntimeVariable> */
var_other = var200;
{
var204 = ((short int (*)(val* self, val* p0))(var_subret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_subret, var_other) /* == on <var_subret:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var205 = !var204;
var202 = var205;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
var201 = var202;
}
if (unlikely(!var201)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1931);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar (var_frame) on <var_frame:StaticFrame> */
var208 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var206 = var208;
RET_LABEL207:(void)0;
}
}
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1932);
show_backtrace(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var206, var_subret); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
{
var209 = nit__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, var_v, var_arguments);
}
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var212 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var210 = var212;
RET_LABEL211:(void)0;
}
}
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1938);
show_backtrace(1);
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = ":;";
var216 = 2;
var217 = standard___standard__NativeString___to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
var218 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var218 = array_instance Array[Object] */
var219 = 2;
var220 = NEW_standard__NativeArray(var219, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var220)->values[0] = (val*) var210;
((struct instance_standard__NativeArray*)var220)->values[1] = (val*) var214;
{
((void (*)(val* self, val* p0, long p1))(var218->class->vft[COLOR_standard__array__Array__with_native]))(var218, var220, var219) /* with_native on <var218:Array[Object]>*/;
}
}
{
var221 = ((val* (*)(val* self))(var218->class->vft[COLOR_standard__string__Object__to_s]))(var218) /* to_s on <var218:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var221); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var222 = NULL;
if (var_ret == NULL) {
var223 = 0; /* is null */
} else {
var223 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var222) on <var_ret:nullable MType> */
var_other = var222;
{
var226 = ((short int (*)(val* self, val* p0))(var_ret->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
}
var227 = !var226;
var224 = var227;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
var223 = var224;
}
if (var223){
if (varonce228) {
var229 = varonce228;
} else {
var230 = "return ";
var231 = 7;
var232 = standard___standard__NativeString___to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar (var_frame) on <var_frame:StaticFrame> */
var235 = var_frame->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var233 = var235;
RET_LABEL234:(void)0;
}
}
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1940);
show_backtrace(1);
}
if (varonce236) {
var237 = varonce236;
} else {
var238 = ";";
var239 = 1;
var240 = standard___standard__NativeString___to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
var241 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var241 = array_instance Array[Object] */
var242 = 3;
var243 = NEW_standard__NativeArray(var242, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var243)->values[0] = (val*) var229;
((struct instance_standard__NativeArray*)var243)->values[1] = (val*) var233;
((struct instance_standard__NativeArray*)var243)->values[2] = (val*) var237;
{
((void (*)(val* self, val* p0, long p1))(var241->class->vft[COLOR_standard__array__Array__with_native]))(var241, var243, var242) /* with_native on <var241:Array[Object]>*/;
}
}
{
var244 = ((val* (*)(val* self))(var241->class->vft[COLOR_standard__string__Object__to_s]))(var241) /* to_s on <var241:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var244); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce245) {
var246 = varonce245;
} else {
var247 = "}";
var248 = 1;
var249 = standard___standard__NativeString___to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var246); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (var_compiler) on <var_compiler:AbstractCompiler> */
var252 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:AbstractCompiler> */
if (unlikely(var252 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 471);
show_backtrace(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
{
var253 = nit___nit__AbstractRuntimeFunction___c_name(self);
}
{
var254 = nit___nit__MPropDef___nit__model_base__MEntity__full_name(var_mmethoddef);
}
if (varonce255) {
var256 = varonce255;
} else {
var257 = " (";
var258 = 2;
var259 = standard___standard__NativeString___to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var262 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2016);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline location#Location#file (var260) on <var260:Location> */
var265 = var260->attrs[COLOR_nit__location__Location___file].val; /* _file on <var260:Location> */
var263 = var265;
RET_LABEL264:(void)0;
}
}
if (var263 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1943);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var263) on <var263:nullable SourceFile> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var268 = var263->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var263:nullable SourceFile> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
if (varonce269) {
var270 = varonce269;
} else {
var271 = ":";
var272 = 1;
var273 = standard___standard__NativeString___to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var276 = var_mmethoddef->attrs[COLOR_nit__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2016);
show_backtrace(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var274) on <var274:Location> */
var279 = var274->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var274:Location> */
var277 = var279;
RET_LABEL278:(void)0;
}
}
if (varonce280) {
var281 = varonce280;
} else {
var282 = ")";
var283 = 1;
var284 = standard___standard__NativeString___to_s_with_length(var282, var283);
var281 = var284;
varonce280 = var281;
}
var285 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var285 = array_instance Array[Object] */
var286 = 6;
var287 = NEW_standard__NativeArray(var286, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var287)->values[0] = (val*) var254;
((struct instance_standard__NativeArray*)var287)->values[1] = (val*) var256;
((struct instance_standard__NativeArray*)var287)->values[2] = (val*) var266;
((struct instance_standard__NativeArray*)var287)->values[3] = (val*) var270;
var288 = BOX_standard__Int(var277); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var287)->values[4] = (val*) var288;
((struct instance_standard__NativeArray*)var287)->values[5] = (val*) var281;
{
((void (*)(val* self, val* p0, long p1))(var285->class->vft[COLOR_standard__array__Array__with_native]))(var285, var287, var286) /* with_native on <var285:Array[Object]>*/;
}
}
{
var289 = ((val* (*)(val* self))(var285->class->vft[COLOR_standard__string__Object__to_s]))(var285) /* to_s on <var285:Array[Object]>*/;
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var250, var253, var289); /* Direct call hash_collection#HashMap#[]= on <var250:HashMap[String, String]>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#init for (self: SeparateRuntimeFunction) */
void nit___nit__SeparateRuntimeFunction___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__SeparateRuntimeFunction___standard__kernel__Object__init]))(self) /* init on <self:SeparateRuntimeFunction>*/;
}
RET_LABEL:;
}
/* method separate_compiler#MEntity#const_color for (self: MEntity): String */
val* nit__separate_compiler___MEntity___const_color(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
var1 = self->attrs[COLOR_nit__separate_compiler__MEntity___const_color].val != NULL; /* _const_color on <self:MEntity> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__separate_compiler__MEntity___const_color].val; /* _const_color on <self:MEntity> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _const_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1948);
show_backtrace(1);
}
} else {
{
if (varonce) {
var5 = varonce;
} else {
var6 = "COLOR_";
var7 = 6;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var9 = ((val* (*)(val* self))(self->class->vft[COLOR_nit__model_base__MEntity__c_name]))(self) /* c_name on <self:MEntity>*/;
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 2;
var12 = NEW_standard__NativeArray(var11, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var12)->values[0] = (val*) var5;
((struct instance_standard__NativeArray*)var12)->values[1] = (val*) var9;
{
((void (*)(val* self, val* p0, long p1))(var10->class->vft[COLOR_standard__array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val* self))(var10->class->vft[COLOR_standard__string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
var3 = var13;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__separate_compiler__MEntity___const_color].val = var3; /* _const_color on <self:MEntity> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method separate_compiler#AMethPropdef#can_inline for (self: AMethPropdef): Bool */
short int nit__separate_compiler___AMethPropdef___nit__abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
val* var_m /* var m: nullable MMethodDef */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : MProperty */;
val* var14 /* : MProperty */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_m = var1;
var6 = NULL;
if (var_m == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_m,var6) on <var_m:nullable MMethodDef> */
var_other = var6;
{
var10 = ((short int (*)(val* self, val* p0))(var_m->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_m, var_other) /* == on <var_m:nullable MMethodDef(MMethodDef)>*/;
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var_ = var7;
if (var7){
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var14 = var_m->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_m:nullable MMethodDef(MMethodDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var12) on <var12:MProperty(MMethod)> */
var17 = var12->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var12:MProperty(MMethod)> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var5 = var15;
} else {
var5 = var_;
}
var_18 = var5;
if (var5){
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var21 = var_m->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:nullable MMethodDef(MMethodDef)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var4 = var19;
} else {
var4 = var_18;
}
if (var4){
var22 = 0;
var = var22;
goto RET_LABEL;
} else {
}
{
var23 = ((short int (*)(val* self))(self->class->vft[COLOR_nit__separate_compiler___AMethPropdef___nit__abstract_compiler__APropdef__can_inline]))(self) /* can_inline on <self:AMethPropdef>*/;
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
