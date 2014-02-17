#include "global_compiler.sep.0.h"
/* method global_compiler#ModelBuilder#run_global_compiler for (self: ModelBuilder, MModule, RapidTypeAnalysis) */
void global_compiler__ModelBuilder__run_global_compiler(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_runtime_type_analysis /* var runtime_type_analysis: RapidTypeAnalysis */;
long var /* : Int */;
long var_time0 /* var time0: Int */;
val* var1 /* : ToolContext */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
long var6 /* : Int */;
val* var7 /* : GlobalCompiler */;
val* var_compiler /* var compiler: GlobalCompiler */;
val* var8 /* : HashSet[MClassType] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var12 /* : HashSet[MClassType] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t16 /* var t: MClassType */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
short int var23 /* : Bool */;
val* var25 /* : List[AbstractRuntimeFunction] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : List[AbstractRuntimeFunction] */;
val* var29 /* : nullable Object */;
val* var_m /* var m: AbstractRuntimeFunction */;
val* var30 /* : ToolContext */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
val* var41 /* : HashSet[AbstractRuntimeFunction] */;
long var42 /* : Int */;
val* var43 /* : List[AbstractRuntimeFunction] */;
long var44 /* : Int */;
long var45 /* : Int */;
long var47 /* : Int */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : HashSet[AbstractRuntimeFunction] */;
long var54 /* : Int */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : Object */;
val* var64 /* : Object */;
val* var65 /* : String */;
long var66 /* : Int */;
val* var68 /* : ToolContext */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : HashSet[AbstractRuntimeFunction] */;
long var75 /* : Int */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : Object */;
val* var80 /* : String */;
long var81 /* : Int */;
long var82 /* : Int */;
long var_time1 /* var time1: Int */;
val* var83 /* : ToolContext */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
long var89 /* : Int */;
long var91 /* : Int */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : Object */;
val* var101 /* : String */;
long var102 /* : Int */;
var_mainmodule = p0;
var_runtime_type_analysis = p1;
var = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time0 = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "*** GENERATING C ***";
var4 = 20;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = 1;
((void (*)(val*, val*, long))(var1->class->vft[COLOR_toolcontext__ToolContext__info]))(var1, var2, var6) /* info on <var1:ToolContext>*/;
var7 = NEW_global_compiler__GlobalCompiler(&type_global_compiler__GlobalCompiler);
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_global_compiler__GlobalCompiler__init]))(var7, var_mainmodule, self, var_runtime_type_analysis) /* init on <var7:GlobalCompiler>*/;
var_compiler = var7;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_header]))(var_compiler) /* compile_header on <var_compiler:GlobalCompiler>*/;
var8 = ((val* (*)(val*))(var_runtime_type_analysis->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var_runtime_type_analysis) /* live_types on <var_runtime_type_analysis:RapidTypeAnalysis>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:HashSet[MClassType]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_t = var11;
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__declare_runtimeclass]))(var_compiler, var_t) /* declare_runtimeclass on <var_compiler:GlobalCompiler>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__compile_class_names]))(var_compiler) /* compile_class_names on <var_compiler:GlobalCompiler>*/;
var12 = ((val* (*)(val*))(var_runtime_type_analysis->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var_runtime_type_analysis) /* live_types on <var_runtime_type_analysis:RapidTypeAnalysis>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:HashSet[MClassType]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_t16 = var15;
var17 = ((val* (*)(val*))(var_t16->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t16) /* ctype on <var_t16:MClassType>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "val*";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var19) /* == on <var17:String>*/;
if (var23){
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__generate_init_instance]))(var_compiler, var_t16) /* generate_init_instance on <var_compiler:GlobalCompiler>*/;
} else {
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__generate_box_instance]))(var_compiler, var_t16) /* generate_box_instance on <var_compiler:GlobalCompiler>*/;
}
CONTINUE_label24: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label24: (void)0;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_main_function]))(var_compiler) /* compile_main_function on <var_compiler:GlobalCompiler>*/;
for(;;) {
var25 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__todos]))(var_compiler) /* todos on <var_compiler:GlobalCompiler>*/;
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var25) /* is_empty on <var25:List[AbstractRuntimeFunction]>*/;
var27 = !var26;
if (!var27) break;
var28 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__todos]))(var_compiler) /* todos on <var_compiler:GlobalCompiler>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Sequence__shift]))(var28) /* shift on <var28:List[AbstractRuntimeFunction]>*/;
var_m = var29;
var30 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "Compile ";
var34 = 8;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = " (";
var39 = 2;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__seen]))(var_compiler) /* seen on <var_compiler:GlobalCompiler>*/;
var42 = ((long (*)(val*))(var41->class->vft[COLOR_abstract_collection__Collection__length]))(var41) /* length on <var41:HashSet[AbstractRuntimeFunction]>*/;
var43 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__todos]))(var_compiler) /* todos on <var_compiler:GlobalCompiler>*/;
var44 = ((long (*)(val*))(var43->class->vft[COLOR_abstract_collection__Collection__length]))(var43) /* length on <var43:List[AbstractRuntimeFunction]>*/;
{ /* Inline kernel#Int#- (var42,var44) */
var47 = var42 - var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "/";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__seen]))(var_compiler) /* seen on <var_compiler:GlobalCompiler>*/;
var54 = ((long (*)(val*))(var53->class->vft[COLOR_abstract_collection__Collection__length]))(var53) /* length on <var53:HashSet[AbstractRuntimeFunction]>*/;
if (varonce55) {
var56 = varonce55;
} else {
var57 = ")";
var58 = 1;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 7;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var_m;
((struct instance_array__NativeArray*)var62)->values[2] = (val*) var37;
var63 = BOX_kernel__Int(var45); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var62)->values[3] = (val*) var63;
((struct instance_array__NativeArray*)var62)->values[4] = (val*) var49;
var64 = BOX_kernel__Int(var54); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var62)->values[5] = (val*) var64;
((struct instance_array__NativeArray*)var62)->values[6] = (val*) var56;
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
var65 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
var66 = 3;
((void (*)(val*, val*, long))(var30->class->vft[COLOR_toolcontext__ToolContext__info]))(var30, var65, var66) /* info on <var30:ToolContext>*/;
((void (*)(val*, val*))(var_m->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__compile_to_c]))(var_m, var_compiler) /* compile_to_c on <var_m:AbstractRuntimeFunction>*/;
CONTINUE_label67: (void)0;
}
BREAK_label67: (void)0;
var68 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "Total methods to compile to C: ";
var72 = 31;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__seen]))(var_compiler) /* seen on <var_compiler:GlobalCompiler>*/;
var75 = ((long (*)(val*))(var74->class->vft[COLOR_abstract_collection__Collection__length]))(var74) /* length on <var74:HashSet[AbstractRuntimeFunction]>*/;
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 2;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var70;
var79 = BOX_kernel__Int(var75); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var79;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var80 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
var81 = 2;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_toolcontext__ToolContext__info]))(var68, var80, var81) /* info on <var68:ToolContext>*/;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__display_stats]))(var_compiler) /* display_stats on <var_compiler:GlobalCompiler>*/;
var82 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var82;
var83 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "*** END GENERATING C: ";
var87 = 22;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var91 = var_time1 - var_time0;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " ***";
var95 = 4;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 3;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var85;
var100 = BOX_kernel__Int(var89); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var100;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
var101 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
var102 = 2;
((void (*)(val*, val*, long))(var83->class->vft[COLOR_toolcontext__ToolContext__info]))(var83, var101, var102) /* info on <var83:ToolContext>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__write_and_make]))(self, var_compiler) /* write_and_make on <self:ModelBuilder>*/;
RET_LABEL:;
}
/* method global_compiler#ModelBuilder#run_global_compiler for (self: Object, MModule, RapidTypeAnalysis) */
void VIRTUAL_global_compiler__ModelBuilder__run_global_compiler(val* self, val* p0, val* p1) {
global_compiler__ModelBuilder__run_global_compiler(self, p0, p1);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#runtime_type_analysis for (self: GlobalCompiler): RapidTypeAnalysis */
val* global_compiler__GlobalCompiler__runtime_type_analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = self->attrs[COLOR_global_compiler__GlobalCompiler___64druntime_type_analysis].val; /* @runtime_type_analysis on <self:GlobalCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @runtime_type_analysis");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 84);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#runtime_type_analysis for (self: Object): RapidTypeAnalysis */
val* VIRTUAL_global_compiler__GlobalCompiler__runtime_type_analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = global_compiler__GlobalCompiler__runtime_type_analysis(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#runtime_type_analysis= for (self: GlobalCompiler, RapidTypeAnalysis) */
void global_compiler__GlobalCompiler__runtime_type_analysis_61d(val* self, val* p0) {
self->attrs[COLOR_global_compiler__GlobalCompiler___64druntime_type_analysis].val = p0; /* @runtime_type_analysis on <self:GlobalCompiler> */
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#runtime_type_analysis= for (self: Object, RapidTypeAnalysis) */
void VIRTUAL_global_compiler__GlobalCompiler__runtime_type_analysis_61d(val* self, val* p0) {
global_compiler__GlobalCompiler__runtime_type_analysis_61d(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#init for (self: GlobalCompiler, MModule, ModelBuilder, RapidTypeAnalysis) */
void global_compiler__GlobalCompiler__init(val* self, val* p0, val* p1, val* p2) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_runtime_type_analysis /* var runtime_type_analysis: RapidTypeAnalysis */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
val* var9 /* : CodeFile */;
val* var_file /* var file: CodeFile */;
val* var10 /* : CodeWriter */;
val* var11 /* : Array[MClassType] */;
val* var12 /* : HashSet[MClassType] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
short int var22 /* : Bool */;
val* var23 /* : Array[MClassType] */;
var_mainmodule = p0;
var_modelbuilder = p1;
var_runtime_type_analysis = p2;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init]))(self, var_mainmodule, var_modelbuilder) /* init on <self:GlobalCompiler>*/;
var = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = ".nitgg";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 2;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var7)->values[1] = (val*) var1;
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
var9 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(self, var8) /* new_file on <self:GlobalCompiler>*/;
var_file = var9;
var10 = NEW_abstract_compiler__CodeWriter(&type_abstract_compiler__CodeWriter);
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_compiler__CodeWriter__init]))(var10, var_file) /* init on <var10:CodeWriter>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header_61d]))(self, var10) /* header= on <self:GlobalCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis_61d]))(self, var_runtime_type_analysis) /* runtime_type_analysis= on <self:GlobalCompiler>*/;
var11 = NEW_array__Array(&type_array__Arraymodel__MClassType);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[MClassType]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__live_primitive_types_61d]))(self, var11) /* live_primitive_types= on <self:GlobalCompiler>*/;
var12 = ((val* (*)(val*))(var_runtime_type_analysis->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var_runtime_type_analysis) /* live_types on <var_runtime_type_analysis:RapidTypeAnalysis>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:HashSet[MClassType]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_t = var15;
var16 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t) /* ctype on <var_t:MClassType>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "val*";
var20 = 4;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___33d_61d]))(var16, var18) /* != on <var16:String>*/;
if (var22){
var23 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__live_primitive_types]))(self) /* live_primitive_types on <self:GlobalCompiler>*/;
((void (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var23, var_t) /* add on <var23:Array[MClassType]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#init for (self: Object, MModule, ModelBuilder, RapidTypeAnalysis) */
void VIRTUAL_global_compiler__GlobalCompiler__init(val* self, val* p0, val* p1, val* p2) {
global_compiler__GlobalCompiler__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#compile_class_names for (self: GlobalCompiler) */
void global_compiler__GlobalCompiler__compile_class_names(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var1 /* : CodeWriter */;
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
val* var11 /* : RapidTypeAnalysis */;
val* var12 /* : HashSet[MClassType] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MClassType */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:GlobalCompiler>*/;
var_v = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:GlobalCompiler>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "extern const char const * class_names[];";
var4 = 40;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var1, var2) /* add_decl on <var1:CodeWriter>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "const char const * class_names[] = {";
var9 = 36;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var7) /* add on <var_v:GlobalCompilerVisitor>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:GlobalCompiler>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var11) /* live_types on <var11:RapidTypeAnalysis>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:HashSet[MClassType]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var_t = var15;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\"";
var19 = 1;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "\", /* ";
var24 = 6;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(self, var_t) /* classid on <self:GlobalCompiler>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = " */";
var30 = 3;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var22;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var26;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var35) /* add on <var_v:GlobalCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "};";
var39 = 2;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var37) /* add on <var_v:GlobalCompilerVisitor>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#compile_class_names for (self: Object) */
void VIRTUAL_global_compiler__GlobalCompiler__compile_class_names(val* self) {
global_compiler__GlobalCompiler__compile_class_names(self);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#classid for (self: GlobalCompiler, MClassType): String */
val* global_compiler__GlobalCompiler__classid(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : HashMap[MClassType, String] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[MClassType, String] */;
val* var4 /* : nullable Object */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : String */;
var_mtype = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__classids]))(self) /* classids on <self:GlobalCompiler>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_mtype) /* has_key on <var1:HashMap[MClassType, String]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__classids]))(self) /* classids on <self:GlobalCompiler>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_mtype) /* [] on <var3:HashMap[MClassType, String]>*/;
var = var4;
goto RET_LABEL;
} else {
}
if (varonce) {
var5 = varonce;
} else {
var6 = "No classid for ";
var7 = 15;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
var12 = ((val* (*)(val*))(var9->class->vft[COLOR_string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var12) /* print on <self:GlobalCompiler>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 120);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#classid for (self: Object, MClassType): String */
val* VIRTUAL_global_compiler__GlobalCompiler__classid(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = global_compiler__GlobalCompiler__classid(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#classids for (self: GlobalCompiler): HashMap[MClassType, String] */
val* global_compiler__GlobalCompiler__classids(val* self) {
val* var /* : HashMap[MClassType, String] */;
val* var1 /* : HashMap[MClassType, String] */;
var1 = self->attrs[COLOR_global_compiler__GlobalCompiler___64dclassids].val; /* @classids on <self:GlobalCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @classids");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 123);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#classids for (self: Object): HashMap[MClassType, String] */
val* VIRTUAL_global_compiler__GlobalCompiler__classids(val* self) {
val* var /* : HashMap[MClassType, String] */;
val* var1 /* : HashMap[MClassType, String] */;
var1 = global_compiler__GlobalCompiler__classids(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#classids= for (self: GlobalCompiler, HashMap[MClassType, String]) */
void global_compiler__GlobalCompiler__classids_61d(val* self, val* p0) {
self->attrs[COLOR_global_compiler__GlobalCompiler___64dclassids].val = p0; /* @classids on <self:GlobalCompiler> */
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#classids= for (self: Object, HashMap[MClassType, String]) */
void VIRTUAL_global_compiler__GlobalCompiler__classids_61d(val* self, val* p0) {
global_compiler__GlobalCompiler__classids_61d(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#compile_header_structs for (self: GlobalCompiler) */
void global_compiler__GlobalCompiler__compile_header_structs(val* self) {
val* var /* : CodeWriter */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:GlobalCompiler>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = "typedef struct {int classid;} val; /* general C type representing a Nit instance. */";
var3 = 84;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var, var1) /* add_decl on <var:CodeWriter>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#compile_header_structs for (self: Object) */
void VIRTUAL_global_compiler__GlobalCompiler__compile_header_structs(val* self) {
global_compiler__GlobalCompiler__compile_header_structs(self);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#live_primitive_types for (self: GlobalCompiler): Array[MClassType] */
val* global_compiler__GlobalCompiler__live_primitive_types(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = self->attrs[COLOR_global_compiler__GlobalCompiler___64dlive_primitive_types].val; /* @live_primitive_types on <self:GlobalCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @live_primitive_types");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 134);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#live_primitive_types for (self: Object): Array[MClassType] */
val* VIRTUAL_global_compiler__GlobalCompiler__live_primitive_types(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = global_compiler__GlobalCompiler__live_primitive_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#live_primitive_types= for (self: GlobalCompiler, Array[MClassType]) */
void global_compiler__GlobalCompiler__live_primitive_types_61d(val* self, val* p0) {
self->attrs[COLOR_global_compiler__GlobalCompiler___64dlive_primitive_types].val = p0; /* @live_primitive_types on <self:GlobalCompiler> */
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#live_primitive_types= for (self: Object, Array[MClassType]) */
void VIRTUAL_global_compiler__GlobalCompiler__live_primitive_types_61d(val* self, val* p0) {
global_compiler__GlobalCompiler__live_primitive_types_61d(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#todo for (self: GlobalCompiler, AbstractRuntimeFunction) */
void global_compiler__GlobalCompiler__todo(val* self, val* p0) {
val* var_m /* var m: AbstractRuntimeFunction */;
val* var /* : HashSet[AbstractRuntimeFunction] */;
short int var1 /* : Bool */;
val* var2 /* : List[AbstractRuntimeFunction] */;
val* var3 /* : HashSet[AbstractRuntimeFunction] */;
var_m = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__seen]))(self) /* seen on <self:GlobalCompiler>*/;
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__Collection__has]))(var, var_m) /* has on <var:HashSet[AbstractRuntimeFunction]>*/;
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__todos]))(self) /* todos on <self:GlobalCompiler>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var2, var_m) /* add on <var2:List[AbstractRuntimeFunction]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__seen]))(self) /* seen on <self:GlobalCompiler>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var3, var_m) /* add on <var3:HashSet[AbstractRuntimeFunction]>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#todo for (self: Object, AbstractRuntimeFunction) */
void VIRTUAL_global_compiler__GlobalCompiler__todo(val* self, val* p0) {
global_compiler__GlobalCompiler__todo(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#todos for (self: GlobalCompiler): List[AbstractRuntimeFunction] */
val* global_compiler__GlobalCompiler__todos(val* self) {
val* var /* : List[AbstractRuntimeFunction] */;
val* var1 /* : List[AbstractRuntimeFunction] */;
var1 = self->attrs[COLOR_global_compiler__GlobalCompiler___64dtodos].val; /* @todos on <self:GlobalCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @todos");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 146);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#todos for (self: Object): List[AbstractRuntimeFunction] */
val* VIRTUAL_global_compiler__GlobalCompiler__todos(val* self) {
val* var /* : List[AbstractRuntimeFunction] */;
val* var1 /* : List[AbstractRuntimeFunction] */;
var1 = global_compiler__GlobalCompiler__todos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#todos= for (self: GlobalCompiler, List[AbstractRuntimeFunction]) */
void global_compiler__GlobalCompiler__todos_61d(val* self, val* p0) {
self->attrs[COLOR_global_compiler__GlobalCompiler___64dtodos].val = p0; /* @todos on <self:GlobalCompiler> */
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#todos= for (self: Object, List[AbstractRuntimeFunction]) */
void VIRTUAL_global_compiler__GlobalCompiler__todos_61d(val* self, val* p0) {
global_compiler__GlobalCompiler__todos_61d(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#seen for (self: GlobalCompiler): HashSet[AbstractRuntimeFunction] */
val* global_compiler__GlobalCompiler__seen(val* self) {
val* var /* : HashSet[AbstractRuntimeFunction] */;
val* var1 /* : HashSet[AbstractRuntimeFunction] */;
var1 = self->attrs[COLOR_global_compiler__GlobalCompiler___64dseen].val; /* @seen on <self:GlobalCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @seen");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 149);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#seen for (self: Object): HashSet[AbstractRuntimeFunction] */
val* VIRTUAL_global_compiler__GlobalCompiler__seen(val* self) {
val* var /* : HashSet[AbstractRuntimeFunction] */;
val* var1 /* : HashSet[AbstractRuntimeFunction] */;
var1 = global_compiler__GlobalCompiler__seen(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#seen= for (self: GlobalCompiler, HashSet[AbstractRuntimeFunction]) */
void global_compiler__GlobalCompiler__seen_61d(val* self, val* p0) {
self->attrs[COLOR_global_compiler__GlobalCompiler___64dseen].val = p0; /* @seen on <self:GlobalCompiler> */
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#seen= for (self: Object, HashSet[AbstractRuntimeFunction]) */
void VIRTUAL_global_compiler__GlobalCompiler__seen_61d(val* self, val* p0) {
global_compiler__GlobalCompiler__seen_61d(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#declare_runtimeclass for (self: GlobalCompiler, MClassType) */
void global_compiler__GlobalCompiler__declare_runtimeclass(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : CodeWriter */;
val* var_v /* var v: CodeWriter */;
val* var1 /* : RapidTypeAnalysis */;
val* var2 /* : HashSet[MClassType] */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
val* var17 /* : HashMap[MClassType, String] */;
long var18 /* : Int */;
long var_idnum /* var idnum: Int */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var_idname /* var idname: String */;
val* var26 /* : HashMap[MClassType, String] */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : Object */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
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
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
val* var81 /* : MClass */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
short int var88 /* : Bool */;
val* var89 /* : Array[MType] */;
val* var90 /* : nullable Object */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
short int var107 /* : Bool */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : String */;
val* var118 /* : MModule */;
val* var119 /* : Set[MClassDef] */;
val* var120 /* : Iterator[nullable Object] */;
short int var121 /* : Bool */;
val* var122 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var123 /* : Array[MProperty] */;
val* var124 /* : Iterator[nullable Object] */;
short int var125 /* : Bool */;
val* var126 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var127 /* : Bool */;
int cltype;
int idtype;
short int var128 /* : Bool */;
val* var129 /* : MPropDef */;
val* var130 /* : nullable MType */;
val* var_t /* var t: MType */;
val* var131 /* : MModule */;
val* var132 /* : MType */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : String */;
val* var139 /* : MPropDef */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
val* var156 /* : Array[Object] */;
long var157 /* : Int */;
val* var158 /* : NativeArray[Object] */;
val* var159 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : String */;
var_mtype = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:GlobalCompiler>*/;
var_v = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:GlobalCompiler>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var1) /* live_types on <var1:RapidTypeAnalysis>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__Collection__has]))(var2, var_mtype) /* has on <var2:HashSet[MClassType]>*/;
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 156);
show_backtrace(1);
}
if (varonce) {
var4 = varonce;
} else {
var5 = "/* runtime class ";
var6 = 17;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = " */";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var4;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var_v, var16) /* add_decl on <var_v:CodeWriter>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__classids]))(self) /* classids on <self:GlobalCompiler>*/;
var18 = ((long (*)(val*))(var17->class->vft[COLOR_abstract_collection__MapRead__length]))(var17) /* length on <var17:HashMap[MClassType, String]>*/;
var_idnum = var18;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "ID_";
var22 = 3;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
var25 = ((val* (*)(val*, val*))(var20->class->vft[COLOR_string__String___43d]))(var20, var24) /* + on <var20:String>*/;
var_idname = var25;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__classids]))(self) /* classids on <self:GlobalCompiler>*/;
((void (*)(val*, val*, val*))(var26->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var26, var_mtype, var_idname) /* []= on <var26:HashMap[MClassType, String]>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "#define ";
var30 = 8;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = " ";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = " /* ";
var40 = 4;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " */";
var45 = 3;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 7;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var_idname;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var33;
var50 = BOX_kernel__Int(var_idnum); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var49)->values[3] = (val*) var50;
((struct instance_array__NativeArray*)var49)->values[4] = (val*) var38;
((struct instance_array__NativeArray*)var49)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var49)->values[6] = (val*) var43;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
var51 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var_v, var51) /* add_decl on <var_v:CodeWriter>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "struct ";
var55 = 7;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = " {";
var61 = 2;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 3;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var_v, var66) /* add_decl on <var_v:CodeWriter>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "int classid; /* must be ";
var70 = 24;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = " */";
var75 = 3;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 3;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var68;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var_idname;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var73;
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var_v, var80) /* add_decl on <var_v:CodeWriter>*/;
var81 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var82 = ((val* (*)(val*))(var81->class->vft[COLOR_model__MClass__name]))(var81) /* name on <var81:MClass>*/;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "NativeArray";
var86 = 11;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var88 = ((short int (*)(val*, val*))(var82->class->vft[COLOR_kernel__Object___61d_61d]))(var82, var84) /* == on <var82:String>*/;
if (var88){
var89 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
var90 = ((val* (*)(val*))(var89->class->vft[COLOR_abstract_collection__Collection__first]))(var89) /* first on <var89:Array[MType]>*/;
var91 = ((val* (*)(val*))(var90->class->vft[COLOR_abstract_compiler__MType__ctype]))(var90) /* ctype on <var90:nullable Object(MType)>*/;
if (varonce92) {
var93 = varonce92;
} else {
var94 = " values[1];";
var95 = 11;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 2;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var91;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var93;
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var_v, var100) /* add_decl on <var_v:CodeWriter>*/;
} else {
}
var101 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "val*";
var105 = 4;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = ((short int (*)(val*, val*))(var101->class->vft[COLOR_kernel__Object___33d_61d]))(var101, var103) /* != on <var101:String>*/;
if (var107){
var108 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce109) {
var110 = varonce109;
} else {
var111 = " value;";
var112 = 7;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 2;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var116)->values[1] = (val*) var110;
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
var117 = ((val* (*)(val*))(var114->class->vft[COLOR_string__Object__to_s]))(var114) /* to_s on <var114:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var_v, var117) /* add_decl on <var_v:CodeWriter>*/;
} else {
}
var118 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:GlobalCompiler>*/;
var119 = ((val* (*)(val*, val*))(var_mtype->class->vft[COLOR_model__MType__collect_mclassdefs]))(var_mtype, var118) /* collect_mclassdefs on <var_mtype:MClassType>*/;
var120 = ((val* (*)(val*))(var119->class->vft[COLOR_abstract_collection__Collection__iterator]))(var119) /* iterator on <var119:Set[MClassDef]>*/;
for(;;) {
var121 = ((short int (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var120) /* is_ok on <var120:Iterator[nullable Object]>*/;
if(!var121) break;
var122 = ((val* (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__item]))(var120) /* item on <var120:Iterator[nullable Object]>*/;
var_cd = var122;
var123 = ((val* (*)(val*))(var_cd->class->vft[COLOR_model__MClassDef__intro_mproperties]))(var_cd) /* intro_mproperties on <var_cd:MClassDef>*/;
var124 = ((val* (*)(val*))(var123->class->vft[COLOR_abstract_collection__Collection__iterator]))(var123) /* iterator on <var123:Array[MProperty]>*/;
for(;;) {
var125 = ((short int (*)(val*))(var124->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var124) /* is_ok on <var124:Iterator[nullable Object]>*/;
if(!var125) break;
var126 = ((val* (*)(val*))(var124->class->vft[COLOR_abstract_collection__Iterator__item]))(var124) /* item on <var124:Iterator[nullable Object]>*/;
var_p = var126;
/* <var_p:MProperty> isa MAttribute */
cltype = type_model__MAttribute.color;
idtype = type_model__MAttribute.id;
if(cltype >= var_p->type->table_size) {
var127 = 0;
} else {
var127 = var_p->type->type_table[cltype] == idtype;
}
var128 = !var127;
if (var128){
goto CONTINUE_label;
} else {
}
var129 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MProperty__intro]))(var_p) /* intro on <var_p:MProperty(MAttribute)>*/;
var130 = ((val* (*)(val*))(var129->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var129) /* static_mtype on <var129:MPropDef(MAttributeDef)>*/;
if (var130 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 183);
show_backtrace(1);
}
var_t = var130;
var131 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:GlobalCompiler>*/;
var132 = ((val* (*)(val*, val*, val*))(var_t->class->vft[COLOR_model__MType__anchor_to]))(var_t, var131, var_mtype) /* anchor_to on <var_t:MType>*/;
var_t = var132;
var133 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t) /* ctype on <var_t:MType>*/;
if (varonce134) {
var135 = varonce134;
} else {
var136 = " ";
var137 = 1;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
var139 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MProperty__intro]))(var_p) /* intro on <var_p:MProperty(MAttribute)>*/;
var140 = ((val* (*)(val*))(var139->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var139) /* c_name on <var139:MPropDef(MAttributeDef)>*/;
if (varonce141) {
var142 = varonce141;
} else {
var143 = "; /* ";
var144 = 5;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = ": ";
var149 = 2;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = " */";
var154 = 3;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 8;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var133;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var135;
((struct instance_array__NativeArray*)var158)->values[2] = (val*) var140;
((struct instance_array__NativeArray*)var158)->values[3] = (val*) var142;
((struct instance_array__NativeArray*)var158)->values[4] = (val*) var_p;
((struct instance_array__NativeArray*)var158)->values[5] = (val*) var147;
((struct instance_array__NativeArray*)var158)->values[6] = (val*) var_t;
((struct instance_array__NativeArray*)var158)->values[7] = (val*) var152;
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var_v, var159) /* add_decl on <var_v:CodeWriter>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var124->class->vft[COLOR_abstract_collection__Iterator__next]))(var124) /* next on <var124:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label160: (void)0;
((void (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__next]))(var120) /* next on <var120:Iterator[nullable Object]>*/;
}
BREAK_label160: (void)0;
if (varonce161) {
var162 = varonce161;
} else {
var163 = "};";
var164 = 2;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var_v, var162) /* add_decl on <var_v:CodeWriter>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#declare_runtimeclass for (self: Object, MClassType) */
void VIRTUAL_global_compiler__GlobalCompiler__declare_runtimeclass(val* self, val* p0) {
global_compiler__GlobalCompiler__declare_runtimeclass(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#generate_init_instance for (self: GlobalCompiler, MClassType) */
void global_compiler__GlobalCompiler__generate_init_instance(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : RapidTypeAnalysis */;
val* var1 /* : HashSet[MClassType] */;
short int var2 /* : Bool */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var9 /* : AbstractCompilerVisitor */;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var10 /* : MClass */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
short int var17 /* : Bool */;
short int var_is_native_array /* var is_native_array: Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var_sig /* var sig: nullable Object */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : CodeWriter */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
val* var85 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var86 /* : Bool */;
val* var87 /* : Array[MType] */;
val* var88 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : String */;
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
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : String */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
val* var136 /* : Array[Object] */;
long var137 /* : Int */;
val* var138 /* : NativeArray[Object] */;
val* var139 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
val* var150 /* : Array[Object] */;
long var151 /* : Int */;
val* var152 /* : NativeArray[Object] */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
var_mtype = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:GlobalCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var) /* live_types on <var:RapidTypeAnalysis>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_mtype) /* has on <var1:HashSet[MClassType]>*/;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 194);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = "val*";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var4) /* == on <var3:String>*/;
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 195);
show_backtrace(1);
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:GlobalCompiler>*/;
var_v = var9;
var10 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MClass__name]))(var10) /* name on <var10:MClass>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "NativeArray";
var15 = 11;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var13) /* == on <var11:String>*/;
var_is_native_array = var17;
if (var_is_native_array){
if (varonce18) {
var19 = varonce18;
} else {
var20 = "int length";
var21 = 10;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var_sig = var19;
} else {
if (varonce23) {
var24 = varonce23;
} else {
var25 = "void";
var26 = 4;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var_sig = var24;
}
var28 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:GlobalCompiler>*/;
var29 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = " NEW_";
var33 = 5;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "(";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ");";
var44 = 2;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 6;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var31;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var35;
((struct instance_array__NativeArray*)var48)->values[3] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[4] = (val*) var_sig;
((struct instance_array__NativeArray*)var48)->values[5] = (val*) var42;
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*))(var28->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var28, var49) /* add_decl on <var28:CodeWriter>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "/* allocate ";
var53 = 12;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = " */";
var58 = 3;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 3;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var62)->values[2] = (val*) var56;
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var63) /* add_decl on <var_v:GlobalCompilerVisitor>*/;
var64 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = " NEW_";
var68 = 5;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "(";
var74 = 1;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = ") {";
var79 = 3;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 6;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var64;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var66;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var70;
((struct instance_array__NativeArray*)var83)->values[3] = (val*) var72;
((struct instance_array__NativeArray*)var83)->values[4] = (val*) var_sig;
((struct instance_array__NativeArray*)var83)->values[5] = (val*) var77;
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var84) /* add_decl on <var_v:GlobalCompilerVisitor>*/;
var85 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_mtype) /* new_var on <var_v:GlobalCompilerVisitor>*/;
var_res = var85;
var86 = 1;
((void (*)(val*, short int))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_res, var86) /* is_exact= on <var_res:RuntimeVariable>*/;
if (var_is_native_array){
var87 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
var88 = ((val* (*)(val*))(var87->class->vft[COLOR_abstract_collection__Collection__first]))(var87) /* first on <var87:Array[MType]>*/;
var_mtype_elt = var88;
if (varonce89) {
var90 = varonce89;
} else {
var91 = " = nit_alloc(sizeof(struct ";
var92 = 27;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce95) {
var96 = varonce95;
} else {
var97 = ") + length*sizeof(";
var98 = 18;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
var100 = ((val* (*)(val*))(var_mtype_elt->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
if (varonce101) {
var102 = varonce101;
} else {
var103 = "));";
var104 = 3;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 6;
var108 = NEW_array__NativeArray(var107, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var108)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var108)->values[1] = (val*) var90;
((struct instance_array__NativeArray*)var108)->values[2] = (val*) var94;
((struct instance_array__NativeArray*)var108)->values[3] = (val*) var96;
((struct instance_array__NativeArray*)var108)->values[4] = (val*) var100;
((struct instance_array__NativeArray*)var108)->values[5] = (val*) var102;
((void (*)(val*, val*, long))(var106->class->vft[COLOR_array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var109) /* add on <var_v:GlobalCompilerVisitor>*/;
} else {
if (varonce110) {
var111 = varonce110;
} else {
var112 = " = nit_alloc(sizeof(struct ";
var113 = 27;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = "));";
var119 = 3;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 4;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var111;
((struct instance_array__NativeArray*)var123)->values[2] = (val*) var115;
((struct instance_array__NativeArray*)var123)->values[3] = (val*) var117;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var124) /* add on <var_v:GlobalCompilerVisitor>*/;
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = "->classid = ";
var128 = 12;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var130 = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(self, var_mtype) /* classid on <self:GlobalCompiler>*/;
if (varonce131) {
var132 = varonce131;
} else {
var133 = ";";
var134 = 1;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var136 = array_instance Array[Object] */
var137 = 4;
var138 = NEW_array__NativeArray(var137, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var138)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var138)->values[1] = (val*) var126;
((struct instance_array__NativeArray*)var138)->values[2] = (val*) var130;
((struct instance_array__NativeArray*)var138)->values[3] = (val*) var132;
((void (*)(val*, val*, long))(var136->class->vft[COLOR_array__Array__with_native]))(var136, var138, var137) /* with_native on <var136:Array[Object]>*/;
}
var139 = ((val* (*)(val*))(var136->class->vft[COLOR_string__Object__to_s]))(var136) /* to_s on <var136:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var139) /* add on <var_v:GlobalCompilerVisitor>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__generate_init_attr]))(self, var_v, var_res, var_mtype) /* generate_init_attr on <self:GlobalCompiler>*/;
if (varonce140) {
var141 = varonce140;
} else {
var142 = "return ";
var143 = 7;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = ";";
var148 = 1;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
var150 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var150 = array_instance Array[Object] */
var151 = 3;
var152 = NEW_array__NativeArray(var151, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var152)->values[0] = (val*) var141;
((struct instance_array__NativeArray*)var152)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var152)->values[2] = (val*) var146;
((void (*)(val*, val*, long))(var150->class->vft[COLOR_array__Array__with_native]))(var150, var152, var151) /* with_native on <var150:Array[Object]>*/;
}
var153 = ((val* (*)(val*))(var150->class->vft[COLOR_string__Object__to_s]))(var150) /* to_s on <var150:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var153) /* add on <var_v:GlobalCompilerVisitor>*/;
if (varonce154) {
var155 = varonce154;
} else {
var156 = "}";
var157 = 1;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var155) /* add on <var_v:GlobalCompilerVisitor>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#generate_init_instance for (self: Object, MClassType) */
void VIRTUAL_global_compiler__GlobalCompiler__generate_init_instance(val* self, val* p0) {
global_compiler__GlobalCompiler__generate_init_instance(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#generate_box_instance for (self: GlobalCompiler, MClassType) */
void global_compiler__GlobalCompiler__generate_box_instance(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : RapidTypeAnalysis */;
val* var1 /* : HashSet[MClassType] */;
short int var2 /* : Bool */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var9 /* : AbstractCompilerVisitor */;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var10 /* : CodeWriter */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
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
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
var_mtype = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(self) /* runtime_type_analysis on <self:GlobalCompiler>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var) /* live_types on <var:RapidTypeAnalysis>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_mtype) /* has on <var1:HashSet[MClassType]>*/;
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 227);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = "val*";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___33d_61d]))(var3, var4) /* != on <var3:String>*/;
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 228);
show_backtrace(1);
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:GlobalCompiler>*/;
var_v = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:GlobalCompiler>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "val* BOX_";
var14 = 9;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "(";
var20 = 1;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = ");";
var26 = 2;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 5;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var16;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var30)->values[3] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[4] = (val*) var24;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var10, var31) /* add_decl on <var10:CodeWriter>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "/* allocate ";
var35 = 12;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = " */";
var40 = 3;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 3;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var38;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var45) /* add_decl on <var_v:GlobalCompilerVisitor>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "val* BOX_";
var49 = 9;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "(";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = " value) {";
var61 = 9;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 5;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var51;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var53;
((struct instance_array__NativeArray*)var65)->values[3] = (val*) var57;
((struct instance_array__NativeArray*)var65)->values[4] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var66) /* add_decl on <var_v:GlobalCompilerVisitor>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "struct ";
var70 = 7;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce73) {
var74 = varonce73;
} else {
var75 = "*res = nit_alloc(sizeof(struct ";
var76 = 31;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = "));";
var82 = 3;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 5;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var68;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var72;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var74;
((struct instance_array__NativeArray*)var86)->values[3] = (val*) var78;
((struct instance_array__NativeArray*)var86)->values[4] = (val*) var80;
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var87) /* add on <var_v:GlobalCompilerVisitor>*/;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "res->classid = ";
var91 = 15;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(self, var_mtype) /* classid on <self:GlobalCompiler>*/;
if (varonce94) {
var95 = varonce94;
} else {
var96 = ";";
var97 = 1;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 3;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var89;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var93;
((struct instance_array__NativeArray*)var101)->values[2] = (val*) var95;
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
var102 = ((val* (*)(val*))(var99->class->vft[COLOR_string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var102) /* add on <var_v:GlobalCompilerVisitor>*/;
if (varonce103) {
var104 = varonce103;
} else {
var105 = "res->value = value;";
var106 = 19;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var104) /* add on <var_v:GlobalCompilerVisitor>*/;
if (varonce108) {
var109 = varonce108;
} else {
var110 = "return (val*)res;";
var111 = 17;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var109) /* add on <var_v:GlobalCompilerVisitor>*/;
if (varonce113) {
var114 = varonce113;
} else {
var115 = "}";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var114) /* add on <var_v:GlobalCompilerVisitor>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#generate_box_instance for (self: Object, MClassType) */
void VIRTUAL_global_compiler__GlobalCompiler__generate_box_instance(val* self, val* p0) {
global_compiler__GlobalCompiler__generate_box_instance(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#new_visitor for (self: GlobalCompiler): GlobalCompilerVisitor */
val* global_compiler__GlobalCompiler__new_visitor(val* self) {
val* var /* : GlobalCompilerVisitor */;
val* var1 /* : GlobalCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_global_compiler__GlobalCompilerVisitor(&type_global_compiler__GlobalCompilerVisitor);
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init]))(var1, self) /* init on <var1:GlobalCompilerVisitor>*/;
/* <var1:GlobalCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractCompiler_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 242);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#new_visitor for (self: Object): AbstractCompilerVisitor */
val* VIRTUAL_global_compiler__GlobalCompiler__new_visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : GlobalCompilerVisitor */;
var1 = global_compiler__GlobalCompiler__new_visitor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#collect_types_cache for (self: GlobalCompiler): HashMap[MType, Array[MClassType]] */
val* global_compiler__GlobalCompiler__collect_types_cache(val* self) {
val* var /* : HashMap[MType, Array[MClassType]] */;
val* var1 /* : HashMap[MType, Array[MClassType]] */;
var1 = self->attrs[COLOR_global_compiler__GlobalCompiler___64dcollect_types_cache].val; /* @collect_types_cache on <self:GlobalCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @collect_types_cache");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 244);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#collect_types_cache for (self: Object): HashMap[MType, Array[MClassType]] */
val* VIRTUAL_global_compiler__GlobalCompiler__collect_types_cache(val* self) {
val* var /* : HashMap[MType, Array[MClassType]] */;
val* var1 /* : HashMap[MType, Array[MClassType]] */;
var1 = global_compiler__GlobalCompiler__collect_types_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#collect_types_cache= for (self: GlobalCompiler, HashMap[MType, Array[MClassType]]) */
void global_compiler__GlobalCompiler__collect_types_cache_61d(val* self, val* p0) {
self->attrs[COLOR_global_compiler__GlobalCompiler___64dcollect_types_cache].val = p0; /* @collect_types_cache on <self:GlobalCompiler> */
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#collect_types_cache= for (self: Object, HashMap[MType, Array[MClassType]]) */
void VIRTUAL_global_compiler__GlobalCompiler__collect_types_cache_61d(val* self, val* p0) {
global_compiler__GlobalCompiler__collect_types_cache_61d(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#autobox for (self: GlobalCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
short int var17 /* : Bool */;
val* var18 /* : MType */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : MType */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
val* var57 /* : RuntimeVariable */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
short int var64 /* : Bool */;
val* var65 /* : MType */;
short int var66 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
val* var67 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var68 /* : AbstractCompiler */;
val* var69 /* : RapidTypeAnalysis */;
val* var70 /* : HashSet[MClassType] */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : MType */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : MType */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var97 /* : NativeArray[Object] */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
val* var120 /* : MType */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
val* var134 /* : String */;
val* var135 /* : RuntimeVariable */;
val* var_res136 /* var res: RuntimeVariable */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
val* var147 /* : MType */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : String */;
val* var158 /* : Array[Object] */;
long var159 /* : Int */;
val* var160 /* : NativeArray[Object] */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : String */;
val* var167 /* : MType */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : String */;
val* var178 /* : Array[Object] */;
long var179 /* : Int */;
val* var180 /* : NativeArray[Object] */;
val* var181 /* : String */;
var_value = p0;
var_mtype = p1;
var1 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_mtype) /* == on <var1:MType>*/;
if (var2){
var = var_value;
goto RET_LABEL;
} else {
var4 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
if (varonce) {
var6 = varonce;
} else {
var7 = "val*";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var6) /* == on <var5:String>*/;
var_ = var10;
if (var10){
var11 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "val*";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var13) /* == on <var11:String>*/;
var3 = var17;
} else {
var3 = var_;
}
if (var3){
var = var_value;
goto RET_LABEL;
} else {
var18 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__MType__ctype]))(var18) /* ctype on <var18:MType>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "val*";
var23 = 4;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var21) /* == on <var19:String>*/;
if (var25){
if (varonce26) {
var27 = varonce26;
} else {
var28 = "((struct ";
var29 = 9;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MType>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "*)";
var35 = 2;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ")->value; /* autounbox from ";
var40 = 28;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = " to ";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = " */";
var51 = 3;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 9;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var31;
((struct instance_array__NativeArray*)var55)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var55)->values[3] = (val*) var_value;
((struct instance_array__NativeArray*)var55)->values[4] = (val*) var38;
((struct instance_array__NativeArray*)var55)->values[5] = (val*) var42;
((struct instance_array__NativeArray*)var55)->values[6] = (val*) var44;
((struct instance_array__NativeArray*)var55)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var55)->values[8] = (val*) var49;
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
var57 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var56, var_mtype) /* new_expr on <self:GlobalCompilerVisitor>*/;
var = var57;
goto RET_LABEL;
} else {
var58 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "val*";
var62 = 4;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((short int (*)(val*, val*))(var58->class->vft[COLOR_kernel__Object___61d_61d]))(var58, var60) /* == on <var58:String>*/;
if (var64){
var65 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
/* <var65:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var65->type->table_size) {
var66 = 0;
} else {
var66 = var65->type->type_table[cltype] == idtype;
}
if (!var66) {
var_class_name = var65 == NULL ? "null" : var65->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 263);
show_backtrace(1);
}
var_valtype = var65;
var67 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var67;
var68 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var69 = ((val* (*)(val*))(var68->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var68) /* runtime_type_analysis on <var68:AbstractCompiler(GlobalCompiler)>*/;
var70 = ((val* (*)(val*))(var69->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var69) /* live_types on <var69:RapidTypeAnalysis>*/;
var71 = ((short int (*)(val*, val*))(var70->class->vft[COLOR_abstract_collection__Collection__has]))(var70, var_valtype) /* has on <var70:HashSet[MClassType]>*/;
var72 = !var71;
if (var72){
if (varonce73) {
var74 = varonce73;
} else {
var75 = "/*no autobox from ";
var76 = 18;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = " to ";
var82 = 4;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = ": ";
var87 = 2;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce90) {
var91 = varonce90;
} else {
var92 = " is not live! */";
var93 = 16;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 7;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var78;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var80;
((struct instance_array__NativeArray*)var97)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var97)->values[4] = (val*) var85;
((struct instance_array__NativeArray*)var97)->values[5] = (val*) var89;
((struct instance_array__NativeArray*)var97)->values[6] = (val*) var91;
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var98) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce99) {
var100 = varonce99;
} else {
var101 = "printf(\"Dead code executed!\\n\"); show_backtrace(1);";
var102 = 51;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var100) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = " = BOX_";
var107 = 7;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = ((val* (*)(val*))(var_valtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_valtype) /* c_name on <var_valtype:MClassType>*/;
if (varonce110) {
var111 = varonce110;
} else {
var112 = "(";
var113 = 1;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = "); /* autobox from ";
var118 = 19;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce121) {
var122 = varonce121;
} else {
var123 = " to ";
var124 = 4;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = " */";
var129 = 3;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 10;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var133)->values[1] = (val*) var105;
((struct instance_array__NativeArray*)var133)->values[2] = (val*) var109;
((struct instance_array__NativeArray*)var133)->values[3] = (val*) var111;
((struct instance_array__NativeArray*)var133)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var133)->values[5] = (val*) var116;
((struct instance_array__NativeArray*)var133)->values[6] = (val*) var120;
((struct instance_array__NativeArray*)var133)->values[7] = (val*) var122;
((struct instance_array__NativeArray*)var133)->values[8] = (val*) var_mtype;
((struct instance_array__NativeArray*)var133)->values[9] = (val*) var127;
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
var134 = ((val* (*)(val*))(var131->class->vft[COLOR_string__Object__to_s]))(var131) /* to_s on <var131:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var134) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
var135 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res136 = var135;
if (varonce137) {
var138 = varonce137;
} else {
var139 = "/* ";
var140 = 3;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = " left unintialized (cannot convert ";
var145 = 35;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
var147 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce148) {
var149 = varonce148;
} else {
var150 = " to ";
var151 = 4;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = ") */";
var156 = 4;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
var158 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var158 = array_instance Array[Object] */
var159 = 7;
var160 = NEW_array__NativeArray(var159, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var160)->values[0] = (val*) var138;
((struct instance_array__NativeArray*)var160)->values[1] = (val*) var_res136;
((struct instance_array__NativeArray*)var160)->values[2] = (val*) var143;
((struct instance_array__NativeArray*)var160)->values[3] = (val*) var147;
((struct instance_array__NativeArray*)var160)->values[4] = (val*) var149;
((struct instance_array__NativeArray*)var160)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var160)->values[6] = (val*) var154;
((void (*)(val*, val*, long))(var158->class->vft[COLOR_array__Array__with_native]))(var158, var160, var159) /* with_native on <var158:Array[Object]>*/;
}
var161 = ((val* (*)(val*))(var158->class->vft[COLOR_string__Object__to_s]))(var158) /* to_s on <var158:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var161) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce162) {
var163 = varonce162;
} else {
var164 = "printf(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var165 = 47;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
var167 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
if (varonce168) {
var169 = varonce168;
} else {
var170 = "\", \"";
var171 = 4;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "\"); show_backtrace(1);";
var176 = 22;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
var178 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var178 = array_instance Array[Object] */
var179 = 5;
var180 = NEW_array__NativeArray(var179, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var180)->values[0] = (val*) var163;
((struct instance_array__NativeArray*)var180)->values[1] = (val*) var167;
((struct instance_array__NativeArray*)var180)->values[2] = (val*) var169;
((struct instance_array__NativeArray*)var180)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var180)->values[4] = (val*) var174;
((void (*)(val*, val*, long))(var178->class->vft[COLOR_array__Array__with_native]))(var178, var180, var179) /* with_native on <var178:Array[Object]>*/;
}
var181 = ((val* (*)(val*))(var178->class->vft[COLOR_string__Object__to_s]))(var178) /* to_s on <var178:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var181) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res136;
goto RET_LABEL;
}
}
}
}
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#autobox for (self: Object, RuntimeVariable, MType): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__autobox(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#collect_types for (self: GlobalCompilerVisitor, RuntimeVariable): Array[MClassType] */
val* global_compiler__GlobalCompilerVisitor__collect_types(val* self, val* p0) {
val* var /* : Array[MClassType] */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AbstractCompiler */;
val* var5 /* : RapidTypeAnalysis */;
val* var6 /* : HashSet[MClassType] */;
short int var7 /* : Bool */;
val* var8 /* : Array[MClassType] */;
long var9 /* : Int */;
val* var_ /* var : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : HashMap[MType, Array[MClassType]] */;
val* var_cache /* var cache: HashMap[MType, Array[MClassType]] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var14 /* : Array[MClassType] */;
val* var_types15 /* var types: Array[MClassType] */;
val* var16 /* : AbstractCompiler */;
val* var17 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : RapidTypeAnalysis */;
val* var20 /* : HashSet[MClassType] */;
val* var21 /* : Iterator[nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
var_recv = p0;
var1 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_recv) /* mcasttype on <var_recv:RuntimeVariable>*/;
var_mtype = var1;
var2 = ((short int (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact]))(var_recv) /* is_exact on <var_recv:RuntimeVariable>*/;
if (var2){
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 286);
show_backtrace(1);
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var4) /* runtime_type_analysis on <var4:AbstractCompiler(GlobalCompiler)>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var5) /* live_types on <var5:RapidTypeAnalysis>*/;
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__Collection__has]))(var6, var_mtype) /* has on <var6:HashSet[MClassType]>*/;
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 287);
show_backtrace(1);
}
var8 = NEW_array__Array(&type_array__Arraymodel__MClassType);
var9 = 1;
((void (*)(val*, long))(var8->class->vft[COLOR_array__Array__with_capacity]))(var8, var9) /* with_capacity on <var8:Array[MClassType]>*/;
var_ = var8;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_mtype) /* push on <var_:Array[MClassType]>*/;
var_types = var_;
var = var_types;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_global_compiler__GlobalCompiler__collect_types_cache]))(var10) /* collect_types_cache on <var10:AbstractCompiler(GlobalCompiler)>*/;
var_cache = var11;
var12 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_cache, var_mtype) /* has_key on <var_cache:HashMap[MType, Array[MClassType]]>*/;
if (var12){
var13 = ((val* (*)(val*, val*))(var_cache->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_cache, var_mtype) /* [] on <var_cache:HashMap[MType, Array[MClassType]]>*/;
var = var13;
goto RET_LABEL;
} else {
}
var14 = NEW_array__Array(&type_array__Arraymodel__MClassType);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[MClassType]>*/;
var_types15 = var14;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var16) /* mainmodule on <var16:AbstractCompiler(GlobalCompiler)>*/;
var_mainmodule = var17;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var18) /* runtime_type_analysis on <var18:AbstractCompiler(GlobalCompiler)>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var19) /* live_types on <var19:RapidTypeAnalysis>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Collection__iterator]))(var20) /* iterator on <var20:HashSet[MClassType]>*/;
for(;;) {
var22 = ((short int (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var21) /* is_ok on <var21:Iterator[nullable Object]>*/;
if(!var22) break;
var23 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__item]))(var21) /* item on <var21:Iterator[nullable Object]>*/;
var_t = var23;
var24 = NULL;
var25 = ((short int (*)(val*, val*, val*, val*))(var_t->class->vft[COLOR_model__MType__is_subtype]))(var_t, var_mainmodule, var24, var_mtype) /* is_subtype on <var_t:MClassType>*/;
var26 = !var25;
if (var26){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_types15->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_types15, var_t) /* add on <var_types15:Array[MClassType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__next]))(var21) /* next on <var21:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*, val*))(var_cache->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_cache, var_mtype, var_types15) /* []= on <var_cache:HashMap[MType, Array[MClassType]]>*/;
var = var_types15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#collect_types for (self: Object, RuntimeVariable): Array[MClassType] */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__collect_types(val* self, val* p0) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = global_compiler__GlobalCompilerVisitor__collect_types(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#native_array_def for (self: GlobalCompilerVisitor, String, nullable MType, Array[RuntimeVariable]) */
void global_compiler__GlobalCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
val* var_pname /* var pname: String */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var1 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var2 /* : Array[Object] */;
long var3 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
val* var9 /* : nullable Object */;
val* var10 /* : MType */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
long var17 /* : Int */;
val* var18 /* : nullable Object */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var_recv /* var recv: String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
long var36 /* : Int */;
val* var37 /* : nullable Object */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
val* var47 /* : RuntimeVariable */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
long var59 /* : Int */;
val* var60 /* : nullable Object */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
long var66 /* : Int */;
val* var67 /* : nullable Object */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
short int var82 /* : Bool */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var_85 /* var : Array[Object] */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
long var91 /* : Int */;
val* var92 /* : nullable Object */;
val* var93 /* : MType */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : String */;
long var100 /* : Int */;
val* var101 /* : nullable Object */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var_recv1 /* var recv1: String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
long var123 /* : Int */;
val* var124 /* : nullable Object */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : String */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
val* var136 /* : Array[Object] */;
long var137 /* : Int */;
val* var138 /* : NativeArray[Object] */;
val* var139 /* : String */;
var_pname = p0;
var_ret_type = p1;
var_arguments = p2;
var = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var) /* mtype on <var:nullable Object(RuntimeVariable)>*/;
var_elttype = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
var3 = 5;
((void (*)(val*, long))(var2->class->vft[COLOR_array__Array__with_capacity]))(var2, var3) /* with_capacity on <var2:Array[Object]>*/;
var_ = var2;
if (varonce) {
var4 = varonce;
} else {
var5 = "((struct ";
var6 = 9;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var4) /* add on <var_:Array[Object]>*/;
var8 = 0;
var9 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var8) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var9) /* mcasttype on <var9:nullable Object(RuntimeVariable)>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MType__c_name]))(var10) /* c_name on <var10:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "*)";
var15 = 2;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = 0;
var18 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var17) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var18) /* add on <var_:Array[Object]>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = ")->values";
var22 = 9;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var20) /* add on <var_:Array[Object]>*/;
var24 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_recv = var24;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "[]";
var28 = 2;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var26) /* == on <var_pname:String>*/;
if (var30){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "[";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = 1;
var37 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var36) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "]";
var41 = 1;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 4;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var37;
((struct instance_array__NativeArray*)var45)->values[3] = (val*) var39;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
if (var_ret_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 310);
show_backtrace(1);
}
var47 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var46, var_ret_type) /* new_expr on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(self, var47) /* ret on <self:GlobalCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce48) {
var49 = varonce48;
} else {
var50 = "[]=";
var51 = 3;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var49) /* == on <var_pname:String>*/;
if (var53){
if (varonce54) {
var55 = varonce54;
} else {
var56 = "[";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = 1;
var60 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var59) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "]=";
var64 = 2;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = 2;
var67 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var66) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce68) {
var69 = varonce68;
} else {
var70 = ";";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var73 = array_instance Array[Object] */
var74 = 6;
var75 = NEW_array__NativeArray(var74, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var75)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var75)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var75)->values[2] = (val*) var60;
((struct instance_array__NativeArray*)var75)->values[3] = (val*) var62;
((struct instance_array__NativeArray*)var75)->values[4] = (val*) var67;
((struct instance_array__NativeArray*)var75)->values[5] = (val*) var69;
((void (*)(val*, val*, long))(var73->class->vft[COLOR_array__Array__with_native]))(var73, var75, var74) /* with_native on <var73:Array[Object]>*/;
}
var76 = ((val* (*)(val*))(var73->class->vft[COLOR_string__Object__to_s]))(var73) /* to_s on <var73:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var76) /* add on <self:GlobalCompilerVisitor>*/;
goto RET_LABEL;
} else {
if (varonce77) {
var78 = varonce77;
} else {
var79 = "copy_to";
var80 = 7;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = ((short int (*)(val*, val*))(var_pname->class->vft[COLOR_kernel__Object___61d_61d]))(var_pname, var78) /* == on <var_pname:String>*/;
if (var82){
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
var84 = 5;
((void (*)(val*, long))(var83->class->vft[COLOR_array__Array__with_capacity]))(var83, var84) /* with_capacity on <var83:Array[Object]>*/;
var_85 = var83;
if (varonce86) {
var87 = varonce86;
} else {
var88 = "((struct ";
var89 = 9;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var87) /* add on <var_85:Array[Object]>*/;
var91 = 1;
var92 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var91) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var93 = ((val* (*)(val*))(var92->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var92) /* mcasttype on <var92:nullable Object(RuntimeVariable)>*/;
var94 = ((val* (*)(val*))(var93->class->vft[COLOR_abstract_compiler__MType__c_name]))(var93) /* c_name on <var93:MType>*/;
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var94) /* add on <var_85:Array[Object]>*/;
if (varonce95) {
var96 = varonce95;
} else {
var97 = "*)";
var98 = 2;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var96) /* add on <var_85:Array[Object]>*/;
var100 = 1;
var101 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var100) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var101) /* add on <var_85:Array[Object]>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = ")->values";
var105 = 9;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
((void (*)(val*, val*))(var_85->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_85, var103) /* add on <var_85:Array[Object]>*/;
var107 = ((val* (*)(val*))(var_85->class->vft[COLOR_string__Object__to_s]))(var_85) /* to_s on <var_85:Array[Object]>*/;
var_recv1 = var107;
if (varonce108) {
var109 = varonce108;
} else {
var110 = "memcpy(";
var111 = 7;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = ",";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = ",";
var121 = 1;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = 2;
var124 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var123) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce125) {
var126 = varonce125;
} else {
var127 = "*sizeof(";
var128 = 8;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var130 = ((val* (*)(val*))(var_elttype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_elttype) /* ctype on <var_elttype:MType>*/;
if (varonce131) {
var132 = varonce131;
} else {
var133 = "));";
var134 = 3;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var136 = array_instance Array[Object] */
var137 = 9;
var138 = NEW_array__NativeArray(var137, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var138)->values[0] = (val*) var109;
((struct instance_array__NativeArray*)var138)->values[1] = (val*) var_recv1;
((struct instance_array__NativeArray*)var138)->values[2] = (val*) var114;
((struct instance_array__NativeArray*)var138)->values[3] = (val*) var_recv;
((struct instance_array__NativeArray*)var138)->values[4] = (val*) var119;
((struct instance_array__NativeArray*)var138)->values[5] = (val*) var124;
((struct instance_array__NativeArray*)var138)->values[6] = (val*) var126;
((struct instance_array__NativeArray*)var138)->values[7] = (val*) var130;
((struct instance_array__NativeArray*)var138)->values[8] = (val*) var132;
((void (*)(val*, val*, long))(var136->class->vft[COLOR_array__Array__with_native]))(var136, var138, var137) /* with_native on <var136:Array[Object]>*/;
}
var139 = ((val* (*)(val*))(var136->class->vft[COLOR_string__Object__to_s]))(var136) /* to_s on <var136:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var139) /* add on <self:GlobalCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#native_array_def for (self: Object, String, nullable MType, Array[RuntimeVariable]) */
void VIRTUAL_global_compiler__GlobalCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
global_compiler__GlobalCompilerVisitor__native_array_def(self, p0, p1, p2);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#calloc_array for (self: GlobalCompilerVisitor, MType, Array[RuntimeVariable]) */
void global_compiler__GlobalCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
val* var_ret_type /* var ret_type: MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
long var10 /* : Int */;
val* var11 /* : nullable Object */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
val* var21 /* : RuntimeVariable */;
var_ret_type = p0;
var_arguments = p1;
if (varonce) {
var = varonce;
} else {
var1 = "NEW_";
var2 = 4;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(var_ret_type->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_ret_type) /* c_name on <var_ret_type:MType>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "(";
var8 = 1;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = 1;
var11 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var10) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = ")";
var15 = 1;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 5;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var6;
((struct instance_array__NativeArray*)var19)->values[3] = (val*) var11;
((struct instance_array__NativeArray*)var19)->values[4] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var20, var_ret_type) /* new_expr on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(self, var21) /* ret on <self:GlobalCompilerVisitor>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#calloc_array for (self: Object, MType, Array[RuntimeVariable]) */
void VIRTUAL_global_compiler__GlobalCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
global_compiler__GlobalCompilerVisitor__calloc_array(self, p0, p1);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#send for (self: GlobalCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethod */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var3 /* : MPropDef */;
val* var4 /* : nullable MSignature */;
val* var5 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var8 /* : MType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : null */;
val* var13 /* : nullable Object */;
val* var14 /* : MType */;
val* var15 /* : RuntimeVariable */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : nullable Object */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : nullable Object */;
val* var37 /* : MType */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var46 /* : MType */;
short int var47 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var48 /* : AbstractCompiler */;
val* var49 /* : RapidTypeAnalysis */;
val* var50 /* : HashSet[MClassType] */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
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
val* var67 /* : AbstractCompiler */;
val* var68 /* : MModule */;
val* var69 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var70 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
val* var71 /* : null */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : AbstractCompiler */;
val* var76 /* : ModelBuilder */;
val* var77 /* : ToolContext */;
val* var78 /* : OptionBool */;
val* var79 /* : nullable Object */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var_ /* var : Bool */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
short int var96 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : nullable Object */;
val* var100 /* : MType */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
short int var_104 /* var : Bool */;
val* var105 /* : nullable Object */;
val* var106 /* : MType */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
short int var_110 /* var : Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : nullable Object */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
val* var122 /* : Array[Object] */;
long var123 /* : Int */;
val* var124 /* : NativeArray[Object] */;
val* var125 /* : String */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
short int var132 /* : Bool */;
val* var133 /* : null */;
short int var134 /* : Bool */;
long var135 /* : Int */;
val* var136 /* : nullable Object */;
val* var137 /* : MType */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
long var146 /* : Int */;
val* var147 /* : nullable Object */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : String */;
val* var153 /* : Array[Object] */;
long var154 /* : Int */;
val* var155 /* : NativeArray[Object] */;
val* var156 /* : String */;
long var157 /* : Int */;
val* var158 /* : nullable Object */;
val* var159 /* : MType */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : String */;
long var177 /* : Int */;
val* var178 /* : nullable Object */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
val* var185 /* : Array[Object] */;
long var186 /* : Int */;
val* var187 /* : NativeArray[Object] */;
val* var188 /* : String */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : String */;
short int var195 /* : Bool */;
val* var196 /* : null */;
short int var197 /* : Bool */;
long var198 /* : Int */;
val* var199 /* : nullable Object */;
val* var200 /* : MType */;
short int var201 /* : Bool */;
int cltype202;
int idtype203;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
long var209 /* : Int */;
val* var210 /* : nullable Object */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
val* var216 /* : Array[Object] */;
long var217 /* : Int */;
val* var218 /* : NativeArray[Object] */;
val* var219 /* : String */;
long var220 /* : Int */;
val* var221 /* : nullable Object */;
val* var222 /* : MType */;
short int var223 /* : Bool */;
int cltype224;
int idtype225;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : String */;
val* var231 /* : Array[Object] */;
long var232 /* : Int */;
val* var233 /* : NativeArray[Object] */;
val* var234 /* : String */;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : NativeString */;
long var238 /* : Int */;
val* var239 /* : String */;
long var240 /* : Int */;
val* var241 /* : nullable Object */;
val* var242 /* : String */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : String */;
val* var248 /* : Array[Object] */;
long var249 /* : Int */;
val* var250 /* : NativeArray[Object] */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : String */;
short int var262 /* : Bool */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : String */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : String */;
val* var273 /* : nullable Object */;
val* var274 /* : String */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : String */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
long var283 /* : Int */;
val* var284 /* : String */;
val* var285 /* : Array[Object] */;
long var286 /* : Int */;
val* var287 /* : NativeArray[Object] */;
val* var288 /* : String */;
val* var289 /* : nullable Object */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : String */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
long var298 /* : Int */;
val* var299 /* : String */;
val* var300 /* : nullable Object */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : String */;
val* var306 /* : Array[Object] */;
long var307 /* : Int */;
val* var308 /* : NativeArray[Object] */;
val* var309 /* : String */;
val* var310 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var311 /* : null */;
val* var_defaultpropdef /* var defaultpropdef: nullable MMethodDef */;
val* var312 /* : Iterator[nullable Object] */;
short int var313 /* : Bool */;
val* var314 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var315 /* : AbstractCompiler */;
val* var316 /* : MModule */;
val* var317 /* : MPropDef */;
val* var_propdef318 /* var propdef: MMethodDef */;
short int var319 /* : Bool */;
val* var320 /* : MClassDef */;
val* var321 /* : MClass */;
val* var322 /* : String */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : NativeString */;
long var326 /* : Int */;
val* var327 /* : String */;
short int var328 /* : Bool */;
short int var_329 /* var : Bool */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : String */;
short int var336 /* : Bool */;
short int var337 /* : Bool */;
short int var338 /* : Bool */;
val* var339 /* : AbstractCompiler */;
short int var340 /* : Bool */;
short int var341 /* : Bool */;
short int var_342 /* var : Bool */;
short int var343 /* : Bool */;
short int var_344 /* var : Bool */;
val* var345 /* : null */;
short int var346 /* : Bool */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
long var350 /* : Int */;
val* var351 /* : String */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
long var355 /* : Int */;
val* var356 /* : String */;
val* var357 /* : Array[Object] */;
long var358 /* : Int */;
val* var359 /* : NativeArray[Object] */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
long var364 /* : Int */;
val* var365 /* : String */;
val* var366 /* : AbstractCompiler */;
val* var367 /* : String */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
long var371 /* : Int */;
val* var372 /* : String */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
long var376 /* : Int */;
val* var377 /* : String */;
val* var378 /* : Array[Object] */;
long var379 /* : Int */;
val* var380 /* : NativeArray[Object] */;
val* var381 /* : String */;
val* var382 /* : nullable RuntimeVariable */;
val* var_res2383 /* var res2: nullable RuntimeVariable */;
val* var384 /* : null */;
short int var385 /* : Bool */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : String */;
val* var391 /* : null */;
short int var392 /* : Bool */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
long var396 /* : Int */;
val* var397 /* : String */;
val* var398 /* : MClassDef */;
val* var399 /* : MClassType */;
val* var400 /* : nullable RuntimeVariable */;
val* var_res2401 /* var res2: nullable RuntimeVariable */;
val* var402 /* : null */;
short int var403 /* : Bool */;
val* var404 /* : AbstractCompiler */;
short int var405 /* : Bool */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
long var409 /* : Int */;
val* var410 /* : String */;
val* var411 /* : nullable Object */;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
long var415 /* : Int */;
val* var416 /* : String */;
var_m = p0;
var_args = p1;
var1 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__collect_types]))(self, var1) /* collect_types on <self:GlobalCompilerVisitor>*/;
var_types = var2;
var3 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MProperty__intro]))(var_m) /* intro on <var_m:MMethod>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MMethodDef__msignature]))(var3) /* msignature on <var3:MPropDef(MMethodDef)>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 332);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MSignature__return_mtype]))(var4) /* return_mtype on <var4:nullable MSignature>*/;
}
var_ret = var5;
var6 = ((short int (*)(val*))(var_m->class->vft[COLOR_model__MMethod__is_new]))(var_m) /* is_new on <var_m:MMethod>*/;
if (var6){
var7 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var7) /* mtype on <var7:nullable Object(RuntimeVariable)>*/;
var_ret = var8;
var9 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var9;
} else {
var10 = NULL;
if (var_ret == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (var11){
var12 = NULL;
var_res = var12;
} else {
var13 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(self, var_ret, var13) /* resolve_for on <self:GlobalCompilerVisitor>*/;
var_ret = var14;
var15 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var15;
}
}
if (varonce) {
var16 = varonce;
} else {
var17 = "/* send ";
var18 = 8;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = " on ";
var23 = 4;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__inspect]))(var25) /* inspect on <var25:nullable Object(RuntimeVariable)>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = " */";
var30 = 3;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_m;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var26;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:GlobalCompilerVisitor>*/;
var36 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var37 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var36) /* mtype on <var36:nullable Object(RuntimeVariable)>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_compiler__MType__ctype]))(var37) /* ctype on <var37:MType>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = "val*";
var42 = 4;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = ((short int (*)(val*, val*))(var38->class->vft[COLOR_kernel__Object___33d_61d]))(var38, var40) /* != on <var38:String>*/;
if (var44){
var45 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var45) /* mtype on <var45:nullable Object(RuntimeVariable)>*/;
/* <var46:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var46->type->table_size) {
var47 = 0;
} else {
var47 = var46->type->type_table[cltype] == idtype;
}
if (!var47) {
var_class_name = var46 == NULL ? "null" : var46->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 345);
show_backtrace(1);
}
var_mclasstype = var46;
var48 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var48) /* runtime_type_analysis on <var48:AbstractCompiler(GlobalCompiler)>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var49) /* live_types on <var49:RapidTypeAnalysis>*/;
var51 = ((short int (*)(val*, val*))(var50->class->vft[COLOR_abstract_collection__Collection__has]))(var50, var_mclasstype) /* has on <var50:HashSet[MClassType]>*/;
var52 = !var51;
if (var52){
if (varonce53) {
var54 = varonce53;
} else {
var55 = "/* skip, no method ";
var56 = 19;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = " */";
var61 = 3;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 3;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var_m;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var66) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
var67 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var68 = ((val* (*)(val*))(var67->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var67) /* mainmodule on <var67:AbstractCompiler(GlobalCompiler)>*/;
var69 = ((val* (*)(val*, val*, val*))(var_m->class->vft[COLOR_model__MProperty__lookup_first_definition]))(var_m, var68, var_mclasstype) /* lookup_first_definition on <var_m:MMethod>*/;
var_propdef = var69;
var70 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__call]))(self, var_propdef, var_mclasstype, var_args) /* call on <self:GlobalCompilerVisitor>*/;
var_res2 = var70;
var71 = NULL;
if (var_res == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (var72){
if (var_res2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 352);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(self, var_res, var_res2) /* assign on <self:GlobalCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
var75 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var76 = ((val* (*)(val*))(var75->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var75) /* modelbuilder on <var75:AbstractCompiler(GlobalCompiler)>*/;
var77 = ((val* (*)(val*))(var76->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var76) /* toolcontext on <var76:ModelBuilder>*/;
var78 = ((val* (*)(val*))(var77->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_other]))(var77) /* opt_no_check_other on <var77:ToolContext>*/;
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_opts__Option__value]))(var78) /* value on <var78:OptionBool>*/;
var80 = ((struct instance_kernel__Bool*)var79)->value; /* autounbox from nullable Object to Bool */;
var81 = !var80;
var_ = var81;
if (var81){
var74 = var_;
} else {
var82 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MProperty__name]))(var_m) /* name on <var_m:MMethod>*/;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "==";
var86 = 2;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var88 = ((short int (*)(val*, val*))(var82->class->vft[COLOR_kernel__Object___61d_61d]))(var82, var84) /* == on <var82:String>*/;
var74 = var88;
}
var_89 = var74;
if (var74){
var73 = var_89;
} else {
var90 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MProperty__name]))(var_m) /* name on <var_m:MMethod>*/;
if (varonce91) {
var92 = varonce91;
} else {
var93 = "!=";
var94 = 2;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
var96 = ((short int (*)(val*, val*))(var90->class->vft[COLOR_kernel__Object___61d_61d]))(var90, var92) /* == on <var90:String>*/;
var73 = var96;
}
var_consider_null = var73;
var99 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var100 = ((val* (*)(val*))(var99->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var99) /* mcasttype on <var99:nullable Object(RuntimeVariable)>*/;
/* <var100:MType> isa MNullableType */
cltype102 = type_model__MNullableType.color;
idtype103 = type_model__MNullableType.id;
if(cltype102 >= var100->type->table_size) {
var101 = 0;
} else {
var101 = var100->type->type_table[cltype102] == idtype103;
}
var_104 = var101;
if (var101){
var98 = var_104;
} else {
var105 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var106 = ((val* (*)(val*))(var105->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var105) /* mcasttype on <var105:nullable Object(RuntimeVariable)>*/;
/* <var106:MType> isa MNullType */
cltype108 = type_model__MNullType.color;
idtype109 = type_model__MNullType.id;
if(cltype108 >= var106->type->table_size) {
var107 = 0;
} else {
var107 = var106->type->type_table[cltype108] == idtype109;
}
var98 = var107;
}
var_110 = var98;
if (var98){
var97 = var_consider_null;
} else {
var97 = var_110;
}
if (var97){
if (varonce111) {
var112 = varonce111;
} else {
var113 = "if (";
var114 = 4;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
if (varonce117) {
var118 = varonce117;
} else {
var119 = " == NULL) { /* Special null case */";
var120 = 35;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var122 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var122 = array_instance Array[Object] */
var123 = 3;
var124 = NEW_array__NativeArray(var123, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var124)->values[0] = (val*) var112;
((struct instance_array__NativeArray*)var124)->values[1] = (val*) var116;
((struct instance_array__NativeArray*)var124)->values[2] = (val*) var118;
((void (*)(val*, val*, long))(var122->class->vft[COLOR_array__Array__with_native]))(var122, var124, var123) /* with_native on <var122:Array[Object]>*/;
}
var125 = ((val* (*)(val*))(var122->class->vft[COLOR_string__Object__to_s]))(var122) /* to_s on <var122:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var125) /* add on <self:GlobalCompilerVisitor>*/;
var126 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MProperty__name]))(var_m) /* name on <var_m:MMethod>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = "==";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = ((short int (*)(val*, val*))(var126->class->vft[COLOR_kernel__Object___61d_61d]))(var126, var128) /* == on <var126:String>*/;
if (var132){
var133 = NULL;
if (var_res == NULL) {
var134 = 0; /* is null */
} else {
var134 = 1; /* arg is null and recv is not */
}
if (!var134) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 360);
show_backtrace(1);
}
var135 = 1;
var136 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var135) /* [] on <var_args:Array[RuntimeVariable]>*/;
var137 = ((val* (*)(val*))(var136->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var136) /* mcasttype on <var136:nullable Object(RuntimeVariable)>*/;
/* <var137:MType> isa MNullableType */
cltype139 = type_model__MNullableType.color;
idtype140 = type_model__MNullableType.id;
if(cltype139 >= var137->type->table_size) {
var138 = 0;
} else {
var138 = var137->type->type_table[cltype139] == idtype140;
}
if (var138){
if (varonce141) {
var142 = varonce141;
} else {
var143 = " = (";
var144 = 4;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = 1;
var147 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var146) /* [] on <var_args:Array[RuntimeVariable]>*/;
if (varonce148) {
var149 = varonce148;
} else {
var150 = " == NULL);";
var151 = 10;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
var153 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var153 = array_instance Array[Object] */
var154 = 4;
var155 = NEW_array__NativeArray(var154, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var155)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var155)->values[1] = (val*) var142;
((struct instance_array__NativeArray*)var155)->values[2] = (val*) var147;
((struct instance_array__NativeArray*)var155)->values[3] = (val*) var149;
((void (*)(val*, val*, long))(var153->class->vft[COLOR_array__Array__with_native]))(var153, var155, var154) /* with_native on <var153:Array[Object]>*/;
}
var156 = ((val* (*)(val*))(var153->class->vft[COLOR_string__Object__to_s]))(var153) /* to_s on <var153:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var156) /* add on <self:GlobalCompilerVisitor>*/;
} else {
var157 = 1;
var158 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var157) /* [] on <var_args:Array[RuntimeVariable]>*/;
var159 = ((val* (*)(val*))(var158->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var158) /* mcasttype on <var158:nullable Object(RuntimeVariable)>*/;
/* <var159:MType> isa MNullType */
cltype161 = type_model__MNullType.color;
idtype162 = type_model__MNullType.id;
if(cltype161 >= var159->type->table_size) {
var160 = 0;
} else {
var160 = var159->type->type_table[cltype161] == idtype162;
}
if (var160){
if (varonce163) {
var164 = varonce163;
} else {
var165 = " = 1; /* is null */";
var166 = 19;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 2;
var170 = NEW_array__NativeArray(var169, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var170)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var170)->values[1] = (val*) var164;
((void (*)(val*, val*, long))(var168->class->vft[COLOR_array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
var171 = ((val* (*)(val*))(var168->class->vft[COLOR_string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var171) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce172) {
var173 = varonce172;
} else {
var174 = " = 0; /* ";
var175 = 9;
var176 = string__NativeString__to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
var177 = 1;
var178 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var177) /* [] on <var_args:Array[RuntimeVariable]>*/;
var179 = ((val* (*)(val*))(var178->class->vft[COLOR_string__Object__inspect]))(var178) /* inspect on <var178:nullable Object(RuntimeVariable)>*/;
if (varonce180) {
var181 = varonce180;
} else {
var182 = " cannot be null */";
var183 = 18;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var185 = array_instance Array[Object] */
var186 = 4;
var187 = NEW_array__NativeArray(var186, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var187)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var187)->values[1] = (val*) var173;
((struct instance_array__NativeArray*)var187)->values[2] = (val*) var179;
((struct instance_array__NativeArray*)var187)->values[3] = (val*) var181;
((void (*)(val*, val*, long))(var185->class->vft[COLOR_array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[Object]>*/;
}
var188 = ((val* (*)(val*))(var185->class->vft[COLOR_string__Object__to_s]))(var185) /* to_s on <var185:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var188) /* add on <self:GlobalCompilerVisitor>*/;
}
}
} else {
var189 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MProperty__name]))(var_m) /* name on <var_m:MMethod>*/;
if (varonce190) {
var191 = varonce190;
} else {
var192 = "!=";
var193 = 2;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = ((short int (*)(val*, val*))(var189->class->vft[COLOR_kernel__Object___61d_61d]))(var189, var191) /* == on <var189:String>*/;
if (var195){
var196 = NULL;
if (var_res == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (!var197) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 369);
show_backtrace(1);
}
var198 = 1;
var199 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var198) /* [] on <var_args:Array[RuntimeVariable]>*/;
var200 = ((val* (*)(val*))(var199->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var199) /* mcasttype on <var199:nullable Object(RuntimeVariable)>*/;
/* <var200:MType> isa MNullableType */
cltype202 = type_model__MNullableType.color;
idtype203 = type_model__MNullableType.id;
if(cltype202 >= var200->type->table_size) {
var201 = 0;
} else {
var201 = var200->type->type_table[cltype202] == idtype203;
}
if (var201){
if (varonce204) {
var205 = varonce204;
} else {
var206 = " = (";
var207 = 4;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
var209 = 1;
var210 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var209) /* [] on <var_args:Array[RuntimeVariable]>*/;
if (varonce211) {
var212 = varonce211;
} else {
var213 = " != NULL);";
var214 = 10;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
var216 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var216 = array_instance Array[Object] */
var217 = 4;
var218 = NEW_array__NativeArray(var217, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var218)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var218)->values[1] = (val*) var205;
((struct instance_array__NativeArray*)var218)->values[2] = (val*) var210;
((struct instance_array__NativeArray*)var218)->values[3] = (val*) var212;
((void (*)(val*, val*, long))(var216->class->vft[COLOR_array__Array__with_native]))(var216, var218, var217) /* with_native on <var216:Array[Object]>*/;
}
var219 = ((val* (*)(val*))(var216->class->vft[COLOR_string__Object__to_s]))(var216) /* to_s on <var216:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var219) /* add on <self:GlobalCompilerVisitor>*/;
} else {
var220 = 1;
var221 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var220) /* [] on <var_args:Array[RuntimeVariable]>*/;
var222 = ((val* (*)(val*))(var221->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var221) /* mcasttype on <var221:nullable Object(RuntimeVariable)>*/;
/* <var222:MType> isa MNullType */
cltype224 = type_model__MNullType.color;
idtype225 = type_model__MNullType.id;
if(cltype224 >= var222->type->table_size) {
var223 = 0;
} else {
var223 = var222->type->type_table[cltype224] == idtype225;
}
if (var223){
if (varonce226) {
var227 = varonce226;
} else {
var228 = " = 0; /* is null */";
var229 = 19;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
var231 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var231 = array_instance Array[Object] */
var232 = 2;
var233 = NEW_array__NativeArray(var232, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var233)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var233)->values[1] = (val*) var227;
((void (*)(val*, val*, long))(var231->class->vft[COLOR_array__Array__with_native]))(var231, var233, var232) /* with_native on <var231:Array[Object]>*/;
}
var234 = ((val* (*)(val*))(var231->class->vft[COLOR_string__Object__to_s]))(var231) /* to_s on <var231:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var234) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce235) {
var236 = varonce235;
} else {
var237 = " = 1; /* ";
var238 = 9;
var239 = string__NativeString__to_s_with_length(var237, var238);
var236 = var239;
varonce235 = var236;
}
var240 = 1;
var241 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var240) /* [] on <var_args:Array[RuntimeVariable]>*/;
var242 = ((val* (*)(val*))(var241->class->vft[COLOR_string__Object__inspect]))(var241) /* inspect on <var241:nullable Object(RuntimeVariable)>*/;
if (varonce243) {
var244 = varonce243;
} else {
var245 = " cannot be null */";
var246 = 18;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
var248 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var248 = array_instance Array[Object] */
var249 = 4;
var250 = NEW_array__NativeArray(var249, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var250)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var250)->values[1] = (val*) var236;
((struct instance_array__NativeArray*)var250)->values[2] = (val*) var242;
((struct instance_array__NativeArray*)var250)->values[3] = (val*) var244;
((void (*)(val*, val*, long))(var248->class->vft[COLOR_array__Array__with_native]))(var248, var250, var249) /* with_native on <var248:Array[Object]>*/;
}
var251 = ((val* (*)(val*))(var248->class->vft[COLOR_string__Object__to_s]))(var248) /* to_s on <var248:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var251) /* add on <self:GlobalCompilerVisitor>*/;
}
}
} else {
if (varonce252) {
var253 = varonce252;
} else {
var254 = "Reciever is null";
var255 = 16;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var253) /* add_abort on <self:GlobalCompilerVisitor>*/;
}
}
if (varonce257) {
var258 = varonce257;
} else {
var259 = "} else";
var260 = 6;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var258) /* add on <self:GlobalCompilerVisitor>*/;
} else {
}
var262 = ((short int (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_types) /* is_empty on <var_types:Array[MClassType]>*/;
if (var262){
if (varonce263) {
var264 = varonce263;
} else {
var265 = "{";
var266 = 1;
var267 = string__NativeString__to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var264) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce268) {
var269 = varonce268;
} else {
var270 = "/*BUG: no live types for ";
var271 = 25;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
var273 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var274 = ((val* (*)(val*))(var273->class->vft[COLOR_string__Object__inspect]))(var273) /* inspect on <var273:nullable Object(RuntimeVariable)>*/;
if (varonce275) {
var276 = varonce275;
} else {
var277 = " . ";
var278 = 3;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
if (varonce280) {
var281 = varonce280;
} else {
var282 = "*/";
var283 = 2;
var284 = string__NativeString__to_s_with_length(var282, var283);
var281 = var284;
varonce280 = var281;
}
var285 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var285 = array_instance Array[Object] */
var286 = 5;
var287 = NEW_array__NativeArray(var286, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var287)->values[0] = (val*) var269;
((struct instance_array__NativeArray*)var287)->values[1] = (val*) var274;
((struct instance_array__NativeArray*)var287)->values[2] = (val*) var276;
((struct instance_array__NativeArray*)var287)->values[3] = (val*) var_m;
((struct instance_array__NativeArray*)var287)->values[4] = (val*) var281;
((void (*)(val*, val*, long))(var285->class->vft[COLOR_array__Array__with_native]))(var285, var287, var286) /* with_native on <var285:Array[Object]>*/;
}
var288 = ((val* (*)(val*))(var285->class->vft[COLOR_string__Object__to_s]))(var285) /* to_s on <var285:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var288) /* add on <self:GlobalCompilerVisitor>*/;
var289 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var289) /* bugtype on <self:GlobalCompilerVisitor>*/;
if (varonce290) {
var291 = varonce290;
} else {
var292 = "}";
var293 = 1;
var294 = string__NativeString__to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var291) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce295) {
var296 = varonce295;
} else {
var297 = "switch(";
var298 = 7;
var299 = string__NativeString__to_s_with_length(var297, var298);
var296 = var299;
varonce295 = var296;
}
var300 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
if (varonce301) {
var302 = varonce301;
} else {
var303 = "->classid) {";
var304 = 12;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
var306 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var306 = array_instance Array[Object] */
var307 = 3;
var308 = NEW_array__NativeArray(var307, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var308)->values[0] = (val*) var296;
((struct instance_array__NativeArray*)var308)->values[1] = (val*) var300;
((struct instance_array__NativeArray*)var308)->values[2] = (val*) var302;
((void (*)(val*, val*, long))(var306->class->vft[COLOR_array__Array__with_native]))(var306, var308, var307) /* with_native on <var306:Array[Object]>*/;
}
var309 = ((val* (*)(val*))(var306->class->vft[COLOR_string__Object__to_s]))(var306) /* to_s on <var306:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var309) /* add on <self:GlobalCompilerVisitor>*/;
var310 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var_types) /* last on <var_types:Array[MClassType]>*/;
var_last = var310;
var311 = NULL;
var_defaultpropdef = var311;
var312 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_types) /* iterator on <var_types:Array[MClassType]>*/;
for(;;) {
var313 = ((short int (*)(val*))(var312->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var312) /* is_ok on <var312:Iterator[nullable Object]>*/;
if(!var313) break;
var314 = ((val* (*)(val*))(var312->class->vft[COLOR_abstract_collection__Iterator__item]))(var312) /* item on <var312:Iterator[nullable Object]>*/;
var_t = var314;
var315 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var316 = ((val* (*)(val*))(var315->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var315) /* mainmodule on <var315:AbstractCompiler(GlobalCompiler)>*/;
var317 = ((val* (*)(val*, val*, val*))(var_m->class->vft[COLOR_model__MProperty__lookup_first_definition]))(var_m, var316, var_t) /* lookup_first_definition on <var_m:MMethod>*/;
var_propdef318 = var317;
var320 = ((val* (*)(val*))(var_propdef318->class->vft[COLOR_model__MPropDef__mclassdef]))(var_propdef318) /* mclassdef on <var_propdef318:MMethodDef>*/;
var321 = ((val* (*)(val*))(var320->class->vft[COLOR_model__MClassDef__mclass]))(var320) /* mclass on <var320:MClassDef>*/;
var322 = ((val* (*)(val*))(var321->class->vft[COLOR_model__MClass__name]))(var321) /* name on <var321:MClass>*/;
if (varonce323) {
var324 = varonce323;
} else {
var325 = "Object";
var326 = 6;
var327 = string__NativeString__to_s_with_length(var325, var326);
var324 = var327;
varonce323 = var324;
}
var328 = ((short int (*)(val*, val*))(var322->class->vft[COLOR_kernel__Object___61d_61d]))(var322, var324) /* == on <var322:String>*/;
var_329 = var328;
if (var328){
var330 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t) /* ctype on <var_t:MClassType>*/;
if (varonce331) {
var332 = varonce331;
} else {
var333 = "val*";
var334 = 4;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
var336 = ((short int (*)(val*, val*))(var330->class->vft[COLOR_kernel__Object___61d_61d]))(var330, var332) /* == on <var330:String>*/;
var319 = var336;
} else {
var319 = var_329;
}
if (var319){
var_defaultpropdef = var_propdef318;
goto CONTINUE_label;
} else {
}
var339 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var340 = ((short int (*)(val*))(var339->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var339) /* hardening on <var339:AbstractCompiler(GlobalCompiler)>*/;
var341 = !var340;
var_342 = var341;
if (var341){
var343 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_last) /* == on <var_t:MClassType>*/;
var338 = var343;
} else {
var338 = var_342;
}
var_344 = var338;
if (var338){
var345 = NULL;
if (var_defaultpropdef == NULL) {
var346 = 1; /* is null */
} else {
var346 = 0; /* arg is null but recv is not */
}
var337 = var346;
} else {
var337 = var_344;
}
if (var337){
if (varonce347) {
var348 = varonce347;
} else {
var349 = "default: /* test ";
var350 = 17;
var351 = string__NativeString__to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
if (varonce352) {
var353 = varonce352;
} else {
var354 = " */";
var355 = 3;
var356 = string__NativeString__to_s_with_length(var354, var355);
var353 = var356;
varonce352 = var353;
}
var357 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var357 = array_instance Array[Object] */
var358 = 3;
var359 = NEW_array__NativeArray(var358, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var359)->values[0] = (val*) var348;
((struct instance_array__NativeArray*)var359)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var359)->values[2] = (val*) var353;
((void (*)(val*, val*, long))(var357->class->vft[COLOR_array__Array__with_native]))(var357, var359, var358) /* with_native on <var357:Array[Object]>*/;
}
var360 = ((val* (*)(val*))(var357->class->vft[COLOR_string__Object__to_s]))(var357) /* to_s on <var357:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var360) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce361) {
var362 = varonce361;
} else {
var363 = "case ";
var364 = 5;
var365 = string__NativeString__to_s_with_length(var363, var364);
var362 = var365;
varonce361 = var362;
}
var366 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var367 = ((val* (*)(val*, val*))(var366->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var366, var_t) /* classid on <var366:AbstractCompiler(GlobalCompiler)>*/;
if (varonce368) {
var369 = varonce368;
} else {
var370 = ": /* test ";
var371 = 10;
var372 = string__NativeString__to_s_with_length(var370, var371);
var369 = var372;
varonce368 = var369;
}
if (varonce373) {
var374 = varonce373;
} else {
var375 = " */";
var376 = 3;
var377 = string__NativeString__to_s_with_length(var375, var376);
var374 = var377;
varonce373 = var374;
}
var378 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var378 = array_instance Array[Object] */
var379 = 5;
var380 = NEW_array__NativeArray(var379, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var380)->values[0] = (val*) var362;
((struct instance_array__NativeArray*)var380)->values[1] = (val*) var367;
((struct instance_array__NativeArray*)var380)->values[2] = (val*) var369;
((struct instance_array__NativeArray*)var380)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var380)->values[4] = (val*) var374;
((void (*)(val*, val*, long))(var378->class->vft[COLOR_array__Array__with_native]))(var378, var380, var379) /* with_native on <var378:Array[Object]>*/;
}
var381 = ((val* (*)(val*))(var378->class->vft[COLOR_string__Object__to_s]))(var378) /* to_s on <var378:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var381) /* add on <self:GlobalCompilerVisitor>*/;
}
var382 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__call]))(self, var_propdef318, var_t, var_args) /* call on <self:GlobalCompilerVisitor>*/;
var_res2383 = var382;
var384 = NULL;
if (var_res == NULL) {
var385 = 0; /* is null */
} else {
var385 = 1; /* arg is null and recv is not */
}
if (var385){
if (var_res2383 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 405);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(self, var_res, var_res2383) /* assign on <self:GlobalCompilerVisitor>*/;
} else {
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = "break;";
var389 = 6;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var387) /* add on <self:GlobalCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var312->class->vft[COLOR_abstract_collection__Iterator__next]))(var312) /* next on <var312:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var391 = NULL;
if (var_defaultpropdef == NULL) {
var392 = 0; /* is null */
} else {
var392 = 1; /* arg is null and recv is not */
}
if (var392){
if (varonce393) {
var394 = varonce393;
} else {
var395 = "default: /* default is Object */";
var396 = 32;
var397 = string__NativeString__to_s_with_length(var395, var396);
var394 = var397;
varonce393 = var394;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var394) /* add on <self:GlobalCompilerVisitor>*/;
var398 = ((val* (*)(val*))(var_defaultpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_defaultpropdef) /* mclassdef on <var_defaultpropdef:nullable MMethodDef(MMethodDef)>*/;
var399 = ((val* (*)(val*))(var398->class->vft[COLOR_model__MClassDef__bound_mtype]))(var398) /* bound_mtype on <var398:MClassDef>*/;
var400 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__call]))(self, var_defaultpropdef, var399, var_args) /* call on <self:GlobalCompilerVisitor>*/;
var_res2401 = var400;
var402 = NULL;
if (var_res == NULL) {
var403 = 0; /* is null */
} else {
var403 = 1; /* arg is null and recv is not */
}
if (var403){
if (var_res2401 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 411);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(self, var_res, var_res2401) /* assign on <self:GlobalCompilerVisitor>*/;
} else {
}
} else {
var404 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var405 = ((short int (*)(val*))(var404->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var404) /* hardening on <var404:AbstractCompiler(GlobalCompiler)>*/;
if (var405){
if (varonce406) {
var407 = varonce406;
} else {
var408 = "default: /* bug */";
var409 = 18;
var410 = string__NativeString__to_s_with_length(var408, var409);
var407 = var410;
varonce406 = var407;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var407) /* add on <self:GlobalCompilerVisitor>*/;
var411 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var411) /* bugtype on <self:GlobalCompilerVisitor>*/;
} else {
}
}
if (varonce412) {
var413 = varonce412;
} else {
var414 = "}";
var415 = 1;
var416 = string__NativeString__to_s_with_length(var414, var415);
var413 = var416;
varonce412 = var413;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var413) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#send for (self: Object, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__send(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#check_valid_reciever for (self: GlobalCompilerVisitor, MClassType) */
void global_compiler__GlobalCompilerVisitor__check_valid_reciever(val* self, val* p0) {
val* var_recvtype /* var recvtype: MClassType */;
short int var /* : Bool */;
val* var1 /* : AbstractCompiler */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : HashSet[MClassType] */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : MClass */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
var_recvtype = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var1) /* runtime_type_analysis on <var1:AbstractCompiler(GlobalCompiler)>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var2) /* live_types on <var2:RapidTypeAnalysis>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Collection__has]))(var3, var_recvtype) /* has on <var3:HashSet[MClassType]>*/;
var_ = var4;
if (var4){
var = var_;
} else {
var5 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_model__MClassType__mclass]))(var_recvtype) /* mclass on <var_recvtype:MClassType>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClass__name]))(var5) /* name on <var5:MClass>*/;
if (varonce) {
var7 = varonce;
} else {
var8 = "Object";
var9 = 6;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var7) /* == on <var6:String>*/;
var = var11;
}
if (var){
goto RET_LABEL;
} else {
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = " is not a live type";
var15 = 19;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 2;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var20) /* print on <self:GlobalCompilerVisitor>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 424);
show_backtrace(1);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#check_valid_reciever for (self: Object, MClassType) */
void VIRTUAL_global_compiler__GlobalCompilerVisitor__check_valid_reciever(val* self, val* p0) {
global_compiler__GlobalCompilerVisitor__check_valid_reciever(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#get_recvtype for (self: GlobalCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): MClassType */
val* global_compiler__GlobalCompilerVisitor__get_recvtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : MClassType */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
val* var2 /* : MClassDef */;
val* var3 /* : MClass */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
short int var16 /* : Bool */;
val* var17 /* : MClassDef */;
val* var18 /* : MClassType */;
var_m = p0;
var_recvtype = p1;
var_args = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__check_valid_reciever]))(self, var_recvtype) /* check_valid_reciever on <self:GlobalCompilerVisitor>*/;
var2 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mclassdef]))(var_m) /* mclassdef on <var_m:MMethodDef>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mclass]))(var2) /* mclass on <var2:MClassDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClass__name]))(var3) /* name on <var3:MClass>*/;
if (varonce) {
var5 = varonce;
} else {
var6 = "Object";
var7 = 6;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:String>*/;
var_ = var9;
if (var9){
var10 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_recvtype) /* ctype on <var_recvtype:MClassType>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "val*";
var14 = 4;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var12) /* == on <var10:String>*/;
var1 = var16;
} else {
var1 = var_;
}
if (var1){
var17 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mclassdef]))(var_m) /* mclassdef on <var_m:MMethodDef>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_model__MClassDef__bound_mtype]))(var17) /* bound_mtype on <var17:MClassDef>*/;
var_recvtype = var18;
} else {
}
var = var_recvtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#get_recvtype for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): MClassType */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__get_recvtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = global_compiler__GlobalCompilerVisitor__get_recvtype(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#get_recv for (self: GlobalCompilerVisitor, MClassType, Array[RuntimeVariable]): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__get_recv(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : RuntimeVariable */;
val* var3 /* : RuntimeVariable */;
var_recvtype = p0;
var_args = p1;
var1 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var1, var_recvtype) /* autobox on <self:GlobalCompilerVisitor>*/;
var3 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(self, var2, var_recvtype) /* autoadapt on <self:GlobalCompilerVisitor>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#get_recv for (self: Object, MClassType, Array[RuntimeVariable]): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__get_recv(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__get_recv(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#finalize_call for (self: GlobalCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__finalize_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
long var1 /* : Int */;
val* var2 /* : nullable MSignature */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
long var21 /* : Int */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : Object */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
long var42 /* : Int */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var50 /* : NativeArray[Object] */;
val* var51 /* : Object */;
val* var52 /* : String */;
val* var53 /* : null */;
val* var54 /* : CustomizedRuntimeFunction */;
val* var_rm /* var rm: CustomizedRuntimeFunction */;
val* var55 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_args = p2;
var1 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[RuntimeVariable]>*/;
var2 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MMethodDef__msignature]))(var_m) /* msignature on <var_m:MMethodDef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 450);
show_backtrace(1);
} else {
var3 = ((long (*)(val*))(var2->class->vft[COLOR_model__MSignature__arity]))(var2) /* arity on <var2:nullable MSignature>*/;
}
var4 = 1;
{ /* Inline kernel#Int#+ (var3,var4) */
var7 = var3 + var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
{ /* Inline kernel#Int#!= (var1,var5) */
var10 = var1 == var5;
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
if (varonce) {
var12 = varonce;
} else {
var13 = "printf(\"NOT YET IMPLEMENTED: Invalid arity for ";
var14 = 47;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = ". ";
var19 = 2;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[RuntimeVariable]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = " arguments given.\\n\"); show_backtrace(1);";
var25 = 41;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_m;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var17;
var30 = BOX_kernel__Int(var21); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var30;
((struct instance_array__NativeArray*)var29)->values[4] = (val*) var23;
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var31) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "NOT YET IMPLEMENTED: Invalid arity for ";
var35 = 39;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ". ";
var40 = 2;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[RuntimeVariable]>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = " arguments given.";
var46 = 17;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var48 = array_instance Array[Object] */
var49 = 5;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) var_m;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var38;
var51 = BOX_kernel__Int(var42); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var50)->values[3] = (val*) var51;
((struct instance_array__NativeArray*)var50)->values[4] = (val*) var44;
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Object]>*/;
}
var52 = ((val* (*)(val*))(var48->class->vft[COLOR_string__Object__to_s]))(var48) /* to_s on <var48:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__debug]))(self, var52) /* debug on <self:GlobalCompilerVisitor>*/;
var53 = NULL;
var = var53;
goto RET_LABEL;
} else {
}
var54 = NEW_global_compiler__CustomizedRuntimeFunction(&type_global_compiler__CustomizedRuntimeFunction);
((void (*)(val*, val*, val*))(var54->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__init]))(var54, var_m, var_recvtype) /* init on <var54:CustomizedRuntimeFunction>*/;
var_rm = var54;
var55 = ((val* (*)(val*, val*, val*))(var_rm->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__call]))(var_rm, self, var_args) /* call on <var_rm:CustomizedRuntimeFunction>*/;
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#finalize_call for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__finalize_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__finalize_call(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#call for (self: GlobalCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : MClassType */;
val* var_recv_type /* var recv_type: MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var3 /* : Array[nullable Object] */;
val* var_new_args /* var new_args: Array[RuntimeVariable] */;
val* var4 /* : nullable MSignature */;
val* var5 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_args = p2;
var1 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__get_recvtype]))(self, var_m, var_recvtype, var_args) /* get_recvtype on <self:GlobalCompilerVisitor>*/;
var_recv_type = var1;
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__get_recv]))(self, var_recv_type, var_args) /* get_recv on <self:GlobalCompilerVisitor>*/;
var_recv = var2;
var3 = ((val* (*)(val*))(var_args->class->vft[COLOR_array__Collection__to_a]))(var_args) /* to_a on <var_args:Array[RuntimeVariable]>*/;
var_new_args = var3;
var4 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MMethodDef__msignature]))(var_m) /* msignature on <var_m:MMethodDef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 465);
show_backtrace(1);
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__varargize]))(self, var_m, var4, var_new_args) /* varargize on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(var_new_args->class->vft[COLOR_abstract_collection__Sequence__first_61d]))(var_new_args, var_recv) /* first= on <var_new_args:Array[RuntimeVariable]>*/;
var5 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__finalize_call]))(self, var_m, var_recv_type, var_new_args) /* finalize_call on <self:GlobalCompilerVisitor>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#call for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__call(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#call_without_varargize for (self: GlobalCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__call_without_varargize(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : MClassType */;
val* var_recv_type /* var recv_type: MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var3 /* : Array[nullable Object] */;
val* var_new_args /* var new_args: Array[RuntimeVariable] */;
val* var4 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_args = p2;
var1 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__get_recvtype]))(self, var_m, var_recvtype, var_args) /* get_recvtype on <self:GlobalCompilerVisitor>*/;
var_recv_type = var1;
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__get_recv]))(self, var_recv_type, var_args) /* get_recv on <self:GlobalCompilerVisitor>*/;
var_recv = var2;
var3 = ((val* (*)(val*))(var_args->class->vft[COLOR_array__Collection__to_a]))(var_args) /* to_a on <var_args:Array[RuntimeVariable]>*/;
var_new_args = var3;
((void (*)(val*, val*))(var_new_args->class->vft[COLOR_abstract_collection__Sequence__first_61d]))(var_new_args, var_recv) /* first= on <var_new_args:Array[RuntimeVariable]>*/;
var4 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__finalize_call]))(self, var_m, var_recv_type, var_new_args) /* finalize_call on <self:GlobalCompilerVisitor>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#call_without_varargize for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__call_without_varargize(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__call_without_varargize(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#supercall for (self: GlobalCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var3 /* : MProperty */;
val* var4 /* : MPropDef */;
val* var5 /* : nullable MSignature */;
val* var6 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var10 /* : nullable Object */;
val* var11 /* : MType */;
val* var12 /* : RuntimeVariable */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : nullable Object */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : nullable Object */;
val* var34 /* : MType */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var43 /* : MType */;
short int var44 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var45 /* : AbstractCompiler */;
val* var46 /* : RapidTypeAnalysis */;
val* var47 /* : HashSet[MClassType] */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
val* var64 /* : AbstractCompiler */;
val* var65 /* : MModule */;
val* var66 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var67 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
val* var68 /* : null */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : nullable Object */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var95 /* : NativeArray[Object] */;
val* var96 /* : String */;
val* var97 /* : nullable Object */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : String */;
val* var108 /* : nullable Object */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : String */;
val* var118 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var119 /* : Iterator[nullable Object] */;
short int var120 /* : Bool */;
val* var121 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var122 /* : AbstractCompiler */;
val* var123 /* : MModule */;
val* var124 /* : MPropDef */;
val* var_propdef125 /* var propdef: MMethodDef */;
short int var126 /* : Bool */;
val* var127 /* : AbstractCompiler */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var_ /* var : Bool */;
short int var130 /* : Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
val* var141 /* : Array[Object] */;
long var142 /* : Int */;
val* var143 /* : NativeArray[Object] */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
val* var150 /* : AbstractCompiler */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : Array[Object] */;
long var163 /* : Int */;
val* var164 /* : NativeArray[Object] */;
val* var165 /* : String */;
val* var166 /* : nullable RuntimeVariable */;
val* var_res2167 /* var res2: nullable RuntimeVariable */;
val* var168 /* : null */;
short int var169 /* : Bool */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
val* var175 /* : AbstractCompiler */;
short int var176 /* : Bool */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : String */;
val* var182 /* : nullable Object */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
var_m = p0;
var_recvtype = p1;
var_args = p2;
var1 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__collect_types]))(self, var1) /* collect_types on <self:GlobalCompilerVisitor>*/;
var_types = var2;
var3 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mproperty]))(var_m) /* mproperty on <var_m:MMethodDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MProperty__intro]))(var3) /* intro on <var3:MProperty(MMethod)>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MMethodDef__msignature]))(var4) /* msignature on <var4:MPropDef(MMethodDef)>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 486);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MSignature__return_mtype]))(var5) /* return_mtype on <var5:nullable MSignature>*/;
}
var_ret = var6;
var7 = NULL;
if (var_ret == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
var9 = NULL;
var_res = var9;
} else {
var10 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(self, var_ret, var10) /* resolve_for on <self:GlobalCompilerVisitor>*/;
var_ret = var11;
var12 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var12;
}
if (varonce) {
var13 = varonce;
} else {
var14 = "/* super ";
var15 = 9;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " on ";
var20 = 4;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__inspect]))(var22) /* inspect on <var22:nullable Object(RuntimeVariable)>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = " */";
var27 = 3;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 5;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var_m;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var31)->values[3] = (val*) var23;
((struct instance_array__NativeArray*)var31)->values[4] = (val*) var25;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var32) /* add on <self:GlobalCompilerVisitor>*/;
var33 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var33) /* mtype on <var33:nullable Object(RuntimeVariable)>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_compiler__MType__ctype]))(var34) /* ctype on <var34:MType>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "val*";
var39 = 4;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_kernel__Object___33d_61d]))(var35, var37) /* != on <var35:String>*/;
if (var41){
var42 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var42) /* mtype on <var42:nullable Object(RuntimeVariable)>*/;
/* <var43:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var43->type->table_size) {
var44 = 0;
} else {
var44 = var43->type->type_table[cltype] == idtype;
}
if (!var44) {
var_class_name = var43 == NULL ? "null" : var43->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 496);
show_backtrace(1);
}
var_mclasstype = var43;
var45 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var45) /* runtime_type_analysis on <var45:AbstractCompiler(GlobalCompiler)>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var46) /* live_types on <var46:RapidTypeAnalysis>*/;
var48 = ((short int (*)(val*, val*))(var47->class->vft[COLOR_abstract_collection__Collection__has]))(var47, var_mclasstype) /* has on <var47:HashSet[MClassType]>*/;
var49 = !var48;
if (var49){
if (varonce50) {
var51 = varonce50;
} else {
var52 = "/* skip, no method ";
var53 = 19;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = " */";
var58 = 3;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 3;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var_m;
((struct instance_array__NativeArray*)var62)->values[2] = (val*) var56;
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var63) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
var64 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var64) /* mainmodule on <var64:AbstractCompiler(GlobalCompiler)>*/;
var66 = ((val* (*)(val*, val*, val*))(var_m->class->vft[COLOR_model__MPropDef__lookup_next_definition]))(var_m, var65, var_mclasstype) /* lookup_next_definition on <var_m:MMethodDef>*/;
var_propdef = var66;
var67 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__call_without_varargize]))(self, var_propdef, var_mclasstype, var_args) /* call_without_varargize on <self:GlobalCompilerVisitor>*/;
var_res2 = var67;
var68 = NULL;
if (var_res == NULL) {
var69 = 0; /* is null */
} else {
var69 = 1; /* arg is null and recv is not */
}
if (var69){
if (var_res2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 503);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(self, var_res, var_res2) /* assign on <self:GlobalCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
var70 = ((short int (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_types) /* is_empty on <var_types:Array[MClassType]>*/;
if (var70){
if (varonce71) {
var72 = varonce71;
} else {
var73 = "{";
var74 = 1;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var72) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce76) {
var77 = varonce76;
} else {
var78 = "/*BUG: no live types for ";
var79 = 25;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var82 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__inspect]))(var81) /* inspect on <var81:nullable Object(RuntimeVariable)>*/;
if (varonce83) {
var84 = varonce83;
} else {
var85 = " . ";
var86 = 3;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "*/";
var91 = 2;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var93 = array_instance Array[Object] */
var94 = 5;
var95 = NEW_array__NativeArray(var94, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var95)->values[0] = (val*) var77;
((struct instance_array__NativeArray*)var95)->values[1] = (val*) var82;
((struct instance_array__NativeArray*)var95)->values[2] = (val*) var84;
((struct instance_array__NativeArray*)var95)->values[3] = (val*) var_m;
((struct instance_array__NativeArray*)var95)->values[4] = (val*) var89;
((void (*)(val*, val*, long))(var93->class->vft[COLOR_array__Array__with_native]))(var93, var95, var94) /* with_native on <var93:Array[Object]>*/;
}
var96 = ((val* (*)(val*))(var93->class->vft[COLOR_string__Object__to_s]))(var93) /* to_s on <var93:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var96) /* add on <self:GlobalCompilerVisitor>*/;
var97 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var97) /* bugtype on <self:GlobalCompilerVisitor>*/;
if (varonce98) {
var99 = varonce98;
} else {
var100 = "}";
var101 = 1;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var99) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "switch(";
var106 = 7;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
if (varonce109) {
var110 = varonce109;
} else {
var111 = "->classid) {";
var112 = 12;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 3;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var116)->values[1] = (val*) var108;
((struct instance_array__NativeArray*)var116)->values[2] = (val*) var110;
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
var117 = ((val* (*)(val*))(var114->class->vft[COLOR_string__Object__to_s]))(var114) /* to_s on <var114:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var117) /* add on <self:GlobalCompilerVisitor>*/;
var118 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var_types) /* last on <var_types:Array[MClassType]>*/;
var_last = var118;
var119 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_types) /* iterator on <var_types:Array[MClassType]>*/;
for(;;) {
var120 = ((short int (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var119) /* is_ok on <var119:Iterator[nullable Object]>*/;
if(!var120) break;
var121 = ((val* (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__item]))(var119) /* item on <var119:Iterator[nullable Object]>*/;
var_t = var121;
var122 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var123 = ((val* (*)(val*))(var122->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var122) /* mainmodule on <var122:AbstractCompiler(GlobalCompiler)>*/;
var124 = ((val* (*)(val*, val*, val*))(var_m->class->vft[COLOR_model__MPropDef__lookup_next_definition]))(var_m, var123, var_t) /* lookup_next_definition on <var_m:MMethodDef>*/;
var_propdef125 = var124;
var127 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var128 = ((short int (*)(val*))(var127->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var127) /* hardening on <var127:AbstractCompiler(GlobalCompiler)>*/;
var129 = !var128;
var_ = var129;
if (var129){
var130 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_last) /* == on <var_t:MClassType>*/;
var126 = var130;
} else {
var126 = var_;
}
if (var126){
if (varonce131) {
var132 = varonce131;
} else {
var133 = "default: /* test ";
var134 = 17;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " */";
var139 = 3;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 3;
var143 = NEW_array__NativeArray(var142, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var143)->values[0] = (val*) var132;
((struct instance_array__NativeArray*)var143)->values[1] = (val*) var_t;
((struct instance_array__NativeArray*)var143)->values[2] = (val*) var137;
((void (*)(val*, val*, long))(var141->class->vft[COLOR_array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
}
var144 = ((val* (*)(val*))(var141->class->vft[COLOR_string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var144) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce145) {
var146 = varonce145;
} else {
var147 = "case ";
var148 = 5;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
var150 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var151 = ((val* (*)(val*, val*))(var150->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var150, var_t) /* classid on <var150:AbstractCompiler(GlobalCompiler)>*/;
if (varonce152) {
var153 = varonce152;
} else {
var154 = ": /* test ";
var155 = 10;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = " */";
var160 = 3;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
var162 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var162 = array_instance Array[Object] */
var163 = 5;
var164 = NEW_array__NativeArray(var163, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var164)->values[0] = (val*) var146;
((struct instance_array__NativeArray*)var164)->values[1] = (val*) var151;
((struct instance_array__NativeArray*)var164)->values[2] = (val*) var153;
((struct instance_array__NativeArray*)var164)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var164)->values[4] = (val*) var158;
((void (*)(val*, val*, long))(var162->class->vft[COLOR_array__Array__with_native]))(var162, var164, var163) /* with_native on <var162:Array[Object]>*/;
}
var165 = ((val* (*)(val*))(var162->class->vft[COLOR_string__Object__to_s]))(var162) /* to_s on <var162:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var165) /* add on <self:GlobalCompilerVisitor>*/;
}
var166 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__call_without_varargize]))(self, var_propdef125, var_t, var_args) /* call_without_varargize on <self:GlobalCompilerVisitor>*/;
var_res2167 = var166;
var168 = NULL;
if (var_res == NULL) {
var169 = 0; /* is null */
} else {
var169 = 1; /* arg is null and recv is not */
}
if (var169){
if (var_res2167 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 525);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(self, var_res, var_res2167) /* assign on <self:GlobalCompilerVisitor>*/;
} else {
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = "break;";
var173 = 6;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var171) /* add on <self:GlobalCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__next]))(var119) /* next on <var119:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var175 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var176 = ((short int (*)(val*))(var175->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var175) /* hardening on <var175:AbstractCompiler(GlobalCompiler)>*/;
if (var176){
if (varonce177) {
var178 = varonce177;
} else {
var179 = "default: /* bug */";
var180 = 18;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var178) /* add on <self:GlobalCompilerVisitor>*/;
var182 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var182) /* bugtype on <self:GlobalCompilerVisitor>*/;
} else {
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = "}";
var186 = 1;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var184) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#supercall for (self: Object, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__supercall(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#adapt_signature for (self: GlobalCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void global_compiler__GlobalCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : Range[Int] */;
long var2 /* : Int */;
val* var3 /* : nullable MSignature */;
long var4 /* : Int */;
val* var5 /* : Discrete */;
val* var6 /* : Discrete */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
long var_i /* var i: Int */;
long var10 /* : Int */;
val* var11 /* : nullable MSignature */;
val* var12 /* : Array[MParameter] */;
val* var13 /* : nullable Object */;
val* var14 /* : MType */;
val* var_t /* var t: MType */;
val* var15 /* : nullable MSignature */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
val* var24 /* : nullable Object */;
val* var25 /* : MType */;
val* var26 /* : MType */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
val* var35 /* : nullable Object */;
val* var36 /* : RuntimeVariable */;
var_m = p0;
var_args = p1;
var = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__first]))(var_args) /* first on <var_args:Array[RuntimeVariable]>*/;
var_recv = var;
var1 = NEW_range__Range(&type_range__Rangekernel__Int);
var2 = 0;
var3 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MMethodDef__msignature]))(var_m) /* msignature on <var_m:MMethodDef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 539);
show_backtrace(1);
} else {
var4 = ((long (*)(val*))(var3->class->vft[COLOR_model__MSignature__arity]))(var3) /* arity on <var3:nullable MSignature>*/;
}
var5 = BOX_kernel__Int(var2); /* autobox from Int to Discrete */
var6 = BOX_kernel__Int(var4); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_range__Range__without_last]))(var1, var5, var6) /* without_last on <var1:Range[Int]>*/;
var7 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:Range[Int]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var10 = ((struct instance_kernel__Int*)var9)->value; /* autounbox from nullable Object to Int */;
var_i = var10;
var11 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MMethodDef__msignature]))(var_m) /* msignature on <var_m:MMethodDef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 540);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MSignature__mparameters]))(var11) /* mparameters on <var11:nullable MSignature>*/;
}
var13 = ((val* (*)(val*, long))(var12->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var12, var_i) /* [] on <var12:Array[MParameter]>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MParameter__mtype]))(var13) /* mtype on <var13:nullable Object(MParameter)>*/;
var_t = var14;
var15 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MMethodDef__msignature]))(var_m) /* msignature on <var_m:MMethodDef>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 541);
show_backtrace(1);
} else {
var16 = ((long (*)(val*))(var15->class->vft[COLOR_model__MSignature__vararg_rank]))(var15) /* vararg_rank on <var15:nullable MSignature>*/;
}
{ /* Inline kernel#Int#== (var_i,var16) */
var19 = var_i == var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var20 = 1;
{ /* Inline kernel#Int#+ (var_i,var20) */
var23 = var_i + var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var24 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var21) /* [] on <var_args:Array[RuntimeVariable]>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var24) /* mtype on <var24:nullable Object(RuntimeVariable)>*/;
var_t = var25;
} else {
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(self, var_t, var_recv) /* resolve_for on <self:GlobalCompilerVisitor>*/;
var_t = var26;
var27 = 1;
{ /* Inline kernel#Int#+ (var_i,var27) */
var30 = var_i + var27;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var31 = 1;
{ /* Inline kernel#Int#+ (var_i,var31) */
var34 = var_i + var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var35 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var32) /* [] on <var_args:Array[RuntimeVariable]>*/;
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var35, var_t) /* autobox on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, long, val*))(var_args->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_args, var28, var36) /* []= on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#adapt_signature for (self: Object, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_global_compiler__GlobalCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
global_compiler__GlobalCompilerVisitor__adapt_signature(self, p0, p1);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#vararg_instance for (self: GlobalCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_varargs /* var varargs: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
var_mpropdef = p0;
var_recv = p1;
var_varargs = p2;
var_elttype = p3;
var1 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(self, var_elttype, var_recv) /* resolve_for on <self:GlobalCompilerVisitor>*/;
var_elttype = var1;
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__array_instance]))(self, var_varargs, var_elttype) /* array_instance on <self:GlobalCompilerVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#vararg_instance for (self: Object, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__vararg_instance(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#bugtype for (self: GlobalCompilerVisitor, RuntimeVariable) */
void global_compiler__GlobalCompilerVisitor__bugtype(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : MType */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
short int var6 /* : Bool */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : MType */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
var_recv = p0;
var = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__MType__ctype]))(var) /* ctype on <var:MType>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "val*";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___33d_61d]))(var1, var2) /* != on <var1:String>*/;
if (var6){
goto RET_LABEL;
} else {
}
if (varonce7) {
var8 = varonce7;
} else {
var9 = "fprintf(stderr, \"BTD BUG: Dynamic type is %s, static type is %s\\n\", class_names[";
var10 = 80;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = "->classid], \"";
var15 = 13;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_recv) /* mcasttype on <var_recv:RuntimeVariable>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "\");";
var21 = 3;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 5;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var25)->values[2] = (val*) var13;
((struct instance_array__NativeArray*)var25)->values[3] = (val*) var17;
((struct instance_array__NativeArray*)var25)->values[4] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var26) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "show_backtrace(1);";
var30 = 18;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var28) /* add on <self:GlobalCompilerVisitor>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#bugtype for (self: Object, RuntimeVariable) */
void VIRTUAL_global_compiler__GlobalCompilerVisitor__bugtype(val* self, val* p0) {
global_compiler__GlobalCompilerVisitor__bugtype(self, p0);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#isset_attribute for (self: GlobalCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var2 /* : MClassType */;
val* var3 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
val* var58 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var59 /* : Iterator[nullable Object] */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
val* var_t /* var t: MClassType */;
short int var62 /* : Bool */;
val* var63 /* : AbstractCompiler */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var_ /* var : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : AbstractCompiler */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : String */;
val* var79 /* : Array[Object] */;
long var80 /* : Int */;
val* var81 /* : NativeArray[Object] */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
val* var88 /* : AbstractCompiler */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var97 /* : NativeArray[Object] */;
val* var98 /* : String */;
val* var99 /* : RuntimeVariable */;
val* var_recv2 /* var recv2: RuntimeVariable */;
val* var100 /* : MPropDef */;
val* var101 /* : nullable MType */;
val* var_ta /* var ta: MType */;
val* var102 /* : MType */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : String */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
val* var119 /* : MPropDef */;
val* var120 /* : String */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
val* var125 /* : RuntimeVariable */;
val* var_attr /* var attr: RuntimeVariable */;
short int var126 /* : Bool */;
int cltype;
int idtype;
short int var127 /* : Bool */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : String */;
short int var134 /* : Bool */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : String */;
val* var145 /* : Array[Object] */;
long var146 /* : Int */;
val* var147 /* : NativeArray[Object] */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : String */;
val* var154 /* : Array[Object] */;
long var155 /* : Int */;
val* var156 /* : NativeArray[Object] */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : String */;
val* var163 /* : AbstractCompiler */;
short int var164 /* : Bool */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
var_a = p0;
var_recv = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull]))(self, var_recv) /* check_recv_notnull on <self:GlobalCompilerVisitor>*/;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__collect_types]))(self, var_recv) /* collect_types on <self:GlobalCompilerVisitor>*/;
var_types = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:GlobalCompilerVisitor>*/;
var3 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var2) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var3;
var4 = ((short int (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_types) /* is_empty on <var_types:Array[MClassType]>*/;
if (var4){
if (varonce) {
var5 = varonce;
} else {
var6 = "/*BUG: no live types for ";
var7 = 25;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = " . ";
var13 = 3;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "*/";
var18 = 2;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 5;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var9;
((struct instance_array__NativeArray*)var22)->values[2] = (val*) var11;
((struct instance_array__NativeArray*)var22)->values[3] = (val*) var_a;
((struct instance_array__NativeArray*)var22)->values[4] = (val*) var16;
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var23) /* add on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var_recv) /* bugtype on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "/* isset ";
var27 = 9;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = " on ";
var32 = 4;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce35) {
var36 = varonce35;
} else {
var37 = " */";
var38 = 3;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 5;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var_a;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var30;
((struct instance_array__NativeArray*)var42)->values[3] = (val*) var34;
((struct instance_array__NativeArray*)var42)->values[4] = (val*) var36;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var43) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = "switch(";
var47 = 7;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "->classid) {";
var52 = 12;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 3;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var45;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var50;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var57) /* add on <self:GlobalCompilerVisitor>*/;
var58 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var_types) /* last on <var_types:Array[MClassType]>*/;
var_last = var58;
var59 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_types) /* iterator on <var_types:Array[MClassType]>*/;
for(;;) {
var60 = ((short int (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var59) /* is_ok on <var59:Iterator[nullable Object]>*/;
if(!var60) break;
var61 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__item]))(var59) /* item on <var59:Iterator[nullable Object]>*/;
var_t = var61;
var63 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var64 = ((short int (*)(val*))(var63->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var63) /* hardening on <var63:AbstractCompiler(GlobalCompiler)>*/;
var65 = !var64;
var_ = var65;
if (var65){
var66 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_last) /* == on <var_t:MClassType>*/;
var62 = var66;
} else {
var62 = var_;
}
if (var62){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "default: /*";
var70 = 11;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var73 = ((val* (*)(val*, val*))(var72->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var72, var_t) /* classid on <var72:AbstractCompiler(GlobalCompiler)>*/;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "*/";
var77 = 2;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 3;
var81 = NEW_array__NativeArray(var80, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var81)->values[0] = (val*) var68;
((struct instance_array__NativeArray*)var81)->values[1] = (val*) var73;
((struct instance_array__NativeArray*)var81)->values[2] = (val*) var75;
((void (*)(val*, val*, long))(var79->class->vft[COLOR_array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
var82 = ((val* (*)(val*))(var79->class->vft[COLOR_string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var82) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce83) {
var84 = varonce83;
} else {
var85 = "case ";
var86 = 5;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var88 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var89 = ((val* (*)(val*, val*))(var88->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var88, var_t) /* classid on <var88:AbstractCompiler(GlobalCompiler)>*/;
if (varonce90) {
var91 = varonce90;
} else {
var92 = ":";
var93 = 1;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 3;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var89;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var91;
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var98) /* add on <self:GlobalCompilerVisitor>*/;
}
var99 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(self, var_recv, var_t) /* autoadapt on <self:GlobalCompilerVisitor>*/;
var_recv2 = var99;
var100 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var101 = ((val* (*)(val*))(var100->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var100) /* static_mtype on <var100:MPropDef(MAttributeDef)>*/;
if (var101 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 585);
show_backtrace(1);
}
var_ta = var101;
var102 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(self, var_ta, var_recv2) /* resolve_for on <self:GlobalCompilerVisitor>*/;
var_ta = var102;
if (varonce103) {
var104 = varonce103;
} else {
var105 = "((struct ";
var106 = 9;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var108 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MClassType>*/;
if (varonce109) {
var110 = varonce109;
} else {
var111 = "*)";
var112 = 2;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = ")->";
var117 = 3;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var120 = ((val* (*)(val*))(var119->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var119) /* c_name on <var119:MPropDef(MAttributeDef)>*/;
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 6;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var108;
((struct instance_array__NativeArray*)var123)->values[2] = (val*) var110;
((struct instance_array__NativeArray*)var123)->values[3] = (val*) var_recv;
((struct instance_array__NativeArray*)var123)->values[4] = (val*) var115;
((struct instance_array__NativeArray*)var123)->values[5] = (val*) var120;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
var125 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var124, var_ta) /* new_expr on <self:GlobalCompilerVisitor>*/;
var_attr = var125;
/* <var_ta:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_ta->type->table_size) {
var126 = 0;
} else {
var126 = var_ta->type->type_table[cltype] == idtype;
}
var127 = !var126;
if (var127){
var128 = ((val* (*)(val*))(var_ta->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ta) /* ctype on <var_ta:MType>*/;
if (varonce129) {
var130 = varonce129;
} else {
var131 = "val*";
var132 = 4;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
var134 = ((short int (*)(val*, val*))(var128->class->vft[COLOR_kernel__Object___61d_61d]))(var128, var130) /* == on <var128:String>*/;
if (var134){
if (varonce135) {
var136 = varonce135;
} else {
var137 = " = (";
var138 = 4;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = " != NULL);";
var143 = 10;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
var145 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var145 = array_instance Array[Object] */
var146 = 4;
var147 = NEW_array__NativeArray(var146, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var147)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var147)->values[1] = (val*) var136;
((struct instance_array__NativeArray*)var147)->values[2] = (val*) var_attr;
((struct instance_array__NativeArray*)var147)->values[3] = (val*) var141;
((void (*)(val*, val*, long))(var145->class->vft[COLOR_array__Array__with_native]))(var145, var147, var146) /* with_native on <var145:Array[Object]>*/;
}
var148 = ((val* (*)(val*))(var145->class->vft[COLOR_string__Object__to_s]))(var145) /* to_s on <var145:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var148) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce149) {
var150 = varonce149;
} else {
var151 = " = 1; /*NOTYET isset on primitive attributes*/";
var152 = 46;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
var154 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var154 = array_instance Array[Object] */
var155 = 2;
var156 = NEW_array__NativeArray(var155, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var156)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var156)->values[1] = (val*) var150;
((void (*)(val*, val*, long))(var154->class->vft[COLOR_array__Array__with_native]))(var154, var156, var155) /* with_native on <var154:Array[Object]>*/;
}
var157 = ((val* (*)(val*))(var154->class->vft[COLOR_string__Object__to_s]))(var154) /* to_s on <var154:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var157) /* add on <self:GlobalCompilerVisitor>*/;
}
} else {
}
if (varonce158) {
var159 = varonce158;
} else {
var160 = "break;";
var161 = 6;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var159) /* add on <self:GlobalCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__next]))(var59) /* next on <var59:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var163 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var164 = ((short int (*)(val*))(var163->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var163) /* hardening on <var163:AbstractCompiler(GlobalCompiler)>*/;
if (var164){
if (varonce165) {
var166 = varonce165;
} else {
var167 = "default: /* Bug */";
var168 = 18;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var166) /* add on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var_recv) /* bugtype on <self:GlobalCompilerVisitor>*/;
} else {
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = "}";
var173 = 1;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var171) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#isset_attribute for (self: Object, MAttribute, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__isset_attribute(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#read_attribute for (self: GlobalCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var2 /* : MPropDef */;
val* var3 /* : nullable MType */;
val* var_ret /* var ret: MType */;
val* var4 /* : MType */;
val* var5 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : String */;
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
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
val* var60 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var61 /* : Iterator[nullable Object] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_t /* var t: MClassType */;
short int var64 /* : Bool */;
val* var65 /* : AbstractCompiler */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var_ /* var : Bool */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : AbstractCompiler */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
val* var90 /* : AbstractCompiler */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
val* var101 /* : RuntimeVariable */;
val* var_recv2 /* var recv2: RuntimeVariable */;
val* var102 /* : MPropDef */;
val* var103 /* : nullable MType */;
val* var_ta /* var ta: MType */;
val* var104 /* : MType */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : MPropDef */;
val* var122 /* : String */;
val* var123 /* : Array[Object] */;
long var124 /* : Int */;
val* var125 /* : NativeArray[Object] */;
val* var126 /* : String */;
val* var127 /* : RuntimeVariable */;
val* var_res2 /* var res2: RuntimeVariable */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
int cltype;
int idtype;
short int var130 /* : Bool */;
short int var_131 /* var : Bool */;
val* var132 /* : AbstractCompiler */;
val* var133 /* : ModelBuilder */;
val* var134 /* : ToolContext */;
val* var135 /* : OptionBool */;
val* var136 /* : nullable Object */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
val* var139 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : String */;
short int var145 /* : Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : String */;
val* var156 /* : Array[Object] */;
long var157 /* : Int */;
val* var158 /* : NativeArray[Object] */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : String */;
val* var165 /* : String */;
val* var166 /* : Array[Object] */;
long var167 /* : Int */;
val* var168 /* : NativeArray[Object] */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
val* var185 /* : AbstractCompiler */;
short int var186 /* : Bool */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : String */;
var_a = p0;
var_recv = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull]))(self, var_recv) /* check_recv_notnull on <self:GlobalCompilerVisitor>*/;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__collect_types]))(self, var_recv) /* collect_types on <self:GlobalCompilerVisitor>*/;
var_types = var1;
var2 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var2) /* static_mtype on <var2:MPropDef(MAttributeDef)>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 612);
show_backtrace(1);
}
var_ret = var3;
var4 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(self, var_ret, var_recv) /* resolve_for on <self:GlobalCompilerVisitor>*/;
var_ret = var4;
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_ret) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var5;
var6 = ((short int (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_types) /* is_empty on <var_types:Array[MClassType]>*/;
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "/*BUG: no live types for ";
var9 = 25;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = " . ";
var15 = 3;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "*/";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 5;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var11;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var13;
((struct instance_array__NativeArray*)var24)->values[3] = (val*) var_a;
((struct instance_array__NativeArray*)var24)->values[4] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var25) /* add on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var_recv) /* bugtype on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "/* read ";
var29 = 8;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = " on ";
var34 = 4;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = " */";
var40 = 3;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 5;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var_a;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var32;
((struct instance_array__NativeArray*)var44)->values[3] = (val*) var36;
((struct instance_array__NativeArray*)var44)->values[4] = (val*) var38;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var45) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "switch(";
var49 = 7;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "->classid) {";
var54 = 12;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var59) /* add on <self:GlobalCompilerVisitor>*/;
var60 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var_types) /* last on <var_types:Array[MClassType]>*/;
var_last = var60;
var61 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_types) /* iterator on <var_types:Array[MClassType]>*/;
for(;;) {
var62 = ((short int (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var61) /* is_ok on <var61:Iterator[nullable Object]>*/;
if(!var62) break;
var63 = ((val* (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__item]))(var61) /* item on <var61:Iterator[nullable Object]>*/;
var_t = var63;
var65 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var66 = ((short int (*)(val*))(var65->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var65) /* hardening on <var65:AbstractCompiler(GlobalCompiler)>*/;
var67 = !var66;
var_ = var67;
if (var67){
var68 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_last) /* == on <var_t:MClassType>*/;
var64 = var68;
} else {
var64 = var_;
}
if (var64){
if (varonce69) {
var70 = varonce69;
} else {
var71 = "default: /*";
var72 = 11;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var75 = ((val* (*)(val*, val*))(var74->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var74, var_t) /* classid on <var74:AbstractCompiler(GlobalCompiler)>*/;
if (varonce76) {
var77 = varonce76;
} else {
var78 = "*/";
var79 = 2;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 3;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var70;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var75;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var77;
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var84) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce85) {
var86 = varonce85;
} else {
var87 = "case ";
var88 = 5;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var91 = ((val* (*)(val*, val*))(var90->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var90, var_t) /* classid on <var90:AbstractCompiler(GlobalCompiler)>*/;
if (varonce92) {
var93 = varonce92;
} else {
var94 = ":";
var95 = 1;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 3;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var86;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var91;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var100) /* add on <self:GlobalCompilerVisitor>*/;
}
var101 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(self, var_recv, var_t) /* autoadapt on <self:GlobalCompilerVisitor>*/;
var_recv2 = var101;
var102 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var103 = ((val* (*)(val*))(var102->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var102) /* static_mtype on <var102:MPropDef(MAttributeDef)>*/;
if (var103 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 631);
show_backtrace(1);
}
var_ta = var103;
var104 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(self, var_ta, var_recv2) /* resolve_for on <self:GlobalCompilerVisitor>*/;
var_ta = var104;
if (varonce105) {
var106 = varonce105;
} else {
var107 = "((struct ";
var108 = 9;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MClassType>*/;
if (varonce111) {
var112 = varonce111;
} else {
var113 = "*)";
var114 = 2;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = ")->";
var119 = 3;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var122 = ((val* (*)(val*))(var121->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var121) /* c_name on <var121:MPropDef(MAttributeDef)>*/;
var123 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var123 = array_instance Array[Object] */
var124 = 6;
var125 = NEW_array__NativeArray(var124, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var125)->values[0] = (val*) var106;
((struct instance_array__NativeArray*)var125)->values[1] = (val*) var110;
((struct instance_array__NativeArray*)var125)->values[2] = (val*) var112;
((struct instance_array__NativeArray*)var125)->values[3] = (val*) var_recv;
((struct instance_array__NativeArray*)var125)->values[4] = (val*) var117;
((struct instance_array__NativeArray*)var125)->values[5] = (val*) var122;
((void (*)(val*, val*, long))(var123->class->vft[COLOR_array__Array__with_native]))(var123, var125, var124) /* with_native on <var123:Array[Object]>*/;
}
var126 = ((val* (*)(val*))(var123->class->vft[COLOR_string__Object__to_s]))(var123) /* to_s on <var123:Array[Object]>*/;
var127 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var126, var_ta) /* new_expr on <self:GlobalCompilerVisitor>*/;
var_res2 = var127;
/* <var_ta:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_ta->type->table_size) {
var129 = 0;
} else {
var129 = var_ta->type->type_table[cltype] == idtype;
}
var130 = !var129;
var_131 = var130;
if (var130){
var132 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var133 = ((val* (*)(val*))(var132->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var132) /* modelbuilder on <var132:AbstractCompiler(GlobalCompiler)>*/;
var134 = ((val* (*)(val*))(var133->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var133) /* toolcontext on <var133:ModelBuilder>*/;
var135 = ((val* (*)(val*))(var134->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_other]))(var134) /* opt_no_check_other on <var134:ToolContext>*/;
var136 = ((val* (*)(val*))(var135->class->vft[COLOR_opts__Option__value]))(var135) /* value on <var135:OptionBool>*/;
var137 = ((struct instance_kernel__Bool*)var136)->value; /* autounbox from nullable Object to Bool */;
var138 = !var137;
var128 = var138;
} else {
var128 = var_131;
}
if (var128){
var139 = ((val* (*)(val*))(var_ta->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ta) /* ctype on <var_ta:MType>*/;
if (varonce140) {
var141 = varonce140;
} else {
var142 = "val*";
var143 = 4;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
var145 = ((short int (*)(val*, val*))(var139->class->vft[COLOR_kernel__Object___61d_61d]))(var139, var141) /* == on <var139:String>*/;
if (var145){
if (varonce146) {
var147 = varonce146;
} else {
var148 = "if (";
var149 = 4;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = " == NULL) {";
var154 = 11;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 3;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var147;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var_res2;
((struct instance_array__NativeArray*)var158)->values[2] = (val*) var152;
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var159) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce160) {
var161 = varonce160;
} else {
var162 = "Uninitialized attribute ";
var163 = 24;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
var165 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__name]))(var_a) /* name on <var_a:MAttribute>*/;
var166 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var166 = array_instance Array[Object] */
var167 = 2;
var168 = NEW_array__NativeArray(var167, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var168)->values[0] = (val*) var161;
((struct instance_array__NativeArray*)var168)->values[1] = (val*) var165;
((void (*)(val*, val*, long))(var166->class->vft[COLOR_array__Array__with_native]))(var166, var168, var167) /* with_native on <var166:Array[Object]>*/;
}
var169 = ((val* (*)(val*))(var166->class->vft[COLOR_string__Object__to_s]))(var166) /* to_s on <var166:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var169) /* add_abort on <self:GlobalCompilerVisitor>*/;
if (varonce170) {
var171 = varonce170;
} else {
var172 = "}";
var173 = 1;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var171) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce175) {
var176 = varonce175;
} else {
var177 = "/*NOTYET isset on primitive attributes*/";
var178 = 40;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var176) /* add on <self:GlobalCompilerVisitor>*/;
}
} else {
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(self, var_res, var_res2) /* assign on <self:GlobalCompilerVisitor>*/;
if (varonce180) {
var181 = varonce180;
} else {
var182 = "break;";
var183 = 6;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var181) /* add on <self:GlobalCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__next]))(var61) /* next on <var61:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var185 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var186 = ((short int (*)(val*))(var185->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var185) /* hardening on <var185:AbstractCompiler(GlobalCompiler)>*/;
if (var186){
if (varonce187) {
var188 = varonce187;
} else {
var189 = "default: /* Bug */";
var190 = 18;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var188) /* add on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var_recv) /* bugtype on <self:GlobalCompilerVisitor>*/;
} else {
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = "}";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var193) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#read_attribute for (self: Object, MAttribute, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__read_attribute(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#write_attribute for (self: GlobalCompilerVisitor, MAttribute, RuntimeVariable, RuntimeVariable) */
void global_compiler__GlobalCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
val* var55 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var56 /* : Iterator[nullable Object] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_t /* var t: MClassType */;
short int var59 /* : Bool */;
val* var60 /* : AbstractCompiler */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var_ /* var : Bool */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : AbstractCompiler */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : AbstractCompiler */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : RuntimeVariable */;
val* var_recv2 /* var recv2: RuntimeVariable */;
val* var97 /* : MPropDef */;
val* var98 /* : nullable MType */;
val* var_ta /* var ta: MType */;
val* var99 /* : MType */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : MPropDef */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var123 /* : RuntimeVariable */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : String */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
val* var138 /* : AbstractCompiler */;
short int var139 /* : Bool */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
var_a = p0;
var_recv = p1;
var_value = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull]))(self, var_recv) /* check_recv_notnull on <self:GlobalCompilerVisitor>*/;
var = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__collect_types]))(self, var_recv) /* collect_types on <self:GlobalCompilerVisitor>*/;
var_types = var;
var1 = ((short int (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_types) /* is_empty on <var_types:Array[MClassType]>*/;
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = "/*BUG: no live types for ";
var4 = 25;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = " . ";
var10 = 3;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = "*/";
var15 = 2;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 5;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var8;
((struct instance_array__NativeArray*)var19)->values[3] = (val*) var_a;
((struct instance_array__NativeArray*)var19)->values[4] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var20) /* add on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var_recv) /* bugtype on <self:GlobalCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "/* write ";
var24 = 9;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = " on ";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((val* (*)(val*))(var_recv->class->vft[COLOR_string__Object__inspect]))(var_recv) /* inspect on <var_recv:RuntimeVariable>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = " */";
var35 = 3;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 5;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_a;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var27;
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var31;
((struct instance_array__NativeArray*)var39)->values[4] = (val*) var33;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var40) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "switch(";
var44 = 7;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "->classid) {";
var49 = 12;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 3;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var53)->values[2] = (val*) var47;
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var54) /* add on <self:GlobalCompilerVisitor>*/;
var55 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var_types) /* last on <var_types:Array[MClassType]>*/;
var_last = var55;
var56 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_types) /* iterator on <var_types:Array[MClassType]>*/;
for(;;) {
var57 = ((short int (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var56) /* is_ok on <var56:Iterator[nullable Object]>*/;
if(!var57) break;
var58 = ((val* (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__item]))(var56) /* item on <var56:Iterator[nullable Object]>*/;
var_t = var58;
var60 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var61 = ((short int (*)(val*))(var60->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var60) /* hardening on <var60:AbstractCompiler(GlobalCompiler)>*/;
var62 = !var61;
var_ = var62;
if (var62){
var63 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_last) /* == on <var_t:MClassType>*/;
var59 = var63;
} else {
var59 = var_;
}
if (var59){
if (varonce64) {
var65 = varonce64;
} else {
var66 = "default: /*";
var67 = 11;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var70 = ((val* (*)(val*, val*))(var69->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var69, var_t) /* classid on <var69:AbstractCompiler(GlobalCompiler)>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "*/";
var74 = 2;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var65;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var70;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var72;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var79) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce80) {
var81 = varonce80;
} else {
var82 = "case ";
var83 = 5;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var86 = ((val* (*)(val*, val*))(var85->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var85, var_t) /* classid on <var85:AbstractCompiler(GlobalCompiler)>*/;
if (varonce87) {
var88 = varonce87;
} else {
var89 = ":";
var90 = 1;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 3;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var86;
((struct instance_array__NativeArray*)var94)->values[2] = (val*) var88;
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
var95 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var95) /* add on <self:GlobalCompilerVisitor>*/;
}
var96 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(self, var_recv, var_t) /* autoadapt on <self:GlobalCompilerVisitor>*/;
var_recv2 = var96;
var97 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var98 = ((val* (*)(val*))(var97->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var97) /* static_mtype on <var97:MPropDef(MAttributeDef)>*/;
if (var98 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 676);
show_backtrace(1);
}
var_ta = var98;
var99 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(self, var_ta, var_recv2) /* resolve_for on <self:GlobalCompilerVisitor>*/;
var_ta = var99;
if (varonce100) {
var101 = varonce100;
} else {
var102 = "((struct ";
var103 = 9;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MClassType>*/;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "*)";
var109 = 2;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = ")->";
var114 = 3;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = ((val* (*)(val*))(var_a->class->vft[COLOR_model__MProperty__intro]))(var_a) /* intro on <var_a:MAttribute>*/;
var117 = ((val* (*)(val*))(var116->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var116) /* c_name on <var116:MPropDef(MAttributeDef)>*/;
if (varonce118) {
var119 = varonce118;
} else {
var120 = " = ";
var121 = 3;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_value, var_ta) /* autobox on <self:GlobalCompilerVisitor>*/;
if (varonce124) {
var125 = varonce124;
} else {
var126 = ";";
var127 = 1;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 9;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var101;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var105;
((struct instance_array__NativeArray*)var131)->values[2] = (val*) var107;
((struct instance_array__NativeArray*)var131)->values[3] = (val*) var_recv;
((struct instance_array__NativeArray*)var131)->values[4] = (val*) var112;
((struct instance_array__NativeArray*)var131)->values[5] = (val*) var117;
((struct instance_array__NativeArray*)var131)->values[6] = (val*) var119;
((struct instance_array__NativeArray*)var131)->values[7] = (val*) var123;
((struct instance_array__NativeArray*)var131)->values[8] = (val*) var125;
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
}
var132 = ((val* (*)(val*))(var129->class->vft[COLOR_string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var132) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce133) {
var134 = varonce133;
} else {
var135 = "break;";
var136 = 6;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var134) /* add on <self:GlobalCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var56->class->vft[COLOR_abstract_collection__Iterator__next]))(var56) /* next on <var56:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var138 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var139 = ((short int (*)(val*))(var138->class->vft[COLOR_abstract_compiler__AbstractCompiler__hardening]))(var138) /* hardening on <var138:AbstractCompiler(GlobalCompiler)>*/;
if (var139){
if (varonce140) {
var141 = varonce140;
} else {
var142 = "default: /* Bug*/";
var143 = 17;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var141) /* add on <self:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__bugtype]))(self, var_recv) /* bugtype on <self:GlobalCompilerVisitor>*/;
} else {
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "}";
var148 = 1;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var146) /* add on <self:GlobalCompilerVisitor>*/;
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#write_attribute for (self: Object, MAttribute, RuntimeVariable, RuntimeVariable) */
void VIRTUAL_global_compiler__GlobalCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
global_compiler__GlobalCompilerVisitor__write_attribute(self, p0, p1, p2);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#init_instance for (self: GlobalCompilerVisitor, MClassType): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AbstractCompiler */;
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : HashSet[MClassType] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var37 /* : Bool */;
var_mtype = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:GlobalCompilerVisitor>*/;
/* <var1:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 690);
show_backtrace(1);
}
var_mtype = var1;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var3) /* runtime_type_analysis on <var3:AbstractCompiler(GlobalCompiler)>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var4) /* live_types on <var4:RapidTypeAnalysis>*/;
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__Collection__has]))(var5, var_mtype) /* has on <var5:HashSet[MClassType]>*/;
var7 = !var6;
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "problem: ";
var10 = 9;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = " was detected dead";
var15 = 18;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__debug]))(self, var20) /* debug on <self:GlobalCompilerVisitor>*/;
} else {
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "NEW_";
var24 = 4;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "()";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var26;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var35, var_mtype) /* new_expr on <self:GlobalCompilerVisitor>*/;
var_res = var36;
var37 = 1;
((void (*)(val*, short int))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_res, var37) /* is_exact= on <var_res:RuntimeVariable>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#init_instance for (self: Object, MClassType): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__init_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#type_test for (self: GlobalCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var1 /* : MType */;
val* var_mclasstype /* var mclasstype: MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AbstractCompiler */;
val* var8 /* : RapidTypeAnalysis */;
val* var9 /* : HashSet[MClassType] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
val* var25 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var26 /* : MClassType */;
val* var27 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
val* var48 /* : MType */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
short int var55 /* : Bool */;
val* var56 /* : MType */;
val* var57 /* : AbstractCompiler */;
val* var58 /* : MModule */;
val* var59 /* : null */;
short int var60 /* : Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : Array[Object] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[Object] */;
val* var78 /* : String */;
short int var79 /* : Bool */;
val* var80 /* : MType */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
short int var_ /* var : Bool */;
val* var84 /* : MType */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : String */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : String */;
val* var148 /* : Array[Object] */;
long var149 /* : Int */;
val* var150 /* : NativeArray[Object] */;
val* var151 /* : String */;
val* var152 /* : Iterator[nullable Object] */;
short int var153 /* : Bool */;
val* var154 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var155 /* : AbstractCompiler */;
val* var156 /* : MModule */;
val* var157 /* : null */;
short int var158 /* : Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : AbstractCompiler */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : String */;
val* var176 /* : Array[Object] */;
long var177 /* : Int */;
val* var178 /* : NativeArray[Object] */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
val* var185 /* : Array[Object] */;
long var186 /* : Int */;
val* var187 /* : NativeArray[Object] */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : String */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : String */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : String */;
val* var204 /* : Array[Object] */;
long var205 /* : Int */;
val* var206 /* : NativeArray[Object] */;
val* var207 /* : String */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : String */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:GlobalCompilerVisitor>*/;
var_mtype = var1;
var_mclasstype = var_mtype;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
if (var2){
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var_mclasstype = var3;
} else {
}
/* <var_mclasstype:MType> isa MClassType */
cltype5 = type_model__MClassType.color;
idtype6 = type_model__MClassType.id;
if(cltype5 >= var_mclasstype->type->table_size) {
var4 = 0;
} else {
var4 = var_mclasstype->type->type_table[cltype5] == idtype6;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 704);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var7) /* runtime_type_analysis on <var7:AbstractCompiler(GlobalCompiler)>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_cast_types]))(var8) /* live_cast_types on <var8:RapidTypeAnalysis>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__Collection__has]))(var9, var_mclasstype) /* has on <var9:HashSet[MClassType]>*/;
var11 = !var10;
if (var11){
if (varonce) {
var12 = varonce;
} else {
var13 = "problem: ";
var14 = 9;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = " was detected cast-dead";
var19 = 23;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__debug]))(self, var24) /* debug on <self:GlobalCompilerVisitor>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 707);
show_backtrace(1);
} else {
}
var25 = ((val* (*)(val*, val*))(self->class->vft[COLOR_global_compiler__GlobalCompilerVisitor__collect_types]))(self, var_value) /* collect_types on <self:GlobalCompilerVisitor>*/;
var_types = var25;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:GlobalCompilerVisitor>*/;
var27 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var26) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var27;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "/* isa ";
var31 = 7;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " on ";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__inspect]))(var_value) /* inspect on <var_value:RuntimeVariable>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = " */";
var42 = 3;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 5;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var34;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var38;
((struct instance_array__NativeArray*)var46)->values[4] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var47) /* add on <self:GlobalCompilerVisitor>*/;
var48 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_compiler__MType__ctype]))(var48) /* ctype on <var48:MType>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "val*";
var53 = 4;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = ((short int (*)(val*, val*))(var49->class->vft[COLOR_kernel__Object___33d_61d]))(var49, var51) /* != on <var49:String>*/;
if (var55){
var56 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var57 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var58 = ((val* (*)(val*))(var57->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var57) /* mainmodule on <var57:AbstractCompiler(GlobalCompiler)>*/;
var59 = NULL;
var60 = ((short int (*)(val*, val*, val*, val*))(var56->class->vft[COLOR_model__MType__is_subtype]))(var56, var58, var59, var_mtype) /* is_subtype on <var56:MType>*/;
if (var60){
if (varonce61) {
var62 = varonce61;
} else {
var63 = " = 1;";
var64 = 5;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 2;
var68 = NEW_array__NativeArray(var67, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var68)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var68)->values[1] = (val*) var62;
((void (*)(val*, val*, long))(var66->class->vft[COLOR_array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
var69 = ((val* (*)(val*))(var66->class->vft[COLOR_string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var69) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce70) {
var71 = varonce70;
} else {
var72 = " = 0;";
var73 = 5;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 2;
var77 = NEW_array__NativeArray(var76, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var77)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var77)->values[1] = (val*) var71;
((void (*)(val*, val*, long))(var75->class->vft[COLOR_array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
var78 = ((val* (*)(val*))(var75->class->vft[COLOR_string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var78) /* add on <self:GlobalCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
} else {
}
var80 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value) /* mcasttype on <var_value:RuntimeVariable>*/;
/* <var80:MType> isa MNullableType */
cltype82 = type_model__MNullableType.color;
idtype83 = type_model__MNullableType.id;
if(cltype82 >= var80->type->table_size) {
var81 = 0;
} else {
var81 = var80->type->type_table[cltype82] == idtype83;
}
var_ = var81;
if (var81){
var79 = var_;
} else {
var84 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value) /* mcasttype on <var_value:RuntimeVariable>*/;
/* <var84:MType> isa MNullType */
cltype86 = type_model__MNullType.color;
idtype87 = type_model__MNullType.id;
if(cltype86 >= var84->type->table_size) {
var85 = 0;
} else {
var85 = var84->type->type_table[cltype86] == idtype87;
}
var79 = var85;
}
if (var79){
if (varonce88) {
var89 = varonce88;
} else {
var90 = "if (";
var91 = 4;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = " == NULL) {";
var96 = 11;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 3;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var89;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var_value;
((struct instance_array__NativeArray*)var100)->values[2] = (val*) var94;
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var101) /* add on <self:GlobalCompilerVisitor>*/;
/* <var_mtype:MType> isa MNullableType */
cltype103 = type_model__MNullableType.color;
idtype104 = type_model__MNullableType.id;
if(cltype103 >= var_mtype->type->table_size) {
var102 = 0;
} else {
var102 = var_mtype->type->type_table[cltype103] == idtype104;
}
if (var102){
if (varonce105) {
var106 = varonce105;
} else {
var107 = " = 1; /* isa ";
var108 = 13;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = " */";
var113 = 3;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 4;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var117)->values[1] = (val*) var106;
((struct instance_array__NativeArray*)var117)->values[2] = (val*) var_mtype;
((struct instance_array__NativeArray*)var117)->values[3] = (val*) var111;
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
}
var118 = ((val* (*)(val*))(var115->class->vft[COLOR_string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var118) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce119) {
var120 = varonce119;
} else {
var121 = " = 0; /* not isa ";
var122 = 17;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = " */";
var127 = 3;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 4;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var120;
((struct instance_array__NativeArray*)var131)->values[2] = (val*) var_mtype;
((struct instance_array__NativeArray*)var131)->values[3] = (val*) var125;
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
}
var132 = ((val* (*)(val*))(var129->class->vft[COLOR_string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var132) /* add on <self:GlobalCompilerVisitor>*/;
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "} else ";
var136 = 7;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var134) /* add on <self:GlobalCompilerVisitor>*/;
} else {
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "switch(";
var141 = 7;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = "->classid) {";
var146 = 12;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 3;
var150 = NEW_array__NativeArray(var149, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var150)->values[0] = (val*) var139;
((struct instance_array__NativeArray*)var150)->values[1] = (val*) var_value;
((struct instance_array__NativeArray*)var150)->values[2] = (val*) var144;
((void (*)(val*, val*, long))(var148->class->vft[COLOR_array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
}
var151 = ((val* (*)(val*))(var148->class->vft[COLOR_string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var151) /* add on <self:GlobalCompilerVisitor>*/;
var152 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_types) /* iterator on <var_types:Array[MClassType]>*/;
for(;;) {
var153 = ((short int (*)(val*))(var152->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var152) /* is_ok on <var152:Iterator[nullable Object]>*/;
if(!var153) break;
var154 = ((val* (*)(val*))(var152->class->vft[COLOR_abstract_collection__Iterator__item]))(var152) /* item on <var152:Iterator[nullable Object]>*/;
var_t = var154;
var155 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var156 = ((val* (*)(val*))(var155->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var155) /* mainmodule on <var155:AbstractCompiler(GlobalCompiler)>*/;
var157 = NULL;
var158 = ((short int (*)(val*, val*, val*, val*))(var_t->class->vft[COLOR_model__MType__is_subtype]))(var_t, var156, var157, var_mtype) /* is_subtype on <var_t:MClassType>*/;
if (var158){
if (varonce159) {
var160 = varonce159;
} else {
var161 = "case ";
var162 = 5;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var165 = ((val* (*)(val*, val*))(var164->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var164, var_t) /* classid on <var164:AbstractCompiler(GlobalCompiler)>*/;
if (varonce166) {
var167 = varonce166;
} else {
var168 = ": /* ";
var169 = 5;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = " */";
var174 = 3;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var176 = array_instance Array[Object] */
var177 = 5;
var178 = NEW_array__NativeArray(var177, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var178)->values[0] = (val*) var160;
((struct instance_array__NativeArray*)var178)->values[1] = (val*) var165;
((struct instance_array__NativeArray*)var178)->values[2] = (val*) var167;
((struct instance_array__NativeArray*)var178)->values[3] = (val*) var_t;
((struct instance_array__NativeArray*)var178)->values[4] = (val*) var172;
((void (*)(val*, val*, long))(var176->class->vft[COLOR_array__Array__with_native]))(var176, var178, var177) /* with_native on <var176:Array[Object]>*/;
}
var179 = ((val* (*)(val*))(var176->class->vft[COLOR_string__Object__to_s]))(var176) /* to_s on <var176:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var179) /* add on <self:GlobalCompilerVisitor>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var152->class->vft[COLOR_abstract_collection__Iterator__next]))(var152) /* next on <var152:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce180) {
var181 = varonce180;
} else {
var182 = " = 1;";
var183 = 5;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var185 = array_instance Array[Object] */
var186 = 2;
var187 = NEW_array__NativeArray(var186, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var187)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var187)->values[1] = (val*) var181;
((void (*)(val*, val*, long))(var185->class->vft[COLOR_array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[Object]>*/;
}
var188 = ((val* (*)(val*))(var185->class->vft[COLOR_string__Object__to_s]))(var185) /* to_s on <var185:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var188) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce189) {
var190 = varonce189;
} else {
var191 = "break;";
var192 = 6;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var190) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce194) {
var195 = varonce194;
} else {
var196 = "default:";
var197 = 8;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var195) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce199) {
var200 = varonce199;
} else {
var201 = " = 0;";
var202 = 5;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
var204 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var204 = array_instance Array[Object] */
var205 = 2;
var206 = NEW_array__NativeArray(var205, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var206)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var206)->values[1] = (val*) var200;
((void (*)(val*, val*, long))(var204->class->vft[COLOR_array__Array__with_native]))(var204, var206, var205) /* with_native on <var204:Array[Object]>*/;
}
var207 = ((val* (*)(val*))(var204->class->vft[COLOR_string__Object__to_s]))(var204) /* to_s on <var204:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var207) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce208) {
var209 = varonce208;
} else {
var210 = "}";
var211 = 1;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var209) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#type_test for (self: Object, RuntimeVariable, MType, String): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__type_test(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#is_same_type_test for (self: GlobalCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : MType */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : AbstractCompiler */;
val* var43 /* : MType */;
short int var44 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
val* var60 /* : MType */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
short int var67 /* : Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : AbstractCompiler */;
val* var79 /* : MType */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
val* var94 /* : MType */;
val* var95 /* : MType */;
short int var96 /* : Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : Array[Object] */;
long var103 /* : Int */;
val* var104 /* : NativeArray[Object] */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : String */;
var_value1 = p0;
var_value2 = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:GlobalCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var1) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var2;
var3 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__MType__ctype]))(var3) /* ctype on <var3:MType>*/;
if (varonce) {
var5 = varonce;
} else {
var6 = "val*";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:String>*/;
if (var9){
var10 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MType__ctype]))(var10) /* ctype on <var10:MType>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "val*";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var13) /* == on <var11:String>*/;
if (var17){
if (varonce18) {
var19 = varonce18;
} else {
var20 = " = ";
var21 = 3;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "->classid == ";
var26 = 13;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "->classid;";
var31 = 10;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 6;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var19;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var35)->values[3] = (val*) var24;
((struct instance_array__NativeArray*)var35)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var35)->values[5] = (val*) var29;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var36) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce37) {
var38 = varonce37;
} else {
var39 = " = ";
var40 = 3;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var43 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
/* <var43:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var43->type->table_size) {
var44 = 0;
} else {
var44 = var43->type->type_table[cltype] == idtype;
}
if (!var44) {
var_class_name = var43 == NULL ? "null" : var43->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 753);
show_backtrace(1);
}
var45 = ((val* (*)(val*, val*))(var42->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var42, var43) /* classid on <var42:AbstractCompiler(GlobalCompiler)>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = " == ";
var49 = 4;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "->classid;";
var54 = 10;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 6;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var38;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var45;
((struct instance_array__NativeArray*)var58)->values[3] = (val*) var47;
((struct instance_array__NativeArray*)var58)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var58)->values[5] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var59) /* add on <self:GlobalCompilerVisitor>*/;
}
} else {
var60 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
var61 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_compiler__MType__ctype]))(var60) /* ctype on <var60:MType>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = "val*";
var65 = 4;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = ((short int (*)(val*, val*))(var61->class->vft[COLOR_kernel__Object___61d_61d]))(var61, var63) /* == on <var61:String>*/;
if (var67){
if (varonce68) {
var69 = varonce68;
} else {
var70 = " = ";
var71 = 3;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "->classid == ";
var76 = 13;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var79 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
/* <var79:MType> isa MClassType */
cltype81 = type_model__MClassType.color;
idtype82 = type_model__MClassType.id;
if(cltype81 >= var79->type->table_size) {
var80 = 0;
} else {
var80 = var79->type->type_table[cltype81] == idtype82;
}
if (!var80) {
var_class_name83 = var79 == NULL ? "null" : var79->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name83);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 757);
show_backtrace(1);
}
var84 = ((val* (*)(val*, val*))(var78->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var78, var79) /* classid on <var78:AbstractCompiler(GlobalCompiler)>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = ";";
var88 = 1;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 6;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var69;
((struct instance_array__NativeArray*)var92)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var92)->values[3] = (val*) var74;
((struct instance_array__NativeArray*)var92)->values[4] = (val*) var84;
((struct instance_array__NativeArray*)var92)->values[5] = (val*) var86;
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
var93 = ((val* (*)(val*))(var90->class->vft[COLOR_string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var93) /* add on <self:GlobalCompilerVisitor>*/;
} else {
var94 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value1) /* mcasttype on <var_value1:RuntimeVariable>*/;
var95 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value2) /* mcasttype on <var_value2:RuntimeVariable>*/;
var96 = ((short int (*)(val*, val*))(var94->class->vft[COLOR_kernel__Object___61d_61d]))(var94, var95) /* == on <var94:MType>*/;
if (var96){
if (varonce97) {
var98 = varonce97;
} else {
var99 = " = 1;";
var100 = 5;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var102 = array_instance Array[Object] */
var103 = 2;
var104 = NEW_array__NativeArray(var103, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var104)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var104)->values[1] = (val*) var98;
((void (*)(val*, val*, long))(var102->class->vft[COLOR_array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Object]>*/;
}
var105 = ((val* (*)(val*))(var102->class->vft[COLOR_string__Object__to_s]))(var102) /* to_s on <var102:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var105) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce106) {
var107 = varonce106;
} else {
var108 = " = 0;";
var109 = 5;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 2;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var107;
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
}
var114 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var114) /* add on <self:GlobalCompilerVisitor>*/;
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#is_same_type_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__is_same_type_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#class_name_string for (self: GlobalCompilerVisitor, RuntimeVariable): String */
val* global_compiler__GlobalCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_res /* var res: String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
short int var27 /* : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : AbstractCompiler */;
val* var48 /* : MType */;
short int var49 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "var_class_name";
var3 = 14;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var1) /* get_name on <self:GlobalCompilerVisitor>*/;
var_res = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "const char* ";
var9 = 12;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ";";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var19) /* add_decl on <self:GlobalCompilerVisitor>*/;
var20 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_compiler__MType__ctype]))(var20) /* ctype on <var20:MType>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var23) /* == on <var21:String>*/;
if (var27){
if (varonce28) {
var29 = varonce28;
} else {
var30 = " = class_names[";
var31 = 15;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "->classid];";
var36 = 11;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 4;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var29;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var40)->values[3] = (val*) var34;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var41) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce42) {
var43 = varonce42;
} else {
var44 = " = class_names[";
var45 = 15;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var48 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
/* <var48:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var48->type->table_size) {
var49 = 0;
} else {
var49 = var48->type->type_table[cltype] == idtype;
}
if (!var49) {
var_class_name = var48 == NULL ? "null" : var48->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 774);
show_backtrace(1);
}
var50 = ((val* (*)(val*, val*))(var47->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var47, var48) /* classid on <var47:AbstractCompiler(GlobalCompiler)>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "];";
var54 = 2;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 4;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var43;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var50;
((struct instance_array__NativeArray*)var58)->values[3] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var59) /* add on <self:GlobalCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#class_name_string for (self: Object, RuntimeVariable): String */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = global_compiler__GlobalCompilerVisitor__class_name_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
