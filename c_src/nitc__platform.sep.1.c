#include "nitc__platform.sep.0.h"
/* method platform$ToolContext$platform_from_name for (self: ToolContext, String): nullable Platform */
val* nitc__platform___ToolContext___platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
var_name = p0;
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform$PlatformPhase$process_annotated_node for (self: PlatformPhase, ANode, AAnnotation) */
void nitc__platform___nitc__platform__PlatformPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var_annotation_name /* var annotation_name: String */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var16 /* : Bool */;
int cltype;
int idtype;
short int var17 /* : Bool */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var36 /* : String */;
val* var37 /* : ANodes[AExpr] */;
val* var39 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name;
short int var46 /* : Bool */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
val* var65 /* : String */;
short int var66 /* : Bool */;
val* var67 /* : AModuleName */;
val* var69 /* : AModuleName */;
val* var70 /* : String */;
val* var_platform_name /* var platform_name: nullable Object */;
val* var71 /* : nullable Object */;
val* var72 /* : nullable String */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Bool */;
val* var84 /* : nullable Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
val* var93 /* : String */;
val* var_format_error /* var format_error: String */;
val* var94 /* : nullable ANode */;
val* var96 /* : nullable ANode */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
val* var_nmodule /* var nmodule: AModule */;
val* var101 /* : nullable MModule */;
val* var103 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var104 /* : ToolContext */;
val* var106 /* : ToolContext */;
val* var107 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
val* var_other111 /* var other: nullable Object */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : ToolContext */;
val* var117 /* : ToolContext */;
val* var118 /* : Location */;
val* var120 /* : Location */;
val* var122 /* : NativeArray[String] */;
static val* varonce121;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Bool */;
val* var130 /* : nullable Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
val* var139 /* : String */;
val* var140 /* : Message */;
val* var141 /* : nullable Platform */;
val* var_previous_target_platform /* var previous_target_platform: nullable Platform */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var_ /* var : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
val* var153 /* : NativeArray[String] */;
static val* varonce152;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Bool */;
val* var169 /* : nullable Bool */;
val* var170 /* : String */;
val* var171 /* : String */;
var_nmoduledecl = p0;
var_nat = p1;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "platform";
var3 = (val*)(8l<<2|1);
var4 = (val*)(8l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
var_annotation_name = var;
{
var7 = nitc___nitc__AAnnotation___name(var_nat);
}
{
{ /* Inline kernel$Object$!= (var7,var_annotation_name) on <var7:String> */
var_other = var_annotation_name;
{
var10 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var_other); /* == on <var7:String>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase$Phase$toolcontext (self) on <self:PlatformPhase> */
var14 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nitc__modelbuilder_base___ToolContext___modelbuilder(var12);
}
var_modelbuilder = var15;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_nitc__AModuledecl.color;
idtype = type_nitc__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var16 = 0;
} else {
var16 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var17 = !var16;
if (var17){
if (unlikely(varonce18==NULL)) {
var19 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Syntax Error: only the declaration of modules may use `";
var24 = (val*)(55l<<2|1);
var25 = (val*)(55l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "`.";
var32 = (val*)(2l<<2|1);
var33 = (val*)(2l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[2]=var29;
} else {
var19 = varonce18;
varonce18 = NULL;
}
((struct instance_core__NativeArray*)var19)->values[1]=var_annotation_name;
{
var36 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var36); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (var_nat) on <var_nat:AAnnotation> */
var39 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_args = var37;
{
var40 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel$Int$> (var40,1l) on <var40:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var46 = var40 > 1l;
var41 = var46;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
if (unlikely(varonce47==NULL)) {
var48 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "Syntax Error: `";
var53 = (val*)(15l<<2|1);
var54 = (val*)(15l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var48)->values[0]=var50;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "` expects at most a single argument.";
var61 = (val*)(36l<<2|1);
var62 = (val*)(36l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var48)->values[2]=var58;
} else {
var48 = varonce47;
varonce47 = NULL;
}
((struct instance_core__NativeArray*)var48)->values[1]=var_annotation_name;
{
var65 = ((val*(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var65); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var66 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_args);
}
if (var66){
{
{ /* Inline parser_nodes$AModuledecl$n_name (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var69 = var_nmoduledecl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_nmoduledecl:ANode(AModuledecl)> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1149);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = nitc__parser_work___Prod___collect_text(var67);
}
var_platform_name = var70;
} else {
{
var71 = core___core__SequenceRead___Collection__first(var_args);
}
{
var72 = nitc__literal___AExpr___as_string(var71);
}
var_platform_name = var72;
if (var_platform_name == NULL) {
var73 = 1; /* is null */
} else {
var73 = 0; /* arg is null but recv is not */
}
if (0) {
var74 = ((short int(*)(val* self, val* p0))(var_platform_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_platform_name, ((val*)NULL)); /* == on <var_platform_name:nullable Object(nullable String)>*/
var73 = var74;
}
if (var73){
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Syntax Error: `";
var81 = (val*)(15l<<2|1);
var82 = (val*)(15l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[0]=var78;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "` expects its argument to be the name of the target platform as a String literal.";
var89 = (val*)(81l<<2|1);
var90 = (val*)(81l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var76)->values[2]=var86;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_core__NativeArray*)var76)->values[1]=var_annotation_name;
{
var93 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
var_format_error = var93;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var_format_error); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
}
{
{ /* Inline parser_nodes$ANode$parent (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var96 = var_nmoduledecl->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nmoduledecl:ANode(AModuledecl)> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
/* <var94:nullable ANode> isa AModule */
cltype98 = type_nitc__AModule.color;
idtype99 = type_nitc__AModule.id;
if(var94 == NULL) {
var97 = 0;
} else {
if(cltype98 >= var94->type->table_size) {
var97 = 0;
} else {
var97 = var94->type->type_table[cltype98] == idtype99;
}
}
if (unlikely(!var97)) {
var_class_name100 = var94 == NULL ? "null" : var94->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__platform, 67);
fatal_exit(1);
}
var_nmodule = var94;
{
{ /* Inline loader$AModule$mmodule (var_nmodule) on <var_nmodule:AModule> */
var103 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
var_mmodule = var101;
{
{ /* Inline phase$Phase$toolcontext (self) on <self:PlatformPhase> */
var106 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = nitc__platform___ToolContext___platform_from_name(var104, var_platform_name);
}
var_platform = var107;
if (var_platform == NULL) {
var108 = 1; /* is null */
} else {
var108 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_platform,((val*)NULL)) on <var_platform:nullable Platform> */
var_other111 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_platform,var_other111) on <var_platform:nullable Platform(Platform)> */
var114 = var_platform == var_other111;
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var109 = var112;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (var108){
{
{ /* Inline phase$Phase$toolcontext (self) on <self:PlatformPhase> */
var117 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var117 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_nat) on <var_nat:AAnnotation> */
var120 = var_nat->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var120 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (unlikely(varonce121==NULL)) {
var122 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "Error: target platform `";
var127 = (val*)(24l<<2|1);
var128 = (val*)(24l<<2|1);
var129 = (val*)((long)(0)<<2|3);
var130 = (val*)((long)(0)<<2|3);
var126 = core__flat___CString___to_s_unsafe(var125, var127, var128, var129, var130);
var124 = var126;
varonce123 = var124;
}
((struct instance_core__NativeArray*)var122)->values[0]=var124;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "` unknown.";
var135 = (val*)(10l<<2|1);
var136 = (val*)(10l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var122)->values[2]=var132;
} else {
var122 = varonce121;
varonce121 = NULL;
}
((struct instance_core__NativeArray*)var122)->values[1]=var_platform_name;
{
var139 = ((val*(*)(val* self))(var122->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var122); /* native_to_s on <var122:NativeArray[String]>*/
}
varonce121 = var122;
{
var140 = nitc___nitc__ToolContext___error(var115, var118, var139);
}
goto RET_LABEL;
} else {
}
if (var_mmodule == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__platform, 76);
fatal_exit(1);
} else {
var141 = nitc__platform___MModule___target_platform(var_mmodule);
}
var_previous_target_platform = var141;
if (var_previous_target_platform == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_previous_target_platform,((val*)NULL)) on <var_previous_target_platform:nullable Platform> */
var_other = ((val*)NULL);
{
var146 = ((short int(*)(val* self, val* p0))(var_previous_target_platform->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_previous_target_platform, var_other); /* == on <var_previous_target_platform:nullable Platform(Platform)>*/
}
var147 = !var146;
var144 = var147;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
var143 = var144;
}
var_ = var143;
if (var143){
{
{ /* Inline kernel$Object$!= (var_previous_target_platform,var_platform) on <var_previous_target_platform:nullable Platform(Platform)> */
var_other = var_platform;
{
var150 = ((short int(*)(val* self, val* p0))(var_previous_target_platform->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_previous_target_platform, var_other); /* == on <var_previous_target_platform:nullable Platform(Platform)>*/
}
var151 = !var150;
var148 = var151;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
var142 = var148;
} else {
var142 = var_;
}
if (var142){
if (unlikely(varonce152==NULL)) {
var153 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "Syntax Error: a target platform has already been defined as `";
var158 = (val*)(61l<<2|1);
var159 = (val*)(61l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var153)->values[0]=var155;
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "`.";
var166 = (val*)(2l<<2|1);
var167 = (val*)(2l<<2|1);
var168 = (val*)((long)(0)<<2|3);
var169 = (val*)((long)(0)<<2|3);
var165 = core__flat___CString___to_s_unsafe(var164, var166, var167, var168, var169);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var153)->values[2]=var163;
} else {
var153 = varonce152;
varonce152 = NULL;
}
{
var170 = ((val*(*)(val* self))(var_previous_target_platform->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_previous_target_platform); /* to_s on <var_previous_target_platform:nullable Platform(Platform)>*/
}
((struct instance_core__NativeArray*)var153)->values[1]=var170;
{
var171 = ((val*(*)(val* self))(var153->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var153); /* native_to_s on <var153:NativeArray[String]>*/
}
varonce152 = var153;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var171); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_mmodule == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__platform, 81);
fatal_exit(1);
} else {
{ /* Inline platform$MModule$local_target_platform= (var_mmodule,var_platform) on <var_mmodule:nullable MModule> */
if (unlikely(var_mmodule == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__platform, 86);
fatal_exit(1);
}
var_mmodule->attrs[COLOR_nitc__platform__MModule___local_target_platform].val = var_platform; /* _local_target_platform on <var_mmodule:nullable MModule> */
RET_LABEL172:(void)0;
}
}
RET_LABEL:;
}
/* method platform$MModule$local_target_platform for (self: MModule): nullable Platform */
val* nitc__platform___MModule___local_target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = self->attrs[COLOR_nitc__platform__MModule___local_target_platform].val; /* _local_target_platform on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method platform$MModule$local_target_platform= for (self: MModule, nullable Platform) */
void nitc__platform___MModule___local_target_platform_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__platform__MModule___local_target_platform].val = p0; /* _local_target_platform on <self:MModule> */
RET_LABEL:;
}
/* method platform$MModule$target_platform for (self: MModule): nullable Platform */
val* nitc__platform___MModule___target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
val* var3 /* : nullable Platform */;
val* var_ltp /* var ltp: nullable Platform */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : POSetElement[MModule] */;
val* var11 /* : POSetElement[MModule] */;
val* var12 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[MModule] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var17 /* : nullable Platform */;
val* var19 /* : nullable Platform */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
{
{ /* Inline platform$MModule$local_target_platform (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__platform__MModule___local_target_platform].val; /* _local_target_platform on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ltp = var1;
if (var_ltp == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ltp,((val*)NULL)) on <var_ltp:nullable Platform> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_ltp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ltp, var_other); /* == on <var_ltp:nullable Platform(Platform)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_ltp;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule$MModule$in_importation (self) on <self:MModule> */
var11 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = poset___poset__POSetElement___greaters(var9);
}
var_ = var12;
{
var13 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[MModule]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[MModule]>*/
}
var_mmodule = var16;
{
{ /* Inline platform$MModule$local_target_platform (var_mmodule) on <var_mmodule:MModule> */
var19 = var_mmodule->attrs[COLOR_nitc__platform__MModule___local_target_platform].val; /* _local_target_platform on <var_mmodule:MModule> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ltp = var17;
if (var_ltp == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ltp,((val*)NULL)) on <var_ltp:nullable Platform> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_ltp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ltp, var_other); /* == on <var_ltp:nullable Platform(Platform)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var = var_ltp;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[MModule]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform$Platform$supports_libunwind for (self: Platform): Bool */
short int nitc___nitc__Platform___supports_libunwind(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform$Platform$supports_libgc for (self: Platform): Bool */
short int nitc___nitc__Platform___supports_libgc(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform$Platform$no_main for (self: Platform): Bool */
short int nitc___nitc__Platform___no_main(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform$Platform$supports_linker_script for (self: Platform): Bool */
short int nitc___nitc__Platform___supports_linker_script(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
