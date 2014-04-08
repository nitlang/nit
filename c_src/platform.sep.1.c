#include "platform.sep.0.h"
/* method platform#ToolContext#platform_phase for (self: ToolContext): Phase */
val* platform__ToolContext__platform_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_platform__ToolContext___64dplatform_phase].val; /* @platform_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @platform_phase");
fprintf(stderr, " (%s:%d)\n", "src/platform.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method platform#ToolContext#platform_phase for (self: Object): Phase */
val* VIRTUAL_platform__ToolContext__platform_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = platform__ToolContext__platform_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#ToolContext#platform_phase= for (self: ToolContext, Phase) */
void platform__ToolContext__platform_phase_61d(val* self, val* p0) {
self->attrs[COLOR_platform__ToolContext___64dplatform_phase].val = p0; /* @platform_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method platform#ToolContext#platform_phase= for (self: Object, Phase) */
void VIRTUAL_platform__ToolContext__platform_phase_61d(val* self, val* p0) {
platform__ToolContext__platform_phase_61d(self, p0);
RET_LABEL:;
}
/* method platform#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* platform__ToolContext__platform_from_name(val* self, val* p0) {
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
/* method platform#ToolContext#platform_from_name for (self: Object, String): nullable Platform */
val* VIRTUAL_platform__ToolContext__platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = platform__ToolContext__platform_from_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#PlatformPhase#process_annotated_node for (self: PlatformPhase, ANode, AAnnotation) */
void platform__PlatformPhase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var_annotation_name /* var annotation_name: String */;
val* var4 /* : AAtid */;
val* var5 /* : Token */;
val* var6 /* : String */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
val* var26 /* : ANodes[AAtArg] */;
val* var_args /* var args: ANodes[AAtArg] */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
short int var49 /* : Bool */;
val* var50 /* : AModuleName */;
val* var51 /* : String */;
val* var_platform_name /* var platform_name: nullable Object */;
val* var52 /* : nullable Object */;
val* var_arg /* var arg: AAtArg */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
val* var_format_error /* var format_error: String */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
short int var70 /* : Bool */;
val* var71 /* : AExpr */;
val* var_expr /* var expr: AExpr */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
short int var75 /* : Bool */;
val* var76 /* : String */;
val* var_target /* var target: String */;
long var77 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : nullable ANode */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
val* var_nmodule /* var nmodule: AModule */;
val* var89 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var90 /* : ToolContext */;
val* var91 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
val* var92 /* : null */;
short int var93 /* : Bool */;
val* var94 /* : ToolContext */;
val* var95 /* : Location */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var106 /* : Array[Object] */;
long var107 /* : Int */;
val* var108 /* : NativeArray[Object] */;
val* var109 /* : String */;
val* var110 /* : nullable Platform */;
val* var_previous_target_platform /* var previous_target_platform: nullable Platform */;
short int var111 /* : Bool */;
val* var112 /* : null */;
short int var113 /* : Bool */;
short int var_ /* var : Bool */;
short int var114 /* : Bool */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : String */;
val* var125 /* : Array[Object] */;
long var126 /* : Int */;
val* var127 /* : NativeArray[Object] */;
val* var128 /* : String */;
var_nmoduledecl = p0;
var_nat = p1;
if (varonce) {
var = varonce;
} else {
var1 = "platform";
var2 = 8;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var_annotation_name = var;
var4 = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__AAnnotation__n_atid]))(var_nat) /* n_atid on <var_nat:AAnnotation>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__AAtid__n_id]))(var4) /* n_id on <var4:AAtid>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_parser_nodes__Token__text]))(var5) /* text on <var5:Token>*/;
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___33d_61d]))(var6, var_annotation_name) /* != on <var6:String>*/;
if (var7){
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:PlatformPhase>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var8) /* modelbuilder on <var8:ToolContext>*/;
var_modelbuilder = var9;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_parser_nodes__AModuledecl.color;
idtype = type_parser_nodes__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var10 = 0;
} else {
var10 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "Syntax error: only the declaration of modules may use \"";
var15 = 55;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\".";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var25) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var26 = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__AAnnotation__n_args]))(var_nat) /* n_args on <var_nat:AAnnotation>*/;
var_args = var26;
var27 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:ANodes[AAtArg]>*/;
var28 = 1;
{ /* Inline kernel#Int#> (var27,var28) */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (!var31) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var34 = var27 > var28;
var29 = var34;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
if (varonce35) {
var36 = varonce35;
} else {
var37 = "Syntax error: \"";
var38 = 15;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "\" expects at most a single argument.";
var43 = 36;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var41;
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var48) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
var49 = ((short int (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_args) /* is_empty on <var_args:ANodes[AAtArg]>*/;
if (var49){
var50 = ((val* (*)(val*))(var_nmoduledecl->class->vft[COLOR_parser_nodes__AModuledecl__n_name]))(var_nmoduledecl) /* n_name on <var_nmoduledecl:ANode(AModuledecl)>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_modelize_property__Prod__collect_text]))(var50) /* collect_text on <var50:AModuleName>*/;
var_platform_name = var51;
} else {
var52 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:ANodes[AAtArg]>*/;
var_arg = var52;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "Syntax error: \"";
var56 = 15;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "\" expects its argument to be the name of the target platform as a String literal.";
var61 = 81;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 3;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
var_format_error = var66;
/* <var_arg:AAtArg> isa AExprAtArg */
cltype68 = type_parser_nodes__AExprAtArg.color;
idtype69 = type_parser_nodes__AExprAtArg.id;
if(cltype68 >= var_arg->type->table_size) {
var67 = 0;
} else {
var67 = var_arg->type->type_table[cltype68] == idtype69;
}
var70 = !var67;
if (var70){
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var_format_error) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var71 = ((val* (*)(val*))(var_arg->class->vft[COLOR_parser_nodes__AExprAtArg__n_expr]))(var_arg) /* n_expr on <var_arg:AAtArg(AExprAtArg)>*/;
var_expr = var71;
/* <var_expr:AExpr> isa AStringFormExpr */
cltype73 = type_parser_nodes__AStringFormExpr.color;
idtype74 = type_parser_nodes__AStringFormExpr.id;
if(cltype73 >= var_expr->type->table_size) {
var72 = 0;
} else {
var72 = var_expr->type->type_table[cltype73] == idtype74;
}
var75 = !var72;
if (var75){
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var_format_error) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var76 = ((val* (*)(val*))(var_expr->class->vft[COLOR_modelize_property__Prod__collect_text]))(var_expr) /* collect_text on <var_expr:AExpr(AStringFormExpr)>*/;
var_target = var76;
var77 = 1;
var78 = ((long (*)(val*))(var_target->class->vft[COLOR_abstract_collection__Collection__length]))(var_target) /* length on <var_target:String>*/;
var79 = 2;
{ /* Inline kernel#Int#- (var78,var79) */
var82 = var78 - var79;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var83 = ((val* (*)(val*, long, long))(var_target->class->vft[COLOR_string__AbstractString__substring]))(var_target, var77, var80) /* substring on <var_target:String>*/;
var_platform_name = var83;
}
}
var84 = ((val* (*)(val*))(var_nmoduledecl->class->vft[COLOR_parser_nodes__ANode__parent]))(var_nmoduledecl) /* parent on <var_nmoduledecl:ANode(AModuledecl)>*/;
/* <var84:nullable ANode> isa AModule */
cltype86 = type_parser_nodes__AModule.color;
idtype87 = type_parser_nodes__AModule.id;
if(var84 == NULL) {
var85 = 0;
} else {
if(cltype86 >= var84->type->table_size) {
var85 = 0;
} else {
var85 = var84->type->type_table[cltype86] == idtype87;
}
}
if (!var85) {
var_class_name88 = var84 == NULL ? "null" : var84->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name88);
fprintf(stderr, " (%s:%d)\n", "src/platform.nit", 75);
show_backtrace(1);
}
var_nmodule = var84;
var89 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
var_mmodule = var89;
var90 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:PlatformPhase>*/;
var91 = ((val* (*)(val*, val*))(var90->class->vft[COLOR_platform__ToolContext__platform_from_name]))(var90, var_platform_name) /* platform_from_name on <var90:ToolContext>*/;
var_platform = var91;
var92 = NULL;
if (var_platform == NULL) {
var93 = 1; /* is null */
} else {
var93 = 0; /* arg is null but recv is not */
}
if (var93){
var94 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:PlatformPhase>*/;
var95 = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__ANode__location]))(var_nat) /* location on <var_nat:AAnnotation>*/;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "Error: target platform \"";
var99 = 24;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "\" unknown";
var104 = 9;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 3;
var108 = NEW_array__NativeArray(var107, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var108)->values[0] = (val*) var97;
((struct instance_array__NativeArray*)var108)->values[1] = (val*) var_platform_name;
((struct instance_array__NativeArray*)var108)->values[2] = (val*) var102;
((void (*)(val*, val*, long))(var106->class->vft[COLOR_array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
((void (*)(val*, val*, val*))(var94->class->vft[COLOR_toolcontext__ToolContext__error]))(var94, var95, var109) /* error on <var94:ToolContext>*/;
goto RET_LABEL;
} else {
}
if (var_mmodule == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/platform.nit", 84);
show_backtrace(1);
} else {
var110 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_platform__MModule__target_platform]))(var_mmodule) /* target_platform on <var_mmodule:nullable MModule>*/;
}
var_previous_target_platform = var110;
var112 = NULL;
if (var_previous_target_platform == NULL) {
var113 = 0; /* is null */
} else {
var113 = 1; /* arg is null and recv is not */
}
var_ = var113;
if (var113){
var114 = ((short int (*)(val*, val*))(var_previous_target_platform->class->vft[COLOR_kernel__Object___33d_61d]))(var_previous_target_platform, var_platform) /* != on <var_previous_target_platform:nullable Platform(Platform)>*/;
var111 = var114;
} else {
var111 = var_;
}
if (var111){
if (varonce115) {
var116 = varonce115;
} else {
var117 = "Syntax error: a target platform has already been defined as \"";
var118 = 61;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = "\".";
var123 = 2;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 3;
var127 = NEW_array__NativeArray(var126, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var127)->values[0] = (val*) var116;
((struct instance_array__NativeArray*)var127)->values[1] = (val*) var_previous_target_platform;
((struct instance_array__NativeArray*)var127)->values[2] = (val*) var121;
((void (*)(val*, val*, long))(var125->class->vft[COLOR_array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var128) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
}
if (var_mmodule == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/platform.nit", 89);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_mmodule->class->vft[COLOR_platform__MModule__local_target_platform_61d]))(var_mmodule, var_platform) /* local_target_platform= on <var_mmodule:nullable MModule>*/;
}
RET_LABEL:;
}
/* method platform#PlatformPhase#process_annotated_node for (self: Object, ANode, AAnnotation) */
void VIRTUAL_platform__PlatformPhase__process_annotated_node(val* self, val* p0, val* p1) {
platform__PlatformPhase__process_annotated_node(self, p0, p1);
RET_LABEL:;
}
/* method platform#MModule#local_target_platform for (self: MModule): nullable Platform */
val* platform__MModule__local_target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = self->attrs[COLOR_platform__MModule___64dlocal_target_platform].val; /* @local_target_platform on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method platform#MModule#local_target_platform for (self: Object): nullable Platform */
val* VIRTUAL_platform__MModule__local_target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = platform__MModule__local_target_platform(self);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#MModule#local_target_platform= for (self: MModule, nullable Platform) */
void platform__MModule__local_target_platform_61d(val* self, val* p0) {
self->attrs[COLOR_platform__MModule___64dlocal_target_platform].val = p0; /* @local_target_platform on <self:MModule> */
RET_LABEL:;
}
/* method platform#MModule#local_target_platform= for (self: Object, nullable Platform) */
void VIRTUAL_platform__MModule__local_target_platform_61d(val* self, val* p0) {
platform__MModule__local_target_platform_61d(self, p0);
RET_LABEL:;
}
/* method platform#MModule#target_platform for (self: MModule): nullable Platform */
val* platform__MModule__target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
val* var_ltp /* var ltp: nullable Platform */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : POSetElement[MModule] */;
val* var5 /* : Collection[Object] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : nullable Platform */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : null */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_platform__MModule__local_target_platform]))(self) /* local_target_platform on <self:MModule>*/;
var_ltp = var1;
var2 = NULL;
if (var_ltp == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_ltp;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_mmodule__MModule__in_importation]))(self) /* in_importation on <self:MModule>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_poset__POSetElement__greaters]))(var4) /* greaters on <var4:POSetElement[MModule]>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Collection[Object](Collection[MModule])>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_mmodule = var8;
var9 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_platform__MModule__local_target_platform]))(var_mmodule) /* local_target_platform on <var_mmodule:MModule>*/;
var_ltp = var9;
var10 = NULL;
if (var_ltp == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
var = var_ltp;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = NULL;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#MModule#target_platform for (self: Object): nullable Platform */
val* VIRTUAL_platform__MModule__target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = platform__MModule__target_platform(self);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libunwind for (self: Platform): Bool */
short int platform__Platform__supports_libunwind(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libunwind for (self: Object): Bool */
short int VIRTUAL_platform__Platform__supports_libunwind(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = platform__Platform__supports_libunwind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#Platform#init for (self: Platform) */
void platform__Platform__init(val* self) {
RET_LABEL:;
}
/* method platform#Platform#init for (self: Object) */
void VIRTUAL_platform__Platform__init(val* self) {
platform__Platform__init(self);
RET_LABEL:;
}
