#include "nit__platform.sep.0.h"
/* method platform#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* nit__platform___ToolContext___platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
var_name = p0;
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#PlatformPhase#process_annotated_node for (self: PlatformPhase, ANode, AAnnotation) */
void nit__platform___nit__platform__PlatformPhase___nit__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var_annotation_name /* var annotation_name: String */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
val* var11 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var13 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var25 /* : ANodes[AExpr] */;
val* var27 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name;
short int var34 /* : Bool */;
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
short int var46 /* : Bool */;
val* var47 /* : AModuleName */;
val* var49 /* : AModuleName */;
val* var50 /* : String */;
val* var_platform_name /* var platform_name: nullable Object */;
val* var51 /* : nullable Object */;
val* var52 /* : nullable String */;
short int var53 /* : Bool */;
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
val* var65 /* : String */;
val* var_format_error /* var format_error: String */;
val* var66 /* : nullable ANode */;
val* var68 /* : nullable ANode */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
val* var_nmodule /* var nmodule: AModule */;
val* var73 /* : nullable MModule */;
val* var75 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var76 /* : ToolContext */;
val* var78 /* : ToolContext */;
val* var79 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var_other83 /* var other: nullable Object */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : ToolContext */;
val* var89 /* : ToolContext */;
val* var90 /* : Location */;
val* var92 /* : Location */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : String */;
val* var104 /* : Message */;
val* var105 /* : nullable Platform */;
val* var_previous_target_platform /* var previous_target_platform: nullable Platform */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var_ /* var : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : FlatString */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
val* var125 /* : FlatString */;
val* var126 /* : String */;
val* var127 /* : String */;
var_nmoduledecl = p0;
var_nat = p1;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "platform";
var2 = standard___standard__NativeString___to_s_with_length(var1, 8l);
var = var2;
varonce = var;
}
var_annotation_name = var;
{
var3 = nit___nit__AAnnotation___name(var_nat);
}
{
{ /* Inline kernel#Object#!= (var3,var_annotation_name) on <var3:String> */
var_other = var_annotation_name;
{
var6 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var3, var_other); /* == on <var3:String>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var10 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__modelbuilder_base___ToolContext___modelbuilder(var8);
}
var_modelbuilder = var11;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_nit__AModuledecl.color;
idtype = type_nit__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var12 = 0;
} else {
var12 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var13 = !var12;
if (var13){
if (unlikely(varonce14==NULL)) {
var15 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: only the declaration of modules may use `";
var19 = standard___standard__NativeString___to_s_with_length(var18, 55l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce14;
varonce14 = NULL;
}
((struct instance_standard__NativeArray*)var15)->values[1]=var_annotation_name;
{
var24 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nat, var24); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_nat) on <var_nat:AAnnotation> */
var27 = var_nat->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2988);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_args = var25;
{
var28 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel#Int#> (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var34 = var28 > 1l;
var29 = var34;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
if (unlikely(varonce35==NULL)) {
var36 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Syntax Error: `";
var40 = standard___standard__NativeString___to_s_with_length(var39, 15l);
var38 = var40;
varonce37 = var38;
}
((struct instance_standard__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "` expects at most a single argument.";
var44 = standard___standard__NativeString___to_s_with_length(var43, 36l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var36)->values[2]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_standard__NativeArray*)var36)->values[1]=var_annotation_name;
{
var45 = ((val*(*)(val* self))(var36->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nat, var45); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var46 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var_args);
}
if (var46){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var49 = var_nmoduledecl->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_nmoduledecl:ANode(AModuledecl)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1120);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = nit__parser_work___Prod___collect_text(var47);
}
var_platform_name = var50;
} else {
{
var51 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
var52 = nit__literal___AExpr___as_string(var51);
}
var_platform_name = var52;
if (var_platform_name == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
var54 = ((short int(*)(val* self, val* p0))(var_platform_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_platform_name, ((val*)NULL)); /* == on <var_platform_name:nullable Object(nullable String)>*/
var53 = var54;
}
if (var53){
if (unlikely(varonce55==NULL)) {
var56 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Syntax Error: `";
var60 = standard___standard__NativeString___to_s_with_length(var59, 15l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var56)->values[0]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "` expects its argument to be the name of the target platform as a String literal.";
var64 = standard___standard__NativeString___to_s_with_length(var63, 81l);
var62 = var64;
varonce61 = var62;
}
((struct instance_standard__NativeArray*)var56)->values[2]=var62;
} else {
var56 = varonce55;
varonce55 = NULL;
}
((struct instance_standard__NativeArray*)var56)->values[1]=var_annotation_name;
{
var65 = ((val*(*)(val* self))(var56->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
var_format_error = var65;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nat, var_format_error); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
}
{
{ /* Inline parser_nodes#ANode#parent (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var68 = var_nmoduledecl->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var_nmoduledecl:ANode(AModuledecl)> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
/* <var66:nullable ANode> isa AModule */
cltype70 = type_nit__AModule.color;
idtype71 = type_nit__AModule.id;
if(var66 == NULL) {
var69 = 0;
} else {
if(cltype70 >= var66->type->table_size) {
var69 = 0;
} else {
var69 = var66->type->type_table[cltype70] == idtype71;
}
}
if (unlikely(!var69)) {
var_class_name72 = var66 == NULL ? "null" : var66->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__platform, 67);
fatal_exit(1);
}
var_nmodule = var66;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var75 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
var_mmodule = var73;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var78 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = nit__platform___ToolContext___platform_from_name(var76, var_platform_name);
}
var_platform = var79;
if (var_platform == NULL) {
var80 = 1; /* is null */
} else {
var80 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_platform,((val*)NULL)) on <var_platform:nullable Platform> */
var_other83 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_platform,var_other83) on <var_platform:nullable Platform(Platform)> */
var86 = var_platform == var_other83;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var81 = var84;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
if (var80){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var89 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nat) on <var_nat:AAnnotation> */
var92 = var_nat->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "Error: target platform `";
var98 = standard___standard__NativeString___to_s_with_length(var97, 24l);
var96 = var98;
varonce95 = var96;
}
((struct instance_standard__NativeArray*)var94)->values[0]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "` unknown.";
var102 = standard___standard__NativeString___to_s_with_length(var101, 10l);
var100 = var102;
varonce99 = var100;
}
((struct instance_standard__NativeArray*)var94)->values[2]=var100;
} else {
var94 = varonce93;
varonce93 = NULL;
}
((struct instance_standard__NativeArray*)var94)->values[1]=var_platform_name;
{
var103 = ((val*(*)(val* self))(var94->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
var104 = nit___nit__ToolContext___error(var87, var90, var103);
}
goto RET_LABEL;
} else {
}
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__platform, 76);
fatal_exit(1);
} else {
var105 = nit__platform___MModule___target_platform(var_mmodule);
}
var_previous_target_platform = var105;
if (var_previous_target_platform == NULL) {
var107 = 0; /* is null */
} else {
var107 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_previous_target_platform,((val*)NULL)) on <var_previous_target_platform:nullable Platform> */
var_other = ((val*)NULL);
{
var110 = ((short int(*)(val* self, val* p0))(var_previous_target_platform->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_previous_target_platform, var_other); /* == on <var_previous_target_platform:nullable Platform(Platform)>*/
}
var111 = !var110;
var108 = var111;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
var107 = var108;
}
var_ = var107;
if (var107){
{
{ /* Inline kernel#Object#!= (var_previous_target_platform,var_platform) on <var_previous_target_platform:nullable Platform(Platform)> */
var_other = var_platform;
{
var114 = ((short int(*)(val* self, val* p0))(var_previous_target_platform->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_previous_target_platform, var_other); /* == on <var_previous_target_platform:nullable Platform(Platform)>*/
}
var115 = !var114;
var112 = var115;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var106 = var112;
} else {
var106 = var_;
}
if (var106){
if (unlikely(varonce116==NULL)) {
var117 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "Syntax Error: a target platform has already been defined as `";
var121 = standard___standard__NativeString___to_s_with_length(var120, 61l);
var119 = var121;
varonce118 = var119;
}
((struct instance_standard__NativeArray*)var117)->values[0]=var119;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "`.";
var125 = standard___standard__NativeString___to_s_with_length(var124, 2l);
var123 = var125;
varonce122 = var123;
}
((struct instance_standard__NativeArray*)var117)->values[2]=var123;
} else {
var117 = varonce116;
varonce116 = NULL;
}
{
var126 = ((val*(*)(val* self))(var_previous_target_platform->class->vft[COLOR_standard__string__Object__to_s]))(var_previous_target_platform); /* to_s on <var_previous_target_platform:nullable Platform(Platform)>*/
}
((struct instance_standard__NativeArray*)var117)->values[1]=var126;
{
var127 = ((val*(*)(val* self))(var117->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nat, var127); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__platform, 81);
fatal_exit(1);
} else {
{ /* Inline platform#MModule#local_target_platform= (var_mmodule,var_platform) on <var_mmodule:nullable MModule> */
if (unlikely(var_mmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__platform, 86);
fatal_exit(1);
}
var_mmodule->attrs[COLOR_nit__platform__MModule___local_target_platform].val = var_platform; /* _local_target_platform on <var_mmodule:nullable MModule> */
RET_LABEL128:(void)0;
}
}
RET_LABEL:;
}
/* method platform#MModule#local_target_platform for (self: MModule): nullable Platform */
val* nit__platform___MModule___local_target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = self->attrs[COLOR_nit__platform__MModule___local_target_platform].val; /* _local_target_platform on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method platform#MModule#local_target_platform= for (self: MModule, nullable Platform) */
void nit__platform___MModule___local_target_platform_61d(val* self, val* p0) {
self->attrs[COLOR_nit__platform__MModule___local_target_platform].val = p0; /* _local_target_platform on <self:MModule> */
RET_LABEL:;
}
/* method platform#MModule#target_platform for (self: MModule): nullable Platform */
val* nit__platform___MModule___target_platform(val* self) {
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
{ /* Inline platform#MModule#local_target_platform (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__platform__MModule___local_target_platform].val; /* _local_target_platform on <self:MModule> */
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
{ /* Inline kernel#Object#!= (var_ltp,((val*)NULL)) on <var_ltp:nullable Platform> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_ltp->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ltp, var_other); /* == on <var_ltp:nullable Platform(Platform)>*/
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
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var11 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
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
var13 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[MModule]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[MModule]>*/
}
var_mmodule = var16;
{
{ /* Inline platform#MModule#local_target_platform (var_mmodule) on <var_mmodule:MModule> */
var19 = var_mmodule->attrs[COLOR_nit__platform__MModule___local_target_platform].val; /* _local_target_platform on <var_mmodule:MModule> */
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
{ /* Inline kernel#Object#!= (var_ltp,((val*)NULL)) on <var_ltp:nullable Platform> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_ltp->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ltp, var_other); /* == on <var_ltp:nullable Platform(Platform)>*/
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
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[MModule]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libunwind for (self: Platform): Bool */
short int nit___nit__Platform___supports_libunwind(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libgc for (self: Platform): Bool */
short int nit___nit__Platform___supports_libgc(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#no_main for (self: Platform): Bool */
short int nit___nit__Platform___no_main(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_linker_script for (self: Platform): Bool */
short int nit___nit__Platform___supports_linker_script(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
