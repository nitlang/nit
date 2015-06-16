#include "nit__separate_compiler.sep.0.h"
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
val* var22 /* : MType */;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var32 /* : OptionBool */;
val* var34 /* : OptionBool */;
val* var35 /* : nullable Object */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
val* var39 /* : AbstractCompiler */;
val* var41 /* : AbstractCompiler */;
val* var_ /* var : SeparateCompiler */;
long var42 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var48 /* : Int */;
static val* varonce;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
val* var53 /* : String */;
val* var54 /* : AbstractCompiler */;
val* var56 /* : AbstractCompiler */;
val* var57 /* : ModelBuilder */;
val* var59 /* : ModelBuilder */;
val* var60 /* : ToolContext */;
val* var62 /* : ToolContext */;
val* var63 /* : OptionBool */;
val* var65 /* : OptionBool */;
val* var66 /* : nullable Object */;
val* var68 /* : nullable Object */;
short int var69 /* : Bool */;
val* var70 /* : MClassType */;
val* var71 /* : MType */;
val* var_cret /* var cret: MType */;
val* var72 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var75 /* : NativeArray[String] */;
static val* varonce74;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
val* var87 /* : FlatString */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var101 /* : String */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
short int var106 /* : Bool */;
short int var_107 /* var : Bool */;
val* var108 /* : AbstractCompiler */;
val* var110 /* : AbstractCompiler */;
val* var111 /* : ModelBuilder */;
val* var113 /* : ModelBuilder */;
val* var114 /* : ToolContext */;
val* var116 /* : ToolContext */;
val* var117 /* : OptionBool */;
val* var119 /* : OptionBool */;
val* var120 /* : nullable Object */;
val* var122 /* : nullable Object */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var126 /* : NativeArray[String] */;
static val* varonce125;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var138 /* : NativeArray[String] */;
static val* varonce137;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
val* var142 /* : FlatString */;
val* var143 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
val* var151 /* : AbstractCompiler */;
val* var153 /* : AbstractCompiler */;
val* var154 /* : ModelBuilder */;
val* var156 /* : ModelBuilder */;
val* var157 /* : ToolContext */;
val* var159 /* : ToolContext */;
val* var160 /* : OptionBool */;
val* var162 /* : OptionBool */;
val* var163 /* : nullable Object */;
val* var165 /* : nullable Object */;
short int var166 /* : Bool */;
val* var167 /* : AbstractCompiler */;
val* var169 /* : AbstractCompiler */;
val* var_170 /* var : SeparateCompiler */;
long var171 /* : Int */;
long var173 /* : Int */;
long var174 /* : Int */;
short int var176 /* : Bool */;
int cltype177;
int idtype178;
const char* var_class_name179;
long var180 /* : Int */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
val* var185 /* : FlatString */;
val* var186 /* : RuntimeVariable */;
val* var187 /* : RuntimeVariable */;
val* var_res188 /* var res: RuntimeVariable */;
val* var190 /* : NativeArray[String] */;
static val* varonce189;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
val* var198 /* : FlatString */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : FlatString */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : FlatString */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : FlatString */;
val* var215 /* : String */;
val* var216 /* : String */;
val* var217 /* : String */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var221 /* : String */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var_226 /* var : Bool */;
short int var227 /* : Bool */;
int cltype228;
int idtype229;
short int var230 /* : Bool */;
short int var_231 /* var : Bool */;
val* var232 /* : AbstractCompiler */;
val* var234 /* : AbstractCompiler */;
val* var235 /* : ModelBuilder */;
val* var237 /* : ModelBuilder */;
val* var238 /* : ToolContext */;
val* var240 /* : ToolContext */;
val* var241 /* : OptionBool */;
val* var243 /* : OptionBool */;
val* var244 /* : nullable Object */;
val* var246 /* : nullable Object */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
val* var250 /* : NativeArray[String] */;
static val* varonce249;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
val* var254 /* : FlatString */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
val* var258 /* : FlatString */;
val* var259 /* : String */;
val* var260 /* : String */;
val* var262 /* : NativeArray[String] */;
static val* varonce261;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
val* var266 /* : FlatString */;
val* var267 /* : String */;
val* var269 /* : String */;
val* var270 /* : String */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
val* var274 /* : FlatString */;
val* var275 /* : AbstractCompiler */;
val* var277 /* : AbstractCompiler */;
val* var278 /* : ModelBuilder */;
val* var280 /* : ModelBuilder */;
val* var281 /* : ToolContext */;
val* var283 /* : ToolContext */;
val* var284 /* : OptionBool */;
val* var286 /* : OptionBool */;
val* var287 /* : nullable Object */;
val* var289 /* : nullable Object */;
short int var290 /* : Bool */;
val* var291 /* : AbstractCompiler */;
val* var293 /* : AbstractCompiler */;
val* var_294 /* var : SeparateCompiler */;
long var295 /* : Int */;
long var297 /* : Int */;
long var298 /* : Int */;
short int var300 /* : Bool */;
int cltype301;
int idtype302;
const char* var_class_name303;
long var304 /* : Int */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : FlatString */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1621);
fatal_exit(1);
}
var_ret = var4;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var9 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nit__model__MType__resolve_for]))(var_ret, var13, var16, var19, 1); /* resolve_for on <var_ret:MType>*/
}
var_ret = var22;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var23) on <var23:AbstractCompiler(SeparateCompiler)> */
var28 = var23->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var23:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var29) on <var29:ToolContext> */
var34 = var29->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var29:ToolContext> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 64);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline opts#Option#value (var32) on <var32:OptionBool> */
var37 = var32->attrs[COLOR_opts__Option___value].val; /* _value on <var32:OptionBool> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = (short int)((long)(var35)>>2);
if (var38){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var41 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_ = var39;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (var_) on <var_:SeparateCompiler> */
var44 = var_->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <var_:SeparateCompiler> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var42,1l) on <var42:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var47 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var48 = var42 + 1l;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count= (var_,var45) on <var_:SeparateCompiler> */
var_->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l = var45; /* _attr_read_count on <var_:SeparateCompiler> */
RET_LABEL49:(void)0;
}
}
if (likely(varonce!=NULL)) {
var50 = varonce;
} else {
var51 = "count_attr_reads++;";
var52 = standard___standard__NativeString___to_s_with_length(var51, 19l);
var50 = var52;
varonce = var50;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var53 = nit__separate_compiler___MEntity___const_color(var_a);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var56 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var54) on <var54:AbstractCompiler(SeparateCompiler)> */
var59 = var54->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var54:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var57) on <var57:ModelBuilder> */
var62 = var57->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var57:ModelBuilder> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var60) on <var60:ToolContext> */
var65 = var60->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var60:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 28);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline opts#Option#value (var63) on <var63:OptionBool> */
var68 = var63->attrs[COLOR_opts__Option___value].val; /* _value on <var63:OptionBool> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = (short int)((long)(var66)>>2);
if (var69){
{
var70 = nit___nit__AbstractCompilerVisitor___object_type(self);
}
{
var71 = nit___nit__MType___as_nullable(var70);
}
var_cret = var71;
{
var72 = nit___nit__AbstractCompilerVisitor___new_var(self, var_cret);
}
var_res = var72;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (var_res,var_ret) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val = var_ret; /* _mcasttype on <var_res:RuntimeVariable> */
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce74==NULL)) {
var75 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = " = ";
var79 = standard___standard__NativeString___to_s_with_length(var78, 3l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var75)->values[1]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "->attrs[";
var83 = standard___standard__NativeString___to_s_with_length(var82, 8l);
var81 = var83;
varonce80 = var81;
}
((struct instance_standard__NativeArray*)var75)->values[3]=var81;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "]; /* ";
var87 = standard___standard__NativeString___to_s_with_length(var86, 6l);
var85 = var87;
varonce84 = var85;
}
((struct instance_standard__NativeArray*)var75)->values[5]=var85;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " on ";
var91 = standard___standard__NativeString___to_s_with_length(var90, 4l);
var89 = var91;
varonce88 = var89;
}
((struct instance_standard__NativeArray*)var75)->values[7]=var89;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = " */";
var95 = standard___standard__NativeString___to_s_with_length(var94, 3l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var75)->values[9]=var93;
} else {
var75 = varonce74;
varonce74 = NULL;
}
{
var96 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var75)->values[0]=var96;
{
var97 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var75)->values[2]=var97;
{
var98 = nit__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_standard__NativeArray*)var75)->values[4]=var98;
{
var99 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var75)->values[6]=var99;
{
var100 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var75)->values[8]=var100;
{
var101 = ((val*(*)(val* self))(var75->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
{
nit___nit__AbstractCompilerVisitor___add(self, var101); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
/* <var_ret:MType> isa MNullableType */
cltype104 = type_nit__MNullableType.color;
idtype105 = type_nit__MNullableType.id;
if(cltype104 >= var_ret->type->table_size) {
var103 = 0;
} else {
var103 = var_ret->type->type_table[cltype104] == idtype105;
}
var106 = !var103;
var_107 = var106;
if (var106){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var110 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var108) on <var108:AbstractCompiler(SeparateCompiler)> */
var113 = var108->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var108:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var111) on <var111:ModelBuilder> */
var116 = var111->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var111:ModelBuilder> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var114) on <var114:ToolContext> */
var119 = var114->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var114:ToolContext> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 50);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline opts#Option#value (var117) on <var117:OptionBool> */
var122 = var117->attrs[COLOR_opts__Option___value].val; /* _value on <var117:OptionBool> */
var120 = var122;
RET_LABEL121:(void)0;
}
}
var123 = (short int)((long)(var120)>>2);
var124 = !var123;
var102 = var124;
} else {
var102 = var_107;
}
if (var102){
if (unlikely(varonce125==NULL)) {
var126 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "if (unlikely(";
var130 = standard___standard__NativeString___to_s_with_length(var129, 13l);
var128 = var130;
varonce127 = var128;
}
((struct instance_standard__NativeArray*)var126)->values[0]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = " == NULL)) {";
var134 = standard___standard__NativeString___to_s_with_length(var133, 12l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var126)->values[2]=var132;
} else {
var126 = varonce125;
varonce125 = NULL;
}
{
var135 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var126)->values[1]=var135;
{
var136 = ((val*(*)(val* self))(var126->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce125 = var126;
{
nit___nit__AbstractCompilerVisitor___add(self, var136); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce137==NULL)) {
var138 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "Uninitialized attribute ";
var142 = standard___standard__NativeString___to_s_with_length(var141, 24l);
var140 = var142;
varonce139 = var140;
}
((struct instance_standard__NativeArray*)var138)->values[0]=var140;
} else {
var138 = varonce137;
varonce137 = NULL;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var145 = var_a->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
((struct instance_standard__NativeArray*)var138)->values[1]=var143;
{
var146 = ((val*(*)(val* self))(var138->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var138); /* native_to_s on <var138:NativeArray[String]>*/
}
varonce137 = var138;
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "}";
var150 = standard___standard__NativeString___to_s_with_length(var149, 1l);
var148 = var150;
varonce147 = var148;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var153 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var151) on <var151:AbstractCompiler(SeparateCompiler)> */
var156 = var151->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var151:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var154) on <var154:ModelBuilder> */
var159 = var154->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var154:ModelBuilder> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var157) on <var157:ToolContext> */
var162 = var157->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var157:ToolContext> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 64);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline opts#Option#value (var160) on <var160:OptionBool> */
var165 = var160->attrs[COLOR_opts__Option___value].val; /* _value on <var160:OptionBool> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
var166 = (short int)((long)(var163)>>2);
if (var166){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var169 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
var_170 = var167;
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (var_170) on <var_170:SeparateCompiler> */
var173 = var_170->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_170:SeparateCompiler> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var171,1l) on <var171:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var176 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var176)) {
var_class_name179 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name179);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var180 = var171 + 1l;
var174 = var180;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count= (var_170,var174) on <var_170:SeparateCompiler> */
var_170->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = var174; /* _isset_checks_count on <var_170:SeparateCompiler> */
RET_LABEL181:(void)0;
}
}
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "count_isset_checks++;";
var185 = standard___standard__NativeString___to_s_with_length(var184, 21l);
var183 = var185;
varonce182 = var183;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var183); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
{
var186 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_res, var_ret);
}
var = var186;
goto RET_LABEL;
} else {
{
var187 = nit___nit__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res188 = var187;
if (unlikely(varonce189==NULL)) {
var190 = NEW_standard__NativeArray(12l, &type_standard__NativeArray__standard__String);
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = " = ";
var194 = standard___standard__NativeString___to_s_with_length(var193, 3l);
var192 = var194;
varonce191 = var192;
}
((struct instance_standard__NativeArray*)var190)->values[1]=var192;
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "->attrs[";
var198 = standard___standard__NativeString___to_s_with_length(var197, 8l);
var196 = var198;
varonce195 = var196;
}
((struct instance_standard__NativeArray*)var190)->values[3]=var196;
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "].";
var202 = standard___standard__NativeString___to_s_with_length(var201, 2l);
var200 = var202;
varonce199 = var200;
}
((struct instance_standard__NativeArray*)var190)->values[5]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "; /* ";
var206 = standard___standard__NativeString___to_s_with_length(var205, 5l);
var204 = var206;
varonce203 = var204;
}
((struct instance_standard__NativeArray*)var190)->values[7]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = " on ";
var210 = standard___standard__NativeString___to_s_with_length(var209, 4l);
var208 = var210;
varonce207 = var208;
}
((struct instance_standard__NativeArray*)var190)->values[9]=var208;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = " */";
var214 = standard___standard__NativeString___to_s_with_length(var213, 3l);
var212 = var214;
varonce211 = var212;
}
((struct instance_standard__NativeArray*)var190)->values[11]=var212;
} else {
var190 = varonce189;
varonce189 = NULL;
}
{
var215 = ((val*(*)(val* self))(var_res188->class->vft[COLOR_standard__string__Object__to_s]))(var_res188); /* to_s on <var_res188:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var190)->values[0]=var215;
{
var216 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var190)->values[2]=var216;
{
var217 = nit__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_standard__NativeArray*)var190)->values[4]=var217;
{
var218 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_nit__abstract_compiler__MType__ctypename]))(var_ret); /* ctypename on <var_ret:MType>*/
}
((struct instance_standard__NativeArray*)var190)->values[6]=var218;
{
var219 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var190)->values[8]=var219;
{
var220 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var190)->values[10]=var220;
{
var221 = ((val*(*)(val* self))(var190->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var190); /* native_to_s on <var190:NativeArray[String]>*/
}
varonce189 = var190;
{
nit___nit__AbstractCompilerVisitor___add(self, var221); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var224 = ((short int(*)(val* self))(var_ret->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_ret); /* is_c_primitive on <var_ret:MType>*/
}
var225 = !var224;
var_226 = var225;
if (var225){
/* <var_ret:MType> isa MNullableType */
cltype228 = type_nit__MNullableType.color;
idtype229 = type_nit__MNullableType.id;
if(cltype228 >= var_ret->type->table_size) {
var227 = 0;
} else {
var227 = var_ret->type->type_table[cltype228] == idtype229;
}
var230 = !var227;
var223 = var230;
} else {
var223 = var_226;
}
var_231 = var223;
if (var223){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var234 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var232) on <var232:AbstractCompiler(SeparateCompiler)> */
var237 = var232->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var232:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var235) on <var235:ModelBuilder> */
var240 = var235->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var235:ModelBuilder> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var238) on <var238:ToolContext> */
var243 = var238->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var238:ToolContext> */
if (unlikely(var243 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 50);
fatal_exit(1);
}
var241 = var243;
RET_LABEL242:(void)0;
}
}
{
{ /* Inline opts#Option#value (var241) on <var241:OptionBool> */
var246 = var241->attrs[COLOR_opts__Option___value].val; /* _value on <var241:OptionBool> */
var244 = var246;
RET_LABEL245:(void)0;
}
}
var247 = (short int)((long)(var244)>>2);
var248 = !var247;
var222 = var248;
} else {
var222 = var_231;
}
if (var222){
if (unlikely(varonce249==NULL)) {
var250 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "if (unlikely(";
var254 = standard___standard__NativeString___to_s_with_length(var253, 13l);
var252 = var254;
varonce251 = var252;
}
((struct instance_standard__NativeArray*)var250)->values[0]=var252;
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = " == NULL)) {";
var258 = standard___standard__NativeString___to_s_with_length(var257, 12l);
var256 = var258;
varonce255 = var256;
}
((struct instance_standard__NativeArray*)var250)->values[2]=var256;
} else {
var250 = varonce249;
varonce249 = NULL;
}
{
var259 = ((val*(*)(val* self))(var_res188->class->vft[COLOR_standard__string__Object__to_s]))(var_res188); /* to_s on <var_res188:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var250)->values[1]=var259;
{
var260 = ((val*(*)(val* self))(var250->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var250); /* native_to_s on <var250:NativeArray[String]>*/
}
varonce249 = var250;
{
nit___nit__AbstractCompilerVisitor___add(self, var260); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce261==NULL)) {
var262 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = "Uninitialized attribute ";
var266 = standard___standard__NativeString___to_s_with_length(var265, 24l);
var264 = var266;
varonce263 = var264;
}
((struct instance_standard__NativeArray*)var262)->values[0]=var264;
} else {
var262 = varonce261;
varonce261 = NULL;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var269 = var_a->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
((struct instance_standard__NativeArray*)var262)->values[1]=var267;
{
var270 = ((val*(*)(val* self))(var262->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var262); /* native_to_s on <var262:NativeArray[String]>*/
}
varonce261 = var262;
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var270); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = "}";
var274 = standard___standard__NativeString___to_s_with_length(var273, 1l);
var272 = var274;
varonce271 = var272;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var272); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var277 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var275) on <var275:AbstractCompiler(SeparateCompiler)> */
var280 = var275->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var275:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var278) on <var278:ModelBuilder> */
var283 = var278->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var278:ModelBuilder> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var281) on <var281:ToolContext> */
var286 = var281->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var281:ToolContext> */
if (unlikely(var286 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 64);
fatal_exit(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
{
{ /* Inline opts#Option#value (var284) on <var284:OptionBool> */
var289 = var284->attrs[COLOR_opts__Option___value].val; /* _value on <var284:OptionBool> */
var287 = var289;
RET_LABEL288:(void)0;
}
}
var290 = (short int)((long)(var287)>>2);
if (var290){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var293 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
var_294 = var291;
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (var_294) on <var_294:SeparateCompiler> */
var297 = var_294->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <var_294:SeparateCompiler> */
var295 = var297;
RET_LABEL296:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var295,1l) on <var295:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var300 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var300)) {
var_class_name303 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name303);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var304 = var295 + 1l;
var298 = var304;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count= (var_294,var298) on <var_294:SeparateCompiler> */
var_294->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = var298; /* _isset_checks_count on <var_294:SeparateCompiler> */
RET_LABEL305:(void)0;
}
}
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "count_isset_checks++;";
var309 = standard___standard__NativeString___to_s_with_length(var308, 21l);
var307 = var309;
varonce306 = var307;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var307); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
}
var = var_res188;
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
val* var21 /* : MType */;
val* var22 /* : RuntimeVariable */;
val* var23 /* : String */;
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
val* var40 /* : NativeArray[String] */;
static val* varonce;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var_attr /* var attr: String */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : AbstractCompiler */;
val* var57 /* : AbstractCompiler */;
val* var58 /* : MModule */;
val* var60 /* : MModule */;
val* var61 /* : MClassType */;
val* var62 /* : RuntimeVariable */;
val* var_tv /* var tv: RuntimeVariable */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
int cltype;
int idtype;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var127 /* : String */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
val* var133 /* : MClassType */;
val* var134 /* : MType */;
val* var135 /* : RuntimeVariable */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
val* var153 /* : FlatString */;
val* var154 /* : String */;
val* var155 /* : String */;
val* var156 /* : String */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : FlatString */;
val* var163 /* : NativeArray[String] */;
static val* varonce162;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : FlatString */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : FlatString */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : FlatString */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : FlatString */;
val* var180 /* : String */;
val* var181 /* : String */;
val* var182 /* : String */;
val* var183 /* : String */;
val* var185 /* : NativeArray[String] */;
static val* varonce184;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : FlatString */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
val* var193 /* : FlatString */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
val* var197 /* : FlatString */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : FlatString */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
val* var205 /* : FlatString */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
val* var209 /* : FlatString */;
val* var210 /* : String */;
val* var211 /* : String */;
val* var212 /* : String */;
val* var213 /* : String */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var216 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1678);
fatal_exit(1);
}
var_mtype = var3;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var8 = var_a->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var12, var15, var18, 1); /* resolve_for on <var_mtype:MType>*/
}
var_mtype = var21;
{
var22 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var_mtype);
}
var_value = var22;
{
var23 = nit__separate_compiler___MEntity___const_color(var_a);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var26 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_union_attribute (var30) on <var30:ToolContext> */
var35 = var30->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute].val; /* _opt_no_union_attribute on <var30:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_union_attribute");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 28);
fatal_exit(1);
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
var39 = (short int)((long)(var36)>>2);
if (var39){
if (unlikely(varonce==NULL)) {
var40 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "->attrs[";
var44 = standard___standard__NativeString___to_s_with_length(var43, 8l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var40)->values[1]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "]";
var48 = standard___standard__NativeString___to_s_with_length(var47, 1l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var40)->values[3]=var46;
} else {
var40 = varonce;
varonce = NULL;
}
{
var49 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var40)->values[0]=var49;
{
var50 = nit__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_standard__NativeArray*)var40)->values[2]=var50;
{
var51 = ((val*(*)(val* self))(var40->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
var_attr = var51;
{
{ /* Inline separate_compiler#MType#is_tagged (var_mtype) on <var_mtype:MType> */
var54 = var_mtype->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MType> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (var52){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var57 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var55) on <var55:AbstractCompiler(SeparateCompiler)> */
var60 = var55->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var55:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nit__model___MModule___object_type(var58);
}
{
var62 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var61);
}
var_tv = var62;
if (unlikely(varonce63==NULL)) {
var64 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = " = ";
var68 = standard___standard__NativeString___to_s_with_length(var67, 3l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var64)->values[1]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "; /* ";
var72 = standard___standard__NativeString___to_s_with_length(var71, 5l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var64)->values[3]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " on ";
var76 = standard___standard__NativeString___to_s_with_length(var75, 4l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var64)->values[5]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = " */";
var80 = standard___standard__NativeString___to_s_with_length(var79, 3l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var64)->values[7]=var78;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_standard__NativeArray*)var64)->values[0]=var_attr;
{
var81 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_standard__string__Object__to_s]))(var_tv); /* to_s on <var_tv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var64)->values[2]=var81;
{
var82 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var64)->values[4]=var82;
{
var83 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var64)->values[6]=var83;
{
var84 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
nit___nit__AbstractCompilerVisitor___add(self, var84); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
var85 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
if (var85){
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var86 = 0;
} else {
var86 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var86)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1693);
fatal_exit(1);
}
if (unlikely(varonce87==NULL)) {
var88 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "if (";
var92 = standard___standard__NativeString___to_s_with_length(var91, 4l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var88)->values[0]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = " != NULL) {";
var96 = standard___standard__NativeString___to_s_with_length(var95, 11l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var88)->values[2]=var94;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_standard__NativeArray*)var88)->values[1]=var_attr;
{
var97 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
nit___nit__AbstractCompilerVisitor___add(self, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_standard__NativeArray(11l, &type_standard__NativeArray__standard__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "((struct instance_";
var103 = standard___standard__NativeString___to_s_with_length(var102, 18l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "*)";
var107 = standard___standard__NativeString___to_s_with_length(var106, 2l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var99)->values[2]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = ")->value = ";
var111 = standard___standard__NativeString___to_s_with_length(var110, 11l);
var109 = var111;
varonce108 = var109;
}
((struct instance_standard__NativeArray*)var99)->values[4]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "; /* ";
var115 = standard___standard__NativeString___to_s_with_length(var114, 5l);
var113 = var115;
varonce112 = var113;
}
((struct instance_standard__NativeArray*)var99)->values[6]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = " on ";
var119 = standard___standard__NativeString___to_s_with_length(var118, 4l);
var117 = var119;
varonce116 = var117;
}
((struct instance_standard__NativeArray*)var99)->values[8]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = " */";
var123 = standard___standard__NativeString___to_s_with_length(var122, 3l);
var121 = var123;
varonce120 = var121;
}
((struct instance_standard__NativeArray*)var99)->values[10]=var121;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var124 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_standard__NativeArray*)var99)->values[1]=var124;
((struct instance_standard__NativeArray*)var99)->values[3]=var_attr;
{
var125 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var99)->values[5]=var125;
{
var126 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var99)->values[7]=var126;
{
var127 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var99)->values[9]=var127;
{
var128 = ((val*(*)(val* self))(var99->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nit___nit__AbstractCompilerVisitor___add(self, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "} else {";
var132 = standard___standard__NativeString___to_s_with_length(var131, 8l);
var130 = var132;
varonce129 = var130;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var130); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var133 = nit___nit__AbstractCompilerVisitor___object_type(self);
}
{
var134 = nit___nit__MType___as_nullable(var133);
}
{
var135 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var134);
}
var_value = var135;
if (unlikely(varonce136==NULL)) {
var137 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " = ";
var141 = standard___standard__NativeString___to_s_with_length(var140, 3l);
var139 = var141;
varonce138 = var139;
}
((struct instance_standard__NativeArray*)var137)->values[1]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "; /* ";
var145 = standard___standard__NativeString___to_s_with_length(var144, 5l);
var143 = var145;
varonce142 = var143;
}
((struct instance_standard__NativeArray*)var137)->values[3]=var143;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = " on ";
var149 = standard___standard__NativeString___to_s_with_length(var148, 4l);
var147 = var149;
varonce146 = var147;
}
((struct instance_standard__NativeArray*)var137)->values[5]=var147;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = " */";
var153 = standard___standard__NativeString___to_s_with_length(var152, 3l);
var151 = var153;
varonce150 = var151;
}
((struct instance_standard__NativeArray*)var137)->values[7]=var151;
} else {
var137 = varonce136;
varonce136 = NULL;
}
((struct instance_standard__NativeArray*)var137)->values[0]=var_attr;
{
var154 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var137)->values[2]=var154;
{
var155 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var137)->values[4]=var155;
{
var156 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var137)->values[6]=var156;
{
var157 = ((val*(*)(val* self))(var137->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
nit___nit__AbstractCompilerVisitor___add(self, var157); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "}";
var161 = standard___standard__NativeString___to_s_with_length(var160, 1l);
var159 = var161;
varonce158 = var159;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var159); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce162==NULL)) {
var163 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = " = ";
var167 = standard___standard__NativeString___to_s_with_length(var166, 3l);
var165 = var167;
varonce164 = var165;
}
((struct instance_standard__NativeArray*)var163)->values[1]=var165;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "; /* ";
var171 = standard___standard__NativeString___to_s_with_length(var170, 5l);
var169 = var171;
varonce168 = var169;
}
((struct instance_standard__NativeArray*)var163)->values[3]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = " on ";
var175 = standard___standard__NativeString___to_s_with_length(var174, 4l);
var173 = var175;
varonce172 = var173;
}
((struct instance_standard__NativeArray*)var163)->values[5]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = " */";
var179 = standard___standard__NativeString___to_s_with_length(var178, 3l);
var177 = var179;
varonce176 = var177;
}
((struct instance_standard__NativeArray*)var163)->values[7]=var177;
} else {
var163 = varonce162;
varonce162 = NULL;
}
((struct instance_standard__NativeArray*)var163)->values[0]=var_attr;
{
var180 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var163)->values[2]=var180;
{
var181 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var163)->values[4]=var181;
{
var182 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var163)->values[6]=var182;
{
var183 = ((val*(*)(val* self))(var163->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var163); /* native_to_s on <var163:NativeArray[String]>*/
}
varonce162 = var163;
{
nit___nit__AbstractCompilerVisitor___add(self, var183); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (unlikely(varonce184==NULL)) {
var185 = NEW_standard__NativeArray(12l, &type_standard__NativeArray__standard__String);
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "->attrs[";
var189 = standard___standard__NativeString___to_s_with_length(var188, 8l);
var187 = var189;
varonce186 = var187;
}
((struct instance_standard__NativeArray*)var185)->values[1]=var187;
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "].";
var193 = standard___standard__NativeString___to_s_with_length(var192, 2l);
var191 = var193;
varonce190 = var191;
}
((struct instance_standard__NativeArray*)var185)->values[3]=var191;
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = " = ";
var197 = standard___standard__NativeString___to_s_with_length(var196, 3l);
var195 = var197;
varonce194 = var195;
}
((struct instance_standard__NativeArray*)var185)->values[5]=var195;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "; /* ";
var201 = standard___standard__NativeString___to_s_with_length(var200, 5l);
var199 = var201;
varonce198 = var199;
}
((struct instance_standard__NativeArray*)var185)->values[7]=var199;
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = " on ";
var205 = standard___standard__NativeString___to_s_with_length(var204, 4l);
var203 = var205;
varonce202 = var203;
}
((struct instance_standard__NativeArray*)var185)->values[9]=var203;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = " */";
var209 = standard___standard__NativeString___to_s_with_length(var208, 3l);
var207 = var209;
varonce206 = var207;
}
((struct instance_standard__NativeArray*)var185)->values[11]=var207;
} else {
var185 = varonce184;
varonce184 = NULL;
}
{
var210 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var185)->values[0]=var210;
{
var211 = nit__separate_compiler___MEntity___const_color(var_a);
}
((struct instance_standard__NativeArray*)var185)->values[2]=var211;
{
var212 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctypename]))(var_mtype); /* ctypename on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var185)->values[4]=var212;
{
var213 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var185)->values[6]=var213;
{
var214 = ((val*(*)(val* self))(var_a->class->vft[COLOR_standard__string__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_standard__NativeArray*)var185)->values[8]=var214;
{
var215 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_recv);
}
((struct instance_standard__NativeArray*)var185)->values[10]=var215;
{
var216 = ((val*(*)(val* self))(var185->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var185); /* native_to_s on <var185:NativeArray[String]>*/
}
varonce184 = var185;
{
nit___nit__AbstractCompilerVisitor___add(self, var216); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
val* var19 /* : NativeArray[String] */;
static val* varonce;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : String */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
var_mtype = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 46);
fatal_exit(1);
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
var15 = (short int)((long)(var12)>>2);
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
if (unlikely(varonce==NULL)) {
var19 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "if(";
var23 = standard___standard__NativeString___to_s_with_length(var22, 3l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " == -1) {";
var27 = standard___standard__NativeString___to_s_with_length(var26, 9l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var19)->values[2]=var25;
} else {
var19 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var19)->values[1]=var_col;
{
var28 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
nit___nit__AbstractCompilerVisitor___add(self, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce29==NULL)) {
var30 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "PRINT_ERROR(\"Resolution of a dead open type: %s\\n\", \"";
var34 = standard___standard__NativeString___to_s_with_length(var33, 53l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "\");";
var38 = standard___standard__NativeString___to_s_with_length(var37, 3l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var30)->values[2]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
{
var39 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
{
var40 = standard___standard__Text___escape_to_c(var39);
}
((struct instance_standard__NativeArray*)var30)->values[1]=var40;
{
var41 = ((val*(*)(val* self))(var30->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
nit___nit__AbstractCompilerVisitor___add(self, var41); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "open type dead";
var45 = standard___standard__NativeString___to_s_with_length(var44, 14l);
var43 = var45;
varonce42 = var43;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "}";
var49 = standard___standard__NativeString___to_s_with_length(var48, 1l);
var47 = var49;
varonce46 = var47;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var47); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
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
val* var17 /* : NativeArray[String] */;
static val* varonce;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
var_t = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 46);
fatal_exit(1);
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
var15 = (short int)((long)(var12)>>2);
var16 = !var15;
if (var16){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var17 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "if(";
var21 = standard___standard__NativeString___to_s_with_length(var20, 3l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " == NULL) {";
var25 = standard___standard__NativeString___to_s_with_length(var24, 11l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var17)->values[2]=var23;
} else {
var17 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var17)->values[1]=var_t;
{
var26 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
{
nit___nit__AbstractCompilerVisitor___add(self, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "cast type null";
var30 = standard___standard__NativeString___to_s_with_length(var29, 14l);
var28 = var30;
varonce27 = var28;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "}";
var34 = standard___standard__NativeString___to_s_with_length(var33, 1l);
var32 = var34;
varonce31 = var32;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce35==NULL)) {
var36 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "if(";
var40 = standard___standard__NativeString___to_s_with_length(var39, 3l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "->id == -1 || ";
var44 = standard___standard__NativeString___to_s_with_length(var43, 14l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var36)->values[2]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "->color == -1) {";
var48 = standard___standard__NativeString___to_s_with_length(var47, 16l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var36)->values[4]=var46;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_standard__NativeArray*)var36)->values[1]=var_t;
((struct instance_standard__NativeArray*)var36)->values[3]=var_t;
{
var49 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nit___nit__AbstractCompilerVisitor___add(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "PRINT_ERROR(\"Try to cast on a dead cast type: %s\\n\", ";
var55 = standard___standard__NativeString___to_s_with_length(var54, 53l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "->name);";
var59 = standard___standard__NativeString___to_s_with_length(var58, 8l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var51)->values[2]=var57;
} else {
var51 = varonce50;
varonce50 = NULL;
}
((struct instance_standard__NativeArray*)var51)->values[1]=var_t;
{
var60 = ((val*(*)(val* self))(var51->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nit___nit__AbstractCompilerVisitor___add(self, var60); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "cast type dead";
var64 = standard___standard__NativeString___to_s_with_length(var63, 14l);
var62 = var64;
varonce61 = var62;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var62); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "}";
var68 = standard___standard__NativeString___to_s_with_length(var67, 1l);
var66 = var68;
varonce65 = var66;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#init_instance for (self: SeparateCompilerVisitor, MClassType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : MClass */;
val* var8 /* : MClass */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : AbstractCompiler */;
val* var13 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable StaticFrame */;
val* var21 /* : nullable StaticFrame */;
val* var22 /* : MPropDef */;
val* var24 /* : MPropDef */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : nullable StaticFrame */;
val* var30 /* : nullable StaticFrame */;
val* var31 /* : Array[RuntimeVariable] */;
val* var33 /* : Array[RuntimeVariable] */;
val* var34 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var35 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var36 /* : String */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var55 /* : MClass */;
val* var57 /* : MClass */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : RuntimeVariable */;
val* var62 /* : Set[MType] */;
val* var64 /* : Set[MType] */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
val* var87 /* : MClass */;
val* var89 /* : MClass */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : RuntimeVariable */;
var_mtype = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "NEW_";
var5 = standard___standard__NativeString___to_s_with_length(var4, 4l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var8 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__MClass___nit__model_base__MEntity__c_name(var6);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var10); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var13 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_compiler = var11;
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var15 = 0;
} else {
var15 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var15;
if (var15){
{
{ /* Inline model#MGenericType#need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var18 = var_mtype->attrs[COLOR_nit__model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var14 = var16;
} else {
var14 = var_;
}
if (var14){
{
nit___nit__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var21 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1742);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var19) on <var19:nullable StaticFrame> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var24 = var19->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var19:nullable StaticFrame> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var22) on <var22:MPropDef> */
var27 = var22->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var22:MPropDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___link_unresolved_type(self, var25, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var30 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1743);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var28) on <var28:nullable StaticFrame> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var33 = var28->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var28:nullable StaticFrame> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = standard___standard__SequenceRead___Collection__first(var31);
}
var_recv = var34;
{
var35 = nit___nit__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var35;
{
var36 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce37==NULL)) {
var38 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "NEW_";
var42 = standard___standard__NativeString___to_s_with_length(var41, 4l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var38)->values[0]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "(";
var46 = standard___standard__NativeString___to_s_with_length(var45, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var38)->values[2]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "->resolution_table->types[";
var50 = standard___standard__NativeString___to_s_with_length(var49, 26l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var38)->values[4]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "])";
var54 = standard___standard__NativeString___to_s_with_length(var53, 2l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var38)->values[6]=var52;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var57 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = nit___nit__MClass___nit__model_base__MEntity__c_name(var55);
}
((struct instance_standard__NativeArray*)var38)->values[1]=var58;
((struct instance_standard__NativeArray*)var38)->values[3]=var_recv_type_info;
{
var59 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
((struct instance_standard__NativeArray*)var38)->values[5]=var59;
{
var60 = ((val*(*)(val* self))(var38->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
var61 = nit___nit__AbstractCompilerVisitor___new_expr(self, var60, var_mtype);
}
var = var61;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var64 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 146);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var62&3)?class_info[((long)var62&3)]:var62->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var62, var_mtype); /* add on <var62:Set[MType]>*/
}
if (unlikely(varonce65==NULL)) {
var66 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "type_";
var70 = standard___standard__NativeString___to_s_with_length(var69, 5l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var66)->values[0]=var68;
} else {
var66 = varonce65;
varonce65 = NULL;
}
{
var71 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var66)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var66->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "NEW_";
var78 = standard___standard__NativeString___to_s_with_length(var77, 4l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "(&type_";
var82 = standard___standard__NativeString___to_s_with_length(var81, 7l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var74)->values[2]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ")";
var86 = standard___standard__NativeString___to_s_with_length(var85, 1l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var74)->values[4]=var84;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var89 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = nit___nit__MClass___nit__model_base__MEntity__c_name(var87);
}
((struct instance_standard__NativeArray*)var74)->values[1]=var90;
{
var91 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var74)->values[3]=var91;
{
var92 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
var93 = nit___nit__AbstractCompilerVisitor___new_expr(self, var92, var_mtype);
}
var = var93;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#type_test for (self: SeparateCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : AbstractCompiler */;
val* var19 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var20 /* : nullable StaticFrame */;
val* var22 /* : nullable StaticFrame */;
val* var23 /* : Array[RuntimeVariable] */;
val* var25 /* : Array[RuntimeVariable] */;
val* var26 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var27 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var28 /* : MClassType */;
val* var29 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
val* var_cltype /* var cltype: String */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
val* var_idtype /* var idtype: String */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
short int var62 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
val* var_accept_null /* var accept_null: String */;
val* var_ntype /* var ntype: MType */;
short int var67 /* : Bool */;
int cltype;
int idtype;
val* var68 /* : MType */;
val* var70 /* : MType */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
val* var75 /* : MType */;
val* var77 /* : MType */;
val* var78 /* : nullable StaticFrame */;
val* var80 /* : nullable StaticFrame */;
val* var81 /* : MPropDef */;
val* var83 /* : MPropDef */;
val* var84 /* : MClassDef */;
val* var86 /* : MClassDef */;
val* var87 /* : MModule */;
val* var89 /* : MModule */;
val* var90 /* : nullable StaticFrame */;
val* var92 /* : nullable StaticFrame */;
val* var93 /* : MPropDef */;
val* var95 /* : MPropDef */;
val* var96 /* : MClassDef */;
val* var98 /* : MClassDef */;
val* var99 /* : MClassType */;
val* var101 /* : MClassType */;
short int var102 /* : Bool */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
val* var116 /* : FlatString */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : ModelBuilder */;
val* var123 /* : ModelBuilder */;
val* var124 /* : ToolContext */;
val* var126 /* : ToolContext */;
val* var127 /* : OptionBool */;
val* var129 /* : OptionBool */;
val* var130 /* : nullable Object */;
val* var132 /* : nullable Object */;
short int var133 /* : Bool */;
val* var134 /* : AbstractCompiler */;
val* var136 /* : AbstractCompiler */;
val* var137 /* : HashMap[String, Int] */;
val* var139 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_140 /* var : String */;
val* var141 /* : nullable Object */;
long var142 /* : Int */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
const char* var_class_name;
long var147 /* : Int */;
long var148 /* : Int */;
val* var149 /* : nullable Object */;
val* var151 /* : NativeArray[String] */;
static val* varonce150;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
val* var155 /* : FlatString */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
val* var159 /* : FlatString */;
val* var160 /* : String */;
short int var161 /* : Bool */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
val* var165 /* : FlatString */;
val* var166 /* : String */;
val* var_type_struct /* var type_struct: String */;
val* var168 /* : NativeArray[String] */;
static val* varonce167;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
val* var172 /* : FlatString */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
val* var176 /* : FlatString */;
val* var177 /* : String */;
val* var178 /* : nullable StaticFrame */;
val* var180 /* : nullable StaticFrame */;
val* var181 /* : MPropDef */;
val* var183 /* : MPropDef */;
val* var184 /* : MClassDef */;
val* var186 /* : MClassDef */;
val* var187 /* : String */;
val* var189 /* : NativeArray[String] */;
static val* varonce188;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
val* var193 /* : FlatString */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
val* var197 /* : FlatString */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : FlatString */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var204 /* : ModelBuilder */;
val* var206 /* : ModelBuilder */;
val* var207 /* : ToolContext */;
val* var209 /* : ToolContext */;
val* var210 /* : OptionBool */;
val* var212 /* : OptionBool */;
val* var213 /* : nullable Object */;
val* var215 /* : nullable Object */;
short int var216 /* : Bool */;
val* var217 /* : AbstractCompiler */;
val* var219 /* : AbstractCompiler */;
val* var220 /* : HashMap[String, Int] */;
val* var222 /* : HashMap[String, Int] */;
val* var_223 /* var : HashMap[String, Int] */;
val* var_224 /* var : String */;
val* var225 /* : nullable Object */;
long var226 /* : Int */;
short int var228 /* : Bool */;
int cltype229;
int idtype230;
const char* var_class_name231;
long var232 /* : Int */;
long var233 /* : Int */;
val* var234 /* : nullable Object */;
val* var236 /* : NativeArray[String] */;
static val* varonce235;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
val* var240 /* : FlatString */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
val* var244 /* : FlatString */;
val* var245 /* : String */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : FlatString */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
val* var255 /* : FlatString */;
val* var256 /* : String */;
val* var258 /* : NativeArray[String] */;
static val* varonce257;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
val* var262 /* : FlatString */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
val* var266 /* : FlatString */;
val* var267 /* : String */;
short int var268 /* : Bool */;
short int var_269 /* var : Bool */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
val* var273 /* : FlatString */;
short int var274 /* : Bool */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
val* var278 /* : FlatString */;
val* var279 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
val* var281 /* : NativeArray[String] */;
static val* varonce280;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
val* var285 /* : FlatString */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
val* var289 /* : FlatString */;
val* var290 /* : String */;
val* var292 /* : NativeArray[String] */;
static val* varonce291;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
val* var296 /* : FlatString */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
val* var300 /* : FlatString */;
val* var301 /* : String */;
val* var302 /* : String */;
short int var303 /* : Bool */;
int cltype304;
int idtype305;
val* var306 /* : Set[MType] */;
val* var308 /* : Set[MType] */;
val* var310 /* : NativeArray[String] */;
static val* varonce309;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
val* var314 /* : FlatString */;
val* var315 /* : String */;
val* var316 /* : String */;
val* var318 /* : NativeArray[String] */;
static val* varonce317;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
val* var322 /* : FlatString */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
val* var326 /* : FlatString */;
val* var327 /* : String */;
val* var328 /* : String */;
val* var330 /* : NativeArray[String] */;
static val* varonce329;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
val* var334 /* : FlatString */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
val* var338 /* : FlatString */;
val* var339 /* : String */;
val* var340 /* : String */;
val* var342 /* : NativeArray[String] */;
static val* varonce341;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
val* var346 /* : FlatString */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
val* var350 /* : FlatString */;
val* var351 /* : String */;
val* var352 /* : String */;
val* var353 /* : ModelBuilder */;
val* var355 /* : ModelBuilder */;
val* var356 /* : ToolContext */;
val* var358 /* : ToolContext */;
val* var359 /* : OptionBool */;
val* var361 /* : OptionBool */;
val* var362 /* : nullable Object */;
val* var364 /* : nullable Object */;
short int var365 /* : Bool */;
val* var366 /* : AbstractCompiler */;
val* var368 /* : AbstractCompiler */;
val* var369 /* : HashMap[String, Int] */;
val* var371 /* : HashMap[String, Int] */;
val* var_372 /* var : HashMap[String, Int] */;
val* var_373 /* var : String */;
val* var374 /* : nullable Object */;
long var375 /* : Int */;
short int var377 /* : Bool */;
int cltype378;
int idtype379;
const char* var_class_name380;
long var381 /* : Int */;
long var382 /* : Int */;
val* var383 /* : nullable Object */;
val* var385 /* : NativeArray[String] */;
static val* varonce384;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
val* var389 /* : FlatString */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
val* var393 /* : FlatString */;
val* var394 /* : String */;
val* var396 /* : NativeArray[String] */;
static val* varonce395;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
val* var400 /* : FlatString */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
val* var404 /* : FlatString */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : NativeString */;
val* var408 /* : FlatString */;
val* var409 /* : String */;
val* var410 /* : String */;
val* var411 /* : String */;
val* var413 /* : NativeArray[String] */;
static val* varonce412;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : NativeString */;
val* var417 /* : FlatString */;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : NativeString */;
val* var421 /* : FlatString */;
val* var422 /* : String */;
val* var423 /* : String */;
val* var425 /* : NativeArray[String] */;
static val* varonce424;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : NativeString */;
val* var429 /* : FlatString */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : NativeString */;
val* var433 /* : FlatString */;
val* var434 /* : String */;
val* var435 /* : String */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
val* var439 /* : FlatString */;
val* var440 /* : String */;
val* var_value_type_info /* var value_type_info: String */;
val* var442 /* : NativeArray[String] */;
static val* varonce441;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
val* var446 /* : FlatString */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
val* var450 /* : FlatString */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : NativeString */;
val* var454 /* : FlatString */;
val* var455 /* : String */;
val* var457 /* : NativeArray[String] */;
static val* varonce456;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : NativeString */;
val* var461 /* : FlatString */;
val* var462 /* : String */;
val* var463 /* : String */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : NativeString */;
val* var467 /* : FlatString */;
val* var469 /* : NativeArray[String] */;
static val* varonce468;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : NativeString */;
val* var473 /* : FlatString */;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
val* var477 /* : FlatString */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
val* var481 /* : FlatString */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : NativeString */;
val* var485 /* : FlatString */;
val* var486 /* : String */;
val* var487 /* : String */;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : NativeString */;
val* var491 /* : FlatString */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
val* var495 /* : FlatString */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/* ";
var5 = standard___standard__NativeString___to_s_with_length(var4, 3l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " isa ";
var9 = standard___standard__NativeString___to_s_with_length(var8, 5l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " */";
var13 = standard___standard__NativeString___to_s_with_length(var12, 3l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
((struct instance_standard__NativeArray*)var1)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var1)->values[3]=var15;
{
var16 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nit___nit__AbstractCompilerVisitor___add(self, var16); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var19 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_compiler = var17;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var22 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1758);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var20) on <var20:nullable StaticFrame> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var20:nullable StaticFrame> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = standard___standard__SequenceRead___Collection__first(var23);
}
var_recv = var26;
{
var27 = nit___nit__SeparateCompilerVisitor___type_info(self, var_recv);
}
var_recv_type_info = var27;
{
var28 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var29 = nit___nit__AbstractCompilerVisitor___new_var(self, var28);
}
var_res = var29;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "cltype";
var33 = standard___standard__NativeString___to_s_with_length(var32, 6l);
var31 = var33;
varonce30 = var31;
}
{
var34 = nit___nit__AbstractCompilerVisitor___get_name(self, var31);
}
var_cltype = var34;
if (unlikely(varonce35==NULL)) {
var36 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "int ";
var40 = standard___standard__NativeString___to_s_with_length(var39, 4l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ";";
var44 = standard___standard__NativeString___to_s_with_length(var43, 1l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var36)->values[2]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_standard__NativeArray*)var36)->values[1]=var_cltype;
{
var45 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "idtype";
var49 = standard___standard__NativeString___to_s_with_length(var48, 6l);
var47 = var49;
varonce46 = var47;
}
{
var50 = nit___nit__AbstractCompilerVisitor___get_name(self, var47);
}
var_idtype = var50;
if (unlikely(varonce51==NULL)) {
var52 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "int ";
var56 = standard___standard__NativeString___to_s_with_length(var55, 4l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var52)->values[0]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = ";";
var60 = standard___standard__NativeString___to_s_with_length(var59, 1l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var52)->values[2]=var58;
} else {
var52 = varonce51;
varonce51 = NULL;
}
((struct instance_standard__NativeArray*)var52)->values[1]=var_idtype;
{
var61 = ((val*(*)(val* self))(var52->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
var62 = nit___nit__SeparateCompilerVisitor___maybe_null(self, var_value);
}
var_maybe_null = var62;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "0";
var66 = standard___standard__NativeString___to_s_with_length(var65, 1l);
var64 = var66;
varonce63 = var64;
}
var_accept_null = var64;
var_ntype = var_mtype;
/* <var_ntype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_ntype->type->table_size) {
var67 = 0;
} else {
var67 = var_ntype->type->type_table[cltype] == idtype;
}
if (var67){
{
{ /* Inline model#MProxyType#mtype (var_ntype) on <var_ntype:MType(MNullableType)> */
var70 = var_ntype->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_ntype:MType(MNullableType)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_ntype = var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "1";
var74 = standard___standard__NativeString___to_s_with_length(var73, 1l);
var72 = var74;
varonce71 = var72;
}
var_accept_null = var72;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var77 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var80 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1776);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var78) on <var78:nullable StaticFrame> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var83 = var78->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var78:nullable StaticFrame> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var81) on <var81:MPropDef> */
var86 = var81->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var81:MPropDef> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var84) on <var84:MClassDef> */
var89 = var84->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var84:MClassDef> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var92 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (var90 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1776);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var90) on <var90:nullable StaticFrame> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var95 = var90->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var90:nullable StaticFrame> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var93) on <var93:MPropDef> */
var98 = var93->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var93:MPropDef> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var96) on <var96:MClassDef> */
var101 = var96->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var96:MClassDef> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
var102 = nit___nit__MType___is_subtype(var75, var87, var99, var_mtype);
}
if (var102){
if (unlikely(varonce103==NULL)) {
var104 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = " = 1; /* easy ";
var108 = standard___standard__NativeString___to_s_with_length(var107, 14l);
var106 = var108;
varonce105 = var106;
}
((struct instance_standard__NativeArray*)var104)->values[1]=var106;
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = " isa ";
var112 = standard___standard__NativeString___to_s_with_length(var111, 5l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var104)->values[3]=var110;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "*/";
var116 = standard___standard__NativeString___to_s_with_length(var115, 2l);
var114 = var116;
varonce113 = var114;
}
((struct instance_standard__NativeArray*)var104)->values[5]=var114;
} else {
var104 = varonce103;
varonce103 = NULL;
}
{
var117 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var104)->values[0]=var117;
{
var118 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
((struct instance_standard__NativeArray*)var104)->values[2]=var118;
{
var119 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var104)->values[4]=var119;
{
var120 = ((val*(*)(val* self))(var104->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
{
nit___nit__AbstractCompilerVisitor___add(self, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var123 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var121) on <var121:ModelBuilder> */
var126 = var121->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var121:ModelBuilder> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var124) on <var124:ToolContext> */
var129 = var124->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var124:ToolContext> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline opts#Option#value (var127) on <var127:OptionBool> */
var132 = var127->attrs[COLOR_opts__Option___value].val; /* _value on <var127:OptionBool> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
var133 = (short int)((long)(var130)>>2);
if (var133){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var136 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (var134) on <var134:AbstractCompiler(SeparateCompiler)> */
var139 = var134->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <var134:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1017);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
var_ = var137;
var_140 = var_tag;
{
var141 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_, var_140);
}
{
{ /* Inline kernel#Int#+ (var141,1l) on <var141:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var144 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var144)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var147 = (long)(var141)>>2;
var148 = var147 + 1l;
var142 = var148;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
{
var149 = (val*)(var142<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_, var_140, var149); /* Direct call hash_collection#HashMap#[]= on <var_:HashMap[String, Int]>*/
}
if (unlikely(varonce150==NULL)) {
var151 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "count_type_test_skipped_";
var155 = standard___standard__NativeString___to_s_with_length(var154, 24l);
var153 = var155;
varonce152 = var153;
}
((struct instance_standard__NativeArray*)var151)->values[0]=var153;
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "++;";
var159 = standard___standard__NativeString___to_s_with_length(var158, 3l);
var157 = var159;
varonce156 = var157;
}
((struct instance_standard__NativeArray*)var151)->values[2]=var157;
} else {
var151 = varonce150;
varonce150 = NULL;
}
((struct instance_standard__NativeArray*)var151)->values[1]=var_tag;
{
var160 = ((val*(*)(val* self))(var151->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var151); /* native_to_s on <var151:NativeArray[String]>*/
}
varonce150 = var151;
{
nit___nit__AbstractCompilerVisitor___add(self, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var161 = ((short int(*)(val* self))(var_ntype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_ntype); /* need_anchor on <var_ntype:MType>*/
}
if (var161){
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "type_struct";
var165 = standard___standard__NativeString___to_s_with_length(var164, 11l);
var163 = var165;
varonce162 = var163;
}
{
var166 = nit___nit__AbstractCompilerVisitor___get_name(self, var163);
}
var_type_struct = var166;
if (unlikely(varonce167==NULL)) {
var168 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "const struct type* ";
var172 = standard___standard__NativeString___to_s_with_length(var171, 19l);
var170 = var172;
varonce169 = var170;
}
((struct instance_standard__NativeArray*)var168)->values[0]=var170;
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = ";";
var176 = standard___standard__NativeString___to_s_with_length(var175, 1l);
var174 = var176;
varonce173 = var174;
}
((struct instance_standard__NativeArray*)var168)->values[2]=var174;
} else {
var168 = varonce167;
varonce167 = NULL;
}
((struct instance_standard__NativeArray*)var168)->values[1]=var_type_struct;
{
var177 = ((val*(*)(val* self))(var168->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var168); /* native_to_s on <var168:NativeArray[String]>*/
}
varonce167 = var168;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var177); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
nit___nit__SeparateCompilerVisitor___hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var180 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
if (var178 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1791);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#mpropdef (var178) on <var178:nullable StaticFrame> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var183 = var178->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <var178:nullable StaticFrame> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var181) on <var181:MPropDef> */
var186 = var181->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var181:MPropDef> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
nit___nit__SeparateCompilerVisitor___link_unresolved_type(self, var184, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
var187 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var187); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce188==NULL)) {
var189 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = " = ";
var193 = standard___standard__NativeString___to_s_with_length(var192, 3l);
var191 = var193;
varonce190 = var191;
}
((struct instance_standard__NativeArray*)var189)->values[1]=var191;
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "->resolution_table->types[";
var197 = standard___standard__NativeString___to_s_with_length(var196, 26l);
var195 = var197;
varonce194 = var195;
}
((struct instance_standard__NativeArray*)var189)->values[3]=var195;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "];";
var201 = standard___standard__NativeString___to_s_with_length(var200, 2l);
var199 = var201;
varonce198 = var199;
}
((struct instance_standard__NativeArray*)var189)->values[5]=var199;
} else {
var189 = varonce188;
varonce188 = NULL;
}
((struct instance_standard__NativeArray*)var189)->values[0]=var_type_struct;
((struct instance_standard__NativeArray*)var189)->values[2]=var_recv_type_info;
{
var202 = nit__separate_compiler___MEntity___const_color(var_mtype);
}
((struct instance_standard__NativeArray*)var189)->values[4]=var202;
{
var203 = ((val*(*)(val* self))(var189->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var189); /* native_to_s on <var189:NativeArray[String]>*/
}
varonce188 = var189;
{
nit___nit__AbstractCompilerVisitor___add(self, var203); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var206 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var204) on <var204:ModelBuilder> */
var209 = var204->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var204:ModelBuilder> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var207) on <var207:ToolContext> */
var212 = var207->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var207:ToolContext> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline opts#Option#value (var210) on <var210:OptionBool> */
var215 = var210->attrs[COLOR_opts__Option___value].val; /* _value on <var210:OptionBool> */
var213 = var215;
RET_LABEL214:(void)0;
}
}
var216 = (short int)((long)(var213)>>2);
if (var216){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var219 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var219 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (var217) on <var217:AbstractCompiler(SeparateCompiler)> */
var222 = var217->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <var217:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1016);
fatal_exit(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
var_223 = var220;
var_224 = var_tag;
{
var225 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_223, var_224);
}
{
{ /* Inline kernel#Int#+ (var225,1l) on <var225:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var228 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var228)) {
var_class_name231 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name231);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var232 = (long)(var225)>>2;
var233 = var232 + 1l;
var226 = var233;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
{
var234 = (val*)(var226<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_223, var_224, var234); /* Direct call hash_collection#HashMap#[]= on <var_223:HashMap[String, Int]>*/
}
if (unlikely(varonce235==NULL)) {
var236 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "count_type_test_unresolved_";
var240 = standard___standard__NativeString___to_s_with_length(var239, 27l);
var238 = var240;
varonce237 = var238;
}
((struct instance_standard__NativeArray*)var236)->values[0]=var238;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "++;";
var244 = standard___standard__NativeString___to_s_with_length(var243, 3l);
var242 = var244;
varonce241 = var242;
}
((struct instance_standard__NativeArray*)var236)->values[2]=var242;
} else {
var236 = varonce235;
varonce235 = NULL;
}
((struct instance_standard__NativeArray*)var236)->values[1]=var_tag;
{
var245 = ((val*(*)(val* self))(var236->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var236); /* native_to_s on <var236:NativeArray[String]>*/
}
varonce235 = var236;
{
nit___nit__AbstractCompilerVisitor___add(self, var245); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
nit___nit__SeparateCompilerVisitor___hardening_cast_type(self, var_type_struct); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce246==NULL)) {
var247 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = " = ";
var251 = standard___standard__NativeString___to_s_with_length(var250, 3l);
var249 = var251;
varonce248 = var249;
}
((struct instance_standard__NativeArray*)var247)->values[1]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "->color;";
var255 = standard___standard__NativeString___to_s_with_length(var254, 8l);
var253 = var255;
varonce252 = var253;
}
((struct instance_standard__NativeArray*)var247)->values[3]=var253;
} else {
var247 = varonce246;
varonce246 = NULL;
}
((struct instance_standard__NativeArray*)var247)->values[0]=var_cltype;
((struct instance_standard__NativeArray*)var247)->values[2]=var_type_struct;
{
var256 = ((val*(*)(val* self))(var247->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
nit___nit__AbstractCompilerVisitor___add(self, var256); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce257==NULL)) {
var258 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = " = ";
var262 = standard___standard__NativeString___to_s_with_length(var261, 3l);
var260 = var262;
varonce259 = var260;
}
((struct instance_standard__NativeArray*)var258)->values[1]=var260;
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = "->id;";
var266 = standard___standard__NativeString___to_s_with_length(var265, 5l);
var264 = var266;
varonce263 = var264;
}
((struct instance_standard__NativeArray*)var258)->values[3]=var264;
} else {
var258 = varonce257;
varonce257 = NULL;
}
((struct instance_standard__NativeArray*)var258)->values[0]=var_idtype;
((struct instance_standard__NativeArray*)var258)->values[2]=var_type_struct;
{
var267 = ((val*(*)(val* self))(var258->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var258); /* native_to_s on <var258:NativeArray[String]>*/
}
varonce257 = var258;
{
nit___nit__AbstractCompilerVisitor___add(self, var267); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var_269 = var_maybe_null;
if (var_maybe_null){
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = "0";
var273 = standard___standard__NativeString___to_s_with_length(var272, 1l);
var271 = var273;
varonce270 = var271;
}
{
var274 = ((short int(*)(val* self, val* p0))(var_accept_null->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_accept_null, var271); /* == on <var_accept_null:String>*/
}
var268 = var274;
} else {
var268 = var_269;
}
if (var268){
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = "is_nullable";
var278 = standard___standard__NativeString___to_s_with_length(var277, 11l);
var276 = var278;
varonce275 = var276;
}
{
var279 = nit___nit__AbstractCompilerVisitor___get_name(self, var276);
}
var_is_nullable = var279;
if (unlikely(varonce280==NULL)) {
var281 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "short int ";
var285 = standard___standard__NativeString___to_s_with_length(var284, 10l);
var283 = var285;
varonce282 = var283;
}
((struct instance_standard__NativeArray*)var281)->values[0]=var283;
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = ";";
var289 = standard___standard__NativeString___to_s_with_length(var288, 1l);
var287 = var289;
varonce286 = var287;
}
((struct instance_standard__NativeArray*)var281)->values[2]=var287;
} else {
var281 = varonce280;
varonce280 = NULL;
}
((struct instance_standard__NativeArray*)var281)->values[1]=var_is_nullable;
{
var290 = ((val*(*)(val* self))(var281->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var281); /* native_to_s on <var281:NativeArray[String]>*/
}
varonce280 = var281;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var290); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce291==NULL)) {
var292 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = " = ";
var296 = standard___standard__NativeString___to_s_with_length(var295, 3l);
var294 = var296;
varonce293 = var294;
}
((struct instance_standard__NativeArray*)var292)->values[1]=var294;
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "->is_nullable;";
var300 = standard___standard__NativeString___to_s_with_length(var299, 14l);
var298 = var300;
varonce297 = var298;
}
((struct instance_standard__NativeArray*)var292)->values[3]=var298;
} else {
var292 = varonce291;
varonce291 = NULL;
}
((struct instance_standard__NativeArray*)var292)->values[0]=var_is_nullable;
((struct instance_standard__NativeArray*)var292)->values[2]=var_type_struct;
{
var301 = ((val*(*)(val* self))(var292->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var292); /* native_to_s on <var292:NativeArray[String]>*/
}
varonce291 = var292;
{
nit___nit__AbstractCompilerVisitor___add(self, var301); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var302 = standard___standard__String___Object__to_s(var_is_nullable);
}
var_accept_null = var302;
} else {
}
} else {
/* <var_ntype:MType> isa MClassType */
cltype304 = type_nit__MClassType.color;
idtype305 = type_nit__MClassType.id;
if(cltype304 >= var_ntype->type->table_size) {
var303 = 0;
} else {
var303 = var_ntype->type->type_table[cltype304] == idtype305;
}
if (var303){
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var308 = var_compiler->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 146);
fatal_exit(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var306&3)?class_info[((long)var306&3)]:var306->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var306, var_mtype); /* add on <var306:Set[MType]>*/
}
if (unlikely(varonce309==NULL)) {
var310 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce311!=NULL)) {
var312 = varonce311;
} else {
var313 = "type_";
var314 = standard___standard__NativeString___to_s_with_length(var313, 5l);
var312 = var314;
varonce311 = var312;
}
((struct instance_standard__NativeArray*)var310)->values[0]=var312;
} else {
var310 = varonce309;
varonce309 = NULL;
}
{
var315 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var310)->values[1]=var315;
{
var316 = ((val*(*)(val* self))(var310->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var310); /* native_to_s on <var310:NativeArray[String]>*/
}
varonce309 = var310;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var316); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce317==NULL)) {
var318 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "(&type_";
var322 = standard___standard__NativeString___to_s_with_length(var321, 7l);
var320 = var322;
varonce319 = var320;
}
((struct instance_standard__NativeArray*)var318)->values[0]=var320;
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = ")";
var326 = standard___standard__NativeString___to_s_with_length(var325, 1l);
var324 = var326;
varonce323 = var324;
}
((struct instance_standard__NativeArray*)var318)->values[2]=var324;
} else {
var318 = varonce317;
varonce317 = NULL;
}
{
var327 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var318)->values[1]=var327;
{
var328 = ((val*(*)(val* self))(var318->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var318); /* native_to_s on <var318:NativeArray[String]>*/
}
varonce317 = var318;
{
nit___nit__SeparateCompilerVisitor___hardening_cast_type(self, var328); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_cast_type on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce329==NULL)) {
var330 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = " = type_";
var334 = standard___standard__NativeString___to_s_with_length(var333, 8l);
var332 = var334;
varonce331 = var332;
}
((struct instance_standard__NativeArray*)var330)->values[1]=var332;
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = ".color;";
var338 = standard___standard__NativeString___to_s_with_length(var337, 7l);
var336 = var338;
varonce335 = var336;
}
((struct instance_standard__NativeArray*)var330)->values[3]=var336;
} else {
var330 = varonce329;
varonce329 = NULL;
}
((struct instance_standard__NativeArray*)var330)->values[0]=var_cltype;
{
var339 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var330)->values[2]=var339;
{
var340 = ((val*(*)(val* self))(var330->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var330); /* native_to_s on <var330:NativeArray[String]>*/
}
varonce329 = var330;
{
nit___nit__AbstractCompilerVisitor___add(self, var340); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce341==NULL)) {
var342 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = " = type_";
var346 = standard___standard__NativeString___to_s_with_length(var345, 8l);
var344 = var346;
varonce343 = var344;
}
((struct instance_standard__NativeArray*)var342)->values[1]=var344;
if (likely(varonce347!=NULL)) {
var348 = varonce347;
} else {
var349 = ".id;";
var350 = standard___standard__NativeString___to_s_with_length(var349, 4l);
var348 = var350;
varonce347 = var348;
}
((struct instance_standard__NativeArray*)var342)->values[3]=var348;
} else {
var342 = varonce341;
varonce341 = NULL;
}
((struct instance_standard__NativeArray*)var342)->values[0]=var_idtype;
{
var351 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var342)->values[2]=var351;
{
var352 = ((val*(*)(val* self))(var342->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var342); /* native_to_s on <var342:NativeArray[String]>*/
}
varonce341 = var342;
{
nit___nit__AbstractCompilerVisitor___add(self, var352); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var_compiler) on <var_compiler:SeparateCompiler> */
var355 = var_compiler->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var_compiler:SeparateCompiler> */
if (unlikely(var355 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var353 = var355;
RET_LABEL354:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var353) on <var353:ModelBuilder> */
var358 = var353->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var353:ModelBuilder> */
if (unlikely(var358 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var356 = var358;
RET_LABEL357:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var356) on <var356:ToolContext> */
var361 = var356->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var356:ToolContext> */
if (unlikely(var361 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 60);
fatal_exit(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
{
{ /* Inline opts#Option#value (var359) on <var359:OptionBool> */
var364 = var359->attrs[COLOR_opts__Option___value].val; /* _value on <var359:OptionBool> */
var362 = var364;
RET_LABEL363:(void)0;
}
}
var365 = (short int)((long)(var362)>>2);
if (var365){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var368 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var368 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var366 = var368;
RET_LABEL367:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (var366) on <var366:AbstractCompiler(SeparateCompiler)> */
var371 = var366->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <var366:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var371 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1015);
fatal_exit(1);
}
var369 = var371;
RET_LABEL370:(void)0;
}
}
var_372 = var369;
var_373 = var_tag;
{
var374 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var_372, var_373);
}
{
{ /* Inline kernel#Int#+ (var374,1l) on <var374:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var377 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var377)) {
var_class_name380 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name380);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var381 = (long)(var374)>>2;
var382 = var381 + 1l;
var375 = var382;
goto RET_LABEL376;
RET_LABEL376:(void)0;
}
}
{
var383 = (val*)(var375<<2|1);
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_372, var_373, var383); /* Direct call hash_collection#HashMap#[]= on <var_372:HashMap[String, Int]>*/
}
if (unlikely(varonce384==NULL)) {
var385 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce386!=NULL)) {
var387 = varonce386;
} else {
var388 = "count_type_test_resolved_";
var389 = standard___standard__NativeString___to_s_with_length(var388, 25l);
var387 = var389;
varonce386 = var387;
}
((struct instance_standard__NativeArray*)var385)->values[0]=var387;
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = "++;";
var393 = standard___standard__NativeString___to_s_with_length(var392, 3l);
var391 = var393;
varonce390 = var391;
}
((struct instance_standard__NativeArray*)var385)->values[2]=var391;
} else {
var385 = varonce384;
varonce384 = NULL;
}
((struct instance_standard__NativeArray*)var385)->values[1]=var_tag;
{
var394 = ((val*(*)(val* self))(var385->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var385); /* native_to_s on <var385:NativeArray[String]>*/
}
varonce384 = var385;
{
nit___nit__AbstractCompilerVisitor___add(self, var394); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
} else {
if (unlikely(varonce395==NULL)) {
var396 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "PRINT_ERROR(\"NOT YET IMPLEMENTED: type_test(%s, ";
var400 = standard___standard__NativeString___to_s_with_length(var399, 48l);
var398 = var400;
varonce397 = var398;
}
((struct instance_standard__NativeArray*)var396)->values[0]=var398;
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = ").\\n\", \"";
var404 = standard___standard__NativeString___to_s_with_length(var403, 8l);
var402 = var404;
varonce401 = var402;
}
((struct instance_standard__NativeArray*)var396)->values[2]=var402;
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "\"); fatal_exit(1);";
var408 = standard___standard__NativeString___to_s_with_length(var407, 18l);
var406 = var408;
varonce405 = var406;
}
((struct instance_standard__NativeArray*)var396)->values[4]=var406;
} else {
var396 = varonce395;
varonce395 = NULL;
}
{
var409 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var396)->values[1]=var409;
{
var410 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var_value);
}
((struct instance_standard__NativeArray*)var396)->values[3]=var410;
{
var411 = ((val*(*)(val* self))(var396->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var396); /* native_to_s on <var396:NativeArray[String]>*/
}
varonce395 = var396;
{
nit___nit__AbstractCompilerVisitor___add(self, var411); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
if (var_maybe_null){
if (unlikely(varonce412==NULL)) {
var413 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce414!=NULL)) {
var415 = varonce414;
} else {
var416 = "if(";
var417 = standard___standard__NativeString___to_s_with_length(var416, 3l);
var415 = var417;
varonce414 = var415;
}
((struct instance_standard__NativeArray*)var413)->values[0]=var415;
if (likely(varonce418!=NULL)) {
var419 = varonce418;
} else {
var420 = " == NULL) {";
var421 = standard___standard__NativeString___to_s_with_length(var420, 11l);
var419 = var421;
varonce418 = var419;
}
((struct instance_standard__NativeArray*)var413)->values[2]=var419;
} else {
var413 = varonce412;
varonce412 = NULL;
}
{
var422 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var413)->values[1]=var422;
{
var423 = ((val*(*)(val* self))(var413->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var413); /* native_to_s on <var413:NativeArray[String]>*/
}
varonce412 = var413;
{
nit___nit__AbstractCompilerVisitor___add(self, var423); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce424==NULL)) {
var425 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce426!=NULL)) {
var427 = varonce426;
} else {
var428 = " = ";
var429 = standard___standard__NativeString___to_s_with_length(var428, 3l);
var427 = var429;
varonce426 = var427;
}
((struct instance_standard__NativeArray*)var425)->values[1]=var427;
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = ";";
var433 = standard___standard__NativeString___to_s_with_length(var432, 1l);
var431 = var433;
varonce430 = var431;
}
((struct instance_standard__NativeArray*)var425)->values[3]=var431;
} else {
var425 = varonce424;
varonce424 = NULL;
}
{
var434 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var425)->values[0]=var434;
((struct instance_standard__NativeArray*)var425)->values[2]=var_accept_null;
{
var435 = ((val*(*)(val* self))(var425->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var425); /* native_to_s on <var425:NativeArray[String]>*/
}
varonce424 = var425;
{
nit___nit__AbstractCompilerVisitor___add(self, var435); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce436!=NULL)) {
var437 = varonce436;
} else {
var438 = "} else {";
var439 = standard___standard__NativeString___to_s_with_length(var438, 8l);
var437 = var439;
varonce436 = var437;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var437); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
{
var440 = nit___nit__SeparateCompilerVisitor___type_info(self, var_value);
}
var_value_type_info = var440;
if (unlikely(varonce441==NULL)) {
var442 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "if(";
var446 = standard___standard__NativeString___to_s_with_length(var445, 3l);
var444 = var446;
varonce443 = var444;
}
((struct instance_standard__NativeArray*)var442)->values[0]=var444;
if (likely(varonce447!=NULL)) {
var448 = varonce447;
} else {
var449 = " >= ";
var450 = standard___standard__NativeString___to_s_with_length(var449, 4l);
var448 = var450;
varonce447 = var448;
}
((struct instance_standard__NativeArray*)var442)->values[2]=var448;
if (likely(varonce451!=NULL)) {
var452 = varonce451;
} else {
var453 = "->table_size) {";
var454 = standard___standard__NativeString___to_s_with_length(var453, 15l);
var452 = var454;
varonce451 = var452;
}
((struct instance_standard__NativeArray*)var442)->values[4]=var452;
} else {
var442 = varonce441;
varonce441 = NULL;
}
((struct instance_standard__NativeArray*)var442)->values[1]=var_cltype;
((struct instance_standard__NativeArray*)var442)->values[3]=var_value_type_info;
{
var455 = ((val*(*)(val* self))(var442->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var442); /* native_to_s on <var442:NativeArray[String]>*/
}
varonce441 = var442;
{
nit___nit__AbstractCompilerVisitor___add(self, var455); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce456==NULL)) {
var457 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce458!=NULL)) {
var459 = varonce458;
} else {
var460 = " = 0;";
var461 = standard___standard__NativeString___to_s_with_length(var460, 5l);
var459 = var461;
varonce458 = var459;
}
((struct instance_standard__NativeArray*)var457)->values[1]=var459;
} else {
var457 = varonce456;
varonce456 = NULL;
}
{
var462 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var457)->values[0]=var462;
{
var463 = ((val*(*)(val* self))(var457->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var457); /* native_to_s on <var457:NativeArray[String]>*/
}
varonce456 = var457;
{
nit___nit__AbstractCompilerVisitor___add(self, var463); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce464!=NULL)) {
var465 = varonce464;
} else {
var466 = "} else {";
var467 = standard___standard__NativeString___to_s_with_length(var466, 8l);
var465 = var467;
varonce464 = var465;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var465); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce468==NULL)) {
var469 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce470!=NULL)) {
var471 = varonce470;
} else {
var472 = " = ";
var473 = standard___standard__NativeString___to_s_with_length(var472, 3l);
var471 = var473;
varonce470 = var471;
}
((struct instance_standard__NativeArray*)var469)->values[1]=var471;
if (likely(varonce474!=NULL)) {
var475 = varonce474;
} else {
var476 = "->type_table[";
var477 = standard___standard__NativeString___to_s_with_length(var476, 13l);
var475 = var477;
varonce474 = var475;
}
((struct instance_standard__NativeArray*)var469)->values[3]=var475;
if (likely(varonce478!=NULL)) {
var479 = varonce478;
} else {
var480 = "] == ";
var481 = standard___standard__NativeString___to_s_with_length(var480, 5l);
var479 = var481;
varonce478 = var479;
}
((struct instance_standard__NativeArray*)var469)->values[5]=var479;
if (likely(varonce482!=NULL)) {
var483 = varonce482;
} else {
var484 = ";";
var485 = standard___standard__NativeString___to_s_with_length(var484, 1l);
var483 = var485;
varonce482 = var483;
}
((struct instance_standard__NativeArray*)var469)->values[7]=var483;
} else {
var469 = varonce468;
varonce468 = NULL;
}
{
var486 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var469)->values[0]=var486;
((struct instance_standard__NativeArray*)var469)->values[2]=var_value_type_info;
((struct instance_standard__NativeArray*)var469)->values[4]=var_cltype;
((struct instance_standard__NativeArray*)var469)->values[6]=var_idtype;
{
var487 = ((val*(*)(val* self))(var469->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var469); /* native_to_s on <var469:NativeArray[String]>*/
}
varonce468 = var469;
{
nit___nit__AbstractCompilerVisitor___add(self, var487); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce488!=NULL)) {
var489 = varonce488;
} else {
var490 = "}";
var491 = standard___standard__NativeString___to_s_with_length(var490, 1l);
var489 = var491;
varonce488 = var489;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var489); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (var_maybe_null){
if (likely(varonce492!=NULL)) {
var493 = varonce492;
} else {
var494 = "}";
var495 = standard___standard__NativeString___to_s_with_length(var494, 1l);
var493 = var495;
varonce492 = var493;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var493); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#is_same_type_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : MType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var13 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
val* var20 /* : MType */;
val* var22 /* : MType */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : NativeArray[String] */;
static val* varonce;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
val* var41 /* : String */;
val* var42 /* : MType */;
val* var44 /* : MType */;
val* var45 /* : String */;
val* var46 /* : MType */;
val* var48 /* : MType */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : MType */;
val* var53 /* : MType */;
short int var54 /* : Bool */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : String */;
val* var70 /* : MType */;
val* var72 /* : MType */;
val* var73 /* : String */;
val* var74 /* : MType */;
val* var76 /* : MType */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : MType */;
val* var81 /* : MType */;
short int var82 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var92 /* : NativeArray[String] */;
static val* varonce91;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : FlatString */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var115 /* : NativeArray[String] */;
static val* varonce114;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : FlatString */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : FlatString */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : FlatString */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nit___nit__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self))(var4->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var4); /* is_c_primitive on <var4:MType>*/
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var10 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))(var8->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var8); /* is_c_primitive on <var8:MType>*/
}
var12 = !var11;
var3 = var12;
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
var15 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self))(var13->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var13); /* is_c_primitive on <var13:MType>*/
}
if (var16){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var19 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var22 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var17,var20) on <var17:MType> */
var_other = var20;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:MType> */
var27 = var17 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
if (unlikely(varonce==NULL)) {
var28 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " = 1; /* is_same_type_test: compatible types ";
var32 = standard___standard__NativeString___to_s_with_length(var31, 45l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var28)->values[1]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " vs. ";
var36 = standard___standard__NativeString___to_s_with_length(var35, 5l);
var34 = var36;
varonce33 = var34;
}
((struct instance_standard__NativeArray*)var28)->values[3]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " */";
var40 = standard___standard__NativeString___to_s_with_length(var39, 3l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var28)->values[5]=var38;
} else {
var28 = varonce;
varonce = NULL;
}
{
var41 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var28)->values[0]=var41;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var44 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self))(var42->class->vft[COLOR_standard__string__Object__to_s]))(var42); /* to_s on <var42:MType>*/
}
((struct instance_standard__NativeArray*)var28)->values[2]=var45;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var48 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__string__Object__to_s]))(var46); /* to_s on <var46:MType>*/
}
((struct instance_standard__NativeArray*)var28)->values[4]=var49;
{
var50 = ((val*(*)(val* self))(var28->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce = var28;
{
nit___nit__AbstractCompilerVisitor___add(self, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var53 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = ((short int(*)(val* self))(var51->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var51); /* is_c_primitive on <var51:MType>*/
}
if (var54){
if (unlikely(varonce55==NULL)) {
var56 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = " = 0; /* is_same_type_test: incompatible types ";
var60 = standard___standard__NativeString___to_s_with_length(var59, 47l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var56)->values[1]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = " vs. ";
var64 = standard___standard__NativeString___to_s_with_length(var63, 5l);
var62 = var64;
varonce61 = var62;
}
((struct instance_standard__NativeArray*)var56)->values[3]=var62;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "*/";
var68 = standard___standard__NativeString___to_s_with_length(var67, 2l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var56)->values[5]=var66;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
var69 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var56)->values[0]=var69;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var72 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = ((val*(*)(val* self))(var70->class->vft[COLOR_standard__string__Object__to_s]))(var70); /* to_s on <var70:MType>*/
}
((struct instance_standard__NativeArray*)var56)->values[2]=var73;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var76 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__Object__to_s]))(var74); /* to_s on <var74:MType>*/
}
((struct instance_standard__NativeArray*)var56)->values[4]=var77;
{
var78 = ((val*(*)(val* self))(var56->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nit___nit__AbstractCompilerVisitor___add(self, var78); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var81 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var79->type->table_size) {
var82 = 0;
} else {
var82 = var79->type->type_table[cltype] == idtype;
}
if (unlikely(!var82)) {
var_class_name = var79 == NULL ? "null" : var79->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1855);
fatal_exit(1);
}
var_mtype1 = var79;
if (unlikely(varonce83==NULL)) {
var84 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "class_";
var88 = standard___standard__NativeString___to_s_with_length(var87, 6l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var84)->values[0]=var86;
} else {
var84 = varonce83;
varonce83 = NULL;
}
{
var89 = ((val*(*)(val* self))(var_mtype1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype1); /* c_name on <var_mtype1:MClassType>*/
}
((struct instance_standard__NativeArray*)var84)->values[1]=var89;
{
var90 = ((val*(*)(val* self))(var84->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce91==NULL)) {
var92 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = " = (";
var96 = standard___standard__NativeString___to_s_with_length(var95, 4l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var92)->values[1]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " != NULL) && (";
var100 = standard___standard__NativeString___to_s_with_length(var99, 14l);
var98 = var100;
varonce97 = var98;
}
((struct instance_standard__NativeArray*)var92)->values[3]=var98;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "->class == &class_";
var104 = standard___standard__NativeString___to_s_with_length(var103, 18l);
var102 = var104;
varonce101 = var102;
}
((struct instance_standard__NativeArray*)var92)->values[5]=var102;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "); /* is_same_type_test */";
var108 = standard___standard__NativeString___to_s_with_length(var107, 26l);
var106 = var108;
varonce105 = var106;
}
((struct instance_standard__NativeArray*)var92)->values[7]=var106;
} else {
var92 = varonce91;
varonce91 = NULL;
}
{
var109 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var92)->values[0]=var109;
{
var110 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var92)->values[2]=var110;
{
var111 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var92)->values[4]=var111;
{
var112 = ((val*(*)(val* self))(var_mtype1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype1); /* c_name on <var_mtype1:MClassType>*/
}
((struct instance_standard__NativeArray*)var92)->values[6]=var112;
{
var113 = ((val*(*)(val* self))(var92->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
nit___nit__AbstractCompilerVisitor___add(self, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (unlikely(varonce114==NULL)) {
var115 = NEW_standard__NativeArray(14l, &type_standard__NativeArray__standard__String);
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = " = (";
var119 = standard___standard__NativeString___to_s_with_length(var118, 4l);
var117 = var119;
varonce116 = var117;
}
((struct instance_standard__NativeArray*)var115)->values[1]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = " == ";
var123 = standard___standard__NativeString___to_s_with_length(var122, 4l);
var121 = var123;
varonce120 = var121;
}
((struct instance_standard__NativeArray*)var115)->values[3]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = ") || (";
var127 = standard___standard__NativeString___to_s_with_length(var126, 6l);
var125 = var127;
varonce124 = var125;
}
((struct instance_standard__NativeArray*)var115)->values[5]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = " != NULL && ";
var131 = standard___standard__NativeString___to_s_with_length(var130, 12l);
var129 = var131;
varonce128 = var129;
}
((struct instance_standard__NativeArray*)var115)->values[7]=var129;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = " != NULL && ";
var135 = standard___standard__NativeString___to_s_with_length(var134, 12l);
var133 = var135;
varonce132 = var133;
}
((struct instance_standard__NativeArray*)var115)->values[9]=var133;
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = " == ";
var139 = standard___standard__NativeString___to_s_with_length(var138, 4l);
var137 = var139;
varonce136 = var137;
}
((struct instance_standard__NativeArray*)var115)->values[11]=var137;
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "); /* is_same_type_test */";
var143 = standard___standard__NativeString___to_s_with_length(var142, 26l);
var141 = var143;
varonce140 = var141;
}
((struct instance_standard__NativeArray*)var115)->values[13]=var141;
} else {
var115 = varonce114;
varonce114 = NULL;
}
{
var144 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var115)->values[0]=var144;
{
var145 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var115)->values[2]=var145;
{
var146 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var115)->values[4]=var146;
{
var147 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var115)->values[6]=var147;
{
var148 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var115)->values[8]=var148;
{
var149 = nit___nit__SeparateCompilerVisitor___class_info(self, var_value1);
}
((struct instance_standard__NativeArray*)var115)->values[10]=var149;
{
var150 = nit___nit__SeparateCompilerVisitor___class_info(self, var_value2);
}
((struct instance_standard__NativeArray*)var115)->values[12]=var150;
{
var151 = ((val*(*)(val* self))(var115->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var115); /* native_to_s on <var115:NativeArray[String]>*/
}
varonce114 = var115;
{
nit___nit__AbstractCompilerVisitor___add(self, var151); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#class_name_string for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
val* var_res /* var res: String */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var16 /* : MType */;
val* var18 /* : MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var22 /* : NativeArray[String] */;
static val* varonce21;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : MType */;
val* var42 /* : MType */;
short int var43 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var44 /* : MType */;
val* var46 /* : MType */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name;
val* var50 /* : MClass */;
val* var52 /* : MClass */;
val* var53 /* : MClassKind */;
val* var55 /* : MClassKind */;
val* var56 /* : Sys */;
val* var57 /* : MClassKind */;
short int var58 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
val* var64 /* : MType */;
val* var66 /* : MType */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
short int var76 /* : Bool */;
val* var_other78 /* var other: nullable Object */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
val* var91 /* : MType */;
val* var93 /* : MType */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
val* var98 /* : MClass */;
val* var100 /* : MClass */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
val* var109 /* : MType */;
val* var111 /* : MType */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var115 /* : NativeArray[String] */;
static val* varonce114;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
val* var124 /* : MType */;
val* var126 /* : MType */;
val* var127 /* : String */;
val* var128 /* : String */;
var_value = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "var_class_name";
var3 = standard___standard__NativeString___to_s_with_length(var2, 14l);
var1 = var3;
varonce = var1;
}
{
var4 = nit___nit__AbstractCompilerVisitor___get_name(self, var1);
}
var_res = var4;
if (unlikely(varonce5==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "const char* ";
var10 = standard___standard__NativeString___to_s_with_length(var9, 12l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ";";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce5;
varonce5 = NULL;
}
((struct instance_standard__NativeArray*)var6)->values[1]=var_res;
{
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var18 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((short int(*)(val* self))(var16->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var16); /* is_c_primitive on <var16:MType>*/
}
var20 = !var19;
if (var20){
if (unlikely(varonce21==NULL)) {
var22 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " = ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 3l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var22)->values[1]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " == NULL ? \"null\" : ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 20l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var22)->values[3]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "->name;";
var34 = standard___standard__NativeString___to_s_with_length(var33, 7l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var22)->values[5]=var32;
} else {
var22 = varonce21;
varonce21 = NULL;
}
((struct instance_standard__NativeArray*)var22)->values[0]=var_res;
{
var35 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var22)->values[2]=var35;
{
var36 = nit___nit__SeparateCompilerVisitor___type_info(self, var_value);
}
((struct instance_standard__NativeArray*)var22)->values[4]=var36;
{
var37 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
nit___nit__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var42 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
/* <var40:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var40->type->table_size) {
var43 = 0;
} else {
var43 = var40->type->type_table[cltype] == idtype;
}
var_ = var43;
if (var43){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var46 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
/* <var44:MType> isa MClassType */
cltype48 = type_nit__MClassType.color;
idtype49 = type_nit__MClassType.id;
if(cltype48 >= var44->type->table_size) {
var47 = 0;
} else {
var47 = var44->type->type_table[cltype48] == idtype49;
}
if (unlikely(!var47)) {
var_class_name = var44 == NULL ? "null" : var44->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1871);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var44) on <var44:MType(MClassType)> */
var52 = var44->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var44:MType(MClassType)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var50) on <var50:MClass> */
var55 = var50->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var50:MClass> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = glob_sys;
{
var57 = nit__model___standard__Sys___extern_kind(var56);
}
{
{ /* Inline kernel#Object#== (var53,var57) on <var53:MClassKind> */
var_other = var57;
{
{ /* Inline kernel#Object#is_same_instance (var53,var_other) on <var53:MClassKind> */
var62 = var53 == var_other;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var39 = var58;
} else {
var39 = var_;
}
var_63 = var39;
if (var39){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var66 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
/* <var64:MType> isa MClassType */
cltype68 = type_nit__MClassType.color;
idtype69 = type_nit__MClassType.id;
if(cltype68 >= var64->type->table_size) {
var67 = 0;
} else {
var67 = var64->type->type_table[cltype68] == idtype69;
}
if (unlikely(!var67)) {
var_class_name70 = var64 == NULL ? "null" : var64->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1872);
fatal_exit(1);
}
{
var71 = nit___nit__MType___nit__model_base__MEntity__name(var64);
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "NativeString";
var75 = standard___standard__NativeString___to_s_with_length(var74, 12l);
var73 = var75;
varonce72 = var73;
}
{
{ /* Inline kernel#Object#!= (var71,var73) on <var71:String> */
var_other78 = var73;
{
var79 = ((short int(*)(val* self, val* p0))(var71->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var71, var_other78); /* == on <var71:String>*/
}
var80 = !var79;
var76 = var80;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var38 = var76;
} else {
var38 = var_63;
}
if (var38){
if (unlikely(varonce81==NULL)) {
var82 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = " = \"";
var86 = standard___standard__NativeString___to_s_with_length(var85, 4l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var82)->values[1]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "\";";
var90 = standard___standard__NativeString___to_s_with_length(var89, 2l);
var88 = var90;
varonce87 = var88;
}
((struct instance_standard__NativeArray*)var82)->values[3]=var88;
} else {
var82 = varonce81;
varonce81 = NULL;
}
((struct instance_standard__NativeArray*)var82)->values[0]=var_res;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var93 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
/* <var91:MType> isa MClassType */
cltype95 = type_nit__MClassType.color;
idtype96 = type_nit__MClassType.id;
if(cltype95 >= var91->type->table_size) {
var94 = 0;
} else {
var94 = var91->type->type_table[cltype95] == idtype96;
}
if (unlikely(!var94)) {
var_class_name97 = var91 == NULL ? "null" : var91->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1873);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var91) on <var91:MType(MClassType)> */
var100 = var91->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var91:MType(MClassType)> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = ((val*(*)(val* self))(var98->class->vft[COLOR_standard__string__Object__to_s]))(var98); /* to_s on <var98:MClass>*/
}
((struct instance_standard__NativeArray*)var82)->values[2]=var101;
{
var102 = ((val*(*)(val* self))(var82->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
nit___nit__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce103==NULL)) {
var104 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "type_";
var108 = standard___standard__NativeString___to_s_with_length(var107, 5l);
var106 = var108;
varonce105 = var106;
}
((struct instance_standard__NativeArray*)var104)->values[0]=var106;
} else {
var104 = varonce103;
varonce103 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var111 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
var112 = ((val*(*)(val* self))(var109->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var109); /* c_name on <var109:MType>*/
}
((struct instance_standard__NativeArray*)var104)->values[1]=var112;
{
var113 = ((val*(*)(val* self))(var104->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce114==NULL)) {
var115 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = " = type_";
var119 = standard___standard__NativeString___to_s_with_length(var118, 8l);
var117 = var119;
varonce116 = var117;
}
((struct instance_standard__NativeArray*)var115)->values[1]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = ".name;";
var123 = standard___standard__NativeString___to_s_with_length(var122, 6l);
var121 = var123;
varonce120 = var121;
}
((struct instance_standard__NativeArray*)var115)->values[3]=var121;
} else {
var115 = varonce114;
varonce114 = NULL;
}
((struct instance_standard__NativeArray*)var115)->values[0]=var_res;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var126 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
var127 = ((val*(*)(val* self))(var124->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var124); /* c_name on <var124:MType>*/
}
((struct instance_standard__NativeArray*)var115)->values[2]=var127;
{
var128 = ((val*(*)(val* self))(var115->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var115); /* native_to_s on <var115:NativeArray[String]>*/
}
varonce114 = var115;
{
nit___nit__AbstractCompilerVisitor___add(self, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#equal_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : MType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var13 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
val* var20 /* : MType */;
val* var22 /* : MType */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : NativeArray[String] */;
static val* varonce;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : FlatString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : MType */;
val* var47 /* : MType */;
short int var48 /* : Bool */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var63 /* : String */;
val* var64 /* : MType */;
val* var66 /* : MType */;
val* var67 /* : String */;
val* var68 /* : MType */;
val* var70 /* : MType */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : MType */;
val* var75 /* : MType */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : MType */;
val* var101 /* : MType */;
val* var102 /* : RuntimeVariable */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : String */;
val* var106 /* : MType */;
val* var108 /* : MType */;
short int var109 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
val* var111 /* : NativeArray[String] */;
static val* varonce110;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
val* var116 /* : String */;
val* var117 /* : String */;
val* var119 /* : NativeArray[String] */;
static val* varonce118;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : FlatString */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
val* var136 /* : String */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var142 /* : NativeArray[String] */;
static val* varonce141;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
val* var151 /* : String */;
val* var152 /* : String */;
val* var154 /* : NativeArray[String] */;
static val* varonce153;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : FlatString */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : FlatString */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
val* var167 /* : String */;
val* var168 /* : MType */;
val* var170 /* : MType */;
val* var171 /* : RuntimeVariable */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
short int var_maybe_null /* var maybe_null: Bool */;
val* var179 /* : Array[String] */;
val* var_test /* var test: Array[String] */;
val* var180 /* : MType */;
val* var182 /* : MType */;
val* var_t1 /* var t1: MType */;
short int var183 /* : Bool */;
int cltype184;
int idtype185;
val* var187 /* : NativeArray[String] */;
static val* varonce186;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : FlatString */;
val* var192 /* : String */;
val* var193 /* : String */;
val* var194 /* : MType */;
val* var196 /* : MType */;
val* var197 /* : MType */;
val* var199 /* : MType */;
val* var_t2 /* var t2: MType */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
val* var204 /* : NativeArray[String] */;
static val* varonce203;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : FlatString */;
val* var209 /* : String */;
val* var210 /* : String */;
val* var211 /* : MType */;
val* var213 /* : MType */;
short int var_incompatible /* var incompatible: Bool */;
short int var214 /* : Bool */;
val* var_primitive /* var primitive: nullable Object */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
val* var226 /* : NativeArray[String] */;
static val* varonce225;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : NativeString */;
val* var230 /* : FlatString */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
val* var234 /* : FlatString */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
val* var238 /* : FlatString */;
val* var239 /* : String */;
val* var240 /* : String */;
val* var241 /* : String */;
val* var242 /* : String */;
val* var243 /* : AbstractCompiler */;
val* var245 /* : AbstractCompiler */;
val* var246 /* : ModelBuilder */;
val* var248 /* : ModelBuilder */;
val* var249 /* : ToolContext */;
val* var251 /* : ToolContext */;
val* var252 /* : OptionBool */;
val* var254 /* : OptionBool */;
val* var255 /* : nullable Object */;
val* var257 /* : nullable Object */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
val* var261 /* : NativeArray[String] */;
static val* varonce260;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
val* var265 /* : FlatString */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
val* var269 /* : FlatString */;
val* var270 /* : String */;
val* var271 /* : String */;
val* var273 /* : NativeArray[String] */;
static val* varonce272;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : NativeString */;
val* var277 /* : FlatString */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
val* var281 /* : FlatString */;
val* var282 /* : String */;
val* var283 /* : String */;
val* var284 /* : String */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
val* var291 /* : NativeArray[String] */;
static val* varonce290;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
val* var295 /* : FlatString */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
val* var299 /* : FlatString */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
val* var303 /* : FlatString */;
val* var304 /* : String */;
val* var305 /* : String */;
val* var306 /* : String */;
val* var307 /* : String */;
val* var308 /* : AbstractCompiler */;
val* var310 /* : AbstractCompiler */;
val* var311 /* : ModelBuilder */;
val* var313 /* : ModelBuilder */;
val* var314 /* : ToolContext */;
val* var316 /* : ToolContext */;
val* var317 /* : OptionBool */;
val* var319 /* : OptionBool */;
val* var320 /* : nullable Object */;
val* var322 /* : nullable Object */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
val* var326 /* : NativeArray[String] */;
static val* varonce325;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : NativeString */;
val* var330 /* : FlatString */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
val* var334 /* : FlatString */;
val* var335 /* : String */;
val* var336 /* : String */;
val* var338 /* : NativeArray[String] */;
static val* varonce337;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
val* var342 /* : FlatString */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
val* var346 /* : FlatString */;
val* var347 /* : String */;
val* var348 /* : String */;
val* var349 /* : String */;
val* var351 /* : NativeArray[String] */;
static val* varonce350;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
val* var355 /* : FlatString */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
val* var359 /* : FlatString */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
val* var363 /* : FlatString */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
val* var367 /* : FlatString */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
val* var371 /* : FlatString */;
val* var372 /* : String */;
val* var373 /* : String */;
val* var374 /* : String */;
val* var375 /* : String */;
val* var376 /* : String */;
val* var377 /* : String */;
val* var379 /* : NativeArray[String] */;
static val* varonce378;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
val* var383 /* : FlatString */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
val* var387 /* : FlatString */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : NativeString */;
val* var391 /* : FlatString */;
val* var392 /* : String */;
val* var393 /* : String */;
val* var394 /* : String */;
val* var395 /* : String */;
short int var396 /* : Bool */;
short int var397 /* : Bool */;
val* var_other399 /* var other: nullable Object */;
short int var400 /* : Bool */;
short int var401 /* : Bool */;
short int var402 /* : Bool */;
short int var404 /* : Bool */;
val* var406 /* : NativeArray[String] */;
static val* varonce405;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
val* var410 /* : FlatString */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
val* var414 /* : FlatString */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
val* var418 /* : FlatString */;
val* var419 /* : String */;
val* var420 /* : String */;
val* var421 /* : String */;
val* var422 /* : String */;
val* var424 /* : NativeArray[String] */;
static val* varonce423;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : NativeString */;
val* var428 /* : FlatString */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
val* var432 /* : FlatString */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : NativeString */;
val* var436 /* : FlatString */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
val* var440 /* : FlatString */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
val* var444 /* : FlatString */;
val* var445 /* : String */;
val* var446 /* : String */;
val* var447 /* : String */;
val* var448 /* : String */;
val* var449 /* : String */;
short int var450 /* : Bool */;
short int var451 /* : Bool */;
short int var_452 /* var : Bool */;
short int var453 /* : Bool */;
val* var454 /* : AbstractCompiler */;
val* var456 /* : AbstractCompiler */;
val* var457 /* : ModelBuilder */;
val* var459 /* : ModelBuilder */;
val* var460 /* : ToolContext */;
val* var462 /* : ToolContext */;
val* var463 /* : OptionBool */;
val* var465 /* : OptionBool */;
val* var466 /* : nullable Object */;
val* var468 /* : nullable Object */;
short int var469 /* : Bool */;
short int var470 /* : Bool */;
val* var472 /* : NativeArray[String] */;
static val* varonce471;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : NativeString */;
val* var476 /* : FlatString */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : NativeString */;
val* var480 /* : FlatString */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
val* var484 /* : FlatString */;
val* var485 /* : String */;
val* var486 /* : String */;
val* var487 /* : String */;
val* var489 /* : NativeArray[String] */;
static val* varonce488;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
val* var493 /* : FlatString */;
static val* varonce494;
val* var495 /* : String */;
char* var496 /* : NativeString */;
val* var497 /* : FlatString */;
val* var498 /* : String */;
val* var499 /* : String */;
val* var500 /* : String */;
val* var501 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var502 /* : AbstractCompiler */;
val* var504 /* : AbstractCompiler */;
val* var505 /* : HashMap[MClass, Int] */;
val* var507 /* : HashMap[MClass, Int] */;
val* var_508 /* var : HashMap[MClass, Int] */;
val* var509 /* : HashMapIterator[nullable Object, nullable Object] */;
val* var_510 /* var : HashMapIterator[MClass, Int] */;
short int var511 /* : Bool */;
val* var512 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var513 /* : nullable Object */;
long var514 /* : Int */;
long var_v /* var v: Int */;
val* var515 /* : MClassType */;
val* var517 /* : MClassType */;
short int var518 /* : Bool */;
short int var520 /* : Bool */;
val* var522 /* : NativeArray[String] */;
static val* varonce521;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : NativeString */;
val* var526 /* : FlatString */;
static val* varonce527;
val* var528 /* : String */;
char* var529 /* : NativeString */;
val* var530 /* : FlatString */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
val* var534 /* : FlatString */;
static val* varonce535;
val* var536 /* : String */;
char* var537 /* : NativeString */;
val* var538 /* : FlatString */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
val* var542 /* : FlatString */;
static val* varonce543;
val* var544 /* : String */;
char* var545 /* : NativeString */;
val* var546 /* : FlatString */;
static val* varonce547;
val* var548 /* : String */;
char* var549 /* : NativeString */;
val* var550 /* : FlatString */;
val* var551 /* : String */;
val* var552 /* : String */;
val* var553 /* : String */;
val* var554 /* : String */;
val* var555 /* : String */;
val* var556 /* : String */;
val* var557 /* : String */;
short int var560 /* : Bool */;
val* var562 /* : NativeArray[String] */;
static val* varonce561;
static val* varonce563;
val* var564 /* : String */;
char* var565 /* : NativeString */;
val* var566 /* : FlatString */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : NativeString */;
val* var570 /* : FlatString */;
static val* varonce571;
val* var572 /* : String */;
char* var573 /* : NativeString */;
val* var574 /* : FlatString */;
val* var575 /* : String */;
val* var576 /* : String */;
val* var577 /* : String */;
val* var578 /* : String */;
val* var580 /* : NativeArray[String] */;
static val* varonce579;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : NativeString */;
val* var584 /* : FlatString */;
static val* varonce585;
val* var586 /* : String */;
char* var587 /* : NativeString */;
val* var588 /* : FlatString */;
static val* varonce589;
val* var590 /* : String */;
char* var591 /* : NativeString */;
val* var592 /* : FlatString */;
val* var593 /* : String */;
val* var594 /* : String */;
val* var596 /* : NativeArray[String] */;
static val* varonce595;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
val* var600 /* : FlatString */;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : NativeString */;
val* var604 /* : FlatString */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
val* var608 /* : FlatString */;
val* var609 /* : String */;
val* var610 /* : String */;
val* var611 /* : String */;
val* var612 /* : String */;
val* var614 /* : NativeArray[String] */;
static val* varonce613;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : NativeString */;
val* var618 /* : FlatString */;
static val* varonce619;
val* var620 /* : String */;
char* var621 /* : NativeString */;
val* var622 /* : FlatString */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
val* var626 /* : FlatString */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
val* var630 /* : FlatString */;
val* var631 /* : String */;
val* var632 /* : String */;
val* var633 /* : String */;
static val* varonce634;
val* var635 /* : String */;
char* var636 /* : NativeString */;
val* var637 /* : FlatString */;
val* var638 /* : String */;
val* var639 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nit___nit__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self))(var4->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var4); /* is_c_primitive on <var4:MType>*/
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var10 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))(var8->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var8); /* is_c_primitive on <var8:MType>*/
}
var12 = !var11;
var3 = var12;
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
var15 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self))(var13->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var13); /* is_c_primitive on <var13:MType>*/
}
if (var16){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var19 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var22 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var17,var20) on <var17:MType> */
var_other = var20;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:MType> */
var27 = var17 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
if (unlikely(varonce==NULL)) {
var28 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " = ";
var32 = standard___standard__NativeString___to_s_with_length(var31, 3l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var28)->values[1]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " == ";
var36 = standard___standard__NativeString___to_s_with_length(var35, 4l);
var34 = var36;
varonce33 = var34;
}
((struct instance_standard__NativeArray*)var28)->values[3]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = ";";
var40 = standard___standard__NativeString___to_s_with_length(var39, 1l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var28)->values[5]=var38;
} else {
var28 = varonce;
varonce = NULL;
}
{
var41 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var28)->values[0]=var41;
{
var42 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var28)->values[2]=var42;
{
var43 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var28)->values[4]=var43;
{
var44 = ((val*(*)(val* self))(var28->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce = var28;
{
nit___nit__AbstractCompilerVisitor___add(self, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var47 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = ((short int(*)(val* self))(var45->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var45); /* is_c_primitive on <var45:MType>*/
}
if (var48){
if (unlikely(varonce49==NULL)) {
var50 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = " = 0; /* incompatible types ";
var54 = standard___standard__NativeString___to_s_with_length(var53, 28l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var50)->values[1]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = " vs. ";
var58 = standard___standard__NativeString___to_s_with_length(var57, 5l);
var56 = var58;
varonce55 = var56;
}
((struct instance_standard__NativeArray*)var50)->values[3]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "*/";
var62 = standard___standard__NativeString___to_s_with_length(var61, 2l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var50)->values[5]=var60;
} else {
var50 = varonce49;
varonce49 = NULL;
}
{
var63 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var50)->values[0]=var63;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var66 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__Object__to_s]))(var64); /* to_s on <var64:MType>*/
}
((struct instance_standard__NativeArray*)var50)->values[2]=var67;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var70 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = ((val*(*)(val* self))(var68->class->vft[COLOR_standard__string__Object__to_s]))(var68); /* to_s on <var68:MType>*/
}
((struct instance_standard__NativeArray*)var50)->values[4]=var71;
{
var72 = ((val*(*)(val* self))(var50->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
{
nit___nit__AbstractCompilerVisitor___add(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var75 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#is_tagged (var73) on <var73:MType> */
var78 = var73->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var73:MType> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76){
if (unlikely(varonce79==NULL)) {
var80 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " = (";
var84 = standard___standard__NativeString___to_s_with_length(var83, 4l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var80)->values[1]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = " != NULL) && (";
var88 = standard___standard__NativeString___to_s_with_length(var87, 14l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var80)->values[3]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = " == ";
var92 = standard___standard__NativeString___to_s_with_length(var91, 4l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var80)->values[5]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = ");";
var96 = standard___standard__NativeString___to_s_with_length(var95, 2l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var80)->values[7]=var94;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var97 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var80)->values[0]=var97;
{
var98 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var80)->values[2]=var98;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var101 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
var102 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value2, var99);
}
{
var103 = ((val*(*)(val* self))(var102->class->vft[COLOR_standard__string__Object__to_s]))(var102); /* to_s on <var102:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var80)->values[4]=var103;
{
var104 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var80)->values[6]=var104;
{
var105 = ((val*(*)(val* self))(var80->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nit___nit__AbstractCompilerVisitor___add(self, var105); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var108 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
/* <var106:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var106->type->table_size) {
var109 = 0;
} else {
var109 = var106->type->type_table[cltype] == idtype;
}
if (unlikely(!var109)) {
var_class_name = var106 == NULL ? "null" : var106->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1897);
fatal_exit(1);
}
var_mtype1 = var106;
if (unlikely(varonce110==NULL)) {
var111 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "class_";
var115 = standard___standard__NativeString___to_s_with_length(var114, 6l);
var113 = var115;
varonce112 = var113;
}
((struct instance_standard__NativeArray*)var111)->values[0]=var113;
} else {
var111 = varonce110;
varonce110 = NULL;
}
{
var116 = ((val*(*)(val* self))(var_mtype1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype1); /* c_name on <var_mtype1:MClassType>*/
}
((struct instance_standard__NativeArray*)var111)->values[1]=var116;
{
var117 = ((val*(*)(val* self))(var111->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var117); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce118==NULL)) {
var119 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = " = (";
var123 = standard___standard__NativeString___to_s_with_length(var122, 4l);
var121 = var123;
varonce120 = var121;
}
((struct instance_standard__NativeArray*)var119)->values[1]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = " != NULL) && (";
var127 = standard___standard__NativeString___to_s_with_length(var126, 14l);
var125 = var127;
varonce124 = var125;
}
((struct instance_standard__NativeArray*)var119)->values[3]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "->class == &class_";
var131 = standard___standard__NativeString___to_s_with_length(var130, 18l);
var129 = var131;
varonce128 = var129;
}
((struct instance_standard__NativeArray*)var119)->values[5]=var129;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = ");";
var135 = standard___standard__NativeString___to_s_with_length(var134, 2l);
var133 = var135;
varonce132 = var133;
}
((struct instance_standard__NativeArray*)var119)->values[7]=var133;
} else {
var119 = varonce118;
varonce118 = NULL;
}
{
var136 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var119)->values[0]=var136;
{
var137 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var119)->values[2]=var137;
{
var138 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var119)->values[4]=var138;
{
var139 = ((val*(*)(val* self))(var_mtype1->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype1); /* c_name on <var_mtype1:MClassType>*/
}
((struct instance_standard__NativeArray*)var119)->values[6]=var139;
{
var140 = ((val*(*)(val* self))(var119->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var119); /* native_to_s on <var119:NativeArray[String]>*/
}
varonce118 = var119;
{
nit___nit__AbstractCompilerVisitor___add(self, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce141==NULL)) {
var142 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "if (";
var146 = standard___standard__NativeString___to_s_with_length(var145, 4l);
var144 = var146;
varonce143 = var144;
}
((struct instance_standard__NativeArray*)var142)->values[0]=var144;
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = ") {";
var150 = standard___standard__NativeString___to_s_with_length(var149, 3l);
var148 = var150;
varonce147 = var148;
}
((struct instance_standard__NativeArray*)var142)->values[2]=var148;
} else {
var142 = varonce141;
varonce141 = NULL;
}
{
var151 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var142)->values[1]=var151;
{
var152 = ((val*(*)(val* self))(var142->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var142); /* native_to_s on <var142:NativeArray[String]>*/
}
varonce141 = var142;
{
nit___nit__AbstractCompilerVisitor___add(self, var152); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce153==NULL)) {
var154 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = " = (";
var158 = standard___standard__NativeString___to_s_with_length(var157, 4l);
var156 = var158;
varonce155 = var156;
}
((struct instance_standard__NativeArray*)var154)->values[1]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = " == ";
var162 = standard___standard__NativeString___to_s_with_length(var161, 4l);
var160 = var162;
varonce159 = var160;
}
((struct instance_standard__NativeArray*)var154)->values[3]=var160;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = ");";
var166 = standard___standard__NativeString___to_s_with_length(var165, 2l);
var164 = var166;
varonce163 = var164;
}
((struct instance_standard__NativeArray*)var154)->values[5]=var164;
} else {
var154 = varonce153;
varonce153 = NULL;
}
{
var167 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var154)->values[0]=var167;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var170 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
var171 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value2, var168);
}
{
var172 = ((val*(*)(val* self))(var171->class->vft[COLOR_standard__string__Object__to_s]))(var171); /* to_s on <var171:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var154)->values[2]=var172;
{
var173 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var154)->values[4]=var173;
{
var174 = ((val*(*)(val* self))(var154->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var154); /* native_to_s on <var154:NativeArray[String]>*/
}
varonce153 = var154;
{
nit___nit__AbstractCompilerVisitor___add(self, var174); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "}";
var178 = standard___standard__NativeString___to_s_with_length(var177, 1l);
var176 = var178;
varonce175 = var176;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var_maybe_null = 1;
var179 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var179); /* Direct call array#Array#init on <var179:Array[String]>*/
}
var_test = var179;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var182 = var_value1->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
var_t1 = var180;
/* <var_t1:MType> isa MNullableType */
cltype184 = type_nit__MNullableType.color;
idtype185 = type_nit__MNullableType.id;
if(cltype184 >= var_t1->type->table_size) {
var183 = 0;
} else {
var183 = var_t1->type->type_table[cltype184] == idtype185;
}
if (var183){
if (unlikely(varonce186==NULL)) {
var187 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = " != NULL";
var191 = standard___standard__NativeString___to_s_with_length(var190, 8l);
var189 = var191;
varonce188 = var189;
}
((struct instance_standard__NativeArray*)var187)->values[1]=var189;
} else {
var187 = varonce186;
varonce186 = NULL;
}
{
var192 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var187)->values[0]=var192;
{
var193 = ((val*(*)(val* self))(var187->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var187); /* native_to_s on <var187:NativeArray[String]>*/
}
varonce186 = var187;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var193); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
{
{ /* Inline model#MProxyType#mtype (var_t1) on <var_t1:MType(MNullableType)> */
var196 = var_t1->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_t1:MType(MNullableType)> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
var_t1 = var194;
} else {
var_maybe_null = 0;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var199 = var_value2->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
var_t2 = var197;
/* <var_t2:MType> isa MNullableType */
cltype201 = type_nit__MNullableType.color;
idtype202 = type_nit__MNullableType.id;
if(cltype201 >= var_t2->type->table_size) {
var200 = 0;
} else {
var200 = var_t2->type->type_table[cltype201] == idtype202;
}
if (var200){
if (unlikely(varonce203==NULL)) {
var204 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = " != NULL";
var208 = standard___standard__NativeString___to_s_with_length(var207, 8l);
var206 = var208;
varonce205 = var206;
}
((struct instance_standard__NativeArray*)var204)->values[1]=var206;
} else {
var204 = varonce203;
varonce203 = NULL;
}
{
var209 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var204)->values[0]=var209;
{
var210 = ((val*(*)(val* self))(var204->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var204); /* native_to_s on <var204:NativeArray[String]>*/
}
varonce203 = var204;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var210); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
{
{ /* Inline model#MProxyType#mtype (var_t2) on <var_t2:MType(MNullableType)> */
var213 = var_t2->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_t2:MType(MNullableType)> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
var_t2 = var211;
} else {
var_maybe_null = 0;
}
var_incompatible = 0;
{
var214 = ((short int(*)(val* self))(var_t1->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_t1); /* is_c_primitive on <var_t1:MType>*/
}
if (var214){
var_primitive = var_t1;
{
{ /* Inline kernel#Object#== (var_t1,var_t2) on <var_t1:MType> */
var_other = var_t2;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:MType> */
var219 = var_t1 == var_other;
var217 = var219;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
var215 = var217;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
}
if (var215){
} else {
{
var220 = ((short int(*)(val* self))(var_t2->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_t2); /* is_c_primitive on <var_t2:MType>*/
}
if (var220){
var_incompatible = 1;
} else {
{
var221 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value2);
}
if (var221){
{
{ /* Inline separate_compiler#MType#is_tagged (var_t1) on <var_t1:MType> */
var224 = var_t1->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_t1:MType> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
if (var222){
if (unlikely(varonce225==NULL)) {
var226 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce227!=NULL)) {
var228 = varonce227;
} else {
var229 = " = ";
var230 = standard___standard__NativeString___to_s_with_length(var229, 3l);
var228 = var230;
varonce227 = var228;
}
((struct instance_standard__NativeArray*)var226)->values[1]=var228;
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = " == ";
var234 = standard___standard__NativeString___to_s_with_length(var233, 4l);
var232 = var234;
varonce231 = var232;
}
((struct instance_standard__NativeArray*)var226)->values[3]=var232;
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = ";";
var238 = standard___standard__NativeString___to_s_with_length(var237, 1l);
var236 = var238;
varonce235 = var236;
}
((struct instance_standard__NativeArray*)var226)->values[5]=var236;
} else {
var226 = varonce225;
varonce225 = NULL;
}
{
var239 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var226)->values[0]=var239;
{
var240 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var226)->values[2]=var240;
{
var241 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var226)->values[4]=var241;
{
var242 = ((val*(*)(val* self))(var226->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var226); /* native_to_s on <var226:NativeArray[String]>*/
}
varonce225 = var226;
{
nit___nit__AbstractCompilerVisitor___add(self, var242); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var245 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var245 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var243 = var245;
RET_LABEL244:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var243) on <var243:AbstractCompiler(SeparateCompiler)> */
var248 = var243->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var243:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var246) on <var246:ModelBuilder> */
var251 = var246->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var246:ModelBuilder> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (var249) on <var249:ToolContext> */
var254 = var249->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var249:ToolContext> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 32);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
{ /* Inline opts#Option#value (var252) on <var252:OptionBool> */
var257 = var252->attrs[COLOR_opts__Option___value].val; /* _value on <var252:OptionBool> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
var258 = (short int)((long)(var255)>>2);
var259 = !var258;
if (var259){
if (unlikely(varonce260==NULL)) {
var261 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "(!";
var265 = standard___standard__NativeString___to_s_with_length(var264, 2l);
var263 = var265;
varonce262 = var263;
}
((struct instance_standard__NativeArray*)var261)->values[0]=var263;
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = ")";
var269 = standard___standard__NativeString___to_s_with_length(var268, 1l);
var267 = var269;
varonce266 = var267;
}
((struct instance_standard__NativeArray*)var261)->values[2]=var267;
} else {
var261 = varonce260;
varonce260 = NULL;
}
{
var270 = nit___nit__SeparateCompilerVisitor___extract_tag(self, var_value2);
}
((struct instance_standard__NativeArray*)var261)->values[1]=var270;
{
var271 = ((val*(*)(val* self))(var261->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var261); /* native_to_s on <var261:NativeArray[String]>*/
}
varonce260 = var261;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var271); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce272==NULL)) {
var273 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "->class == ";
var277 = standard___standard__NativeString___to_s_with_length(var276, 11l);
var275 = var277;
varonce274 = var275;
}
((struct instance_standard__NativeArray*)var273)->values[1]=var275;
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "->class";
var281 = standard___standard__NativeString___to_s_with_length(var280, 7l);
var279 = var281;
varonce278 = var279;
}
((struct instance_standard__NativeArray*)var273)->values[3]=var279;
} else {
var273 = varonce272;
varonce272 = NULL;
}
{
var282 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var273)->values[0]=var282;
{
var283 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var273)->values[2]=var283;
{
var284 = ((val*(*)(val* self))(var273->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var273); /* native_to_s on <var273:NativeArray[String]>*/
}
varonce272 = var273;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var284); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
var_incompatible = 1;
}
}
}
} else {
{
var285 = ((short int(*)(val* self))(var_t2->class->vft[COLOR_nit__abstract_compiler__MType__is_c_primitive]))(var_t2); /* is_c_primitive on <var_t2:MType>*/
}
if (var285){
var_primitive = var_t2;
{
var286 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value1);
}
if (var286){
{
{ /* Inline separate_compiler#MType#is_tagged (var_t2) on <var_t2:MType> */
var289 = var_t2->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_t2:MType> */
var287 = var289;
RET_LABEL288:(void)0;
}
}
if (var287){
if (unlikely(varonce290==NULL)) {
var291 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = " = ";
var295 = standard___standard__NativeString___to_s_with_length(var294, 3l);
var293 = var295;
varonce292 = var293;
}
((struct instance_standard__NativeArray*)var291)->values[1]=var293;
if (likely(varonce296!=NULL)) {
var297 = varonce296;
} else {
var298 = " == ";
var299 = standard___standard__NativeString___to_s_with_length(var298, 4l);
var297 = var299;
varonce296 = var297;
}
((struct instance_standard__NativeArray*)var291)->values[3]=var297;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = ";";
var303 = standard___standard__NativeString___to_s_with_length(var302, 1l);
var301 = var303;
varonce300 = var301;
}
((struct instance_standard__NativeArray*)var291)->values[5]=var301;
} else {
var291 = varonce290;
varonce290 = NULL;
}
{
var304 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var291)->values[0]=var304;
{
var305 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var291)->values[2]=var305;
{
var306 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var291)->values[4]=var306;
{
var307 = ((val*(*)(val* self))(var291->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var291); /* native_to_s on <var291:NativeArray[String]>*/
}
varonce290 = var291;
{
nit___nit__AbstractCompilerVisitor___add(self, var307); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var310 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var310 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var308) on <var308:AbstractCompiler(SeparateCompiler)> */
var313 = var308->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var308:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var311 = var313;
RET_LABEL312:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var311) on <var311:ModelBuilder> */
var316 = var311->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var311:ModelBuilder> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (var314) on <var314:ToolContext> */
var319 = var314->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var314:ToolContext> */
if (unlikely(var319 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 32);
fatal_exit(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
{
{ /* Inline opts#Option#value (var317) on <var317:OptionBool> */
var322 = var317->attrs[COLOR_opts__Option___value].val; /* _value on <var317:OptionBool> */
var320 = var322;
RET_LABEL321:(void)0;
}
}
var323 = (short int)((long)(var320)>>2);
var324 = !var323;
if (var324){
if (unlikely(varonce325==NULL)) {
var326 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = "(!";
var330 = standard___standard__NativeString___to_s_with_length(var329, 2l);
var328 = var330;
varonce327 = var328;
}
((struct instance_standard__NativeArray*)var326)->values[0]=var328;
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = ")";
var334 = standard___standard__NativeString___to_s_with_length(var333, 1l);
var332 = var334;
varonce331 = var332;
}
((struct instance_standard__NativeArray*)var326)->values[2]=var332;
} else {
var326 = varonce325;
varonce325 = NULL;
}
{
var335 = nit___nit__SeparateCompilerVisitor___extract_tag(self, var_value1);
}
((struct instance_standard__NativeArray*)var326)->values[1]=var335;
{
var336 = ((val*(*)(val* self))(var326->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var326); /* native_to_s on <var326:NativeArray[String]>*/
}
varonce325 = var326;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var336); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce337==NULL)) {
var338 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce339!=NULL)) {
var340 = varonce339;
} else {
var341 = "->class == ";
var342 = standard___standard__NativeString___to_s_with_length(var341, 11l);
var340 = var342;
varonce339 = var340;
}
((struct instance_standard__NativeArray*)var338)->values[1]=var340;
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "->class";
var346 = standard___standard__NativeString___to_s_with_length(var345, 7l);
var344 = var346;
varonce343 = var344;
}
((struct instance_standard__NativeArray*)var338)->values[3]=var344;
} else {
var338 = varonce337;
varonce337 = NULL;
}
{
var347 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var338)->values[0]=var347;
{
var348 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var338)->values[2]=var348;
{
var349 = ((val*(*)(val* self))(var338->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var338); /* native_to_s on <var338:NativeArray[String]>*/
}
varonce337 = var338;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var349); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
var_incompatible = 1;
}
} else {
var_primitive = ((val*)NULL);
}
}
if (var_incompatible){
if (var_maybe_null){
if (unlikely(varonce350==NULL)) {
var351 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = " = ";
var355 = standard___standard__NativeString___to_s_with_length(var354, 3l);
var353 = var355;
varonce352 = var353;
}
((struct instance_standard__NativeArray*)var351)->values[1]=var353;
if (likely(varonce356!=NULL)) {
var357 = varonce356;
} else {
var358 = " == ";
var359 = standard___standard__NativeString___to_s_with_length(var358, 4l);
var357 = var359;
varonce356 = var357;
}
((struct instance_standard__NativeArray*)var351)->values[3]=var357;
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "; /* incompatible types ";
var363 = standard___standard__NativeString___to_s_with_length(var362, 24l);
var361 = var363;
varonce360 = var361;
}
((struct instance_standard__NativeArray*)var351)->values[5]=var361;
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = " vs. ";
var367 = standard___standard__NativeString___to_s_with_length(var366, 5l);
var365 = var367;
varonce364 = var365;
}
((struct instance_standard__NativeArray*)var351)->values[7]=var365;
if (likely(varonce368!=NULL)) {
var369 = varonce368;
} else {
var370 = "; but may be NULL*/";
var371 = standard___standard__NativeString___to_s_with_length(var370, 19l);
var369 = var371;
varonce368 = var369;
}
((struct instance_standard__NativeArray*)var351)->values[9]=var369;
} else {
var351 = varonce350;
varonce350 = NULL;
}
{
var372 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var351)->values[0]=var372;
{
var373 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var351)->values[2]=var373;
{
var374 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var351)->values[4]=var374;
{
var375 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_standard__string__Object__to_s]))(var_t1); /* to_s on <var_t1:MType>*/
}
((struct instance_standard__NativeArray*)var351)->values[6]=var375;
{
var376 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_standard__string__Object__to_s]))(var_t2); /* to_s on <var_t2:MType>*/
}
((struct instance_standard__NativeArray*)var351)->values[8]=var376;
{
var377 = ((val*(*)(val* self))(var351->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var351); /* native_to_s on <var351:NativeArray[String]>*/
}
varonce350 = var351;
{
nit___nit__AbstractCompilerVisitor___add(self, var377); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
if (unlikely(varonce378==NULL)) {
var379 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = " = 0; /* incompatible types ";
var383 = standard___standard__NativeString___to_s_with_length(var382, 28l);
var381 = var383;
varonce380 = var381;
}
((struct instance_standard__NativeArray*)var379)->values[1]=var381;
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = " vs. ";
var387 = standard___standard__NativeString___to_s_with_length(var386, 5l);
var385 = var387;
varonce384 = var385;
}
((struct instance_standard__NativeArray*)var379)->values[3]=var385;
if (likely(varonce388!=NULL)) {
var389 = varonce388;
} else {
var390 = "; cannot be NULL */";
var391 = standard___standard__NativeString___to_s_with_length(var390, 19l);
var389 = var391;
varonce388 = var389;
}
((struct instance_standard__NativeArray*)var379)->values[5]=var389;
} else {
var379 = varonce378;
varonce378 = NULL;
}
{
var392 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var379)->values[0]=var392;
{
var393 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_standard__string__Object__to_s]))(var_t1); /* to_s on <var_t1:MType>*/
}
((struct instance_standard__NativeArray*)var379)->values[2]=var393;
{
var394 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_standard__string__Object__to_s]))(var_t2); /* to_s on <var_t2:MType>*/
}
((struct instance_standard__NativeArray*)var379)->values[4]=var394;
{
var395 = ((val*(*)(val* self))(var379->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var379); /* native_to_s on <var379:NativeArray[String]>*/
}
varonce378 = var379;
{
nit___nit__AbstractCompilerVisitor___add(self, var395); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
} else {
}
if (var_primitive == NULL) {
var396 = 0; /* is null */
} else {
var396 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_primitive,((val*)NULL)) on <var_primitive:nullable Object(nullable MType)> */
var_other399 = ((val*)NULL);
{
var400 = ((short int(*)(val* self, val* p0))(var_primitive->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_primitive, var_other399); /* == on <var_primitive:nullable MType(MType)>*/
}
var401 = !var400;
var397 = var401;
goto RET_LABEL398;
RET_LABEL398:(void)0;
}
var396 = var397;
}
if (var396){
{
{ /* Inline separate_compiler#MType#is_tagged (var_primitive) on <var_primitive:nullable Object(MType)> */
var404 = var_primitive->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_primitive:nullable Object(MType)> */
var402 = var404;
RET_LABEL403:(void)0;
}
}
if (var402){
if (unlikely(varonce405==NULL)) {
var406 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce407!=NULL)) {
var408 = varonce407;
} else {
var409 = " = ";
var410 = standard___standard__NativeString___to_s_with_length(var409, 3l);
var408 = var410;
varonce407 = var408;
}
((struct instance_standard__NativeArray*)var406)->values[1]=var408;
if (likely(varonce411!=NULL)) {
var412 = varonce411;
} else {
var413 = " == ";
var414 = standard___standard__NativeString___to_s_with_length(var413, 4l);
var412 = var414;
varonce411 = var412;
}
((struct instance_standard__NativeArray*)var406)->values[3]=var412;
if (likely(varonce415!=NULL)) {
var416 = varonce415;
} else {
var417 = ";";
var418 = standard___standard__NativeString___to_s_with_length(var417, 1l);
var416 = var418;
varonce415 = var416;
}
((struct instance_standard__NativeArray*)var406)->values[5]=var416;
} else {
var406 = varonce405;
varonce405 = NULL;
}
{
var419 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var406)->values[0]=var419;
{
var420 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var406)->values[2]=var420;
{
var421 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var406)->values[4]=var421;
{
var422 = ((val*(*)(val* self))(var406->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var406); /* native_to_s on <var406:NativeArray[String]>*/
}
varonce405 = var406;
{
nit___nit__AbstractCompilerVisitor___add(self, var422); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce423==NULL)) {
var424 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce425!=NULL)) {
var426 = varonce425;
} else {
var427 = "((struct instance_";
var428 = standard___standard__NativeString___to_s_with_length(var427, 18l);
var426 = var428;
varonce425 = var426;
}
((struct instance_standard__NativeArray*)var424)->values[0]=var426;
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "*)";
var432 = standard___standard__NativeString___to_s_with_length(var431, 2l);
var430 = var432;
varonce429 = var430;
}
((struct instance_standard__NativeArray*)var424)->values[2]=var430;
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = ")->value == ((struct instance_";
var436 = standard___standard__NativeString___to_s_with_length(var435, 30l);
var434 = var436;
varonce433 = var434;
}
((struct instance_standard__NativeArray*)var424)->values[4]=var434;
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "*)";
var440 = standard___standard__NativeString___to_s_with_length(var439, 2l);
var438 = var440;
varonce437 = var438;
}
((struct instance_standard__NativeArray*)var424)->values[6]=var438;
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = ")->value";
var444 = standard___standard__NativeString___to_s_with_length(var443, 8l);
var442 = var444;
varonce441 = var442;
}
((struct instance_standard__NativeArray*)var424)->values[8]=var442;
} else {
var424 = varonce423;
varonce423 = NULL;
}
{
var445 = ((val*(*)(val* self))(var_primitive->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_primitive); /* c_name on <var_primitive:nullable Object(MType)>*/
}
((struct instance_standard__NativeArray*)var424)->values[1]=var445;
{
var446 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var424)->values[3]=var446;
{
var447 = ((val*(*)(val* self))(var_primitive->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_primitive); /* c_name on <var_primitive:nullable Object(MType)>*/
}
((struct instance_standard__NativeArray*)var424)->values[5]=var447;
{
var448 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var424)->values[7]=var448;
{
var449 = ((val*(*)(val* self))(var424->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var424); /* native_to_s on <var424:NativeArray[String]>*/
}
varonce423 = var424;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var449); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
{
var451 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value1);
}
var_452 = var451;
if (var451){
{
var453 = nit___nit__SeparateCompilerVisitor___can_be_primitive(self, var_value2);
}
var450 = var453;
} else {
var450 = var_452;
}
if (var450){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var456 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var456 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var454 = var456;
RET_LABEL455:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var454) on <var454:AbstractCompiler(SeparateCompiler)> */
var459 = var454->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var454:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var459 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var457 = var459;
RET_LABEL458:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var457) on <var457:ModelBuilder> */
var462 = var457->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var457:ModelBuilder> */
if (unlikely(var462 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var460 = var462;
RET_LABEL461:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (var460) on <var460:ToolContext> */
var465 = var460->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var460:ToolContext> */
if (unlikely(var465 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 32);
fatal_exit(1);
}
var463 = var465;
RET_LABEL464:(void)0;
}
}
{
{ /* Inline opts#Option#value (var463) on <var463:OptionBool> */
var468 = var463->attrs[COLOR_opts__Option___value].val; /* _value on <var463:OptionBool> */
var466 = var468;
RET_LABEL467:(void)0;
}
}
var469 = (short int)((long)(var466)>>2);
var470 = !var469;
if (var470){
if (unlikely(varonce471==NULL)) {
var472 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce473!=NULL)) {
var474 = varonce473;
} else {
var475 = "(!";
var476 = standard___standard__NativeString___to_s_with_length(var475, 2l);
var474 = var476;
varonce473 = var474;
}
((struct instance_standard__NativeArray*)var472)->values[0]=var474;
if (likely(varonce477!=NULL)) {
var478 = varonce477;
} else {
var479 = ") && (!";
var480 = standard___standard__NativeString___to_s_with_length(var479, 7l);
var478 = var480;
varonce477 = var478;
}
((struct instance_standard__NativeArray*)var472)->values[2]=var478;
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = ")";
var484 = standard___standard__NativeString___to_s_with_length(var483, 1l);
var482 = var484;
varonce481 = var482;
}
((struct instance_standard__NativeArray*)var472)->values[4]=var482;
} else {
var472 = varonce471;
varonce471 = NULL;
}
{
var485 = nit___nit__SeparateCompilerVisitor___extract_tag(self, var_value1);
}
((struct instance_standard__NativeArray*)var472)->values[1]=var485;
{
var486 = nit___nit__SeparateCompilerVisitor___extract_tag(self, var_value2);
}
((struct instance_standard__NativeArray*)var472)->values[3]=var486;
{
var487 = ((val*(*)(val* self))(var472->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var472); /* native_to_s on <var472:NativeArray[String]>*/
}
varonce471 = var472;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var487); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
}
if (unlikely(varonce488==NULL)) {
var489 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce490!=NULL)) {
var491 = varonce490;
} else {
var492 = "->class == ";
var493 = standard___standard__NativeString___to_s_with_length(var492, 11l);
var491 = var493;
varonce490 = var491;
}
((struct instance_standard__NativeArray*)var489)->values[1]=var491;
if (likely(varonce494!=NULL)) {
var495 = varonce494;
} else {
var496 = "->class";
var497 = standard___standard__NativeString___to_s_with_length(var496, 7l);
var495 = var497;
varonce494 = var495;
}
((struct instance_standard__NativeArray*)var489)->values[3]=var495;
} else {
var489 = varonce488;
varonce488 = NULL;
}
{
var498 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var489)->values[0]=var498;
{
var499 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var489)->values[2]=var499;
{
var500 = ((val*(*)(val* self))(var489->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var489); /* native_to_s on <var489:NativeArray[String]>*/
}
varonce488 = var489;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var500); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
var501 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var501); /* Direct call array#Array#init on <var501:Array[String]>*/
}
var_s = var501;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var504 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var504 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var502 = var504;
RET_LABEL503:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (var502) on <var502:AbstractCompiler(SeparateCompiler)> */
var507 = var502->attrs[COLOR_nit__separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <var502:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var507 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 263);
fatal_exit(1);
}
var505 = var507;
RET_LABEL506:(void)0;
}
}
var_508 = var505;
{
var509 = standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(var_508);
}
var_510 = var509;
for(;;) {
{
var511 = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(var_510);
}
if (var511){
{
var512 = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__key(var_510);
}
var_t = var512;
{
var513 = standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__item(var_510);
}
var514 = (long)(var513)>>2;
var_v = var514;
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var517 = var_t->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var517 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var515 = var517;
RET_LABEL516:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#is_tagged (var515) on <var515:MClassType> */
var520 = var515->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var515:MClassType> */
var518 = var520;
RET_LABEL519:(void)0;
}
}
if (var518){
goto BREAK_label;
} else {
}
if (unlikely(varonce521==NULL)) {
var522 = NEW_standard__NativeArray(13l, &type_standard__NativeArray__standard__String);
if (likely(varonce523!=NULL)) {
var524 = varonce523;
} else {
var525 = "(";
var526 = standard___standard__NativeString___to_s_with_length(var525, 1l);
var524 = var526;
varonce523 = var524;
}
((struct instance_standard__NativeArray*)var522)->values[0]=var524;
if (likely(varonce527!=NULL)) {
var528 = varonce527;
} else {
var529 = "->class->box_kind == ";
var530 = standard___standard__NativeString___to_s_with_length(var529, 21l);
var528 = var530;
varonce527 = var528;
}
((struct instance_standard__NativeArray*)var522)->values[2]=var528;
if (likely(varonce531!=NULL)) {
var532 = varonce531;
} else {
var533 = " && ((struct instance_";
var534 = standard___standard__NativeString___to_s_with_length(var533, 22l);
var532 = var534;
varonce531 = var532;
}
((struct instance_standard__NativeArray*)var522)->values[4]=var532;
if (likely(varonce535!=NULL)) {
var536 = varonce535;
} else {
var537 = "*)";
var538 = standard___standard__NativeString___to_s_with_length(var537, 2l);
var536 = var538;
varonce535 = var536;
}
((struct instance_standard__NativeArray*)var522)->values[6]=var536;
if (likely(varonce539!=NULL)) {
var540 = varonce539;
} else {
var541 = ")->value == ((struct instance_";
var542 = standard___standard__NativeString___to_s_with_length(var541, 30l);
var540 = var542;
varonce539 = var540;
}
((struct instance_standard__NativeArray*)var522)->values[8]=var540;
if (likely(varonce543!=NULL)) {
var544 = varonce543;
} else {
var545 = "*)";
var546 = standard___standard__NativeString___to_s_with_length(var545, 2l);
var544 = var546;
varonce543 = var544;
}
((struct instance_standard__NativeArray*)var522)->values[10]=var544;
if (likely(varonce547!=NULL)) {
var548 = varonce547;
} else {
var549 = ")->value)";
var550 = standard___standard__NativeString___to_s_with_length(var549, 9l);
var548 = var550;
varonce547 = var548;
}
((struct instance_standard__NativeArray*)var522)->values[12]=var548;
} else {
var522 = varonce521;
varonce521 = NULL;
}
{
var551 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var522)->values[1]=var551;
var552 = standard__string___Int___Object__to_s(var_v);
((struct instance_standard__NativeArray*)var522)->values[3]=var552;
{
var553 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_t);
}
((struct instance_standard__NativeArray*)var522)->values[5]=var553;
{
var554 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var522)->values[7]=var554;
{
var555 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_t);
}
((struct instance_standard__NativeArray*)var522)->values[9]=var555;
{
var556 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var522)->values[11]=var556;
{
var557 = ((val*(*)(val* self))(var522->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var522); /* native_to_s on <var522:NativeArray[String]>*/
}
varonce521 = var522;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_s, var557); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
BREAK_label: (void)0;
{
standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__next(var_510); /* Direct call hash_collection#HashMapIterator#next on <var_510:HashMapIterator[MClass, Int]>*/
}
} else {
goto BREAK_label558;
}
}
BREAK_label558: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_510) on <var_510:HashMapIterator[MClass, Int]> */
RET_LABEL559:(void)0;
}
}
{
var560 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_s);
}
if (var560){
if (unlikely(varonce561==NULL)) {
var562 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce563!=NULL)) {
var564 = varonce563;
} else {
var565 = " = ";
var566 = standard___standard__NativeString___to_s_with_length(var565, 3l);
var564 = var566;
varonce563 = var564;
}
((struct instance_standard__NativeArray*)var562)->values[1]=var564;
if (likely(varonce567!=NULL)) {
var568 = varonce567;
} else {
var569 = " == ";
var570 = standard___standard__NativeString___to_s_with_length(var569, 4l);
var568 = var570;
varonce567 = var568;
}
((struct instance_standard__NativeArray*)var562)->values[3]=var568;
if (likely(varonce571!=NULL)) {
var572 = varonce571;
} else {
var573 = ";";
var574 = standard___standard__NativeString___to_s_with_length(var573, 1l);
var572 = var574;
varonce571 = var572;
}
((struct instance_standard__NativeArray*)var562)->values[5]=var572;
} else {
var562 = varonce561;
varonce561 = NULL;
}
{
var575 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var562)->values[0]=var575;
{
var576 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var562)->values[2]=var576;
{
var577 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var562)->values[4]=var577;
{
var578 = ((val*(*)(val* self))(var562->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var562); /* native_to_s on <var562:NativeArray[String]>*/
}
varonce561 = var562;
{
nit___nit__AbstractCompilerVisitor___add(self, var578); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce579==NULL)) {
var580 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = "(";
var584 = standard___standard__NativeString___to_s_with_length(var583, 1l);
var582 = var584;
varonce581 = var582;
}
((struct instance_standard__NativeArray*)var580)->values[0]=var582;
if (likely(varonce585!=NULL)) {
var586 = varonce585;
} else {
var587 = ")";
var588 = standard___standard__NativeString___to_s_with_length(var587, 1l);
var586 = var588;
varonce585 = var586;
}
((struct instance_standard__NativeArray*)var580)->values[2]=var586;
} else {
var580 = varonce579;
varonce579 = NULL;
}
if (likely(varonce589!=NULL)) {
var590 = varonce589;
} else {
var591 = " || ";
var592 = standard___standard__NativeString___to_s_with_length(var591, 4l);
var590 = var592;
varonce589 = var590;
}
{
var593 = standard__string___Collection___join(var_s, var590);
}
((struct instance_standard__NativeArray*)var580)->values[1]=var593;
{
var594 = ((val*(*)(val* self))(var580->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var580); /* native_to_s on <var580:NativeArray[String]>*/
}
varonce579 = var580;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_test, var594); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
if (unlikely(varonce595==NULL)) {
var596 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce597!=NULL)) {
var598 = varonce597;
} else {
var599 = " = ";
var600 = standard___standard__NativeString___to_s_with_length(var599, 3l);
var598 = var600;
varonce597 = var598;
}
((struct instance_standard__NativeArray*)var596)->values[1]=var598;
if (likely(varonce601!=NULL)) {
var602 = varonce601;
} else {
var603 = " == ";
var604 = standard___standard__NativeString___to_s_with_length(var603, 4l);
var602 = var604;
varonce601 = var602;
}
((struct instance_standard__NativeArray*)var596)->values[3]=var602;
if (likely(varonce605!=NULL)) {
var606 = varonce605;
} else {
var607 = ";";
var608 = standard___standard__NativeString___to_s_with_length(var607, 1l);
var606 = var608;
varonce605 = var606;
}
((struct instance_standard__NativeArray*)var596)->values[5]=var606;
} else {
var596 = varonce595;
varonce595 = NULL;
}
{
var609 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var596)->values[0]=var609;
{
var610 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var596)->values[2]=var610;
{
var611 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var596)->values[4]=var611;
{
var612 = ((val*(*)(val* self))(var596->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var596); /* native_to_s on <var596:NativeArray[String]>*/
}
varonce595 = var596;
{
nit___nit__AbstractCompilerVisitor___add(self, var612); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
}
if (unlikely(varonce613==NULL)) {
var614 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce615!=NULL)) {
var616 = varonce615;
} else {
var617 = " = ";
var618 = standard___standard__NativeString___to_s_with_length(var617, 3l);
var616 = var618;
varonce615 = var616;
}
((struct instance_standard__NativeArray*)var614)->values[1]=var616;
if (likely(varonce619!=NULL)) {
var620 = varonce619;
} else {
var621 = " == ";
var622 = standard___standard__NativeString___to_s_with_length(var621, 4l);
var620 = var622;
varonce619 = var620;
}
((struct instance_standard__NativeArray*)var614)->values[3]=var620;
if (likely(varonce623!=NULL)) {
var624 = varonce623;
} else {
var625 = " || (";
var626 = standard___standard__NativeString___to_s_with_length(var625, 5l);
var624 = var626;
varonce623 = var624;
}
((struct instance_standard__NativeArray*)var614)->values[5]=var624;
if (likely(varonce627!=NULL)) {
var628 = varonce627;
} else {
var629 = ");";
var630 = standard___standard__NativeString___to_s_with_length(var629, 2l);
var628 = var630;
varonce627 = var628;
}
((struct instance_standard__NativeArray*)var614)->values[7]=var628;
} else {
var614 = varonce613;
varonce613 = NULL;
}
{
var631 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var614)->values[0]=var631;
{
var632 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_standard__string__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var614)->values[2]=var632;
{
var633 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_standard__string__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var614)->values[4]=var633;
if (likely(varonce634!=NULL)) {
var635 = varonce634;
} else {
var636 = " && ";
var637 = standard___standard__NativeString___to_s_with_length(var636, 4l);
var635 = var637;
varonce634 = var635;
}
{
var638 = standard__string___Collection___join(var_test, var635);
}
((struct instance_standard__NativeArray*)var614)->values[6]=var638;
{
var639 = ((val*(*)(val* self))(var614->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var614); /* native_to_s on <var614:NativeArray[String]>*/
}
varonce613 = var614;
{
nit___nit__AbstractCompilerVisitor___add(self, var639); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#can_be_primitive for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int nit___nit__SeparateCompilerVisitor___can_be_primitive(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
val* var_t /* var t: MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
val* var7 /* : MClass */;
val* var9 /* : MClass */;
val* var10 /* : MClassKind */;
val* var12 /* : MClassKind */;
val* var_k /* var k: MClassKind */;
short int var13 /* : Bool */;
val* var14 /* : Sys */;
val* var15 /* : MClassKind */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
short int var21 /* : Bool */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__model__MType__undecorate]))(var1); /* undecorate on <var1:MType>*/
}
var_t = var4;
/* <var_t:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_t) on <var_t:MType(MClassType)> */
var9 = var_t->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_t:MType(MClassType)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var7) on <var7:MClass> */
var12 = var7->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var7:MClass> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_k = var10;
var14 = glob_sys;
{
var15 = nit__model___standard__Sys___interface_kind(var14);
}
{
{ /* Inline kernel#Object#== (var_k,var15) on <var_k:MClassKind> */
var_other = var15;
{
{ /* Inline kernel#Object#is_same_instance (var_k,var_other) on <var_k:MClassKind> */
var20 = var_k == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ = var16;
if (var16){
var13 = var_;
} else {
{
var21 = nit__abstract_compiler___MClassType___MType__is_c_primitive(var_t);
}
var13 = var21;
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#maybe_null for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int nit___nit__SeparateCompilerVisitor___maybe_null(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_t /* var t: MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_t = var1;
/* <var_t:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
var4 = var_;
} else {
/* <var_t:MType> isa MNullType */
cltype7 = type_nit__MNullType.color;
idtype8 = type_nit__MNullType.id;
if(cltype7 >= var_t->type->table_size) {
var6 = 0;
} else {
var6 = var_t->type->type_table[cltype7] == idtype8;
}
var4 = var6;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#array_instance for (self: SeparateCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : MModule */;
val* var2 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var3 /* : MModule */;
val* var4 /* : MClass */;
val* var_arrayclass /* var arrayclass: MClass */;
val* var5 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var6 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
long var24 /* : Int */;
long var26 /* : Int */;
val* var27 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
val* var28 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
long var_i /* var i: Int */;
long var29 /* : Int */;
long var31 /* : Int */;
long var_32 /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
val* var38 /* : MClassType */;
val* var39 /* : RuntimeVariable */;
val* var_r /* var r: RuntimeVariable */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
long var67 /* : Int */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
val* var72 /* : MClassDef */;
val* var74 /* : MClassDef */;
val* var75 /* : MClassType */;
val* var77 /* : MClassType */;
val* var78 /* : MMethod */;
val* var79 /* : Array[RuntimeVariable] */;
val* var_80 /* var : Array[RuntimeVariable] */;
val* var81 /* : nullable RuntimeVariable */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
var_array = p0;
var_elttype = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nit__model___MModule___native_array_class(var1);
}
var_nclass = var2;
{
var3 = nit___nit__AbstractCompilerVisitor___mmodule(self);
}
{
var4 = nit__model___MModule___array_class(var3);
}
var_arrayclass = var4;
var5 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___with_capacity(var5, 1l); /* Direct call array#Array#with_capacity on <var5:Array[MType]>*/
}
var_ = var5;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var6 = nit___nit__MClass___get_mtype(var_arrayclass, var_);
}
var_arraytype = var6;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype); /* init_instance on <self:SeparateCompilerVisitor>*/
}
var_res = var7;
if (unlikely(varonce==NULL)) {
var8 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "{ /* ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 5l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " = array_instance Array[";
var16 = standard___standard__NativeString___to_s_with_length(var15, 24l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var8)->values[2]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "] */";
var20 = standard___standard__NativeString___to_s_with_length(var19, 4l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var8)->values[4]=var18;
} else {
var8 = varonce;
varonce = NULL;
}
{
var21 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var8)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_standard__string__Object__to_s]))(var_elttype); /* to_s on <var_elttype:MType>*/
}
((struct instance_standard__NativeArray*)var8)->values[3]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
nit___nit__AbstractCompilerVisitor___add(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var26 = var_array->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nit___nit__AbstractCompilerVisitor___int_instance(self, var24);
}
var_length = var27;
{
var28 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_elttype, var_length); /* native_array_instance on <self:SeparateCompilerVisitor>*/
}
var_nat = var28;
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var31 = var_array->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_32 = var29;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_32) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_32:Int> isa OTHER */
/* <var_32:Int> isa OTHER */
var35 = 1; /* easy <var_32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var36 = var_i < var_32;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
var37 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
{
var38 = nit___nit__AbstractCompilerVisitor___object_type(self);
}
{
var39 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var37, var38);
}
var_r = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "((struct instance_";
var45 = standard___standard__NativeString___to_s_with_length(var44, 18l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "*)";
var49 = standard___standard__NativeString___to_s_with_length(var48, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[2]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ")->values[";
var53 = standard___standard__NativeString___to_s_with_length(var52, 10l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var41)->values[4]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "] = (val*) ";
var57 = standard___standard__NativeString___to_s_with_length(var56, 11l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var41)->values[6]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ";";
var61 = standard___standard__NativeString___to_s_with_length(var60, 1l);
var59 = var61;
varonce58 = var59;
}
((struct instance_standard__NativeArray*)var41)->values[8]=var59;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
var62 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_nclass);
}
((struct instance_standard__NativeArray*)var41)->values[1]=var62;
{
var63 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_standard__string__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var41)->values[3]=var63;
var64 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var41)->values[5]=var64;
{
var65 = ((val*(*)(val* self))(var_r->class->vft[COLOR_standard__string__Object__to_s]))(var_r); /* to_s on <var_r:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var41)->values[7]=var65;
{
var66 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nit___nit__AbstractCompilerVisitor___add(self, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var67 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var67;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "with_native";
var71 = standard___standard__NativeString___to_s_with_length(var70, 11l);
var69 = var71;
varonce68 = var69;
}
{
{ /* Inline model#MClass#intro (var_arrayclass) on <var_arrayclass:MClass> */
var74 = var_arrayclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_arrayclass:MClass> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var72) on <var72:MClassDef> */
var77 = var72->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var72:MClassDef> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = nit___nit__AbstractCompilerVisitor___get_property(self, var69, var75);
}
var79 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var79, 3l); /* Direct call array#Array#with_capacity on <var79:Array[RuntimeVariable]>*/
}
var_80 = var79;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_80, var_res); /* Direct call array#AbstractArray#push on <var_80:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_80, var_nat); /* Direct call array#AbstractArray#push on <var_80:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_80, var_length); /* Direct call array#AbstractArray#push on <var_80:Array[RuntimeVariable]>*/
}
{
var81 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var78, var_80);
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "}";
var85 = standard___standard__NativeString___to_s_with_length(var84, 1l);
var83 = var85;
varonce82 = var83;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var83); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
