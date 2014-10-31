#include "separate_compiler.sep.0.h"
/* method separate_compiler#VirtualRuntimeFunction#compile_to_c for (self: VirtualRuntimeFunction, AbstractCompiler) */
void separate_compiler__VirtualRuntimeFunction__compile_to_c(val* self, val* p0) {
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
val* var19 /* : MClassType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var20 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var21 /* : Frame */;
val* var_frame /* var frame: Frame */;
val* var23 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var24 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var25 /* : MMethodDef */;
val* var27 /* : MMethodDef */;
val* var28 /* : MProperty */;
val* var30 /* : MProperty */;
val* var31 /* : MPropDef */;
val* var33 /* : MPropDef */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var37 /* : MProperty */;
val* var39 /* : MProperty */;
val* var40 /* : MPropDef */;
val* var42 /* : MPropDef */;
val* var43 /* : nullable MSignature */;
val* var45 /* : nullable MSignature */;
val* var46 /* : MClassType */;
val* var48 /* : MClassType */;
val* var49 /* : MClassType */;
val* var51 /* : MClassType */;
val* var52 /* : MModule */;
val* var54 /* : MModule */;
short int var55 /* : Bool */;
val* var56 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var57 /* : nullable MType */;
val* var59 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
val* var88 /* : MType */;
val* var90 /* : MType */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
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
val* var111 /* : MType */;
val* var113 /* : MType */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : String */;
long var118 /* : Int */;
long var_i /* var i: Int */;
long var119 /* : Int */;
long var_ /* var : Int */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
short int var126 /* : Bool */;
val* var127 /* : Array[MParameter] */;
val* var129 /* : Array[MParameter] */;
val* var130 /* : nullable Object */;
val* var131 /* : MType */;
val* var133 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var134 /* : Int */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
val* var146 /* : MClass */;
val* var147 /* : Array[MType] */;
long var148 /* : Int */;
val* var_149 /* var : Array[MType] */;
val* var150 /* : MClassType */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
val* var156 /* : Array[Object] */;
long var157 /* : Int */;
val* var158 /* : NativeArray[Object] */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
val* var171 /* : Array[Object] */;
long var172 /* : Int */;
val* var173 /* : NativeArray[Object] */;
val* var174 /* : Object */;
val* var175 /* : String */;
val* var176 /* : RuntimeVariable */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : FlatString */;
val* var182 /* : Array[Object] */;
long var183 /* : Int */;
val* var184 /* : NativeArray[Object] */;
val* var185 /* : Object */;
val* var186 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
long var187 /* : Int */;
long var188 /* : Int */;
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
val* var199 /* : null */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : FlatString */;
val* var211 /* : Array[Object] */;
long var212 /* : Int */;
val* var213 /* : NativeArray[Object] */;
val* var214 /* : String */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
val* var221 /* : Array[Object] */;
long var222 /* : Int */;
val* var223 /* : NativeArray[Object] */;
val* var224 /* : String */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
long var228 /* : Int */;
val* var229 /* : FlatString */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
long var233 /* : Int */;
val* var234 /* : FlatString */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
long var238 /* : Int */;
val* var239 /* : FlatString */;
val* var240 /* : Array[Object] */;
long var241 /* : Int */;
val* var242 /* : NativeArray[Object] */;
val* var243 /* : String */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
long var247 /* : Int */;
val* var248 /* : FlatString */;
val* var249 /* : Array[Object] */;
long var250 /* : Int */;
val* var251 /* : NativeArray[Object] */;
val* var252 /* : String */;
val* var253 /* : null */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
val* var260 /* : RuntimeVariable */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : FlatString */;
val* var267 /* : String */;
val* var269 /* : nullable RuntimeVariable */;
val* var_subret /* var subret: nullable RuntimeVariable */;
val* var270 /* : null */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
short int var276 /* : Bool */;
val* var277 /* : null */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
val* var284 /* : nullable RuntimeVariable */;
val* var286 /* : nullable RuntimeVariable */;
val* var287 /* : nullable String */;
val* var289 /* : nullable String */;
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
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : FlatString */;
val* var311 /* : nullable RuntimeVariable */;
val* var313 /* : nullable RuntimeVariable */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
val* var319 /* : Array[Object] */;
long var320 /* : Int */;
val* var321 /* : NativeArray[Object] */;
val* var322 /* : String */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
long var326 /* : Int */;
val* var327 /* : FlatString */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
long var334 /* : Int */;
short int var335 /* : Bool */;
short int var336 /* : Bool */;
val* var337 /* : HashMap[String, String] */;
val* var339 /* : HashMap[String, String] */;
val* var340 /* : String */;
val* var341 /* : MClassDef */;
val* var343 /* : MClassDef */;
val* var344 /* : MModule */;
val* var346 /* : MModule */;
val* var347 /* : String */;
val* var349 /* : String */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : FlatString */;
val* var355 /* : MClassDef */;
val* var357 /* : MClassDef */;
val* var358 /* : MClass */;
val* var360 /* : MClass */;
val* var361 /* : String */;
val* var363 /* : String */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
long var367 /* : Int */;
val* var368 /* : FlatString */;
val* var369 /* : MProperty */;
val* var371 /* : MProperty */;
val* var372 /* : String */;
val* var374 /* : String */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : FlatString */;
val* var380 /* : Location */;
val* var382 /* : Location */;
val* var383 /* : nullable SourceFile */;
val* var385 /* : nullable SourceFile */;
val* var386 /* : String */;
val* var388 /* : String */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
long var392 /* : Int */;
val* var393 /* : FlatString */;
val* var394 /* : Location */;
val* var396 /* : Location */;
long var397 /* : Int */;
long var399 /* : Int */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
long var403 /* : Int */;
val* var404 /* : FlatString */;
val* var405 /* : Array[Object] */;
long var406 /* : Int */;
val* var407 /* : NativeArray[Object] */;
val* var408 /* : Object */;
val* var409 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTCOMPILER];
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
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1873);
show_backtrace(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmethoddef = var1;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var6 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_recv = var10;
{
var13 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler) /* new_visitor on <var_compiler:AbstractCompiler>*/;
}
var_v = var13;
var14 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce) {
var15 = varonce;
} else {
var16 = "self";
var17 = 4;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
var19 = abstract_compiler__AbstractCompilerVisitor__object_type(var_v);
}
{
abstract_compiler__RuntimeVariable__init(var14, var15, var19, var_recv); /* Direct call abstract_compiler#RuntimeVariable#init on <var14:RuntimeVariable>*/
}
var_selfvar = var14;
var20 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
((void (*)(val*))(var20->class->vft[COLOR_kernel__Object__init]))(var20) /* init on <var20:Array[RuntimeVariable]>*/;
}
var_arguments = var20;
var21 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
((void (*)(val*, val*))(var21->class->vft[COLOR_abstract_compiler__Frame__visitor_61d]))(var21, var_v) /* visitor= on <var21:Frame>*/;
}
{
((void (*)(val*, val*))(var21->class->vft[COLOR_abstract_compiler__Frame__mpropdef_61d]))(var21, var_mmethoddef) /* mpropdef= on <var21:Frame>*/;
}
{
((void (*)(val*, val*))(var21->class->vft[COLOR_abstract_compiler__Frame__receiver_61d]))(var21, var_recv) /* receiver= on <var21:Frame>*/;
}
{
((void (*)(val*, val*))(var21->class->vft[COLOR_abstract_compiler__Frame__arguments_61d]))(var21, var_arguments) /* arguments= on <var21:Frame>*/;
}
{
((void (*)(val*))(var21->class->vft[COLOR_kernel__Object__init]))(var21) /* init on <var21:Frame>*/;
}
var_frame = var21;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL22:(void)0;
}
}
var23 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var23->class->vft[COLOR_kernel__Object__init]))(var23) /* init on <var23:FlatBuffer>*/;
}
var_sig = var23;
var24 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var24->class->vft[COLOR_kernel__Object__init]))(var24) /* init on <var24:FlatBuffer>*/;
}
var_comment = var24;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var27 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var25) on <var25:MMethodDef> */
var30 = var25->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var25:MMethodDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var28) on <var28:MProperty(MMethod)> */
var33 = var28->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var28:MProperty(MMethod)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var31) on <var31:MPropDef(MMethodDef)> */
var36 = var31->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var31:MPropDef(MMethodDef)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_intromclassdef = var34;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var39 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
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
{ /* Inline model#MProperty#intro (var37) on <var37:MProperty(MMethod)> */
var42 = var37->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var37:MProperty(MMethod)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var40) on <var40:MPropDef(MMethodDef)> */
var45 = var40->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var40:MPropDef(MMethodDef)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var48 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var51 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var54 = var_intromclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var55 = 1;
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1889);
show_backtrace(1);
} else {
var56 = model__MSignature__resolve_for(var43, var46, var49, var52, var55);
}
var_msignature = var56;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var59 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_ret = var57;
var60 = NULL;
if (var_ret == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var60) on <var_ret:nullable MType> */
var_other = var60;
{
var65 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
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
{
var67 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = " ";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var73 = array_instance Array[Object] */
var74 = 2;
var75 = NEW_array__NativeArray(var74, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var75)->values[0] = (val*) var67;
((struct instance_array__NativeArray*)var75)->values[1] = (val*) var69;
{
((void (*)(val*, val*, long))(var73->class->vft[COLOR_array__Array__with_native]))(var73, var75, var74) /* with_native on <var73:Array[Object]>*/;
}
}
{
var76 = ((val* (*)(val*))(var73->class->vft[COLOR_string__Object__to_s]))(var73) /* to_s on <var73:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var76); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
} else {
if (varonce77) {
var78 = varonce77;
} else {
var79 = "void ";
var80 = 5;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
{
string__FlatBuffer__append(var_sig, var78); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
}
{
var82 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
{
string__FlatBuffer__append(var_sig, var82); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = "(";
var86 = 1;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var90 = var_selfvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = ((val* (*)(val*))(var88->class->vft[COLOR_abstract_compiler__MType__ctype]))(var88) /* ctype on <var88:MType>*/;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " ";
var95 = 1;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 4;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var91;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
((struct instance_array__NativeArray*)var99)->values[3] = (val*) var_selfvar;
{
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
}
{
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var100); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "(";
var104 = 1;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = ": ";
var109 = 2;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var113 = var_selfvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 4;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var102;
((struct instance_array__NativeArray*)var116)->values[1] = (val*) var_selfvar;
((struct instance_array__NativeArray*)var116)->values[2] = (val*) var107;
((struct instance_array__NativeArray*)var116)->values[3] = (val*) var111;
{
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
}
{
var117 = ((val* (*)(val*))(var114->class->vft[COLOR_string__Object__to_s]))(var114) /* to_s on <var114:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var117); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
{
array__Array__add(var_arguments, var_selfvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var118 = 0;
var_i = var118;
{
var119 = model__MSignature__arity(var_msignature);
}
var_ = var119;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var122 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name125 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var126 = var_i < var_;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
if (var120){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var129 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = array__Array___91d_93d(var127, var_i);
}
{
{ /* Inline model#MParameter#mtype (var130) on <var130:nullable Object(MParameter)> */
var133 = var130->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var130:nullable Object(MParameter)> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
var_mtype = var131;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var136 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var134) on <var_i:Int> */
var140 = var_i == var134;
var138 = var140;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
var137 = var138;
}
if (var137){
if (varonce141) {
var142 = varonce141;
} else {
var143 = "Array";
var144 = 5;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
{
var146 = abstract_compiler__AbstractCompilerVisitor__get_class(var_v, var142);
}
var147 = NEW_array__Array(&type_array__Arraymodel__MType);
var148 = 1;
{
array__Array__with_capacity(var147, var148); /* Direct call array#Array#with_capacity on <var147:Array[MType]>*/
}
var_149 = var147;
{
array__AbstractArray__push(var_149, var_mtype); /* Direct call array#AbstractArray#push on <var_149:Array[MType]>*/
}
{
var150 = model__MClass__get_mtype(var146, var_149);
}
var_mtype = var150;
} else {
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = ", ";
var154 = 2;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 2;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var152;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var_mtype;
{
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
}
{
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var159); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = ", ";
var163 = 2;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
{
var165 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = " p";
var169 = 2;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
var171 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var171 = array_instance Array[Object] */
var172 = 4;
var173 = NEW_array__NativeArray(var172, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var173)->values[0] = (val*) var161;
((struct instance_array__NativeArray*)var173)->values[1] = (val*) var165;
((struct instance_array__NativeArray*)var173)->values[2] = (val*) var167;
var174 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var173)->values[3] = (val*) var174;
{
((void (*)(val*, val*, long))(var171->class->vft[COLOR_array__Array__with_native]))(var171, var173, var172) /* with_native on <var171:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var171->class->vft[COLOR_string__Object__to_s]))(var171) /* to_s on <var171:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var175); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
var176 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce177) {
var178 = varonce177;
} else {
var179 = "p";
var180 = 1;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
var182 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var182 = array_instance Array[Object] */
var183 = 2;
var184 = NEW_array__NativeArray(var183, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var184)->values[0] = (val*) var178;
var185 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var184)->values[1] = (val*) var185;
{
((void (*)(val*, val*, long))(var182->class->vft[COLOR_array__Array__with_native]))(var182, var184, var183) /* with_native on <var182:Array[Object]>*/;
}
}
{
var186 = ((val* (*)(val*))(var182->class->vft[COLOR_string__Object__to_s]))(var182) /* to_s on <var182:Array[Object]>*/;
}
{
abstract_compiler__RuntimeVariable__init(var176, var186, var_mtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var176:RuntimeVariable>*/
}
var_argvar = var176;
{
array__Array__add(var_arguments, var_argvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var187 = 1;
{
var188 = kernel__Int__successor(var_i, var187);
}
var_i = var188;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (varonce189) {
var190 = varonce189;
} else {
var191 = ")";
var192 = 1;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
{
string__FlatBuffer__append(var_sig, var190); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce194) {
var195 = varonce194;
} else {
var196 = ")";
var197 = 1;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
{
string__FlatBuffer__append(var_comment, var195); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
var199 = NULL;
if (var_ret == NULL) {
var200 = 0; /* is null */
} else {
var200 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var199) on <var_ret:nullable MType> */
var_other = var199;
{
var204 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var203 = var204;
}
var205 = !var203;
var201 = var205;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
if (var200){
if (varonce206) {
var207 = varonce206;
} else {
var208 = ": ";
var209 = 2;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
var211 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 2;
var213 = NEW_array__NativeArray(var212, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var213)->values[0] = (val*) var207;
((struct instance_array__NativeArray*)var213)->values[1] = (val*) var_ret;
{
((void (*)(val*, val*, long))(var211->class->vft[COLOR_array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
}
{
var214 = ((val* (*)(val*))(var211->class->vft[COLOR_string__Object__to_s]))(var211) /* to_s on <var211:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var214); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
} else {
}
{
var215 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = ";";
var219 = 1;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var221 = array_instance Array[Object] */
var222 = 2;
var223 = NEW_array__NativeArray(var222, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var223)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var223)->values[1] = (val*) var217;
{
((void (*)(val*, val*, long))(var221->class->vft[COLOR_array__Array__with_native]))(var221, var223, var222) /* with_native on <var221:Array[Object]>*/;
}
}
{
var224 = ((val* (*)(val*))(var221->class->vft[COLOR_string__Object__to_s]))(var221) /* to_s on <var221:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(var_compiler, var215, var224); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var_compiler:AbstractCompiler>*/
}
if (varonce225) {
var226 = varonce225;
} else {
var227 = "/* method ";
var228 = 10;
var229 = string__NativeString__to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
if (varonce230) {
var231 = varonce230;
} else {
var232 = " for ";
var233 = 5;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
if (varonce235) {
var236 = varonce235;
} else {
var237 = " */";
var238 = 3;
var239 = string__NativeString__to_s_with_length(var237, var238);
var236 = var239;
varonce235 = var236;
}
var240 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var240 = array_instance Array[Object] */
var241 = 5;
var242 = NEW_array__NativeArray(var241, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var242)->values[0] = (val*) var226;
((struct instance_array__NativeArray*)var242)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var242)->values[2] = (val*) var231;
((struct instance_array__NativeArray*)var242)->values[3] = (val*) var_comment;
((struct instance_array__NativeArray*)var242)->values[4] = (val*) var236;
{
((void (*)(val*, val*, long))(var240->class->vft[COLOR_array__Array__with_native]))(var240, var242, var241) /* with_native on <var240:Array[Object]>*/;
}
}
{
var243 = ((val* (*)(val*))(var240->class->vft[COLOR_string__Object__to_s]))(var240) /* to_s on <var240:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var243); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce244) {
var245 = varonce244;
} else {
var246 = " {";
var247 = 2;
var248 = string__NativeString__to_s_with_length(var246, var247);
var245 = var248;
varonce244 = var245;
}
var249 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var249 = array_instance Array[Object] */
var250 = 2;
var251 = NEW_array__NativeArray(var250, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var251)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var251)->values[1] = (val*) var245;
{
((void (*)(val*, val*, long))(var249->class->vft[COLOR_array__Array__with_native]))(var249, var251, var250) /* with_native on <var249:Array[Object]>*/;
}
}
{
var252 = ((val* (*)(val*))(var249->class->vft[COLOR_string__Object__to_s]))(var249) /* to_s on <var249:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var252); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
var253 = NULL;
if (var_ret == NULL) {
var254 = 0; /* is null */
} else {
var254 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var253) on <var_ret:nullable MType> */
var_other = var253;
{
var258 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var257 = var258;
}
var259 = !var257;
var255 = var259;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
var254 = var255;
}
if (var254){
{
var260 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler#Frame#returnvar= (var_frame,var260) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val = var260; /* _returnvar on <var_frame:Frame> */
RET_LABEL261:(void)0;
}
}
} else {
}
if (varonce262) {
var263 = varonce262;
} else {
var264 = "RET_LABEL";
var265 = 9;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
{
var267 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var263);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel= (var_frame,var267) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = var267; /* _returnlabel on <var_frame:Frame> */
RET_LABEL268:(void)0;
}
}
{
var269 = separate_compiler__SeparateCompilerVisitor__call(var_v, var_mmethoddef, var_recv, var_arguments);
}
var_subret = var269;
var270 = NULL;
if (var_ret == NULL) {
var271 = 0; /* is null */
} else {
var271 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var270) on <var_ret:nullable MType> */
var_other = var270;
{
var275 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var274 = var275;
}
var276 = !var274;
var272 = var276;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
var271 = var272;
}
if (var271){
var277 = NULL;
if (var_subret == NULL) {
var278 = 0; /* is null */
} else {
var278 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_subret,var277) on <var_subret:nullable RuntimeVariable> */
var_other = var277;
{
var282 = ((short int (*)(val*, val*))(var_subret->class->vft[COLOR_kernel__Object___61d_61d]))(var_subret, var_other) /* == on <var_subret:nullable RuntimeVariable(RuntimeVariable)>*/;
var281 = var282;
}
var283 = !var281;
var279 = var283;
goto RET_LABEL280;
RET_LABEL280:(void)0;
}
var278 = var279;
}
if (unlikely(!var278)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1926);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#Frame#returnvar (var_frame) on <var_frame:Frame> */
var286 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var_frame:Frame> */
var284 = var286;
RET_LABEL285:(void)0;
}
}
if (unlikely(var284 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1927);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var284, var_subret); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#Frame#returnlabel (var_frame) on <var_frame:Frame> */
var289 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var_frame:Frame> */
var287 = var289;
RET_LABEL288:(void)0;
}
}
if (unlikely(var287 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1930);
show_backtrace(1);
}
if (varonce290) {
var291 = varonce290;
} else {
var292 = ":;";
var293 = 2;
var294 = string__NativeString__to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
var295 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var295 = array_instance Array[Object] */
var296 = 2;
var297 = NEW_array__NativeArray(var296, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var297)->values[0] = (val*) var287;
((struct instance_array__NativeArray*)var297)->values[1] = (val*) var291;
{
((void (*)(val*, val*, long))(var295->class->vft[COLOR_array__Array__with_native]))(var295, var297, var296) /* with_native on <var295:Array[Object]>*/;
}
}
{
var298 = ((val* (*)(val*))(var295->class->vft[COLOR_string__Object__to_s]))(var295) /* to_s on <var295:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var298); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var299 = NULL;
if (var_ret == NULL) {
var300 = 0; /* is null */
} else {
var300 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var299) on <var_ret:nullable MType> */
var_other = var299;
{
var304 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
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
if (varonce306) {
var307 = varonce306;
} else {
var308 = "return ";
var309 = 7;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
{
{ /* Inline abstract_compiler#Frame#returnvar (var_frame) on <var_frame:Frame> */
var313 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var_frame:Frame> */
var311 = var313;
RET_LABEL312:(void)0;
}
}
if (unlikely(var311 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1932);
show_backtrace(1);
}
if (varonce314) {
var315 = varonce314;
} else {
var316 = ";";
var317 = 1;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
var319 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var319 = array_instance Array[Object] */
var320 = 3;
var321 = NEW_array__NativeArray(var320, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var321)->values[0] = (val*) var307;
((struct instance_array__NativeArray*)var321)->values[1] = (val*) var311;
((struct instance_array__NativeArray*)var321)->values[2] = (val*) var315;
{
((void (*)(val*, val*, long))(var319->class->vft[COLOR_array__Array__with_native]))(var319, var321, var320) /* with_native on <var319:Array[Object]>*/;
}
}
{
var322 = ((val* (*)(val*))(var319->class->vft[COLOR_string__Object__to_s]))(var319) /* to_s on <var319:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var322); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce323) {
var324 = varonce323;
} else {
var325 = "}";
var326 = 1;
var327 = string__NativeString__to_s_with_length(var325, var326);
var324 = var327;
varonce323 = var324;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var324); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var328 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = "VIRTUAL";
var332 = 7;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
var334 = 0;
{
var335 = string__Text__has_substring(var328, var330, var334);
}
var336 = !var335;
if (var336){
{
{ /* Inline abstract_compiler#AbstractCompiler#names (var_compiler) on <var_compiler:AbstractCompiler> */
var339 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:AbstractCompiler> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 460);
show_backtrace(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
{
var340 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var343 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var343 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var341 = var343;
RET_LABEL342:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var341) on <var341:MClassDef> */
var346 = var341->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var341:MClassDef> */
if (unlikely(var346 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var344 = var346;
RET_LABEL345:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var344) on <var344:MModule> */
var349 = var344->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var344:MModule> */
if (unlikely(var349 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
if (varonce350) {
var351 = varonce350;
} else {
var352 = "::";
var353 = 2;
var354 = string__NativeString__to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var357 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var357 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var355) on <var355:MClassDef> */
var360 = var355->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var355:MClassDef> */
if (unlikely(var360 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var358 = var360;
RET_LABEL359:(void)0;
}
}
{
{ /* Inline model#MClass#name (var358) on <var358:MClass> */
var363 = var358->attrs[COLOR_model__MClass___name].val; /* _name on <var358:MClass> */
if (unlikely(var363 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
if (varonce364) {
var365 = varonce364;
} else {
var366 = "::";
var367 = 2;
var368 = string__NativeString__to_s_with_length(var366, var367);
var365 = var368;
varonce364 = var365;
}
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var371 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var371 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var369 = var371;
RET_LABEL370:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var369) on <var369:MProperty(MMethod)> */
var374 = var369->attrs[COLOR_model__MProperty___name].val; /* _name on <var369:MProperty(MMethod)> */
if (unlikely(var374 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var372 = var374;
RET_LABEL373:(void)0;
}
}
if (varonce375) {
var376 = varonce375;
} else {
var377 = " (";
var378 = 2;
var379 = string__NativeString__to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var382 = var_mmethoddef->attrs[COLOR_model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1892);
show_backtrace(1);
}
var380 = var382;
RET_LABEL381:(void)0;
}
}
{
{ /* Inline location#Location#file (var380) on <var380:Location> */
var385 = var380->attrs[COLOR_location__Location___file].val; /* _file on <var380:Location> */
var383 = var385;
RET_LABEL384:(void)0;
}
}
if (var383 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/separate_compiler.nit", 1935);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var383) on <var383:nullable SourceFile> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var388 = var383->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var383:nullable SourceFile> */
if (unlikely(var388 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var386 = var388;
RET_LABEL387:(void)0;
}
}
if (varonce389) {
var390 = varonce389;
} else {
var391 = "--";
var392 = 2;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var396 = var_mmethoddef->attrs[COLOR_model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var396 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1892);
show_backtrace(1);
}
var394 = var396;
RET_LABEL395:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var394) on <var394:Location> */
var399 = var394->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var394:Location> */
var397 = var399;
RET_LABEL398:(void)0;
}
}
if (varonce400) {
var401 = varonce400;
} else {
var402 = ")";
var403 = 1;
var404 = string__NativeString__to_s_with_length(var402, var403);
var401 = var404;
varonce400 = var401;
}
var405 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var405 = array_instance Array[Object] */
var406 = 10;
var407 = NEW_array__NativeArray(var406, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var407)->values[0] = (val*) var347;
((struct instance_array__NativeArray*)var407)->values[1] = (val*) var351;
((struct instance_array__NativeArray*)var407)->values[2] = (val*) var361;
((struct instance_array__NativeArray*)var407)->values[3] = (val*) var365;
((struct instance_array__NativeArray*)var407)->values[4] = (val*) var372;
((struct instance_array__NativeArray*)var407)->values[5] = (val*) var376;
((struct instance_array__NativeArray*)var407)->values[6] = (val*) var386;
((struct instance_array__NativeArray*)var407)->values[7] = (val*) var390;
var408 = BOX_kernel__Int(var397); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var407)->values[8] = (val*) var408;
((struct instance_array__NativeArray*)var407)->values[9] = (val*) var401;
{
((void (*)(val*, val*, long))(var405->class->vft[COLOR_array__Array__with_native]))(var405, var407, var406) /* with_native on <var405:Array[Object]>*/;
}
}
{
var409 = ((val* (*)(val*))(var405->class->vft[COLOR_string__Object__to_s]))(var405) /* to_s on <var405:Array[Object]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var337, var340, var409); /* Direct call hash_collection#HashMap#[]= on <var337:HashMap[String, String]>*/
}
} else {
}
RET_LABEL:;
}
/* method separate_compiler#VirtualRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_separate_compiler__VirtualRuntimeFunction__compile_to_c(val* self, val* p0) {
separate_compiler__VirtualRuntimeFunction__compile_to_c(self, p0); /* Direct call separate_compiler#VirtualRuntimeFunction#compile_to_c on <self:Object(VirtualRuntimeFunction)>*/
RET_LABEL:;
}
/* method separate_compiler#MType#const_color for (self: MType): String */
val* separate_compiler__MType__const_color(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "COLOR_";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name]))(self) /* c_name on <self:MType>*/;
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MType#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MType__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MType__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MProperty#const_color for (self: MProperty): String */
val* separate_compiler__MProperty__const_color(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "COLOR_";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__MProperty__c_name(self);
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MProperty#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MProperty__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MProperty__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MPropDef#const_color for (self: MPropDef): String */
val* separate_compiler__MPropDef__const_color(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "COLOR_";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__MPropDef__c_name(self);
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MPropDef#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MPropDef__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MPropDef__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#AMethPropdef#can_inline for (self: AMethPropdef): Bool */
short int separate_compiler__AMethPropdef__can_inline(val* self) {
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
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : MProperty */;
val* var15 /* : MProperty */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
var11 = ((short int (*)(val*, val*))(var_m->class->vft[COLOR_kernel__Object___61d_61d]))(var_m, var_other) /* == on <var_m:nullable MMethodDef(MMethodDef)>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var_ = var7;
if (var7){
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var15 = var_m->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_m:nullable MMethodDef(MMethodDef)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var13) on <var13:MProperty(MMethod)> */
var18 = var13->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var13:MProperty(MMethod)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var5 = var16;
} else {
var5 = var_;
}
var_19 = var5;
if (var5){
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:nullable MMethodDef(MMethodDef)> */
var22 = var_m->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <var_m:nullable MMethodDef(MMethodDef)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var4 = var20;
} else {
var4 = var_19;
}
if (var4){
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
{
var24 = ((short int (*)(val*))(self->class->vft[COLOR_separate_compiler__AMethPropdef__can_inline]))(self) /* can_inline on <self:AMethPropdef>*/;
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#AMethPropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_separate_compiler__AMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_compiler__AMethPropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
