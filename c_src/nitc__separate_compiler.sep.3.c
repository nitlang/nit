#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler$SeparateCompiler$display_stats for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionBool */;
val* var21 /* : OptionBool */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var_tc /* var tc: ToolContext */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
val* var39 /* : ModelBuilder */;
val* var41 /* : ModelBuilder */;
long var42 /* : Int */;
long var44 /* : Int */;
val* var45 /* : ModelBuilder */;
val* var47 /* : ModelBuilder */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var54 /* : Int */;
val* var55 /* : ModelBuilder */;
val* var57 /* : ModelBuilder */;
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var_nb_invok_total /* var nb_invok_total: Int */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var81 /* : NativeArray[String] */;
static val* varonce80;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
val* var106 /* : ModelBuilder */;
val* var108 /* : ModelBuilder */;
long var109 /* : Int */;
long var111 /* : Int */;
val* var112 /* : String */;
val* var113 /* : Sys */;
val* var114 /* : ModelBuilder */;
val* var116 /* : ModelBuilder */;
long var117 /* : Int */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var123 /* : NativeArray[String] */;
static val* varonce122;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Bool */;
val* var131 /* : nullable Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Bool */;
val* var139 /* : nullable Bool */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Bool */;
val* var147 /* : nullable Bool */;
val* var148 /* : ModelBuilder */;
val* var150 /* : ModelBuilder */;
long var151 /* : Int */;
long var153 /* : Int */;
val* var154 /* : String */;
val* var155 /* : Sys */;
val* var156 /* : ModelBuilder */;
val* var158 /* : ModelBuilder */;
long var159 /* : Int */;
long var161 /* : Int */;
val* var162 /* : String */;
val* var163 /* : String */;
val* var165 /* : NativeArray[String] */;
static val* varonce164;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : nullable Int */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Bool */;
val* var173 /* : nullable Bool */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : CString */;
val* var177 /* : String */;
val* var178 /* : nullable Int */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Bool */;
val* var181 /* : nullable Bool */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Int */;
val* var188 /* : nullable Bool */;
val* var189 /* : nullable Bool */;
val* var190 /* : ModelBuilder */;
val* var192 /* : ModelBuilder */;
long var193 /* : Int */;
long var195 /* : Int */;
val* var196 /* : String */;
val* var197 /* : Sys */;
val* var198 /* : ModelBuilder */;
val* var200 /* : ModelBuilder */;
long var201 /* : Int */;
long var203 /* : Int */;
val* var204 /* : String */;
val* var205 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats]))(self); /* display_stats on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_tables_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 60);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts$Option$value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((long)(var9)>>2);
if (var12){
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__separate_compiler__SeparateCompiler__display_sizes]))(self); /* display_sizes on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_isset_checks_metrics (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts$Option$value (var19) on <var19:OptionBool> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionBool> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = (short int)((long)(var22)>>2);
if (var25){
{
nitc___nitc__SeparateCompiler___display_isset_checks(self); /* Direct call separate_compiler$SeparateCompiler$display_isset_checks on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_tc = var29;
if (likely(varonce!=NULL)) {
var32 = varonce;
} else {
var33 = "# implementation of method invocation";
var35 = (val*)(37l<<2|1);
var36 = (val*)(37l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce = var32;
}
{
nitc___nitc__ToolContext___info(var_tc, var32, 2l); /* Direct call toolcontext$ToolContext$info on <var_tc:ToolContext>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_tables (var39) on <var39:ModelBuilder> */
var44 = var39->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var39:ModelBuilder> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var47 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_direct (var45) on <var45:ModelBuilder> */
var50 = var45->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var45:ModelBuilder> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var42,var48) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var53 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var42 + var48;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_inline (var55) on <var55:ModelBuilder> */
var60 = var55->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var55:ModelBuilder> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var51,var58) on <var51:Int> */
/* Covariant cast for argument 0 (i) <var58:Int> isa OTHER */
/* <var58:Int> isa OTHER */
var63 = 1; /* easy <var58:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var51 + var58;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_nb_invok_total = var61;
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "total number of invocations: ";
var74 = (val*)(29l<<2|1);
var75 = (val*)(29l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
} else {
var69 = varonce68;
varonce68 = NULL;
}
var78 = core__flat___Int___core__abstract_text__Object__to_s(var_nb_invok_total);
((struct instance_core__NativeArray*)var69)->values[1]=var78;
{
var79 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
nitc___nitc__ToolContext___info(var_tc, var79, 2l); /* Direct call toolcontext$ToolContext$info on <var_tc:ToolContext>*/
}
if (unlikely(varonce80==NULL)) {
var81 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "invocations by VFT send:     ";
var86 = (val*)(29l<<2|1);
var87 = (val*)(29l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var81)->values[0]=var83;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " (";
var94 = (val*)(2l<<2|1);
var95 = (val*)(2l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var81)->values[2]=var91;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "%)";
var102 = (val*)(2l<<2|1);
var103 = (val*)(2l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var81)->values[4]=var99;
} else {
var81 = varonce80;
varonce80 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var108 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var108 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_tables (var106) on <var106:ModelBuilder> */
var111 = var106->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var106:ModelBuilder> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
var112 = core__flat___Int___core__abstract_text__Object__to_s(var109);
((struct instance_core__NativeArray*)var81)->values[1]=var112;
var113 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var116 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var116 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_tables (var114) on <var114:ModelBuilder> */
var119 = var114->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var114:ModelBuilder> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = counter___core__Sys___div(var113, var117, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var81)->values[3]=var120;
{
var121 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var81); /* native_to_s on <var81:NativeArray[String]>*/
}
varonce80 = var81;
{
nitc___nitc__ToolContext___info(var_tc, var121, 2l); /* Direct call toolcontext$ToolContext$info on <var_tc:ToolContext>*/
}
if (unlikely(varonce122==NULL)) {
var123 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "invocations by direct call:  ";
var128 = (val*)(29l<<2|1);
var129 = (val*)(29l<<2|1);
var130 = (val*)((long)(0)<<2|3);
var131 = (val*)((long)(0)<<2|3);
var127 = core__flat___CString___to_s_unsafe(var126, var128, var129, var130, var131);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var123)->values[0]=var125;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = " (";
var136 = (val*)(2l<<2|1);
var137 = (val*)(2l<<2|1);
var138 = (val*)((long)(0)<<2|3);
var139 = (val*)((long)(0)<<2|3);
var135 = core__flat___CString___to_s_unsafe(var134, var136, var137, var138, var139);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var123)->values[2]=var133;
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "%)";
var144 = (val*)(2l<<2|1);
var145 = (val*)(2l<<2|1);
var146 = (val*)((long)(0)<<2|3);
var147 = (val*)((long)(0)<<2|3);
var143 = core__flat___CString___to_s_unsafe(var142, var144, var145, var146, var147);
var141 = var143;
varonce140 = var141;
}
((struct instance_core__NativeArray*)var123)->values[4]=var141;
} else {
var123 = varonce122;
varonce122 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var150 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var150 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_direct (var148) on <var148:ModelBuilder> */
var153 = var148->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var148:ModelBuilder> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
var154 = core__flat___Int___core__abstract_text__Object__to_s(var151);
((struct instance_core__NativeArray*)var123)->values[1]=var154;
var155 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var158 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var158 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_direct (var156) on <var156:ModelBuilder> */
var161 = var156->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var156:ModelBuilder> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
var162 = counter___core__Sys___div(var155, var159, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var123)->values[3]=var162;
{
var163 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var123); /* native_to_s on <var123:NativeArray[String]>*/
}
varonce122 = var123;
{
nitc___nitc__ToolContext___info(var_tc, var163, 2l); /* Direct call toolcontext$ToolContext$info on <var_tc:ToolContext>*/
}
if (unlikely(varonce164==NULL)) {
var165 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = "invocations by inlining:     ";
var170 = (val*)(29l<<2|1);
var171 = (val*)(29l<<2|1);
var172 = (val*)((long)(0)<<2|3);
var173 = (val*)((long)(0)<<2|3);
var169 = core__flat___CString___to_s_unsafe(var168, var170, var171, var172, var173);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var165)->values[0]=var167;
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = " (";
var178 = (val*)(2l<<2|1);
var179 = (val*)(2l<<2|1);
var180 = (val*)((long)(0)<<2|3);
var181 = (val*)((long)(0)<<2|3);
var177 = core__flat___CString___to_s_unsafe(var176, var178, var179, var180, var181);
var175 = var177;
varonce174 = var175;
}
((struct instance_core__NativeArray*)var165)->values[2]=var175;
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "%)";
var186 = (val*)(2l<<2|1);
var187 = (val*)(2l<<2|1);
var188 = (val*)((long)(0)<<2|3);
var189 = (val*)((long)(0)<<2|3);
var185 = core__flat___CString___to_s_unsafe(var184, var186, var187, var188, var189);
var183 = var185;
varonce182 = var183;
}
((struct instance_core__NativeArray*)var165)->values[4]=var183;
} else {
var165 = varonce164;
varonce164 = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var192 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var192 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_inline (var190) on <var190:ModelBuilder> */
var195 = var190->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var190:ModelBuilder> */
var193 = var195;
RET_LABEL194:(void)0;
}
}
var196 = core__flat___Int___core__abstract_text__Object__to_s(var193);
((struct instance_core__NativeArray*)var165)->values[1]=var196;
var197 = glob_sys;
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (self) on <self:SeparateCompiler> */
var200 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var200 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
{ /* Inline separate_compiler$ModelBuilder$nb_invok_by_inline (var198) on <var198:ModelBuilder> */
var203 = var198->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var198:ModelBuilder> */
var201 = var203;
RET_LABEL202:(void)0;
}
}
{
var204 = counter___core__Sys___div(var197, var201, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var165)->values[3]=var204;
{
var205 = ((val*(*)(val* self))(var165->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var165); /* native_to_s on <var165:NativeArray[String]>*/
}
varonce164 = var165;
{
nitc___nitc__ToolContext___info(var_tc, var205, 2l); /* Direct call toolcontext$ToolContext$info on <var_tc:ToolContext>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$display_sizes for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___display_sizes(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : Sys */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
long var_total /* var total: Int */;
long var_holes /* var holes: Int */;
val* var17 /* : Map[MType, Array[nullable MType]] */;
val* var19 /* : Map[MType, Array[nullable MType]] */;
val* var_ /* var : Map[MType, Array[nullable MType]] */;
val* var20 /* : MapIterator[nullable Object, nullable Object] */;
val* var_21 /* var : MapIterator[MType, Array[nullable MType]] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var24 /* : nullable Object */;
val* var_table /* var table: Array[nullable MType] */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var31 /* : Int */;
val* var_32 /* var : Array[nullable MType] */;
val* var33 /* : IndexedIterator[nullable Object] */;
val* var_34 /* var : IndexedIterator[nullable MType] */;
short int var35 /* : Bool */;
val* var37 /* : nullable Object */;
val* var_e /* var e: nullable MType */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var52 /* : Sys */;
val* var54 /* : NativeArray[String] */;
static val* varonce53;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : Sys */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var83 /* : Sys */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : Map[MClassType, Array[nullable MType]] */;
val* var94 /* : Map[MClassType, Array[nullable MType]] */;
val* var_95 /* var : Map[MClassType, Array[nullable MType]] */;
val* var96 /* : MapIterator[nullable Object, nullable Object] */;
val* var_97 /* var : MapIterator[MClassType, Array[nullable MType]] */;
short int var98 /* : Bool */;
val* var100 /* : nullable Object */;
val* var_t101 /* var t: MClassType */;
val* var102 /* : nullable Object */;
val* var_table103 /* var table: Array[nullable MType] */;
long var104 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
val* var_114 /* var : Array[nullable MType] */;
val* var115 /* : IndexedIterator[nullable Object] */;
val* var_116 /* var : IndexedIterator[nullable MType] */;
short int var117 /* : Bool */;
val* var119 /* : nullable Object */;
val* var_e120 /* var e: nullable MType */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
long var127 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
long var133 /* : Int */;
val* var135 /* : Sys */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
val* var154 /* : String */;
val* var155 /* : String */;
val* var156 /* : String */;
val* var157 /* : Sys */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Bool */;
val* var165 /* : nullable Bool */;
val* var166 /* : Sys */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
val* var175 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var177 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_178 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var179 /* : MapIterator[nullable Object, nullable Object] */;
val* var_180 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var181 /* : Bool */;
val* var183 /* : nullable Object */;
val* var_t184 /* var t: MClass */;
val* var185 /* : nullable Object */;
val* var_table186 /* var table: Array[nullable MPropDef] */;
long var187 /* : Int */;
long var189 /* : Int */;
long var190 /* : Int */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
const char* var_class_name195;
long var196 /* : Int */;
val* var_197 /* var : Array[nullable MPropDef] */;
val* var198 /* : IndexedIterator[nullable Object] */;
val* var_199 /* var : IndexedIterator[nullable MPropDef] */;
short int var200 /* : Bool */;
val* var202 /* : nullable Object */;
val* var_e203 /* var e: nullable MPropDef */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
long var210 /* : Int */;
short int var212 /* : Bool */;
int cltype213;
int idtype214;
const char* var_class_name215;
long var216 /* : Int */;
val* var218 /* : Sys */;
val* var220 /* : NativeArray[String] */;
static val* varonce219;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Bool */;
val* var228 /* : nullable Bool */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : CString */;
val* var232 /* : String */;
val* var233 /* : nullable Int */;
val* var234 /* : nullable Int */;
val* var235 /* : nullable Bool */;
val* var236 /* : nullable Bool */;
val* var237 /* : String */;
val* var238 /* : String */;
val* var239 /* : String */;
val* var240 /* : Sys */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
val* var249 /* : Sys */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Bool */;
val* var257 /* : nullable Bool */;
val* var258 /* : Map[MClass, Array[nullable MProperty]] */;
val* var260 /* : Map[MClass, Array[nullable MProperty]] */;
val* var_261 /* var : Map[MClass, Array[nullable MProperty]] */;
val* var262 /* : MapIterator[nullable Object, nullable Object] */;
val* var_263 /* var : MapIterator[MClass, Array[nullable MProperty]] */;
short int var264 /* : Bool */;
val* var266 /* : nullable Object */;
val* var_t267 /* var t: MClass */;
val* var268 /* : nullable Object */;
val* var_table269 /* var table: Array[nullable MProperty] */;
long var270 /* : Int */;
long var272 /* : Int */;
long var273 /* : Int */;
short int var275 /* : Bool */;
int cltype276;
int idtype277;
const char* var_class_name278;
long var279 /* : Int */;
val* var_280 /* var : Array[nullable MProperty] */;
val* var281 /* : IndexedIterator[nullable Object] */;
val* var_282 /* var : IndexedIterator[nullable MProperty] */;
short int var283 /* : Bool */;
val* var285 /* : nullable Object */;
val* var_e286 /* var e: nullable MProperty */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
short int var292 /* : Bool */;
long var293 /* : Int */;
short int var295 /* : Bool */;
int cltype296;
int idtype297;
const char* var_class_name298;
long var299 /* : Int */;
val* var301 /* : Sys */;
val* var303 /* : NativeArray[String] */;
static val* varonce302;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : nullable Int */;
val* var309 /* : nullable Int */;
val* var310 /* : nullable Bool */;
val* var311 /* : nullable Bool */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : CString */;
val* var315 /* : String */;
val* var316 /* : nullable Int */;
val* var317 /* : nullable Int */;
val* var318 /* : nullable Bool */;
val* var319 /* : nullable Bool */;
val* var320 /* : String */;
val* var321 /* : String */;
val* var322 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# size of subtyping tables";
var4 = (val*)(26l<<2|1);
var5 = (val*)(26l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
core__file___Sys___print(var, var1); /* Direct call file$Sys$print on <var:Sys>*/
}
var8 = glob_sys;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "\ttotal \tholes";
var13 = (val*)(13l<<2|1);
var14 = (val*)(13l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
{
core__file___Sys___print(var8, var10); /* Direct call file$Sys$print on <var8:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler$SeparateCompiler$type_tables (self) on <self:SeparateCompiler> */
var19 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1071);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:Map[MType, Array[nullable MType]]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_21); /* is_ok on <var_21:MapIterator[MType, Array[nullable MType]]>*/
}
if (var22){
} else {
goto BREAK_label;
}
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_21); /* key on <var_21:MapIterator[MType, Array[nullable MType]]>*/
}
var_t = var23;
{
var24 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_21); /* item on <var_21:MapIterator[MType, Array[nullable MType]]>*/
}
var_table = var24;
{
{ /* Inline array$AbstractArrayRead$length (var_table) on <var_table:Array[nullable MType]> */
var27 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_total,var25) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var30 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var31 = var_total + var25;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_total = var28;
var_32 = var_table;
{
var33 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_32);
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:IndexedIterator[nullable MType]>*/
}
if (var35){
} else {
goto BREAK_label36;
}
{
var37 = ((val*(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:IndexedIterator[nullable MType]>*/
}
var_e = var37;
if (var_e == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e,((val*)NULL)) on <var_e:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e,var_other) on <var_e:nullable MType(MType)> */
var43 = var_e == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline kernel$Int$+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_holes + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_holes = var44;
} else {
}
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:IndexedIterator[nullable MType]>*/
}
}
BREAK_label36: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:IndexedIterator[nullable MType]>*/
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_21); /* next on <var_21:MapIterator[MType, Array[nullable MType]]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_21) on <var_21:MapIterator[MType, Array[nullable MType]]> */
RET_LABEL51:(void)0;
}
}
var52 = glob_sys;
if (unlikely(varonce53==NULL)) {
var54 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "\t";
var59 = (val*)(1l<<2|1);
var60 = (val*)(1l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var54)->values[0]=var56;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "\t";
var67 = (val*)(1l<<2|1);
var68 = (val*)(1l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var54)->values[2]=var64;
} else {
var54 = varonce53;
varonce53 = NULL;
}
var71 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var54)->values[1]=var71;
var72 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var54)->values[3]=var72;
{
var73 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
{
core__file___Sys___print(var52, var73); /* Direct call file$Sys$print on <var52:Sys>*/
}
var74 = glob_sys;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "# size of resolution tables";
var79 = (val*)(27l<<2|1);
var80 = (val*)(27l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
core__file___Sys___print(var74, var76); /* Direct call file$Sys$print on <var74:Sys>*/
}
var83 = glob_sys;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "\ttotal \tholes";
var88 = (val*)(13l<<2|1);
var89 = (val*)(13l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
{
core__file___Sys___print(var83, var85); /* Direct call file$Sys$print on <var83:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler$SeparateCompiler$resolution_tables (self) on <self:SeparateCompiler> */
var94 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1072);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_95 = var92;
{
var96 = ((val*(*)(val* self))((((long)var_95&3)?class_info[((long)var_95&3)]:var_95->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_95); /* iterator on <var_95:Map[MClassType, Array[nullable MType]]>*/
}
var_97 = var96;
for(;;) {
{
var98 = ((short int(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_97); /* is_ok on <var_97:MapIterator[MClassType, Array[nullable MType]]>*/
}
if (var98){
} else {
goto BREAK_label99;
}
{
var100 = ((val*(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_97); /* key on <var_97:MapIterator[MClassType, Array[nullable MType]]>*/
}
var_t101 = var100;
{
var102 = ((val*(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_97); /* item on <var_97:MapIterator[MClassType, Array[nullable MType]]>*/
}
var_table103 = var102;
{
{ /* Inline array$AbstractArrayRead$length (var_table103) on <var_table103:Array[nullable MType]> */
var106 = var_table103->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table103:Array[nullable MType]> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_total,var104) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var104:Int> isa OTHER */
/* <var104:Int> isa OTHER */
var109 = 1; /* easy <var104:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var113 = var_total + var104;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var_total = var107;
var_114 = var_table103;
{
var115 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_114);
}
var_116 = var115;
for(;;) {
{
var117 = ((short int(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_116); /* is_ok on <var_116:IndexedIterator[nullable MType]>*/
}
if (var117){
} else {
goto BREAK_label118;
}
{
var119 = ((val*(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_116); /* item on <var_116:IndexedIterator[nullable MType]>*/
}
var_e120 = var119;
if (var_e120 == NULL) {
var121 = 1; /* is null */
} else {
var121 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e120,((val*)NULL)) on <var_e120:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e120,var_other) on <var_e120:nullable MType(MType)> */
var126 = var_e120 == var_other;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
{
{ /* Inline kernel$Int$+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var129 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var133 = var_holes + 1l;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var_holes = var127;
} else {
}
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_116); /* next on <var_116:IndexedIterator[nullable MType]>*/
}
}
BREAK_label118: (void)0;
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_116); /* finish on <var_116:IndexedIterator[nullable MType]>*/
}
{
((void(*)(val* self))((((long)var_97&3)?class_info[((long)var_97&3)]:var_97->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_97); /* next on <var_97:MapIterator[MClassType, Array[nullable MType]]>*/
}
}
BREAK_label99: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_97) on <var_97:MapIterator[MClassType, Array[nullable MType]]> */
RET_LABEL134:(void)0;
}
}
var135 = glob_sys;
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "\t";
var142 = (val*)(1l<<2|1);
var143 = (val*)(1l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[0]=var139;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "\t";
var150 = (val*)(1l<<2|1);
var151 = (val*)(1l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var137)->values[2]=var147;
} else {
var137 = varonce136;
varonce136 = NULL;
}
var154 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var137)->values[1]=var154;
var155 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var137)->values[3]=var155;
{
var156 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
core__file___Sys___print(var135, var156); /* Direct call file$Sys$print on <var135:Sys>*/
}
var157 = glob_sys;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "# size of methods tables";
var162 = (val*)(24l<<2|1);
var163 = (val*)(24l<<2|1);
var164 = (val*)((long)(0)<<2|3);
var165 = (val*)((long)(0)<<2|3);
var161 = core__flat___CString___to_s_unsafe(var160, var162, var163, var164, var165);
var159 = var161;
varonce158 = var159;
}
{
core__file___Sys___print(var157, var159); /* Direct call file$Sys$print on <var157:Sys>*/
}
var166 = glob_sys;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "\ttotal \tholes";
var171 = (val*)(13l<<2|1);
var172 = (val*)(13l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
{
core__file___Sys___print(var166, var168); /* Direct call file$Sys$print on <var166:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler$SeparateCompiler$method_tables (self) on <self:SeparateCompiler> */
var177 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1073);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
var_178 = var175;
{
var179 = ((val*(*)(val* self))((((long)var_178&3)?class_info[((long)var_178&3)]:var_178->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_178); /* iterator on <var_178:Map[MClass, Array[nullable MPropDef]]>*/
}
var_180 = var179;
for(;;) {
{
var181 = ((short int(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_180); /* is_ok on <var_180:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
if (var181){
} else {
goto BREAK_label182;
}
{
var183 = ((val*(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_180); /* key on <var_180:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_t184 = var183;
{
var185 = ((val*(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_180); /* item on <var_180:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_table186 = var185;
{
{ /* Inline array$AbstractArrayRead$length (var_table186) on <var_table186:Array[nullable MPropDef]> */
var189 = var_table186->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table186:Array[nullable MPropDef]> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_total,var187) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var187:Int> isa OTHER */
/* <var187:Int> isa OTHER */
var192 = 1; /* easy <var187:Int> isa OTHER*/
if (unlikely(!var192)) {
var_class_name195 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name195);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var196 = var_total + var187;
var190 = var196;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
var_total = var190;
var_197 = var_table186;
{
var198 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_197);
}
var_199 = var198;
for(;;) {
{
var200 = ((short int(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_199); /* is_ok on <var_199:IndexedIterator[nullable MPropDef]>*/
}
if (var200){
} else {
goto BREAK_label201;
}
{
var202 = ((val*(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_199); /* item on <var_199:IndexedIterator[nullable MPropDef]>*/
}
var_e203 = var202;
if (var_e203 == NULL) {
var204 = 1; /* is null */
} else {
var204 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e203,((val*)NULL)) on <var_e203:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e203,var_other) on <var_e203:nullable MPropDef(MPropDef)> */
var209 = var_e203 == var_other;
var207 = var209;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
}
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
var204 = var205;
}
if (var204){
{
{ /* Inline kernel$Int$+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var212 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var212)) {
var_class_name215 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name215);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var216 = var_holes + 1l;
var210 = var216;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var_holes = var210;
} else {
}
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_199); /* next on <var_199:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label201: (void)0;
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_199); /* finish on <var_199:IndexedIterator[nullable MPropDef]>*/
}
{
((void(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_180); /* next on <var_180:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
}
BREAK_label182: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_180) on <var_180:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL217:(void)0;
}
}
var218 = glob_sys;
if (unlikely(varonce219==NULL)) {
var220 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "\t";
var225 = (val*)(1l<<2|1);
var226 = (val*)(1l<<2|1);
var227 = (val*)((long)(0)<<2|3);
var228 = (val*)((long)(0)<<2|3);
var224 = core__flat___CString___to_s_unsafe(var223, var225, var226, var227, var228);
var222 = var224;
varonce221 = var222;
}
((struct instance_core__NativeArray*)var220)->values[0]=var222;
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "\t";
var233 = (val*)(1l<<2|1);
var234 = (val*)(1l<<2|1);
var235 = (val*)((long)(0)<<2|3);
var236 = (val*)((long)(0)<<2|3);
var232 = core__flat___CString___to_s_unsafe(var231, var233, var234, var235, var236);
var230 = var232;
varonce229 = var230;
}
((struct instance_core__NativeArray*)var220)->values[2]=var230;
} else {
var220 = varonce219;
varonce219 = NULL;
}
var237 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var220)->values[1]=var237;
var238 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var220)->values[3]=var238;
{
var239 = ((val*(*)(val* self))(var220->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var220); /* native_to_s on <var220:NativeArray[String]>*/
}
varonce219 = var220;
{
core__file___Sys___print(var218, var239); /* Direct call file$Sys$print on <var218:Sys>*/
}
var240 = glob_sys;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "# size of attributes tables";
var245 = (val*)(27l<<2|1);
var246 = (val*)(27l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
{
core__file___Sys___print(var240, var242); /* Direct call file$Sys$print on <var240:Sys>*/
}
var249 = glob_sys;
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "\ttotal \tholes";
var254 = (val*)(13l<<2|1);
var255 = (val*)(13l<<2|1);
var256 = (val*)((long)(0)<<2|3);
var257 = (val*)((long)(0)<<2|3);
var253 = core__flat___CString___to_s_unsafe(var252, var254, var255, var256, var257);
var251 = var253;
varonce250 = var251;
}
{
core__file___Sys___print(var249, var251); /* Direct call file$Sys$print on <var249:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler$SeparateCompiler$attr_tables (self) on <self:SeparateCompiler> */
var260 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var260 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1074);
fatal_exit(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
var_261 = var258;
{
var262 = ((val*(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_261); /* iterator on <var_261:Map[MClass, Array[nullable MProperty]]>*/
}
var_263 = var262;
for(;;) {
{
var264 = ((short int(*)(val* self))((((long)var_263&3)?class_info[((long)var_263&3)]:var_263->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_263); /* is_ok on <var_263:MapIterator[MClass, Array[nullable MProperty]]>*/
}
if (var264){
} else {
goto BREAK_label265;
}
{
var266 = ((val*(*)(val* self))((((long)var_263&3)?class_info[((long)var_263&3)]:var_263->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_263); /* key on <var_263:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_t267 = var266;
{
var268 = ((val*(*)(val* self))((((long)var_263&3)?class_info[((long)var_263&3)]:var_263->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_263); /* item on <var_263:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_table269 = var268;
{
{ /* Inline array$AbstractArrayRead$length (var_table269) on <var_table269:Array[nullable MProperty]> */
var272 = var_table269->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table269:Array[nullable MProperty]> */
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_total,var270) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var270:Int> isa OTHER */
/* <var270:Int> isa OTHER */
var275 = 1; /* easy <var270:Int> isa OTHER*/
if (unlikely(!var275)) {
var_class_name278 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name278);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var279 = var_total + var270;
var273 = var279;
goto RET_LABEL274;
RET_LABEL274:(void)0;
}
}
var_total = var273;
var_280 = var_table269;
{
var281 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_280);
}
var_282 = var281;
for(;;) {
{
var283 = ((short int(*)(val* self))((((long)var_282&3)?class_info[((long)var_282&3)]:var_282->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_282); /* is_ok on <var_282:IndexedIterator[nullable MProperty]>*/
}
if (var283){
} else {
goto BREAK_label284;
}
{
var285 = ((val*(*)(val* self))((((long)var_282&3)?class_info[((long)var_282&3)]:var_282->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_282); /* item on <var_282:IndexedIterator[nullable MProperty]>*/
}
var_e286 = var285;
if (var_e286 == NULL) {
var287 = 1; /* is null */
} else {
var287 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e286,((val*)NULL)) on <var_e286:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e286,var_other) on <var_e286:nullable MProperty(MProperty)> */
var292 = var_e286 == var_other;
var290 = var292;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
var288 = var290;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
var287 = var288;
}
if (var287){
{
{ /* Inline kernel$Int$+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var295 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var295)) {
var_class_name298 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name298);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var299 = var_holes + 1l;
var293 = var299;
goto RET_LABEL294;
RET_LABEL294:(void)0;
}
}
var_holes = var293;
} else {
}
{
((void(*)(val* self))((((long)var_282&3)?class_info[((long)var_282&3)]:var_282->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_282); /* next on <var_282:IndexedIterator[nullable MProperty]>*/
}
}
BREAK_label284: (void)0;
{
((void(*)(val* self))((((long)var_282&3)?class_info[((long)var_282&3)]:var_282->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_282); /* finish on <var_282:IndexedIterator[nullable MProperty]>*/
}
{
((void(*)(val* self))((((long)var_263&3)?class_info[((long)var_263&3)]:var_263->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_263); /* next on <var_263:MapIterator[MClass, Array[nullable MProperty]]>*/
}
}
BREAK_label265: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_263) on <var_263:MapIterator[MClass, Array[nullable MProperty]]> */
RET_LABEL300:(void)0;
}
}
var301 = glob_sys;
if (unlikely(varonce302==NULL)) {
var303 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "\t";
var308 = (val*)(1l<<2|1);
var309 = (val*)(1l<<2|1);
var310 = (val*)((long)(0)<<2|3);
var311 = (val*)((long)(0)<<2|3);
var307 = core__flat___CString___to_s_unsafe(var306, var308, var309, var310, var311);
var305 = var307;
varonce304 = var305;
}
((struct instance_core__NativeArray*)var303)->values[0]=var305;
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "\t";
var316 = (val*)(1l<<2|1);
var317 = (val*)(1l<<2|1);
var318 = (val*)((long)(0)<<2|3);
var319 = (val*)((long)(0)<<2|3);
var315 = core__flat___CString___to_s_unsafe(var314, var316, var317, var318, var319);
var313 = var315;
varonce312 = var313;
}
((struct instance_core__NativeArray*)var303)->values[2]=var313;
} else {
var303 = varonce302;
varonce302 = NULL;
}
var320 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var303)->values[1]=var320;
var321 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var303)->values[3]=var321;
{
var322 = ((val*(*)(val* self))(var303->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var303); /* native_to_s on <var303:NativeArray[String]>*/
}
varonce302 = var303;
{
core__file___Sys___print(var301, var322); /* Direct call file$Sys$print on <var301:Sys>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$isset_checks_count for (self: SeparateCompiler): Int */
long nitc___nitc__SeparateCompiler___isset_checks_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompiler$isset_checks_count= for (self: SeparateCompiler, Int) */
void nitc___nitc__SeparateCompiler___isset_checks_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l = p0; /* _isset_checks_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$attr_read_count for (self: SeparateCompiler): Int */
long nitc___nitc__SeparateCompiler___attr_read_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompiler$attr_read_count= for (self: SeparateCompiler, Int) */
void nitc___nitc__SeparateCompiler___attr_read_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l = p0; /* _attr_read_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$display_isset_checks for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___display_isset_checks(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : Sys */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : Sys */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
val* var33 /* : Sys */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
long var44 /* : Int */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# total number of compiled attribute reads";
var4 = (val*)(42l<<2|1);
var5 = (val*)(42l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
core__file___Sys___print(var, var1); /* Direct call file$Sys$print on <var:Sys>*/
}
var8 = glob_sys;
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\t";
var15 = (val*)(1l<<2|1);
var16 = (val*)(1l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
} else {
var10 = varonce9;
varonce9 = NULL;
}
{
{ /* Inline separate_compiler$SeparateCompiler$attr_read_count (self) on <self:SeparateCompiler> */
var21 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = core__flat___Int___core__abstract_text__Object__to_s(var19);
((struct instance_core__NativeArray*)var10)->values[1]=var22;
{
var23 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
core__file___Sys___print(var8, var23); /* Direct call file$Sys$print on <var8:Sys>*/
}
var24 = glob_sys;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "# total number of compiled isset-checks";
var29 = (val*)(39l<<2|1);
var30 = (val*)(39l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
{
core__file___Sys___print(var24, var26); /* Direct call file$Sys$print on <var24:Sys>*/
}
var33 = glob_sys;
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "\t";
var40 = (val*)(1l<<2|1);
var41 = (val*)(1l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
{ /* Inline separate_compiler$SeparateCompiler$isset_checks_count (self) on <self:SeparateCompiler> */
var46 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = core__flat___Int___core__abstract_text__Object__to_s(var44);
((struct instance_core__NativeArray*)var35)->values[1]=var47;
{
var48 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
core__file___Sys___print(var33, var48); /* Direct call file$Sys$print on <var33:Sys>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$compile_nitni_structs for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompiler$header (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 599);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "struct nitni_instance {\n\tstruct nitni_instance *next,\n\t\t*prev; /* adjacent global references in global list */\n\tint count; /* number of time this global reference has been marked */\n\tstruct instance *value;\n};\n";
var6 = (val*)(210l<<2|1);
var7 = (val*)(210l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler$CodeWriter$add_decl on <var:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs]))(self); /* compile_nitni_structs on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompiler$finalize_ffi_for_module for (self: SeparateCompiler, MModule) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_old_module /* var old_module: MModule */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_old_module = var;
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (self,var_mmodule) on <self:SeparateCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_mmodule; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module]))(self, p0); /* finalize_ffi_for_module on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (self,var_old_module) on <self:SeparateCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_old_module; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$adapt_signature for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var22 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var23 /* : MType */;
val* var25 /* : MType */;
val* var26 /* : String */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : MClassType */;
val* var35 /* : MClassType */;
val* var36 /* : String */;
short int var37 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var42 /* : MClassDef */;
val* var44 /* : MClassDef */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : MClassType */;
val* var50 /* : MClassType */;
val* var51 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var52 /* : Int */;
long var_ /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var56 /* : Bool */;
val* var57 /* : Array[MParameter] */;
val* var59 /* : Array[MParameter] */;
val* var60 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var61 /* : MType */;
val* var63 /* : MType */;
val* var_t /* var t: MType */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
val* var74 /* : nullable Object */;
val* var75 /* : MType */;
val* var77 /* : MType */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
val* var92 /* : nullable Object */;
val* var93 /* : RuntimeVariable */;
long var94 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model$MMethodDef$msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1177);
fatal_exit(1);
} else {
var21 = nitc___nitc__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
var22 = core___core__SequenceRead___Collection__first(var_args);
}
var_recv = var22;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_recv) on <var_recv:RuntimeVariable> */
var25 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))(var23->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var23); /* ctype on <var23:MType>*/
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var29 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var30:MClass> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nitc__abstract_compiler___MClassType___MType__ctype(var33);
}
{
{ /* Inline kernel$Object$!= (var26,var36) on <var26:String> */
var_other = var36;
{
var39 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:String>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var41 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var44 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var42) on <var42:MClassDef> */
var47 = var42->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var42:MClassDef> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var45) on <var45:MClass> */
var50 = var45->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var45:MClass> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var41, var48);
}
{
core___core__Sequence___first_61d(var_args, var51); /* Direct call abstract_collection$Sequence$first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var52 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var52;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var55 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var56 = var_i < var_;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var59 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var57, var_i);
}
var_mp = var60;
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var63 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_t = var61;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var66 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_i + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
var74 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var67);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var74) on <var74:nullable Object(RuntimeVariable)> */
var77 = var74->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var74:nullable Object(RuntimeVariable)> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_t = var75;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_i + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var87 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var91 = var_i + 1l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
var92 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var85);
}
{
var93 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var92, var_t);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var78, var93); /* Direct call array$Array$[]= on <var_args:Array[RuntimeVariable]>*/
}
{
var94 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var94;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$unbox_signature_extern for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var22 /* : Bool */;
val* var23 /* : MProperty */;
val* var25 /* : MProperty */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClass */;
val* var39 /* : MClass */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var44 /* : Int */;
long var_45 /* var : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var49 /* : Bool */;
val* var50 /* : Array[MParameter] */;
val* var52 /* : Array[MParameter] */;
val* var53 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_t /* var t: MType */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
val* var67 /* : nullable Object */;
val* var68 /* : MType */;
val* var70 /* : MType */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
long var74 /* : Int */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
val* var88 /* : nullable Object */;
val* var89 /* : RuntimeVariable */;
long var90 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model$MMethodDef$msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1194);
fatal_exit(1);
} else {
var21 = nitc___nitc__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
{ /* Inline model$MPropDef$mproperty (var_m) on <var_m:MMethodDef> */
var25 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var23) on <var23:MProperty(MMethod)> */
var28 = var23->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var23:MProperty(MMethod)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = !var26;
var_ = var29;
if (var29){
{
{ /* Inline model$MMethodDef$is_extern (var_m) on <var_m:MMethodDef> */
var32 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var33 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model$MPropDef$mclassdef (var_m) on <var_m:MMethodDef> */
var36 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var37) on <var37:MClass> */
var42 = var37->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var37:MClass> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var33, var40); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
core___core__Sequence___first_61d(var_args, var43); /* Direct call abstract_collection$Sequence$first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var44 = nitc___nitc__MSignature___arity(var_msignature);
}
var_45 = var44;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_45) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_45:Int> isa OTHER */
/* <var_45:Int> isa OTHER */
var48 = 1; /* easy <var_45:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_i < var_45;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var52 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var50, var_i);
}
var_mp = var53;
{
{ /* Inline model$MParameter$mtype (var_mp) on <var_mp:MParameter> */
var56 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_t = var54;
{
{ /* Inline model$MParameter$is_vararg (var_mp) on <var_mp:MParameter> */
var59 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_i + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var67 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var60);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var67) on <var67:nullable Object(RuntimeVariable)> */
var70 = var67->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var67:nullable Object(RuntimeVariable)> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_t = var68;
} else {
}
{
{ /* Inline model$MMethodDef$is_extern (var_m) on <var_m:MMethodDef> */
var73 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var76 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var80 = var_i + 1l;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var83 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_i + 1l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
var88 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var81);
}
{
var89 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var88, var_t); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var74, var89); /* Direct call array$Array$[]= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
{
var90 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var90;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler$SeparateCompilerVisitor$autobox for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var12 /* : MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
short int var33 /* : Bool */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : RuntimeVariable */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
short int var64 /* : Bool */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : RuntimeVariable */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
short int var95 /* : Bool */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : RuntimeVariable */;
val* var118 /* : NativeArray[String] */;
static val* varonce117;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Bool */;
val* var142 /* : nullable Bool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Bool */;
val* var150 /* : nullable Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Bool */;
val* var158 /* : nullable Bool */;
val* var159 /* : String */;
val* var160 /* : String */;
val* var161 /* : MType */;
val* var163 /* : MType */;
val* var164 /* : String */;
val* var165 /* : String */;
val* var166 /* : String */;
val* var167 /* : RuntimeVariable */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : MType */;
val* var172 /* : MType */;
val* var173 /* : MType */;
val* var175 /* : MType */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
val* var181 /* : MType */;
val* var183 /* : MType */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
val* var187 /* : MType */;
val* var189 /* : MType */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : CString */;
val* var194 /* : String */;
val* var195 /* : nullable Int */;
val* var196 /* : nullable Int */;
val* var197 /* : nullable Bool */;
val* var198 /* : nullable Bool */;
short int var199 /* : Bool */;
val* var201 /* : NativeArray[String] */;
static val* varonce200;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : CString */;
val* var205 /* : String */;
val* var206 /* : nullable Int */;
val* var207 /* : nullable Int */;
val* var208 /* : nullable Bool */;
val* var209 /* : nullable Bool */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Bool */;
val* var217 /* : nullable Bool */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
val* var221 /* : MType */;
val* var223 /* : MType */;
val* var224 /* : String */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Int */;
val* var231 /* : nullable Bool */;
val* var232 /* : nullable Bool */;
short int var233 /* : Bool */;
val* var235 /* : NativeArray[String] */;
static val* varonce234;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : CString */;
val* var239 /* : String */;
val* var240 /* : nullable Int */;
val* var241 /* : nullable Int */;
val* var242 /* : nullable Bool */;
val* var243 /* : nullable Bool */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : CString */;
val* var247 /* : String */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Int */;
val* var250 /* : nullable Bool */;
val* var251 /* : nullable Bool */;
val* var252 /* : String */;
val* var253 /* : String */;
val* var254 /* : RuntimeVariable */;
val* var255 /* : MType */;
val* var257 /* : MType */;
val* var258 /* : String */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Bool */;
val* var266 /* : nullable Bool */;
short int var267 /* : Bool */;
val* var269 /* : NativeArray[String] */;
static val* varonce268;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : CString */;
val* var273 /* : String */;
val* var274 /* : nullable Int */;
val* var275 /* : nullable Int */;
val* var276 /* : nullable Bool */;
val* var277 /* : nullable Bool */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : CString */;
val* var281 /* : String */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Int */;
val* var284 /* : nullable Bool */;
val* var285 /* : nullable Bool */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var288 /* : RuntimeVariable */;
val* var289 /* : MType */;
val* var291 /* : MType */;
val* var293 /* : MType */;
val* var295 /* : MType */;
short int var296 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
int cltype300;
int idtype301;
short int var_302 /* var : Bool */;
val* var303 /* : MClass */;
val* var305 /* : MClass */;
val* var306 /* : MClassKind */;
val* var308 /* : MClassKind */;
val* var309 /* : Sys */;
val* var310 /* : MClassKind */;
short int var311 /* : Bool */;
short int var313 /* : Bool */;
short int var315 /* : Bool */;
short int var_316 /* var : Bool */;
val* var317 /* : MClass */;
val* var319 /* : MClass */;
val* var320 /* : String */;
val* var322 /* : String */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : CString */;
val* var326 /* : String */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Bool */;
val* var330 /* : nullable Bool */;
short int var331 /* : Bool */;
val* var_other333 /* var other: nullable Object */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
val* var336 /* : AbstractCompiler */;
val* var338 /* : AbstractCompiler */;
val* var339 /* : MModule */;
val* var341 /* : MModule */;
val* var342 /* : MClassType */;
val* var343 /* : RuntimeVariable */;
val* var_res344 /* var res: RuntimeVariable */;
val* var345 /* : MType */;
val* var347 /* : MType */;
val* var350 /* : NativeArray[String] */;
static val* varonce349;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Bool */;
val* var358 /* : nullable Bool */;
val* var359 /* : String */;
val* var360 /* : String */;
val* var362 /* : NativeArray[String] */;
static val* varonce361;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : CString */;
val* var366 /* : String */;
val* var367 /* : nullable Int */;
val* var368 /* : nullable Int */;
val* var369 /* : nullable Bool */;
val* var370 /* : nullable Bool */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : CString */;
val* var374 /* : String */;
val* var375 /* : nullable Int */;
val* var376 /* : nullable Int */;
val* var377 /* : nullable Bool */;
val* var378 /* : nullable Bool */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : CString */;
val* var382 /* : String */;
val* var383 /* : nullable Int */;
val* var384 /* : nullable Int */;
val* var385 /* : nullable Bool */;
val* var386 /* : nullable Bool */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : CString */;
val* var390 /* : String */;
val* var391 /* : nullable Int */;
val* var392 /* : nullable Int */;
val* var393 /* : nullable Bool */;
val* var394 /* : nullable Bool */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : CString */;
val* var398 /* : String */;
val* var399 /* : nullable Int */;
val* var400 /* : nullable Int */;
val* var401 /* : nullable Bool */;
val* var402 /* : nullable Bool */;
val* var403 /* : String */;
val* var404 /* : String */;
val* var405 /* : String */;
val* var406 /* : MType */;
val* var408 /* : MType */;
val* var409 /* : String */;
val* var410 /* : String */;
val* var411 /* : String */;
short int var412 /* : Bool */;
short int var413 /* : Bool */;
short int var414 /* : Bool */;
val* var415 /* : MType */;
val* var417 /* : MType */;
val* var418 /* : String */;
static val* varonce419;
val* var420 /* : String */;
char* var421 /* : CString */;
val* var422 /* : String */;
val* var423 /* : nullable Int */;
val* var424 /* : nullable Int */;
val* var425 /* : nullable Bool */;
val* var426 /* : nullable Bool */;
short int var427 /* : Bool */;
short int var_428 /* var : Bool */;
val* var429 /* : String */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : CString */;
val* var433 /* : String */;
val* var434 /* : nullable Int */;
val* var435 /* : nullable Int */;
val* var436 /* : nullable Bool */;
val* var437 /* : nullable Bool */;
short int var438 /* : Bool */;
short int var_439 /* var : Bool */;
short int var440 /* : Bool */;
val* var441 /* : MType */;
val* var443 /* : MType */;
val* var444 /* : String */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : CString */;
val* var448 /* : String */;
val* var449 /* : nullable Int */;
val* var450 /* : nullable Int */;
val* var451 /* : nullable Bool */;
val* var452 /* : nullable Bool */;
short int var453 /* : Bool */;
short int var_454 /* var : Bool */;
val* var455 /* : String */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : CString */;
val* var459 /* : String */;
val* var460 /* : nullable Int */;
val* var461 /* : nullable Int */;
val* var462 /* : nullable Bool */;
val* var463 /* : nullable Bool */;
short int var464 /* : Bool */;
short int var_465 /* var : Bool */;
short int var466 /* : Bool */;
val* var467 /* : MType */;
val* var469 /* : MType */;
val* var470 /* : String */;
static val* varonce471;
val* var472 /* : String */;
char* var473 /* : CString */;
val* var474 /* : String */;
val* var475 /* : nullable Int */;
val* var476 /* : nullable Int */;
val* var477 /* : nullable Bool */;
val* var478 /* : nullable Bool */;
short int var479 /* : Bool */;
short int var_480 /* var : Bool */;
val* var481 /* : String */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : CString */;
val* var485 /* : String */;
val* var486 /* : nullable Int */;
val* var487 /* : nullable Int */;
val* var488 /* : nullable Bool */;
val* var489 /* : nullable Bool */;
short int var490 /* : Bool */;
val* var491 /* : RuntimeVariable */;
val* var_res492 /* var res: RuntimeVariable */;
val* var494 /* : NativeArray[String] */;
static val* varonce493;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : CString */;
val* var498 /* : String */;
val* var499 /* : nullable Int */;
val* var500 /* : nullable Int */;
val* var501 /* : nullable Bool */;
val* var502 /* : nullable Bool */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : CString */;
val* var506 /* : String */;
val* var507 /* : nullable Int */;
val* var508 /* : nullable Int */;
val* var509 /* : nullable Bool */;
val* var510 /* : nullable Bool */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : CString */;
val* var514 /* : String */;
val* var515 /* : nullable Int */;
val* var516 /* : nullable Int */;
val* var517 /* : nullable Bool */;
val* var518 /* : nullable Bool */;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : CString */;
val* var522 /* : String */;
val* var523 /* : nullable Int */;
val* var524 /* : nullable Int */;
val* var525 /* : nullable Bool */;
val* var526 /* : nullable Bool */;
val* var527 /* : String */;
val* var528 /* : MType */;
val* var530 /* : MType */;
val* var531 /* : String */;
val* var532 /* : String */;
val* var533 /* : String */;
val* var535 /* : NativeArray[String] */;
static val* varonce534;
static val* varonce536;
val* var537 /* : String */;
char* var538 /* : CString */;
val* var539 /* : String */;
val* var540 /* : nullable Int */;
val* var541 /* : nullable Int */;
val* var542 /* : nullable Bool */;
val* var543 /* : nullable Bool */;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : CString */;
val* var547 /* : String */;
val* var548 /* : nullable Int */;
val* var549 /* : nullable Int */;
val* var550 /* : nullable Bool */;
val* var551 /* : nullable Bool */;
static val* varonce552;
val* var553 /* : String */;
char* var554 /* : CString */;
val* var555 /* : String */;
val* var556 /* : nullable Int */;
val* var557 /* : nullable Int */;
val* var558 /* : nullable Bool */;
val* var559 /* : nullable Bool */;
val* var560 /* : MType */;
val* var562 /* : MType */;
val* var563 /* : String */;
val* var564 /* : String */;
val* var565 /* : String */;
var_value = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var1,var_mtype) on <var1:MType> */
var_other = var_mtype;
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:MType> */
var8 = var1 == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var12 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((short int(*)(val* self))(var10->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var10); /* is_c_primitive on <var10:MType>*/
}
var14 = !var13;
var_ = var14;
if (var14){
{
var15 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var16 = !var15;
var9 = var16;
} else {
var9 = var_;
}
if (var9){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var19 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = ((short int(*)(val* self))(var17->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var17); /* is_c_primitive on <var17:MType>*/
}
var21 = !var20;
if (var21){
{
{ /* Inline separate_compiler$MType$is_tagged (var_mtype) on <var_mtype:MType> */
var24 = var_mtype->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MType> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22){
{
var25 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "Int";
var29 = (val*)(3l<<2|1);
var30 = (val*)(3l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce = var26;
}
{
var33 = ((short int(*)(val* self, val* p0))(var25->class->vft[COLOR_core__kernel__Object___61d_61d]))(var25, var26); /* == on <var25:String>*/
}
if (var33){
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "(long)(";
var40 = (val*)(7l<<2|1);
var41 = (val*)(7l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = ")>>2";
var48 = (val*)(4l<<2|1);
var49 = (val*)(4l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var35)->values[2]=var45;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var52 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var35)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
var54 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var53, var_mtype);
}
var = var54;
goto RET_LABEL;
} else {
{
var55 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "Char";
var60 = (val*)(4l<<2|1);
var61 = (val*)(4l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
{
var64 = ((short int(*)(val* self, val* p0))(var55->class->vft[COLOR_core__kernel__Object___61d_61d]))(var55, var57); /* == on <var55:String>*/
}
if (var64){
if (unlikely(varonce65==NULL)) {
var66 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "(uint32_t)((long)(";
var71 = (val*)(18l<<2|1);
var72 = (val*)(18l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var66)->values[0]=var68;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = ")>>2)";
var79 = (val*)(5l<<2|1);
var80 = (val*)(5l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var66)->values[2]=var76;
} else {
var66 = varonce65;
varonce65 = NULL;
}
{
var83 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var66)->values[1]=var83;
{
var84 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
{
var85 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var84, var_mtype);
}
var = var85;
goto RET_LABEL;
} else {
{
var86 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__name]))(var_mtype); /* name on <var_mtype:MType>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Bool";
var91 = (val*)(4l<<2|1);
var92 = (val*)(4l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
{
var95 = ((short int(*)(val* self, val* p0))(var86->class->vft[COLOR_core__kernel__Object___61d_61d]))(var86, var88); /* == on <var86:String>*/
}
if (var95){
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "(short int)((long)(";
var102 = (val*)(19l<<2|1);
var103 = (val*)(19l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[0]=var99;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = ")>>2)";
var110 = (val*)(5l<<2|1);
var111 = (val*)(5l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var97)->values[2]=var107;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var114 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var97)->values[1]=var114;
{
var115 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
var116 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var115, var_mtype);
}
var = var116;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1223);
fatal_exit(1);
}
}
}
} else {
}
if (unlikely(varonce117==NULL)) {
var118 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "((struct instance_";
var123 = (val*)(18l<<2|1);
var124 = (val*)(18l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var118)->values[0]=var120;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "*)";
var131 = (val*)(2l<<2|1);
var132 = (val*)(2l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var118)->values[2]=var128;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ")->value; /* autounbox from ";
var139 = (val*)(28l<<2|1);
var140 = (val*)(28l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var118)->values[4]=var136;
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = " to ";
var147 = (val*)(4l<<2|1);
var148 = (val*)(4l<<2|1);
var149 = (val*)((long)(0)<<2|3);
var150 = (val*)((long)(0)<<2|3);
var146 = core__flat___CString___to_s_unsafe(var145, var147, var148, var149, var150);
var144 = var146;
varonce143 = var144;
}
((struct instance_core__NativeArray*)var118)->values[6]=var144;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = " */";
var155 = (val*)(3l<<2|1);
var156 = (val*)(3l<<2|1);
var157 = (val*)((long)(0)<<2|3);
var158 = (val*)((long)(0)<<2|3);
var154 = core__flat___CString___to_s_unsafe(var153, var155, var156, var157, var158);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var118)->values[8]=var152;
} else {
var118 = varonce117;
varonce117 = NULL;
}
{
var159 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var118)->values[1]=var159;
{
var160 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var118)->values[3]=var160;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var163 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var163 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
var164 = ((val*(*)(val* self))(var161->class->vft[COLOR_core__abstract_text__Object__to_s]))(var161); /* to_s on <var161:MType>*/
}
((struct instance_core__NativeArray*)var118)->values[5]=var164;
{
var165 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var118)->values[7]=var165;
{
var166 = ((val*(*)(val* self))(var118->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var118); /* native_to_s on <var118:NativeArray[String]>*/
}
varonce117 = var118;
{
var167 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var166, var_mtype);
}
var = var167;
goto RET_LABEL;
} else {
{
var168 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var169 = !var168;
if (var169){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var172 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var172 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var175 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var175 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var170,var173) on <var170:MType> */
var_other = var173;
{
{ /* Inline kernel$Object$is_same_instance (var170,var_other) on <var170:MType> */
var180 = var170 == var_other;
var178 = var180;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
if (unlikely(!var176)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1228);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var183 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var183 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
{ /* Inline separate_compiler$MType$is_tagged (var181) on <var181:MType> */
var186 = var181->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var181:MType> */
var184 = var186;
RET_LABEL185:(void)0;
}
}
if (var184){
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var189 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var189 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
var190 = ((val*(*)(val* self))(var187->class->vft[COLOR_nitc__model_base__MEntity__name]))(var187); /* name on <var187:MType>*/
}
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "Int";
var195 = (val*)(3l<<2|1);
var196 = (val*)(3l<<2|1);
var197 = (val*)((long)(0)<<2|3);
var198 = (val*)((long)(0)<<2|3);
var194 = core__flat___CString___to_s_unsafe(var193, var195, var196, var197, var198);
var192 = var194;
varonce191 = var192;
}
{
var199 = ((short int(*)(val* self, val* p0))(var190->class->vft[COLOR_core__kernel__Object___61d_61d]))(var190, var192); /* == on <var190:String>*/
}
if (var199){
if (unlikely(varonce200==NULL)) {
var201 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "(val*)(";
var206 = (val*)(7l<<2|1);
var207 = (val*)(7l<<2|1);
var208 = (val*)((long)(0)<<2|3);
var209 = (val*)((long)(0)<<2|3);
var205 = core__flat___CString___to_s_unsafe(var204, var206, var207, var208, var209);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var201)->values[0]=var203;
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "<<2|1)";
var214 = (val*)(6l<<2|1);
var215 = (val*)(6l<<2|1);
var216 = (val*)((long)(0)<<2|3);
var217 = (val*)((long)(0)<<2|3);
var213 = core__flat___CString___to_s_unsafe(var212, var214, var215, var216, var217);
var211 = var213;
varonce210 = var211;
}
((struct instance_core__NativeArray*)var201)->values[2]=var211;
} else {
var201 = varonce200;
varonce200 = NULL;
}
{
var218 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var201)->values[1]=var218;
{
var219 = ((val*(*)(val* self))(var201->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var201); /* native_to_s on <var201:NativeArray[String]>*/
}
varonce200 = var201;
{
var220 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var219, var_mtype);
}
var_res = var220;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var223 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var223 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
var224 = ((val*(*)(val* self))(var221->class->vft[COLOR_nitc__model_base__MEntity__name]))(var221); /* name on <var221:MType>*/
}
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "Char";
var229 = (val*)(4l<<2|1);
var230 = (val*)(4l<<2|1);
var231 = (val*)((long)(0)<<2|3);
var232 = (val*)((long)(0)<<2|3);
var228 = core__flat___CString___to_s_unsafe(var227, var229, var230, var231, var232);
var226 = var228;
varonce225 = var226;
}
{
var233 = ((short int(*)(val* self, val* p0))(var224->class->vft[COLOR_core__kernel__Object___61d_61d]))(var224, var226); /* == on <var224:String>*/
}
if (var233){
if (unlikely(varonce234==NULL)) {
var235 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "(val*)((long)(";
var240 = (val*)(14l<<2|1);
var241 = (val*)(14l<<2|1);
var242 = (val*)((long)(0)<<2|3);
var243 = (val*)((long)(0)<<2|3);
var239 = core__flat___CString___to_s_unsafe(var238, var240, var241, var242, var243);
var237 = var239;
varonce236 = var237;
}
((struct instance_core__NativeArray*)var235)->values[0]=var237;
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = ")<<2|2)";
var248 = (val*)(7l<<2|1);
var249 = (val*)(7l<<2|1);
var250 = (val*)((long)(0)<<2|3);
var251 = (val*)((long)(0)<<2|3);
var247 = core__flat___CString___to_s_unsafe(var246, var248, var249, var250, var251);
var245 = var247;
varonce244 = var245;
}
((struct instance_core__NativeArray*)var235)->values[2]=var245;
} else {
var235 = varonce234;
varonce234 = NULL;
}
{
var252 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var235)->values[1]=var252;
{
var253 = ((val*(*)(val* self))(var235->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var235); /* native_to_s on <var235:NativeArray[String]>*/
}
varonce234 = var235;
{
var254 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var253, var_mtype);
}
var_res = var254;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var257 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var257 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
var258 = ((val*(*)(val* self))(var255->class->vft[COLOR_nitc__model_base__MEntity__name]))(var255); /* name on <var255:MType>*/
}
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "Bool";
var263 = (val*)(4l<<2|1);
var264 = (val*)(4l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
{
var267 = ((short int(*)(val* self, val* p0))(var258->class->vft[COLOR_core__kernel__Object___61d_61d]))(var258, var260); /* == on <var258:String>*/
}
if (var267){
if (unlikely(varonce268==NULL)) {
var269 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = "(val*)((long)(";
var274 = (val*)(14l<<2|1);
var275 = (val*)(14l<<2|1);
var276 = (val*)((long)(0)<<2|3);
var277 = (val*)((long)(0)<<2|3);
var273 = core__flat___CString___to_s_unsafe(var272, var274, var275, var276, var277);
var271 = var273;
varonce270 = var271;
}
((struct instance_core__NativeArray*)var269)->values[0]=var271;
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = ")<<2|3)";
var282 = (val*)(7l<<2|1);
var283 = (val*)(7l<<2|1);
var284 = (val*)((long)(0)<<2|3);
var285 = (val*)((long)(0)<<2|3);
var281 = core__flat___CString___to_s_unsafe(var280, var282, var283, var284, var285);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var269)->values[2]=var279;
} else {
var269 = varonce268;
varonce268 = NULL;
}
{
var286 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var269)->values[1]=var286;
{
var287 = ((val*(*)(val* self))(var269->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var269); /* native_to_s on <var269:NativeArray[String]>*/
}
varonce268 = var269;
{
var288 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var287, var_mtype);
}
var_res = var288;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1238);
fatal_exit(1);
}
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var291 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var291 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var289 = var291;
RET_LABEL290:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype= (var_res,var289) on <var_res:nullable Object(RuntimeVariable)> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = var289; /* _mcasttype on <var_res:nullable Object(RuntimeVariable)> */
RET_LABEL292:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var295 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var295 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
/* <var293:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var293->type->table_size) {
var296 = 0;
} else {
var296 = var293->type->type_table[cltype] == idtype;
}
if (unlikely(!var296)) {
var_class_name = var293 == NULL ? "null" : var293->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1244);
fatal_exit(1);
}
var_valtype = var293;
/* <var_mtype:MType> isa MClassType */
cltype300 = type_nitc__MClassType.color;
idtype301 = type_nitc__MClassType.id;
if(cltype300 >= var_mtype->type->table_size) {
var299 = 0;
} else {
var299 = var_mtype->type->type_table[cltype300] == idtype301;
}
var_302 = var299;
if (var299){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var305 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var305 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var303) on <var303:MClass> */
var308 = var303->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var303:MClass> */
if (unlikely(var308 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
var309 = glob_sys;
{
var310 = nitc__model___core__Sys___extern_kind(var309);
}
{
{ /* Inline kernel$Object$== (var306,var310) on <var306:MClassKind> */
var_other = var310;
{
{ /* Inline kernel$Object$is_same_instance (var306,var_other) on <var306:MClassKind> */
var315 = var306 == var_other;
var313 = var315;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
}
var311 = var313;
goto RET_LABEL312;
RET_LABEL312:(void)0;
}
}
var298 = var311;
} else {
var298 = var_302;
}
var_316 = var298;
if (var298){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var319 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var319 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var317 = var319;
RET_LABEL318:(void)0;
}
}
{
{ /* Inline model$MClass$name (var317) on <var317:MClass> */
var322 = var317->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var317:MClass> */
if (unlikely(var322 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "CString";
var327 = (val*)(7l<<2|1);
var328 = (val*)(7l<<2|1);
var329 = (val*)((long)(0)<<2|3);
var330 = (val*)((long)(0)<<2|3);
var326 = core__flat___CString___to_s_unsafe(var325, var327, var328, var329, var330);
var324 = var326;
varonce323 = var324;
}
{
{ /* Inline kernel$Object$!= (var320,var324) on <var320:String> */
var_other333 = var324;
{
var334 = ((short int(*)(val* self, val* p0))(var320->class->vft[COLOR_core__kernel__Object___61d_61d]))(var320, var_other333); /* == on <var320:String>*/
}
var335 = !var334;
var331 = var335;
goto RET_LABEL332;
RET_LABEL332:(void)0;
}
}
var297 = var331;
} else {
var297 = var_316;
}
if (var297){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var338 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var338 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var336) on <var336:AbstractCompiler(SeparateCompiler)> */
var341 = var336->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var336:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var341 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
{
var342 = nitc__model___MModule___pointer_type(var339);
}
var_valtype = var342;
} else {
}
{
var343 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res344 = var343;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var347 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var347 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var345 = var347;
RET_LABEL346:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype= (var_res344,var345) on <var_res344:RuntimeVariable> */
var_res344->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = var345; /* _mcasttype on <var_res344:RuntimeVariable> */
RET_LABEL348:(void)0;
}
}
if (unlikely(varonce349==NULL)) {
var350 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "BOX_";
var355 = (val*)(4l<<2|1);
var356 = (val*)(4l<<2|1);
var357 = (val*)((long)(0)<<2|3);
var358 = (val*)((long)(0)<<2|3);
var354 = core__flat___CString___to_s_unsafe(var353, var355, var356, var357, var358);
var352 = var354;
varonce351 = var352;
}
((struct instance_core__NativeArray*)var350)->values[0]=var352;
} else {
var350 = varonce349;
varonce349 = NULL;
}
{
var359 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var350)->values[1]=var359;
{
var360 = ((val*(*)(val* self))(var350->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var350); /* native_to_s on <var350:NativeArray[String]>*/
}
varonce349 = var350;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var360); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce361==NULL)) {
var362 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce363!=NULL)) {
var364 = varonce363;
} else {
var365 = " = BOX_";
var367 = (val*)(7l<<2|1);
var368 = (val*)(7l<<2|1);
var369 = (val*)((long)(0)<<2|3);
var370 = (val*)((long)(0)<<2|3);
var366 = core__flat___CString___to_s_unsafe(var365, var367, var368, var369, var370);
var364 = var366;
varonce363 = var364;
}
((struct instance_core__NativeArray*)var362)->values[1]=var364;
if (likely(varonce371!=NULL)) {
var372 = varonce371;
} else {
var373 = "(";
var375 = (val*)(1l<<2|1);
var376 = (val*)(1l<<2|1);
var377 = (val*)((long)(0)<<2|3);
var378 = (val*)((long)(0)<<2|3);
var374 = core__flat___CString___to_s_unsafe(var373, var375, var376, var377, var378);
var372 = var374;
varonce371 = var372;
}
((struct instance_core__NativeArray*)var362)->values[3]=var372;
if (likely(varonce379!=NULL)) {
var380 = varonce379;
} else {
var381 = "); /* autobox from ";
var383 = (val*)(19l<<2|1);
var384 = (val*)(19l<<2|1);
var385 = (val*)((long)(0)<<2|3);
var386 = (val*)((long)(0)<<2|3);
var382 = core__flat___CString___to_s_unsafe(var381, var383, var384, var385, var386);
var380 = var382;
varonce379 = var380;
}
((struct instance_core__NativeArray*)var362)->values[5]=var380;
if (likely(varonce387!=NULL)) {
var388 = varonce387;
} else {
var389 = " to ";
var391 = (val*)(4l<<2|1);
var392 = (val*)(4l<<2|1);
var393 = (val*)((long)(0)<<2|3);
var394 = (val*)((long)(0)<<2|3);
var390 = core__flat___CString___to_s_unsafe(var389, var391, var392, var393, var394);
var388 = var390;
varonce387 = var388;
}
((struct instance_core__NativeArray*)var362)->values[7]=var388;
if (likely(varonce395!=NULL)) {
var396 = varonce395;
} else {
var397 = " */";
var399 = (val*)(3l<<2|1);
var400 = (val*)(3l<<2|1);
var401 = (val*)((long)(0)<<2|3);
var402 = (val*)((long)(0)<<2|3);
var398 = core__flat___CString___to_s_unsafe(var397, var399, var400, var401, var402);
var396 = var398;
varonce395 = var396;
}
((struct instance_core__NativeArray*)var362)->values[9]=var396;
} else {
var362 = varonce361;
varonce361 = NULL;
}
{
var403 = ((val*(*)(val* self))(var_res344->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res344); /* to_s on <var_res344:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var362)->values[0]=var403;
{
var404 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var362)->values[2]=var404;
{
var405 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var362)->values[4]=var405;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var408 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var408 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
{
var409 = ((val*(*)(val* self))(var406->class->vft[COLOR_core__abstract_text__Object__to_s]))(var406); /* to_s on <var406:MType>*/
}
((struct instance_core__NativeArray*)var362)->values[6]=var409;
{
var410 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var362)->values[8]=var410;
{
var411 = ((val*(*)(val* self))(var362->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var362); /* native_to_s on <var362:NativeArray[String]>*/
}
varonce361 = var362;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var411); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res344;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var417 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var417 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var415 = var417;
RET_LABEL416:(void)0;
}
}
{
var418 = ((val*(*)(val* self))(var415->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var415); /* ctype on <var415:MType>*/
}
if (likely(varonce419!=NULL)) {
var420 = varonce419;
} else {
var421 = "void*";
var423 = (val*)(5l<<2|1);
var424 = (val*)(5l<<2|1);
var425 = (val*)((long)(0)<<2|3);
var426 = (val*)((long)(0)<<2|3);
var422 = core__flat___CString___to_s_unsafe(var421, var423, var424, var425, var426);
var420 = var422;
varonce419 = var420;
}
{
var427 = ((short int(*)(val* self, val* p0))(var418->class->vft[COLOR_core__kernel__Object___61d_61d]))(var418, var420); /* == on <var418:String>*/
}
var_428 = var427;
if (var427){
{
var429 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = "void*";
var434 = (val*)(5l<<2|1);
var435 = (val*)(5l<<2|1);
var436 = (val*)((long)(0)<<2|3);
var437 = (val*)((long)(0)<<2|3);
var433 = core__flat___CString___to_s_unsafe(var432, var434, var435, var436, var437);
var431 = var433;
varonce430 = var431;
}
{
var438 = ((short int(*)(val* self, val* p0))(var429->class->vft[COLOR_core__kernel__Object___61d_61d]))(var429, var431); /* == on <var429:String>*/
}
var414 = var438;
} else {
var414 = var_428;
}
var_439 = var414;
if (var414){
var413 = var_439;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var443 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var443 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var441 = var443;
RET_LABEL442:(void)0;
}
}
{
var444 = ((val*(*)(val* self))(var441->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var441); /* ctype on <var441:MType>*/
}
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = "char*";
var449 = (val*)(5l<<2|1);
var450 = (val*)(5l<<2|1);
var451 = (val*)((long)(0)<<2|3);
var452 = (val*)((long)(0)<<2|3);
var448 = core__flat___CString___to_s_unsafe(var447, var449, var450, var451, var452);
var446 = var448;
varonce445 = var446;
}
{
var453 = ((short int(*)(val* self, val* p0))(var444->class->vft[COLOR_core__kernel__Object___61d_61d]))(var444, var446); /* == on <var444:String>*/
}
var_454 = var453;
if (var453){
{
var455 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce456!=NULL)) {
var457 = varonce456;
} else {
var458 = "void*";
var460 = (val*)(5l<<2|1);
var461 = (val*)(5l<<2|1);
var462 = (val*)((long)(0)<<2|3);
var463 = (val*)((long)(0)<<2|3);
var459 = core__flat___CString___to_s_unsafe(var458, var460, var461, var462, var463);
var457 = var459;
varonce456 = var457;
}
{
var464 = ((short int(*)(val* self, val* p0))(var455->class->vft[COLOR_core__kernel__Object___61d_61d]))(var455, var457); /* == on <var455:String>*/
}
var440 = var464;
} else {
var440 = var_454;
}
var413 = var440;
}
var_465 = var413;
if (var413){
var412 = var_465;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var469 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var469 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var467 = var469;
RET_LABEL468:(void)0;
}
}
{
var470 = ((val*(*)(val* self))(var467->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var467); /* ctype on <var467:MType>*/
}
if (likely(varonce471!=NULL)) {
var472 = varonce471;
} else {
var473 = "void*";
var475 = (val*)(5l<<2|1);
var476 = (val*)(5l<<2|1);
var477 = (val*)((long)(0)<<2|3);
var478 = (val*)((long)(0)<<2|3);
var474 = core__flat___CString___to_s_unsafe(var473, var475, var476, var477, var478);
var472 = var474;
varonce471 = var472;
}
{
var479 = ((short int(*)(val* self, val* p0))(var470->class->vft[COLOR_core__kernel__Object___61d_61d]))(var470, var472); /* == on <var470:String>*/
}
var_480 = var479;
if (var479){
{
var481 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce482!=NULL)) {
var483 = varonce482;
} else {
var484 = "char*";
var486 = (val*)(5l<<2|1);
var487 = (val*)(5l<<2|1);
var488 = (val*)((long)(0)<<2|3);
var489 = (val*)((long)(0)<<2|3);
var485 = core__flat___CString___to_s_unsafe(var484, var486, var487, var488, var489);
var483 = var485;
varonce482 = var483;
}
{
var490 = ((short int(*)(val* self, val* p0))(var481->class->vft[COLOR_core__kernel__Object___61d_61d]))(var481, var483); /* == on <var481:String>*/
}
var466 = var490;
} else {
var466 = var_480;
}
var412 = var466;
}
if (var412){
var = var_value;
goto RET_LABEL;
} else {
{
var491 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res492 = var491;
if (unlikely(varonce493==NULL)) {
var494 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce495!=NULL)) {
var496 = varonce495;
} else {
var497 = "/* ";
var499 = (val*)(3l<<2|1);
var500 = (val*)(3l<<2|1);
var501 = (val*)((long)(0)<<2|3);
var502 = (val*)((long)(0)<<2|3);
var498 = core__flat___CString___to_s_unsafe(var497, var499, var500, var501, var502);
var496 = var498;
varonce495 = var496;
}
((struct instance_core__NativeArray*)var494)->values[0]=var496;
if (likely(varonce503!=NULL)) {
var504 = varonce503;
} else {
var505 = " left unintialized (cannot convert ";
var507 = (val*)(35l<<2|1);
var508 = (val*)(35l<<2|1);
var509 = (val*)((long)(0)<<2|3);
var510 = (val*)((long)(0)<<2|3);
var506 = core__flat___CString___to_s_unsafe(var505, var507, var508, var509, var510);
var504 = var506;
varonce503 = var504;
}
((struct instance_core__NativeArray*)var494)->values[2]=var504;
if (likely(varonce511!=NULL)) {
var512 = varonce511;
} else {
var513 = " to ";
var515 = (val*)(4l<<2|1);
var516 = (val*)(4l<<2|1);
var517 = (val*)((long)(0)<<2|3);
var518 = (val*)((long)(0)<<2|3);
var514 = core__flat___CString___to_s_unsafe(var513, var515, var516, var517, var518);
var512 = var514;
varonce511 = var512;
}
((struct instance_core__NativeArray*)var494)->values[4]=var512;
if (likely(varonce519!=NULL)) {
var520 = varonce519;
} else {
var521 = ") */";
var523 = (val*)(4l<<2|1);
var524 = (val*)(4l<<2|1);
var525 = (val*)((long)(0)<<2|3);
var526 = (val*)((long)(0)<<2|3);
var522 = core__flat___CString___to_s_unsafe(var521, var523, var524, var525, var526);
var520 = var522;
varonce519 = var520;
}
((struct instance_core__NativeArray*)var494)->values[6]=var520;
} else {
var494 = varonce493;
varonce493 = NULL;
}
{
var527 = ((val*(*)(val* self))(var_res492->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res492); /* to_s on <var_res492:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var494)->values[1]=var527;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var530 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var530 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var528 = var530;
RET_LABEL529:(void)0;
}
}
{
var531 = ((val*(*)(val* self))(var528->class->vft[COLOR_core__abstract_text__Object__to_s]))(var528); /* to_s on <var528:MType>*/
}
((struct instance_core__NativeArray*)var494)->values[3]=var531;
{
var532 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var494)->values[5]=var532;
{
var533 = ((val*(*)(val* self))(var494->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var494); /* native_to_s on <var494:NativeArray[String]>*/
}
varonce493 = var494;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var533); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce534==NULL)) {
var535 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce536!=NULL)) {
var537 = varonce536;
} else {
var538 = "PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var540 = (val*)(52l<<2|1);
var541 = (val*)(52l<<2|1);
var542 = (val*)((long)(0)<<2|3);
var543 = (val*)((long)(0)<<2|3);
var539 = core__flat___CString___to_s_unsafe(var538, var540, var541, var542, var543);
var537 = var539;
varonce536 = var537;
}
((struct instance_core__NativeArray*)var535)->values[0]=var537;
if (likely(varonce544!=NULL)) {
var545 = varonce544;
} else {
var546 = "\", \"";
var548 = (val*)(4l<<2|1);
var549 = (val*)(4l<<2|1);
var550 = (val*)((long)(0)<<2|3);
var551 = (val*)((long)(0)<<2|3);
var547 = core__flat___CString___to_s_unsafe(var546, var548, var549, var550, var551);
var545 = var547;
varonce544 = var545;
}
((struct instance_core__NativeArray*)var535)->values[2]=var545;
if (likely(varonce552!=NULL)) {
var553 = varonce552;
} else {
var554 = "\"); fatal_exit(1);";
var556 = (val*)(18l<<2|1);
var557 = (val*)(18l<<2|1);
var558 = (val*)((long)(0)<<2|3);
var559 = (val*)((long)(0)<<2|3);
var555 = core__flat___CString___to_s_unsafe(var554, var556, var557, var558, var559);
var553 = var555;
varonce552 = var553;
}
((struct instance_core__NativeArray*)var535)->values[4]=var553;
} else {
var535 = varonce534;
varonce534 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var562 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var562 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var560 = var562;
RET_LABEL561:(void)0;
}
}
{
var563 = ((val*(*)(val* self))(var560->class->vft[COLOR_core__abstract_text__Object__to_s]))(var560); /* to_s on <var560:MType>*/
}
((struct instance_core__NativeArray*)var535)->values[1]=var563;
{
var564 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var535)->values[3]=var564;
{
var565 = ((val*(*)(val* self))(var535->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var535); /* native_to_s on <var535:NativeArray[String]>*/
}
varonce534 = var535;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var565); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res492;
goto RET_LABEL;
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$unbox_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
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
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
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
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : AbstractCompiler */;
val* var38 /* : AbstractCompiler */;
val* var39 /* : MModule */;
val* var41 /* : MModule */;
val* var42 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var43 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : MType */;
val* var83 /* : MType */;
val* var84 /* : String */;
val* var85 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___extern_kind(var10);
}
{
{ /* Inline kernel$Object$== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:MClassKind> */
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
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "CString";
var27 = (val*)(7l<<2|1);
var28 = (val*)(7l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel$Object$!= (var21,var24) on <var21:String> */
var_other33 = var24;
{
var34 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var_other33); /* == on <var21:String>*/
}
var35 = !var34;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var1 = var31;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var38 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var36) on <var36:AbstractCompiler(SeparateCompiler)> */
var41 = var36->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var36:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = nitc__model___MModule___pointer_type(var39);
}
var_pointer_type = var42;
{
var43 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(self, var_mtype);
}
var_res = var43;
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " = ((struct instance_";
var50 = (val*)(21l<<2|1);
var51 = (val*)(21l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[1]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "*)";
var58 = (val*)(2l<<2|1);
var59 = (val*)(2l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var45)->values[3]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ")->value; /* unboxing ";
var66 = (val*)(22l<<2|1);
var67 = (val*)(22l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var45)->values[5]=var63;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = " */";
var74 = (val*)(3l<<2|1);
var75 = (val*)(3l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var45)->values[7]=var71;
} else {
var45 = varonce44;
varonce44 = NULL;
}
{
var78 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var45)->values[0]=var78;
{
var79 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var45)->values[2]=var79;
{
var80 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var45)->values[4]=var80;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var83 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__Object__to_s]))(var81); /* to_s on <var81:MType>*/
}
((struct instance_core__NativeArray*)var45)->values[6]=var84;
{
var85 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var85); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
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
/* method separate_compiler$SeparateCompilerVisitor$box_extern for (self: SeparateCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
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
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
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
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : AbstractCompiler */;
val* var38 /* : AbstractCompiler */;
val* var39 /* : MModule */;
val* var41 /* : MModule */;
val* var42 /* : MClassType */;
val* var_valtype /* var valtype: MClassType */;
val* var43 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var44 /* : AbstractCompiler */;
val* var46 /* : AbstractCompiler */;
val* var47 /* : Set[MType] */;
val* var49 /* : Set[MType] */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
val* var60 /* : String */;
val* var61 /* : String */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Bool */;
val* var79 /* : nullable Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Bool */;
val* var87 /* : nullable Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : MType */;
val* var101 /* : MType */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var105 /* : NativeArray[String] */;
static val* varonce104;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
val* var134 /* : String */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var138 /* : NativeArray[String] */;
static val* varonce137;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Bool */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var150 /* : NativeArray[String] */;
static val* varonce149;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Bool */;
val* var158 /* : nullable Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
val* var167 /* : String */;
val* var168 /* : String */;
val* var169 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___extern_kind(var10);
}
{
{ /* Inline kernel$Object$== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel$Object$is_same_instance (var7,var_other) on <var7:MClassKind> */
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
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MClass$name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "CString";
var27 = (val*)(7l<<2|1);
var28 = (val*)(7l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel$Object$!= (var21,var24) on <var21:String> */
var_other33 = var24;
{
var34 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var_other33); /* == on <var21:String>*/
}
var35 = !var34;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var1 = var31;
} else {
var1 = var_17;
}
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var38 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var36) on <var36:AbstractCompiler(SeparateCompiler)> */
var41 = var36->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var36:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = nitc__model___MModule___pointer_type(var39);
}
var_valtype = var42;
{
var43 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var43;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var46 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var44) on <var44:AbstractCompiler(SeparateCompiler)> */
var49 = var44->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var44:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var47, var_mtype); /* add on <var47:Set[MType]>*/
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "BOX_";
var56 = (val*)(4l<<2|1);
var57 = (val*)(4l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
var60 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var51)->values[1]=var60;
{
var61 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var61); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = " = BOX_";
var68 = (val*)(7l<<2|1);
var69 = (val*)(7l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[1]=var65;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "(";
var76 = (val*)(1l<<2|1);
var77 = (val*)(1l<<2|1);
var78 = (val*)((long)(0)<<2|3);
var79 = (val*)((long)(0)<<2|3);
var75 = core__flat___CString___to_s_unsafe(var74, var76, var77, var78, var79);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var63)->values[3]=var73;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "); /* boxing ";
var84 = (val*)(13l<<2|1);
var85 = (val*)(13l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var63)->values[5]=var81;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " */";
var92 = (val*)(3l<<2|1);
var93 = (val*)(3l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var63)->values[7]=var89;
} else {
var63 = varonce62;
varonce62 = NULL;
}
{
var96 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var63)->values[0]=var96;
{
var97 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var63)->values[2]=var97;
{
var98 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var63)->values[4]=var98;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var101 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
var102 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__Object__to_s]))(var99); /* to_s on <var99:MType>*/
}
((struct instance_core__NativeArray*)var63)->values[6]=var102;
{
var103 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var103); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce104==NULL)) {
var105 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "type_";
var110 = (val*)(5l<<2|1);
var111 = (val*)(5l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var105)->values[0]=var107;
} else {
var105 = varonce104;
varonce104 = NULL;
}
{
var114 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var105)->values[1]=var114;
{
var115 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var115); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce116==NULL)) {
var117 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "->type = &type_";
var122 = (val*)(15l<<2|1);
var123 = (val*)(15l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var117)->values[1]=var119;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = ";";
var130 = (val*)(1l<<2|1);
var131 = (val*)(1l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var117)->values[3]=var127;
} else {
var117 = varonce116;
varonce116 = NULL;
}
{
var134 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var117)->values[0]=var134;
{
var135 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var117)->values[2]=var135;
{
var136 = ((val*(*)(val* self))(var117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var136); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce137==NULL)) {
var138 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "class_";
var143 = (val*)(6l<<2|1);
var144 = (val*)(6l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var138)->values[0]=var140;
} else {
var138 = varonce137;
varonce137 = NULL;
}
{
var147 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var138)->values[1]=var147;
{
var148 = ((val*(*)(val* self))(var138->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var138); /* native_to_s on <var138:NativeArray[String]>*/
}
varonce137 = var138;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var148); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce149==NULL)) {
var150 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "->class = &class_";
var155 = (val*)(17l<<2|1);
var156 = (val*)(17l<<2|1);
var157 = (val*)((long)(0)<<2|3);
var158 = (val*)((long)(0)<<2|3);
var154 = core__flat___CString___to_s_unsafe(var153, var155, var156, var157, var158);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var150)->values[1]=var152;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ";";
var163 = (val*)(1l<<2|1);
var164 = (val*)(1l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var150)->values[3]=var160;
} else {
var150 = varonce149;
varonce149 = NULL;
}
{
var167 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var150)->values[0]=var167;
{
var168 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var150)->values[2]=var168;
{
var169 = ((val*(*)(val* self))(var150->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var150); /* native_to_s on <var150:NativeArray[String]>*/
}
varonce149 = var150;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var169); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
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
/* method separate_compiler$SeparateCompilerVisitor$extract_tag for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__SeparateCompilerVisitor___extract_tag(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : String */;
val* var24 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1305);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "((long)";
var11 = (val*)(7l<<2|1);
var12 = (val*)(7l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "&3)";
var19 = (val*)(3l<<2|1);
var20 = (val*)(3l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var6)->values[2]=var16;
} else {
var6 = varonce;
varonce = NULL;
}
{
var23 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var6)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$class_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__SeparateCompilerVisitor___class_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
val* var_tag /* var tag: String */;
val* var26 /* : NativeArray[String] */;
static val* varonce;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : AbstractCompiler */;
val* var75 /* : AbstractCompiler */;
val* var76 /* : Set[MType] */;
val* var78 /* : Set[MType] */;
val* var79 /* : MType */;
val* var81 /* : MType */;
val* var83 /* : NativeArray[String] */;
static val* varonce82;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : MType */;
val* var94 /* : MType */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Bool */;
val* var114 /* : nullable Bool */;
val* var115 /* : MType */;
val* var117 /* : MType */;
val* var118 /* : String */;
val* var119 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (var5){
{
var7 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value);
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var8) on <var8:AbstractCompiler(SeparateCompiler)> */
var13 = var8->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var8:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var14:ToolContext> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline opts$Option$value (var17) on <var17:OptionBool> */
var22 = var17->attrs[COLOR_opts__Option___value].val; /* _value on <var17:OptionBool> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = (short int)((long)(var20)>>2);
var24 = !var23;
var6 = var24;
} else {
var6 = var_;
}
if (var6){
{
var25 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value);
}
var_tag = var25;
if (unlikely(varonce==NULL)) {
var26 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "(";
var31 = (val*)(1l<<2|1);
var32 = (val*)(1l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "?class_info[";
var39 = (val*)(12l<<2|1);
var40 = (val*)(12l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var26)->values[2]=var36;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "]:";
var47 = (val*)(2l<<2|1);
var48 = (val*)(2l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var26)->values[4]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "->class)";
var55 = (val*)(8l<<2|1);
var56 = (val*)(8l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var26)->values[6]=var52;
} else {
var26 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var26)->values[1]=var_tag;
((struct instance_core__NativeArray*)var26)->values[3]=var_tag;
{
var59 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var26)->values[5]=var59;
{
var60 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
var = var60;
goto RET_LABEL;
} else {
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "->class";
var67 = (val*)(7l<<2|1);
var68 = (val*)(7l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[1]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var71 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var62)->values[0]=var71;
{
var72 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
var = var72;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var75 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var73) on <var73:AbstractCompiler(SeparateCompiler)> */
var78 = var73->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var73:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var81 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var76&3)?class_info[((long)var76&3)]:var76->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var76, var79); /* add on <var76:Set[MType]>*/
}
if (unlikely(varonce82==NULL)) {
var83 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "class_";
var88 = (val*)(6l<<2|1);
var89 = (val*)(6l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var83)->values[0]=var85;
} else {
var83 = varonce82;
varonce82 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var94 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = ((val*(*)(val* self))(var92->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var92); /* c_name on <var92:MType>*/
}
((struct instance_core__NativeArray*)var83)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var83->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var83); /* native_to_s on <var83:NativeArray[String]>*/
}
varonce82 = var83;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var96); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce97==NULL)) {
var98 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "(&class_";
var103 = (val*)(8l<<2|1);
var104 = (val*)(8l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var98)->values[0]=var100;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = ")";
var111 = (val*)(1l<<2|1);
var112 = (val*)(1l<<2|1);
var113 = (val*)((long)(0)<<2|3);
var114 = (val*)((long)(0)<<2|3);
var110 = core__flat___CString___to_s_unsafe(var109, var111, var112, var113, var114);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var98)->values[2]=var108;
} else {
var98 = varonce97;
varonce97 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var117 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var117 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = ((val*(*)(val* self))(var115->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var115); /* c_name on <var115:MType>*/
}
((struct instance_core__NativeArray*)var98)->values[1]=var118;
{
var119 = ((val*(*)(val* self))(var98->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
var = var119;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$type_info for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__SeparateCompilerVisitor___type_info(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : String */;
val* var_tag /* var tag: String */;
val* var26 /* : NativeArray[String] */;
static val* varonce;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : AbstractCompiler */;
val* var75 /* : AbstractCompiler */;
val* var76 /* : Set[MType] */;
val* var78 /* : Set[MType] */;
val* var79 /* : MType */;
val* var81 /* : MType */;
val* var83 /* : NativeArray[String] */;
static val* varonce82;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : MType */;
val* var94 /* : MType */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Bool */;
val* var114 /* : nullable Bool */;
val* var115 /* : MType */;
val* var117 /* : MType */;
val* var118 /* : String */;
val* var119 /* : String */;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var1); /* is_c_primitive on <var1:MType>*/
}
var5 = !var4;
if (var5){
{
var7 = nitc___nitc__SeparateCompilerVisitor___can_be_primitive(self, var_value);
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var8) on <var8:AbstractCompiler(SeparateCompiler)> */
var13 = var8->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var8:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_tag_primitives (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var14:ToolContext> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline opts$Option$value (var17) on <var17:OptionBool> */
var22 = var17->attrs[COLOR_opts__Option___value].val; /* _value on <var17:OptionBool> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = (short int)((long)(var20)>>2);
var24 = !var23;
var6 = var24;
} else {
var6 = var_;
}
if (var6){
{
var25 = nitc___nitc__SeparateCompilerVisitor___extract_tag(self, var_value);
}
var_tag = var25;
if (unlikely(varonce==NULL)) {
var26 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "(";
var31 = (val*)(1l<<2|1);
var32 = (val*)(1l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "?type_info[";
var39 = (val*)(11l<<2|1);
var40 = (val*)(11l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var26)->values[2]=var36;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "]:";
var47 = (val*)(2l<<2|1);
var48 = (val*)(2l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var26)->values[4]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "->type)";
var55 = (val*)(7l<<2|1);
var56 = (val*)(7l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var26)->values[6]=var52;
} else {
var26 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var26)->values[1]=var_tag;
((struct instance_core__NativeArray*)var26)->values[3]=var_tag;
{
var59 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var26)->values[5]=var59;
{
var60 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
var = var60;
goto RET_LABEL;
} else {
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "->type";
var67 = (val*)(6l<<2|1);
var68 = (val*)(6l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[1]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var71 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var62)->values[0]=var71;
{
var72 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
var = var72;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var75 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$undead_types (var73) on <var73:AbstractCompiler(SeparateCompiler)> */
var78 = var73->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var73:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var81 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var76&3)?class_info[((long)var76&3)]:var76->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var76, var79); /* add on <var76:Set[MType]>*/
}
if (unlikely(varonce82==NULL)) {
var83 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "type_";
var88 = (val*)(5l<<2|1);
var89 = (val*)(5l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var83)->values[0]=var85;
} else {
var83 = varonce82;
varonce82 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var94 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = ((val*(*)(val* self))(var92->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var92); /* c_name on <var92:MType>*/
}
((struct instance_core__NativeArray*)var83)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var83->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var83); /* native_to_s on <var83:NativeArray[String]>*/
}
varonce82 = var83;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var96); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:SeparateCompilerVisitor>*/
}
if (unlikely(varonce97==NULL)) {
var98 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "(&type_";
var103 = (val*)(7l<<2|1);
var104 = (val*)(7l<<2|1);
var105 = (val*)((long)(0)<<2|3);
var106 = (val*)((long)(0)<<2|3);
var102 = core__flat___CString___to_s_unsafe(var101, var103, var104, var105, var106);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var98)->values[0]=var100;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = ")";
var111 = (val*)(1l<<2|1);
var112 = (val*)(1l<<2|1);
var113 = (val*)((long)(0)<<2|3);
var114 = (val*)((long)(0)<<2|3);
var110 = core__flat___CString___to_s_unsafe(var109, var111, var112, var113, var114);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var98)->values[2]=var108;
} else {
var98 = varonce97;
varonce97 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var117 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var117 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = ((val*(*)(val* self))(var115->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var115); /* c_name on <var115:MType>*/
}
((struct instance_core__NativeArray*)var98)->values[1]=var118;
{
var119 = ((val*(*)(val* self))(var98->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
var = var119;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$compile_callsite for (self: SeparateCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : nullable RapidTypeAnalysis */;
val* var6 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AbstractCompiler */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : ModelBuilder */;
val* var14 /* : ModelBuilder */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
val* var18 /* : OptionBool */;
val* var20 /* : OptionBool */;
val* var21 /* : nullable Object */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
val* var31 /* : MMethodDef */;
val* var33 /* : MMethodDef */;
val* var34 /* : Array[MProperty] */;
val* var36 /* : Array[MProperty] */;
short int var37 /* : Bool */;
val* var38 /* : Set[MMethodDef] */;
val* var_tgs /* var tgs: Set[MMethodDef] */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
val* var44 /* : nullable RuntimeVariable */;
short int var45 /* : Bool */;
val* var46 /* : MMethodDef */;
val* var48 /* : MMethodDef */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
val* var53 /* : MMethod */;
val* var55 /* : MMethod */;
val* var56 /* : String */;
val* var58 /* : String */;
static val* varonce;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : MMethodDef */;
val* var72 /* : MMethodDef */;
val* var73 /* : nullable RuntimeVariable */;
val* var74 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_args = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline separate_compiler$SeparateCompiler$runtime_type_analysis (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var1:AbstractCompiler(SeparateCompiler)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_rta = var4;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var9) on <var9:AbstractCompiler(SeparateCompiler)> */
var14 = var9->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var9:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var12) on <var12:ModelBuilder> */
var17 = var12->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var12:ModelBuilder> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_direct_call_monomorph (var15) on <var15:ToolContext> */
var20 = var15->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_direct_call_monomorph].val; /* _opt_direct_call_monomorph on <var15:ToolContext> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_direct_call_monomorph");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 50);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline opts$Option$value (var18) on <var18:OptionBool> */
var23 = var18->attrs[COLOR_opts__Option___value].val; /* _value on <var18:OptionBool> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = (short int)((long)(var21)>>2);
var_ = var24;
if (var24){
if (var_rta == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
var8 = var25;
} else {
var8 = var_;
}
var_30 = var8;
if (var8){
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var33 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var31) on <var31:MMethodDef> */
var36 = var31->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var31:MMethodDef> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var34);
}
var7 = var37;
} else {
var7 = var_30;
}
if (var7){
{
var38 = nitc___nitc__RapidTypeAnalysis___live_targets(var_rta, var_callsite);
}
var_tgs = var38;
{
var39 = ((long(*)(val* self))((((long)var_tgs&3)?class_info[((long)var_tgs&3)]:var_tgs->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_tgs); /* length on <var_tgs:Set[MMethodDef]>*/
}
{
{ /* Inline kernel$Int$== (var39,1l) on <var39:Int> */
var42 = var39 == 1l;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
var43 = ((val*(*)(val* self))((((long)var_tgs&3)?class_info[((long)var_tgs&3)]:var_tgs->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_tgs); /* first on <var_tgs:Set[MMethodDef]>*/
}
{
var44 = nitc___nitc__SeparateCompilerVisitor___direct_call(self, var43, var_args);
}
var = var44;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var48 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model$MMethodDef$is_intern (var46) on <var46:MMethodDef> */
var51 = var46->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <var46:MMethodDef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_52 = var49;
if (var49){
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:CallSite> */
var55 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var53) on <var53:MMethod> */
var58 = var53->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var53:MMethod> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (likely(varonce!=NULL)) {
var59 = varonce;
} else {
var60 = "object_id";
var62 = (val*)(9l<<2|1);
var63 = (val*)(9l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce = var59;
}
{
{ /* Inline kernel$Object$!= (var56,var59) on <var56:String> */
var_other = var59;
{
var68 = ((short int(*)(val* self, val* p0))(var56->class->vft[COLOR_core__kernel__Object___61d_61d]))(var56, var_other); /* == on <var56:String>*/
}
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var45 = var66;
} else {
var45 = var_52;
}
if (var45){
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var72 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = nitc___nitc__SeparateCompilerVisitor___direct_call(self, var70, var_args);
}
var = var73;
goto RET_LABEL;
} else {
}
{
var74 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, p0, p1); /* compile_callsite on <self:SeparateCompilerVisitor>*/
}
var = var74;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$direct_call for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___direct_call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : nullable RuntimeVariable */;
val* var_res0 /* var res0: nullable RuntimeVariable */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
var_mpropdef = p0;
var_args = p1;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__SeparateCompilerVisitor___before_send(self, var1, var_args);
}
var_res0 = var4;
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_mpropdef, var8, var_args);
}
var_res = var11;
if (var_res0 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res0,((val*)NULL)) on <var_res0:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_res0->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res0, var_other); /* == on <var_res0:nullable RuntimeVariable(RuntimeVariable)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
if (var_res == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1370);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res0, var_res); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <self:SeparateCompilerVisitor>*/
}
var_res = var_res0;
} else {
}
if (likely(varonce!=NULL)) {
var22 = varonce;
} else {
var23 = "}";
var25 = (val*)(1l<<2|1);
var26 = (val*)(1l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce = var22;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var22); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var_m /* var m: MModule */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : AbstractCompiler */;
val* var17 /* : AbstractCompiler */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var22 /* : nullable Object */;
val* var23 /* : MType */;
val* var25 /* : MType */;
val* var26 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var27 /* : AbstractCompiler */;
val* var29 /* : AbstractCompiler */;
val* var31 /* : nullable RuntimeVariable */;
var_mmethod = p0;
var_arguments = p1;
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((short int(*)(val* self))(var2->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var2); /* is_c_primitive on <var2:MType>*/
}
if (var5){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var6) on <var6:AbstractCompiler(SeparateCompiler)> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var6:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_m = var9;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$realmainmodule (var15) on <var15:AbstractCompiler(SeparateCompiler)> */
var20 = var15->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <var15:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (var12,var18) on <var12:AbstractCompiler(SeparateCompiler)> */
var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var18; /* _mainmodule on <var12:AbstractCompiler(SeparateCompiler)> */
RET_LABEL21:(void)0;
}
}
{
var22 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var22) on <var22:nullable Object(RuntimeVariable)> */
var25 = var22->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var22:nullable Object(RuntimeVariable)> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__AbstractCompilerVisitor___monomorphic_send(self, var_mmethod, var23, var_arguments);
}
var_res = var26;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var29 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule= (var27,var_m) on <var27:AbstractCompiler(SeparateCompiler)> */
var27->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_m; /* _mainmodule on <var27:AbstractCompiler(SeparateCompiler)> */
RET_LABEL30:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var31 = nitc___nitc__SeparateCompilerVisitor___table_send(self, var_mmethod, var_arguments, var_mmethod);
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler$SeparateCompilerVisitor$before_send for (self: SeparateCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__SeparateCompilerVisitor___before_send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var1 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var13 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
val* var33 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
short int var44 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
val* var66 /* : String */;
val* var67 /* : String */;
short int var68 /* : Bool */;
val* var69 /* : String */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Bool */;
val* var79 /* : nullable Bool */;
short int var80 /* : Bool */;
short int var_81 /* var : Bool */;
val* var82 /* : String */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
short int var93 /* : Bool */;
val* var94 /* : MClassType */;
val* var95 /* : RuntimeVariable */;
val* var96 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
val* var97 /* : MType */;
val* var99 /* : MType */;
short int var100 /* : Bool */;
int cltype;
int idtype;
val* var102 /* : NativeArray[String] */;
static val* varonce101;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Bool */;
val* var110 /* : nullable Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var122 /* : MType */;
val* var124 /* : MType */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Bool */;
val* var157 /* : nullable Bool */;
val* var158 /* : String */;
val* var159 /* : String */;
val* var160 /* : String */;
val* var161 /* : String */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Int */;
val* var170 /* : nullable Bool */;
val* var171 /* : nullable Bool */;
short int var172 /* : Bool */;
val* var173 /* : MClassType */;
val* var174 /* : RuntimeVariable */;
val* var175 /* : nullable Object */;
val* var_arg176 /* var arg: RuntimeVariable */;
val* var177 /* : MType */;
val* var179 /* : MType */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
val* var184 /* : NativeArray[String] */;
static val* varonce183;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Bool */;
val* var200 /* : nullable Bool */;
val* var201 /* : String */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var204 /* : MType */;
val* var206 /* : MType */;
short int var207 /* : Bool */;
int cltype208;
int idtype209;
val* var211 /* : NativeArray[String] */;
static val* varonce210;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
val* var216 /* : nullable Int */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Bool */;
val* var219 /* : nullable Bool */;
val* var220 /* : String */;
val* var221 /* : String */;
val* var223 /* : NativeArray[String] */;
static val* varonce222;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : CString */;
val* var227 /* : String */;
val* var228 /* : nullable Int */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Bool */;
val* var231 /* : nullable Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : CString */;
val* var235 /* : String */;
val* var236 /* : nullable Int */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Bool */;
val* var239 /* : nullable Bool */;
val* var240 /* : String */;
val* var241 /* : String */;
val* var242 /* : String */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : CString */;
val* var246 /* : String */;
val* var247 /* : nullable Int */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Bool */;
val* var250 /* : nullable Bool */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : CString */;
val* var254 /* : String */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Int */;
val* var257 /* : nullable Bool */;
val* var258 /* : nullable Bool */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Bool */;
val* var266 /* : nullable Bool */;
short int var267 /* : Bool */;
val* var268 /* : AbstractCompiler */;
val* var270 /* : AbstractCompiler */;
val* var271 /* : ModelBuilder */;
val* var273 /* : ModelBuilder */;
val* var274 /* : ToolContext */;
val* var276 /* : ToolContext */;
val* var277 /* : OptionBool */;
val* var279 /* : OptionBool */;
val* var280 /* : nullable Object */;
val* var282 /* : nullable Object */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var_285 /* var : Bool */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
val* var288 /* : String */;
val* var290 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : CString */;
val* var294 /* : String */;
val* var295 /* : nullable Int */;
val* var296 /* : nullable Int */;
val* var297 /* : nullable Bool */;
val* var298 /* : nullable Bool */;
short int var299 /* : Bool */;
short int var_300 /* var : Bool */;
val* var301 /* : String */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : nullable Int */;
val* var309 /* : nullable Int */;
val* var310 /* : nullable Bool */;
val* var311 /* : nullable Bool */;
short int var312 /* : Bool */;
short int var_313 /* var : Bool */;
val* var314 /* : String */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : CString */;
val* var320 /* : String */;
val* var321 /* : nullable Int */;
val* var322 /* : nullable Int */;
val* var323 /* : nullable Bool */;
val* var324 /* : nullable Bool */;
short int var325 /* : Bool */;
val* var326 /* : nullable Object */;
val* var_arg327 /* var arg: RuntimeVariable */;
val* var328 /* : MType */;
val* var330 /* : MType */;
short int var331 /* : Bool */;
int cltype332;
int idtype333;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var337 /* : Bool */;
short int var339 /* : Bool */;
val* var340 /* : MClassType */;
val* var341 /* : RuntimeVariable */;
val* var342 /* : String */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : CString */;
val* var348 /* : String */;
val* var349 /* : nullable Int */;
val* var350 /* : nullable Int */;
val* var351 /* : nullable Bool */;
val* var352 /* : nullable Bool */;
short int var353 /* : Bool */;
val* var355 /* : NativeArray[String] */;
static val* varonce354;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : CString */;
val* var359 /* : String */;
val* var360 /* : nullable Int */;
val* var361 /* : nullable Int */;
val* var362 /* : nullable Bool */;
val* var363 /* : nullable Bool */;
val* var364 /* : String */;
val* var365 /* : String */;
val* var367 /* : NativeArray[String] */;
static val* varonce366;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : CString */;
val* var371 /* : String */;
val* var372 /* : nullable Int */;
val* var373 /* : nullable Int */;
val* var374 /* : nullable Bool */;
val* var375 /* : nullable Bool */;
val* var376 /* : String */;
val* var377 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : CString */;
val* var381 /* : String */;
val* var382 /* : nullable Int */;
val* var383 /* : nullable Int */;
val* var384 /* : nullable Bool */;
val* var385 /* : nullable Bool */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : CString */;
val* var389 /* : String */;
val* var390 /* : nullable Int */;
val* var391 /* : nullable Int */;
val* var392 /* : nullable Bool */;
val* var393 /* : nullable Bool */;
var_mmethod = p0;
var_arguments = p1;
var_res = ((val*)NULL);
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var4) on <var4:AbstractCompiler(SeparateCompiler)> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var7) on <var7:ModelBuilder> */
var12 = var7->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var7:ModelBuilder> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_null (var10) on <var10:ToolContext> */
var15 = var10->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var10:ToolContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts$Option$value (var13) on <var13:OptionBool> */
var18 = var13->attrs[COLOR_opts__Option___value].val; /* _value on <var13:OptionBool> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = (short int)((long)(var16)>>2);
var20 = !var19;
var_ = var20;
if (var20){
var3 = var_;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var23 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "==";
var27 = (val*)(2l<<2|1);
var28 = (val*)(2l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
var31 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var24); /* == on <var21:String>*/
}
var3 = var31;
}
var_32 = var3;
if (var3){
var2 = var_32;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var35 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "!=";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
var44 = ((short int(*)(val* self, val* p0))(var33->class->vft[COLOR_core__kernel__Object___61d_61d]))(var33, var37); /* == on <var33:String>*/
}
var2 = var44;
}
var_consider_null = var2;
{
var46 = nitc___nitc__AbstractCompilerVisitor___maybenull(self, var_recv);
}
var_47 = var46;
if (var46){
var45 = var_consider_null;
} else {
var45 = var_47;
}
if (var45){
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "if (";
var54 = (val*)(4l<<2|1);
var55 = (val*)(4l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[0]=var51;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = " == NULL) {";
var62 = (val*)(11l<<2|1);
var63 = (val*)(11l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var49)->values[2]=var59;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
var66 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var49)->values[1]=var66;
{
var67 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var67); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var71 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "==";
var76 = (val*)(2l<<2|1);
var77 = (val*)(2l<<2|1);
var78 = (val*)((long)(0)<<2|3);
var79 = (val*)((long)(0)<<2|3);
var75 = core__flat___CString___to_s_unsafe(var74, var76, var77, var78, var79);
var73 = var75;
varonce72 = var73;
}
{
var80 = ((short int(*)(val* self, val* p0))(var69->class->vft[COLOR_core__kernel__Object___61d_61d]))(var69, var73); /* == on <var69:String>*/
}
var_81 = var80;
if (var80){
var68 = var_81;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var84 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "is_same_instance";
var89 = (val*)(16l<<2|1);
var90 = (val*)(16l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
{
var93 = ((short int(*)(val* self, val* p0))(var82->class->vft[COLOR_core__kernel__Object___61d_61d]))(var82, var86); /* == on <var82:String>*/
}
var68 = var93;
}
if (var68){
{
var94 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var95 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var94);
}
var_res = var95;
{
var96 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg = var96;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var99 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
/* <var97:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var97->type->table_size) {
var100 = 0;
} else {
var100 = var97->type->type_table[cltype] == idtype;
}
if (var100){
if (unlikely(varonce101==NULL)) {
var102 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = " = (";
var107 = (val*)(4l<<2|1);
var108 = (val*)(4l<<2|1);
var109 = (val*)((long)(0)<<2|3);
var110 = (val*)((long)(0)<<2|3);
var106 = core__flat___CString___to_s_unsafe(var105, var107, var108, var109, var110);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var102)->values[1]=var104;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = " == NULL);";
var115 = (val*)(10l<<2|1);
var116 = (val*)(10l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var102)->values[3]=var112;
} else {
var102 = varonce101;
varonce101 = NULL;
}
{
var119 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var102)->values[0]=var119;
{
var120 = ((val*(*)(val* self))(var_arg->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_arg); /* to_s on <var_arg:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var102)->values[2]=var120;
{
var121 = ((val*(*)(val* self))(var102->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var102); /* native_to_s on <var102:NativeArray[String]>*/
}
varonce101 = var102;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var121); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg) on <var_arg:RuntimeVariable> */
var124 = var_arg->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg:RuntimeVariable> */
if (unlikely(var124 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
/* <var122:MType> isa MNullType */
cltype126 = type_nitc__MNullType.color;
idtype127 = type_nitc__MNullType.id;
if(cltype126 >= var122->type->table_size) {
var125 = 0;
} else {
var125 = var122->type->type_table[cltype126] == idtype127;
}
if (var125){
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = " = 1; /* is null */";
var134 = (val*)(19l<<2|1);
var135 = (val*)(19l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[1]=var131;
} else {
var129 = varonce128;
varonce128 = NULL;
}
{
var138 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var129)->values[0]=var138;
{
var139 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var139); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce140==NULL)) {
var141 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = " = 0; /* ";
var146 = (val*)(9l<<2|1);
var147 = (val*)(9l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var141)->values[1]=var143;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = " cannot be null */";
var154 = (val*)(18l<<2|1);
var155 = (val*)(18l<<2|1);
var156 = (val*)((long)(0)<<2|3);
var157 = (val*)((long)(0)<<2|3);
var153 = core__flat___CString___to_s_unsafe(var152, var154, var155, var156, var157);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var141)->values[3]=var151;
} else {
var141 = varonce140;
varonce140 = NULL;
}
{
var158 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var141)->values[0]=var158;
{
var159 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_arg);
}
((struct instance_core__NativeArray*)var141)->values[2]=var159;
{
var160 = ((val*(*)(val* self))(var141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var160); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var163 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var163 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "!=";
var168 = (val*)(2l<<2|1);
var169 = (val*)(2l<<2|1);
var170 = (val*)((long)(0)<<2|3);
var171 = (val*)((long)(0)<<2|3);
var167 = core__flat___CString___to_s_unsafe(var166, var168, var169, var170, var171);
var165 = var167;
varonce164 = var165;
}
{
var172 = ((short int(*)(val* self, val* p0))(var161->class->vft[COLOR_core__kernel__Object___61d_61d]))(var161, var165); /* == on <var161:String>*/
}
if (var172){
{
var173 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var174 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var173);
}
var_res = var174;
{
var175 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg176 = var175;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg176) on <var_arg176:RuntimeVariable> */
var179 = var_arg176->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg176:RuntimeVariable> */
if (unlikely(var179 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
/* <var177:MType> isa MNullableType */
cltype181 = type_nitc__MNullableType.color;
idtype182 = type_nitc__MNullableType.id;
if(cltype181 >= var177->type->table_size) {
var180 = 0;
} else {
var180 = var177->type->type_table[cltype181] == idtype182;
}
if (var180){
if (unlikely(varonce183==NULL)) {
var184 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = " = (";
var189 = (val*)(4l<<2|1);
var190 = (val*)(4l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var184)->values[1]=var186;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = " != NULL);";
var197 = (val*)(10l<<2|1);
var198 = (val*)(10l<<2|1);
var199 = (val*)((long)(0)<<2|3);
var200 = (val*)((long)(0)<<2|3);
var196 = core__flat___CString___to_s_unsafe(var195, var197, var198, var199, var200);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var184)->values[3]=var194;
} else {
var184 = varonce183;
varonce183 = NULL;
}
{
var201 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var184)->values[0]=var201;
{
var202 = ((val*(*)(val* self))(var_arg176->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_arg176); /* to_s on <var_arg176:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var184)->values[2]=var202;
{
var203 = ((val*(*)(val* self))(var184->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var184); /* native_to_s on <var184:NativeArray[String]>*/
}
varonce183 = var184;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var203); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg176) on <var_arg176:RuntimeVariable> */
var206 = var_arg176->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg176:RuntimeVariable> */
if (unlikely(var206 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
/* <var204:MType> isa MNullType */
cltype208 = type_nitc__MNullType.color;
idtype209 = type_nitc__MNullType.id;
if(cltype208 >= var204->type->table_size) {
var207 = 0;
} else {
var207 = var204->type->type_table[cltype208] == idtype209;
}
if (var207){
if (unlikely(varonce210==NULL)) {
var211 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = " = 0; /* is null */";
var216 = (val*)(19l<<2|1);
var217 = (val*)(19l<<2|1);
var218 = (val*)((long)(0)<<2|3);
var219 = (val*)((long)(0)<<2|3);
var215 = core__flat___CString___to_s_unsafe(var214, var216, var217, var218, var219);
var213 = var215;
varonce212 = var213;
}
((struct instance_core__NativeArray*)var211)->values[1]=var213;
} else {
var211 = varonce210;
varonce210 = NULL;
}
{
var220 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var211)->values[0]=var220;
{
var221 = ((val*(*)(val* self))(var211->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var211); /* native_to_s on <var211:NativeArray[String]>*/
}
varonce210 = var211;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var221); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce222==NULL)) {
var223 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = " = 1; /* ";
var228 = (val*)(9l<<2|1);
var229 = (val*)(9l<<2|1);
var230 = (val*)((long)(0)<<2|3);
var231 = (val*)((long)(0)<<2|3);
var227 = core__flat___CString___to_s_unsafe(var226, var228, var229, var230, var231);
var225 = var227;
varonce224 = var225;
}
((struct instance_core__NativeArray*)var223)->values[1]=var225;
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = " cannot be null */";
var236 = (val*)(18l<<2|1);
var237 = (val*)(18l<<2|1);
var238 = (val*)((long)(0)<<2|3);
var239 = (val*)((long)(0)<<2|3);
var235 = core__flat___CString___to_s_unsafe(var234, var236, var237, var238, var239);
var233 = var235;
varonce232 = var233;
}
((struct instance_core__NativeArray*)var223)->values[3]=var233;
} else {
var223 = varonce222;
varonce222 = NULL;
}
{
var240 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var223)->values[0]=var240;
{
var241 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_arg176);
}
((struct instance_core__NativeArray*)var223)->values[2]=var241;
{
var242 = ((val*(*)(val* self))(var223->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var223); /* native_to_s on <var223:NativeArray[String]>*/
}
varonce222 = var223;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var242); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
}
} else {
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = "Receiver is null";
var247 = (val*)(16l<<2|1);
var248 = (val*)(16l<<2|1);
var249 = (val*)((long)(0)<<2|3);
var250 = (val*)((long)(0)<<2|3);
var246 = core__flat___CString___to_s_unsafe(var245, var247, var248, var249, var250);
var244 = var246;
varonce243 = var244;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var244); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:SeparateCompilerVisitor>*/
}
}
}
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "} else {";
var255 = (val*)(8l<<2|1);
var256 = (val*)(8l<<2|1);
var257 = (val*)((long)(0)<<2|3);
var258 = (val*)((long)(0)<<2|3);
var254 = core__flat___CString___to_s_unsafe(var253, var255, var256, var257, var258);
var252 = var254;
varonce251 = var252;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var252); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "{";
var263 = (val*)(1l<<2|1);
var264 = (val*)(1l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var260); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:SeparateCompilerVisitor> */
var270 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var270 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var268 = var270;
RET_LABEL269:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var268) on <var268:AbstractCompiler(SeparateCompiler)> */
var273 = var268->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var268:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var271) on <var271:ModelBuilder> */
var276 = var271->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var271:ModelBuilder> */
if (unlikely(var276 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
{ /* Inline separate_compiler$ToolContext$opt_no_shortcut_equate (var274) on <var274:ToolContext> */
var279 = var274->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_shortcut_equate].val; /* _opt_no_shortcut_equate on <var274:ToolContext> */
if (unlikely(var279 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_equate");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 30);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
{ /* Inline opts$Option$value (var277) on <var277:OptionBool> */
var282 = var277->attrs[COLOR_opts__Option___value].val; /* _value on <var277:OptionBool> */
var280 = var282;
RET_LABEL281:(void)0;
}
}
var283 = (short int)((long)(var280)>>2);
var284 = !var283;
var_285 = var284;
if (var284){
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var290 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var290 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var288 = var290;
RET_LABEL289:(void)0;
}
}
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = "==";
var295 = (val*)(2l<<2|1);
var296 = (val*)(2l<<2|1);
var297 = (val*)((long)(0)<<2|3);
var298 = (val*)((long)(0)<<2|3);
var294 = core__flat___CString___to_s_unsafe(var293, var295, var296, var297, var298);
var292 = var294;
varonce291 = var292;
}
{
var299 = ((short int(*)(val* self, val* p0))(var288->class->vft[COLOR_core__kernel__Object___61d_61d]))(var288, var292); /* == on <var288:String>*/
}
var_300 = var299;
if (var299){
var287 = var_300;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var303 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var303 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var301 = var303;
RET_LABEL302:(void)0;
}
}
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "!=";
var308 = (val*)(2l<<2|1);
var309 = (val*)(2l<<2|1);
var310 = (val*)((long)(0)<<2|3);
var311 = (val*)((long)(0)<<2|3);
var307 = core__flat___CString___to_s_unsafe(var306, var308, var309, var310, var311);
var305 = var307;
varonce304 = var305;
}
{
var312 = ((short int(*)(val* self, val* p0))(var301->class->vft[COLOR_core__kernel__Object___61d_61d]))(var301, var305); /* == on <var301:String>*/
}
var287 = var312;
}
var_313 = var287;
if (var287){
var286 = var_313;
} else {
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var316 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var316 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "is_same_instance";
var321 = (val*)(16l<<2|1);
var322 = (val*)(16l<<2|1);
var323 = (val*)((long)(0)<<2|3);
var324 = (val*)((long)(0)<<2|3);
var320 = core__flat___CString___to_s_unsafe(var319, var321, var322, var323, var324);
var318 = var320;
varonce317 = var318;
}
{
var325 = ((short int(*)(val* self, val* p0))(var314->class->vft[COLOR_core__kernel__Object___61d_61d]))(var314, var318); /* == on <var314:String>*/
}
var286 = var325;
}
var267 = var286;
} else {
var267 = var_285;
}
if (var267){
{
var326 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg327 = var326;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_arg327) on <var_arg327:RuntimeVariable> */
var330 = var_arg327->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_arg327:RuntimeVariable> */
if (unlikely(var330 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
/* <var328:MType> isa MNullType */
cltype332 = type_nitc__MNullType.color;
idtype333 = type_nitc__MNullType.id;
if(cltype332 >= var328->type->table_size) {
var331 = 0;
} else {
var331 = var328->type->type_table[cltype332] == idtype333;
}
if (var331){
if (var_res == NULL) {
var334 = 1; /* is null */
} else {
var334 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var339 = var_res == var_other;
var337 = var339;
goto RET_LABEL338;
RET_LABEL338:(void)0;
}
}
var335 = var337;
goto RET_LABEL336;
RET_LABEL336:(void)0;
}
var334 = var335;
}
if (var334){
{
var340 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var341 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var340);
}
var_res = var341;
} else {
}
{
{ /* Inline model$MProperty$name (var_mmethod) on <var_mmethod:MMethod> */
var344 = var_mmethod->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mmethod:MMethod> */
if (unlikely(var344 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var342 = var344;
RET_LABEL343:(void)0;
}
}
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "!=";
var349 = (val*)(2l<<2|1);
var350 = (val*)(2l<<2|1);
var351 = (val*)((long)(0)<<2|3);
var352 = (val*)((long)(0)<<2|3);
var348 = core__flat___CString___to_s_unsafe(var347, var349, var350, var351, var352);
var346 = var348;
varonce345 = var346;
}
{
var353 = ((short int(*)(val* self, val* p0))(var342->class->vft[COLOR_core__kernel__Object___61d_61d]))(var342, var346); /* == on <var342:String>*/
}
if (var353){
if (unlikely(varonce354==NULL)) {
var355 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce356!=NULL)) {
var357 = varonce356;
} else {
var358 = " = 1; /* arg is null and recv is not */";
var360 = (val*)(39l<<2|1);
var361 = (val*)(39l<<2|1);
var362 = (val*)((long)(0)<<2|3);
var363 = (val*)((long)(0)<<2|3);
var359 = core__flat___CString___to_s_unsafe(var358, var360, var361, var362, var363);
var357 = var359;
varonce356 = var357;
}
((struct instance_core__NativeArray*)var355)->values[1]=var357;
} else {
var355 = varonce354;
varonce354 = NULL;
}
{
var364 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var355)->values[0]=var364;
{
var365 = ((val*(*)(val* self))(var355->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var355); /* native_to_s on <var355:NativeArray[String]>*/
}
varonce354 = var355;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var365); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce366==NULL)) {
var367 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce368!=NULL)) {
var369 = varonce368;
} else {
var370 = " = 0; /* arg is null but recv is not */";
var372 = (val*)(39l<<2|1);
var373 = (val*)(39l<<2|1);
var374 = (val*)((long)(0)<<2|3);
var375 = (val*)((long)(0)<<2|3);
var371 = core__flat___CString___to_s_unsafe(var370, var372, var373, var374, var375);
var369 = var371;
varonce368 = var369;
}
((struct instance_core__NativeArray*)var367)->values[1]=var369;
} else {
var367 = varonce366;
varonce366 = NULL;
}
{
var376 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var367)->values[0]=var376;
{
var377 = ((val*(*)(val* self))(var367->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var367); /* native_to_s on <var367:NativeArray[String]>*/
}
varonce366 = var367;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var377); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
}
if (likely(varonce378!=NULL)) {
var379 = varonce378;
} else {
var380 = "}";
var382 = (val*)(1l<<2|1);
var383 = (val*)(1l<<2|1);
var384 = (val*)((long)(0)<<2|3);
var385 = (val*)((long)(0)<<2|3);
var381 = core__flat___CString___to_s_unsafe(var380, var382, var383, var384, var385);
var379 = var381;
varonce378 = var379;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var379); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
}
if (likely(varonce386!=NULL)) {
var387 = varonce386;
} else {
var388 = "if (0) {";
var390 = (val*)(8l<<2|1);
var391 = (val*)(8l<<2|1);
var392 = (val*)((long)(0)<<2|3);
var393 = (val*)((long)(0)<<2|3);
var389 = core__flat___CString___to_s_unsafe(var388, var390, var391, var392, var393);
var387 = var389;
varonce386 = var387;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var387); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:SeparateCompilerVisitor>*/
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
