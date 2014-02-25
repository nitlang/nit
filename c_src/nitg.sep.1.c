#include "nitg.sep.0.h"
/* method nitg#Sys#main for (self: Sys) */
void nitg__Sys__main(val* self) {
val* var /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var1 /* : OptionBool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[String] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[String] */;
val* var_opt_global /* var opt_global: OptionBool */;
val* var14 /* : OptionContext */;
val* var15 /* : Array[Option] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Option] */;
val* var18 /* : OptionArray */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[String] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[String] */;
val* var_opt_mixins /* var opt_mixins: OptionArray */;
val* var32 /* : OptionContext */;
val* var33 /* : Array[Option] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Option] */;
val* var36 /* : Model */;
val* var_model /* var model: Model */;
val* var37 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var38 /* : OptionContext */;
val* var39 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
short int var40 /* : Bool */;
val* var41 /* : OptionContext */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : Array[Object] */;
long var60 /* : Int */;
val* var61 /* : NativeArray[Object] */;
val* var62 /* : String */;
val* var63 /* : OptionContext */;
val* var64 /* : nullable Object */;
val* var_progname /* var progname: String */;
val* var65 /* : Array[String] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[String] */;
val* var68 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var69 /* : nullable Object */;
val* var70 /* : Array[MModule] */;
short int var71 /* : Bool */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_mainmodule /* var mainmodule: nullable Object */;
val* var78 /* : MModule */;
val* var79 /* : null */;
val* var80 /* : nullable Object */;
val* var81 /* : String */;
val* var82 /* : nullable Object */;
val* var83 /* : Location */;
val* var84 /* : OptionBool */;
val* var85 /* : nullable Object */;
short int var86 /* : Bool */;
val* var87 /* : null */;
val* var88 /* : nullable Object */;
short int var89 /* : Bool */;
val* var90 /* : RapidTypeAnalysis */;
val* var_analysis /* var analysis: RapidTypeAnalysis */;
val* var91 /* : RapidTypeAnalysis */;
val* var_analysis92 /* var analysis: RapidTypeAnalysis */;
var = NEW_toolcontext__ToolContext(&type_toolcontext__ToolContext);
((void (*)(val*))(var->class->vft[COLOR_toolcontext__ToolContext__init]))(var) /* init on <var:ToolContext>*/;
var_toolcontext = var;
var1 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce) {
var2 = varonce;
} else {
var3 = "Use global compilation";
var4 = 22;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "--global";
var9 = 8;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var11 = array_instance Array[String] */
var12 = 1;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_opts__OptionBool__init]))(var1, var2, var11) /* init on <var1:OptionBool>*/;
var_opt_global = var1;
var14 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__option_context]))(var_toolcontext) /* option_context on <var_toolcontext:ToolContext>*/;
var15 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var15 = array_instance Array[Option] */
var16 = 1;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var_opt_global;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Option]>*/;
}
((void (*)(val*, val*))(var14->class->vft[COLOR_opts__OptionContext__add_option]))(var14, var15) /* add_option on <var14:OptionContext>*/;
var18 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce19) {
var20 = varonce19;
} else {
var21 = "Additionals module to min-in";
var22 = 28;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "-m";
var27 = 2;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var29 = array_instance Array[String] */
var30 = 1;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var25;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_opts__OptionArray__init]))(var18, var20, var29) /* init on <var18:OptionArray>*/;
var_opt_mixins = var18;
var32 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__option_context]))(var_toolcontext) /* option_context on <var_toolcontext:ToolContext>*/;
var33 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var33 = array_instance Array[Option] */
var34 = 1;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var_opt_mixins;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Option]>*/;
}
((void (*)(val*, val*))(var32->class->vft[COLOR_opts__OptionContext__add_option]))(var32, var33) /* add_option on <var32:OptionContext>*/;
((void (*)(val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__process_options]))(var_toolcontext) /* process_options on <var_toolcontext:ToolContext>*/;
var36 = NEW_model_base__Model(&type_model_base__Model);
((void (*)(val*))(var36->class->vft[COLOR_model_base__Model__init]))(var36) /* init on <var36:Model>*/;
var_model = var36;
var37 = NEW_modelbuilder__ModelBuilder(&type_modelbuilder__ModelBuilder);
((void (*)(val*, val*, val*))(var37->class->vft[COLOR_modelbuilder__ModelBuilder__init]))(var37, var_model, var_toolcontext) /* init on <var37:ModelBuilder>*/;
var_modelbuilder = var37;
var38 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__option_context]))(var_toolcontext) /* option_context on <var_toolcontext:ToolContext>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_opts__OptionContext__rest]))(var38) /* rest on <var38:OptionContext>*/;
var_arguments = var39;
var40 = ((short int (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_arguments) /* is_empty on <var_arguments:Array[String]>*/;
if (var40){
var41 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__option_context]))(var_toolcontext) /* option_context on <var_toolcontext:ToolContext>*/;
((void (*)(val*))(var41->class->vft[COLOR_opts__OptionContext__usage]))(var41) /* usage on <var41:OptionContext>*/;
goto RET_LABEL;
} else {
}
var42 = ((long (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__length]))(var_arguments) /* length on <var_arguments:Array[String]>*/;
var43 = 1;
{ /* Inline kernel#Int#> (var42,var43) */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (!var46) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var47 = var42 > var43;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
if (var44){
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Too much arguments: ";
var51 = 20;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = " ";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var54) /* join on <var_arguments:Array[String]>*/;
var59 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var59 = array_instance Array[Object] */
var60 = 2;
var61 = NEW_array__NativeArray(var60, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var61)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var61)->values[1] = (val*) var58;
((void (*)(val*, val*, long))(var59->class->vft[COLOR_array__Array__with_native]))(var59, var61, var60) /* with_native on <var59:Array[Object]>*/;
}
var62 = ((val* (*)(val*))(var59->class->vft[COLOR_string__Object__to_s]))(var59) /* to_s on <var59:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var62) /* print on <self:Sys>*/;
var63 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_toolcontext__ToolContext__option_context]))(var_toolcontext) /* option_context on <var_toolcontext:ToolContext>*/;
((void (*)(val*))(var63->class->vft[COLOR_opts__OptionContext__usage]))(var63) /* usage on <var63:OptionContext>*/;
goto RET_LABEL;
} else {
}
var64 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[String]>*/;
var_progname = var64;
var65 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var65 = array_instance Array[String] */
var66 = 1;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var_progname;
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[String]>*/;
}
var68 = ((val* (*)(val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__parse]))(var_modelbuilder, var65) /* parse on <var_modelbuilder:ModelBuilder>*/;
var_mmodules = var68;
var69 = ((val* (*)(val*))(var_opt_mixins->class->vft[COLOR_opts__Option__value]))(var_opt_mixins) /* value on <var_opt_mixins:OptionArray>*/;
var70 = ((val* (*)(val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__parse]))(var_modelbuilder, var69) /* parse on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*))(var_mmodules->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_mmodules, var70) /* add_all on <var_mmodules:Array[MModule]>*/;
var71 = ((short int (*)(val*))(var_mmodules->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_mmodules) /* is_empty on <var_mmodules:Array[MModule]>*/;
if (var71){
goto RET_LABEL;
} else {
}
((void (*)(val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__run_phases]))(var_modelbuilder) /* run_phases on <var_modelbuilder:ModelBuilder>*/;
var72 = ((long (*)(val*))(var_mmodules->class->vft[COLOR_abstract_collection__Collection__length]))(var_mmodules) /* length on <var_mmodules:Array[MModule]>*/;
var73 = 1;
{ /* Inline kernel#Int#== (var72,var73) */
var76 = var72 == var73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
if (var74){
var77 = ((val* (*)(val*))(var_mmodules->class->vft[COLOR_abstract_collection__Collection__first]))(var_mmodules) /* first on <var_mmodules:Array[MModule]>*/;
var_mainmodule = var77;
} else {
var78 = NEW_mmodule__MModule(&type_mmodule__MModule);
var79 = NULL;
var80 = ((val* (*)(val*))(var_mmodules->class->vft[COLOR_abstract_collection__Collection__first]))(var_mmodules) /* first on <var_mmodules:Array[MModule]>*/;
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_mmodule__MModule__name]))(var80) /* name on <var80:nullable Object(MModule)>*/;
var82 = ((val* (*)(val*))(var_mmodules->class->vft[COLOR_abstract_collection__Collection__first]))(var_mmodules) /* first on <var_mmodules:Array[MModule]>*/;
var83 = ((val* (*)(val*))(var82->class->vft[COLOR_mmodule__MModule__location]))(var82) /* location on <var82:nullable Object(MModule)>*/;
((void (*)(val*, val*, val*, val*, val*))(var78->class->vft[COLOR_mmodule__MModule__init]))(var78, var_model, var79, var81, var83) /* init on <var78:MModule>*/;
var_mainmodule = var78;
((void (*)(val*, val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__set_imported_mmodules]))(var_mainmodule, var_mmodules) /* set_imported_mmodules on <var_mainmodule:nullable Object(MModule)>*/;
}
var84 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_separate_erasure_compiler__ToolContext__opt_erasure]))(var_toolcontext) /* opt_erasure on <var_toolcontext:ToolContext>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_opts__Option__value]))(var84) /* value on <var84:OptionBool>*/;
var86 = ((struct instance_kernel__Bool*)var85)->value; /* autounbox from nullable Object to Bool */;
if (var86){
var87 = NULL;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler]))(var_modelbuilder, var_mainmodule, var87) /* run_separate_erasure_compiler on <var_modelbuilder:ModelBuilder>*/;
} else {
var88 = ((val* (*)(val*))(var_opt_global->class->vft[COLOR_opts__Option__value]))(var_opt_global) /* value on <var_opt_global:OptionBool>*/;
var89 = ((struct instance_kernel__Bool*)var88)->value; /* autounbox from nullable Object to Bool */;
if (var89){
var90 = ((val* (*)(val*, val*))(var_modelbuilder->class->vft[COLOR_rapid_type_analysis__ModelBuilder__do_rapid_type_analysis]))(var_modelbuilder, var_mainmodule) /* do_rapid_type_analysis on <var_modelbuilder:ModelBuilder>*/;
var_analysis = var90;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_global_compiler__ModelBuilder__run_global_compiler]))(var_modelbuilder, var_mainmodule, var_analysis) /* run_global_compiler on <var_modelbuilder:ModelBuilder>*/;
} else {
var91 = ((val* (*)(val*, val*))(var_modelbuilder->class->vft[COLOR_rapid_type_analysis__ModelBuilder__do_rapid_type_analysis]))(var_modelbuilder, var_mainmodule) /* do_rapid_type_analysis on <var_modelbuilder:ModelBuilder>*/;
var_analysis92 = var91;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_separate_compiler__ModelBuilder__run_separate_compiler]))(var_modelbuilder, var_mainmodule, var_analysis92) /* run_separate_compiler on <var_modelbuilder:ModelBuilder>*/;
}
}
RET_LABEL:;
}
/* method nitg#Sys#main for (self: Object) */
void VIRTUAL_nitg__Sys__main(val* self) {
nitg__Sys__main(self);
RET_LABEL:;
}
