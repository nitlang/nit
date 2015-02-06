#include "nit__platform.sep.0.h"
/* method platform#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* nit__platform___ToolContext___platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
val* var1 /* : null */;
var_name = p0;
var1 = NULL;
var = var1;
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
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var_annotation_name /* var annotation_name: String */;
val* var4 /* : String */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ToolContext */;
val* var11 /* : ToolContext */;
val* var12 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
val* var29 /* : ANodes[AExpr] */;
val* var31 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name;
short int var39 /* : Bool */;
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
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
short int var54 /* : Bool */;
val* var55 /* : AModuleName */;
val* var57 /* : AModuleName */;
val* var58 /* : String */;
val* var_platform_name /* var platform_name: nullable Object */;
val* var59 /* : nullable Object */;
val* var60 /* : nullable String */;
val* var61 /* : null */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
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
val* var_format_error /* var format_error: String */;
val* var78 /* : nullable ANode */;
val* var80 /* : nullable ANode */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
val* var_nmodule /* var nmodule: AModule */;
val* var85 /* : nullable MModule */;
val* var87 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var88 /* : ToolContext */;
val* var90 /* : ToolContext */;
val* var91 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
val* var92 /* : null */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
val* var_other96 /* var other: nullable Object */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
val* var100 /* : ToolContext */;
val* var102 /* : ToolContext */;
val* var103 /* : Location */;
val* var105 /* : Location */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
val* var120 /* : nullable Platform */;
val* var_previous_target_platform /* var previous_target_platform: nullable Platform */;
short int var121 /* : Bool */;
val* var122 /* : null */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var_ /* var : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
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
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[Object] */;
val* var145 /* : String */;
var_nmoduledecl = p0;
var_nat = p1;
if (varonce) {
var = varonce;
} else {
var1 = "platform";
var2 = 8;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var_annotation_name = var;
{
var4 = nit___nit__AAnnotation___name(var_nat);
}
{
{ /* Inline kernel#Object#!= (var4,var_annotation_name) on <var4:String> */
var_other = var_annotation_name;
{
var7 = ((short int (*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_other) /* == on <var4:String>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var11 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit__modelbuilder_base___ToolContext___modelbuilder(var9);
}
var_modelbuilder = var12;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_nit__AModuledecl.color;
idtype = type_nit__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var13 = 0;
} else {
var13 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var14 = !var13;
if (var14){
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Syntax error: only the declaration of modules may use \"";
var18 = 55;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\".";
var23 = 2;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_standard__NativeArray(var26, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_standard__NativeArray*)var27)->values[1] = (val*) var_annotation_name;
((struct instance_standard__NativeArray*)var27)->values[2] = (val*) var21;
{
((void (*)(val* self, val* p0, long p1))(var25->class->vft[COLOR_standard__array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val* self))(var25->class->vft[COLOR_standard__string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nat, var28); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_nat) on <var_nat:AAnnotation> */
var31 = var_nat->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2552);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_args = var29;
{
var32 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var_args);
}
var33 = 1;
{
{ /* Inline kernel#Int#> (var32,var33) on <var32:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var39 = var32 > var33;
var34 = var39;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Syntax error: \"";
var43 = 15;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "\" expects at most a single argument.";
var48 = 36;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 3;
var52 = NEW_standard__NativeArray(var51, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var52)->values[0] = (val*) var41;
((struct instance_standard__NativeArray*)var52)->values[1] = (val*) var_annotation_name;
((struct instance_standard__NativeArray*)var52)->values[2] = (val*) var46;
{
((void (*)(val* self, val* p0, long p1))(var50->class->vft[COLOR_standard__array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val* self))(var50->class->vft[COLOR_standard__string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nat, var53); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var54 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var_args);
}
if (var54){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var57 = var_nmoduledecl->attrs[COLOR_nit__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_nmoduledecl:ANode(AModuledecl)> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 943);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = nit__parser_work___Prod___collect_text(var55);
}
var_platform_name = var58;
} else {
{
var59 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
var60 = nit__literal___AExpr___as_string(var59);
}
var_platform_name = var60;
var61 = NULL;
if (var_platform_name == NULL) {
var62 = 1; /* is null */
} else {
var62 = 0; /* arg is null but recv is not */
}
if (0) {
var63 = ((short int (*)(val* self, val* p0))(var_platform_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_platform_name, var61) /* == on <var_platform_name:nullable Object(nullable String)>*/;
var62 = var63;
}
if (var62){
if (varonce64) {
var65 = varonce64;
} else {
var66 = "Syntax error: \"";
var67 = 15;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "\" expects its argument to be the name of the target platform as a String literal.";
var72 = 81;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 3;
var76 = NEW_standard__NativeArray(var75, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var76)->values[0] = (val*) var65;
((struct instance_standard__NativeArray*)var76)->values[1] = (val*) var_annotation_name;
((struct instance_standard__NativeArray*)var76)->values[2] = (val*) var70;
{
((void (*)(val* self, val* p0, long p1))(var74->class->vft[COLOR_standard__array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
}
{
var77 = ((val* (*)(val* self))(var74->class->vft[COLOR_standard__string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
}
var_format_error = var77;
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
var80 = var_nmoduledecl->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var_nmoduledecl:ANode(AModuledecl)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
/* <var78:nullable ANode> isa AModule */
cltype82 = type_nit__AModule.color;
idtype83 = type_nit__AModule.id;
if(var78 == NULL) {
var81 = 0;
} else {
if(cltype82 >= var78->type->table_size) {
var81 = 0;
} else {
var81 = var78->type->type_table[cltype82] == idtype83;
}
}
if (unlikely(!var81)) {
var_class_name84 = var78 == NULL ? "null" : var78->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__platform, 67);
show_backtrace(1);
}
var_nmodule = var78;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var87 = var_nmodule->attrs[COLOR_nit__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_mmodule = var85;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var90 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = nit__platform___ToolContext___platform_from_name(var88, var_platform_name);
}
var_platform = var91;
var92 = NULL;
if (var_platform == NULL) {
var93 = 1; /* is null */
} else {
var93 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_platform,var92) on <var_platform:nullable Platform> */
var_other96 = var92;
{
{ /* Inline kernel#Object#is_same_instance (var_platform,var_other96) on <var_platform:nullable Platform(Platform)> */
var99 = var_platform == var_other96;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (var93){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var102 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nat) on <var_nat:AAnnotation> */
var105 = var_nat->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "Error: target platform \"";
var109 = 24;
var110 = standard___standard__NativeString___to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = "\" unknown";
var114 = 9;
var115 = standard___standard__NativeString___to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 3;
var118 = NEW_standard__NativeArray(var117, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var118)->values[0] = (val*) var107;
((struct instance_standard__NativeArray*)var118)->values[1] = (val*) var_platform_name;
((struct instance_standard__NativeArray*)var118)->values[2] = (val*) var112;
{
((void (*)(val* self, val* p0, long p1))(var116->class->vft[COLOR_standard__array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
}
{
var119 = ((val* (*)(val* self))(var116->class->vft[COLOR_standard__string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var100, var103, var119); /* Direct call toolcontext#ToolContext#error on <var100:ToolContext>*/
}
goto RET_LABEL;
} else {
}
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__platform, 76);
show_backtrace(1);
} else {
var120 = nit__platform___MModule___target_platform(var_mmodule);
}
var_previous_target_platform = var120;
var122 = NULL;
if (var_previous_target_platform == NULL) {
var123 = 0; /* is null */
} else {
var123 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_previous_target_platform,var122) on <var_previous_target_platform:nullable Platform> */
var_other = var122;
{
var126 = ((short int (*)(val* self, val* p0))(var_previous_target_platform->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_previous_target_platform, var_other) /* == on <var_previous_target_platform:nullable Platform(Platform)>*/;
}
var127 = !var126;
var124 = var127;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
var_ = var123;
if (var123){
{
{ /* Inline kernel#Object#!= (var_previous_target_platform,var_platform) on <var_previous_target_platform:nullable Platform(Platform)> */
var_other = var_platform;
{
var130 = ((short int (*)(val* self, val* p0))(var_previous_target_platform->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_previous_target_platform, var_other) /* == on <var_previous_target_platform:nullable Platform(Platform)>*/;
}
var131 = !var130;
var128 = var131;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
var121 = var128;
} else {
var121 = var_;
}
if (var121){
if (varonce132) {
var133 = varonce132;
} else {
var134 = "Syntax error: a target platform has already been defined as \"";
var135 = 61;
var136 = standard___standard__NativeString___to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = "\".";
var140 = 2;
var141 = standard___standard__NativeString___to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 3;
var144 = NEW_standard__NativeArray(var143, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var144)->values[0] = (val*) var133;
((struct instance_standard__NativeArray*)var144)->values[1] = (val*) var_previous_target_platform;
((struct instance_standard__NativeArray*)var144)->values[2] = (val*) var138;
{
((void (*)(val* self, val* p0, long p1))(var142->class->vft[COLOR_standard__array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
}
{
var145 = ((val* (*)(val* self))(var142->class->vft[COLOR_standard__string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nat, var145); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__platform, 81);
show_backtrace(1);
} else {
{ /* Inline platform#MModule#local_target_platform= (var_mmodule,var_platform) on <var_mmodule:nullable MModule> */
if (unlikely(var_mmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__platform, 86);
show_backtrace(1);
}
var_mmodule->attrs[COLOR_nit__platform__MModule___local_target_platform].val = var_platform; /* _local_target_platform on <var_mmodule:nullable MModule> */
RET_LABEL146:(void)0;
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
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : POSetElement[MModule] */;
val* var12 /* : POSetElement[MModule] */;
val* var13 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var14 /* : Iterator[nullable Object] */;
val* var_15 /* var : Iterator[MModule] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var18 /* : nullable Platform */;
val* var20 /* : nullable Platform */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var28 /* : null */;
{
{ /* Inline platform#MModule#local_target_platform (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__platform__MModule___local_target_platform].val; /* _local_target_platform on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ltp = var1;
var4 = NULL;
if (var_ltp == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ltp,var4) on <var_ltp:nullable Platform> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_ltp->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ltp, var_other) /* == on <var_ltp:nullable Platform(Platform)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_ltp;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var12 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = poset___poset__POSetElement___greaters(var10);
}
var_ = var13;
{
var14 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_15 = var14;
for(;;) {
{
var16 = ((short int (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_15) /* is_ok on <var_15:Iterator[MModule]>*/;
}
if (var16){
{
var17 = ((val* (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_15) /* item on <var_15:Iterator[MModule]>*/;
}
var_mmodule = var17;
{
{ /* Inline platform#MModule#local_target_platform (var_mmodule) on <var_mmodule:MModule> */
var20 = var_mmodule->attrs[COLOR_nit__platform__MModule___local_target_platform].val; /* _local_target_platform on <var_mmodule:MModule> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ltp = var18;
var21 = NULL;
if (var_ltp == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ltp,var21) on <var_ltp:nullable Platform> */
var_other = var21;
{
var25 = ((short int (*)(val* self, val* p0))(var_ltp->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ltp, var_other) /* == on <var_ltp:nullable Platform(Platform)>*/;
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
var = var_ltp;
goto RET_LABEL;
} else {
}
{
((void (*)(val* self))(var_15->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_15) /* next on <var_15:Iterator[MModule]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_15) on <var_15:Iterator[MModule]> */
RET_LABEL27:(void)0;
}
}
var28 = NULL;
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libunwind for (self: Platform): Bool */
short int nit___nit__Platform___supports_libunwind(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libgc for (self: Platform): Bool */
short int nit___nit__Platform___supports_libgc(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#no_main for (self: Platform): Bool */
short int nit___nit__Platform___no_main(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_linker_script for (self: Platform): Bool */
short int nit___nit__Platform___supports_linker_script(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
