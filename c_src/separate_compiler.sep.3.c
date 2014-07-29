#include "separate_compiler.sep.0.h"
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
val* var37 /* : MPropDef */;
val* var38 /* : nullable MSignature */;
val* var40 /* : nullable MSignature */;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
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
long var64 /* : Int */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : Object */;
val* var74 /* : String */;
val* var75 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var76 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var77 /* : MPropDef */;
val* var78 /* : nullable MSignature */;
val* var80 /* : nullable MSignature */;
val* var81 /* : MPropDef */;
val* var82 /* : MClassDef */;
val* var84 /* : MClassDef */;
val* var85 /* : MClassType */;
val* var87 /* : MClassType */;
val* var88 /* : MPropDef */;
val* var89 /* : MClassDef */;
val* var91 /* : MClassDef */;
val* var92 /* : MClassType */;
val* var94 /* : MClassType */;
val* var95 /* : MPropDef */;
val* var96 /* : MClassDef */;
val* var98 /* : MClassDef */;
val* var99 /* : MModule */;
val* var101 /* : MModule */;
short int var102 /* : Bool */;
val* var103 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var104 /* : nullable MType */;
val* var106 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : nullable Object */;
val* var111 /* : MType */;
val* var113 /* : MType */;
val* var114 /* : RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var115 /* : null */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : null */;
val* var123 /* : RuntimeVariable */;
val* var124 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var125 /* : FlatBuffer */;
val* var_ss /* var ss: FlatBuffer */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
val* var134 /* : String */;
val* var135 /* : Range[Int] */;
long var136 /* : Int */;
long var137 /* : Int */;
val* var138 /* : Discrete */;
val* var139 /* : Discrete */;
val* var140 /* : Iterator[Discrete] */;
short int var141 /* : Bool */;
val* var142 /* : nullable Object */;
long var_i /* var i: Int */;
long var143 /* : Int */;
long var144 /* : Int */;
long var145 /* : Int */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
const char* var_class_name150;
long var151 /* : Int */;
val* var152 /* : nullable Object */;
val* var_a /* var a: RuntimeVariable */;
val* var153 /* : Array[MParameter] */;
val* var155 /* : Array[MParameter] */;
val* var156 /* : nullable Object */;
val* var157 /* : MType */;
val* var159 /* : MType */;
val* var_t /* var t: MType */;
long var160 /* : Int */;
long var162 /* : Int */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
long var167 /* : Int */;
long var168 /* : Int */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
const char* var_class_name173;
long var174 /* : Int */;
val* var175 /* : nullable Object */;
val* var176 /* : MType */;
val* var178 /* : MType */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
val* var184 /* : String */;
val* var185 /* : Array[Object] */;
long var186 /* : Int */;
val* var187 /* : NativeArray[Object] */;
val* var188 /* : String */;
val* var189 /* : RuntimeVariable */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : Array[Object] */;
long var196 /* : Int */;
val* var197 /* : NativeArray[Object] */;
val* var198 /* : String */;
val* var199 /* : null */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : FlatString */;
val* var_r /* var r: nullable Object */;
val* var211 /* : String */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
long var215 /* : Int */;
val* var216 /* : FlatString */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
long var220 /* : Int */;
val* var221 /* : FlatString */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
val* var227 /* : nullable Object */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : FlatString */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
long var236 /* : Int */;
val* var237 /* : FlatString */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
long var241 /* : Int */;
val* var242 /* : FlatString */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : FlatString */;
val* var248 /* : nullable Object */;
val* var249 /* : String */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : FlatString */;
val* var255 /* : Array[Object] */;
long var256 /* : Int */;
val* var257 /* : NativeArray[Object] */;
val* var258 /* : String */;
val* var_call /* var call: String */;
val* var259 /* : null */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
val* var_other263 /* var other: nullable Object */;
short int var264 /* : Bool */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
long var270 /* : Int */;
val* var271 /* : FlatString */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
long var275 /* : Int */;
val* var276 /* : FlatString */;
val* var277 /* : Array[Object] */;
long var278 /* : Int */;
val* var279 /* : NativeArray[Object] */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : FlatString */;
val* var286 /* : Array[Object] */;
long var287 /* : Int */;
val* var288 /* : NativeArray[Object] */;
val* var289 /* : String */;
val* var290 /* : null */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
val* var297 /* : null */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : FlatString */;
var_mmethod = p0;
var_arguments = p1;
var_const_color = p2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 58);
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
var36 = array__AbstractArrayRead__length(var_arguments);
}
{
var37 = model__MProperty__intro(var_mmethod);
}
{
{ /* Inline model#MMethodDef#msignature (var37) on <var37:MPropDef(MMethodDef)> */
var40 = var37->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var37:MPropDef(MMethodDef)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1063);
show_backtrace(1);
} else {
var41 = model__MSignature__arity(var38);
}
var42 = 1;
{
{ /* Inline kernel#Int#+ (var41,var42) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var49 = var41 + var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var36,var43) on <var36:Int> */
var53 = var36 == var43;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (unlikely(!var50)) {
if (varonce54) {
var55 = varonce54;
} else {
var56 = "Invalid arity for ";
var57 = 18;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = ". ";
var62 = 2;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
var64 = array__AbstractArrayRead__length(var_arguments);
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " arguments given.";
var68 = 17;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 5;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var55;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var_mmethod;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var60;
var73 = BOX_kernel__Int(var64); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var72)->values[3] = (val*) var73;
((struct instance_array__NativeArray*)var72)->values[4] = (val*) var66;
{
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
}
{
var74 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__debug(self, var74); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1063);
show_backtrace(1);
}
{
var75 = abstract_collection__SequenceRead__first(var_arguments);
}
var_recv = var75;
{
var76 = separate_compiler__SeparateCompilerVisitor__before_send(self, var_mmethod, var_arguments);
}
var_res0 = var76;
{
var77 = model__MProperty__intro(var_mmethod);
}
{
{ /* Inline model#MMethodDef#msignature (var77) on <var77:MPropDef(MMethodDef)> */
var80 = var77->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var77:MPropDef(MMethodDef)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = model__MProperty__intro(var_mmethod);
}
{
{ /* Inline model#MPropDef#mclassdef (var81) on <var81:MPropDef(MMethodDef)> */
var84 = var81->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var81:MPropDef(MMethodDef)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var82) on <var82:MClassDef> */
var87 = var82->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var82:MClassDef> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = model__MProperty__intro(var_mmethod);
}
{
{ /* Inline model#MPropDef#mclassdef (var88) on <var88:MPropDef(MMethodDef)> */
var91 = var88->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var88:MPropDef(MMethodDef)> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var89) on <var89:MClassDef> */
var94 = var89->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var89:MClassDef> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = model__MProperty__intro(var_mmethod);
}
{
{ /* Inline model#MPropDef#mclassdef (var95) on <var95:MPropDef(MMethodDef)> */
var98 = var95->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var95:MPropDef(MMethodDef)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var96) on <var96:MClassDef> */
var101 = var96->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var96:MClassDef> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
var102 = 1;
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1069);
show_backtrace(1);
} else {
var103 = model__MSignature__resolve_for(var78, var85, var92, var99, var102);
}
var_msignature = var103;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var106 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var_ret = var104;
{
{ /* Inline model#MMethod#is_new (var_mmethod) on <var_mmethod:MMethod> */
var109 = var_mmethod->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var_mmethod:MMethod> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (var107){
{
var110 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var110) on <var110:nullable Object(RuntimeVariable)> */
var113 = var110->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var110:nullable Object(RuntimeVariable)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
var_ret = var111;
{
var114 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_ret);
}
var_res = var114;
} else {
var115 = NULL;
if (var_ret == NULL) {
var116 = 1; /* is null */
} else {
var116 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var115) on <var_ret:nullable MType> */
var_other = var115;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var121 = var_ret == var_other;
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
if (var116){
var122 = NULL;
var_res = var122;
} else {
{
var123 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_ret);
}
var_res = var123;
}
}
var124 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var124); /* Direct call string#FlatBuffer#init on <var124:FlatBuffer>*/
}
var_s = var124;
var125 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var125); /* Direct call string#FlatBuffer#init on <var125:FlatBuffer>*/
}
var_ss = var125;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "val*";
var129 = 4;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
{
string__FlatBuffer__append(var_s, var127); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 1;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var_recv;
{
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
}
{
var134 = ((val* (*)(val*))(var131->class->vft[COLOR_string__Object__to_s]))(var131) /* to_s on <var131:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_ss, var134); /* Direct call string#FlatBuffer#append on <var_ss:FlatBuffer>*/
}
var135 = NEW_range__Range(&type_range__Rangekernel__Int);
var136 = 0;
{
var137 = model__MSignature__arity(var_msignature);
}
{
var138 = BOX_kernel__Int(var136); /* autobox from Int to Discrete */
var139 = BOX_kernel__Int(var137); /* autobox from Int to Discrete */
range__Range__without_last(var135, var138, var139); /* Direct call range#Range#without_last on <var135:Range[Int]>*/
}
{
var140 = range__Range__iterator(var135);
}
for(;;) {
{
var141 = ((short int (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var140) /* is_ok on <var140:Iterator[Discrete]>*/;
}
if(!var141) break;
{
var142 = ((val* (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__item]))(var140) /* item on <var140:Iterator[Discrete]>*/;
}
var143 = ((struct instance_kernel__Int*)var142)->value; /* autounbox from nullable Object to Int */;
var_i = var143;
var144 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var144) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var144:Int> isa OTHER */
/* <var144:Int> isa OTHER */
var147 = 1; /* easy <var144:Int> isa OTHER*/
if (unlikely(!var147)) {
var_class_name150 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name150);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var151 = var_i + var144;
var145 = var151;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
{
var152 = array__Array___91d_93d(var_arguments, var145);
}
var_a = var152;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var155 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = array__Array___91d_93d(var153, var_i);
}
{
{ /* Inline model#MParameter#mtype (var156) on <var156:nullable Object(MParameter)> */
var159 = var156->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var156:nullable Object(MParameter)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
var_t = var157;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var162 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var160) on <var_i:Int> */
var166 = var_i == var160;
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
var163 = var164;
}
if (var163){
var167 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var167) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var167:Int> isa OTHER */
/* <var167:Int> isa OTHER */
var170 = 1; /* easy <var167:Int> isa OTHER*/
if (unlikely(!var170)) {
var_class_name173 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name173);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var174 = var_i + var167;
var168 = var174;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
{
var175 = array__Array___91d_93d(var_arguments, var168);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var175) on <var175:nullable Object(RuntimeVariable)> */
var178 = var175->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var175:nullable Object(RuntimeVariable)> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
var_t = var176;
} else {
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = ", ";
var182 = 2;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
{
var184 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t) /* ctype on <var_t:MType>*/;
}
var185 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var185 = array_instance Array[Object] */
var186 = 2;
var187 = NEW_array__NativeArray(var186, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var187)->values[0] = (val*) var180;
((struct instance_array__NativeArray*)var187)->values[1] = (val*) var184;
{
((void (*)(val*, val*, long))(var185->class->vft[COLOR_array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[Object]>*/;
}
}
{
var188 = ((val* (*)(val*))(var185->class->vft[COLOR_string__Object__to_s]))(var185) /* to_s on <var185:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_s, var188); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
{
var189 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_a, var_t);
}
var_a = var189;
if (varonce190) {
var191 = varonce190;
} else {
var192 = ", ";
var193 = 2;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var195 = array_instance Array[Object] */
var196 = 2;
var197 = NEW_array__NativeArray(var196, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var197)->values[0] = (val*) var191;
((struct instance_array__NativeArray*)var197)->values[1] = (val*) var_a;
{
((void (*)(val*, val*, long))(var195->class->vft[COLOR_array__Array__with_native]))(var195, var197, var196) /* with_native on <var195:Array[Object]>*/;
}
}
{
var198 = ((val* (*)(val*))(var195->class->vft[COLOR_string__Object__to_s]))(var195) /* to_s on <var195:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_ss, var198); /* Direct call string#FlatBuffer#append on <var_ss:FlatBuffer>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var140->class->vft[COLOR_abstract_collection__Iterator__next]))(var140) /* next on <var140:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
var199 = NULL;
if (var_ret == NULL) {
var200 = 1; /* is null */
} else {
var200 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var199) on <var_ret:nullable MType> */
var_other = var199;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var205 = var_ret == var_other;
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
}
var201 = var203;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
if (var200){
if (varonce206) {
var207 = varonce206;
} else {
var208 = "void";
var209 = 4;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
var_r = var207;
} else {
{
var211 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
}
var_r = var211;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var_const_color); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce212) {
var213 = varonce212;
} else {
var214 = "((";
var215 = 2;
var216 = string__NativeString__to_s_with_length(var214, var215);
var213 = var216;
varonce212 = var213;
}
if (varonce217) {
var218 = varonce217;
} else {
var219 = " (*)(";
var220 = 5;
var221 = string__NativeString__to_s_with_length(var219, var220);
var218 = var221;
varonce217 = var218;
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = "))(";
var225 = 3;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
{
var227 = abstract_collection__SequenceRead__first(var_arguments);
}
if (varonce228) {
var229 = varonce228;
} else {
var230 = "->class->vft[";
var231 = 13;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
if (varonce233) {
var234 = varonce233;
} else {
var235 = "]))(";
var236 = 4;
var237 = string__NativeString__to_s_with_length(var235, var236);
var234 = var237;
varonce233 = var234;
}
if (varonce238) {
var239 = varonce238;
} else {
var240 = ") /* ";
var241 = 5;
var242 = string__NativeString__to_s_with_length(var240, var241);
var239 = var242;
varonce238 = var239;
}
if (varonce243) {
var244 = varonce243;
} else {
var245 = " on ";
var246 = 4;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
{
var248 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var249 = abstract_compiler__RuntimeVariable__inspect(var248);
}
if (varonce250) {
var251 = varonce250;
} else {
var252 = "*/";
var253 = 2;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
var255 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var255 = array_instance Array[Object] */
var256 = 15;
var257 = NEW_array__NativeArray(var256, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var257)->values[0] = (val*) var213;
((struct instance_array__NativeArray*)var257)->values[1] = (val*) var_r;
((struct instance_array__NativeArray*)var257)->values[2] = (val*) var218;
((struct instance_array__NativeArray*)var257)->values[3] = (val*) var_s;
((struct instance_array__NativeArray*)var257)->values[4] = (val*) var223;
((struct instance_array__NativeArray*)var257)->values[5] = (val*) var227;
((struct instance_array__NativeArray*)var257)->values[6] = (val*) var229;
((struct instance_array__NativeArray*)var257)->values[7] = (val*) var_const_color;
((struct instance_array__NativeArray*)var257)->values[8] = (val*) var234;
((struct instance_array__NativeArray*)var257)->values[9] = (val*) var_ss;
((struct instance_array__NativeArray*)var257)->values[10] = (val*) var239;
((struct instance_array__NativeArray*)var257)->values[11] = (val*) var_mmethod;
((struct instance_array__NativeArray*)var257)->values[12] = (val*) var244;
((struct instance_array__NativeArray*)var257)->values[13] = (val*) var249;
((struct instance_array__NativeArray*)var257)->values[14] = (val*) var251;
{
((void (*)(val*, val*, long))(var255->class->vft[COLOR_array__Array__with_native]))(var255, var257, var256) /* with_native on <var255:Array[Object]>*/;
}
}
{
var258 = ((val* (*)(val*))(var255->class->vft[COLOR_string__Object__to_s]))(var255) /* to_s on <var255:Array[Object]>*/;
}
var_call = var258;
var259 = NULL;
if (var_res == NULL) {
var260 = 0; /* is null */
} else {
var260 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var259) on <var_res:nullable RuntimeVariable> */
var_other263 = var259;
{
var265 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other263) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var264 = var265;
}
var266 = !var264;
var261 = var266;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var260 = var261;
}
if (var260){
if (varonce267) {
var268 = varonce267;
} else {
var269 = " = ";
var270 = 3;
var271 = string__NativeString__to_s_with_length(var269, var270);
var268 = var271;
varonce267 = var268;
}
if (varonce272) {
var273 = varonce272;
} else {
var274 = ";";
var275 = 1;
var276 = string__NativeString__to_s_with_length(var274, var275);
var273 = var276;
varonce272 = var273;
}
var277 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var277 = array_instance Array[Object] */
var278 = 4;
var279 = NEW_array__NativeArray(var278, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var279)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var279)->values[1] = (val*) var268;
((struct instance_array__NativeArray*)var279)->values[2] = (val*) var_call;
((struct instance_array__NativeArray*)var279)->values[3] = (val*) var273;
{
((void (*)(val*, val*, long))(var277->class->vft[COLOR_array__Array__with_native]))(var277, var279, var278) /* with_native on <var277:Array[Object]>*/;
}
}
{
var280 = ((val* (*)(val*))(var277->class->vft[COLOR_string__Object__to_s]))(var277) /* to_s on <var277:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var280); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
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
var287 = 2;
var288 = NEW_array__NativeArray(var287, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var288)->values[0] = (val*) var_call;
((struct instance_array__NativeArray*)var288)->values[1] = (val*) var282;
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
}
var290 = NULL;
if (var_res0 == NULL) {
var291 = 0; /* is null */
} else {
var291 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res0,var290) on <var_res0:nullable RuntimeVariable> */
var_other263 = var290;
{
var295 = ((short int (*)(val*, val*))(var_res0->class->vft[COLOR_kernel__Object___61d_61d]))(var_res0, var_other263) /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/;
var294 = var295;
}
var296 = !var294;
var292 = var296;
goto RET_LABEL293;
RET_LABEL293:(void)0;
}
var291 = var292;
}
if (var291){
var297 = NULL;
if (var_res == NULL) {
var298 = 0; /* is null */
} else {
var298 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var297) on <var_res:nullable RuntimeVariable> */
var_other263 = var297;
{
var302 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other263) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var301 = var302;
}
var303 = !var301;
var299 = var303;
goto RET_LABEL300;
RET_LABEL300:(void)0;
}
var298 = var299;
}
if (unlikely(!var298)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1109);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(self, var_res0, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (varonce304) {
var305 = varonce304;
} else {
var306 = "}";
var307 = 1;
var308 = string__NativeString__to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var305); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
val* var2 /* : nullable MSignature */;
val* var4 /* : nullable MSignature */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
long var24 /* : Int */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : Object */;
val* var34 /* : String */;
val* var35 /* : nullable MSignature */;
val* var37 /* : nullable MSignature */;
val* var38 /* : nullable MType */;
val* var40 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var41 /* : MProperty */;
val* var43 /* : MProperty */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var48 /* : MType */;
val* var50 /* : MType */;
val* var51 /* : RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : null */;
val* var60 /* : MClassDef */;
val* var62 /* : MClassDef */;
val* var63 /* : MClassType */;
val* var65 /* : MClassType */;
val* var66 /* : MClassDef */;
val* var68 /* : MClassDef */;
val* var69 /* : MClassType */;
val* var71 /* : MClassType */;
val* var72 /* : MClassDef */;
val* var74 /* : MClassDef */;
val* var75 /* : MModule */;
val* var77 /* : MModule */;
short int var78 /* : Bool */;
val* var79 /* : MType */;
val* var80 /* : RuntimeVariable */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var_ /* var : Bool */;
val* var86 /* : AbstractCompiler */;
val* var88 /* : AbstractCompiler */;
val* var89 /* : ModelBuilder */;
val* var91 /* : ModelBuilder */;
val* var92 /* : ToolContext */;
val* var94 /* : ToolContext */;
val* var95 /* : OptionBool */;
val* var97 /* : OptionBool */;
val* var98 /* : nullable Object */;
val* var100 /* : nullable Object */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var_103 /* var : Bool */;
short int var104 /* : Bool */;
val* var105 /* : AbstractCompiler */;
val* var107 /* : AbstractCompiler */;
val* var108 /* : ModelBuilder */;
val* var110 /* : ModelBuilder */;
val* var111 /* : ToolContext */;
val* var113 /* : ToolContext */;
val* var114 /* : OptionBool */;
val* var116 /* : OptionBool */;
val* var117 /* : nullable Object */;
val* var119 /* : nullable Object */;
short int var120 /* : Bool */;
short int var_121 /* var : Bool */;
short int var122 /* : Bool */;
val* var123 /* : AbstractCompiler */;
val* var125 /* : AbstractCompiler */;
val* var126 /* : ModelBuilder */;
val* var128 /* : ModelBuilder */;
val* var_129 /* var : ModelBuilder */;
long var130 /* : Int */;
long var132 /* : Int */;
long var133 /* : Int */;
long var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
long var140 /* : Int */;
val* var142 /* : AbstractCompiler */;
val* var144 /* : AbstractCompiler */;
val* var145 /* : ModelBuilder */;
val* var147 /* : ModelBuilder */;
val* var148 /* : ToolContext */;
val* var150 /* : ToolContext */;
val* var151 /* : OptionBool */;
val* var153 /* : OptionBool */;
val* var154 /* : nullable Object */;
val* var156 /* : nullable Object */;
short int var157 /* : Bool */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : FlatString */;
val* var163 /* : Frame */;
short int var165 /* : Bool */;
int cltype166;
int idtype167;
const struct type* type_struct;
const char* var_class_name168;
val* var_frame /* var frame: Frame */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
val* var174 /* : String */;
val* var177 /* : nullable Frame */;
val* var179 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
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
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : FlatString */;
val* var202 /* : nullable Object */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : FlatString */;
val* var209 /* : Array[Object] */;
long var210 /* : Int */;
val* var211 /* : NativeArray[Object] */;
val* var212 /* : String */;
val* var213 /* : nullable RuntimeVariable */;
val* var214 /* : nullable String */;
val* var216 /* : nullable String */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
long var220 /* : Int */;
val* var221 /* : FlatString */;
val* var222 /* : Array[Object] */;
long var223 /* : Int */;
val* var224 /* : NativeArray[Object] */;
val* var225 /* : String */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : FlatString */;
val* var232 /* : AbstractCompiler */;
val* var234 /* : AbstractCompiler */;
val* var235 /* : ModelBuilder */;
val* var237 /* : ModelBuilder */;
val* var_238 /* var : ModelBuilder */;
long var239 /* : Int */;
long var241 /* : Int */;
long var242 /* : Int */;
long var243 /* : Int */;
short int var245 /* : Bool */;
int cltype246;
int idtype247;
const char* var_class_name248;
long var249 /* : Int */;
val* var251 /* : AbstractCompiler */;
val* var253 /* : AbstractCompiler */;
val* var254 /* : ModelBuilder */;
val* var256 /* : ModelBuilder */;
val* var257 /* : ToolContext */;
val* var259 /* : ToolContext */;
val* var260 /* : OptionBool */;
val* var262 /* : OptionBool */;
val* var263 /* : nullable Object */;
val* var265 /* : nullable Object */;
short int var266 /* : Bool */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
long var270 /* : Int */;
val* var271 /* : FlatString */;
val* var272 /* : String */;
val* var273 /* : null */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
short int var277 /* : Bool */;
short int var279 /* : Bool */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : FlatString */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
val* var291 /* : String */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
long var300 /* : Int */;
val* var301 /* : FlatString */;
val* var302 /* : nullable Object */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : FlatString */;
val* var309 /* : Array[Object] */;
long var310 /* : Int */;
val* var311 /* : NativeArray[Object] */;
val* var312 /* : String */;
val* var313 /* : null */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
val* var319 /* : String */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
long var323 /* : Int */;
val* var324 /* : FlatString */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : FlatString */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
val* var336 /* : Array[Object] */;
long var337 /* : Int */;
val* var338 /* : NativeArray[Object] */;
val* var339 /* : String */;
var_mmethoddef = p0;
var_recvtype = p1;
var_arguments = p2;
{
var1 = array__AbstractArrayRead__length(var_arguments);
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var4 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1121);
show_backtrace(1);
} else {
var5 = model__MSignature__arity(var2);
}
var6 = 1;
{
{ /* Inline kernel#Int#+ (var5,var6) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var10 = var5 + var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,var7) on <var1:Int> */
var14 = var1 == var7;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (unlikely(!var11)) {
if (varonce) {
var15 = varonce;
} else {
var16 = "Invalid arity for ";
var17 = 18;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = ". ";
var22 = 2;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
var24 = array__AbstractArrayRead__length(var_arguments);
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = " arguments given.";
var28 = 17;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 5;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var15;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var_mmethoddef;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var20;
var33 = BOX_kernel__Int(var24); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var32)->values[3] = (val*) var33;
((struct instance_array__NativeArray*)var32)->values[4] = (val*) var26;
{
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__debug(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:SeparateCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1121);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var37 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (var35 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1124);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var35) on <var35:nullable MSignature> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1455);
show_backtrace(1);
}
var40 = var35->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var35:nullable MSignature> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_ret = var38;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var43 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var41) on <var41:MProperty(MMethod)> */
var46 = var41->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var41:MProperty(MMethod)> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (var44){
{
var47 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var47) on <var47:nullable Object(RuntimeVariable)> */
var50 = var47->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var47:nullable Object(RuntimeVariable)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_ret = var48;
{
var51 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_ret);
}
var_res = var51;
} else {
var52 = NULL;
if (var_ret == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,var52) on <var_ret:nullable MType> */
var_other = var52;
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var58 = var_ret == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
var59 = NULL;
var_res = var59;
} else {
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var62 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var60) on <var60:MClassDef> */
var65 = var60->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var60:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var68 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var66) on <var66:MClassDef> */
var71 = var66->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var66:MClassDef> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var74 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var72) on <var72:MClassDef> */
var77 = var72->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var72:MClassDef> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var78 = 1;
{
var79 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var63, var69, var75, var78) /* resolve_for on <var_ret:nullable MType(MType)>*/;
}
var_ret = var79;
{
var80 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_ret);
}
var_res = var80;
}
}
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var85 = var_mmethoddef->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_ = var83;
if (var83){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var88 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var86) on <var86:AbstractCompiler(SeparateCompiler)> */
var91 = var86->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var86:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var89) on <var89:ModelBuilder> */
var94 = var89->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var89:ModelBuilder> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_inline_intern (var92) on <var92:ToolContext> */
var97 = var92->attrs[COLOR_separate_compiler__ToolContext___opt_no_inline_intern].val; /* _opt_no_inline_intern on <var92:ToolContext> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_inline_intern");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 26);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline opts#Option#value (var95) on <var95:OptionBool> */
var100 = var95->attrs[COLOR_opts__Option___value].val; /* _value on <var95:OptionBool> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
var101 = ((struct instance_kernel__Bool*)var98)->value; /* autounbox from nullable Object to Bool */;
var102 = !var101;
var82 = var102;
} else {
var82 = var_;
}
var_103 = var82;
if (var82){
var81 = var_103;
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var107 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var105) on <var105:AbstractCompiler(SeparateCompiler)> */
var110 = var105->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var105:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var108) on <var108:ModelBuilder> */
var113 = var108->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var108:ModelBuilder> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_inline_some_methods (var111) on <var111:ToolContext> */
var116 = var111->attrs[COLOR_separate_compiler__ToolContext___opt_inline_some_methods].val; /* _opt_inline_some_methods on <var111:ToolContext> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_inline_some_methods");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 34);
show_backtrace(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline opts#Option#value (var114) on <var114:OptionBool> */
var119 = var114->attrs[COLOR_opts__Option___value].val; /* _value on <var114:OptionBool> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
var120 = ((struct instance_kernel__Bool*)var117)->value; /* autounbox from nullable Object to Bool */;
var_121 = var120;
if (var120){
{
var122 = abstract_compiler__MMethodDef__can_inline(var_mmethoddef, self);
}
var104 = var122;
} else {
var104 = var_121;
}
var81 = var104;
}
if (var81){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var125 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var123) on <var123:AbstractCompiler(SeparateCompiler)> */
var128 = var123->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var123:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
var_129 = var126;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var_129) on <var_129:ModelBuilder> */
var132 = var_129->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var_129:ModelBuilder> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
var133 = 1;
{
{ /* Inline kernel#Int#+ (var130,var133) on <var130:Int> */
/* Covariant cast for argument 0 (i) <var133:Int> isa OTHER */
/* <var133:Int> isa OTHER */
var136 = 1; /* easy <var133:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var140 = var130 + var133;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline= (var_129,var134) on <var_129:ModelBuilder> */
var_129->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l = var134; /* _nb_invok_by_inline on <var_129:ModelBuilder> */
RET_LABEL141:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var144 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var142) on <var142:AbstractCompiler(SeparateCompiler)> */
var147 = var142->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var142:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var145) on <var145:ModelBuilder> */
var150 = var145->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var145:ModelBuilder> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var148) on <var148:ToolContext> */
var153 = var148->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var148:ToolContext> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 58);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline opts#Option#value (var151) on <var151:OptionBool> */
var156 = var151->attrs[COLOR_opts__Option___value].val; /* _value on <var151:OptionBool> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
var157 = ((struct instance_kernel__Bool*)var154)->value; /* autounbox from nullable Object to Bool */;
if (var157){
if (varonce158) {
var159 = varonce158;
} else {
var160 = "count_invoke_by_inline++;";
var161 = 25;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var159); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var163 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
{ /* Inline abstract_compiler#Frame#init (var163,self,var_mmethoddef,var_recvtype,var_arguments) on <var163:Frame> */
/* Covariant cast for argument 0 (visitor) <self:SeparateCompilerVisitor> isa VISITOR */
/* <self:SeparateCompilerVisitor> isa VISITOR */
type_struct = var163->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype166 = type_struct->color;
idtype167 = type_struct->id;
if(cltype166 >= self->type->table_size) {
var165 = 0;
} else {
var165 = self->type->type_table[cltype166] == idtype167;
}
if (unlikely(!var165)) {
var_class_name168 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name168);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
}
var163->attrs[COLOR_abstract_compiler__Frame___visitor].val = self; /* _visitor on <var163:Frame> */
var163->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = var_mmethoddef; /* _mpropdef on <var163:Frame> */
var163->attrs[COLOR_abstract_compiler__Frame___receiver].val = var_recvtype; /* _receiver on <var163:Frame> */
var163->attrs[COLOR_abstract_compiler__Frame___arguments].val = var_arguments; /* _arguments on <var163:Frame> */
RET_LABEL164:(void)0;
}
}
var_frame = var163;
if (varonce169) {
var170 = varonce169;
} else {
var171 = "RET_LABEL";
var172 = 9;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
{
var174 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var170);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel= (var_frame,var174) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = var174; /* _returnlabel on <var_frame:Frame> */
RET_LABEL175:(void)0;
}
}
{
{ /* Inline abstract_compiler#Frame#returnvar= (var_frame,var_res) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val = var_res; /* _returnvar on <var_frame:Frame> */
RET_LABEL176:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var179 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var177 = var179;
RET_LABEL178:(void)0;
}
}
var_old_frame = var177;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL180:(void)0;
}
}
if (varonce181) {
var182 = varonce181;
} else {
var183 = "{ /* Inline ";
var184 = 12;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
if (varonce186) {
var187 = varonce186;
} else {
var188 = " (";
var189 = 2;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = ",";
var194 = 1;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
var196 = string__Collection__join(var_arguments, var192);
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = ") on ";
var200 = 5;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
{
var202 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var203 = abstract_compiler__RuntimeVariable__inspect(var202);
}
if (varonce204) {
var205 = varonce204;
} else {
var206 = " */";
var207 = 3;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
var209 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var209 = array_instance Array[Object] */
var210 = 7;
var211 = NEW_array__NativeArray(var210, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var211)->values[0] = (val*) var182;
((struct instance_array__NativeArray*)var211)->values[1] = (val*) var_mmethoddef;
((struct instance_array__NativeArray*)var211)->values[2] = (val*) var187;
((struct instance_array__NativeArray*)var211)->values[3] = (val*) var196;
((struct instance_array__NativeArray*)var211)->values[4] = (val*) var198;
((struct instance_array__NativeArray*)var211)->values[5] = (val*) var203;
((struct instance_array__NativeArray*)var211)->values[6] = (val*) var205;
{
((void (*)(val*, val*, long))(var209->class->vft[COLOR_array__Array__with_native]))(var209, var211, var210) /* with_native on <var209:Array[Object]>*/;
}
}
{
var212 = ((val* (*)(val*))(var209->class->vft[COLOR_string__Object__to_s]))(var209) /* to_s on <var209:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var212); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var213 = abstract_compiler__MMethodDef__compile_inside_to_c(var_mmethoddef, self, var_arguments);
}
var213;
{
{ /* Inline abstract_compiler#Frame#returnlabel (var_frame) on <var_frame:Frame> */
var216 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var_frame:Frame> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1146);
show_backtrace(1);
}
if (varonce217) {
var218 = varonce217;
} else {
var219 = ":(void)0;";
var220 = 9;
var221 = string__NativeString__to_s_with_length(var219, var220);
var218 = var221;
varonce217 = var218;
}
var222 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var222 = array_instance Array[Object] */
var223 = 2;
var224 = NEW_array__NativeArray(var223, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var224)->values[0] = (val*) var214;
((struct instance_array__NativeArray*)var224)->values[1] = (val*) var218;
{
((void (*)(val*, val*, long))(var222->class->vft[COLOR_array__Array__with_native]))(var222, var224, var223) /* with_native on <var222:Array[Object]>*/;
}
}
{
var225 = ((val* (*)(val*))(var222->class->vft[COLOR_string__Object__to_s]))(var222) /* to_s on <var222:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var225); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce226) {
var227 = varonce226;
} else {
var228 = "}";
var229 = 1;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var227); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL231:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var234 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var232) on <var232:AbstractCompiler(SeparateCompiler)> */
var237 = var232->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var232:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
var_238 = var235;
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var_238) on <var_238:ModelBuilder> */
var241 = var_238->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var_238:ModelBuilder> */
var239 = var241;
RET_LABEL240:(void)0;
}
}
var242 = 1;
{
{ /* Inline kernel#Int#+ (var239,var242) on <var239:Int> */
/* Covariant cast for argument 0 (i) <var242:Int> isa OTHER */
/* <var242:Int> isa OTHER */
var245 = 1; /* easy <var242:Int> isa OTHER*/
if (unlikely(!var245)) {
var_class_name248 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name248);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var249 = var239 + var242;
var243 = var249;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct= (var_238,var243) on <var_238:ModelBuilder> */
var_238->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l = var243; /* _nb_invok_by_direct on <var_238:ModelBuilder> */
RET_LABEL250:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var253 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var251) on <var251:AbstractCompiler(SeparateCompiler)> */
var256 = var251->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var251:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var254) on <var254:ModelBuilder> */
var259 = var254->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var254:ModelBuilder> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var257) on <var257:ToolContext> */
var262 = var257->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var257:ToolContext> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 58);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline opts#Option#value (var260) on <var260:OptionBool> */
var265 = var260->attrs[COLOR_opts__Option___value].val; /* _value on <var260:OptionBool> */
var263 = var265;
RET_LABEL264:(void)0;
}
}
var266 = ((struct instance_kernel__Bool*)var263)->value; /* autounbox from nullable Object to Bool */;
if (var266){
if (varonce267) {
var268 = varonce267;
} else {
var269 = "count_invoke_by_direct++;";
var270 = 25;
var271 = string__NativeString__to_s_with_length(var269, var270);
var268 = var271;
varonce267 = var268;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var268); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
separate_compiler__SeparateCompilerVisitor__adapt_signature(self, var_mmethoddef, var_arguments); /* Direct call separate_compiler#SeparateCompilerVisitor#adapt_signature on <self:SeparateCompilerVisitor>*/
}
{
var272 = abstract_compiler__MPropDef__c_name(var_mmethoddef);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var272); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
var273 = NULL;
if (var_res == NULL) {
var274 = 1; /* is null */
} else {
var274 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var273) on <var_res:nullable RuntimeVariable> */
var_other = var273;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var279 = var_res == var_other;
var277 = var279;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
}
var275 = var277;
goto RET_LABEL276;
RET_LABEL276:(void)0;
}
var274 = var275;
}
if (var274){
{
var280 = abstract_compiler__MPropDef__c_name(var_mmethoddef);
}
if (varonce281) {
var282 = varonce281;
} else {
var283 = "(";
var284 = 1;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
if (varonce286) {
var287 = varonce286;
} else {
var288 = ", ";
var289 = 2;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
{
var291 = string__Collection__join(var_arguments, var287);
}
if (varonce292) {
var293 = varonce292;
} else {
var294 = "); /* Direct call ";
var295 = 18;
var296 = string__NativeString__to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
if (varonce297) {
var298 = varonce297;
} else {
var299 = " on ";
var300 = 4;
var301 = string__NativeString__to_s_with_length(var299, var300);
var298 = var301;
varonce297 = var298;
}
{
var302 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var303 = abstract_compiler__RuntimeVariable__inspect(var302);
}
if (varonce304) {
var305 = varonce304;
} else {
var306 = "*/";
var307 = 2;
var308 = string__NativeString__to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
var309 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var309 = array_instance Array[Object] */
var310 = 8;
var311 = NEW_array__NativeArray(var310, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var311)->values[0] = (val*) var280;
((struct instance_array__NativeArray*)var311)->values[1] = (val*) var282;
((struct instance_array__NativeArray*)var311)->values[2] = (val*) var291;
((struct instance_array__NativeArray*)var311)->values[3] = (val*) var293;
((struct instance_array__NativeArray*)var311)->values[4] = (val*) var_mmethoddef;
((struct instance_array__NativeArray*)var311)->values[5] = (val*) var298;
((struct instance_array__NativeArray*)var311)->values[6] = (val*) var303;
((struct instance_array__NativeArray*)var311)->values[7] = (val*) var305;
{
((void (*)(val*, val*, long))(var309->class->vft[COLOR_array__Array__with_native]))(var309, var311, var310) /* with_native on <var309:Array[Object]>*/;
}
}
{
var312 = ((val* (*)(val*))(var309->class->vft[COLOR_string__Object__to_s]))(var309) /* to_s on <var309:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var312); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var313 = NULL;
var = var313;
goto RET_LABEL;
} else {
if (varonce314) {
var315 = varonce314;
} else {
var316 = " = ";
var317 = 3;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
{
var319 = abstract_compiler__MPropDef__c_name(var_mmethoddef);
}
if (varonce320) {
var321 = varonce320;
} else {
var322 = "(";
var323 = 1;
var324 = string__NativeString__to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
if (varonce325) {
var326 = varonce325;
} else {
var327 = ", ";
var328 = 2;
var329 = string__NativeString__to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
{
var330 = string__Collection__join(var_arguments, var326);
}
if (varonce331) {
var332 = varonce331;
} else {
var333 = ");";
var334 = 2;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
var336 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var336 = array_instance Array[Object] */
var337 = 6;
var338 = NEW_array__NativeArray(var337, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var338)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var338)->values[1] = (val*) var315;
((struct instance_array__NativeArray*)var338)->values[2] = (val*) var319;
((struct instance_array__NativeArray*)var338)->values[3] = (val*) var321;
((struct instance_array__NativeArray*)var338)->values[4] = (val*) var330;
((struct instance_array__NativeArray*)var338)->values[5] = (val*) var332;
{
((void (*)(val*, val*, long))(var336->class->vft[COLOR_array__Array__with_native]))(var336, var338, var337) /* with_native on <var336:Array[Object]>*/;
}
}
{
var339 = ((val* (*)(val*))(var336->class->vft[COLOR_string__Object__to_s]))(var336) /* to_s on <var336:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var339); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 436);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 440);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
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
short int var14 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_frame /* var frame: Frame */;
val* var16 /* : RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
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
{ /* Inline abstract_compiler#Frame#init (var4,self,var_mpropdef,var8,var_) on <var4:Frame> */
/* Covariant cast for argument 0 (visitor) <self:SeparateCompilerVisitor> isa VISITOR */
/* <self:SeparateCompilerVisitor> isa VISITOR */
type_struct = var4->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var14 = 0;
} else {
var14 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var14)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
}
var4->attrs[COLOR_abstract_compiler__Frame___visitor].val = self; /* _visitor on <var4:Frame> */
var4->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = var_mpropdef; /* _mpropdef on <var4:Frame> */
var4->attrs[COLOR_abstract_compiler__Frame___receiver].val = var8; /* _receiver on <var4:Frame> */
var4->attrs[COLOR_abstract_compiler__Frame___arguments].val = var_; /* _arguments on <var4:Frame> */
RET_LABEL13:(void)0;
}
}
var_frame = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL15:(void)0;
}
}
{
var16 = separate_compiler__SeparateCompilerVisitor__array_instance(self, var_varargs, var_elttype);
}
var_res = var16;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (self,var_old_frame) on <self:SeparateCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <self:SeparateCompilerVisitor> */
RET_LABEL17:(void)0;
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
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var7 /* : MPropDef */;
val* var8 /* : MClassDef */;
val* var10 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
val* var14 /* : MClassType */;
val* var16 /* : MClassType */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
short int var20 /* : Bool */;
val* var21 /* : MType */;
short int var22 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : AbstractCompiler */;
val* var45 /* : AbstractCompiler */;
val* var46 /* : ModelBuilder */;
val* var48 /* : ModelBuilder */;
val* var49 /* : ToolContext */;
val* var51 /* : ToolContext */;
val* var52 /* : OptionBool */;
val* var54 /* : OptionBool */;
val* var55 /* : nullable Object */;
val* var57 /* : nullable Object */;
short int var58 /* : Bool */;
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
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
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
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : Array[Object] */;
long var126 /* : Int */;
val* var127 /* : NativeArray[Object] */;
val* var128 /* : String */;
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
var3 = model__MProperty__intro(var_a);
}
{
{ /* Inline model#MAttributeDef#static_mtype (var3) on <var3:MPropDef(MAttributeDef)> */
var6 = var3->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var3:MPropDef(MAttributeDef)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1207);
show_backtrace(1);
}
var_mtype = var4;
{
var7 = model__MProperty__intro(var_a);
}
{
{ /* Inline model#MPropDef#mclassdef (var7) on <var7:MPropDef(MAttributeDef)> */
var10 = var7->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var7:MPropDef(MAttributeDef)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_intromclassdef = var8;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var13 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var16 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var19 = var_intromclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = 1;
{
var21 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var11, var14, var17, var20) /* resolve_for on <var_mtype:MType>*/;
}
var_mtype = var21;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var22 = 0;
} else {
var22 = var_mtype->type->type_table[cltype] == idtype;
}
if (var22){
if (varonce) {
var23 = varonce;
} else {
var24 = " = 1; /* easy isset: ";
var25 = 21;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " on ";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
var32 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " */";
var36 = 3;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 6;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var23;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var_a;
((struct instance_array__NativeArray*)var40)->values[3] = (val*) var28;
((struct instance_array__NativeArray*)var40)->values[4] = (val*) var32;
((struct instance_array__NativeArray*)var40)->values[5] = (val*) var34;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var42 = separate_compiler__MProperty__const_color(var_a);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var42); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var45 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var43) on <var43:AbstractCompiler(SeparateCompiler)> */
var48 = var43->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var43:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var46) on <var46:ModelBuilder> */
var51 = var46->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var46:ModelBuilder> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var49) on <var49:ToolContext> */
var54 = var49->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var49:ToolContext> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 28);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline opts#Option#value (var52) on <var52:OptionBool> */
var57 = var52->attrs[COLOR_opts__Option___value].val; /* _value on <var52:OptionBool> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var58 = ((struct instance_kernel__Bool*)var55)->value; /* autounbox from nullable Object to Bool */;
if (var58){
if (varonce59) {
var60 = varonce59;
} else {
var61 = " = ";
var62 = 3;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "->attrs[";
var67 = 8;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
var69 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "] != NULL; /* ";
var73 = 14;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = " on ";
var78 = 4;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
{
var80 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = "*/";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 10;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var60;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var88)->values[3] = (val*) var65;
((struct instance_array__NativeArray*)var88)->values[4] = (val*) var69;
((struct instance_array__NativeArray*)var88)->values[5] = (val*) var71;
((struct instance_array__NativeArray*)var88)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var88)->values[7] = (val*) var76;
((struct instance_array__NativeArray*)var88)->values[8] = (val*) var80;
((struct instance_array__NativeArray*)var88)->values[9] = (val*) var82;
{
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
}
{
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var89); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
var90 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "val*";
var94 = 4;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
var97 = string__FlatString___61d_61d(var90, var92);
var96 = var97;
}
if (var96){
if (varonce98) {
var99 = varonce98;
} else {
var100 = " = ";
var101 = 3;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "->attrs[";
var106 = 8;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
var108 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = "].val != NULL; /* ";
var112 = 18;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = " on ";
var117 = 4;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
var119 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = " */";
var123 = 3;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 10;
var127 = NEW_array__NativeArray(var126, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var127)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var127)->values[1] = (val*) var99;
((struct instance_array__NativeArray*)var127)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var127)->values[3] = (val*) var104;
((struct instance_array__NativeArray*)var127)->values[4] = (val*) var108;
((struct instance_array__NativeArray*)var127)->values[5] = (val*) var110;
((struct instance_array__NativeArray*)var127)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var127)->values[7] = (val*) var115;
((struct instance_array__NativeArray*)var127)->values[8] = (val*) var119;
((struct instance_array__NativeArray*)var127)->values[9] = (val*) var121;
{
((void (*)(val*, val*, long))(var125->class->vft[COLOR_array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
}
{
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce129) {
var130 = varonce129;
} else {
var131 = " = 1; /* NOT YET IMPLEMENTED: isset of primitives: ";
var132 = 51;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
if (varonce134) {
var135 = varonce134;
} else {
var136 = " on ";
var137 = 4;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
{
var139 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = " */";
var143 = 3;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
var145 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var145 = array_instance Array[Object] */
var146 = 6;
var147 = NEW_array__NativeArray(var146, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var147)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var147)->values[1] = (val*) var130;
((struct instance_array__NativeArray*)var147)->values[2] = (val*) var_a;
((struct instance_array__NativeArray*)var147)->values[3] = (val*) var135;
((struct instance_array__NativeArray*)var147)->values[4] = (val*) var139;
((struct instance_array__NativeArray*)var147)->values[5] = (val*) var141;
{
((void (*)(val*, val*, long))(var145->class->vft[COLOR_array__Array__with_native]))(var145, var147, var146) /* with_native on <var145:Array[Object]>*/;
}
}
{
var148 = ((val* (*)(val*))(var145->class->vft[COLOR_string__Object__to_s]))(var145) /* to_s on <var145:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
val* var2 /* : nullable MType */;
val* var4 /* : nullable MType */;
val* var_ret /* var ret: MType */;
val* var5 /* : MPropDef */;
val* var6 /* : MClassDef */;
val* var8 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var9 /* : MClassType */;
val* var11 /* : MClassType */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
short int var18 /* : Bool */;
val* var19 /* : MType */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : ModelBuilder */;
val* var25 /* : ModelBuilder */;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : nullable Object */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
val* var36 /* : AbstractCompiler */;
val* var38 /* : AbstractCompiler */;
val* var_ /* var : SeparateCompiler */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var46 /* : Int */;
static val* varonce;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
val* var56 /* : ModelBuilder */;
val* var58 /* : ModelBuilder */;
val* var59 /* : ToolContext */;
val* var61 /* : ToolContext */;
val* var62 /* : OptionBool */;
val* var64 /* : OptionBool */;
val* var65 /* : nullable Object */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
val* var69 /* : MClassType */;
val* var70 /* : MType */;
val* var_cret /* var cret: MType */;
val* var71 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
val* var100 /* : Array[Object] */;
long var101 /* : Int */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : String */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
short int var108 /* : Bool */;
short int var_109 /* var : Bool */;
val* var110 /* : AbstractCompiler */;
val* var112 /* : AbstractCompiler */;
val* var113 /* : ModelBuilder */;
val* var115 /* : ModelBuilder */;
val* var116 /* : ToolContext */;
val* var118 /* : ToolContext */;
val* var119 /* : OptionBool */;
val* var121 /* : OptionBool */;
val* var122 /* : nullable Object */;
val* var124 /* : nullable Object */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
val* var137 /* : Array[Object] */;
long var138 /* : Int */;
val* var139 /* : NativeArray[Object] */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
val* var146 /* : String */;
val* var148 /* : String */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
val* var158 /* : AbstractCompiler */;
val* var160 /* : AbstractCompiler */;
val* var161 /* : ModelBuilder */;
val* var163 /* : ModelBuilder */;
val* var164 /* : ToolContext */;
val* var166 /* : ToolContext */;
val* var167 /* : OptionBool */;
val* var169 /* : OptionBool */;
val* var170 /* : nullable Object */;
val* var172 /* : nullable Object */;
short int var173 /* : Bool */;
val* var174 /* : AbstractCompiler */;
val* var176 /* : AbstractCompiler */;
val* var_177 /* var : SeparateCompiler */;
long var178 /* : Int */;
long var180 /* : Int */;
long var181 /* : Int */;
long var182 /* : Int */;
short int var184 /* : Bool */;
int cltype185;
int idtype186;
const char* var_class_name187;
long var188 /* : Int */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : RuntimeVariable */;
val* var196 /* : RuntimeVariable */;
val* var_res197 /* var res: RuntimeVariable */;
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
val* var214 /* : String */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
long var223 /* : Int */;
val* var224 /* : FlatString */;
val* var225 /* : String */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : FlatString */;
val* var231 /* : Array[Object] */;
long var232 /* : Int */;
val* var233 /* : NativeArray[Object] */;
val* var234 /* : String */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
long var241 /* : Int */;
val* var242 /* : FlatString */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var_245 /* var : Bool */;
short int var246 /* : Bool */;
int cltype247;
int idtype248;
short int var249 /* : Bool */;
short int var_250 /* var : Bool */;
val* var251 /* : AbstractCompiler */;
val* var253 /* : AbstractCompiler */;
val* var254 /* : ModelBuilder */;
val* var256 /* : ModelBuilder */;
val* var257 /* : ToolContext */;
val* var259 /* : ToolContext */;
val* var260 /* : OptionBool */;
val* var262 /* : OptionBool */;
val* var263 /* : nullable Object */;
val* var265 /* : nullable Object */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
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
val* var278 /* : Array[Object] */;
long var279 /* : Int */;
val* var280 /* : NativeArray[Object] */;
val* var281 /* : String */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : String */;
val* var289 /* : String */;
val* var290 /* : Array[Object] */;
long var291 /* : Int */;
val* var292 /* : NativeArray[Object] */;
val* var293 /* : String */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
long var297 /* : Int */;
val* var298 /* : FlatString */;
val* var299 /* : AbstractCompiler */;
val* var301 /* : AbstractCompiler */;
val* var302 /* : ModelBuilder */;
val* var304 /* : ModelBuilder */;
val* var305 /* : ToolContext */;
val* var307 /* : ToolContext */;
val* var308 /* : OptionBool */;
val* var310 /* : OptionBool */;
val* var311 /* : nullable Object */;
val* var313 /* : nullable Object */;
short int var314 /* : Bool */;
val* var315 /* : AbstractCompiler */;
val* var317 /* : AbstractCompiler */;
val* var_318 /* var : SeparateCompiler */;
long var319 /* : Int */;
long var321 /* : Int */;
long var322 /* : Int */;
long var323 /* : Int */;
short int var325 /* : Bool */;
int cltype326;
int idtype327;
const char* var_class_name328;
long var329 /* : Int */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
var_a = p0;
var_recv = p1;
{
abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
var1 = model__MProperty__intro(var_a);
}
{
{ /* Inline model#MAttributeDef#static_mtype (var1) on <var1:MPropDef(MAttributeDef)> */
var4 = var1->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var1:MPropDef(MAttributeDef)> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1235);
show_backtrace(1);
}
var_ret = var2;
{
var5 = model__MProperty__intro(var_a);
}
{
{ /* Inline model#MPropDef#mclassdef (var5) on <var5:MPropDef(MAttributeDef)> */
var8 = var5->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var5:MPropDef(MAttributeDef)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_intromclassdef = var6;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var11 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var14 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var17 = var_intromclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = 1;
{
var19 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var9, var12, var15, var18) /* resolve_for on <var_ret:MType>*/;
}
var_ret = var19;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var20) on <var20:AbstractCompiler(SeparateCompiler)> */
var25 = var20->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var20:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var23) on <var23:ModelBuilder> */
var28 = var23->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var23:ModelBuilder> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var26) on <var26:ToolContext> */
var31 = var26->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var26:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline opts#Option#value (var29) on <var29:OptionBool> */
var34 = var29->attrs[COLOR_opts__Option___value].val; /* _value on <var29:OptionBool> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = ((struct instance_kernel__Bool*)var32)->value; /* autounbox from nullable Object to Bool */;
if (var35){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var38 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_ = var36;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (var_) on <var_:SeparateCompiler> */
var41 = var_->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <var_:SeparateCompiler> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = 1;
{
{ /* Inline kernel#Int#+ (var39,var42) on <var39:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var46 = var39 + var42;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count= (var_,var43) on <var_:SeparateCompiler> */
var_->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l = var43; /* _attr_read_count on <var_:SeparateCompiler> */
RET_LABEL47:(void)0;
}
}
if (varonce) {
var48 = varonce;
} else {
var49 = "count_attr_reads++;";
var50 = 19;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce = var48;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var52 = separate_compiler__MProperty__const_color(var_a);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var55 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var53) on <var53:AbstractCompiler(SeparateCompiler)> */
var58 = var53->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var53:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var56) on <var56:ModelBuilder> */
var61 = var56->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var56:ModelBuilder> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var59) on <var59:ToolContext> */
var64 = var59->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var59:ToolContext> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 28);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline opts#Option#value (var62) on <var62:OptionBool> */
var67 = var62->attrs[COLOR_opts__Option___value].val; /* _value on <var62:OptionBool> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var68 = ((struct instance_kernel__Bool*)var65)->value; /* autounbox from nullable Object to Bool */;
if (var68){
{
var69 = abstract_compiler__AbstractCompilerVisitor__object_type(self);
}
{
var70 = model__MType__as_nullable(var69);
}
var_cret = var70;
{
var71 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_cret);
}
var_res = var71;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (var_res,var_ret) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val = var_ret; /* _mcasttype on <var_res:RuntimeVariable> */
RET_LABEL72:(void)0;
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = " = ";
var76 = 3;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "->attrs[";
var81 = 8;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
var83 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "]; /* ";
var87 = 6;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = " on ";
var92 = 4;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
var94 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = " */";
var98 = 3;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
var100 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var100 = array_instance Array[Object] */
var101 = 10;
var102 = NEW_array__NativeArray(var101, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var102)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var102)->values[1] = (val*) var74;
((struct instance_array__NativeArray*)var102)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var102)->values[3] = (val*) var79;
((struct instance_array__NativeArray*)var102)->values[4] = (val*) var83;
((struct instance_array__NativeArray*)var102)->values[5] = (val*) var85;
((struct instance_array__NativeArray*)var102)->values[6] = (val*) var_a;
((struct instance_array__NativeArray*)var102)->values[7] = (val*) var90;
((struct instance_array__NativeArray*)var102)->values[8] = (val*) var94;
((struct instance_array__NativeArray*)var102)->values[9] = (val*) var96;
{
((void (*)(val*, val*, long))(var100->class->vft[COLOR_array__Array__with_native]))(var100, var102, var101) /* with_native on <var100:Array[Object]>*/;
}
}
{
var103 = ((val* (*)(val*))(var100->class->vft[COLOR_string__Object__to_s]))(var100) /* to_s on <var100:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var103); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
/* <var_ret:MType> isa MNullableType */
cltype106 = type_model__MNullableType.color;
idtype107 = type_model__MNullableType.id;
if(cltype106 >= var_ret->type->table_size) {
var105 = 0;
} else {
var105 = var_ret->type->type_table[cltype106] == idtype107;
}
var108 = !var105;
var_109 = var108;
if (var108){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var112 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var110) on <var110:AbstractCompiler(SeparateCompiler)> */
var115 = var110->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var110:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var113) on <var113:ModelBuilder> */
var118 = var113->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var113:ModelBuilder> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var116) on <var116:ToolContext> */
var121 = var116->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var116:ToolContext> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 48);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline opts#Option#value (var119) on <var119:OptionBool> */
var124 = var119->attrs[COLOR_opts__Option___value].val; /* _value on <var119:OptionBool> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
var125 = ((struct instance_kernel__Bool*)var122)->value; /* autounbox from nullable Object to Bool */;
var126 = !var125;
var104 = var126;
} else {
var104 = var_109;
}
if (var104){
if (varonce127) {
var128 = varonce127;
} else {
var129 = "if (unlikely(";
var130 = 13;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = " == NULL)) {";
var135 = 12;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var137 = array_instance Array[Object] */
var138 = 3;
var139 = NEW_array__NativeArray(var138, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var139)->values[0] = (val*) var128;
((struct instance_array__NativeArray*)var139)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var139)->values[2] = (val*) var133;
{
((void (*)(val*, val*, long))(var137->class->vft[COLOR_array__Array__with_native]))(var137, var139, var138) /* with_native on <var137:Array[Object]>*/;
}
}
{
var140 = ((val* (*)(val*))(var137->class->vft[COLOR_string__Object__to_s]))(var137) /* to_s on <var137:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = "Uninitialized attribute ";
var144 = 24;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var148 = var_a->attrs[COLOR_model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 2;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var142;
((struct instance_array__NativeArray*)var151)->values[1] = (val*) var146;
{
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
}
{
var152 = ((val* (*)(val*))(var149->class->vft[COLOR_string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "}";
var156 = 1;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var160 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var158) on <var158:AbstractCompiler(SeparateCompiler)> */
var163 = var158->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var158:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var161) on <var161:ModelBuilder> */
var166 = var161->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var161:ModelBuilder> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var164) on <var164:ToolContext> */
var169 = var164->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var164:ToolContext> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline opts#Option#value (var167) on <var167:OptionBool> */
var172 = var167->attrs[COLOR_opts__Option___value].val; /* _value on <var167:OptionBool> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
var173 = ((struct instance_kernel__Bool*)var170)->value; /* autounbox from nullable Object to Bool */;
if (var173){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var176 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_177 = var174;
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (var_177) on <var_177:SeparateCompiler> */
var180 = var_177->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_177:SeparateCompiler> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
var181 = 1;
{
{ /* Inline kernel#Int#+ (var178,var181) on <var178:Int> */
/* Covariant cast for argument 0 (i) <var181:Int> isa OTHER */
/* <var181:Int> isa OTHER */
var184 = 1; /* easy <var181:Int> isa OTHER*/
if (unlikely(!var184)) {
var_class_name187 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name187);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var188 = var178 + var181;
var182 = var188;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count= (var_177,var182) on <var_177:SeparateCompiler> */
var_177->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l = var182; /* _isset_checks_count on <var_177:SeparateCompiler> */
RET_LABEL189:(void)0;
}
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "count_isset_checks++;";
var193 = 21;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
{
var195 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_res, var_ret);
}
var = var195;
goto RET_LABEL;
} else {
{
var196 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_ret);
}
var_res197 = var196;
if (varonce198) {
var199 = varonce198;
} else {
var200 = " = ";
var201 = 3;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = "->attrs[";
var206 = 8;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
{
var208 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = "].";
var212 = 2;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
{
var214 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctypename]))(var_ret) /* ctypename on <var_ret:MType>*/;
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = "; /* ";
var218 = 5;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
if (varonce220) {
var221 = varonce220;
} else {
var222 = " on ";
var223 = 4;
var224 = string__NativeString__to_s_with_length(var222, var223);
var221 = var224;
varonce220 = var221;
}
{
var225 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce226) {
var227 = varonce226;
} else {
var228 = " */";
var229 = 3;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
var231 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var231 = array_instance Array[Object] */
var232 = 12;
var233 = NEW_array__NativeArray(var232, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var233)->values[0] = (val*) var_res197;
((struct instance_array__NativeArray*)var233)->values[1] = (val*) var199;
((struct instance_array__NativeArray*)var233)->values[2] = (val*) var_recv;
((struct instance_array__NativeArray*)var233)->values[3] = (val*) var204;
((struct instance_array__NativeArray*)var233)->values[4] = (val*) var208;
((struct instance_array__NativeArray*)var233)->values[5] = (val*) var210;
((struct instance_array__NativeArray*)var233)->values[6] = (val*) var214;
((struct instance_array__NativeArray*)var233)->values[7] = (val*) var216;
((struct instance_array__NativeArray*)var233)->values[8] = (val*) var_a;
((struct instance_array__NativeArray*)var233)->values[9] = (val*) var221;
((struct instance_array__NativeArray*)var233)->values[10] = (val*) var225;
((struct instance_array__NativeArray*)var233)->values[11] = (val*) var227;
{
((void (*)(val*, val*, long))(var231->class->vft[COLOR_array__Array__with_native]))(var231, var233, var232) /* with_native on <var231:Array[Object]>*/;
}
}
{
var234 = ((val* (*)(val*))(var231->class->vft[COLOR_string__Object__to_s]))(var231) /* to_s on <var231:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var234); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var237 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:MType>*/;
}
if (varonce238) {
var239 = varonce238;
} else {
var240 = "val*";
var241 = 4;
var242 = string__NativeString__to_s_with_length(var240, var241);
var239 = var242;
varonce238 = var239;
}
{
var244 = string__FlatString___61d_61d(var237, var239);
var243 = var244;
}
var_245 = var243;
if (var243){
/* <var_ret:MType> isa MNullableType */
cltype247 = type_model__MNullableType.color;
idtype248 = type_model__MNullableType.id;
if(cltype247 >= var_ret->type->table_size) {
var246 = 0;
} else {
var246 = var_ret->type->type_table[cltype247] == idtype248;
}
var249 = !var246;
var236 = var249;
} else {
var236 = var_245;
}
var_250 = var236;
if (var236){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var253 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var251) on <var251:AbstractCompiler(SeparateCompiler)> */
var256 = var251->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var251:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var254) on <var254:ModelBuilder> */
var259 = var254->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var254:ModelBuilder> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var257) on <var257:ToolContext> */
var262 = var257->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var257:ToolContext> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 48);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline opts#Option#value (var260) on <var260:OptionBool> */
var265 = var260->attrs[COLOR_opts__Option___value].val; /* _value on <var260:OptionBool> */
var263 = var265;
RET_LABEL264:(void)0;
}
}
var266 = ((struct instance_kernel__Bool*)var263)->value; /* autounbox from nullable Object to Bool */;
var267 = !var266;
var235 = var267;
} else {
var235 = var_250;
}
if (var235){
if (varonce268) {
var269 = varonce268;
} else {
var270 = "if (unlikely(";
var271 = 13;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = " == NULL)) {";
var276 = 12;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
var278 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var278 = array_instance Array[Object] */
var279 = 3;
var280 = NEW_array__NativeArray(var279, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var280)->values[0] = (val*) var269;
((struct instance_array__NativeArray*)var280)->values[1] = (val*) var_res197;
((struct instance_array__NativeArray*)var280)->values[2] = (val*) var274;
{
((void (*)(val*, val*, long))(var278->class->vft[COLOR_array__Array__with_native]))(var278, var280, var279) /* with_native on <var278:Array[Object]>*/;
}
}
{
var281 = ((val* (*)(val*))(var278->class->vft[COLOR_string__Object__to_s]))(var278) /* to_s on <var278:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var281); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = "Uninitialized attribute ";
var285 = 24;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var289 = var_a->attrs[COLOR_model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
var290 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var290 = array_instance Array[Object] */
var291 = 2;
var292 = NEW_array__NativeArray(var291, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var292)->values[0] = (val*) var283;
((struct instance_array__NativeArray*)var292)->values[1] = (val*) var287;
{
((void (*)(val*, val*, long))(var290->class->vft[COLOR_array__Array__with_native]))(var290, var292, var291) /* with_native on <var290:Array[Object]>*/;
}
}
{
var293 = ((val* (*)(val*))(var290->class->vft[COLOR_string__Object__to_s]))(var290) /* to_s on <var290:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(self, var293); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (varonce294) {
var295 = varonce294;
} else {
var296 = "}";
var297 = 1;
var298 = string__NativeString__to_s_with_length(var296, var297);
var295 = var298;
varonce294 = var295;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var295); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var301 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var299) on <var299:AbstractCompiler(SeparateCompiler)> */
var304 = var299->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var299:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var304 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var302 = var304;
RET_LABEL303:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var302) on <var302:ModelBuilder> */
var307 = var302->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var302:ModelBuilder> */
if (unlikely(var307 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var305) on <var305:ToolContext> */
var310 = var305->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var305:ToolContext> */
if (unlikely(var310 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 60);
show_backtrace(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
{
{ /* Inline opts#Option#value (var308) on <var308:OptionBool> */
var313 = var308->attrs[COLOR_opts__Option___value].val; /* _value on <var308:OptionBool> */
var311 = var313;
RET_LABEL312:(void)0;
}
}
var314 = ((struct instance_kernel__Bool*)var311)->value; /* autounbox from nullable Object to Bool */;
if (var314){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var317 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var317 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var315 = var317;
RET_LABEL316:(void)0;
}
}
var_318 = var315;
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (var_318) on <var_318:SeparateCompiler> */
var321 = var_318->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_318:SeparateCompiler> */
var319 = var321;
RET_LABEL320:(void)0;
}
}
var322 = 1;
{
{ /* Inline kernel#Int#+ (var319,var322) on <var319:Int> */
/* Covariant cast for argument 0 (i) <var322:Int> isa OTHER */
/* <var322:Int> isa OTHER */
var325 = 1; /* easy <var322:Int> isa OTHER*/
if (unlikely(!var325)) {
var_class_name328 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name328);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var329 = var319 + var322;
var323 = var329;
goto RET_LABEL324;
RET_LABEL324:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count= (var_318,var323) on <var_318:SeparateCompiler> */
var_318->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l = var323; /* _isset_checks_count on <var_318:SeparateCompiler> */
RET_LABEL330:(void)0;
}
}
if (varonce331) {
var332 = varonce331;
} else {
var333 = "count_isset_checks++;";
var334 = 21;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var332); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
var = var_res197;
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
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var4 /* : MPropDef */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
val* var18 /* : MType */;
val* var19 /* : RuntimeVariable */;
val* var20 /* : String */;
val* var21 /* : AbstractCompiler */;
val* var23 /* : AbstractCompiler */;
val* var24 /* : ModelBuilder */;
val* var26 /* : ModelBuilder */;
val* var27 /* : ToolContext */;
val* var29 /* : ToolContext */;
val* var30 /* : OptionBool */;
val* var32 /* : OptionBool */;
val* var33 /* : nullable Object */;
val* var35 /* : nullable Object */;
short int var36 /* : Bool */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var_attr /* var attr: String */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
int cltype;
int idtype;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : MClassType */;
val* var120 /* : MType */;
val* var121 /* : RuntimeVariable */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : FlatString */;
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
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : FlatString */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : FlatString */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : FlatString */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : FlatString */;
val* var204 /* : String */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
val* var210 /* : Array[Object] */;
long var211 /* : Int */;
val* var212 /* : NativeArray[Object] */;
val* var213 /* : String */;
var_a = p0;
var_recv = p1;
var_value = p2;
{
abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:SeparateCompilerVisitor>*/
}
{
var = model__MProperty__intro(var_a);
}
{
{ /* Inline model#MAttributeDef#static_mtype (var) on <var:MPropDef(MAttributeDef)> */
var3 = var->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var:MPropDef(MAttributeDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1292);
show_backtrace(1);
}
var_mtype = var1;
{
var4 = model__MProperty__intro(var_a);
}
{
{ /* Inline model#MPropDef#mclassdef (var4) on <var4:MPropDef(MAttributeDef)> */
var7 = var4->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var4:MPropDef(MAttributeDef)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_intromclassdef = var5;
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var10 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var13 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var16 = var_intromclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = 1;
{
var18 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var8, var11, var14, var17) /* resolve_for on <var_mtype:MType>*/;
}
var_mtype = var18;
{
var19 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_value, var_mtype);
}
var_value = var19;
{
var20 = separate_compiler__MProperty__const_color(var_a);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var20); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var21) on <var21:AbstractCompiler(SeparateCompiler)> */
var26 = var21->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var21:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var24) on <var24:ModelBuilder> */
var29 = var24->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var24:ModelBuilder> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var27) on <var27:ToolContext> */
var32 = var27->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var27:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 28);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline opts#Option#value (var30) on <var30:OptionBool> */
var35 = var30->attrs[COLOR_opts__Option___value].val; /* _value on <var30:OptionBool> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = ((struct instance_kernel__Bool*)var33)->value; /* autounbox from nullable Object to Bool */;
if (var36){
if (varonce) {
var37 = varonce;
} else {
var38 = "->attrs[";
var39 = 8;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
{
var41 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "]";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 4;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var37;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var41;
((struct instance_array__NativeArray*)var49)->values[3] = (val*) var43;
{
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
var_attr = var50;
{
var51 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "val*";
var55 = 4;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
{ /* Inline kernel#Object#!= (var51,var53) on <var51:String> */
var_other = var53;
{
var61 = ((short int (*)(val*, val*))(var51->class->vft[COLOR_kernel__Object___61d_61d]))(var51, var_other) /* == on <var51:String>*/;
var60 = var61;
}
var62 = !var60;
var58 = var62;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var63 = 0;
} else {
var63 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var63)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1303);
show_backtrace(1);
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "if (";
var67 = 4;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = " != NULL) {";
var72 = 11;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 3;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var65;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var_attr;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var70;
{
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
}
{
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var77); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "((struct instance_";
var81 = 18;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
var83 = separate_compiler__MClassType__c_instance_name(var_mtype);
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "*)";
var87 = 2;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = ")->value = ";
var92 = 11;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "; /* ";
var97 = 5;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = " on ";
var102 = 4;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
var104 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = " */";
var108 = 3;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 11;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var79;
((struct instance_array__NativeArray*)var112)->values[1] = (val*) var83;
((struct instance_array__NativeArray*)var112)->values[2] = (val*) var85;
((struct instance_array__NativeArray*)var112)->values[3] = (val*) var_attr;
((struct instance_array__NativeArray*)var112)->values[4] = (val*) var90;
((struct instance_array__NativeArray*)var112)->values[5] = (val*) var_value;
((struct instance_array__NativeArray*)var112)->values[6] = (val*) var95;
((struct instance_array__NativeArray*)var112)->values[7] = (val*) var_a;
((struct instance_array__NativeArray*)var112)->values[8] = (val*) var100;
((struct instance_array__NativeArray*)var112)->values[9] = (val*) var104;
((struct instance_array__NativeArray*)var112)->values[10] = (val*) var106;
{
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val*))(var110->class->vft[COLOR_string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = "} else {";
var117 = 8;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var119 = abstract_compiler__AbstractCompilerVisitor__object_type(self);
}
{
var120 = model__MType__as_nullable(var119);
}
{
var121 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_value, var120);
}
var_value = var121;
if (varonce122) {
var123 = varonce122;
} else {
var124 = " = ";
var125 = 3;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = "; /* ";
var130 = 5;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = " on ";
var135 = 4;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
{
var137 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = " */";
var141 = 3;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 8;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var_attr;
((struct instance_array__NativeArray*)var145)->values[1] = (val*) var123;
((struct instance_array__NativeArray*)var145)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var145)->values[3] = (val*) var128;
((struct instance_array__NativeArray*)var145)->values[4] = (val*) var_a;
((struct instance_array__NativeArray*)var145)->values[5] = (val*) var133;
((struct instance_array__NativeArray*)var145)->values[6] = (val*) var137;
((struct instance_array__NativeArray*)var145)->values[7] = (val*) var139;
{
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
}
{
var146 = ((val* (*)(val*))(var143->class->vft[COLOR_string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = "}";
var150 = 1;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce152) {
var153 = varonce152;
} else {
var154 = " = ";
var155 = 3;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = "; /* ";
var160 = 5;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
if (varonce162) {
var163 = varonce162;
} else {
var164 = " on ";
var165 = 4;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
{
var167 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = " */";
var171 = 3;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 8;
var175 = NEW_array__NativeArray(var174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var175)->values[0] = (val*) var_attr;
((struct instance_array__NativeArray*)var175)->values[1] = (val*) var153;
((struct instance_array__NativeArray*)var175)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var175)->values[3] = (val*) var158;
((struct instance_array__NativeArray*)var175)->values[4] = (val*) var_a;
((struct instance_array__NativeArray*)var175)->values[5] = (val*) var163;
((struct instance_array__NativeArray*)var175)->values[6] = (val*) var167;
((struct instance_array__NativeArray*)var175)->values[7] = (val*) var169;
{
((void (*)(val*, val*, long))(var173->class->vft[COLOR_array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var176 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
} else {
if (varonce177) {
var178 = varonce177;
} else {
var179 = "->attrs[";
var180 = 8;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
{
var182 = separate_compiler__MProperty__const_color(var_a);
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = "].";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
{
var188 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctypename]))(var_mtype) /* ctypename on <var_mtype:MType>*/;
}
if (varonce189) {
var190 = varonce189;
} else {
var191 = " = ";
var192 = 3;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
if (varonce194) {
var195 = varonce194;
} else {
var196 = "; /* ";
var197 = 5;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
if (varonce199) {
var200 = varonce199;
} else {
var201 = " on ";
var202 = 4;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
{
var204 = abstract_compiler__RuntimeVariable__inspect(var_recv);
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = " */";
var208 = 3;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
var210 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var210 = array_instance Array[Object] */
var211 = 12;
var212 = NEW_array__NativeArray(var211, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var212)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var212)->values[1] = (val*) var178;
((struct instance_array__NativeArray*)var212)->values[2] = (val*) var182;
((struct instance_array__NativeArray*)var212)->values[3] = (val*) var184;
((struct instance_array__NativeArray*)var212)->values[4] = (val*) var188;
((struct instance_array__NativeArray*)var212)->values[5] = (val*) var190;
((struct instance_array__NativeArray*)var212)->values[6] = (val*) var_value;
((struct instance_array__NativeArray*)var212)->values[7] = (val*) var195;
((struct instance_array__NativeArray*)var212)->values[8] = (val*) var_a;
((struct instance_array__NativeArray*)var212)->values[9] = (val*) var200;
((struct instance_array__NativeArray*)var212)->values[10] = (val*) var204;
((struct instance_array__NativeArray*)var212)->values[11] = (val*) var206;
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1352);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var21) on <var21:nullable Frame> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var26 = var21->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var21:nullable Frame> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1353);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var30) on <var30:nullable Frame> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var35 = var30->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var30:nullable Frame> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
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
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 155);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
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
/* method separate_compiler#SeparateCompilerVisitor#type_test for (self: SeparateCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
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
val* var_compiler /* var compiler: SeparateCompiler */;
val* var23 /* : nullable Frame */;
val* var25 /* : nullable Frame */;
val* var26 /* : Array[RuntimeVariable] */;
val* var28 /* : Array[RuntimeVariable] */;
val* var29 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var30 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var31 /* : MClassType */;
val* var32 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var_cltype /* var cltype: String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : String */;
val* var_idtype /* var idtype: String */;
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
short int var73 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var_accept_null /* var accept_null: String */;
val* var_ntype /* var ntype: MType */;
short int var79 /* : Bool */;
int cltype;
int idtype;
val* var80 /* : MType */;
val* var82 /* : MType */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
val* var88 /* : MType */;
val* var90 /* : MType */;
val* var91 /* : nullable Frame */;
val* var93 /* : nullable Frame */;
val* var94 /* : MPropDef */;
val* var96 /* : MPropDef */;
val* var97 /* : MClassDef */;
val* var99 /* : MClassDef */;
val* var100 /* : MModule */;
val* var102 /* : MModule */;
val* var103 /* : nullable Frame */;
val* var105 /* : nullable Frame */;
val* var106 /* : MPropDef */;
val* var108 /* : MPropDef */;
val* var109 /* : MClassDef */;
val* var111 /* : MClassDef */;
val* var112 /* : MClassType */;
val* var114 /* : MClassType */;
short int var115 /* : Bool */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : String */;
val* var136 /* : ModelBuilder */;
val* var138 /* : ModelBuilder */;
val* var139 /* : ToolContext */;
val* var141 /* : ToolContext */;
val* var142 /* : OptionBool */;
val* var144 /* : OptionBool */;
val* var145 /* : nullable Object */;
val* var147 /* : nullable Object */;
short int var148 /* : Bool */;
val* var149 /* : AbstractCompiler */;
val* var151 /* : AbstractCompiler */;
val* var152 /* : HashMap[String, Int] */;
val* var154 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_155 /* var : String */;
val* var156 /* : nullable Object */;
long var157 /* : Int */;
long var158 /* : Int */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name;
long var163 /* : Int */;
long var164 /* : Int */;
val* var165 /* : nullable Object */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : FlatString */;
val* var176 /* : Array[Object] */;
long var177 /* : Int */;
val* var178 /* : NativeArray[Object] */;
val* var179 /* : String */;
short int var180 /* : Bool */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : FlatString */;
val* var186 /* : String */;
val* var_type_struct /* var type_struct: String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : FlatString */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
val* var201 /* : nullable Frame */;
val* var203 /* : nullable Frame */;
val* var204 /* : MPropDef */;
val* var206 /* : MPropDef */;
val* var207 /* : MClassDef */;
val* var209 /* : MClassDef */;
val* var210 /* : String */;
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
val* var221 /* : String */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
val* var227 /* : Array[Object] */;
long var228 /* : Int */;
val* var229 /* : NativeArray[Object] */;
val* var230 /* : String */;
val* var231 /* : ModelBuilder */;
val* var233 /* : ModelBuilder */;
val* var234 /* : ToolContext */;
val* var236 /* : ToolContext */;
val* var237 /* : OptionBool */;
val* var239 /* : OptionBool */;
val* var240 /* : nullable Object */;
val* var242 /* : nullable Object */;
short int var243 /* : Bool */;
val* var244 /* : AbstractCompiler */;
val* var246 /* : AbstractCompiler */;
val* var247 /* : HashMap[String, Int] */;
val* var249 /* : HashMap[String, Int] */;
val* var_250 /* var : HashMap[String, Int] */;
val* var_251 /* var : String */;
val* var252 /* : nullable Object */;
long var253 /* : Int */;
long var254 /* : Int */;
short int var256 /* : Bool */;
int cltype257;
int idtype258;
const char* var_class_name259;
long var260 /* : Int */;
long var261 /* : Int */;
val* var262 /* : nullable Object */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : FlatString */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : FlatString */;
val* var273 /* : Array[Object] */;
long var274 /* : Int */;
val* var275 /* : NativeArray[Object] */;
val* var276 /* : String */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : FlatString */;
val* var287 /* : Array[Object] */;
long var288 /* : Int */;
val* var289 /* : NativeArray[Object] */;
val* var290 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
long var299 /* : Int */;
val* var300 /* : FlatString */;
val* var301 /* : Array[Object] */;
long var302 /* : Int */;
val* var303 /* : NativeArray[Object] */;
val* var304 /* : String */;
short int var305 /* : Bool */;
short int var_306 /* var : Bool */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : FlatString */;
short int var312 /* : Bool */;
short int var313 /* : Bool */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
val* var319 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
long var323 /* : Int */;
val* var324 /* : FlatString */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : FlatString */;
val* var330 /* : Array[Object] */;
long var331 /* : Int */;
val* var332 /* : NativeArray[Object] */;
val* var333 /* : String */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
long var342 /* : Int */;
val* var343 /* : FlatString */;
val* var344 /* : Array[Object] */;
long var345 /* : Int */;
val* var346 /* : NativeArray[Object] */;
val* var347 /* : String */;
val* var348 /* : String */;
short int var349 /* : Bool */;
int cltype350;
int idtype351;
val* var352 /* : Set[MType] */;
val* var354 /* : Set[MType] */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
long var358 /* : Int */;
val* var359 /* : FlatString */;
val* var360 /* : String */;
val* var361 /* : Array[Object] */;
long var362 /* : Int */;
val* var363 /* : NativeArray[Object] */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : FlatString */;
val* var370 /* : String */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : FlatString */;
val* var376 /* : Array[Object] */;
long var377 /* : Int */;
val* var378 /* : NativeArray[Object] */;
val* var379 /* : String */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
long var383 /* : Int */;
val* var384 /* : FlatString */;
val* var385 /* : String */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : FlatString */;
val* var391 /* : Array[Object] */;
long var392 /* : Int */;
val* var393 /* : NativeArray[Object] */;
val* var394 /* : String */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : NativeString */;
long var398 /* : Int */;
val* var399 /* : FlatString */;
val* var400 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : FlatString */;
val* var406 /* : Array[Object] */;
long var407 /* : Int */;
val* var408 /* : NativeArray[Object] */;
val* var409 /* : String */;
val* var410 /* : ModelBuilder */;
val* var412 /* : ModelBuilder */;
val* var413 /* : ToolContext */;
val* var415 /* : ToolContext */;
val* var416 /* : OptionBool */;
val* var418 /* : OptionBool */;
val* var419 /* : nullable Object */;
val* var421 /* : nullable Object */;
short int var422 /* : Bool */;
val* var423 /* : AbstractCompiler */;
val* var425 /* : AbstractCompiler */;
val* var426 /* : HashMap[String, Int] */;
val* var428 /* : HashMap[String, Int] */;
val* var_429 /* var : HashMap[String, Int] */;
val* var_430 /* var : String */;
val* var431 /* : nullable Object */;
long var432 /* : Int */;
long var433 /* : Int */;
short int var435 /* : Bool */;
int cltype436;
int idtype437;
const char* var_class_name438;
long var439 /* : Int */;
long var440 /* : Int */;
val* var441 /* : nullable Object */;
static val* varonce442;
val* var443 /* : String */;
char* var444 /* : NativeString */;
long var445 /* : Int */;
val* var446 /* : FlatString */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : FlatString */;
val* var452 /* : Array[Object] */;
long var453 /* : Int */;
val* var454 /* : NativeArray[Object] */;
val* var455 /* : String */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : NativeString */;
long var459 /* : Int */;
val* var460 /* : FlatString */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
long var464 /* : Int */;
val* var465 /* : FlatString */;
val* var466 /* : String */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : NativeString */;
long var470 /* : Int */;
val* var471 /* : FlatString */;
val* var472 /* : Array[Object] */;
long var473 /* : Int */;
val* var474 /* : NativeArray[Object] */;
val* var475 /* : String */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
long var479 /* : Int */;
val* var480 /* : FlatString */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
long var484 /* : Int */;
val* var485 /* : FlatString */;
val* var486 /* : Array[Object] */;
long var487 /* : Int */;
val* var488 /* : NativeArray[Object] */;
val* var489 /* : String */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
long var493 /* : Int */;
val* var494 /* : FlatString */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
long var498 /* : Int */;
val* var499 /* : FlatString */;
val* var500 /* : Array[Object] */;
long var501 /* : Int */;
val* var502 /* : NativeArray[Object] */;
val* var503 /* : String */;
static val* varonce504;
val* var505 /* : String */;
char* var506 /* : NativeString */;
long var507 /* : Int */;
val* var508 /* : FlatString */;
val* var509 /* : String */;
val* var_value_type_info /* var value_type_info: String */;
static val* varonce510;
val* var511 /* : String */;
char* var512 /* : NativeString */;
long var513 /* : Int */;
val* var514 /* : FlatString */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : FlatString */;
static val* varonce520;
val* var521 /* : String */;
char* var522 /* : NativeString */;
long var523 /* : Int */;
val* var524 /* : FlatString */;
val* var525 /* : Array[Object] */;
long var526 /* : Int */;
val* var527 /* : NativeArray[Object] */;
val* var528 /* : String */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
long var532 /* : Int */;
val* var533 /* : FlatString */;
val* var534 /* : Array[Object] */;
long var535 /* : Int */;
val* var536 /* : NativeArray[Object] */;
val* var537 /* : String */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : NativeString */;
long var541 /* : Int */;
val* var542 /* : FlatString */;
static val* varonce543;
val* var544 /* : String */;
char* var545 /* : NativeString */;
long var546 /* : Int */;
val* var547 /* : FlatString */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
long var551 /* : Int */;
val* var552 /* : FlatString */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : FlatString */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : NativeString */;
long var561 /* : Int */;
val* var562 /* : FlatString */;
val* var563 /* : Array[Object] */;
long var564 /* : Int */;
val* var565 /* : NativeArray[Object] */;
val* var566 /* : String */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : NativeString */;
long var570 /* : Int */;
val* var571 /* : FlatString */;
static val* varonce572;
val* var573 /* : String */;
char* var574 /* : NativeString */;
long var575 /* : Int */;
val* var576 /* : FlatString */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "/* ";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__RuntimeVariable__inspect(var_value);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = " isa ";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = " */";
var14 = 3;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 5;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var18)->values[4] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_compiler = var20;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1368);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var23) on <var23:nullable Frame> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var28 = var23->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var23:nullable Frame> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = abstract_collection__SequenceRead__first(var26);
}
var_recv = var29;
{
var30 = separate_compiler__SeparateCompilerVisitor__type_info(self, var_recv);
}
var_recv_type_info = var30;
{
var31 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var32 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var31);
}
var_res = var32;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "cltype";
var36 = 6;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
var38 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var34);
}
var_cltype = var38;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "int ";
var42 = 4;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = ";";
var47 = 1;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 3;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var51)->values[2] = (val*) var45;
{
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
}
{
var52 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "idtype";
var56 = 6;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
var58 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var54);
}
var_idtype = var58;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "int ";
var62 = 4;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = ";";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 3;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var_idtype;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var65;
{
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
var73 = separate_compiler__SeparateCompilerVisitor__maybe_null(self, var_value);
}
var_maybe_null = var73;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "0";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var_accept_null = var75;
var_ntype = var_mtype;
/* <var_ntype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_ntype->type->table_size) {
var79 = 0;
} else {
var79 = var_ntype->type->type_table[cltype] == idtype;
}
if (var79){
{
{ /* Inline model#MNullableType#mtype (var_ntype) on <var_ntype:MType(MNullableType)> */
var82 = var_ntype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_ntype:MType(MNullableType)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_ntype = var80;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "1";
var86 = 1;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var_accept_null = var84;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var90 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var93 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1386);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var91) on <var91:nullable Frame> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var96 = var91->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var91:nullable Frame> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var94) on <var94:MPropDef> */
var99 = var94->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var94:MPropDef> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var97) on <var97:MClassDef> */
var102 = var97->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var97:MClassDef> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var105 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (var103 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1386);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var103) on <var103:nullable Frame> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var108 = var103->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var103:nullable Frame> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var106) on <var106:MPropDef> */
var111 = var106->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var106:MPropDef> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var109) on <var109:MClassDef> */
var114 = var109->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var109:MClassDef> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = model__MType__is_subtype(var88, var100, var112, var_mtype);
}
if (var115){
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = 1; /* easy ";
var119 = 14;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
var121 = abstract_compiler__RuntimeVariable__inspect(var_value);
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " isa ";
var125 = 5;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
if (varonce127) {
var128 = varonce127;
} else {
var129 = "*/";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 6;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var117;
((struct instance_array__NativeArray*)var134)->values[2] = (val*) var121;
((struct instance_array__NativeArray*)var134)->values[3] = (val*) var123;
((struct instance_array__NativeArray*)var134)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var134)->values[5] = (val*) var128;
{
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
}
{
var135 = ((val* (*)(val*))(var132->class->vft[COLOR_string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var135); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var138 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var136) on <var136:ModelBuilder> */
var141 = var136->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var136:ModelBuilder> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var139) on <var139:ToolContext> */
var144 = var139->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var139:ToolContext> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline opts#Option#value (var142) on <var142:OptionBool> */
var147 = var142->attrs[COLOR_opts__Option___value].val; /* _value on <var142:OptionBool> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
var148 = ((struct instance_kernel__Bool*)var145)->value; /* autounbox from nullable Object to Bool */;
if (var148){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var151 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (var149) on <var149:AbstractCompiler(SeparateCompiler)> */
var154 = var149->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var149:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 891);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
var_ = var152;
var_155 = var_tag;
{
var156 = hash_collection__HashMap___91d_93d(var_, var_155);
}
var157 = 1;
{
{ /* Inline kernel#Int#+ (var156,var157) on <var156:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var157:Int> isa OTHER */
/* <var157:Int> isa OTHER */
var160 = 1; /* easy <var157:Int> isa OTHER*/
if (unlikely(!var160)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var163 = ((struct instance_kernel__Int*)var156)->value; /* autounbox from nullable Object to Int */;
var164 = var163 + var157;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
{
var165 = BOX_kernel__Int(var158); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_, var_155, var165); /* Direct call hash_collection#HashMap#[]= on <var_:HashMap[String, Int]>*/
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = "count_type_test_skipped_";
var169 = 24;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = "++;";
var174 = 3;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var176 = array_instance Array[Object] */
var177 = 3;
var178 = NEW_array__NativeArray(var177, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var178)->values[0] = (val*) var167;
((struct instance_array__NativeArray*)var178)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var178)->values[2] = (val*) var172;
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
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var180 = ((short int (*)(val*))(var_ntype->class->vft[COLOR_model__MType__need_anchor]))(var_ntype) /* need_anchor on <var_ntype:MType>*/;
}
if (var180){
if (varonce181) {
var182 = varonce181;
} else {
var183 = "type_struct";
var184 = 11;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
{
var186 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var182);
}
var_type_struct = var186;
if (varonce187) {
var188 = varonce187;
} else {
var189 = "const struct type* ";
var190 = 19;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = ";";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 3;
var199 = NEW_array__NativeArray(var198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var199)->values[0] = (val*) var188;
((struct instance_array__NativeArray*)var199)->values[1] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var199)->values[2] = (val*) var193;
{
((void (*)(val*, val*, long))(var197->class->vft[COLOR_array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val*))(var197->class->vft[COLOR_string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var200); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var203 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var201 = var203;
RET_LABEL202:(void)0;
}
}
if (var201 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1401);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var201) on <var201:nullable Frame> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var206 = var201->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var201:nullable Frame> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var204) on <var204:MPropDef> */
var209 = var204->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var204:MPropDef> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
separate_compiler__SeparateCompilerVisitor__link_unresolved_type(self, var207, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
var210 = separate_compiler__MType__const_color(var_mtype);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var210); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = " = ";
var214 = 3;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = "->resolution_table->types[";
var219 = 26;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
{
var221 = separate_compiler__MType__const_color(var_mtype);
}
if (varonce222) {
var223 = varonce222;
} else {
var224 = "];";
var225 = 2;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
var227 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var227 = array_instance Array[Object] */
var228 = 6;
var229 = NEW_array__NativeArray(var228, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var229)->values[0] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var229)->values[1] = (val*) var212;
((struct instance_array__NativeArray*)var229)->values[2] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var229)->values[3] = (val*) var217;
((struct instance_array__NativeArray*)var229)->values[4] = (val*) var221;
((struct instance_array__NativeArray*)var229)->values[5] = (val*) var223;
{
((void (*)(val*, val*, long))(var227->class->vft[COLOR_array__Array__with_native]))(var227, var229, var228) /* with_native on <var227:Array[Object]>*/;
}
}
{
var230 = ((val* (*)(val*))(var227->class->vft[COLOR_string__Object__to_s]))(var227) /* to_s on <var227:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var230); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var233 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var231) on <var231:ModelBuilder> */
var236 = var231->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var231:ModelBuilder> */
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var234) on <var234:ToolContext> */
var239 = var234->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var234:ToolContext> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
{ /* Inline opts#Option#value (var237) on <var237:OptionBool> */
var242 = var237->attrs[COLOR_opts__Option___value].val; /* _value on <var237:OptionBool> */
var240 = var242;
RET_LABEL241:(void)0;
}
}
var243 = ((struct instance_kernel__Bool*)var240)->value; /* autounbox from nullable Object to Bool */;
if (var243){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var246 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (var244) on <var244:AbstractCompiler(SeparateCompiler)> */
var249 = var244->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var244:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 890);
show_backtrace(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
var_250 = var247;
var_251 = var_tag;
{
var252 = hash_collection__HashMap___91d_93d(var_250, var_251);
}
var253 = 1;
{
{ /* Inline kernel#Int#+ (var252,var253) on <var252:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var253:Int> isa OTHER */
/* <var253:Int> isa OTHER */
var256 = 1; /* easy <var253:Int> isa OTHER*/
if (unlikely(!var256)) {
var_class_name259 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name259);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var260 = ((struct instance_kernel__Int*)var252)->value; /* autounbox from nullable Object to Int */;
var261 = var260 + var253;
var254 = var261;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
{
var262 = BOX_kernel__Int(var254); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_250, var_251, var262); /* Direct call hash_collection#HashMap#[]= on <var_250:HashMap[String, Int]>*/
}
if (varonce263) {
var264 = varonce263;
} else {
var265 = "count_type_test_unresolved_";
var266 = 27;
var267 = string__NativeString__to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "++;";
var271 = 3;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
var273 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var273 = array_instance Array[Object] */
var274 = 3;
var275 = NEW_array__NativeArray(var274, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var275)->values[0] = (val*) var264;
((struct instance_array__NativeArray*)var275)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var275)->values[2] = (val*) var269;
{
((void (*)(val*, val*, long))(var273->class->vft[COLOR_array__Array__with_native]))(var273, var275, var274) /* with_native on <var273:Array[Object]>*/;
}
}
{
var276 = ((val* (*)(val*))(var273->class->vft[COLOR_string__Object__to_s]))(var273) /* to_s on <var273:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var276); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
separate_compiler__SeparateCompilerVisitor__hardening_cast_type(self, var_type_struct); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = " = ";
var280 = 3;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
if (varonce282) {
var283 = varonce282;
} else {
var284 = "->color;";
var285 = 8;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
var287 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var287 = array_instance Array[Object] */
var288 = 4;
var289 = NEW_array__NativeArray(var288, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var289)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var289)->values[1] = (val*) var278;
((struct instance_array__NativeArray*)var289)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var289)->values[3] = (val*) var283;
{
((void (*)(val*, val*, long))(var287->class->vft[COLOR_array__Array__with_native]))(var287, var289, var288) /* with_native on <var287:Array[Object]>*/;
}
}
{
var290 = ((val* (*)(val*))(var287->class->vft[COLOR_string__Object__to_s]))(var287) /* to_s on <var287:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var290); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce291) {
var292 = varonce291;
} else {
var293 = " = ";
var294 = 3;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
if (varonce296) {
var297 = varonce296;
} else {
var298 = "->id;";
var299 = 5;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
var301 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var301 = array_instance Array[Object] */
var302 = 4;
var303 = NEW_array__NativeArray(var302, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var303)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var303)->values[1] = (val*) var292;
((struct instance_array__NativeArray*)var303)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var303)->values[3] = (val*) var297;
{
((void (*)(val*, val*, long))(var301->class->vft[COLOR_array__Array__with_native]))(var301, var303, var302) /* with_native on <var301:Array[Object]>*/;
}
}
{
var304 = ((val* (*)(val*))(var301->class->vft[COLOR_string__Object__to_s]))(var301) /* to_s on <var301:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var304); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var_306 = var_maybe_null;
if (var_maybe_null){
if (varonce307) {
var308 = varonce307;
} else {
var309 = "0";
var310 = 1;
var311 = string__NativeString__to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
{
var313 = string__FlatString___61d_61d(var_accept_null, var308);
var312 = var313;
}
var305 = var312;
} else {
var305 = var_306;
}
if (var305){
if (varonce314) {
var315 = varonce314;
} else {
var316 = "is_nullable";
var317 = 11;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
{
var319 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var315);
}
var_is_nullable = var319;
if (varonce320) {
var321 = varonce320;
} else {
var322 = "short int ";
var323 = 10;
var324 = string__NativeString__to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
if (varonce325) {
var326 = varonce325;
} else {
var327 = ";";
var328 = 1;
var329 = string__NativeString__to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
var330 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var330 = array_instance Array[Object] */
var331 = 3;
var332 = NEW_array__NativeArray(var331, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var332)->values[0] = (val*) var321;
((struct instance_array__NativeArray*)var332)->values[1] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var332)->values[2] = (val*) var326;
{
((void (*)(val*, val*, long))(var330->class->vft[COLOR_array__Array__with_native]))(var330, var332, var331) /* with_native on <var330:Array[Object]>*/;
}
}
{
var333 = ((val* (*)(val*))(var330->class->vft[COLOR_string__Object__to_s]))(var330) /* to_s on <var330:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var333); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = " = ";
var337 = 3;
var338 = string__NativeString__to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
if (varonce339) {
var340 = varonce339;
} else {
var341 = "->is_nullable;";
var342 = 14;
var343 = string__NativeString__to_s_with_length(var341, var342);
var340 = var343;
varonce339 = var340;
}
var344 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var344 = array_instance Array[Object] */
var345 = 4;
var346 = NEW_array__NativeArray(var345, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var346)->values[0] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var346)->values[1] = (val*) var335;
((struct instance_array__NativeArray*)var346)->values[2] = (val*) var_type_struct;
((struct instance_array__NativeArray*)var346)->values[3] = (val*) var340;
{
((void (*)(val*, val*, long))(var344->class->vft[COLOR_array__Array__with_native]))(var344, var346, var345) /* with_native on <var344:Array[Object]>*/;
}
}
{
var347 = ((val* (*)(val*))(var344->class->vft[COLOR_string__Object__to_s]))(var344) /* to_s on <var344:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var347); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var348 = string__String__to_s(var_is_nullable);
}
var_accept_null = var348;
} else {
}
} else {
/* <var_ntype:MType> isa MClassType */
cltype350 = type_model__MClassType.color;
idtype351 = type_model__MClassType.id;
if(cltype350 >= var_ntype->type->table_size) {
var349 = 0;
} else {
var349 = var_ntype->type->type_table[cltype350] == idtype351;
}
if (var349){
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var354 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var354 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 155);
show_backtrace(1);
}
var352 = var354;
RET_LABEL353:(void)0;
}
}
{
((void (*)(val*, val*))(var352->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var352, var_mtype) /* add on <var352:Set[MType]>*/;
}
if (varonce355) {
var356 = varonce355;
} else {
var357 = "type_";
var358 = 5;
var359 = string__NativeString__to_s_with_length(var357, var358);
var356 = var359;
varonce355 = var356;
}
{
var360 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
var361 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var361 = array_instance Array[Object] */
var362 = 2;
var363 = NEW_array__NativeArray(var362, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var363)->values[0] = (val*) var356;
((struct instance_array__NativeArray*)var363)->values[1] = (val*) var360;
{
((void (*)(val*, val*, long))(var361->class->vft[COLOR_array__Array__with_native]))(var361, var363, var362) /* with_native on <var361:Array[Object]>*/;
}
}
{
var364 = ((val* (*)(val*))(var361->class->vft[COLOR_string__Object__to_s]))(var361) /* to_s on <var361:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var364); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce365) {
var366 = varonce365;
} else {
var367 = "(&type_";
var368 = 7;
var369 = string__NativeString__to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
{
var370 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce371) {
var372 = varonce371;
} else {
var373 = ")";
var374 = 1;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
var376 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var376 = array_instance Array[Object] */
var377 = 3;
var378 = NEW_array__NativeArray(var377, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var378)->values[0] = (val*) var366;
((struct instance_array__NativeArray*)var378)->values[1] = (val*) var370;
((struct instance_array__NativeArray*)var378)->values[2] = (val*) var372;
{
((void (*)(val*, val*, long))(var376->class->vft[COLOR_array__Array__with_native]))(var376, var378, var377) /* with_native on <var376:Array[Object]>*/;
}
}
{
var379 = ((val* (*)(val*))(var376->class->vft[COLOR_string__Object__to_s]))(var376) /* to_s on <var376:Array[Object]>*/;
}
{
separate_compiler__SeparateCompilerVisitor__hardening_cast_type(self, var379); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (varonce380) {
var381 = varonce380;
} else {
var382 = " = type_";
var383 = 8;
var384 = string__NativeString__to_s_with_length(var382, var383);
var381 = var384;
varonce380 = var381;
}
{
var385 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = ".color;";
var389 = 7;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
var391 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var391 = array_instance Array[Object] */
var392 = 4;
var393 = NEW_array__NativeArray(var392, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var393)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var393)->values[1] = (val*) var381;
((struct instance_array__NativeArray*)var393)->values[2] = (val*) var385;
((struct instance_array__NativeArray*)var393)->values[3] = (val*) var387;
{
((void (*)(val*, val*, long))(var391->class->vft[COLOR_array__Array__with_native]))(var391, var393, var392) /* with_native on <var391:Array[Object]>*/;
}
}
{
var394 = ((val* (*)(val*))(var391->class->vft[COLOR_string__Object__to_s]))(var391) /* to_s on <var391:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var394); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce395) {
var396 = varonce395;
} else {
var397 = " = type_";
var398 = 8;
var399 = string__NativeString__to_s_with_length(var397, var398);
var396 = var399;
varonce395 = var396;
}
{
var400 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
}
if (varonce401) {
var402 = varonce401;
} else {
var403 = ".id;";
var404 = 4;
var405 = string__NativeString__to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
var406 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var406 = array_instance Array[Object] */
var407 = 4;
var408 = NEW_array__NativeArray(var407, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var408)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var408)->values[1] = (val*) var396;
((struct instance_array__NativeArray*)var408)->values[2] = (val*) var400;
((struct instance_array__NativeArray*)var408)->values[3] = (val*) var402;
{
((void (*)(val*, val*, long))(var406->class->vft[COLOR_array__Array__with_native]))(var406, var408, var407) /* with_native on <var406:Array[Object]>*/;
}
}
{
var409 = ((val* (*)(val*))(var406->class->vft[COLOR_string__Object__to_s]))(var406) /* to_s on <var406:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var409); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var412 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var412 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var410 = var412;
RET_LABEL411:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var410) on <var410:ModelBuilder> */
var415 = var410->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var410:ModelBuilder> */
if (unlikely(var415 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var413 = var415;
RET_LABEL414:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var413) on <var413:ToolContext> */
var418 = var413->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var413:ToolContext> */
if (unlikely(var418 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 56);
show_backtrace(1);
}
var416 = var418;
RET_LABEL417:(void)0;
}
}
{
{ /* Inline opts#Option#value (var416) on <var416:OptionBool> */
var421 = var416->attrs[COLOR_opts__Option___value].val; /* _value on <var416:OptionBool> */
var419 = var421;
RET_LABEL420:(void)0;
}
}
var422 = ((struct instance_kernel__Bool*)var419)->value; /* autounbox from nullable Object to Bool */;
if (var422){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var425 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var425 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var423 = var425;
RET_LABEL424:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (var423) on <var423:AbstractCompiler(SeparateCompiler)> */
var428 = var423->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var423:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var428 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 889);
show_backtrace(1);
}
var426 = var428;
RET_LABEL427:(void)0;
}
}
var_429 = var426;
var_430 = var_tag;
{
var431 = hash_collection__HashMap___91d_93d(var_429, var_430);
}
var432 = 1;
{
{ /* Inline kernel#Int#+ (var431,var432) on <var431:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var432:Int> isa OTHER */
/* <var432:Int> isa OTHER */
var435 = 1; /* easy <var432:Int> isa OTHER*/
if (unlikely(!var435)) {
var_class_name438 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name438);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var439 = ((struct instance_kernel__Int*)var431)->value; /* autounbox from nullable Object to Int */;
var440 = var439 + var432;
var433 = var440;
goto RET_LABEL434;
RET_LABEL434:(void)0;
}
}
{
var441 = BOX_kernel__Int(var433); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var_429, var_430, var441); /* Direct call hash_collection#HashMap#[]= on <var_429:HashMap[String, Int]>*/
}
if (varonce442) {
var443 = varonce442;
} else {
var444 = "count_type_test_resolved_";
var445 = 25;
var446 = string__NativeString__to_s_with_length(var444, var445);
var443 = var446;
varonce442 = var443;
}
if (varonce447) {
var448 = varonce447;
} else {
var449 = "++;";
var450 = 3;
var451 = string__NativeString__to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
var452 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var452 = array_instance Array[Object] */
var453 = 3;
var454 = NEW_array__NativeArray(var453, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var454)->values[0] = (val*) var443;
((struct instance_array__NativeArray*)var454)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var454)->values[2] = (val*) var448;
{
((void (*)(val*, val*, long))(var452->class->vft[COLOR_array__Array__with_native]))(var452, var454, var453) /* with_native on <var452:Array[Object]>*/;
}
}
{
var455 = ((val* (*)(val*))(var452->class->vft[COLOR_string__Object__to_s]))(var452) /* to_s on <var452:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var455); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
if (varonce456) {
var457 = varonce456;
} else {
var458 = "PRINT_ERROR(\"NOT YET IMPLEMENTED: type_test(%s, ";
var459 = 48;
var460 = string__NativeString__to_s_with_length(var458, var459);
var457 = var460;
varonce456 = var457;
}
if (varonce461) {
var462 = varonce461;
} else {
var463 = ").\\n\", \"";
var464 = 8;
var465 = string__NativeString__to_s_with_length(var463, var464);
var462 = var465;
varonce461 = var462;
}
{
var466 = abstract_compiler__RuntimeVariable__inspect(var_value);
}
if (varonce467) {
var468 = varonce467;
} else {
var469 = "\"); show_backtrace(1);";
var470 = 22;
var471 = string__NativeString__to_s_with_length(var469, var470);
var468 = var471;
varonce467 = var468;
}
var472 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var472 = array_instance Array[Object] */
var473 = 5;
var474 = NEW_array__NativeArray(var473, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var474)->values[0] = (val*) var457;
((struct instance_array__NativeArray*)var474)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var474)->values[2] = (val*) var462;
((struct instance_array__NativeArray*)var474)->values[3] = (val*) var466;
((struct instance_array__NativeArray*)var474)->values[4] = (val*) var468;
{
((void (*)(val*, val*, long))(var472->class->vft[COLOR_array__Array__with_native]))(var472, var474, var473) /* with_native on <var472:Array[Object]>*/;
}
}
{
var475 = ((val* (*)(val*))(var472->class->vft[COLOR_string__Object__to_s]))(var472) /* to_s on <var472:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var475); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
if (var_maybe_null){
if (varonce476) {
var477 = varonce476;
} else {
var478 = "if(";
var479 = 3;
var480 = string__NativeString__to_s_with_length(var478, var479);
var477 = var480;
varonce476 = var477;
}
if (varonce481) {
var482 = varonce481;
} else {
var483 = " == NULL) {";
var484 = 11;
var485 = string__NativeString__to_s_with_length(var483, var484);
var482 = var485;
varonce481 = var482;
}
var486 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var486 = array_instance Array[Object] */
var487 = 3;
var488 = NEW_array__NativeArray(var487, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var488)->values[0] = (val*) var477;
((struct instance_array__NativeArray*)var488)->values[1] = (val*) var_value;
((struct instance_array__NativeArray*)var488)->values[2] = (val*) var482;
{
((void (*)(val*, val*, long))(var486->class->vft[COLOR_array__Array__with_native]))(var486, var488, var487) /* with_native on <var486:Array[Object]>*/;
}
}
{
var489 = ((val* (*)(val*))(var486->class->vft[COLOR_string__Object__to_s]))(var486) /* to_s on <var486:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var489); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce490) {
var491 = varonce490;
} else {
var492 = " = ";
var493 = 3;
var494 = string__NativeString__to_s_with_length(var492, var493);
var491 = var494;
varonce490 = var491;
}
if (varonce495) {
var496 = varonce495;
} else {
var497 = ";";
var498 = 1;
var499 = string__NativeString__to_s_with_length(var497, var498);
var496 = var499;
varonce495 = var496;
}
var500 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var500 = array_instance Array[Object] */
var501 = 4;
var502 = NEW_array__NativeArray(var501, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var502)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var502)->values[1] = (val*) var491;
((struct instance_array__NativeArray*)var502)->values[2] = (val*) var_accept_null;
((struct instance_array__NativeArray*)var502)->values[3] = (val*) var496;
{
((void (*)(val*, val*, long))(var500->class->vft[COLOR_array__Array__with_native]))(var500, var502, var501) /* with_native on <var500:Array[Object]>*/;
}
}
{
var503 = ((val* (*)(val*))(var500->class->vft[COLOR_string__Object__to_s]))(var500) /* to_s on <var500:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var503); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce504) {
var505 = varonce504;
} else {
var506 = "} else {";
var507 = 8;
var508 = string__NativeString__to_s_with_length(var506, var507);
var505 = var508;
varonce504 = var505;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var505); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var509 = separate_compiler__SeparateCompilerVisitor__type_info(self, var_value);
}
var_value_type_info = var509;
if (varonce510) {
var511 = varonce510;
} else {
var512 = "if(";
var513 = 3;
var514 = string__NativeString__to_s_with_length(var512, var513);
var511 = var514;
varonce510 = var511;
}
if (varonce515) {
var516 = varonce515;
} else {
var517 = " >= ";
var518 = 4;
var519 = string__NativeString__to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
if (varonce520) {
var521 = varonce520;
} else {
var522 = "->table_size) {";
var523 = 15;
var524 = string__NativeString__to_s_with_length(var522, var523);
var521 = var524;
varonce520 = var521;
}
var525 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var525 = array_instance Array[Object] */
var526 = 5;
var527 = NEW_array__NativeArray(var526, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var527)->values[0] = (val*) var511;
((struct instance_array__NativeArray*)var527)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var527)->values[2] = (val*) var516;
((struct instance_array__NativeArray*)var527)->values[3] = (val*) var_value_type_info;
((struct instance_array__NativeArray*)var527)->values[4] = (val*) var521;
{
((void (*)(val*, val*, long))(var525->class->vft[COLOR_array__Array__with_native]))(var525, var527, var526) /* with_native on <var525:Array[Object]>*/;
}
}
{
var528 = ((val* (*)(val*))(var525->class->vft[COLOR_string__Object__to_s]))(var525) /* to_s on <var525:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var528); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce529) {
var530 = varonce529;
} else {
var531 = " = 0;";
var532 = 5;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
var534 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var534 = array_instance Array[Object] */
var535 = 2;
var536 = NEW_array__NativeArray(var535, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var536)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var536)->values[1] = (val*) var530;
{
((void (*)(val*, val*, long))(var534->class->vft[COLOR_array__Array__with_native]))(var534, var536, var535) /* with_native on <var534:Array[Object]>*/;
}
}
{
var537 = ((val* (*)(val*))(var534->class->vft[COLOR_string__Object__to_s]))(var534) /* to_s on <var534:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var537); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce538) {
var539 = varonce538;
} else {
var540 = "} else {";
var541 = 8;
var542 = string__NativeString__to_s_with_length(var540, var541);
var539 = var542;
varonce538 = var539;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var539); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce543) {
var544 = varonce543;
} else {
var545 = " = ";
var546 = 3;
var547 = string__NativeString__to_s_with_length(var545, var546);
var544 = var547;
varonce543 = var544;
}
if (varonce548) {
var549 = varonce548;
} else {
var550 = "->type_table[";
var551 = 13;
var552 = string__NativeString__to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = "] == ";
var556 = 5;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
if (varonce558) {
var559 = varonce558;
} else {
var560 = ";";
var561 = 1;
var562 = string__NativeString__to_s_with_length(var560, var561);
var559 = var562;
varonce558 = var559;
}
var563 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var563 = array_instance Array[Object] */
var564 = 8;
var565 = NEW_array__NativeArray(var564, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var565)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var565)->values[1] = (val*) var544;
((struct instance_array__NativeArray*)var565)->values[2] = (val*) var_value_type_info;
((struct instance_array__NativeArray*)var565)->values[3] = (val*) var549;
((struct instance_array__NativeArray*)var565)->values[4] = (val*) var_cltype;
((struct instance_array__NativeArray*)var565)->values[5] = (val*) var554;
((struct instance_array__NativeArray*)var565)->values[6] = (val*) var_idtype;
((struct instance_array__NativeArray*)var565)->values[7] = (val*) var559;
{
((void (*)(val*, val*, long))(var563->class->vft[COLOR_array__Array__with_native]))(var563, var565, var564) /* with_native on <var563:Array[Object]>*/;
}
}
{
var566 = ((val* (*)(val*))(var563->class->vft[COLOR_string__Object__to_s]))(var563) /* to_s on <var563:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var566); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce567) {
var568 = varonce567;
} else {
var569 = "}";
var570 = 1;
var571 = string__NativeString__to_s_with_length(var569, var570);
var568 = var571;
varonce567 = var568;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var568); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (var_maybe_null){
if (varonce572) {
var573 = varonce572;
} else {
var574 = "}";
var575 = 1;
var576 = string__NativeString__to_s_with_length(var574, var575);
var573 = var576;
varonce572 = var573;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var573); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_test for (self: Object, RuntimeVariable, MType, String): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__type_test(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#is_same_type_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : MType */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var29 /* : MType */;
val* var31 /* : MType */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : MType */;
val* var46 /* : MType */;
val* var47 /* : MType */;
val* var49 /* : MType */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
val* var62 /* : MType */;
val* var64 /* : MType */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : MType */;
val* var72 /* : MType */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
val* var82 /* : MType */;
val* var84 /* : MType */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
val* var102 /* : MType */;
val* var104 /* : MType */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : MType */;
val* var112 /* : MType */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : String */;
val* var122 /* : MType */;
val* var124 /* : MType */;
short int var125 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : String */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : Array[Object] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[Object] */;
val* var160 /* : String */;
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
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : FlatString */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
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
val* var196 /* : Array[Object] */;
long var197 /* : Int */;
val* var198 /* : NativeArray[Object] */;
val* var199 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var2 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
}
if (varonce) {
var8 = varonce;
} else {
var9 = "val*";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var7,var8) on <var7:String> */
var_other = var8;
{
var16 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___61d_61d]))(var7, var_other) /* == on <var7:String>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var20 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__MType__ctype]))(var18) /* ctype on <var18:MType>*/;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var28 = string__FlatString___61d_61d(var21, var23);
var27 = var28;
}
var3 = var27;
} else {
var3 = var_;
}
if (var3){
var_tmp = var_value1;
var_value1 = var_value2;
var_value2 = var_tmp;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var31 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_compiler__MType__ctype]))(var29) /* ctype on <var29:MType>*/;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "val*";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
{ /* Inline kernel#Object#!= (var32,var34) on <var32:String> */
var_other = var34;
{
var42 = ((short int (*)(val*, val*))(var32->class->vft[COLOR_kernel__Object___61d_61d]))(var32, var_other) /* == on <var32:String>*/;
var41 = var42;
}
var43 = !var41;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var46 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var49 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var44,var47) on <var44:MType> */
var_other53 = var47;
{
{ /* Inline kernel#Object#is_same_instance (var44,var_other53) on <var44:MType> */
var56 = var44 == var_other53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
if (varonce57) {
var58 = varonce57;
} else {
var59 = " = 1; /* is_same_type_test: compatible types ";
var60 = 45;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var64 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " vs. ";
var68 = 5;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var72 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = " */";
var76 = 3;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 6;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var58;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var62;
((struct instance_array__NativeArray*)var80)->values[3] = (val*) var66;
((struct instance_array__NativeArray*)var80)->values[4] = (val*) var70;
((struct instance_array__NativeArray*)var80)->values[5] = (val*) var74;
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
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var84 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_compiler__MType__ctype]))(var82) /* ctype on <var82:MType>*/;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "val*";
var89 = 4;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
{
{ /* Inline kernel#Object#!= (var85,var87) on <var85:String> */
var_other = var87;
{
var95 = ((short int (*)(val*, val*))(var85->class->vft[COLOR_kernel__Object___61d_61d]))(var85, var_other) /* == on <var85:String>*/;
var94 = var95;
}
var96 = !var94;
var92 = var96;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
if (var91){
if (varonce97) {
var98 = varonce97;
} else {
var99 = " = 0; /* is_same_type_test: incompatible types ";
var100 = 47;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var104 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = " vs. ";
var108 = 5;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var112 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "*/";
var116 = 2;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 6;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var98;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var102;
((struct instance_array__NativeArray*)var120)->values[3] = (val*) var106;
((struct instance_array__NativeArray*)var120)->values[4] = (val*) var110;
((struct instance_array__NativeArray*)var120)->values[5] = (val*) var114;
{
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var121 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var121); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var124 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
/* <var122:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var122->type->table_size) {
var125 = 0;
} else {
var125 = var122->type->type_table[cltype] == idtype;
}
if (unlikely(!var125)) {
var_class_name = var122 == NULL ? "null" : var122->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1465);
show_backtrace(1);
}
var_mtype1 = var122;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "class_";
var129 = 6;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
{
var131 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
var132 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 2;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var127;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var131;
{
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
}
{
var135 = ((val* (*)(val*))(var132->class->vft[COLOR_string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var135); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " = (";
var139 = 4;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = " != NULL) && (";
var144 = 14;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = "->class == &class_";
var149 = 18;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
{
var151 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "); /* is_same_type_test */";
var155 = 26;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 8;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var159)->values[1] = (val*) var137;
((struct instance_array__NativeArray*)var159)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var159)->values[3] = (val*) var142;
((struct instance_array__NativeArray*)var159)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var159)->values[5] = (val*) var147;
((struct instance_array__NativeArray*)var159)->values[6] = (val*) var151;
((struct instance_array__NativeArray*)var159)->values[7] = (val*) var153;
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
}
}
} else {
if (varonce161) {
var162 = varonce161;
} else {
var163 = " = (";
var164 = 4;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = " == ";
var169 = 4;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = ") || (";
var174 = 6;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
if (varonce176) {
var177 = varonce176;
} else {
var178 = " != NULL && ";
var179 = 12;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
if (varonce181) {
var182 = varonce181;
} else {
var183 = " != NULL && ";
var184 = 12;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
if (varonce186) {
var187 = varonce186;
} else {
var188 = "->class == ";
var189 = 11;
var190 = string__NativeString__to_s_with_length(var188, var189);
var187 = var190;
varonce186 = var187;
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = "->class); /* is_same_type_test */";
var194 = 33;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var196 = array_instance Array[Object] */
var197 = 14;
var198 = NEW_array__NativeArray(var197, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var198)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var198)->values[1] = (val*) var162;
((struct instance_array__NativeArray*)var198)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var198)->values[3] = (val*) var167;
((struct instance_array__NativeArray*)var198)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var198)->values[5] = (val*) var172;
((struct instance_array__NativeArray*)var198)->values[6] = (val*) var_value1;
((struct instance_array__NativeArray*)var198)->values[7] = (val*) var177;
((struct instance_array__NativeArray*)var198)->values[8] = (val*) var_value2;
((struct instance_array__NativeArray*)var198)->values[9] = (val*) var182;
((struct instance_array__NativeArray*)var198)->values[10] = (val*) var_value1;
((struct instance_array__NativeArray*)var198)->values[11] = (val*) var187;
((struct instance_array__NativeArray*)var198)->values[12] = (val*) var_value2;
((struct instance_array__NativeArray*)var198)->values[13] = (val*) var192;
{
((void (*)(val*, val*, long))(var196->class->vft[COLOR_array__Array__with_native]))(var196, var198, var197) /* with_native on <var196:Array[Object]>*/;
}
}
{
var199 = ((val* (*)(val*))(var196->class->vft[COLOR_string__Object__to_s]))(var196) /* to_s on <var196:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var199); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#is_same_type_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__is_same_type_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
