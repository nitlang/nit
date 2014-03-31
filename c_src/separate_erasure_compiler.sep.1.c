#include "separate_erasure_compiler.sep.0.h"
/* method separate_erasure_compiler#ToolContext#opt_erasure for (self: ToolContext): OptionBool */
val* separate_erasure_compiler__ToolContext__opt_erasure(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_erasure].val; /* @opt_erasure on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_erasure");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_erasure for (self: Object): OptionBool */
val* VIRTUAL_separate_erasure_compiler__ToolContext__opt_erasure(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = separate_erasure_compiler__ToolContext__opt_erasure(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_erasure= for (self: ToolContext, OptionBool) */
void separate_erasure_compiler__ToolContext__opt_erasure_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_erasure].val = p0; /* @opt_erasure on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_erasure_compiler#ToolContext#opt_erasure= for (self: Object, OptionBool) */
void VIRTUAL_separate_erasure_compiler__ToolContext__opt_erasure_61d(val* self, val* p0) {
separate_erasure_compiler__ToolContext__opt_erasure_61d(self, p0);
RET_LABEL:;
}
/* method separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast for (self: ToolContext): OptionBool */
val* separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_no_check_erasure_cast].val; /* @opt_no_check_erasure_cast on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_check_erasure_cast");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast for (self: Object): OptionBool */
val* VIRTUAL_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast= for (self: ToolContext, OptionBool) */
void separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_no_check_erasure_cast].val = p0; /* @opt_no_check_erasure_cast on <self:ToolContext> */
RET_LABEL:;
}
/* method separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast= for (self: Object, OptionBool) */
void VIRTUAL_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast_61d(val* self, val* p0) {
separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast_61d(self, p0);
RET_LABEL:;
}
/* method separate_erasure_compiler#ToolContext#init for (self: ToolContext) */
void separate_erasure_compiler__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionBool */;
val* var2 /* : OptionBool */;
val* var3 /* : Array[Option] */;
long var4 /* : Int */;
val* var5 /* : NativeArray[Option] */;
((void (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__ToolContext__opt_erasure]))(self) /* opt_erasure on <self:ToolContext>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast]))(self) /* opt_no_check_erasure_cast on <self:ToolContext>*/;
var3 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var3 = array_instance Array[Option] */
var4 = 2;
var5 = NEW_array__NativeArray(var4, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var5)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var5)->values[1] = (val*) var2;
((void (*)(val*, val*, long))(var3->class->vft[COLOR_array__Array__with_native]))(var3, var5, var4) /* with_native on <var3:Array[Option]>*/;
}
((void (*)(val*, val*))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var3) /* add_option on <var:OptionContext>*/;
RET_LABEL:;
}
/* method separate_erasure_compiler#ToolContext#init for (self: Object) */
void VIRTUAL_separate_erasure_compiler__ToolContext__init(val* self) {
separate_erasure_compiler__ToolContext__init(self);
RET_LABEL:;
}
/* method separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler for (self: ModelBuilder, MModule, nullable RapidTypeAnalysis) */
void separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_runtime_type_analysis /* var runtime_type_analysis: nullable RapidTypeAnalysis */;
long var /* : Int */;
long var_time0 /* var time0: Int */;
val* var1 /* : ToolContext */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
long var6 /* : Int */;
val* var7 /* : SeparateErasureCompiler */;
val* var_compiler /* var compiler: SeparateErasureCompiler */;
val* var8 /* : ToolContext */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
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
val* var25 /* : CodeFile */;
val* var26 /* : POSetElement[MModule] */;
val* var27 /* : Collection[Object] */;
val* var28 /* : Iterator[nullable Object] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var31 /* : Array[MClass] */;
val* var32 /* : Iterator[nullable Object] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var36 /* : nullable Layout[MVirtualTypeProp] */;
val* var37 /* : Map[Object, Int] */;
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
val* var48 /* : CodeFile */;
val* var49 /* : POSetElement[MModule] */;
val* var50 /* : Collection[Object] */;
val* var51 /* : Iterator[nullable Object] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_m54 /* var m: MModule */;
val* var55 /* : ToolContext */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
long var65 /* : Int */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
val* var76 /* : CodeFile */;
long var78 /* : Int */;
long var_time1 /* var time1: Int */;
val* var79 /* : ToolContext */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
long var85 /* : Int */;
long var87 /* : Int */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : Array[Object] */;
long var94 /* : Int */;
val* var95 /* : NativeArray[Object] */;
val* var96 /* : Object */;
val* var97 /* : String */;
long var98 /* : Int */;
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
var7 = NEW_separate_erasure_compiler__SeparateErasureCompiler(&type_separate_erasure_compiler__SeparateErasureCompiler);
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__init]))(var7, var_mainmodule, self, var_runtime_type_analysis) /* init on <var7:SeparateErasureCompiler>*/;
var_compiler = var7;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_header]))(var_compiler) /* compile_header on <var_compiler:SeparateErasureCompiler>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "Property coloring";
var12 = 17;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = 2;
((void (*)(val*, val*, long))(var8->class->vft[COLOR_toolcontext__ToolContext__info]))(var8, var10, var14) /* info on <var8:ToolContext>*/;
var15 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = ".tables";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 2;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var15;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
var25 = ((val* (*)(val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(var_compiler, var24) /* new_file on <var_compiler:SeparateErasureCompiler>*/;
var25;
((void (*)(val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__do_property_coloring]))(var_compiler) /* do_property_coloring on <var_compiler:SeparateErasureCompiler>*/;
var26 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mainmodule) /* in_importation on <var_mainmodule:MModule>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_poset__POSetElement__greaters]))(var26) /* greaters on <var26:POSetElement[MModule]>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Collection__iterator]))(var27) /* iterator on <var27:Collection[Object](Collection[MModule])>*/;
for(;;) {
var29 = ((short int (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var28) /* is_ok on <var28:Iterator[nullable Object]>*/;
if(!var29) break;
var30 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__item]))(var28) /* item on <var28:Iterator[nullable Object]>*/;
var_m = var30;
var31 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MModule__intro_mclasses]))(var_m) /* intro_mclasses on <var_m:MModule>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Collection__iterator]))(var31) /* iterator on <var31:Array[MClass]>*/;
for(;;) {
var33 = ((short int (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var32) /* is_ok on <var32:Iterator[nullable Object]>*/;
if(!var33) break;
var34 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__item]))(var32) /* item on <var32:Iterator[nullable Object]>*/;
var_mclass = var34;
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_class_to_c]))(var_compiler, var_mclass) /* compile_class_to_c on <var_compiler:SeparateErasureCompiler>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__next]))(var32) /* next on <var32:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label35: (void)0;
((void (*)(val*))(var28->class->vft[COLOR_abstract_collection__Iterator__next]))(var28) /* next on <var28:Iterator[nullable Object]>*/;
}
BREAK_label35: (void)0;
var36 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_layout]))(var_compiler) /* vt_layout on <var_compiler:SeparateErasureCompiler>*/;
if (var36 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 52);
show_backtrace(1);
} else {
var37 = ((val* (*)(val*))(var36->class->vft[COLOR_layout_builders__Layout__pos]))(var36) /* pos on <var36:nullable Layout[MVirtualTypeProp]>*/;
}
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_color_consts]))(var_compiler, var37) /* compile_color_consts on <var_compiler:SeparateErasureCompiler>*/;
var38 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__name]))(var_mainmodule) /* name on <var_mainmodule:MModule>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = ".main";
var42 = 5;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 2;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var38;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
var48 = ((val* (*)(val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(var_compiler, var47) /* new_file on <var_compiler:SeparateErasureCompiler>*/;
var48;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__compile_main_function]))(var_compiler) /* compile_main_function on <var_compiler:SeparateErasureCompiler>*/;
var49 = ((val* (*)(val*))(var_mainmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mainmodule) /* in_importation on <var_mainmodule:MModule>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_poset__POSetElement__greaters]))(var49) /* greaters on <var49:POSetElement[MModule]>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_abstract_collection__Collection__iterator]))(var50) /* iterator on <var50:Collection[Object](Collection[MModule])>*/;
for(;;) {
var52 = ((short int (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var51) /* is_ok on <var51:Iterator[nullable Object]>*/;
if(!var52) break;
var53 = ((val* (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__item]))(var51) /* item on <var51:Iterator[nullable Object]>*/;
var_m54 = var53;
var55 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce56) {
var57 = varonce56;
} else {
var58 = "Generate C for module ";
var59 = 22;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 2;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var57;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var_m54;
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
var65 = 2;
((void (*)(val*, val*, long))(var55->class->vft[COLOR_toolcontext__ToolContext__info]))(var55, var64, var65) /* info on <var55:ToolContext>*/;
var66 = ((val* (*)(val*))(var_m54->class->vft[COLOR_mmodule__MModule__name]))(var_m54) /* name on <var_m54:MModule>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = ".sep";
var70 = 4;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 2;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var66;
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var68;
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
var75 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
var76 = ((val* (*)(val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_file]))(var_compiler, var75) /* new_file on <var_compiler:SeparateErasureCompiler>*/;
var76;
((void (*)(val*, val*))(var_compiler->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_module_to_c]))(var_compiler, var_m54) /* compile_module_to_c on <var_compiler:SeparateErasureCompiler>*/;
CONTINUE_label77: (void)0;
((void (*)(val*))(var51->class->vft[COLOR_abstract_collection__Iterator__next]))(var51) /* next on <var51:Iterator[nullable Object]>*/;
}
BREAK_label77: (void)0;
((void (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__display_stats]))(var_compiler) /* display_stats on <var_compiler:SeparateErasureCompiler>*/;
var78 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var78;
var79 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce80) {
var81 = varonce80;
} else {
var82 = "*** END GENERATING C: ";
var83 = 22;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var87 = var_time1 - var_time0;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = " ***";
var91 = 4;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var93 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var93 = array_instance Array[Object] */
var94 = 3;
var95 = NEW_array__NativeArray(var94, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var95)->values[0] = (val*) var81;
var96 = BOX_kernel__Int(var85); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var95)->values[1] = (val*) var96;
((struct instance_array__NativeArray*)var95)->values[2] = (val*) var89;
((void (*)(val*, val*, long))(var93->class->vft[COLOR_array__Array__with_native]))(var93, var95, var94) /* with_native on <var93:Array[Object]>*/;
}
var97 = ((val* (*)(val*))(var93->class->vft[COLOR_string__Object__to_s]))(var93) /* to_s on <var93:Array[Object]>*/;
var98 = 2;
((void (*)(val*, val*, long))(var79->class->vft[COLOR_toolcontext__ToolContext__info]))(var79, var97, var98) /* info on <var79:ToolContext>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__ModelBuilder__write_and_make]))(self, var_compiler) /* write_and_make on <self:ModelBuilder>*/;
RET_LABEL:;
}
/* method separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler for (self: Object, MModule, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler(val* self, val* p0, val* p1) {
separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler(self, p0, p1);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_layout for (self: SeparateErasureCompiler): nullable Layout[MClass] */
val* separate_erasure_compiler__SeparateErasureCompiler__class_layout(val* self) {
val* var /* : nullable Layout[MClass] */;
val* var1 /* : nullable Layout[MClass] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dclass_layout].val; /* @class_layout on <self:SeparateErasureCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_layout for (self: Object): nullable Layout[MClass] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_layout(val* self) {
val* var /* : nullable Layout[MClass] */;
val* var1 /* : nullable Layout[MClass] */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__class_layout(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_layout= for (self: SeparateErasureCompiler, nullable Layout[MClass]) */
void separate_erasure_compiler__SeparateErasureCompiler__class_layout_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dclass_layout].val = p0; /* @class_layout on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_layout= for (self: Object, nullable Layout[MClass]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_layout_61d(val* self, val* p0) {
separate_erasure_compiler__SeparateErasureCompiler__class_layout_61d(self, p0);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_layout for (self: SeparateErasureCompiler): nullable Layout[MVirtualTypeProp] */
val* separate_erasure_compiler__SeparateErasureCompiler__vt_layout(val* self) {
val* var /* : nullable Layout[MVirtualTypeProp] */;
val* var1 /* : nullable Layout[MVirtualTypeProp] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dvt_layout].val; /* @vt_layout on <self:SeparateErasureCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_layout for (self: Object): nullable Layout[MVirtualTypeProp] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_layout(val* self) {
val* var /* : nullable Layout[MVirtualTypeProp] */;
val* var1 /* : nullable Layout[MVirtualTypeProp] */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__vt_layout(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_layout= for (self: SeparateErasureCompiler, nullable Layout[MVirtualTypeProp]) */
void separate_erasure_compiler__SeparateErasureCompiler__vt_layout_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dvt_layout].val = p0; /* @vt_layout on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_layout= for (self: Object, nullable Layout[MVirtualTypeProp]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_layout_61d(val* self, val* p0) {
separate_erasure_compiler__SeparateErasureCompiler__vt_layout_61d(self, p0);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#init for (self: SeparateErasureCompiler, MModule, ModelBuilder, nullable RapidTypeAnalysis) */
void separate_erasure_compiler__SeparateErasureCompiler__init(val* self, val* p0, val* p1, val* p2) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_mmbuilder /* var mmbuilder: ModelBuilder */;
val* var_runtime_type_analysis /* var runtime_type_analysis: nullable RapidTypeAnalysis */;
val* var /* : HashSet[MClass] */;
val* var1 /* : Model */;
val* var2 /* : Array[MClass] */;
val* var_mclasses /* var mclasses: HashSet[MClass] */;
val* var3 /* : MClassColorer */;
val* var_class_colorer /* var class_colorer: MClassColorer */;
val* var4 /* : ModelBuilder */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
val* var9 /* : MClassHasher */;
val* var10 /* : PHModOperator */;
val* var_layout_builder /* var layout_builder: TypingLayoutBuilder[MClass] */;
val* var11 /* : Layout[Object] */;
val* var12 /* : ModelBuilder */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var17 /* : MClassHasher */;
val* var18 /* : PHAndOperator */;
val* var19 /* : Layout[Object] */;
val* var20 /* : ModelBuilder */;
val* var21 /* : ToolContext */;
val* var22 /* : OptionBool */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
val* var25 /* : MClassBMizer */;
val* var26 /* : Layout[Object] */;
val* var27 /* : Layout[Object] */;
val* var28 /* : Map[MClass, Array[nullable MClass]] */;
val* var29 /* : HashMap[MClass, Set[MVirtualTypeProp]] */;
val* var_vts /* var vts: HashMap[MClass, Set[MVirtualTypeProp]] */;
val* var30 /* : Iterator[nullable Object] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var33 /* : HashSet[MVirtualTypeProp] */;
val* var34 /* : MModule */;
val* var35 /* : Set[MProperty] */;
val* var36 /* : Iterator[nullable Object] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var39 /* : Bool */;
int cltype;
int idtype;
val* var40 /* : nullable Object */;
val* var42 /* : MPropertyColorer[MVirtualTypeProp] */;
val* var_vt_coloring /* var vt_coloring: MPropertyColorer[MVirtualTypeProp] */;
val* var43 /* : Layout[PropertyLayoutElement] */;
val* var_vt_layout /* var vt_layout: Layout[MVirtualTypeProp] */;
val* var44 /* : Map[MClass, Array[nullable MPropDef]] */;
var_mainmodule = p0;
var_mmbuilder = p1;
var_runtime_type_analysis = p2;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__init]))(self, p0, p1, p2) /* init on <self:SeparateErasureCompiler>*/;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
var1 = ((val* (*)(val*))(var_mmbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(var_mmbuilder) /* model on <var_mmbuilder:ModelBuilder>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__Model__mclasses]))(var1) /* mclasses on <var1:Model>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_hash_collection__HashSet__from]))(var, var2) /* from on <var:HashSet[MClass]>*/;
var_mclasses = var;
var3 = NEW_layout_builders__MClassColorer(&type_layout_builders__MClassColorer);
((void (*)(val*, val*))(var3->class->vft[COLOR_layout_builders__MClassColorer__init]))(var3, var_mainmodule) /* init on <var3:MClassColorer>*/;
var_class_colorer = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateErasureCompiler>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var4) /* toolcontext on <var4:ModelBuilder>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var5) /* opt_phmod_typing on <var5:ToolContext>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_opts__Option__value]))(var6) /* value on <var6:OptionBool>*/;
var8 = ((struct instance_kernel__Bool*)var7)->value; /* autounbox from nullable Object to Bool */;
if (var8){
var9 = NEW_layout_builders__MClassHasher(&type_layout_builders__MClassHasher);
var10 = NEW_layout_builders__PHModOperator(&type_layout_builders__PHModOperator);
((void (*)(val*))(var10->class->vft[COLOR_layout_builders__PHModOperator__init]))(var10) /* init on <var10:PHModOperator>*/;
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_layout_builders__MClassHasher__init]))(var9, var10, var_mainmodule) /* init on <var9:MClassHasher>*/;
var_layout_builder = var9;
var11 = ((val* (*)(val*, val*))(var_class_colorer->class->vft[COLOR_layout_builders__TypingLayoutBuilder__build_layout]))(var_class_colorer, var_mclasses) /* build_layout on <var_class_colorer:MClassColorer>*/;
var11;
} else {
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateErasureCompiler>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var12) /* toolcontext on <var12:ModelBuilder>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var13) /* opt_phand_typing on <var13:ToolContext>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_opts__Option__value]))(var14) /* value on <var14:OptionBool>*/;
var16 = ((struct instance_kernel__Bool*)var15)->value; /* autounbox from nullable Object to Bool */;
if (var16){
var17 = NEW_layout_builders__MClassHasher(&type_layout_builders__MClassHasher);
var18 = NEW_layout_builders__PHAndOperator(&type_layout_builders__PHAndOperator);
((void (*)(val*))(var18->class->vft[COLOR_layout_builders__PHAndOperator__init]))(var18) /* init on <var18:PHAndOperator>*/;
((void (*)(val*, val*, val*))(var17->class->vft[COLOR_layout_builders__MClassHasher__init]))(var17, var18, var_mainmodule) /* init on <var17:MClassHasher>*/;
var_layout_builder = var17;
var19 = ((val* (*)(val*, val*))(var_class_colorer->class->vft[COLOR_layout_builders__TypingLayoutBuilder__build_layout]))(var_class_colorer, var_mclasses) /* build_layout on <var_class_colorer:MClassColorer>*/;
var19;
} else {
var20 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateErasureCompiler>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var20) /* toolcontext on <var20:ModelBuilder>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_separate_compiler__ToolContext__opt_bm_typing]))(var21) /* opt_bm_typing on <var21:ToolContext>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_opts__Option__value]))(var22) /* value on <var22:OptionBool>*/;
var24 = ((struct instance_kernel__Bool*)var23)->value; /* autounbox from nullable Object to Bool */;
if (var24){
var25 = NEW_layout_builders__MClassBMizer(&type_layout_builders__MClassBMizer);
((void (*)(val*, val*))(var25->class->vft[COLOR_layout_builders__MClassBMizer__init]))(var25, var_mainmodule) /* init on <var25:MClassBMizer>*/;
var_layout_builder = var25;
var26 = ((val* (*)(val*, val*))(var_class_colorer->class->vft[COLOR_layout_builders__TypingLayoutBuilder__build_layout]))(var_class_colorer, var_mclasses) /* build_layout on <var_class_colorer:MClassColorer>*/;
var26;
} else {
var_layout_builder = var_class_colorer;
}
}
}
var27 = ((val* (*)(val*, val*))(var_layout_builder->class->vft[COLOR_layout_builders__TypingLayoutBuilder__build_layout]))(var_layout_builder, var_mclasses) /* build_layout on <var_layout_builder:TypingLayoutBuilder[MClass]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_layout_61d]))(self, var27) /* class_layout= on <self:SeparateErasureCompiler>*/;
var28 = ((val* (*)(val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables]))(self, var_mclasses) /* build_class_typing_tables on <self:SeparateErasureCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_tables_61d]))(self, var28) /* class_tables= on <self:SeparateErasureCompiler>*/;
var29 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp);
((void (*)(val*))(var29->class->vft[COLOR_hash_collection__HashMap__init]))(var29) /* init on <var29:HashMap[MClass, Set[MVirtualTypeProp]]>*/;
var_vts = var29;
var30 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:HashSet[MClass]>*/;
for(;;) {
var31 = ((short int (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var30) /* is_ok on <var30:Iterator[nullable Object]>*/;
if(!var31) break;
var32 = ((val* (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__item]))(var30) /* item on <var30:Iterator[nullable Object]>*/;
var_mclass = var32;
var33 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MVirtualTypeProp);
((void (*)(val*))(var33->class->vft[COLOR_hash_collection__HashSet__init]))(var33) /* init on <var33:HashSet[MVirtualTypeProp]>*/;
((void (*)(val*, val*, val*))(var_vts->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_vts, var_mclass, var33) /* []= on <var_vts:HashMap[MClass, Set[MVirtualTypeProp]]>*/;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var35 = ((val* (*)(val*, val*))(var34->class->vft[COLOR_abstract_compiler__MModule__properties]))(var34, var_mclass) /* properties on <var34:MModule>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_abstract_collection__Collection__iterator]))(var35) /* iterator on <var35:Set[MProperty]>*/;
for(;;) {
var37 = ((short int (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var36) /* is_ok on <var36:Iterator[nullable Object]>*/;
if(!var37) break;
var38 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__item]))(var36) /* item on <var36:Iterator[nullable Object]>*/;
var_mprop = var38;
/* <var_mprop:MProperty> isa MVirtualTypeProp */
cltype = type_model__MVirtualTypeProp.color;
idtype = type_model__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var39 = 0;
} else {
var39 = var_mprop->type->type_table[cltype] == idtype;
}
if (var39){
var40 = ((val* (*)(val*, val*))(var_vts->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_vts, var_mclass) /* [] on <var_vts:HashMap[MClass, Set[MVirtualTypeProp]]>*/;
((void (*)(val*, val*))(var40->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var40, var_mprop) /* add on <var40:nullable Object(Set[MVirtualTypeProp])>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__next]))(var36) /* next on <var36:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label41: (void)0;
((void (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__next]))(var30) /* next on <var30:Iterator[nullable Object]>*/;
}
BREAK_label41: (void)0;
var42 = NEW_layout_builders__MPropertyColorer(&type_layout_builders__MPropertyColorermodel__MVirtualTypeProp);
((void (*)(val*, val*, val*))(var42->class->vft[COLOR_layout_builders__MPropertyColorer__init]))(var42, var_mainmodule, var_class_colorer) /* init on <var42:MPropertyColorer[MVirtualTypeProp]>*/;
var_vt_coloring = var42;
var43 = ((val* (*)(val*, val*))(var_vt_coloring->class->vft[COLOR_layout_builders__PropertyLayoutBuilder__build_layout]))(var_vt_coloring, var_vts) /* build_layout on <var_vt_coloring:MPropertyColorer[MVirtualTypeProp]>*/;
var_vt_layout = var43;
var44 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables]))(self, var_mclasses, var_vt_layout) /* build_vt_tables on <self:SeparateErasureCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_tables_61d]))(self, var44) /* vt_tables= on <self:SeparateErasureCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_layout_61d]))(self, var_vt_layout) /* vt_layout= on <self:SeparateErasureCompiler>*/;
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#init for (self: Object, MModule, ModelBuilder, nullable RapidTypeAnalysis) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__init(val* self, val* p0, val* p1, val* p2) {
separate_erasure_compiler__SeparateErasureCompiler__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables for (self: SeparateErasureCompiler, Set[MClass], Layout[MProperty]): Map[MClass, Array[nullable MPropDef]] */
val* separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(val* self, val* p0, val* p1) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_mclasses /* var mclasses: Set[MClass] */;
val* var_layout /* var layout: Layout[MProperty] */;
val* var1 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var_tables /* var tables: HashMap[MClass, Array[nullable MPropDef]] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var5 /* : Array[nullable MPropDef] */;
val* var_table /* var table: Array[nullable MPropDef] */;
val* var6 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var7 /* : MModule */;
val* var8 /* : POSet[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var11 /* : POSetElement[MClass] */;
val* var12 /* : Collection[Object] */;
val* var13 /* : Array[nullable Object] */;
val* var14 /* : MModule */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
short int var18 /* : Bool */;
val* var19 /* : MModule */;
val* var20 /* : Set[MProperty] */;
val* var21 /* : Iterator[nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_mproperty /* var mproperty: MProperty */;
short int var24 /* : Bool */;
int cltype;
int idtype;
short int var25 /* : Bool */;
val* var27 /* : Map[Object, Int] */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
long var_color /* var color: Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name;
short int var36 /* : Bool */;
val* var37 /* : Range[Int] */;
long var38 /* : Int */;
val* var39 /* : Discrete */;
val* var40 /* : Discrete */;
val* var41 /* : Iterator[nullable Object] */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
long var_i /* var i: Int */;
long var44 /* : Int */;
val* var45 /* : null */;
val* var47 /* : Array[MPropDef] */;
val* var48 /* : Iterator[nullable Object] */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var51 /* : MClassDef */;
val* var52 /* : MClass */;
short int var53 /* : Bool */;
val* var55 /* : MModule */;
val* var56 /* : Set[MProperty] */;
val* var57 /* : Iterator[nullable Object] */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_mproperty60 /* var mproperty: MProperty */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
short int var64 /* : Bool */;
val* var66 /* : Map[Object, Int] */;
val* var67 /* : nullable Object */;
long var68 /* : Int */;
long var_color69 /* var color: Int */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
val* var78 /* : Range[Int] */;
long var79 /* : Int */;
val* var80 /* : Discrete */;
val* var81 /* : Discrete */;
val* var82 /* : Iterator[nullable Object] */;
short int var83 /* : Bool */;
val* var84 /* : nullable Object */;
long var_i85 /* var i: Int */;
long var86 /* : Int */;
val* var87 /* : null */;
val* var89 /* : Array[MPropDef] */;
val* var90 /* : Iterator[nullable Object] */;
short int var91 /* : Bool */;
val* var92 /* : nullable Object */;
val* var_mpropdef93 /* var mpropdef: MVirtualTypeDef */;
val* var94 /* : MClassDef */;
val* var95 /* : MClass */;
short int var96 /* : Bool */;
var_mclasses = p0;
var_layout = p1;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[MClass, Array[nullable MPropDef]]>*/;
var_tables = var1;
var2 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_mclass = var4;
var5 = NEW_array__Array(&type_array__Arraynullable_model__MPropDef);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[nullable MPropDef]>*/;
var_table = var5;
var6 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[MClass]>*/;
var_parents = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var7) /* flatten_mclass_hierarchy on <var7:MModule>*/;
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__Collection__has]))(var8, var_mclass) /* has on <var8:POSet[MClass]>*/;
if (var9){
var10 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var11 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass, var10) /* in_hierarchy on <var_mclass:MClass>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_poset__POSetElement__greaters]))(var11) /* greaters on <var11:POSetElement[MClass]>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_array__Collection__to_a]))(var12) /* to_a on <var12:Collection[Object](Collection[MClass])>*/;
var_parents = var13;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_model__MModule__linearize_mclasses]))(var14, var_parents) /* linearize_mclasses on <var14:MModule>*/;
} else {
}
var15 = ((val* (*)(val*))(var_parents->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_parents) /* iterator on <var_parents:Array[MClass]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_parent = var17;
var18 = ((short int (*)(val*, val*))(var_parent->class->vft[COLOR_kernel__Object___61d_61d]))(var_parent, var_mclass) /* == on <var_parent:MClass>*/;
if (var18){
goto CONTINUE_label;
} else {
}
var19 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var20 = ((val* (*)(val*, val*))(var19->class->vft[COLOR_abstract_compiler__MModule__properties]))(var19, var_parent) /* properties on <var19:MModule>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Collection__iterator]))(var20) /* iterator on <var20:Set[MProperty]>*/;
for(;;) {
var22 = ((short int (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var21) /* is_ok on <var21:Iterator[nullable Object]>*/;
if(!var22) break;
var23 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__item]))(var21) /* item on <var21:Iterator[nullable Object]>*/;
var_mproperty = var23;
/* <var_mproperty:MProperty> isa MVirtualTypeProp */
cltype = type_model__MVirtualTypeProp.color;
idtype = type_model__MVirtualTypeProp.id;
if(cltype >= var_mproperty->type->table_size) {
var24 = 0;
} else {
var24 = var_mproperty->type->type_table[cltype] == idtype;
}
var25 = !var24;
if (var25){
goto CONTINUE_label26;
} else {
}
var27 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:Layout[MProperty]>*/;
var28 = ((val* (*)(val*, val*))(var27->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var27, var_mproperty) /* [] on <var27:Map[Object, Int](Map[MProperty, Int])>*/;
var29 = ((struct instance_kernel__Int*)var28)->value; /* autounbox from nullable Object to Int */;
var_color = var29;
var30 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#<= (var30,var_color) */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var33 = 1; /* easy <var_color:Int> isa OTHER*/
if (!var33) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var36 = var30 <= var_color;
var31 = var36;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
if (var31){
var37 = NEW_range__Range(&type_range__Rangekernel__Int);
var38 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
var39 = BOX_kernel__Int(var38); /* autobox from Int to Discrete */
var40 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var37->class->vft[COLOR_range__Range__without_last]))(var37, var39, var40) /* without_last on <var37:Range[Int]>*/;
var41 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Collection__iterator]))(var37) /* iterator on <var37:Range[Int]>*/;
for(;;) {
var42 = ((short int (*)(val*))(var41->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var41) /* is_ok on <var41:Iterator[nullable Object]>*/;
if(!var42) break;
var43 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Iterator__item]))(var41) /* item on <var41:Iterator[nullable Object]>*/;
var44 = ((struct instance_kernel__Int*)var43)->value; /* autounbox from nullable Object to Int */;
var_i = var44;
var45 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i, var45) /* []= on <var_table:Array[nullable MPropDef]>*/;
CONTINUE_label46: (void)0;
((void (*)(val*))(var41->class->vft[COLOR_abstract_collection__Iterator__next]))(var41) /* next on <var41:Iterator[nullable Object]>*/;
}
BREAK_label46: (void)0;
} else {
}
var47 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty) /* mpropdefs on <var_mproperty:MProperty(MVirtualTypeProp)>*/;
var48 = ((val* (*)(val*))(var47->class->vft[COLOR_abstract_collection__Collection__iterator]))(var47) /* iterator on <var47:Array[MPropDef](Array[MVirtualTypeDef])>*/;
for(;;) {
var49 = ((short int (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var48) /* is_ok on <var48:Iterator[nullable Object]>*/;
if(!var49) break;
var50 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__item]))(var48) /* item on <var48:Iterator[nullable Object]>*/;
var_mpropdef = var50;
var51 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MVirtualTypeDef>*/;
var52 = ((val* (*)(val*))(var51->class->vft[COLOR_model__MClassDef__mclass]))(var51) /* mclass on <var51:MClassDef>*/;
var53 = ((short int (*)(val*, val*))(var52->class->vft[COLOR_kernel__Object___61d_61d]))(var52, var_parent) /* == on <var52:MClass>*/;
if (var53){
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color, var_mpropdef) /* []= on <var_table:Array[nullable MPropDef]>*/;
} else {
}
CONTINUE_label54: (void)0;
((void (*)(val*))(var48->class->vft[COLOR_abstract_collection__Iterator__next]))(var48) /* next on <var48:Iterator[nullable Object]>*/;
}
BREAK_label54: (void)0;
CONTINUE_label26: (void)0;
((void (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__next]))(var21) /* next on <var21:Iterator[nullable Object]>*/;
}
BREAK_label26: (void)0;
CONTINUE_label: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var55 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var56 = ((val* (*)(val*, val*))(var55->class->vft[COLOR_abstract_compiler__MModule__properties]))(var55, var_mclass) /* properties on <var55:MModule>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_abstract_collection__Collection__iterator]))(var56) /* iterator on <var56:Set[MProperty]>*/;
for(;;) {
var58 = ((short int (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var57) /* is_ok on <var57:Iterator[nullable Object]>*/;
if(!var58) break;
var59 = ((val* (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__item]))(var57) /* item on <var57:Iterator[nullable Object]>*/;
var_mproperty60 = var59;
/* <var_mproperty60:MProperty> isa MVirtualTypeProp */
cltype62 = type_model__MVirtualTypeProp.color;
idtype63 = type_model__MVirtualTypeProp.id;
if(cltype62 >= var_mproperty60->type->table_size) {
var61 = 0;
} else {
var61 = var_mproperty60->type->type_table[cltype62] == idtype63;
}
var64 = !var61;
if (var64){
goto CONTINUE_label65;
} else {
}
var66 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:Layout[MProperty]>*/;
var67 = ((val* (*)(val*, val*))(var66->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var66, var_mproperty60) /* [] on <var66:Map[Object, Int](Map[MProperty, Int])>*/;
var68 = ((struct instance_kernel__Int*)var67)->value; /* autounbox from nullable Object to Int */;
var_color69 = var68;
var70 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#<= (var70,var_color69) */
/* Covariant cast for argument 0 (i) <var_color69:Int> isa OTHER */
/* <var_color69:Int> isa OTHER */
var73 = 1; /* easy <var_color69:Int> isa OTHER*/
if (!var73) {
var_class_name76 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var77 = var70 <= var_color69;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
if (var71){
var78 = NEW_range__Range(&type_range__Rangekernel__Int);
var79 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MPropDef]>*/;
var80 = BOX_kernel__Int(var79); /* autobox from Int to Discrete */
var81 = BOX_kernel__Int(var_color69); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var78->class->vft[COLOR_range__Range__without_last]))(var78, var80, var81) /* without_last on <var78:Range[Int]>*/;
var82 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_collection__Collection__iterator]))(var78) /* iterator on <var78:Range[Int]>*/;
for(;;) {
var83 = ((short int (*)(val*))(var82->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var82) /* is_ok on <var82:Iterator[nullable Object]>*/;
if(!var83) break;
var84 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_collection__Iterator__item]))(var82) /* item on <var82:Iterator[nullable Object]>*/;
var86 = ((struct instance_kernel__Int*)var84)->value; /* autounbox from nullable Object to Int */;
var_i85 = var86;
var87 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i85, var87) /* []= on <var_table:Array[nullable MPropDef]>*/;
CONTINUE_label88: (void)0;
((void (*)(val*))(var82->class->vft[COLOR_abstract_collection__Iterator__next]))(var82) /* next on <var82:Iterator[nullable Object]>*/;
}
BREAK_label88: (void)0;
} else {
}
var89 = ((val* (*)(val*))(var_mproperty60->class->vft[COLOR_model__MProperty__mpropdefs]))(var_mproperty60) /* mpropdefs on <var_mproperty60:MProperty(MVirtualTypeProp)>*/;
var90 = ((val* (*)(val*))(var89->class->vft[COLOR_abstract_collection__Collection__iterator]))(var89) /* iterator on <var89:Array[MPropDef](Array[MVirtualTypeDef])>*/;
for(;;) {
var91 = ((short int (*)(val*))(var90->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var90) /* is_ok on <var90:Iterator[nullable Object]>*/;
if(!var91) break;
var92 = ((val* (*)(val*))(var90->class->vft[COLOR_abstract_collection__Iterator__item]))(var90) /* item on <var90:Iterator[nullable Object]>*/;
var_mpropdef93 = var92;
var94 = ((val* (*)(val*))(var_mpropdef93->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef93) /* mclassdef on <var_mpropdef93:MVirtualTypeDef>*/;
var95 = ((val* (*)(val*))(var94->class->vft[COLOR_model__MClassDef__mclass]))(var94) /* mclass on <var94:MClassDef>*/;
var96 = ((short int (*)(val*, val*))(var95->class->vft[COLOR_kernel__Object___61d_61d]))(var95, var_mclass) /* == on <var95:MClass>*/;
if (var96){
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color69, var_mpropdef93) /* []= on <var_table:Array[nullable MPropDef]>*/;
} else {
}
CONTINUE_label97: (void)0;
((void (*)(val*))(var90->class->vft[COLOR_abstract_collection__Iterator__next]))(var90) /* next on <var90:Iterator[nullable Object]>*/;
}
BREAK_label97: (void)0;
CONTINUE_label65: (void)0;
((void (*)(val*))(var57->class->vft[COLOR_abstract_collection__Iterator__next]))(var57) /* next on <var57:Iterator[nullable Object]>*/;
}
BREAK_label65: (void)0;
((void (*)(val*, val*, val*))(var_tables->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_tables, var_mclass, var_table) /* []= on <var_tables:HashMap[MClass, Array[nullable MPropDef]]>*/;
CONTINUE_label98: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label98: (void)0;
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables for (self: Object, Set[MClass], Layout[MProperty]): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(val* self, val* p0, val* p1) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables for (self: SeparateErasureCompiler, Set[MClass]): Map[MClass, Array[nullable MClass]] */
val* separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(val* self, val* p0) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var_mclasses /* var mclasses: Set[MClass] */;
val* var1 /* : HashMap[MClass, Array[nullable MClass]] */;
val* var_tables /* var tables: HashMap[MClass, Array[nullable MClass]] */;
val* var2 /* : nullable Layout[MClass] */;
val* var_layout /* var layout: nullable Layout[MClass] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var6 /* : Array[nullable MClass] */;
val* var_table /* var table: Array[nullable MClass] */;
val* var7 /* : Array[MClass] */;
val* var_supers /* var supers: Array[MClass] */;
val* var8 /* : MModule */;
val* var9 /* : POSet[MClass] */;
short int var10 /* : Bool */;
val* var11 /* : MModule */;
val* var12 /* : POSetElement[MClass] */;
val* var13 /* : Collection[Object] */;
val* var14 /* : Array[nullable Object] */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_sup /* var sup: MClass */;
short int var18 /* : Bool */;
int cltype;
int idtype;
val* var19 /* : Map[Object, Map[Object, Int]] */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable Object */;
long var22 /* : Int */;
long var_color /* var color: Int */;
val* var23 /* : Map[Object, Int] */;
val* var24 /* : nullable Object */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name;
short int var32 /* : Bool */;
val* var33 /* : Range[Int] */;
long var34 /* : Int */;
val* var35 /* : Discrete */;
val* var36 /* : Discrete */;
val* var37 /* : Iterator[nullable Object] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
long var_i /* var i: Int */;
long var40 /* : Int */;
val* var41 /* : null */;
var_mclasses = p0;
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[MClass, Array[nullable MClass]]>*/;
var_tables = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_layout]))(self) /* class_layout on <self:SeparateErasureCompiler>*/;
var_layout = var2;
var3 = ((val* (*)(val*))(var_mclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mclasses) /* iterator on <var_mclasses:Set[MClass]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_mclass = var5;
var6 = NEW_array__Array(&type_array__Arraynullable_model__MClass);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[nullable MClass]>*/;
var_table = var6;
var7 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[MClass]>*/;
var_supers = var7;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MModule__flatten_mclass_hierarchy]))(var8) /* flatten_mclass_hierarchy on <var8:MModule>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__Collection__has]))(var9, var_mclass) /* has on <var9:POSet[MClass]>*/;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var12 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__in_hierarchy]))(var_mclass, var11) /* in_hierarchy on <var_mclass:MClass>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_poset__POSetElement__greaters]))(var12) /* greaters on <var12:POSetElement[MClass]>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_array__Collection__to_a]))(var13) /* to_a on <var13:Collection[Object](Collection[MClass])>*/;
var_supers = var14;
} else {
}
var15 = ((val* (*)(val*))(var_supers->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_supers) /* iterator on <var_supers:Array[MClass]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_sup = var17;
/* <var_layout:nullable Layout[MClass]> isa PHLayout[MClass, MClass] */
cltype = type_layout_builders__PHLayoutmodel__MClassmodel__MClass.color;
idtype = type_layout_builders__PHLayoutmodel__MClassmodel__MClass.id;
if(var_layout == NULL) {
var18 = 0;
} else {
if(cltype >= var_layout->type->table_size) {
var18 = 0;
} else {
var18 = var_layout->type->type_table[cltype] == idtype;
}
}
if (var18){
var19 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__PHLayout__hashes]))(var_layout) /* hashes on <var_layout:nullable Layout[MClass](PHLayout[MClass, MClass])>*/;
var20 = ((val* (*)(val*, val*))(var19->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var19, var_mclass) /* [] on <var19:Map[Object, Map[Object, Int]](Map[MClass, Map[MClass, Int]])>*/;
var21 = ((val* (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var20, var_sup) /* [] on <var20:nullable Object(Map[MClass, Int])>*/;
var22 = ((struct instance_kernel__Int*)var21)->value; /* autounbox from nullable Object to Int */;
var_color = var22;
} else {
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 182);
show_backtrace(1);
} else {
var23 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[MClass]>*/;
}
var24 = ((val* (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var23, var_sup) /* [] on <var23:Map[Object, Int](Map[MClass, Int])>*/;
var25 = ((struct instance_kernel__Int*)var24)->value; /* autounbox from nullable Object to Int */;
var_color = var25;
}
var26 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MClass]>*/;
{ /* Inline kernel#Int#<= (var26,var_color) */
/* Covariant cast for argument 0 (i) <var_color:Int> isa OTHER */
/* <var_color:Int> isa OTHER */
var29 = 1; /* easy <var_color:Int> isa OTHER*/
if (!var29) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var32 = var26 <= var_color;
var27 = var32;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
if (var27){
var33 = NEW_range__Range(&type_range__Rangekernel__Int);
var34 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MClass]>*/;
var35 = BOX_kernel__Int(var34); /* autobox from Int to Discrete */
var36 = BOX_kernel__Int(var_color); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var33->class->vft[COLOR_range__Range__without_last]))(var33, var35, var36) /* without_last on <var33:Range[Int]>*/;
var37 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Collection__iterator]))(var33) /* iterator on <var33:Range[Int]>*/;
for(;;) {
var38 = ((short int (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var37) /* is_ok on <var37:Iterator[nullable Object]>*/;
if(!var38) break;
var39 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__item]))(var37) /* item on <var37:Iterator[nullable Object]>*/;
var40 = ((struct instance_kernel__Int*)var39)->value; /* autounbox from nullable Object to Int */;
var_i = var40;
var41 = NULL;
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_i, var41) /* []= on <var_table:Array[nullable MClass]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__next]))(var37) /* next on <var37:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
((void (*)(val*, long, val*))(var_table->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_table, var_color, var_sup) /* []= on <var_table:Array[nullable MClass]>*/;
CONTINUE_label42: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label42: (void)0;
((void (*)(val*, val*, val*))(var_tables->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_tables, var_mclass, var_table) /* []= on <var_tables:HashMap[MClass, Array[nullable MClass]]>*/;
CONTINUE_label43: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label43: (void)0;
var = var_tables;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables for (self: Object, Set[MClass]): Map[MClass, Array[nullable MClass]] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(val* self, val* p0) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs for (self: SeparateErasureCompiler) */
void separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs(val* self) {
val* var /* : CodeWriter */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : CodeWriter */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : CodeWriter */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : CodeWriter */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable Layout[MVirtualTypeProp] */;
short int var24 /* : Bool */;
int cltype;
int idtype;
val* var25 /* : CodeWriter */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : CodeWriter */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : ModelBuilder */;
val* var38 /* : ToolContext */;
val* var39 /* : OptionBool */;
val* var40 /* : nullable Object */;
short int var41 /* : Bool */;
val* var42 /* : CodeWriter */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : ModelBuilder */;
val* var49 /* : ToolContext */;
val* var50 /* : OptionBool */;
val* var51 /* : nullable Object */;
short int var52 /* : Bool */;
val* var53 /* : CodeWriter */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : CodeWriter */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce) {
var1 = varonce;
} else {
var2 = "typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */";
var3 = 81;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var, var1) /* add_decl on <var:CodeWriter>*/;
((void (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__compile_header_attribute_structs]))(self) /* compile_header_attribute_structs on <self:SeparateErasureCompiler>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "struct class { int id; const char *name; int box_kind; int color; const struct vts_table *vts_table; const struct type_table *type_table; nitmethod_t vft[]; }; /* general C type representing a Nit class. */";
var9 = 206;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var5, var7) /* add_decl on <var5:CodeWriter>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "struct type_table { int size; int table[]; }; /* colorized type table. */";
var15 = 73;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var11, var13) /* add_decl on <var11:CodeWriter>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "struct vts_entry { short int is_nullable; const struct class *class; }; /* link (nullable or not) between the vts and is bound. */";
var21 = 130;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var17->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var17, var19) /* add_decl on <var17:CodeWriter>*/;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_layout]))(self) /* vt_layout on <self:SeparateErasureCompiler>*/;
/* <var23:nullable Layout[MVirtualTypeProp]> isa PHLayout[MClass, MVirtualTypeProp] */
cltype = type_layout_builders__PHLayoutmodel__MClassmodel__MVirtualTypeProp.color;
idtype = type_layout_builders__PHLayoutmodel__MClassmodel__MVirtualTypeProp.id;
if(var23 == NULL) {
var24 = 0;
} else {
if(cltype >= var23->type->table_size) {
var24 = 0;
} else {
var24 = var23->type->type_table[cltype] == idtype;
}
}
if (var24){
var25 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "struct vts_table { int mask; const struct vts_entry vts[]; }; /* vts list of a C type representation. */";
var29 = 104;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(var25->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var25, var27) /* add_decl on <var25:CodeWriter>*/;
} else {
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "struct vts_table { int dummy; const struct vts_entry vts[]; }; /* vts list of a C type representation. */";
var35 = 105;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*))(var31->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var31, var33) /* add_decl on <var31:CodeWriter>*/;
}
var37 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateErasureCompiler>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var37) /* toolcontext on <var37:ModelBuilder>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_separate_compiler__ToolContext__opt_phmod_typing]))(var38) /* opt_phmod_typing on <var38:ToolContext>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_opts__Option__value]))(var39) /* value on <var39:OptionBool>*/;
var41 = ((struct instance_kernel__Bool*)var40)->value; /* autounbox from nullable Object to Bool */;
if (var41){
var42 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = "#define HASH(mask, id) ((mask)%(id))";
var46 = 36;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
((void (*)(val*, val*))(var42->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var42, var44) /* add_decl on <var42:CodeWriter>*/;
} else {
var48 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(self) /* modelbuilder on <self:SeparateErasureCompiler>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var48) /* toolcontext on <var48:ModelBuilder>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_separate_compiler__ToolContext__opt_phand_typing]))(var49) /* opt_phand_typing on <var49:ToolContext>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_opts__Option__value]))(var50) /* value on <var50:OptionBool>*/;
var52 = ((struct instance_kernel__Bool*)var51)->value; /* autounbox from nullable Object to Bool */;
if (var52){
var53 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "#define HASH(mask, id) ((mask)&(id))";
var57 = 36;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
((void (*)(val*, val*))(var53->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var53, var55) /* add_decl on <var53:CodeWriter>*/;
} else {
}
}
var59 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = "typedef struct instance { const struct class *class; nitattribute_t attrs[1]; } val; /* general C type representing a Nit instance. */";
var63 = 134;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
((void (*)(val*, val*))(var59->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var59, var61) /* add_decl on <var59:CodeWriter>*/;
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs for (self: Object) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs(val* self) {
separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs(self);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c for (self: SeparateErasureCompiler, MClass) */
void separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
val* var /* : MClassDef */;
val* var1 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var2 /* : String */;
val* var_c_name /* var c_name: String */;
val* var3 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var4 /* : nullable Object */;
val* var_vft /* var vft: Array[nullable MPropDef] */;
val* var5 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var6 /* : nullable Object */;
val* var_attrs /* var attrs: Array[nullable MPropDef] */;
val* var7 /* : Map[MClass, Array[nullable MClass]] */;
val* var8 /* : nullable Object */;
val* var_class_table /* var class_table: Array[nullable MClass] */;
val* var9 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
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
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
val* var74 /* : nullable Layout[MClass] */;
val* var75 /* : Map[Object, Int] */;
val* var76 /* : nullable Object */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var82 /* : Array[Object] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[Object] */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
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
long var101 /* : Int */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : Object */;
val* var111 /* : String */;
val* var112 /* : nullable Layout[MClass] */;
val* var_layout /* var layout: nullable Layout[MClass] */;
short int var113 /* : Bool */;
int cltype;
int idtype;
val* var114 /* : Map[Object, Int] */;
val* var115 /* : nullable Object */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
val* var125 /* : Map[Object, Int] */;
val* var126 /* : nullable Object */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : String */;
short int var136 /* : Bool */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[Object] */;
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
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : String */;
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
val* var175 /* : Array[Object] */;
long var176 /* : Int */;
val* var177 /* : NativeArray[Object] */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : String */;
val* var184 /* : Range[Int] */;
long var185 /* : Int */;
long var186 /* : Int */;
val* var187 /* : Discrete */;
val* var188 /* : Discrete */;
val* var189 /* : Iterator[nullable Object] */;
short int var190 /* : Bool */;
val* var191 /* : nullable Object */;
long var_i /* var i: Int */;
long var192 /* : Int */;
val* var193 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var194 /* : null */;
short int var195 /* : Bool */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
long var199 /* : Int */;
val* var200 /* : String */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var_ /* var : Bool */;
val* var203 /* : MClassDef */;
val* var204 /* : MClassType */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : String */;
short int var211 /* : Bool */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
long var215 /* : Int */;
val* var216 /* : String */;
val* var217 /* : String */;
val* var218 /* : Array[Object] */;
long var219 /* : Int */;
val* var220 /* : NativeArray[Object] */;
val* var221 /* : String */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : String */;
val* var227 /* : String */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : String */;
val* var233 /* : MModule */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : String */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : String */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
long var247 /* : Int */;
val* var248 /* : String */;
val* var249 /* : Array[Object] */;
long var250 /* : Int */;
val* var251 /* : NativeArray[Object] */;
val* var252 /* : String */;
val* var253 /* : String */;
val* var254 /* : Array[Object] */;
long var255 /* : Int */;
val* var256 /* : NativeArray[Object] */;
val* var257 /* : String */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
long var261 /* : Int */;
val* var262 /* : String */;
val* var263 /* : String */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : String */;
val* var269 /* : MModule */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
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
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
long var292 /* : Int */;
val* var293 /* : String */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
long var297 /* : Int */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : String */;
val* var309 /* : Array[Object] */;
long var310 /* : Int */;
val* var311 /* : NativeArray[Object] */;
val* var312 /* : String */;
long var313 /* : Int */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : String */;
val* var319 /* : Array[Object] */;
long var320 /* : Int */;
val* var321 /* : NativeArray[Object] */;
val* var322 /* : Object */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : String */;
val* var329 /* : Iterator[nullable Object] */;
short int var330 /* : Bool */;
val* var331 /* : nullable Object */;
val* var_msuper /* var msuper: nullable MClass */;
val* var332 /* : null */;
short int var333 /* : Bool */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : String */;
val* var339 /* : nullable Layout[MClass] */;
val* var340 /* : Map[Object, Int] */;
val* var341 /* : nullable Object */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
long var345 /* : Int */;
val* var346 /* : String */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
long var350 /* : Int */;
val* var351 /* : String */;
val* var352 /* : Array[Object] */;
long var353 /* : Int */;
val* var354 /* : NativeArray[Object] */;
val* var355 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
long var360 /* : Int */;
val* var361 /* : String */;
static val* varonce362;
val* var363 /* : String */;
char* var364 /* : NativeString */;
long var365 /* : Int */;
val* var366 /* : String */;
val* var367 /* : String */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
long var371 /* : Int */;
val* var372 /* : String */;
short int var373 /* : Bool */;
val* var374 /* : CodeWriter */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : String */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
long var383 /* : Int */;
val* var384 /* : String */;
val* var385 /* : Array[Object] */;
long var386 /* : Int */;
val* var387 /* : NativeArray[Object] */;
val* var388 /* : String */;
val* var389 /* : CodeWriter */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : String */;
val* var395 /* : CodeWriter */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : NativeString */;
long var400 /* : Int */;
val* var401 /* : String */;
val* var402 /* : Array[Object] */;
long var403 /* : Int */;
val* var404 /* : NativeArray[Object] */;
val* var405 /* : String */;
val* var406 /* : CodeWriter */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
long var410 /* : Int */;
val* var411 /* : String */;
val* var412 /* : CodeWriter */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : String */;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : NativeString */;
long var421 /* : Int */;
val* var422 /* : String */;
val* var423 /* : String */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : NativeString */;
long var427 /* : Int */;
val* var428 /* : String */;
val* var429 /* : Array[Object] */;
long var430 /* : Int */;
val* var431 /* : NativeArray[Object] */;
val* var432 /* : String */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : NativeString */;
long var436 /* : Int */;
val* var437 /* : String */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
long var441 /* : Int */;
val* var442 /* : String */;
val* var443 /* : Array[Object] */;
long var444 /* : Int */;
val* var445 /* : NativeArray[Object] */;
val* var446 /* : String */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : NativeString */;
long var450 /* : Int */;
val* var451 /* : String */;
val* var452 /* : String */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : NativeString */;
long var456 /* : Int */;
val* var457 /* : String */;
val* var458 /* : String */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
long var462 /* : Int */;
val* var463 /* : String */;
val* var464 /* : Array[Object] */;
long var465 /* : Int */;
val* var466 /* : NativeArray[Object] */;
val* var467 /* : String */;
static val* varonce468;
val* var469 /* : String */;
char* var470 /* : NativeString */;
long var471 /* : Int */;
val* var472 /* : String */;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : NativeString */;
long var476 /* : Int */;
val* var477 /* : String */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
long var481 /* : Int */;
val* var482 /* : String */;
val* var483 /* : Array[Object] */;
long var484 /* : Int */;
val* var485 /* : NativeArray[Object] */;
val* var486 /* : String */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
long var490 /* : Int */;
val* var491 /* : String */;
val* var492 /* : Array[Object] */;
long var493 /* : Int */;
val* var494 /* : NativeArray[Object] */;
val* var495 /* : String */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
long var499 /* : Int */;
val* var500 /* : String */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : String */;
val* var506 /* : Array[Object] */;
long var507 /* : Int */;
val* var508 /* : NativeArray[Object] */;
val* var509 /* : String */;
static val* varonce510;
val* var511 /* : String */;
char* var512 /* : NativeString */;
long var513 /* : Int */;
val* var514 /* : String */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : String */;
static val* varonce520;
val* var521 /* : String */;
char* var522 /* : NativeString */;
long var523 /* : Int */;
val* var524 /* : String */;
val* var525 /* : String */;
static val* varonce526;
val* var527 /* : String */;
char* var528 /* : NativeString */;
long var529 /* : Int */;
val* var530 /* : String */;
short int var531 /* : Bool */;
val* var532 /* : CodeWriter */;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : NativeString */;
long var536 /* : Int */;
val* var537 /* : String */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : NativeString */;
long var541 /* : Int */;
val* var542 /* : String */;
val* var543 /* : Array[Object] */;
long var544 /* : Int */;
val* var545 /* : NativeArray[Object] */;
val* var546 /* : String */;
val* var547 /* : CodeWriter */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
long var551 /* : Int */;
val* var552 /* : String */;
val* var553 /* : CodeWriter */;
static val* varonce554;
val* var555 /* : String */;
char* var556 /* : NativeString */;
long var557 /* : Int */;
val* var558 /* : String */;
val* var559 /* : CodeWriter */;
static val* varonce560;
val* var561 /* : String */;
char* var562 /* : NativeString */;
long var563 /* : Int */;
val* var564 /* : String */;
static val* varonce565;
val* var566 /* : String */;
char* var567 /* : NativeString */;
long var568 /* : Int */;
val* var569 /* : String */;
val* var570 /* : Array[Object] */;
long var571 /* : Int */;
val* var572 /* : NativeArray[Object] */;
val* var573 /* : String */;
val* var574 /* : String */;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : NativeString */;
long var578 /* : Int */;
val* var579 /* : String */;
static val* varonce580;
val* var581 /* : String */;
char* var582 /* : NativeString */;
long var583 /* : Int */;
val* var584 /* : String */;
val* var585 /* : Array[Object] */;
long var586 /* : Int */;
val* var587 /* : NativeArray[Object] */;
val* var588 /* : String */;
static val* varonce589;
val* var590 /* : String */;
char* var591 /* : NativeString */;
long var592 /* : Int */;
val* var593 /* : String */;
static val* varonce594;
val* var595 /* : String */;
char* var596 /* : NativeString */;
long var597 /* : Int */;
val* var598 /* : String */;
val* var599 /* : Array[Object] */;
long var600 /* : Int */;
val* var601 /* : NativeArray[Object] */;
val* var602 /* : String */;
val* var603 /* : String */;
static val* varonce604;
val* var605 /* : String */;
char* var606 /* : NativeString */;
long var607 /* : Int */;
val* var608 /* : String */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
long var612 /* : Int */;
val* var613 /* : String */;
val* var614 /* : Array[Object] */;
long var615 /* : Int */;
val* var616 /* : NativeArray[Object] */;
val* var617 /* : String */;
static val* varonce618;
val* var619 /* : String */;
char* var620 /* : NativeString */;
long var621 /* : Int */;
val* var622 /* : String */;
val* var623 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var624 /* : Bool */;
val* var625 /* : Array[MType] */;
val* var626 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
long var630 /* : Int */;
val* var631 /* : String */;
static val* varonce632;
val* var633 /* : String */;
char* var634 /* : NativeString */;
long var635 /* : Int */;
val* var636 /* : String */;
val* var637 /* : String */;
static val* varonce638;
val* var639 /* : String */;
char* var640 /* : NativeString */;
long var641 /* : Int */;
val* var642 /* : String */;
val* var643 /* : Array[Object] */;
long var644 /* : Int */;
val* var645 /* : NativeArray[Object] */;
val* var646 /* : String */;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : NativeString */;
long var650 /* : Int */;
val* var651 /* : String */;
val* var652 /* : Array[Object] */;
long var653 /* : Int */;
val* var654 /* : NativeArray[Object] */;
val* var655 /* : String */;
static val* varonce656;
val* var657 /* : String */;
char* var658 /* : NativeString */;
long var659 /* : Int */;
val* var660 /* : String */;
static val* varonce661;
val* var662 /* : String */;
char* var663 /* : NativeString */;
long var664 /* : Int */;
val* var665 /* : String */;
val* var666 /* : Array[Object] */;
long var667 /* : Int */;
val* var668 /* : NativeArray[Object] */;
val* var669 /* : String */;
static val* varonce670;
val* var671 /* : String */;
char* var672 /* : NativeString */;
long var673 /* : Int */;
val* var674 /* : String */;
static val* varonce675;
val* var676 /* : String */;
char* var677 /* : NativeString */;
long var678 /* : Int */;
val* var679 /* : String */;
val* var680 /* : Array[Object] */;
long var681 /* : Int */;
val* var682 /* : NativeArray[Object] */;
val* var683 /* : String */;
static val* varonce684;
val* var685 /* : String */;
char* var686 /* : NativeString */;
long var687 /* : Int */;
val* var688 /* : String */;
static val* varonce689;
val* var690 /* : String */;
char* var691 /* : NativeString */;
long var692 /* : Int */;
val* var693 /* : String */;
val* var694 /* : Array[Object] */;
long var695 /* : Int */;
val* var696 /* : NativeArray[Object] */;
val* var697 /* : String */;
val* var698 /* : String */;
static val* varonce699;
val* var700 /* : String */;
char* var701 /* : NativeString */;
long var702 /* : Int */;
val* var703 /* : String */;
static val* varonce704;
val* var705 /* : String */;
char* var706 /* : NativeString */;
long var707 /* : Int */;
val* var708 /* : String */;
val* var709 /* : Array[Object] */;
long var710 /* : Int */;
val* var711 /* : NativeArray[Object] */;
val* var712 /* : String */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : NativeString */;
long var716 /* : Int */;
val* var717 /* : String */;
static val* varonce718;
val* var719 /* : String */;
char* var720 /* : NativeString */;
long var721 /* : Int */;
val* var722 /* : String */;
val* var723 /* : Array[Object] */;
long var724 /* : Int */;
val* var725 /* : NativeArray[Object] */;
val* var726 /* : String */;
val* var727 /* : String */;
static val* varonce728;
val* var729 /* : String */;
char* var730 /* : NativeString */;
long var731 /* : Int */;
val* var732 /* : String */;
static val* varonce733;
val* var734 /* : String */;
char* var735 /* : NativeString */;
long var736 /* : Int */;
val* var737 /* : String */;
val* var738 /* : Array[Object] */;
long var739 /* : Int */;
val* var740 /* : NativeArray[Object] */;
val* var741 /* : String */;
static val* varonce742;
val* var743 /* : String */;
char* var744 /* : NativeString */;
long var745 /* : Int */;
val* var746 /* : String */;
val* var747 /* : RuntimeVariable */;
val* var_res748 /* var res: RuntimeVariable */;
short int var749 /* : Bool */;
static val* varonce750;
val* var751 /* : String */;
char* var752 /* : NativeString */;
long var753 /* : Int */;
val* var754 /* : String */;
long var755 /* : Int */;
static val* varonce756;
val* var757 /* : String */;
char* var758 /* : NativeString */;
long var759 /* : Int */;
val* var760 /* : String */;
val* var761 /* : Array[Object] */;
long var762 /* : Int */;
val* var763 /* : NativeArray[Object] */;
val* var764 /* : Object */;
val* var765 /* : String */;
static val* varonce766;
val* var767 /* : String */;
char* var768 /* : NativeString */;
long var769 /* : Int */;
val* var770 /* : String */;
val* var771 /* : Array[Object] */;
long var772 /* : Int */;
val* var773 /* : NativeArray[Object] */;
val* var774 /* : String */;
static val* varonce775;
val* var776 /* : String */;
char* var777 /* : NativeString */;
long var778 /* : Int */;
val* var779 /* : String */;
static val* varonce780;
val* var781 /* : String */;
char* var782 /* : NativeString */;
long var783 /* : Int */;
val* var784 /* : String */;
val* var785 /* : Array[Object] */;
long var786 /* : Int */;
val* var787 /* : NativeArray[Object] */;
val* var788 /* : String */;
static val* varonce789;
val* var790 /* : String */;
char* var791 /* : NativeString */;
long var792 /* : Int */;
val* var793 /* : String */;
static val* varonce794;
val* var795 /* : String */;
char* var796 /* : NativeString */;
long var797 /* : Int */;
val* var798 /* : String */;
val* var799 /* : Array[Object] */;
long var800 /* : Int */;
val* var801 /* : NativeArray[Object] */;
val* var802 /* : String */;
static val* varonce803;
val* var804 /* : String */;
char* var805 /* : NativeString */;
long var806 /* : Int */;
val* var807 /* : String */;
var_mclass = p0;
var = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:MClass>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClassDef__bound_mtype]))(var) /* bound_mtype on <var:MClassDef>*/;
var_mtype = var1;
var2 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass) /* c_name on <var_mclass:MClass>*/;
var_c_name = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_tables]))(self) /* method_tables on <self:SeparateErasureCompiler>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_mclass) /* [] on <var3:Map[MClass, Array[nullable MPropDef]]>*/;
var_vft = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_tables]))(self) /* attr_tables on <self:SeparateErasureCompiler>*/;
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var5, var_mclass) /* [] on <var5:Map[MClass, Array[nullable MPropDef]]>*/;
var_attrs = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_tables]))(self) /* class_tables on <self:SeparateErasureCompiler>*/;
var8 = ((val* (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var7, var_mclass) /* [] on <var7:Map[MClass, Array[nullable MClass]]>*/;
var_class_table = var8;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateErasureCompiler>*/;
var_v = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "/* runtime class ";
var12 = 17;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " */";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var22) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "class_";
var26 = 6;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 2;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var24;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "extern const struct class class_";
var35 = 32;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ";";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 3;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var38;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var31, var45) /* provide_declaration on <self:SeparateErasureCompiler>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "extern const struct type_table type_table_";
var49 = 42;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ";";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var59) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = "const struct class class_";
var63 = 25;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " = {";
var68 = 4;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 3;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var61;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var66;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var73) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var74 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_layout]))(self) /* class_layout on <self:SeparateErasureCompiler>*/;
if (var74 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 235);
show_backtrace(1);
} else {
var75 = ((val* (*)(val*))(var74->class->vft[COLOR_layout_builders__Layout__ids]))(var74) /* ids on <var74:nullable Layout[MClass]>*/;
}
var76 = ((val* (*)(val*, val*))(var75->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var75, var_mclass) /* [] on <var75:Map[Object, Int](Map[MClass, Int])>*/;
if (varonce77) {
var78 = varonce77;
} else {
var79 = ",";
var80 = 1;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var82 = array_instance Array[Object] */
var83 = 2;
var84 = NEW_array__NativeArray(var83, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var84)->values[0] = (val*) var76;
((struct instance_array__NativeArray*)var84)->values[1] = (val*) var78;
((void (*)(val*, val*, long))(var82->class->vft[COLOR_array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[Object]>*/;
}
var85 = ((val* (*)(val*))(var82->class->vft[COLOR_string__Object__to_s]))(var82) /* to_s on <var82:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var85) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce86) {
var87 = varonce86;
} else {
var88 = "\"";
var89 = 1;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__name]))(var_mclass) /* name on <var_mclass:MClass>*/;
if (varonce92) {
var93 = varonce92;
} else {
var94 = "\", /* class_name_string */";
var95 = 26;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 3;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var87;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var91;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var100) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var101 = ((long (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__box_kind_of]))(self, var_mclass) /* box_kind_of on <self:SeparateErasureCompiler>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = ", /* box_kind */";
var105 = 16;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 2;
var109 = NEW_array__NativeArray(var108, &type_array__NativeArraykernel__Object);
var110 = BOX_kernel__Int(var101); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var109)->values[0] = (val*) var110;
((struct instance_array__NativeArray*)var109)->values[1] = (val*) var103;
((void (*)(val*, val*, long))(var107->class->vft[COLOR_array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
var111 = ((val* (*)(val*))(var107->class->vft[COLOR_string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var111) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var112 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_layout]))(self) /* class_layout on <self:SeparateErasureCompiler>*/;
var_layout = var112;
/* <var_layout:nullable Layout[MClass]> isa PHLayout[MClass, MClass] */
cltype = type_layout_builders__PHLayoutmodel__MClassmodel__MClass.color;
idtype = type_layout_builders__PHLayoutmodel__MClassmodel__MClass.id;
if(var_layout == NULL) {
var113 = 0;
} else {
if(cltype >= var_layout->type->table_size) {
var113 = 0;
} else {
var113 = var_layout->type->type_table[cltype] == idtype;
}
}
if (var113){
var114 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__PHLayout__masks]))(var_layout) /* masks on <var_layout:nullable Layout[MClass](PHLayout[MClass, MClass])>*/;
var115 = ((val* (*)(val*, val*))(var114->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var114, var_mclass) /* [] on <var114:Map[Object, Int](Map[MClass, Int])>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = ",";
var119 = 1;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 2;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var115;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var117;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var124) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (var_layout == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 242);
show_backtrace(1);
} else {
var125 = ((val* (*)(val*))(var_layout->class->vft[COLOR_layout_builders__Layout__pos]))(var_layout) /* pos on <var_layout:nullable Layout[MClass]>*/;
}
var126 = ((val* (*)(val*, val*))(var125->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var125, var_mclass) /* [] on <var125:Map[Object, Int](Map[MClass, Int])>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = ",";
var130 = 1;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 2;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var128;
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
var135 = ((val* (*)(val*))(var132->class->vft[COLOR_string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var135) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
var136 = ((short int (*)(val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table]))(self, var_mclass) /* build_class_vts_table on <self:SeparateErasureCompiler>*/;
if (var136){
if (varonce137) {
var138 = varonce137;
} else {
var139 = "vts_table_";
var140 = 10;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 2;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var138;
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
var145 = ((val* (*)(val*))(var142->class->vft[COLOR_string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var145) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce146) {
var147 = varonce146;
} else {
var148 = "&vts_table_";
var149 = 11;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = ",";
var154 = 1;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 3;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var147;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var158)->values[2] = (val*) var152;
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var159) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
if (varonce160) {
var161 = varonce160;
} else {
var162 = "NULL,";
var163 = 5;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var161) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = "&type_table_";
var168 = 12;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = ",";
var173 = 1;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
var175 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var175 = array_instance Array[Object] */
var176 = 3;
var177 = NEW_array__NativeArray(var176, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var177)->values[0] = (val*) var166;
((struct instance_array__NativeArray*)var177)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var177)->values[2] = (val*) var171;
((void (*)(val*, val*, long))(var175->class->vft[COLOR_array__Array__with_native]))(var175, var177, var176) /* with_native on <var175:Array[Object]>*/;
}
var178 = ((val* (*)(val*))(var175->class->vft[COLOR_string__Object__to_s]))(var175) /* to_s on <var175:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var178) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce179) {
var180 = varonce179;
} else {
var181 = "{";
var182 = 1;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var180) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var184 = NEW_range__Range(&type_range__Rangekernel__Int);
var185 = 0;
var186 = ((long (*)(val*))(var_vft->class->vft[COLOR_abstract_collection__Collection__length]))(var_vft) /* length on <var_vft:Array[nullable MPropDef]>*/;
var187 = BOX_kernel__Int(var185); /* autobox from Int to Discrete */
var188 = BOX_kernel__Int(var186); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var184->class->vft[COLOR_range__Range__without_last]))(var184, var187, var188) /* without_last on <var184:Range[Int]>*/;
var189 = ((val* (*)(val*))(var184->class->vft[COLOR_abstract_collection__Collection__iterator]))(var184) /* iterator on <var184:Range[Int]>*/;
for(;;) {
var190 = ((short int (*)(val*))(var189->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var189) /* is_ok on <var189:Iterator[nullable Object]>*/;
if(!var190) break;
var191 = ((val* (*)(val*))(var189->class->vft[COLOR_abstract_collection__Iterator__item]))(var189) /* item on <var189:Iterator[nullable Object]>*/;
var192 = ((struct instance_kernel__Int*)var191)->value; /* autounbox from nullable Object to Int */;
var_i = var192;
var193 = ((val* (*)(val*, long))(var_vft->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_vft, var_i) /* [] on <var_vft:Array[nullable MPropDef]>*/;
var_mpropdef = var193;
var194 = NULL;
if (var_mpropdef == NULL) {
var195 = 1; /* is null */
} else {
var195 = 0; /* arg is null but recv is not */
}
if (var195){
if (varonce196) {
var197 = varonce196;
} else {
var198 = "NULL, /* empty */";
var199 = 17;
var200 = string__NativeString__to_s_with_length(var198, var199);
var197 = var200;
varonce196 = var197;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var197) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
var202 = 1;
var_ = var202;
if (var202){
var201 = var_;
} else {
var203 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:nullable MPropDef(MPropDef)>*/;
var204 = ((val* (*)(val*))(var203->class->vft[COLOR_model__MClassDef__bound_mtype]))(var203) /* bound_mtype on <var203:MClassDef>*/;
var205 = ((val* (*)(val*))(var204->class->vft[COLOR_abstract_compiler__MType__ctype]))(var204) /* ctype on <var204:MClassType>*/;
if (varonce206) {
var207 = varonce206;
} else {
var208 = "val*";
var209 = 4;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
var211 = ((short int (*)(val*, val*))(var205->class->vft[COLOR_kernel__Object___33d_61d]))(var205, var207) /* != on <var205:String>*/;
var201 = var211;
}
if (var201){
if (varonce212) {
var213 = varonce212;
} else {
var214 = "VIRTUAL_";
var215 = 8;
var216 = string__NativeString__to_s_with_length(var214, var215);
var213 = var216;
varonce212 = var213;
}
var217 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var_mpropdef) /* c_name on <var_mpropdef:nullable MPropDef(MPropDef)>*/;
var218 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var218 = array_instance Array[Object] */
var219 = 2;
var220 = NEW_array__NativeArray(var219, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var220)->values[0] = (val*) var213;
((struct instance_array__NativeArray*)var220)->values[1] = (val*) var217;
((void (*)(val*, val*, long))(var218->class->vft[COLOR_array__Array__with_native]))(var218, var220, var219) /* with_native on <var218:Array[Object]>*/;
}
var221 = ((val* (*)(val*))(var218->class->vft[COLOR_string__Object__to_s]))(var218) /* to_s on <var218:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var221) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce222) {
var223 = varonce222;
} else {
var224 = "(nitmethod_t)VIRTUAL_";
var225 = 21;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
var227 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var_mpropdef) /* c_name on <var_mpropdef:nullable MPropDef(MPropDef)>*/;
if (varonce228) {
var229 = varonce228;
} else {
var230 = ", /* pointer to ";
var231 = 16;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
var233 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
if (varonce234) {
var235 = varonce234;
} else {
var236 = ":";
var237 = 1;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
if (varonce239) {
var240 = varonce239;
} else {
var241 = ":";
var242 = 1;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
if (varonce244) {
var245 = varonce244;
} else {
var246 = " */";
var247 = 3;
var248 = string__NativeString__to_s_with_length(var246, var247);
var245 = var248;
varonce244 = var245;
}
var249 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var249 = array_instance Array[Object] */
var250 = 9;
var251 = NEW_array__NativeArray(var250, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var251)->values[0] = (val*) var223;
((struct instance_array__NativeArray*)var251)->values[1] = (val*) var227;
((struct instance_array__NativeArray*)var251)->values[2] = (val*) var229;
((struct instance_array__NativeArray*)var251)->values[3] = (val*) var233;
((struct instance_array__NativeArray*)var251)->values[4] = (val*) var235;
((struct instance_array__NativeArray*)var251)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var251)->values[6] = (val*) var240;
((struct instance_array__NativeArray*)var251)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var251)->values[8] = (val*) var245;
((void (*)(val*, val*, long))(var249->class->vft[COLOR_array__Array__with_native]))(var249, var251, var250) /* with_native on <var249:Array[Object]>*/;
}
var252 = ((val* (*)(val*))(var249->class->vft[COLOR_string__Object__to_s]))(var249) /* to_s on <var249:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var252) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
var253 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var_mpropdef) /* c_name on <var_mpropdef:nullable MPropDef(MPropDef)>*/;
var254 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var254 = array_instance Array[Object] */
var255 = 1;
var256 = NEW_array__NativeArray(var255, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var256)->values[0] = (val*) var253;
((void (*)(val*, val*, long))(var254->class->vft[COLOR_array__Array__with_native]))(var254, var256, var255) /* with_native on <var254:Array[Object]>*/;
}
var257 = ((val* (*)(val*))(var254->class->vft[COLOR_string__Object__to_s]))(var254) /* to_s on <var254:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var257) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce258) {
var259 = varonce258;
} else {
var260 = "(nitmethod_t)";
var261 = 13;
var262 = string__NativeString__to_s_with_length(var260, var261);
var259 = var262;
varonce258 = var259;
}
var263 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var_mpropdef) /* c_name on <var_mpropdef:nullable MPropDef(MPropDef)>*/;
if (varonce264) {
var265 = varonce264;
} else {
var266 = ", /* pointer to ";
var267 = 16;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
var269 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
if (varonce270) {
var271 = varonce270;
} else {
var272 = ":";
var273 = 1;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
if (varonce275) {
var276 = varonce275;
} else {
var277 = ":";
var278 = 1;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
if (varonce280) {
var281 = varonce280;
} else {
var282 = " */";
var283 = 3;
var284 = string__NativeString__to_s_with_length(var282, var283);
var281 = var284;
varonce280 = var281;
}
var285 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var285 = array_instance Array[Object] */
var286 = 9;
var287 = NEW_array__NativeArray(var286, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var287)->values[0] = (val*) var259;
((struct instance_array__NativeArray*)var287)->values[1] = (val*) var263;
((struct instance_array__NativeArray*)var287)->values[2] = (val*) var265;
((struct instance_array__NativeArray*)var287)->values[3] = (val*) var269;
((struct instance_array__NativeArray*)var287)->values[4] = (val*) var271;
((struct instance_array__NativeArray*)var287)->values[5] = (val*) var_mclass;
((struct instance_array__NativeArray*)var287)->values[6] = (val*) var276;
((struct instance_array__NativeArray*)var287)->values[7] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var287)->values[8] = (val*) var281;
((void (*)(val*, val*, long))(var285->class->vft[COLOR_array__Array__with_native]))(var285, var287, var286) /* with_native on <var285:Array[Object]>*/;
}
var288 = ((val* (*)(val*))(var285->class->vft[COLOR_string__Object__to_s]))(var285) /* to_s on <var285:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var288) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var189->class->vft[COLOR_abstract_collection__Iterator__next]))(var189) /* next on <var189:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce289) {
var290 = varonce289;
} else {
var291 = "}";
var292 = 1;
var293 = string__NativeString__to_s_with_length(var291, var292);
var290 = var293;
varonce289 = var290;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var290) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce294) {
var295 = varonce294;
} else {
var296 = "};";
var297 = 2;
var298 = string__NativeString__to_s_with_length(var296, var297);
var295 = var298;
varonce294 = var295;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var295) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce299) {
var300 = varonce299;
} else {
var301 = "const struct type_table type_table_";
var302 = 35;
var303 = string__NativeString__to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
if (varonce304) {
var305 = varonce304;
} else {
var306 = " = {";
var307 = 4;
var308 = string__NativeString__to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
var309 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var309 = array_instance Array[Object] */
var310 = 3;
var311 = NEW_array__NativeArray(var310, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var311)->values[0] = (val*) var300;
((struct instance_array__NativeArray*)var311)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var311)->values[2] = (val*) var305;
((void (*)(val*, val*, long))(var309->class->vft[COLOR_array__Array__with_native]))(var309, var311, var310) /* with_native on <var309:Array[Object]>*/;
}
var312 = ((val* (*)(val*))(var309->class->vft[COLOR_string__Object__to_s]))(var309) /* to_s on <var309:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var312) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var313 = ((long (*)(val*))(var_class_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_class_table) /* length on <var_class_table:Array[nullable MClass]>*/;
if (varonce314) {
var315 = varonce314;
} else {
var316 = ",";
var317 = 1;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
var319 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var319 = array_instance Array[Object] */
var320 = 2;
var321 = NEW_array__NativeArray(var320, &type_array__NativeArraykernel__Object);
var322 = BOX_kernel__Int(var313); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var321)->values[0] = (val*) var322;
((struct instance_array__NativeArray*)var321)->values[1] = (val*) var315;
((void (*)(val*, val*, long))(var319->class->vft[COLOR_array__Array__with_native]))(var319, var321, var320) /* with_native on <var319:Array[Object]>*/;
}
var323 = ((val* (*)(val*))(var319->class->vft[COLOR_string__Object__to_s]))(var319) /* to_s on <var319:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var323) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce324) {
var325 = varonce324;
} else {
var326 = "{";
var327 = 1;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var325) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var329 = ((val* (*)(val*))(var_class_table->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_class_table) /* iterator on <var_class_table:Array[nullable MClass]>*/;
for(;;) {
var330 = ((short int (*)(val*))(var329->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var329) /* is_ok on <var329:Iterator[nullable Object]>*/;
if(!var330) break;
var331 = ((val* (*)(val*))(var329->class->vft[COLOR_abstract_collection__Iterator__item]))(var329) /* item on <var329:Iterator[nullable Object]>*/;
var_msuper = var331;
var332 = NULL;
if (var_msuper == NULL) {
var333 = 1; /* is null */
} else {
var333 = 0; /* arg is null but recv is not */
}
if (var333){
if (varonce334) {
var335 = varonce334;
} else {
var336 = "-1, /* empty */";
var337 = 15;
var338 = string__NativeString__to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var335) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
var339 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_layout]))(self) /* class_layout on <self:SeparateErasureCompiler>*/;
if (var339 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 278);
show_backtrace(1);
} else {
var340 = ((val* (*)(val*))(var339->class->vft[COLOR_layout_builders__Layout__ids]))(var339) /* ids on <var339:nullable Layout[MClass]>*/;
}
var341 = ((val* (*)(val*, val*))(var340->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var340, var_msuper) /* [] on <var340:Map[Object, Int](Map[MClass, Int])>*/;
if (varonce342) {
var343 = varonce342;
} else {
var344 = ", /* ";
var345 = 5;
var346 = string__NativeString__to_s_with_length(var344, var345);
var343 = var346;
varonce342 = var343;
}
if (varonce347) {
var348 = varonce347;
} else {
var349 = " */";
var350 = 3;
var351 = string__NativeString__to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
var352 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var352 = array_instance Array[Object] */
var353 = 4;
var354 = NEW_array__NativeArray(var353, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var354)->values[0] = (val*) var341;
((struct instance_array__NativeArray*)var354)->values[1] = (val*) var343;
((struct instance_array__NativeArray*)var354)->values[2] = (val*) var_msuper;
((struct instance_array__NativeArray*)var354)->values[3] = (val*) var348;
((void (*)(val*, val*, long))(var352->class->vft[COLOR_array__Array__with_native]))(var352, var354, var353) /* with_native on <var352:Array[Object]>*/;
}
var355 = ((val* (*)(val*))(var352->class->vft[COLOR_string__Object__to_s]))(var352) /* to_s on <var352:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var355) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
CONTINUE_label356: (void)0;
((void (*)(val*))(var329->class->vft[COLOR_abstract_collection__Iterator__next]))(var329) /* next on <var329:Iterator[nullable Object]>*/;
}
BREAK_label356: (void)0;
if (varonce357) {
var358 = varonce357;
} else {
var359 = "}";
var360 = 1;
var361 = string__NativeString__to_s_with_length(var359, var360);
var358 = var361;
varonce357 = var358;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var358) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce362) {
var363 = varonce362;
} else {
var364 = "};";
var365 = 2;
var366 = string__NativeString__to_s_with_length(var364, var365);
var363 = var366;
varonce362 = var363;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var363) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var367 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce368) {
var369 = varonce368;
} else {
var370 = "val*";
var371 = 4;
var372 = string__NativeString__to_s_with_length(var370, var371);
var369 = var372;
varonce368 = var369;
}
var373 = ((short int (*)(val*, val*))(var367->class->vft[COLOR_kernel__Object___33d_61d]))(var367, var369) /* != on <var367:String>*/;
if (var373){
var374 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce375) {
var376 = varonce375;
} else {
var377 = "struct instance_";
var378 = 16;
var379 = string__NativeString__to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
if (varonce380) {
var381 = varonce380;
} else {
var382 = " {";
var383 = 2;
var384 = string__NativeString__to_s_with_length(var382, var383);
var381 = var384;
varonce380 = var381;
}
var385 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var385 = array_instance Array[Object] */
var386 = 3;
var387 = NEW_array__NativeArray(var386, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var387)->values[0] = (val*) var376;
((struct instance_array__NativeArray*)var387)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var387)->values[2] = (val*) var381;
((void (*)(val*, val*, long))(var385->class->vft[COLOR_array__Array__with_native]))(var385, var387, var386) /* with_native on <var385:Array[Object]>*/;
}
var388 = ((val* (*)(val*))(var385->class->vft[COLOR_string__Object__to_s]))(var385) /* to_s on <var385:Array[Object]>*/;
((void (*)(val*, val*))(var374->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var374, var388) /* add_decl on <var374:CodeWriter>*/;
var389 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce390) {
var391 = varonce390;
} else {
var392 = "const struct class *class;";
var393 = 26;
var394 = string__NativeString__to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
((void (*)(val*, val*))(var389->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var389, var391) /* add_decl on <var389:CodeWriter>*/;
var395 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
var396 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce397) {
var398 = varonce397;
} else {
var399 = " value;";
var400 = 7;
var401 = string__NativeString__to_s_with_length(var399, var400);
var398 = var401;
varonce397 = var398;
}
var402 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var402 = array_instance Array[Object] */
var403 = 2;
var404 = NEW_array__NativeArray(var403, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var404)->values[0] = (val*) var396;
((struct instance_array__NativeArray*)var404)->values[1] = (val*) var398;
((void (*)(val*, val*, long))(var402->class->vft[COLOR_array__Array__with_native]))(var402, var404, var403) /* with_native on <var402:Array[Object]>*/;
}
var405 = ((val* (*)(val*))(var402->class->vft[COLOR_string__Object__to_s]))(var402) /* to_s on <var402:Array[Object]>*/;
((void (*)(val*, val*))(var395->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var395, var405) /* add_decl on <var395:CodeWriter>*/;
var406 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce407) {
var408 = varonce407;
} else {
var409 = "};";
var410 = 2;
var411 = string__NativeString__to_s_with_length(var409, var410);
var408 = var411;
varonce407 = var408;
}
((void (*)(val*, val*))(var406->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var406, var408) /* add_decl on <var406:CodeWriter>*/;
var412 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce413) {
var414 = varonce413;
} else {
var415 = "val* BOX_";
var416 = 9;
var417 = string__NativeString__to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
if (varonce418) {
var419 = varonce418;
} else {
var420 = "(";
var421 = 1;
var422 = string__NativeString__to_s_with_length(var420, var421);
var419 = var422;
varonce418 = var419;
}
var423 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce424) {
var425 = varonce424;
} else {
var426 = ");";
var427 = 2;
var428 = string__NativeString__to_s_with_length(var426, var427);
var425 = var428;
varonce424 = var425;
}
var429 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var429 = array_instance Array[Object] */
var430 = 5;
var431 = NEW_array__NativeArray(var430, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var431)->values[0] = (val*) var414;
((struct instance_array__NativeArray*)var431)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var431)->values[2] = (val*) var419;
((struct instance_array__NativeArray*)var431)->values[3] = (val*) var423;
((struct instance_array__NativeArray*)var431)->values[4] = (val*) var425;
((void (*)(val*, val*, long))(var429->class->vft[COLOR_array__Array__with_native]))(var429, var431, var430) /* with_native on <var429:Array[Object]>*/;
}
var432 = ((val* (*)(val*))(var429->class->vft[COLOR_string__Object__to_s]))(var429) /* to_s on <var429:Array[Object]>*/;
((void (*)(val*, val*))(var412->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var412, var432) /* add_decl on <var412:CodeWriter>*/;
if (varonce433) {
var434 = varonce433;
} else {
var435 = "/* allocate ";
var436 = 12;
var437 = string__NativeString__to_s_with_length(var435, var436);
var434 = var437;
varonce433 = var434;
}
if (varonce438) {
var439 = varonce438;
} else {
var440 = " */";
var441 = 3;
var442 = string__NativeString__to_s_with_length(var440, var441);
var439 = var442;
varonce438 = var439;
}
var443 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var443 = array_instance Array[Object] */
var444 = 3;
var445 = NEW_array__NativeArray(var444, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var445)->values[0] = (val*) var434;
((struct instance_array__NativeArray*)var445)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var445)->values[2] = (val*) var439;
((void (*)(val*, val*, long))(var443->class->vft[COLOR_array__Array__with_native]))(var443, var445, var444) /* with_native on <var443:Array[Object]>*/;
}
var446 = ((val* (*)(val*))(var443->class->vft[COLOR_string__Object__to_s]))(var443) /* to_s on <var443:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var446) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce447) {
var448 = varonce447;
} else {
var449 = "val* BOX_";
var450 = 9;
var451 = string__NativeString__to_s_with_length(var449, var450);
var448 = var451;
varonce447 = var448;
}
var452 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype) /* c_name on <var_mtype:MClassType>*/;
if (varonce453) {
var454 = varonce453;
} else {
var455 = "(";
var456 = 1;
var457 = string__NativeString__to_s_with_length(var455, var456);
var454 = var457;
varonce453 = var454;
}
var458 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce459) {
var460 = varonce459;
} else {
var461 = " value) {";
var462 = 9;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
var464 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var464 = array_instance Array[Object] */
var465 = 5;
var466 = NEW_array__NativeArray(var465, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var466)->values[0] = (val*) var448;
((struct instance_array__NativeArray*)var466)->values[1] = (val*) var452;
((struct instance_array__NativeArray*)var466)->values[2] = (val*) var454;
((struct instance_array__NativeArray*)var466)->values[3] = (val*) var458;
((struct instance_array__NativeArray*)var466)->values[4] = (val*) var460;
((void (*)(val*, val*, long))(var464->class->vft[COLOR_array__Array__with_native]))(var464, var466, var465) /* with_native on <var464:Array[Object]>*/;
}
var467 = ((val* (*)(val*))(var464->class->vft[COLOR_string__Object__to_s]))(var464) /* to_s on <var464:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var467) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce468) {
var469 = varonce468;
} else {
var470 = "struct instance_";
var471 = 16;
var472 = string__NativeString__to_s_with_length(var470, var471);
var469 = var472;
varonce468 = var469;
}
if (varonce473) {
var474 = varonce473;
} else {
var475 = "*res = nit_alloc(sizeof(struct instance_";
var476 = 40;
var477 = string__NativeString__to_s_with_length(var475, var476);
var474 = var477;
varonce473 = var474;
}
if (varonce478) {
var479 = varonce478;
} else {
var480 = "));";
var481 = 3;
var482 = string__NativeString__to_s_with_length(var480, var481);
var479 = var482;
varonce478 = var479;
}
var483 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var483 = array_instance Array[Object] */
var484 = 5;
var485 = NEW_array__NativeArray(var484, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var485)->values[0] = (val*) var469;
((struct instance_array__NativeArray*)var485)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var485)->values[2] = (val*) var474;
((struct instance_array__NativeArray*)var485)->values[3] = (val*) var_c_name;
((struct instance_array__NativeArray*)var485)->values[4] = (val*) var479;
((void (*)(val*, val*, long))(var483->class->vft[COLOR_array__Array__with_native]))(var483, var485, var484) /* with_native on <var483:Array[Object]>*/;
}
var486 = ((val* (*)(val*))(var483->class->vft[COLOR_string__Object__to_s]))(var483) /* to_s on <var483:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var486) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce487) {
var488 = varonce487;
} else {
var489 = "class_";
var490 = 6;
var491 = string__NativeString__to_s_with_length(var489, var490);
var488 = var491;
varonce487 = var488;
}
var492 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var492 = array_instance Array[Object] */
var493 = 2;
var494 = NEW_array__NativeArray(var493, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var494)->values[0] = (val*) var488;
((struct instance_array__NativeArray*)var494)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var492->class->vft[COLOR_array__Array__with_native]))(var492, var494, var493) /* with_native on <var492:Array[Object]>*/;
}
var495 = ((val* (*)(val*))(var492->class->vft[COLOR_string__Object__to_s]))(var492) /* to_s on <var492:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var495) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce496) {
var497 = varonce496;
} else {
var498 = "res->class = &class_";
var499 = 20;
var500 = string__NativeString__to_s_with_length(var498, var499);
var497 = var500;
varonce496 = var497;
}
if (varonce501) {
var502 = varonce501;
} else {
var503 = ";";
var504 = 1;
var505 = string__NativeString__to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
var506 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var506 = array_instance Array[Object] */
var507 = 3;
var508 = NEW_array__NativeArray(var507, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var508)->values[0] = (val*) var497;
((struct instance_array__NativeArray*)var508)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var508)->values[2] = (val*) var502;
((void (*)(val*, val*, long))(var506->class->vft[COLOR_array__Array__with_native]))(var506, var508, var507) /* with_native on <var506:Array[Object]>*/;
}
var509 = ((val* (*)(val*))(var506->class->vft[COLOR_string__Object__to_s]))(var506) /* to_s on <var506:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var509) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce510) {
var511 = varonce510;
} else {
var512 = "res->value = value;";
var513 = 19;
var514 = string__NativeString__to_s_with_length(var512, var513);
var511 = var514;
varonce510 = var511;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var511) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce515) {
var516 = varonce515;
} else {
var517 = "return (val*)res;";
var518 = 17;
var519 = string__NativeString__to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var516) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce520) {
var521 = varonce520;
} else {
var522 = "}";
var523 = 1;
var524 = string__NativeString__to_s_with_length(var522, var523);
var521 = var524;
varonce520 = var521;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var521) /* add on <var_v:SeparateCompilerVisitor>*/;
goto RET_LABEL;
} else {
var525 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__name]))(var_mclass) /* name on <var_mclass:MClass>*/;
if (varonce526) {
var527 = varonce526;
} else {
var528 = "NativeArray";
var529 = 11;
var530 = string__NativeString__to_s_with_length(var528, var529);
var527 = var530;
varonce526 = var527;
}
var531 = ((short int (*)(val*, val*))(var525->class->vft[COLOR_kernel__Object___61d_61d]))(var525, var527) /* == on <var525:String>*/;
if (var531){
var532 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce533) {
var534 = varonce533;
} else {
var535 = "struct instance_";
var536 = 16;
var537 = string__NativeString__to_s_with_length(var535, var536);
var534 = var537;
varonce533 = var534;
}
if (varonce538) {
var539 = varonce538;
} else {
var540 = " {";
var541 = 2;
var542 = string__NativeString__to_s_with_length(var540, var541);
var539 = var542;
varonce538 = var539;
}
var543 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var543 = array_instance Array[Object] */
var544 = 3;
var545 = NEW_array__NativeArray(var544, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var545)->values[0] = (val*) var534;
((struct instance_array__NativeArray*)var545)->values[1] = (val*) var_c_name;
((struct instance_array__NativeArray*)var545)->values[2] = (val*) var539;
((void (*)(val*, val*, long))(var543->class->vft[COLOR_array__Array__with_native]))(var543, var545, var544) /* with_native on <var543:Array[Object]>*/;
}
var546 = ((val* (*)(val*))(var543->class->vft[COLOR_string__Object__to_s]))(var543) /* to_s on <var543:Array[Object]>*/;
((void (*)(val*, val*))(var532->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var532, var546) /* add_decl on <var532:CodeWriter>*/;
var547 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce548) {
var549 = varonce548;
} else {
var550 = "const struct class *class;";
var551 = 26;
var552 = string__NativeString__to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
((void (*)(val*, val*))(var547->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var547, var549) /* add_decl on <var547:CodeWriter>*/;
var553 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce554) {
var555 = varonce554;
} else {
var556 = "val* values[];";
var557 = 14;
var558 = string__NativeString__to_s_with_length(var556, var557);
var555 = var558;
varonce554 = var555;
}
((void (*)(val*, val*))(var553->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var553, var555) /* add_decl on <var553:CodeWriter>*/;
var559 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(self) /* header on <self:SeparateErasureCompiler>*/;
if (varonce560) {
var561 = varonce560;
} else {
var562 = "};";
var563 = 2;
var564 = string__NativeString__to_s_with_length(var562, var563);
var561 = var564;
varonce560 = var561;
}
((void (*)(val*, val*))(var559->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var559, var561) /* add_decl on <var559:CodeWriter>*/;
if (varonce565) {
var566 = varonce565;
} else {
var567 = "NEW_";
var568 = 4;
var569 = string__NativeString__to_s_with_length(var567, var568);
var566 = var569;
varonce565 = var566;
}
var570 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var570 = array_instance Array[Object] */
var571 = 2;
var572 = NEW_array__NativeArray(var571, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var572)->values[0] = (val*) var566;
((struct instance_array__NativeArray*)var572)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var570->class->vft[COLOR_array__Array__with_native]))(var570, var572, var571) /* with_native on <var570:Array[Object]>*/;
}
var573 = ((val* (*)(val*))(var570->class->vft[COLOR_string__Object__to_s]))(var570) /* to_s on <var570:Array[Object]>*/;
var574 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce575) {
var576 = varonce575;
} else {
var577 = " NEW_";
var578 = 5;
var579 = string__NativeString__to_s_with_length(var577, var578);
var576 = var579;
varonce575 = var576;
}
if (varonce580) {
var581 = varonce580;
} else {
var582 = "(int length);";
var583 = 13;
var584 = string__NativeString__to_s_with_length(var582, var583);
var581 = var584;
varonce580 = var581;
}
var585 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var585 = array_instance Array[Object] */
var586 = 4;
var587 = NEW_array__NativeArray(var586, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var587)->values[0] = (val*) var574;
((struct instance_array__NativeArray*)var587)->values[1] = (val*) var576;
((struct instance_array__NativeArray*)var587)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var587)->values[3] = (val*) var581;
((void (*)(val*, val*, long))(var585->class->vft[COLOR_array__Array__with_native]))(var585, var587, var586) /* with_native on <var585:Array[Object]>*/;
}
var588 = ((val* (*)(val*))(var585->class->vft[COLOR_string__Object__to_s]))(var585) /* to_s on <var585:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var573, var588) /* provide_declaration on <self:SeparateErasureCompiler>*/;
if (varonce589) {
var590 = varonce589;
} else {
var591 = "/* allocate ";
var592 = 12;
var593 = string__NativeString__to_s_with_length(var591, var592);
var590 = var593;
varonce589 = var590;
}
if (varonce594) {
var595 = varonce594;
} else {
var596 = " */";
var597 = 3;
var598 = string__NativeString__to_s_with_length(var596, var597);
var595 = var598;
varonce594 = var595;
}
var599 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var599 = array_instance Array[Object] */
var600 = 3;
var601 = NEW_array__NativeArray(var600, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var601)->values[0] = (val*) var590;
((struct instance_array__NativeArray*)var601)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var601)->values[2] = (val*) var595;
((void (*)(val*, val*, long))(var599->class->vft[COLOR_array__Array__with_native]))(var599, var601, var600) /* with_native on <var599:Array[Object]>*/;
}
var602 = ((val* (*)(val*))(var599->class->vft[COLOR_string__Object__to_s]))(var599) /* to_s on <var599:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var602) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var603 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce604) {
var605 = varonce604;
} else {
var606 = " NEW_";
var607 = 5;
var608 = string__NativeString__to_s_with_length(var606, var607);
var605 = var608;
varonce604 = var605;
}
if (varonce609) {
var610 = varonce609;
} else {
var611 = "(int length) {";
var612 = 14;
var613 = string__NativeString__to_s_with_length(var611, var612);
var610 = var613;
varonce609 = var610;
}
var614 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var614 = array_instance Array[Object] */
var615 = 4;
var616 = NEW_array__NativeArray(var615, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var616)->values[0] = (val*) var603;
((struct instance_array__NativeArray*)var616)->values[1] = (val*) var605;
((struct instance_array__NativeArray*)var616)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var616)->values[3] = (val*) var610;
((void (*)(val*, val*, long))(var614->class->vft[COLOR_array__Array__with_native]))(var614, var616, var615) /* with_native on <var614:Array[Object]>*/;
}
var617 = ((val* (*)(val*))(var614->class->vft[COLOR_string__Object__to_s]))(var614) /* to_s on <var614:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var617) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce618) {
var619 = varonce618;
} else {
var620 = "self";
var621 = 4;
var622 = string__NativeString__to_s_with_length(var620, var621);
var619 = var622;
varonce618 = var619;
}
var623 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_named_var]))(var_v, var_mtype, var619) /* new_named_var on <var_v:SeparateCompilerVisitor>*/;
var_res = var623;
var624 = 1;
((void (*)(val*, short int))(var_res->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_res, var624) /* is_exact= on <var_res:RuntimeVariable>*/;
var625 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__arguments]))(var_mtype) /* arguments on <var_mtype:MClassType>*/;
var626 = ((val* (*)(val*))(var625->class->vft[COLOR_abstract_collection__Collection__first]))(var625) /* first on <var625:Array[MType]>*/;
var_mtype_elt = var626;
if (varonce627) {
var628 = varonce627;
} else {
var629 = " = nit_alloc(sizeof(struct instance_";
var630 = 36;
var631 = string__NativeString__to_s_with_length(var629, var630);
var628 = var631;
varonce627 = var628;
}
if (varonce632) {
var633 = varonce632;
} else {
var634 = ") + length*sizeof(";
var635 = 18;
var636 = string__NativeString__to_s_with_length(var634, var635);
var633 = var636;
varonce632 = var633;
}
var637 = ((val* (*)(val*))(var_mtype_elt->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype_elt) /* ctype on <var_mtype_elt:MType>*/;
if (varonce638) {
var639 = varonce638;
} else {
var640 = "));";
var641 = 3;
var642 = string__NativeString__to_s_with_length(var640, var641);
var639 = var642;
varonce638 = var639;
}
var643 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var643 = array_instance Array[Object] */
var644 = 6;
var645 = NEW_array__NativeArray(var644, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var645)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var645)->values[1] = (val*) var628;
((struct instance_array__NativeArray*)var645)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var645)->values[3] = (val*) var633;
((struct instance_array__NativeArray*)var645)->values[4] = (val*) var637;
((struct instance_array__NativeArray*)var645)->values[5] = (val*) var639;
((void (*)(val*, val*, long))(var643->class->vft[COLOR_array__Array__with_native]))(var643, var645, var644) /* with_native on <var643:Array[Object]>*/;
}
var646 = ((val* (*)(val*))(var643->class->vft[COLOR_string__Object__to_s]))(var643) /* to_s on <var643:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var646) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce647) {
var648 = varonce647;
} else {
var649 = "class_";
var650 = 6;
var651 = string__NativeString__to_s_with_length(var649, var650);
var648 = var651;
varonce647 = var648;
}
var652 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var652 = array_instance Array[Object] */
var653 = 2;
var654 = NEW_array__NativeArray(var653, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var654)->values[0] = (val*) var648;
((struct instance_array__NativeArray*)var654)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var652->class->vft[COLOR_array__Array__with_native]))(var652, var654, var653) /* with_native on <var652:Array[Object]>*/;
}
var655 = ((val* (*)(val*))(var652->class->vft[COLOR_string__Object__to_s]))(var652) /* to_s on <var652:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var655) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce656) {
var657 = varonce656;
} else {
var658 = "->class = &class_";
var659 = 17;
var660 = string__NativeString__to_s_with_length(var658, var659);
var657 = var660;
varonce656 = var657;
}
if (varonce661) {
var662 = varonce661;
} else {
var663 = ";";
var664 = 1;
var665 = string__NativeString__to_s_with_length(var663, var664);
var662 = var665;
varonce661 = var662;
}
var666 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var666 = array_instance Array[Object] */
var667 = 4;
var668 = NEW_array__NativeArray(var667, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var668)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var668)->values[1] = (val*) var657;
((struct instance_array__NativeArray*)var668)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var668)->values[3] = (val*) var662;
((void (*)(val*, val*, long))(var666->class->vft[COLOR_array__Array__with_native]))(var666, var668, var667) /* with_native on <var666:Array[Object]>*/;
}
var669 = ((val* (*)(val*))(var666->class->vft[COLOR_string__Object__to_s]))(var666) /* to_s on <var666:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var669) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce670) {
var671 = varonce670;
} else {
var672 = "return ";
var673 = 7;
var674 = string__NativeString__to_s_with_length(var672, var673);
var671 = var674;
varonce670 = var671;
}
if (varonce675) {
var676 = varonce675;
} else {
var677 = ";";
var678 = 1;
var679 = string__NativeString__to_s_with_length(var677, var678);
var676 = var679;
varonce675 = var676;
}
var680 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var680 = array_instance Array[Object] */
var681 = 3;
var682 = NEW_array__NativeArray(var681, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var682)->values[0] = (val*) var671;
((struct instance_array__NativeArray*)var682)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var682)->values[2] = (val*) var676;
((void (*)(val*, val*, long))(var680->class->vft[COLOR_array__Array__with_native]))(var680, var682, var681) /* with_native on <var680:Array[Object]>*/;
}
var683 = ((val* (*)(val*))(var680->class->vft[COLOR_string__Object__to_s]))(var680) /* to_s on <var680:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var683) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce684) {
var685 = varonce684;
} else {
var686 = "}";
var687 = 1;
var688 = string__NativeString__to_s_with_length(var686, var687);
var685 = var688;
varonce684 = var685;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var685) /* add on <var_v:SeparateCompilerVisitor>*/;
goto RET_LABEL;
} else {
}
}
if (varonce689) {
var690 = varonce689;
} else {
var691 = "NEW_";
var692 = 4;
var693 = string__NativeString__to_s_with_length(var691, var692);
var690 = var693;
varonce689 = var690;
}
var694 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var694 = array_instance Array[Object] */
var695 = 2;
var696 = NEW_array__NativeArray(var695, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var696)->values[0] = (val*) var690;
((struct instance_array__NativeArray*)var696)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var694->class->vft[COLOR_array__Array__with_native]))(var694, var696, var695) /* with_native on <var694:Array[Object]>*/;
}
var697 = ((val* (*)(val*))(var694->class->vft[COLOR_string__Object__to_s]))(var694) /* to_s on <var694:Array[Object]>*/;
var698 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce699) {
var700 = varonce699;
} else {
var701 = " NEW_";
var702 = 5;
var703 = string__NativeString__to_s_with_length(var701, var702);
var700 = var703;
varonce699 = var700;
}
if (varonce704) {
var705 = varonce704;
} else {
var706 = "(void);";
var707 = 7;
var708 = string__NativeString__to_s_with_length(var706, var707);
var705 = var708;
varonce704 = var705;
}
var709 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var709 = array_instance Array[Object] */
var710 = 4;
var711 = NEW_array__NativeArray(var710, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var711)->values[0] = (val*) var698;
((struct instance_array__NativeArray*)var711)->values[1] = (val*) var700;
((struct instance_array__NativeArray*)var711)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var711)->values[3] = (val*) var705;
((void (*)(val*, val*, long))(var709->class->vft[COLOR_array__Array__with_native]))(var709, var711, var710) /* with_native on <var709:Array[Object]>*/;
}
var712 = ((val* (*)(val*))(var709->class->vft[COLOR_string__Object__to_s]))(var709) /* to_s on <var709:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var697, var712) /* provide_declaration on <self:SeparateErasureCompiler>*/;
if (varonce713) {
var714 = varonce713;
} else {
var715 = "/* allocate ";
var716 = 12;
var717 = string__NativeString__to_s_with_length(var715, var716);
var714 = var717;
varonce713 = var714;
}
if (varonce718) {
var719 = varonce718;
} else {
var720 = " */";
var721 = 3;
var722 = string__NativeString__to_s_with_length(var720, var721);
var719 = var722;
varonce718 = var719;
}
var723 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var723 = array_instance Array[Object] */
var724 = 3;
var725 = NEW_array__NativeArray(var724, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var725)->values[0] = (val*) var714;
((struct instance_array__NativeArray*)var725)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var725)->values[2] = (val*) var719;
((void (*)(val*, val*, long))(var723->class->vft[COLOR_array__Array__with_native]))(var723, var725, var724) /* with_native on <var723:Array[Object]>*/;
}
var726 = ((val* (*)(val*))(var723->class->vft[COLOR_string__Object__to_s]))(var723) /* to_s on <var723:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var726) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var727 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce728) {
var729 = varonce728;
} else {
var730 = " NEW_";
var731 = 5;
var732 = string__NativeString__to_s_with_length(var730, var731);
var729 = var732;
varonce728 = var729;
}
if (varonce733) {
var734 = varonce733;
} else {
var735 = "(void) {";
var736 = 8;
var737 = string__NativeString__to_s_with_length(var735, var736);
var734 = var737;
varonce733 = var734;
}
var738 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var738 = array_instance Array[Object] */
var739 = 4;
var740 = NEW_array__NativeArray(var739, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var740)->values[0] = (val*) var727;
((struct instance_array__NativeArray*)var740)->values[1] = (val*) var729;
((struct instance_array__NativeArray*)var740)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var740)->values[3] = (val*) var734;
((void (*)(val*, val*, long))(var738->class->vft[COLOR_array__Array__with_native]))(var738, var740, var739) /* with_native on <var738:Array[Object]>*/;
}
var741 = ((val* (*)(val*))(var738->class->vft[COLOR_string__Object__to_s]))(var738) /* to_s on <var738:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var741) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce742) {
var743 = varonce742;
} else {
var744 = "self";
var745 = 4;
var746 = string__NativeString__to_s_with_length(var744, var745);
var743 = var746;
varonce742 = var743;
}
var747 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_named_var]))(var_v, var_mtype, var743) /* new_named_var on <var_v:SeparateCompilerVisitor>*/;
var_res748 = var747;
var749 = 1;
((void (*)(val*, short int))(var_res748->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_res748, var749) /* is_exact= on <var_res748:RuntimeVariable>*/;
if (varonce750) {
var751 = varonce750;
} else {
var752 = " = nit_alloc(sizeof(struct instance) + ";
var753 = 39;
var754 = string__NativeString__to_s_with_length(var752, var753);
var751 = var754;
varonce750 = var751;
}
var755 = ((long (*)(val*))(var_attrs->class->vft[COLOR_abstract_collection__Collection__length]))(var_attrs) /* length on <var_attrs:Array[nullable MPropDef]>*/;
if (varonce756) {
var757 = varonce756;
} else {
var758 = "*sizeof(nitattribute_t));";
var759 = 25;
var760 = string__NativeString__to_s_with_length(var758, var759);
var757 = var760;
varonce756 = var757;
}
var761 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var761 = array_instance Array[Object] */
var762 = 4;
var763 = NEW_array__NativeArray(var762, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var763)->values[0] = (val*) var_res748;
((struct instance_array__NativeArray*)var763)->values[1] = (val*) var751;
var764 = BOX_kernel__Int(var755); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var763)->values[2] = (val*) var764;
((struct instance_array__NativeArray*)var763)->values[3] = (val*) var757;
((void (*)(val*, val*, long))(var761->class->vft[COLOR_array__Array__with_native]))(var761, var763, var762) /* with_native on <var761:Array[Object]>*/;
}
var765 = ((val* (*)(val*))(var761->class->vft[COLOR_string__Object__to_s]))(var761) /* to_s on <var761:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var765) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce766) {
var767 = varonce766;
} else {
var768 = "class_";
var769 = 6;
var770 = string__NativeString__to_s_with_length(var768, var769);
var767 = var770;
varonce766 = var767;
}
var771 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var771 = array_instance Array[Object] */
var772 = 2;
var773 = NEW_array__NativeArray(var772, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var773)->values[0] = (val*) var767;
((struct instance_array__NativeArray*)var773)->values[1] = (val*) var_c_name;
((void (*)(val*, val*, long))(var771->class->vft[COLOR_array__Array__with_native]))(var771, var773, var772) /* with_native on <var771:Array[Object]>*/;
}
var774 = ((val* (*)(val*))(var771->class->vft[COLOR_string__Object__to_s]))(var771) /* to_s on <var771:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var774) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce775) {
var776 = varonce775;
} else {
var777 = "->class = &class_";
var778 = 17;
var779 = string__NativeString__to_s_with_length(var777, var778);
var776 = var779;
varonce775 = var776;
}
if (varonce780) {
var781 = varonce780;
} else {
var782 = ";";
var783 = 1;
var784 = string__NativeString__to_s_with_length(var782, var783);
var781 = var784;
varonce780 = var781;
}
var785 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var785 = array_instance Array[Object] */
var786 = 4;
var787 = NEW_array__NativeArray(var786, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var787)->values[0] = (val*) var_res748;
((struct instance_array__NativeArray*)var787)->values[1] = (val*) var776;
((struct instance_array__NativeArray*)var787)->values[2] = (val*) var_c_name;
((struct instance_array__NativeArray*)var787)->values[3] = (val*) var781;
((void (*)(val*, val*, long))(var785->class->vft[COLOR_array__Array__with_native]))(var785, var787, var786) /* with_native on <var785:Array[Object]>*/;
}
var788 = ((val* (*)(val*))(var785->class->vft[COLOR_string__Object__to_s]))(var785) /* to_s on <var785:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var788) /* add on <var_v:SeparateCompilerVisitor>*/;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__generate_init_attr]))(self, var_v, var_res748, var_mtype) /* generate_init_attr on <self:SeparateErasureCompiler>*/;
if (varonce789) {
var790 = varonce789;
} else {
var791 = "return ";
var792 = 7;
var793 = string__NativeString__to_s_with_length(var791, var792);
var790 = var793;
varonce789 = var790;
}
if (varonce794) {
var795 = varonce794;
} else {
var796 = ";";
var797 = 1;
var798 = string__NativeString__to_s_with_length(var796, var797);
var795 = var798;
varonce794 = var795;
}
var799 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var799 = array_instance Array[Object] */
var800 = 3;
var801 = NEW_array__NativeArray(var800, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var801)->values[0] = (val*) var790;
((struct instance_array__NativeArray*)var801)->values[1] = (val*) var_res748;
((struct instance_array__NativeArray*)var801)->values[2] = (val*) var795;
((void (*)(val*, val*, long))(var799->class->vft[COLOR_array__Array__with_native]))(var799, var801, var800) /* with_native on <var799:Array[Object]>*/;
}
var802 = ((val* (*)(val*))(var799->class->vft[COLOR_string__Object__to_s]))(var799) /* to_s on <var799:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var802) /* add on <var_v:SeparateCompilerVisitor>*/;
if (varonce803) {
var804 = varonce803;
} else {
var805 = "}";
var806 = 1;
var807 = string__NativeString__to_s_with_length(var805, var806);
var804 = var807;
varonce803 = var804;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var804) /* add on <var_v:SeparateCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c for (self: Object, MClass) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(val* self, val* p0) {
separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(self, p0);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table for (self: SeparateErasureCompiler, MClass): Bool */
short int separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
val* var29 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
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
val* var41 /* : Array[Object] */;
long var42 /* : Int */;
val* var43 /* : NativeArray[Object] */;
val* var44 /* : String */;
val* var45 /* : nullable Layout[MVirtualTypeProp] */;
short int var46 /* : Bool */;
int cltype;
int idtype;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var58 /* : nullable Object */;
val* var59 /* : Iterator[nullable Object] */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
val* var_vt /* var vt: nullable MPropDef */;
val* var62 /* : null */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
long var69 /* : Int */;
long var_is_null /* var is_null: Int */;
val* var70 /* : MClassDef */;
val* var71 /* : MClassType */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name;
val* var75 /* : nullable MType */;
val* var76 /* : MType */;
val* var_bound /* var bound: MType */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
val* var80 /* : MClassDef */;
val* var81 /* : MClassType */;
val* var82 /* : MType */;
val* var83 /* : MType */;
long var84 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
val* var89 /* : MClass */;
val* var_vtclass /* var vtclass: MClass */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : Array[Object] */;
long var97 /* : Int */;
val* var98 /* : NativeArray[Object] */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
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
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : Object */;
val* var125 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
short int var137 /* : Bool */;
var_mclass = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_tables]))(self) /* vt_tables on <self:SeparateErasureCompiler>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var1, var_mclass) /* [] on <var1:Map[MClass, Array[nullable MPropDef]]>*/;
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var2) /* is_empty on <var2:nullable Object(Array[nullable MPropDef])>*/;
if (var3){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
if (varonce) {
var5 = varonce;
} else {
var6 = "vts_table_";
var7 = 10;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass) /* c_name on <var_mclass:MClass>*/;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 2;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var9;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "extern const struct vts_table vts_table_";
var17 = 40;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass) /* c_name on <var_mclass:MClass>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = ";";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var15;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var19;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(self, var13, var28) /* provide_declaration on <self:SeparateErasureCompiler>*/;
var29 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(self) /* new_visitor on <self:SeparateErasureCompiler>*/;
var_v = var29;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "const struct vts_table vts_table_";
var33 = 33;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass) /* c_name on <var_mclass:MClass>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = " = {";
var39 = 4;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var41 = array_instance Array[Object] */
var42 = 3;
var43 = NEW_array__NativeArray(var42, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var43)->values[0] = (val*) var31;
((struct instance_array__NativeArray*)var43)->values[1] = (val*) var35;
((struct instance_array__NativeArray*)var43)->values[2] = (val*) var37;
((void (*)(val*, val*, long))(var41->class->vft[COLOR_array__Array__with_native]))(var41, var43, var42) /* with_native on <var41:Array[Object]>*/;
}
var44 = ((val* (*)(val*))(var41->class->vft[COLOR_string__Object__to_s]))(var41) /* to_s on <var41:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var44) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var45 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_layout]))(self) /* vt_layout on <self:SeparateErasureCompiler>*/;
/* <var45:nullable Layout[MVirtualTypeProp]> isa PHLayout[MClass, MVirtualTypeProp] */
cltype = type_layout_builders__PHLayoutmodel__MClassmodel__MVirtualTypeProp.color;
idtype = type_layout_builders__PHLayoutmodel__MClassmodel__MVirtualTypeProp.id;
if(var45 == NULL) {
var46 = 0;
} else {
if(cltype >= var45->type->table_size) {
var46 = 0;
} else {
var46 = var45->type->type_table[cltype] == idtype;
}
}
if (var46){
} else {
if (varonce47) {
var48 = varonce47;
} else {
var49 = "0, /* dummy */";
var50 = 14;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var48) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "{";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var53) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var57 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_tables]))(self) /* vt_tables on <self:SeparateErasureCompiler>*/;
var58 = ((val* (*)(val*, val*))(var57->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var57, var_mclass) /* [] on <var57:Map[MClass, Array[nullable MPropDef]]>*/;
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_abstract_collection__Collection__iterator]))(var58) /* iterator on <var58:nullable Object(Array[nullable MPropDef])>*/;
for(;;) {
var60 = ((short int (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var59) /* is_ok on <var59:Iterator[nullable Object]>*/;
if(!var60) break;
var61 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__item]))(var59) /* item on <var59:Iterator[nullable Object]>*/;
var_vt = var61;
var62 = NULL;
if (var_vt == NULL) {
var63 = 1; /* is null */
} else {
var63 = 0; /* arg is null but recv is not */
}
if (var63){
if (varonce64) {
var65 = varonce64;
} else {
var66 = "{-1, NULL}, /* empty */";
var67 = 23;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var65) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
} else {
var69 = 0;
var_is_null = var69;
var70 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:MClass>*/;
var71 = ((val* (*)(val*))(var70->class->vft[COLOR_model__MClassDef__bound_mtype]))(var70) /* bound_mtype on <var70:MClassDef>*/;
/* <var_vt:nullable MPropDef(MPropDef)> isa MVirtualTypeDef */
cltype73 = type_model__MVirtualTypeDef.color;
idtype74 = type_model__MVirtualTypeDef.id;
if(cltype73 >= var_vt->type->table_size) {
var72 = 0;
} else {
var72 = var_vt->type->type_table[cltype73] == idtype74;
}
if (!var72) {
var_class_name = var_vt == NULL ? "null" : var_vt->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MVirtualTypeDef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 358);
show_backtrace(1);
}
var75 = ((val* (*)(val*))(var_vt->class->vft[COLOR_model__MVirtualTypeDef__bound]))(var_vt) /* bound on <var_vt:MPropDef(MVirtualTypeDef)>*/;
var76 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound]))(self, var71, var75) /* retrieve_vt_bound on <self:SeparateErasureCompiler>*/;
var_bound = var76;
for(;;) {
/* <var_bound:MType> isa MNullableType */
cltype78 = type_model__MNullableType.color;
idtype79 = type_model__MNullableType.id;
if(cltype78 >= var_bound->type->table_size) {
var77 = 0;
} else {
var77 = var_bound->type->type_table[cltype78] == idtype79;
}
if (!var77) break;
var80 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:MClass>*/;
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_model__MClassDef__bound_mtype]))(var80) /* bound_mtype on <var80:MClassDef>*/;
var82 = ((val* (*)(val*))(var_bound->class->vft[COLOR_model__MNullableType__mtype]))(var_bound) /* mtype on <var_bound:MType(MNullableType)>*/;
var83 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound]))(self, var81, var82) /* retrieve_vt_bound on <self:SeparateErasureCompiler>*/;
var_bound = var83;
var84 = 1;
var_is_null = var84;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
/* <var_bound:MType> isa MClassType */
cltype86 = type_model__MClassType.color;
idtype87 = type_model__MClassType.id;
if(cltype86 >= var_bound->type->table_size) {
var85 = 0;
} else {
var85 = var_bound->type->type_table[cltype86] == idtype87;
}
if (!var85) {
var_class_name88 = var_bound == NULL ? "null" : var_bound->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name88);
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 363);
show_backtrace(1);
}
var89 = ((val* (*)(val*))(var_bound->class->vft[COLOR_model__MClassType__mclass]))(var_bound) /* mclass on <var_bound:MType(MClassType)>*/;
var_vtclass = var89;
if (varonce90) {
var91 = varonce90;
} else {
var92 = "class_";
var93 = 6;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = ((val* (*)(val*))(var_vtclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_vtclass) /* c_name on <var_vtclass:MClass>*/;
var96 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var96 = array_instance Array[Object] */
var97 = 2;
var98 = NEW_array__NativeArray(var97, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var98)->values[0] = (val*) var91;
((struct instance_array__NativeArray*)var98)->values[1] = (val*) var95;
((void (*)(val*, val*, long))(var96->class->vft[COLOR_array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[Object]>*/;
}
var99 = ((val* (*)(val*))(var96->class->vft[COLOR_string__Object__to_s]))(var96) /* to_s on <var96:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(var_v, var99) /* require_declaration on <var_v:SeparateCompilerVisitor>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = "{";
var103 = 1;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = ", &class_";
var108 = 9;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = ((val* (*)(val*))(var_vtclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_vtclass) /* c_name on <var_vtclass:MClass>*/;
if (varonce111) {
var112 = varonce111;
} else {
var113 = "}, /* ";
var114 = 6;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = " */";
var119 = 3;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 7;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var101;
var124 = BOX_kernel__Int(var_is_null); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var124;
((struct instance_array__NativeArray*)var123)->values[2] = (val*) var106;
((struct instance_array__NativeArray*)var123)->values[3] = (val*) var110;
((struct instance_array__NativeArray*)var123)->values[4] = (val*) var112;
((struct instance_array__NativeArray*)var123)->values[5] = (val*) var_vt;
((struct instance_array__NativeArray*)var123)->values[6] = (val*) var117;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
var125 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var125) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
}
CONTINUE_label126: (void)0;
((void (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__next]))(var59) /* next on <var59:Iterator[nullable Object]>*/;
}
BREAK_label126: (void)0;
if (varonce127) {
var128 = varonce127;
} else {
var129 = "},";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var128) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "};";
var135 = 2;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var133) /* add_decl on <var_v:SeparateCompilerVisitor>*/;
var137 = 1;
var = var137;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table for (self: Object, MClass): Bool */
short int VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound for (self: SeparateErasureCompiler, MClassType, nullable MType): MType */
val* separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_anchor /* var anchor: MClassType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : null */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : MModule */;
val* var9 /* : MType */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : MModule */;
val* var14 /* : MType */;
var_anchor = p0;
var_mtype = p1;
var1 = NULL;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "NOT YET IMPLEMENTED: retrieve_vt_bound on null";
var5 = 46;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var3) /* print on <self:SeparateErasureCompiler>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 376);
show_backtrace(1);
} else {
}
/* <var_mtype:nullable MType(MType)> isa MVirtualType */
cltype = type_model__MVirtualType.color;
idtype = type_model__MVirtualType.id;
if(cltype >= var_mtype->type->table_size) {
var7 = 0;
} else {
var7 = var_mtype->type->type_table[cltype] == idtype;
}
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var9 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var8, var_anchor) /* anchor_to on <var_mtype:nullable MType(MVirtualType)>*/;
var = var9;
goto RET_LABEL;
} else {
/* <var_mtype:nullable MType(MType)> isa MParameterType */
cltype11 = type_model__MParameterType.color;
idtype12 = type_model__MParameterType.id;
if(cltype11 >= var_mtype->type->table_size) {
var10 = 0;
} else {
var10 = var_mtype->type->type_table[cltype11] == idtype12;
}
if (var10){
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(self) /* mainmodule on <self:SeparateErasureCompiler>*/;
var14 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var13, var_anchor) /* anchor_to on <var_mtype:nullable MType(MParameterType)>*/;
var = var14;
goto RET_LABEL;
} else {
var = var_mtype;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound for (self: Object, MClassType, nullable MType): MType */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#new_visitor for (self: SeparateErasureCompiler): SeparateCompilerVisitor */
val* separate_erasure_compiler__SeparateErasureCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateErasureCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_separate_erasure_compiler__SeparateErasureCompilerVisitor(&type_separate_erasure_compiler__SeparateErasureCompilerVisitor);
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init]))(var1, self) /* init on <var1:SeparateErasureCompilerVisitor>*/;
/* <var1:SeparateErasureCompilerVisitor> isa VISITOR */
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
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 387);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#new_visitor for (self: Object): AbstractCompilerVisitor */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__new_visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__new_visitor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MClass]] */
val* separate_erasure_compiler__SeparateErasureCompiler__class_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dclass_tables].val; /* @class_tables on <self:SeparateErasureCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @class_tables");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 391);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables for (self: Object): Map[MClass, Array[nullable MClass]] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MClass]] */;
val* var1 /* : Map[MClass, Array[nullable MClass]] */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__class_tables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MClass]]) */
void separate_erasure_compiler__SeparateErasureCompiler__class_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dclass_tables].val = p0; /* @class_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#class_tables= for (self: Object, Map[MClass, Array[nullable MClass]]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_tables_61d(val* self, val* p0) {
separate_erasure_compiler__SeparateErasureCompiler__class_tables_61d(self, p0);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables for (self: SeparateErasureCompiler): Map[MClass, Array[nullable MPropDef]] */
val* separate_erasure_compiler__SeparateErasureCompiler__vt_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dvt_tables].val; /* @vt_tables on <self:SeparateErasureCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @vt_tables");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 392);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables for (self: Object): Map[MClass, Array[nullable MPropDef]] */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = separate_erasure_compiler__SeparateErasureCompiler__vt_tables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables= for (self: SeparateErasureCompiler, Map[MClass, Array[nullable MPropDef]]) */
void separate_erasure_compiler__SeparateErasureCompiler__vt_tables_61d(val* self, val* p0) {
self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dvt_tables].val = p0; /* @vt_tables on <self:SeparateErasureCompiler> */
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#vt_tables= for (self: Object, Map[MClass, Array[nullable MPropDef]]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_tables_61d(val* self, val* p0) {
separate_erasure_compiler__SeparateErasureCompiler__vt_tables_61d(self, p0);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#display_sizes for (self: SeparateErasureCompiler) */
void separate_erasure_compiler__SeparateErasureCompiler__display_sizes(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
long var9 /* : Int */;
long var_total /* var total: Int */;
long var10 /* : Int */;
long var_holes /* var holes: Int */;
val* var11 /* : Map[MClass, Array[nullable MClass]] */;
val* var12 /* : MapIterator[Object, nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : Object */;
val* var_t /* var t: MClass */;
val* var15 /* : nullable Object */;
val* var_table /* var table: Array[nullable MClass] */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_e /* var e: nullable MClass */;
val* var23 /* : null */;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : Object */;
val* var44 /* : Object */;
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
long var56 /* : Int */;
long var57 /* : Int */;
val* var58 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var59 /* : MapIterator[Object, nullable Object] */;
short int var60 /* : Bool */;
val* var61 /* : Object */;
val* var_t62 /* var t: MClass */;
val* var63 /* : nullable Object */;
val* var_table64 /* var table: Array[nullable MPropDef] */;
long var65 /* : Int */;
long var66 /* : Int */;
long var68 /* : Int */;
val* var69 /* : Iterator[nullable Object] */;
short int var70 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_e72 /* var e: nullable MPropDef */;
val* var73 /* : null */;
short int var74 /* : Bool */;
long var75 /* : Int */;
long var76 /* : Int */;
long var78 /* : Int */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : Object */;
val* var95 /* : Object */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
long var107 /* : Int */;
long var108 /* : Int */;
val* var109 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var110 /* : MapIterator[Object, nullable Object] */;
short int var111 /* : Bool */;
val* var112 /* : Object */;
val* var_t113 /* var t: MClass */;
val* var114 /* : nullable Object */;
val* var_table115 /* var table: Array[nullable MPropDef] */;
long var116 /* : Int */;
long var117 /* : Int */;
long var119 /* : Int */;
val* var120 /* : Iterator[nullable Object] */;
short int var121 /* : Bool */;
val* var122 /* : nullable Object */;
val* var_e123 /* var e: nullable MPropDef */;
val* var124 /* : null */;
short int var125 /* : Bool */;
long var126 /* : Int */;
long var127 /* : Int */;
long var129 /* : Int */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[Object] */;
val* var145 /* : Object */;
val* var146 /* : Object */;
val* var147 /* : String */;
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
long var158 /* : Int */;
long var159 /* : Int */;
val* var160 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var161 /* : MapIterator[Object, nullable Object] */;
short int var162 /* : Bool */;
val* var163 /* : Object */;
val* var_t164 /* var t: MClass */;
val* var165 /* : nullable Object */;
val* var_table166 /* var table: Array[nullable MPropDef] */;
long var167 /* : Int */;
long var168 /* : Int */;
long var170 /* : Int */;
val* var171 /* : Iterator[nullable Object] */;
short int var172 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_e174 /* var e: nullable MPropDef */;
val* var175 /* : null */;
short int var176 /* : Bool */;
long var177 /* : Int */;
long var178 /* : Int */;
long var180 /* : Int */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
val* var193 /* : Array[Object] */;
long var194 /* : Int */;
val* var195 /* : NativeArray[Object] */;
val* var196 /* : Object */;
val* var197 /* : Object */;
val* var198 /* : String */;
if (varonce) {
var = varonce;
} else {
var1 = "# size of subtyping tables";
var2 = 26;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var) /* print on <self:SeparateErasureCompiler>*/;
if (varonce4) {
var5 = varonce4;
} else {
var6 = "\11total \11holes";
var7 = 13;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce4 = var5;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var5) /* print on <self:SeparateErasureCompiler>*/;
var9 = 0;
var_total = var9;
var10 = 0;
var_holes = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_tables]))(self) /* class_tables on <self:SeparateErasureCompiler>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var11) /* iterator on <var11:Map[MClass, Array[nullable MClass]]>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var12) /* is_ok on <var12:MapIterator[Object, nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__MapIterator__key]))(var12) /* key on <var12:MapIterator[Object, nullable Object]>*/;
var_t = var14;
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__MapIterator__item]))(var12) /* item on <var12:MapIterator[Object, nullable Object]>*/;
var_table = var15;
var16 = ((long (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__length]))(var_table) /* length on <var_table:Array[nullable MClass]>*/;
{ /* Inline kernel#Int#+ (var_total,var16) */
var19 = var_total + var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_total = var17;
var20 = ((val* (*)(val*))(var_table->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_table) /* iterator on <var_table:Array[nullable MClass]>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var_e = var22;
var23 = NULL;
if (var_e == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (var24){
var25 = 1;
{ /* Inline kernel#Int#+ (var_holes,var25) */
var28 = var_holes + var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_holes = var26;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label29: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__MapIterator__next]))(var12) /* next on <var12:MapIterator[Object, nullable Object]>*/;
}
BREAK_label29: (void)0;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "\11";
var33 = 1;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "\11";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 4;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var31;
var43 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var43;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var36;
var44 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var42)->values[3] = (val*) var44;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
var45 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var45) /* print on <self:SeparateErasureCompiler>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "# size of resolution tables";
var49 = 27;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var47) /* print on <self:SeparateErasureCompiler>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "\11total \11holes";
var54 = 13;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var52) /* print on <self:SeparateErasureCompiler>*/;
var56 = 0;
var_total = var56;
var57 = 0;
var_holes = var57;
var58 = ((val* (*)(val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_tables]))(self) /* vt_tables on <self:SeparateErasureCompiler>*/;
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var58) /* iterator on <var58:Map[MClass, Array[nullable MPropDef]]>*/;
for(;;) {
var60 = ((short int (*)(val*))(var59->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var59) /* is_ok on <var59:MapIterator[Object, nullable Object]>*/;
if(!var60) break;
var61 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__MapIterator__key]))(var59) /* key on <var59:MapIterator[Object, nullable Object]>*/;
var_t62 = var61;
var63 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__MapIterator__item]))(var59) /* item on <var59:MapIterator[Object, nullable Object]>*/;
var_table64 = var63;
var65 = ((long (*)(val*))(var_table64->class->vft[COLOR_abstract_collection__Collection__length]))(var_table64) /* length on <var_table64:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#+ (var_total,var65) */
var68 = var_total + var65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var_total = var66;
var69 = ((val* (*)(val*))(var_table64->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_table64) /* iterator on <var_table64:Array[nullable MPropDef]>*/;
for(;;) {
var70 = ((short int (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var69) /* is_ok on <var69:Iterator[nullable Object]>*/;
if(!var70) break;
var71 = ((val* (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__item]))(var69) /* item on <var69:Iterator[nullable Object]>*/;
var_e72 = var71;
var73 = NULL;
if (var_e72 == NULL) {
var74 = 1; /* is null */
} else {
var74 = 0; /* arg is null but recv is not */
}
if (var74){
var75 = 1;
{ /* Inline kernel#Int#+ (var_holes,var75) */
var78 = var_holes + var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var_holes = var76;
} else {
}
CONTINUE_label79: (void)0;
((void (*)(val*))(var69->class->vft[COLOR_abstract_collection__Iterator__next]))(var69) /* next on <var69:Iterator[nullable Object]>*/;
}
BREAK_label79: (void)0;
CONTINUE_label80: (void)0;
((void (*)(val*))(var59->class->vft[COLOR_abstract_collection__MapIterator__next]))(var59) /* next on <var59:MapIterator[Object, nullable Object]>*/;
}
BREAK_label80: (void)0;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "\11";
var84 = 1;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "\11";
var89 = 1;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 4;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var82;
var94 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var94;
((struct instance_array__NativeArray*)var93)->values[2] = (val*) var87;
var95 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var93)->values[3] = (val*) var95;
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
var96 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var96) /* print on <self:SeparateErasureCompiler>*/;
if (varonce97) {
var98 = varonce97;
} else {
var99 = "# size of methods tables";
var100 = 24;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var98) /* print on <self:SeparateErasureCompiler>*/;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "\11total \11holes";
var105 = 13;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var103) /* print on <self:SeparateErasureCompiler>*/;
var107 = 0;
var_total = var107;
var108 = 0;
var_holes = var108;
var109 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__method_tables]))(self) /* method_tables on <self:SeparateErasureCompiler>*/;
var110 = ((val* (*)(val*))(var109->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var109) /* iterator on <var109:Map[MClass, Array[nullable MPropDef]]>*/;
for(;;) {
var111 = ((short int (*)(val*))(var110->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var110) /* is_ok on <var110:MapIterator[Object, nullable Object]>*/;
if(!var111) break;
var112 = ((val* (*)(val*))(var110->class->vft[COLOR_abstract_collection__MapIterator__key]))(var110) /* key on <var110:MapIterator[Object, nullable Object]>*/;
var_t113 = var112;
var114 = ((val* (*)(val*))(var110->class->vft[COLOR_abstract_collection__MapIterator__item]))(var110) /* item on <var110:MapIterator[Object, nullable Object]>*/;
var_table115 = var114;
var116 = ((long (*)(val*))(var_table115->class->vft[COLOR_abstract_collection__Collection__length]))(var_table115) /* length on <var_table115:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#+ (var_total,var116) */
var119 = var_total + var116;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var_total = var117;
var120 = ((val* (*)(val*))(var_table115->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_table115) /* iterator on <var_table115:Array[nullable MPropDef]>*/;
for(;;) {
var121 = ((short int (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var120) /* is_ok on <var120:Iterator[nullable Object]>*/;
if(!var121) break;
var122 = ((val* (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__item]))(var120) /* item on <var120:Iterator[nullable Object]>*/;
var_e123 = var122;
var124 = NULL;
if (var_e123 == NULL) {
var125 = 1; /* is null */
} else {
var125 = 0; /* arg is null but recv is not */
}
if (var125){
var126 = 1;
{ /* Inline kernel#Int#+ (var_holes,var126) */
var129 = var_holes + var126;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var_holes = var127;
} else {
}
CONTINUE_label130: (void)0;
((void (*)(val*))(var120->class->vft[COLOR_abstract_collection__Iterator__next]))(var120) /* next on <var120:Iterator[nullable Object]>*/;
}
BREAK_label130: (void)0;
CONTINUE_label131: (void)0;
((void (*)(val*))(var110->class->vft[COLOR_abstract_collection__MapIterator__next]))(var110) /* next on <var110:MapIterator[Object, nullable Object]>*/;
}
BREAK_label131: (void)0;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "\11";
var135 = 1;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = "\11";
var140 = 1;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var142 = array_instance Array[Object] */
var143 = 4;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var133;
var145 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var145;
((struct instance_array__NativeArray*)var144)->values[2] = (val*) var138;
var146 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var144)->values[3] = (val*) var146;
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[Object]>*/;
}
var147 = ((val* (*)(val*))(var142->class->vft[COLOR_string__Object__to_s]))(var142) /* to_s on <var142:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var147) /* print on <self:SeparateErasureCompiler>*/;
if (varonce148) {
var149 = varonce148;
} else {
var150 = "# size of attributes tables";
var151 = 27;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var149) /* print on <self:SeparateErasureCompiler>*/;
if (varonce153) {
var154 = varonce153;
} else {
var155 = "\11total \11holes";
var156 = 13;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var154) /* print on <self:SeparateErasureCompiler>*/;
var158 = 0;
var_total = var158;
var159 = 0;
var_holes = var159;
var160 = ((val* (*)(val*))(self->class->vft[COLOR_separate_compiler__SeparateCompiler__attr_tables]))(self) /* attr_tables on <self:SeparateErasureCompiler>*/;
var161 = ((val* (*)(val*))(var160->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var160) /* iterator on <var160:Map[MClass, Array[nullable MPropDef]]>*/;
for(;;) {
var162 = ((short int (*)(val*))(var161->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var161) /* is_ok on <var161:MapIterator[Object, nullable Object]>*/;
if(!var162) break;
var163 = ((val* (*)(val*))(var161->class->vft[COLOR_abstract_collection__MapIterator__key]))(var161) /* key on <var161:MapIterator[Object, nullable Object]>*/;
var_t164 = var163;
var165 = ((val* (*)(val*))(var161->class->vft[COLOR_abstract_collection__MapIterator__item]))(var161) /* item on <var161:MapIterator[Object, nullable Object]>*/;
var_table166 = var165;
var167 = ((long (*)(val*))(var_table166->class->vft[COLOR_abstract_collection__Collection__length]))(var_table166) /* length on <var_table166:Array[nullable MPropDef]>*/;
{ /* Inline kernel#Int#+ (var_total,var167) */
var170 = var_total + var167;
var168 = var170;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
var_total = var168;
var171 = ((val* (*)(val*))(var_table166->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_table166) /* iterator on <var_table166:Array[nullable MPropDef]>*/;
for(;;) {
var172 = ((short int (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var171) /* is_ok on <var171:Iterator[nullable Object]>*/;
if(!var172) break;
var173 = ((val* (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__item]))(var171) /* item on <var171:Iterator[nullable Object]>*/;
var_e174 = var173;
var175 = NULL;
if (var_e174 == NULL) {
var176 = 1; /* is null */
} else {
var176 = 0; /* arg is null but recv is not */
}
if (var176){
var177 = 1;
{ /* Inline kernel#Int#+ (var_holes,var177) */
var180 = var_holes + var177;
var178 = var180;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
var_holes = var178;
} else {
}
CONTINUE_label181: (void)0;
((void (*)(val*))(var171->class->vft[COLOR_abstract_collection__Iterator__next]))(var171) /* next on <var171:Iterator[nullable Object]>*/;
}
BREAK_label181: (void)0;
CONTINUE_label182: (void)0;
((void (*)(val*))(var161->class->vft[COLOR_abstract_collection__MapIterator__next]))(var161) /* next on <var161:MapIterator[Object, nullable Object]>*/;
}
BREAK_label182: (void)0;
if (varonce183) {
var184 = varonce183;
} else {
var185 = "\11";
var186 = 1;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = "\11";
var191 = 1;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var193 = array_instance Array[Object] */
var194 = 4;
var195 = NEW_array__NativeArray(var194, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var195)->values[0] = (val*) var184;
var196 = BOX_kernel__Int(var_total); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var195)->values[1] = (val*) var196;
((struct instance_array__NativeArray*)var195)->values[2] = (val*) var189;
var197 = BOX_kernel__Int(var_holes); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var195)->values[3] = (val*) var197;
((void (*)(val*, val*, long))(var193->class->vft[COLOR_array__Array__with_native]))(var193, var195, var194) /* with_native on <var193:Array[Object]>*/;
}
var198 = ((val* (*)(val*))(var193->class->vft[COLOR_string__Object__to_s]))(var193) /* to_s on <var193:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var198) /* print on <self:SeparateErasureCompiler>*/;
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompiler#display_sizes for (self: Object) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__display_sizes(val* self) {
separate_erasure_compiler__SeparateErasureCompiler__display_sizes(self);
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite for (self: SeparateErasureCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : AbstractCompiler */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : null */;
short int var13 /* : Bool */;
val* var14 /* : MSignature */;
val* var15 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var16 /* : null */;
short int var17 /* : Bool */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
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
val* var41 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
var_callsite = p0;
var_arguments = p1;
var1 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite]))(self, p0, p1) /* compile_callsite on <self:SeparateErasureCompilerVisitor>*/;
var_res = var1;
var3 = ((short int (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__erasure_cast]))(var_callsite) /* erasure_cast on <var_callsite:CallSite>*/;
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
/* <var4:AbstractCompiler(SeparateCompiler)> isa SeparateErasureCompiler */
cltype = type_separate_erasure_compiler__SeparateErasureCompiler.color;
idtype = type_separate_erasure_compiler__SeparateErasureCompiler.id;
if(cltype >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype] == idtype;
}
if (!var5) {
var_class_name = var4 == NULL ? "null" : var4->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateErasureCompiler", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 444);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var4) /* modelbuilder on <var4:SeparateCompiler(SeparateErasureCompiler)>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var6) /* toolcontext on <var6:ModelBuilder>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast]))(var7) /* opt_no_check_erasure_cast on <var7:ToolContext>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_opts__Option__value]))(var8) /* value on <var8:OptionBool>*/;
var10 = ((struct instance_kernel__Bool*)var9)->value; /* autounbox from nullable Object to Bool */;
var11 = !var10;
var2 = var11;
} else {
var2 = var_;
}
if (var2){
var12 = NULL;
if (var_res == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 445);
show_backtrace(1);
}
var14 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__msignature]))(var_callsite) /* msignature on <var_callsite:CallSite>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_model__MSignature__return_mtype]))(var14) /* return_mtype on <var14:MSignature>*/;
var_mtype = var15;
var16 = NULL;
if (var_mtype == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 447);
show_backtrace(1);
}
if (varonce) {
var18 = varonce;
} else {
var19 = "/* Erasure cast for return ";
var20 = 27;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " isa ";
var25 = 5;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
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
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "erasure";
var39 = 7;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_res, var_mtype, var37) /* type_test on <self:SeparateErasureCompilerVisitor>*/;
var_cond = var41;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "if (!";
var45 = 5;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = ") {";
var50 = 3;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 3;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var48;
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var55) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce56) {
var57 = varonce56;
} else {
var58 = "Cast failed";
var59 = 11;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_abort]))(self, var57) /* add_abort on <self:SeparateErasureCompilerVisitor>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "}";
var64 = 1;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var62) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite for (self: Object, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance for (self: SeparateErasureCompilerVisitor, MClassType): RuntimeVariable */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : MClass */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
val* var27 /* : RuntimeVariable */;
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
var5 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var5) /* c_name on <var5:MClass>*/;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var6;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var10) /* require_declaration on <self:SeparateErasureCompilerVisitor>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "NEW_";
var14 = 4;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var16) /* c_name on <var16:MClass>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "()";
var21 = 2;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 3;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) var17;
((struct instance_array__NativeArray*)var25)->values[2] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var26, var_mtype) /* new_expr on <self:SeparateErasureCompilerVisitor>*/;
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance for (self: Object, MClassType): RuntimeVariable */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test for (self: SeparateErasureCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : String */;
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
val* var20 /* : MClassType */;
val* var21 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var_cltype /* var cltype: String */;
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
val* var47 /* : String */;
val* var_idtype /* var idtype: String */;
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
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
short int var62 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var_accept_null /* var accept_null: String */;
short int var68 /* : Bool */;
int cltype;
int idtype;
val* var69 /* : MType */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
val* var78 /* : nullable Frame */;
val* var79 /* : MPropDef */;
val* var80 /* : MClassDef */;
val* var81 /* : MClassType */;
val* var82 /* : nullable Frame */;
val* var83 /* : MPropDef */;
val* var84 /* : MClassDef */;
val* var85 /* : MClassType */;
val* var86 /* : nullable Frame */;
val* var87 /* : MPropDef */;
val* var88 /* : MClassDef */;
val* var89 /* : MModule */;
short int var90 /* : Bool */;
val* var91 /* : MType */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
val* var95 /* : MType */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : MType */;
val* var102 /* : nullable Frame */;
val* var103 /* : MPropDef */;
val* var104 /* : MClassDef */;
val* var105 /* : MModule */;
val* var106 /* : nullable Frame */;
val* var107 /* : MPropDef */;
val* var108 /* : MClassDef */;
val* var109 /* : MClassType */;
short int var110 /* : Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : String */;
val* var127 /* : Array[Object] */;
long var128 /* : Int */;
val* var129 /* : NativeArray[Object] */;
val* var130 /* : String */;
val* var131 /* : AbstractCompiler */;
val* var132 /* : ModelBuilder */;
val* var133 /* : ToolContext */;
val* var134 /* : OptionBool */;
val* var135 /* : nullable Object */;
short int var136 /* : Bool */;
val* var137 /* : AbstractCompiler */;
val* var138 /* : HashMap[String, Int] */;
val* var_ /* var : HashMap[String, Int] */;
val* var_139 /* var : String */;
val* var140 /* : nullable Object */;
long var141 /* : Int */;
long var142 /* : Int */;
long var144 /* : Int */;
long var145 /* : Int */;
val* var146 /* : nullable Object */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : Array[Object] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[Object] */;
val* var160 /* : String */;
val* var161 /* : MType */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
short int var168 /* : Bool */;
val* var169 /* : Array[Object] */;
long var170 /* : Int */;
val* var_171 /* var : Array[Object] */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
long var175 /* : Int */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : String */;
val* var182 /* : String */;
val* var_class_ptr /* var class_ptr: nullable Object */;
val* var183 /* : MType */;
short int var184 /* : Bool */;
int cltype185;
int idtype186;
const char* var_class_name;
val* var187 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
val* var193 /* : String */;
val* var194 /* : Array[Object] */;
long var195 /* : Int */;
val* var196 /* : NativeArray[Object] */;
val* var197 /* : String */;
val* var198 /* : Array[Object] */;
long var199 /* : Int */;
val* var_200 /* var : Array[Object] */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : NativeString */;
long var204 /* : Int */;
val* var205 /* : String */;
val* var206 /* : String */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : String */;
val* var212 /* : String */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : String */;
val* var221 /* : MClass */;
val* var222 /* : String */;
val* var223 /* : Array[Object] */;
long var224 /* : Int */;
val* var225 /* : NativeArray[Object] */;
val* var226 /* : String */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : NativeString */;
long var230 /* : Int */;
val* var231 /* : String */;
val* var232 /* : MClass */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : String */;
val* var239 /* : Array[Object] */;
long var240 /* : Int */;
val* var241 /* : NativeArray[Object] */;
val* var242 /* : String */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : String */;
val* var248 /* : MClass */;
val* var249 /* : String */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : String */;
val* var255 /* : Array[Object] */;
long var256 /* : Int */;
val* var257 /* : NativeArray[Object] */;
val* var258 /* : String */;
val* var259 /* : AbstractCompiler */;
val* var260 /* : ModelBuilder */;
val* var261 /* : ToolContext */;
val* var262 /* : OptionBool */;
val* var263 /* : nullable Object */;
short int var264 /* : Bool */;
val* var265 /* : AbstractCompiler */;
val* var266 /* : HashMap[String, Int] */;
val* var_267 /* var : HashMap[String, Int] */;
val* var_268 /* var : String */;
val* var269 /* : nullable Object */;
long var270 /* : Int */;
long var271 /* : Int */;
long var273 /* : Int */;
long var274 /* : Int */;
val* var275 /* : nullable Object */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : String */;
val* var286 /* : Array[Object] */;
long var287 /* : Int */;
val* var288 /* : NativeArray[Object] */;
val* var289 /* : String */;
short int var290 /* : Bool */;
int cltype291;
int idtype292;
val* var293 /* : nullable Frame */;
val* var294 /* : Array[RuntimeVariable] */;
val* var295 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var296 /* : MType */;
val* var297 /* : String */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : String */;
short int var303 /* : Bool */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
long var307 /* : Int */;
val* var308 /* : String */;
val* var309 /* : Array[Object] */;
long var310 /* : Int */;
val* var311 /* : NativeArray[Object] */;
val* var312 /* : String */;
val* var_recv_ptr /* var recv_ptr: nullable Object */;
val* var313 /* : MType */;
short int var314 /* : Bool */;
int cltype315;
int idtype316;
const char* var_class_name317;
val* var318 /* : MClass */;
val* var_mclass319 /* var mclass: MClass */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : NativeString */;
long var323 /* : Int */;
val* var324 /* : String */;
val* var325 /* : String */;
val* var326 /* : Array[Object] */;
long var327 /* : Int */;
val* var328 /* : NativeArray[Object] */;
val* var329 /* : String */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
long var333 /* : Int */;
val* var334 /* : String */;
val* var335 /* : String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : String */;
val* var341 /* : Array[Object] */;
long var342 /* : Int */;
val* var343 /* : NativeArray[Object] */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : String */;
val* var350 /* : String */;
val* var_entry /* var entry: String */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
long var354 /* : Int */;
val* var355 /* : String */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
long var359 /* : Int */;
val* var360 /* : String */;
val* var361 /* : Array[Object] */;
long var362 /* : Int */;
val* var363 /* : NativeArray[Object] */;
val* var364 /* : String */;
val* var365 /* : MProperty */;
val* var366 /* : String */;
val* var367 /* : AbstractCompiler */;
short int var368 /* : Bool */;
int cltype369;
int idtype370;
const char* var_class_name371;
val* var372 /* : nullable Layout[MVirtualTypeProp] */;
short int var373 /* : Bool */;
int cltype374;
int idtype375;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
long var379 /* : Int */;
val* var380 /* : String */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : NativeString */;
long var384 /* : Int */;
val* var385 /* : String */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : String */;
val* var391 /* : MProperty */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
long var396 /* : Int */;
val* var397 /* : String */;
val* var398 /* : Array[Object] */;
long var399 /* : Int */;
val* var400 /* : NativeArray[Object] */;
val* var401 /* : String */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
long var405 /* : Int */;
val* var406 /* : String */;
static val* varonce407;
val* var408 /* : String */;
char* var409 /* : NativeString */;
long var410 /* : Int */;
val* var411 /* : String */;
val* var412 /* : MProperty */;
val* var413 /* : String */;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : NativeString */;
long var417 /* : Int */;
val* var418 /* : String */;
val* var419 /* : Array[Object] */;
long var420 /* : Int */;
val* var421 /* : NativeArray[Object] */;
val* var422 /* : String */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
long var426 /* : Int */;
val* var427 /* : String */;
static val* varonce428;
val* var429 /* : String */;
char* var430 /* : NativeString */;
long var431 /* : Int */;
val* var432 /* : String */;
val* var433 /* : Array[Object] */;
long var434 /* : Int */;
val* var435 /* : NativeArray[Object] */;
val* var436 /* : String */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : NativeString */;
long var440 /* : Int */;
val* var441 /* : String */;
static val* varonce442;
val* var443 /* : String */;
char* var444 /* : NativeString */;
long var445 /* : Int */;
val* var446 /* : String */;
val* var447 /* : Array[Object] */;
long var448 /* : Int */;
val* var449 /* : NativeArray[Object] */;
val* var450 /* : String */;
short int var451 /* : Bool */;
short int var_452 /* var : Bool */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : NativeString */;
long var456 /* : Int */;
val* var457 /* : String */;
short int var458 /* : Bool */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
long var462 /* : Int */;
val* var463 /* : String */;
val* var464 /* : String */;
val* var_is_nullable /* var is_nullable: String */;
static val* varonce465;
val* var466 /* : String */;
char* var467 /* : NativeString */;
long var468 /* : Int */;
val* var469 /* : String */;
static val* varonce470;
val* var471 /* : String */;
char* var472 /* : NativeString */;
long var473 /* : Int */;
val* var474 /* : String */;
val* var475 /* : Array[Object] */;
long var476 /* : Int */;
val* var477 /* : NativeArray[Object] */;
val* var478 /* : String */;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : NativeString */;
long var482 /* : Int */;
val* var483 /* : String */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : NativeString */;
long var487 /* : Int */;
val* var488 /* : String */;
val* var489 /* : Array[Object] */;
long var490 /* : Int */;
val* var491 /* : NativeArray[Object] */;
val* var492 /* : String */;
val* var493 /* : String */;
val* var494 /* : AbstractCompiler */;
val* var495 /* : ModelBuilder */;
val* var496 /* : ToolContext */;
val* var497 /* : OptionBool */;
val* var498 /* : nullable Object */;
short int var499 /* : Bool */;
val* var500 /* : AbstractCompiler */;
val* var501 /* : HashMap[String, Int] */;
val* var_502 /* var : HashMap[String, Int] */;
val* var_503 /* var : String */;
val* var504 /* : nullable Object */;
long var505 /* : Int */;
long var506 /* : Int */;
long var508 /* : Int */;
long var509 /* : Int */;
val* var510 /* : nullable Object */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
long var514 /* : Int */;
val* var515 /* : String */;
static val* varonce516;
val* var517 /* : String */;
char* var518 /* : NativeString */;
long var519 /* : Int */;
val* var520 /* : String */;
val* var521 /* : Array[Object] */;
long var522 /* : Int */;
val* var523 /* : NativeArray[Object] */;
val* var524 /* : String */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
long var528 /* : Int */;
val* var529 /* : String */;
val* var530 /* : String */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
long var534 /* : Int */;
val* var535 /* : String */;
static val* varonce536;
val* var537 /* : String */;
char* var538 /* : NativeString */;
long var539 /* : Int */;
val* var540 /* : String */;
val* var541 /* : Array[Object] */;
long var542 /* : Int */;
val* var543 /* : NativeArray[Object] */;
val* var544 /* : String */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : NativeString */;
long var548 /* : Int */;
val* var549 /* : String */;
static val* varonce550;
val* var551 /* : String */;
char* var552 /* : NativeString */;
long var553 /* : Int */;
val* var554 /* : String */;
val* var555 /* : Array[Object] */;
long var556 /* : Int */;
val* var557 /* : NativeArray[Object] */;
val* var558 /* : String */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : NativeString */;
long var562 /* : Int */;
val* var563 /* : String */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : NativeString */;
long var567 /* : Int */;
val* var568 /* : String */;
val* var569 /* : Array[Object] */;
long var570 /* : Int */;
val* var571 /* : NativeArray[Object] */;
val* var572 /* : String */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
long var576 /* : Int */;
val* var577 /* : String */;
val* var578 /* : AbstractCompiler */;
short int var579 /* : Bool */;
int cltype580;
int idtype581;
const char* var_class_name582;
val* var583 /* : nullable Layout[MClass] */;
short int var584 /* : Bool */;
int cltype585;
int idtype586;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
long var590 /* : Int */;
val* var591 /* : String */;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : NativeString */;
long var595 /* : Int */;
val* var596 /* : String */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
long var600 /* : Int */;
val* var601 /* : String */;
val* var602 /* : Array[Object] */;
long var603 /* : Int */;
val* var604 /* : NativeArray[Object] */;
val* var605 /* : String */;
static val* varonce606;
val* var607 /* : String */;
char* var608 /* : NativeString */;
long var609 /* : Int */;
val* var610 /* : String */;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : NativeString */;
long var614 /* : Int */;
val* var615 /* : String */;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : NativeString */;
long var619 /* : Int */;
val* var620 /* : String */;
val* var621 /* : Array[Object] */;
long var622 /* : Int */;
val* var623 /* : NativeArray[Object] */;
val* var624 /* : String */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
long var628 /* : Int */;
val* var629 /* : String */;
val* var630 /* : Array[Object] */;
long var631 /* : Int */;
val* var632 /* : NativeArray[Object] */;
val* var633 /* : String */;
static val* varonce634;
val* var635 /* : String */;
char* var636 /* : NativeString */;
long var637 /* : Int */;
val* var638 /* : String */;
static val* varonce639;
val* var640 /* : String */;
char* var641 /* : NativeString */;
long var642 /* : Int */;
val* var643 /* : String */;
static val* varonce644;
val* var645 /* : String */;
char* var646 /* : NativeString */;
long var647 /* : Int */;
val* var648 /* : String */;
static val* varonce649;
val* var650 /* : String */;
char* var651 /* : NativeString */;
long var652 /* : Int */;
val* var653 /* : String */;
static val* varonce654;
val* var655 /* : String */;
char* var656 /* : NativeString */;
long var657 /* : Int */;
val* var658 /* : String */;
val* var659 /* : Array[Object] */;
long var660 /* : Int */;
val* var661 /* : NativeArray[Object] */;
val* var662 /* : String */;
static val* varonce663;
val* var664 /* : String */;
char* var665 /* : NativeString */;
long var666 /* : Int */;
val* var667 /* : String */;
static val* varonce668;
val* var669 /* : String */;
char* var670 /* : NativeString */;
long var671 /* : Int */;
val* var672 /* : String */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
if (varonce) {
var1 = varonce;
} else {
var2 = "/* type test for ";
var3 = 17;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__inspect]))(var_value) /* inspect on <var_value:RuntimeVariable>*/;
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
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var19) /* add on <self:SeparateErasureCompilerVisitor>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:SeparateErasureCompilerVisitor>*/;
var21 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var20) /* new_var on <self:SeparateErasureCompilerVisitor>*/;
var_res = var21;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "cltype";
var25 = 6;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var23) /* get_name on <self:SeparateErasureCompilerVisitor>*/;
var_cltype = var27;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "int ";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = ";";
var36 = 1;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var41) /* add_decl on <self:SeparateErasureCompilerVisitor>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "idtype";
var45 = 6;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var43) /* get_name on <self:SeparateErasureCompilerVisitor>*/;
var_idtype = var47;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "int ";
var51 = 4;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ";";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_idtype;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var61) /* add_decl on <self:SeparateErasureCompilerVisitor>*/;
var62 = ((short int (*)(val*, val*))(self->class->vft[COLOR_separate_compiler__SeparateCompilerVisitor__maybe_null]))(self, var_value) /* maybe_null on <self:SeparateErasureCompilerVisitor>*/;
var_maybe_null = var62;
if (varonce63) {
var64 = varonce63;
} else {
var65 = "0";
var66 = 1;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var_accept_null = var64;
/* <var_mtype:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var68 = 0;
} else {
var68 = var_mtype->type->type_table[cltype] == idtype;
}
if (var68){
var69 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var_mtype = var69;
if (varonce70) {
var71 = varonce70;
} else {
var72 = "1";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var_accept_null = var71;
} else {
}
/* <var_mtype:MType> isa MParameterType */
cltype76 = type_model__MParameterType.color;
idtype77 = type_model__MParameterType.id;
if(cltype76 >= var_mtype->type->table_size) {
var75 = 0;
} else {
var75 = var_mtype->type->type_table[cltype76] == idtype77;
}
if (var75){
var78 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateErasureCompilerVisitor>*/;
if (var78 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 485);
show_backtrace(1);
} else {
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var78) /* mpropdef on <var78:nullable Frame>*/;
}
var80 = ((val* (*)(val*))(var79->class->vft[COLOR_model__MPropDef__mclassdef]))(var79) /* mclassdef on <var79:MPropDef>*/;
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_model__MClassDef__bound_mtype]))(var80) /* bound_mtype on <var80:MClassDef>*/;
var82 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateErasureCompilerVisitor>*/;
if (var82 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 485);
show_backtrace(1);
} else {
var83 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var82) /* mpropdef on <var82:nullable Frame>*/;
}
var84 = ((val* (*)(val*))(var83->class->vft[COLOR_model__MPropDef__mclassdef]))(var83) /* mclassdef on <var83:MPropDef>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_model__MClassDef__bound_mtype]))(var84) /* bound_mtype on <var84:MClassDef>*/;
var86 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateErasureCompilerVisitor>*/;
if (var86 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 485);
show_backtrace(1);
} else {
var87 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var86) /* mpropdef on <var86:nullable Frame>*/;
}
var88 = ((val* (*)(val*))(var87->class->vft[COLOR_model__MPropDef__mclassdef]))(var87) /* mclassdef on <var87:MPropDef>*/;
var89 = ((val* (*)(val*))(var88->class->vft[COLOR_model__MClassDef__mmodule]))(var88) /* mmodule on <var88:MClassDef>*/;
var90 = 0;
var91 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var81, var85, var89, var90) /* resolve_for on <var_mtype:MType(MParameterType)>*/;
var_mtype = var91;
/* <var_mtype:MType> isa MNullableType */
cltype93 = type_model__MNullableType.color;
idtype94 = type_model__MNullableType.id;
if(cltype93 >= var_mtype->type->table_size) {
var92 = 0;
} else {
var92 = var_mtype->type->type_table[cltype93] == idtype94;
}
if (var92){
var95 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:MType(MNullableType)>*/;
var_mtype = var95;
if (varonce96) {
var97 = varonce96;
} else {
var98 = "1";
var99 = 1;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
var_accept_null = var97;
} else {
}
} else {
}
var101 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value) /* mcasttype on <var_value:RuntimeVariable>*/;
var102 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateErasureCompilerVisitor>*/;
if (var102 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 492);
show_backtrace(1);
} else {
var103 = ((val* (*)(val*))(var102->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var102) /* mpropdef on <var102:nullable Frame>*/;
}
var104 = ((val* (*)(val*))(var103->class->vft[COLOR_model__MPropDef__mclassdef]))(var103) /* mclassdef on <var103:MPropDef>*/;
var105 = ((val* (*)(val*))(var104->class->vft[COLOR_model__MClassDef__mmodule]))(var104) /* mmodule on <var104:MClassDef>*/;
var106 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateErasureCompilerVisitor>*/;
if (var106 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 492);
show_backtrace(1);
} else {
var107 = ((val* (*)(val*))(var106->class->vft[COLOR_abstract_compiler__Frame__mpropdef]))(var106) /* mpropdef on <var106:nullable Frame>*/;
}
var108 = ((val* (*)(val*))(var107->class->vft[COLOR_model__MPropDef__mclassdef]))(var107) /* mclassdef on <var107:MPropDef>*/;
var109 = ((val* (*)(val*))(var108->class->vft[COLOR_model__MClassDef__bound_mtype]))(var108) /* bound_mtype on <var108:MClassDef>*/;
var110 = ((short int (*)(val*, val*, val*, val*))(var101->class->vft[COLOR_model__MType__is_subtype]))(var101, var105, var109, var_mtype) /* is_subtype on <var101:MType>*/;
if (var110){
if (varonce111) {
var112 = varonce111;
} else {
var113 = " = 1; /* easy ";
var114 = 14;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__inspect]))(var_value) /* inspect on <var_value:RuntimeVariable>*/;
if (varonce117) {
var118 = varonce117;
} else {
var119 = " isa ";
var120 = 5;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = "*/";
var125 = 2;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
var127 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var127 = array_instance Array[Object] */
var128 = 6;
var129 = NEW_array__NativeArray(var128, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var129)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var129)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var129)->values[2] = (val*) var116;
((struct instance_array__NativeArray*)var129)->values[3] = (val*) var118;
((struct instance_array__NativeArray*)var129)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var129)->values[5] = (val*) var123;
((void (*)(val*, val*, long))(var127->class->vft[COLOR_array__Array__with_native]))(var127, var129, var128) /* with_native on <var127:Array[Object]>*/;
}
var130 = ((val* (*)(val*))(var127->class->vft[COLOR_string__Object__to_s]))(var127) /* to_s on <var127:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var130) /* add on <self:SeparateErasureCompilerVisitor>*/;
var131 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
var132 = ((val* (*)(val*))(var131->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var131) /* modelbuilder on <var131:AbstractCompiler(SeparateCompiler)>*/;
var133 = ((val* (*)(val*))(var132->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var132) /* toolcontext on <var132:ModelBuilder>*/;
var134 = ((val* (*)(val*))(var133->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var133) /* opt_typing_test_metrics on <var133:ToolContext>*/;
var135 = ((val* (*)(val*))(var134->class->vft[COLOR_opts__Option__value]))(var134) /* value on <var134:OptionBool>*/;
var136 = ((struct instance_kernel__Bool*)var135)->value; /* autounbox from nullable Object to Bool */;
if (var136){
var137 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
var138 = ((val* (*)(val*))(var137->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_skipped]))(var137) /* count_type_test_skipped on <var137:AbstractCompiler(SeparateCompiler)>*/;
var_ = var138;
var_139 = var_tag;
var140 = ((val* (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_, var_139) /* [] on <var_:HashMap[String, Int]>*/;
var141 = 1;
{ /* Inline kernel#Int#+ (var140,var141) */
var144 = ((struct instance_kernel__Int*)var140)->value; /* autounbox from nullable Object to Int */;
var145 = var144 + var141;
var142 = var145;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var146 = BOX_kernel__Int(var142); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_, var_139, var146) /* []= on <var_:HashMap[String, Int]>*/;
if (varonce147) {
var148 = varonce147;
} else {
var149 = "count_type_test_skipped_";
var150 = 24;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "++;";
var155 = 3;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var157 = array_instance Array[Object] */
var158 = 3;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var148;
((struct instance_array__NativeArray*)var159)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var159)->values[2] = (val*) var153;
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[Object]>*/;
}
var160 = ((val* (*)(val*))(var157->class->vft[COLOR_string__Object__to_s]))(var157) /* to_s on <var157:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var160) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
var161 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var162 = ((val* (*)(val*))(var161->class->vft[COLOR_abstract_compiler__MType__ctype]))(var161) /* ctype on <var161:MType>*/;
if (varonce163) {
var164 = varonce163;
} else {
var165 = "val*";
var166 = 4;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = ((short int (*)(val*, val*))(var162->class->vft[COLOR_kernel__Object___61d_61d]))(var162, var164) /* == on <var162:String>*/;
if (var168){
var169 = NEW_array__Array(&type_array__Arraykernel__Object);
var170 = 3;
((void (*)(val*, long))(var169->class->vft[COLOR_array__Array__with_capacity]))(var169, var170) /* with_capacity on <var169:Array[Object]>*/;
var_171 = var169;
if (varonce172) {
var173 = varonce172;
} else {
var174 = "";
var175 = 0;
var176 = string__NativeString__to_s_with_length(var174, var175);
var173 = var176;
varonce172 = var173;
}
((void (*)(val*, val*))(var_171->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_171, var173) /* add on <var_171:Array[Object]>*/;
((void (*)(val*, val*))(var_171->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_171, var_value) /* add on <var_171:Array[Object]>*/;
if (varonce177) {
var178 = varonce177;
} else {
var179 = "->class->";
var180 = 9;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
((void (*)(val*, val*))(var_171->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_171, var178) /* add on <var_171:Array[Object]>*/;
var182 = ((val* (*)(val*))(var_171->class->vft[COLOR_string__Object__to_s]))(var_171) /* to_s on <var_171:Array[Object]>*/;
var_class_ptr = var182;
} else {
var183 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
/* <var183:MType> isa MClassType */
cltype185 = type_model__MClassType.color;
idtype186 = type_model__MClassType.id;
if(cltype185 >= var183->type->table_size) {
var184 = 0;
} else {
var184 = var183->type->type_table[cltype185] == idtype186;
}
if (!var184) {
var_class_name = var183 == NULL ? "null" : var183->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 506);
show_backtrace(1);
}
var187 = ((val* (*)(val*))(var183->class->vft[COLOR_model__MClassType__mclass]))(var183) /* mclass on <var183:MType(MClassType)>*/;
var_mclass = var187;
if (varonce188) {
var189 = varonce188;
} else {
var190 = "class_";
var191 = 6;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass) /* c_name on <var_mclass:MClass>*/;
var194 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var194 = array_instance Array[Object] */
var195 = 2;
var196 = NEW_array__NativeArray(var195, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var196)->values[0] = (val*) var189;
((struct instance_array__NativeArray*)var196)->values[1] = (val*) var193;
((void (*)(val*, val*, long))(var194->class->vft[COLOR_array__Array__with_native]))(var194, var196, var195) /* with_native on <var194:Array[Object]>*/;
}
var197 = ((val* (*)(val*))(var194->class->vft[COLOR_string__Object__to_s]))(var194) /* to_s on <var194:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var197) /* require_declaration on <self:SeparateErasureCompilerVisitor>*/;
var198 = NEW_array__Array(&type_array__Arraykernel__Object);
var199 = 3;
((void (*)(val*, long))(var198->class->vft[COLOR_array__Array__with_capacity]))(var198, var199) /* with_capacity on <var198:Array[Object]>*/;
var_200 = var198;
if (varonce201) {
var202 = varonce201;
} else {
var203 = "class_";
var204 = 6;
var205 = string__NativeString__to_s_with_length(var203, var204);
var202 = var205;
varonce201 = var202;
}
((void (*)(val*, val*))(var_200->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_200, var202) /* add on <var_200:Array[Object]>*/;
var206 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass) /* c_name on <var_mclass:MClass>*/;
((void (*)(val*, val*))(var_200->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_200, var206) /* add on <var_200:Array[Object]>*/;
if (varonce207) {
var208 = varonce207;
} else {
var209 = ".";
var210 = 1;
var211 = string__NativeString__to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
((void (*)(val*, val*))(var_200->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_200, var208) /* add on <var_200:Array[Object]>*/;
var212 = ((val* (*)(val*))(var_200->class->vft[COLOR_string__Object__to_s]))(var_200) /* to_s on <var_200:Array[Object]>*/;
var_class_ptr = var212;
}
/* <var_mtype:MType> isa MClassType */
cltype214 = type_model__MClassType.color;
idtype215 = type_model__MClassType.id;
if(cltype214 >= var_mtype->type->table_size) {
var213 = 0;
} else {
var213 = var_mtype->type->type_table[cltype214] == idtype215;
}
if (var213){
if (varonce216) {
var217 = varonce216;
} else {
var218 = "class_";
var219 = 6;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MType(MClassType)>*/;
var222 = ((val* (*)(val*))(var221->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var221) /* c_name on <var221:MClass>*/;
var223 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var223 = array_instance Array[Object] */
var224 = 2;
var225 = NEW_array__NativeArray(var224, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var225)->values[0] = (val*) var217;
((struct instance_array__NativeArray*)var225)->values[1] = (val*) var222;
((void (*)(val*, val*, long))(var223->class->vft[COLOR_array__Array__with_native]))(var223, var225, var224) /* with_native on <var223:Array[Object]>*/;
}
var226 = ((val* (*)(val*))(var223->class->vft[COLOR_string__Object__to_s]))(var223) /* to_s on <var223:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var226) /* require_declaration on <self:SeparateErasureCompilerVisitor>*/;
if (varonce227) {
var228 = varonce227;
} else {
var229 = " = class_";
var230 = 9;
var231 = string__NativeString__to_s_with_length(var229, var230);
var228 = var231;
varonce227 = var228;
}
var232 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MType(MClassType)>*/;
var233 = ((val* (*)(val*))(var232->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var232) /* c_name on <var232:MClass>*/;
if (varonce234) {
var235 = varonce234;
} else {
var236 = ".color;";
var237 = 7;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
var239 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var239 = array_instance Array[Object] */
var240 = 4;
var241 = NEW_array__NativeArray(var240, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var241)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var241)->values[1] = (val*) var228;
((struct instance_array__NativeArray*)var241)->values[2] = (val*) var233;
((struct instance_array__NativeArray*)var241)->values[3] = (val*) var235;
((void (*)(val*, val*, long))(var239->class->vft[COLOR_array__Array__with_native]))(var239, var241, var240) /* with_native on <var239:Array[Object]>*/;
}
var242 = ((val* (*)(val*))(var239->class->vft[COLOR_string__Object__to_s]))(var239) /* to_s on <var239:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var242) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce243) {
var244 = varonce243;
} else {
var245 = " = class_";
var246 = 9;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
var248 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MType(MClassType)>*/;
var249 = ((val* (*)(val*))(var248->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var248) /* c_name on <var248:MClass>*/;
if (varonce250) {
var251 = varonce250;
} else {
var252 = ".id;";
var253 = 4;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
var255 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var255 = array_instance Array[Object] */
var256 = 4;
var257 = NEW_array__NativeArray(var256, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var257)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var257)->values[1] = (val*) var244;
((struct instance_array__NativeArray*)var257)->values[2] = (val*) var249;
((struct instance_array__NativeArray*)var257)->values[3] = (val*) var251;
((void (*)(val*, val*, long))(var255->class->vft[COLOR_array__Array__with_native]))(var255, var257, var256) /* with_native on <var255:Array[Object]>*/;
}
var258 = ((val* (*)(val*))(var255->class->vft[COLOR_string__Object__to_s]))(var255) /* to_s on <var255:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var258) /* add on <self:SeparateErasureCompilerVisitor>*/;
var259 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
var260 = ((val* (*)(val*))(var259->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var259) /* modelbuilder on <var259:AbstractCompiler(SeparateCompiler)>*/;
var261 = ((val* (*)(val*))(var260->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var260) /* toolcontext on <var260:ModelBuilder>*/;
var262 = ((val* (*)(val*))(var261->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var261) /* opt_typing_test_metrics on <var261:ToolContext>*/;
var263 = ((val* (*)(val*))(var262->class->vft[COLOR_opts__Option__value]))(var262) /* value on <var262:OptionBool>*/;
var264 = ((struct instance_kernel__Bool*)var263)->value; /* autounbox from nullable Object to Bool */;
if (var264){
var265 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
var266 = ((val* (*)(val*))(var265->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_resolved]))(var265) /* count_type_test_resolved on <var265:AbstractCompiler(SeparateCompiler)>*/;
var_267 = var266;
var_268 = var_tag;
var269 = ((val* (*)(val*, val*))(var_267->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_267, var_268) /* [] on <var_267:HashMap[String, Int]>*/;
var270 = 1;
{ /* Inline kernel#Int#+ (var269,var270) */
var273 = ((struct instance_kernel__Int*)var269)->value; /* autounbox from nullable Object to Int */;
var274 = var273 + var270;
var271 = var274;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
var275 = BOX_kernel__Int(var271); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_267->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_267, var_268, var275) /* []= on <var_267:HashMap[String, Int]>*/;
if (varonce276) {
var277 = varonce276;
} else {
var278 = "count_type_test_resolved_";
var279 = 25;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
if (varonce281) {
var282 = varonce281;
} else {
var283 = "++;";
var284 = 3;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
var286 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var286 = array_instance Array[Object] */
var287 = 3;
var288 = NEW_array__NativeArray(var287, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var288)->values[0] = (val*) var277;
((struct instance_array__NativeArray*)var288)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var288)->values[2] = (val*) var282;
((void (*)(val*, val*, long))(var286->class->vft[COLOR_array__Array__with_native]))(var286, var288, var287) /* with_native on <var286:Array[Object]>*/;
}
var289 = ((val* (*)(val*))(var286->class->vft[COLOR_string__Object__to_s]))(var286) /* to_s on <var286:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var289) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
}
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype291 = type_model__MVirtualType.color;
idtype292 = type_model__MVirtualType.id;
if(cltype291 >= var_mtype->type->table_size) {
var290 = 0;
} else {
var290 = var_mtype->type->type_table[cltype291] == idtype292;
}
if (var290){
var293 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:SeparateErasureCompilerVisitor>*/;
if (var293 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 520);
show_backtrace(1);
} else {
var294 = ((val* (*)(val*))(var293->class->vft[COLOR_abstract_compiler__Frame__arguments]))(var293) /* arguments on <var293:nullable Frame>*/;
}
var295 = ((val* (*)(val*))(var294->class->vft[COLOR_abstract_collection__Collection__first]))(var294) /* first on <var294:Array[RuntimeVariable]>*/;
var_recv = var295;
var296 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
var297 = ((val* (*)(val*))(var296->class->vft[COLOR_abstract_compiler__MType__ctype]))(var296) /* ctype on <var296:MType>*/;
if (varonce298) {
var299 = varonce298;
} else {
var300 = "val*";
var301 = 4;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
var303 = ((short int (*)(val*, val*))(var297->class->vft[COLOR_kernel__Object___61d_61d]))(var297, var299) /* == on <var297:String>*/;
if (var303){
if (varonce304) {
var305 = varonce304;
} else {
var306 = "->class->";
var307 = 9;
var308 = string__NativeString__to_s_with_length(var306, var307);
var305 = var308;
varonce304 = var305;
}
var309 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var309 = array_instance Array[Object] */
var310 = 2;
var311 = NEW_array__NativeArray(var310, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var311)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var311)->values[1] = (val*) var305;
((void (*)(val*, val*, long))(var309->class->vft[COLOR_array__Array__with_native]))(var309, var311, var310) /* with_native on <var309:Array[Object]>*/;
}
var312 = ((val* (*)(val*))(var309->class->vft[COLOR_string__Object__to_s]))(var309) /* to_s on <var309:Array[Object]>*/;
var_recv_ptr = var312;
} else {
var313 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_recv) /* mtype on <var_recv:RuntimeVariable>*/;
/* <var313:MType> isa MClassType */
cltype315 = type_model__MClassType.color;
idtype316 = type_model__MClassType.id;
if(cltype315 >= var313->type->table_size) {
var314 = 0;
} else {
var314 = var313->type->type_table[cltype315] == idtype316;
}
if (!var314) {
var_class_name317 = var313 == NULL ? "null" : var313->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name317);
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 525);
show_backtrace(1);
}
var318 = ((val* (*)(val*))(var313->class->vft[COLOR_model__MClassType__mclass]))(var313) /* mclass on <var313:MType(MClassType)>*/;
var_mclass319 = var318;
if (varonce320) {
var321 = varonce320;
} else {
var322 = "class_";
var323 = 6;
var324 = string__NativeString__to_s_with_length(var322, var323);
var321 = var324;
varonce320 = var321;
}
var325 = ((val* (*)(val*))(var_mclass319->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass319) /* c_name on <var_mclass319:MClass>*/;
var326 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var326 = array_instance Array[Object] */
var327 = 2;
var328 = NEW_array__NativeArray(var327, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var328)->values[0] = (val*) var321;
((struct instance_array__NativeArray*)var328)->values[1] = (val*) var325;
((void (*)(val*, val*, long))(var326->class->vft[COLOR_array__Array__with_native]))(var326, var328, var327) /* with_native on <var326:Array[Object]>*/;
}
var329 = ((val* (*)(val*))(var326->class->vft[COLOR_string__Object__to_s]))(var326) /* to_s on <var326:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var329) /* require_declaration on <self:SeparateErasureCompilerVisitor>*/;
if (varonce330) {
var331 = varonce330;
} else {
var332 = "class_";
var333 = 6;
var334 = string__NativeString__to_s_with_length(var332, var333);
var331 = var334;
varonce330 = var331;
}
var335 = ((val* (*)(val*))(var_mclass319->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_mclass319) /* c_name on <var_mclass319:MClass>*/;
if (varonce336) {
var337 = varonce336;
} else {
var338 = ".";
var339 = 1;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
var341 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var341 = array_instance Array[Object] */
var342 = 3;
var343 = NEW_array__NativeArray(var342, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var343)->values[0] = (val*) var331;
((struct instance_array__NativeArray*)var343)->values[1] = (val*) var335;
((struct instance_array__NativeArray*)var343)->values[2] = (val*) var337;
((void (*)(val*, val*, long))(var341->class->vft[COLOR_array__Array__with_native]))(var341, var343, var342) /* with_native on <var341:Array[Object]>*/;
}
var344 = ((val* (*)(val*))(var341->class->vft[COLOR_string__Object__to_s]))(var341) /* to_s on <var341:Array[Object]>*/;
var_recv_ptr = var344;
}
if (varonce345) {
var346 = varonce345;
} else {
var347 = "entry";
var348 = 5;
var349 = string__NativeString__to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
var350 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var346) /* get_name on <self:SeparateErasureCompilerVisitor>*/;
var_entry = var350;
if (varonce351) {
var352 = varonce351;
} else {
var353 = "struct vts_entry ";
var354 = 17;
var355 = string__NativeString__to_s_with_length(var353, var354);
var352 = var355;
varonce351 = var352;
}
if (varonce356) {
var357 = varonce356;
} else {
var358 = ";";
var359 = 1;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
var361 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var361 = array_instance Array[Object] */
var362 = 3;
var363 = NEW_array__NativeArray(var362, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var363)->values[0] = (val*) var352;
((struct instance_array__NativeArray*)var363)->values[1] = (val*) var_entry;
((struct instance_array__NativeArray*)var363)->values[2] = (val*) var357;
((void (*)(val*, val*, long))(var361->class->vft[COLOR_array__Array__with_native]))(var361, var363, var362) /* with_native on <var361:Array[Object]>*/;
}
var364 = ((val* (*)(val*))(var361->class->vft[COLOR_string__Object__to_s]))(var361) /* to_s on <var361:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var364) /* add on <self:SeparateErasureCompilerVisitor>*/;
var365 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MVirtualType__mproperty]))(var_mtype) /* mproperty on <var_mtype:MType(MVirtualType)>*/;
var366 = ((val* (*)(val*))(var365->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var365) /* const_color on <var365:MProperty>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var366) /* require_declaration on <self:SeparateErasureCompilerVisitor>*/;
var367 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
/* <var367:AbstractCompiler(SeparateCompiler)> isa SeparateErasureCompiler */
cltype369 = type_separate_erasure_compiler__SeparateErasureCompiler.color;
idtype370 = type_separate_erasure_compiler__SeparateErasureCompiler.id;
if(cltype369 >= var367->type->table_size) {
var368 = 0;
} else {
var368 = var367->type->type_table[cltype369] == idtype370;
}
if (!var368) {
var_class_name371 = var367 == NULL ? "null" : var367->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateErasureCompiler", var_class_name371);
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 532);
show_backtrace(1);
}
var372 = ((val* (*)(val*))(var367->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__vt_layout]))(var367) /* vt_layout on <var367:SeparateCompiler(SeparateErasureCompiler)>*/;
/* <var372:nullable Layout[MVirtualTypeProp]> isa PHLayout[MClass, MVirtualTypeProp] */
cltype374 = type_layout_builders__PHLayoutmodel__MClassmodel__MVirtualTypeProp.color;
idtype375 = type_layout_builders__PHLayoutmodel__MClassmodel__MVirtualTypeProp.id;
if(var372 == NULL) {
var373 = 0;
} else {
if(cltype374 >= var372->type->table_size) {
var373 = 0;
} else {
var373 = var372->type->type_table[cltype374] == idtype375;
}
}
if (var373){
if (varonce376) {
var377 = varonce376;
} else {
var378 = " = ";
var379 = 3;
var380 = string__NativeString__to_s_with_length(var378, var379);
var377 = var380;
varonce376 = var377;
}
if (varonce381) {
var382 = varonce381;
} else {
var383 = "vts_table->vts[HASH(";
var384 = 20;
var385 = string__NativeString__to_s_with_length(var383, var384);
var382 = var385;
varonce381 = var382;
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = "vts_table->mask, ";
var389 = 17;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
var391 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MVirtualType__mproperty]))(var_mtype) /* mproperty on <var_mtype:MType(MVirtualType)>*/;
var392 = ((val* (*)(val*))(var391->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var391) /* const_color on <var391:MProperty>*/;
if (varonce393) {
var394 = varonce393;
} else {
var395 = ")];";
var396 = 3;
var397 = string__NativeString__to_s_with_length(var395, var396);
var394 = var397;
varonce393 = var394;
}
var398 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var398 = array_instance Array[Object] */
var399 = 8;
var400 = NEW_array__NativeArray(var399, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var400)->values[0] = (val*) var_entry;
((struct instance_array__NativeArray*)var400)->values[1] = (val*) var377;
((struct instance_array__NativeArray*)var400)->values[2] = (val*) var_recv_ptr;
((struct instance_array__NativeArray*)var400)->values[3] = (val*) var382;
((struct instance_array__NativeArray*)var400)->values[4] = (val*) var_recv_ptr;
((struct instance_array__NativeArray*)var400)->values[5] = (val*) var387;
((struct instance_array__NativeArray*)var400)->values[6] = (val*) var392;
((struct instance_array__NativeArray*)var400)->values[7] = (val*) var394;
((void (*)(val*, val*, long))(var398->class->vft[COLOR_array__Array__with_native]))(var398, var400, var399) /* with_native on <var398:Array[Object]>*/;
}
var401 = ((val* (*)(val*))(var398->class->vft[COLOR_string__Object__to_s]))(var398) /* to_s on <var398:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var401) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
if (varonce402) {
var403 = varonce402;
} else {
var404 = " = ";
var405 = 3;
var406 = string__NativeString__to_s_with_length(var404, var405);
var403 = var406;
varonce402 = var403;
}
if (varonce407) {
var408 = varonce407;
} else {
var409 = "vts_table->vts[";
var410 = 15;
var411 = string__NativeString__to_s_with_length(var409, var410);
var408 = var411;
varonce407 = var408;
}
var412 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MVirtualType__mproperty]))(var_mtype) /* mproperty on <var_mtype:MType(MVirtualType)>*/;
var413 = ((val* (*)(val*))(var412->class->vft[COLOR_separate_compiler__MProperty__const_color]))(var412) /* const_color on <var412:MProperty>*/;
if (varonce414) {
var415 = varonce414;
} else {
var416 = "];";
var417 = 2;
var418 = string__NativeString__to_s_with_length(var416, var417);
var415 = var418;
varonce414 = var415;
}
var419 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var419 = array_instance Array[Object] */
var420 = 6;
var421 = NEW_array__NativeArray(var420, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var421)->values[0] = (val*) var_entry;
((struct instance_array__NativeArray*)var421)->values[1] = (val*) var403;
((struct instance_array__NativeArray*)var421)->values[2] = (val*) var_recv_ptr;
((struct instance_array__NativeArray*)var421)->values[3] = (val*) var408;
((struct instance_array__NativeArray*)var421)->values[4] = (val*) var413;
((struct instance_array__NativeArray*)var421)->values[5] = (val*) var415;
((void (*)(val*, val*, long))(var419->class->vft[COLOR_array__Array__with_native]))(var419, var421, var420) /* with_native on <var419:Array[Object]>*/;
}
var422 = ((val* (*)(val*))(var419->class->vft[COLOR_string__Object__to_s]))(var419) /* to_s on <var419:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var422) /* add on <self:SeparateErasureCompilerVisitor>*/;
}
if (varonce423) {
var424 = varonce423;
} else {
var425 = " = ";
var426 = 3;
var427 = string__NativeString__to_s_with_length(var425, var426);
var424 = var427;
varonce423 = var424;
}
if (varonce428) {
var429 = varonce428;
} else {
var430 = ".class->color;";
var431 = 14;
var432 = string__NativeString__to_s_with_length(var430, var431);
var429 = var432;
varonce428 = var429;
}
var433 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var433 = array_instance Array[Object] */
var434 = 4;
var435 = NEW_array__NativeArray(var434, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var435)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var435)->values[1] = (val*) var424;
((struct instance_array__NativeArray*)var435)->values[2] = (val*) var_entry;
((struct instance_array__NativeArray*)var435)->values[3] = (val*) var429;
((void (*)(val*, val*, long))(var433->class->vft[COLOR_array__Array__with_native]))(var433, var435, var434) /* with_native on <var433:Array[Object]>*/;
}
var436 = ((val* (*)(val*))(var433->class->vft[COLOR_string__Object__to_s]))(var433) /* to_s on <var433:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var436) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce437) {
var438 = varonce437;
} else {
var439 = " = ";
var440 = 3;
var441 = string__NativeString__to_s_with_length(var439, var440);
var438 = var441;
varonce437 = var438;
}
if (varonce442) {
var443 = varonce442;
} else {
var444 = ".class->id;";
var445 = 11;
var446 = string__NativeString__to_s_with_length(var444, var445);
var443 = var446;
varonce442 = var443;
}
var447 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var447 = array_instance Array[Object] */
var448 = 4;
var449 = NEW_array__NativeArray(var448, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var449)->values[0] = (val*) var_idtype;
((struct instance_array__NativeArray*)var449)->values[1] = (val*) var438;
((struct instance_array__NativeArray*)var449)->values[2] = (val*) var_entry;
((struct instance_array__NativeArray*)var449)->values[3] = (val*) var443;
((void (*)(val*, val*, long))(var447->class->vft[COLOR_array__Array__with_native]))(var447, var449, var448) /* with_native on <var447:Array[Object]>*/;
}
var450 = ((val* (*)(val*))(var447->class->vft[COLOR_string__Object__to_s]))(var447) /* to_s on <var447:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var450) /* add on <self:SeparateErasureCompilerVisitor>*/;
var_452 = var_maybe_null;
if (var_maybe_null){
if (varonce453) {
var454 = varonce453;
} else {
var455 = "0";
var456 = 1;
var457 = string__NativeString__to_s_with_length(var455, var456);
var454 = var457;
varonce453 = var454;
}
var458 = ((short int (*)(val*, val*))(var_accept_null->class->vft[COLOR_kernel__Object___61d_61d]))(var_accept_null, var454) /* == on <var_accept_null:String>*/;
var451 = var458;
} else {
var451 = var_452;
}
if (var451){
if (varonce459) {
var460 = varonce459;
} else {
var461 = "is_nullable";
var462 = 11;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
var464 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var460) /* get_name on <self:SeparateErasureCompilerVisitor>*/;
var_is_nullable = var464;
if (varonce465) {
var466 = varonce465;
} else {
var467 = "short int ";
var468 = 10;
var469 = string__NativeString__to_s_with_length(var467, var468);
var466 = var469;
varonce465 = var466;
}
if (varonce470) {
var471 = varonce470;
} else {
var472 = ";";
var473 = 1;
var474 = string__NativeString__to_s_with_length(var472, var473);
var471 = var474;
varonce470 = var471;
}
var475 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var475 = array_instance Array[Object] */
var476 = 3;
var477 = NEW_array__NativeArray(var476, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var477)->values[0] = (val*) var466;
((struct instance_array__NativeArray*)var477)->values[1] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var477)->values[2] = (val*) var471;
((void (*)(val*, val*, long))(var475->class->vft[COLOR_array__Array__with_native]))(var475, var477, var476) /* with_native on <var475:Array[Object]>*/;
}
var478 = ((val* (*)(val*))(var475->class->vft[COLOR_string__Object__to_s]))(var475) /* to_s on <var475:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var478) /* add_decl on <self:SeparateErasureCompilerVisitor>*/;
if (varonce479) {
var480 = varonce479;
} else {
var481 = " = ";
var482 = 3;
var483 = string__NativeString__to_s_with_length(var481, var482);
var480 = var483;
varonce479 = var480;
}
if (varonce484) {
var485 = varonce484;
} else {
var486 = ".is_nullable;";
var487 = 13;
var488 = string__NativeString__to_s_with_length(var486, var487);
var485 = var488;
varonce484 = var485;
}
var489 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var489 = array_instance Array[Object] */
var490 = 4;
var491 = NEW_array__NativeArray(var490, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var491)->values[0] = (val*) var_is_nullable;
((struct instance_array__NativeArray*)var491)->values[1] = (val*) var480;
((struct instance_array__NativeArray*)var491)->values[2] = (val*) var_entry;
((struct instance_array__NativeArray*)var491)->values[3] = (val*) var485;
((void (*)(val*, val*, long))(var489->class->vft[COLOR_array__Array__with_native]))(var489, var491, var490) /* with_native on <var489:Array[Object]>*/;
}
var492 = ((val* (*)(val*))(var489->class->vft[COLOR_string__Object__to_s]))(var489) /* to_s on <var489:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var492) /* add on <self:SeparateErasureCompilerVisitor>*/;
var493 = ((val* (*)(val*))(var_is_nullable->class->vft[COLOR_string__Object__to_s]))(var_is_nullable) /* to_s on <var_is_nullable:String>*/;
var_accept_null = var493;
} else {
}
var494 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
var495 = ((val* (*)(val*))(var494->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var494) /* modelbuilder on <var494:AbstractCompiler(SeparateCompiler)>*/;
var496 = ((val* (*)(val*))(var495->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var495) /* toolcontext on <var495:ModelBuilder>*/;
var497 = ((val* (*)(val*))(var496->class->vft[COLOR_abstract_compiler__ToolContext__opt_typing_test_metrics]))(var496) /* opt_typing_test_metrics on <var496:ToolContext>*/;
var498 = ((val* (*)(val*))(var497->class->vft[COLOR_opts__Option__value]))(var497) /* value on <var497:OptionBool>*/;
var499 = ((struct instance_kernel__Bool*)var498)->value; /* autounbox from nullable Object to Bool */;
if (var499){
var500 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
var501 = ((val* (*)(val*))(var500->class->vft[COLOR_abstract_compiler__AbstractCompiler__count_type_test_unresolved]))(var500) /* count_type_test_unresolved on <var500:AbstractCompiler(SeparateCompiler)>*/;
var_502 = var501;
var_503 = var_tag;
var504 = ((val* (*)(val*, val*))(var_502->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_502, var_503) /* [] on <var_502:HashMap[String, Int]>*/;
var505 = 1;
{ /* Inline kernel#Int#+ (var504,var505) */
var508 = ((struct instance_kernel__Int*)var504)->value; /* autounbox from nullable Object to Int */;
var509 = var508 + var505;
var506 = var509;
goto RET_LABEL507;
RET_LABEL507:(void)0;
}
var510 = BOX_kernel__Int(var506); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var_502->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_502, var_503, var510) /* []= on <var_502:HashMap[String, Int]>*/;
if (varonce511) {
var512 = varonce511;
} else {
var513 = "count_type_test_unresolved_";
var514 = 27;
var515 = string__NativeString__to_s_with_length(var513, var514);
var512 = var515;
varonce511 = var512;
}
if (varonce516) {
var517 = varonce516;
} else {
var518 = "++;";
var519 = 3;
var520 = string__NativeString__to_s_with_length(var518, var519);
var517 = var520;
varonce516 = var517;
}
var521 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var521 = array_instance Array[Object] */
var522 = 3;
var523 = NEW_array__NativeArray(var522, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var523)->values[0] = (val*) var512;
((struct instance_array__NativeArray*)var523)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var523)->values[2] = (val*) var517;
((void (*)(val*, val*, long))(var521->class->vft[COLOR_array__Array__with_native]))(var521, var523, var522) /* with_native on <var521:Array[Object]>*/;
}
var524 = ((val* (*)(val*))(var521->class->vft[COLOR_string__Object__to_s]))(var521) /* to_s on <var521:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var524) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
}
} else {
if (varonce525) {
var526 = varonce525;
} else {
var527 = "type_test(";
var528 = 10;
var529 = string__NativeString__to_s_with_length(var527, var528);
var526 = var529;
varonce525 = var526;
}
var530 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__inspect]))(var_value) /* inspect on <var_value:RuntimeVariable>*/;
if (varonce531) {
var532 = varonce531;
} else {
var533 = ", ";
var534 = 2;
var535 = string__NativeString__to_s_with_length(var533, var534);
var532 = var535;
varonce531 = var532;
}
if (varonce536) {
var537 = varonce536;
} else {
var538 = ")";
var539 = 1;
var540 = string__NativeString__to_s_with_length(var538, var539);
var537 = var540;
varonce536 = var537;
}
var541 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var541 = array_instance Array[Object] */
var542 = 5;
var543 = NEW_array__NativeArray(var542, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var543)->values[0] = (val*) var526;
((struct instance_array__NativeArray*)var543)->values[1] = (val*) var530;
((struct instance_array__NativeArray*)var543)->values[2] = (val*) var532;
((struct instance_array__NativeArray*)var543)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var543)->values[4] = (val*) var537;
((void (*)(val*, val*, long))(var541->class->vft[COLOR_array__Array__with_native]))(var541, var543, var542) /* with_native on <var541:Array[Object]>*/;
}
var544 = ((val* (*)(val*))(var541->class->vft[COLOR_string__Object__to_s]))(var541) /* to_s on <var541:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__debug]))(self, var544) /* debug on <self:SeparateErasureCompilerVisitor>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 551);
show_backtrace(1);
}
}
if (var_maybe_null){
if (varonce545) {
var546 = varonce545;
} else {
var547 = "if(";
var548 = 3;
var549 = string__NativeString__to_s_with_length(var547, var548);
var546 = var549;
varonce545 = var546;
}
if (varonce550) {
var551 = varonce550;
} else {
var552 = " == NULL) {";
var553 = 11;
var554 = string__NativeString__to_s_with_length(var552, var553);
var551 = var554;
varonce550 = var551;
}
var555 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var555 = array_instance Array[Object] */
var556 = 3;
var557 = NEW_array__NativeArray(var556, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var557)->values[0] = (val*) var546;
((struct instance_array__NativeArray*)var557)->values[1] = (val*) var_value;
((struct instance_array__NativeArray*)var557)->values[2] = (val*) var551;
((void (*)(val*, val*, long))(var555->class->vft[COLOR_array__Array__with_native]))(var555, var557, var556) /* with_native on <var555:Array[Object]>*/;
}
var558 = ((val* (*)(val*))(var555->class->vft[COLOR_string__Object__to_s]))(var555) /* to_s on <var555:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var558) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce559) {
var560 = varonce559;
} else {
var561 = " = ";
var562 = 3;
var563 = string__NativeString__to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
if (varonce564) {
var565 = varonce564;
} else {
var566 = ";";
var567 = 1;
var568 = string__NativeString__to_s_with_length(var566, var567);
var565 = var568;
varonce564 = var565;
}
var569 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var569 = array_instance Array[Object] */
var570 = 4;
var571 = NEW_array__NativeArray(var570, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var571)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var571)->values[1] = (val*) var560;
((struct instance_array__NativeArray*)var571)->values[2] = (val*) var_accept_null;
((struct instance_array__NativeArray*)var571)->values[3] = (val*) var565;
((void (*)(val*, val*, long))(var569->class->vft[COLOR_array__Array__with_native]))(var569, var571, var570) /* with_native on <var569:Array[Object]>*/;
}
var572 = ((val* (*)(val*))(var569->class->vft[COLOR_string__Object__to_s]))(var569) /* to_s on <var569:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var572) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce573) {
var574 = varonce573;
} else {
var575 = "} else {";
var576 = 8;
var577 = string__NativeString__to_s_with_length(var575, var576);
var574 = var577;
varonce573 = var574;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var574) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
}
var578 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:SeparateErasureCompilerVisitor>*/;
/* <var578:AbstractCompiler(SeparateCompiler)> isa SeparateErasureCompiler */
cltype580 = type_separate_erasure_compiler__SeparateErasureCompiler.color;
idtype581 = type_separate_erasure_compiler__SeparateErasureCompiler.id;
if(cltype580 >= var578->type->table_size) {
var579 = 0;
} else {
var579 = var578->type->type_table[cltype580] == idtype581;
}
if (!var579) {
var_class_name582 = var578 == NULL ? "null" : var578->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SeparateErasureCompiler", var_class_name582);
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 560);
show_backtrace(1);
}
var583 = ((val* (*)(val*))(var578->class->vft[COLOR_separate_erasure_compiler__SeparateErasureCompiler__class_layout]))(var578) /* class_layout on <var578:SeparateCompiler(SeparateErasureCompiler)>*/;
/* <var583:nullable Layout[MClass]> isa PHLayout[MClass, MClass] */
cltype585 = type_layout_builders__PHLayoutmodel__MClassmodel__MClass.color;
idtype586 = type_layout_builders__PHLayoutmodel__MClassmodel__MClass.id;
if(var583 == NULL) {
var584 = 0;
} else {
if(cltype585 >= var583->type->table_size) {
var584 = 0;
} else {
var584 = var583->type->type_table[cltype585] == idtype586;
}
}
if (var584){
if (varonce587) {
var588 = varonce587;
} else {
var589 = " = HASH(";
var590 = 8;
var591 = string__NativeString__to_s_with_length(var589, var590);
var588 = var591;
varonce587 = var588;
}
if (varonce592) {
var593 = varonce592;
} else {
var594 = "color, ";
var595 = 7;
var596 = string__NativeString__to_s_with_length(var594, var595);
var593 = var596;
varonce592 = var593;
}
if (varonce597) {
var598 = varonce597;
} else {
var599 = ");";
var600 = 2;
var601 = string__NativeString__to_s_with_length(var599, var600);
var598 = var601;
varonce597 = var598;
}
var602 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var602 = array_instance Array[Object] */
var603 = 6;
var604 = NEW_array__NativeArray(var603, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var604)->values[0] = (val*) var_cltype;
((struct instance_array__NativeArray*)var604)->values[1] = (val*) var588;
((struct instance_array__NativeArray*)var604)->values[2] = (val*) var_class_ptr;
((struct instance_array__NativeArray*)var604)->values[3] = (val*) var593;
((struct instance_array__NativeArray*)var604)->values[4] = (val*) var_idtype;
((struct instance_array__NativeArray*)var604)->values[5] = (val*) var598;
((void (*)(val*, val*, long))(var602->class->vft[COLOR_array__Array__with_native]))(var602, var604, var603) /* with_native on <var602:Array[Object]>*/;
}
var605 = ((val* (*)(val*))(var602->class->vft[COLOR_string__Object__to_s]))(var602) /* to_s on <var602:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var605) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
}
if (varonce606) {
var607 = varonce606;
} else {
var608 = "if(";
var609 = 3;
var610 = string__NativeString__to_s_with_length(var608, var609);
var607 = var610;
varonce606 = var607;
}
if (varonce611) {
var612 = varonce611;
} else {
var613 = " >= ";
var614 = 4;
var615 = string__NativeString__to_s_with_length(var613, var614);
var612 = var615;
varonce611 = var612;
}
if (varonce616) {
var617 = varonce616;
} else {
var618 = "type_table->size) {";
var619 = 19;
var620 = string__NativeString__to_s_with_length(var618, var619);
var617 = var620;
varonce616 = var617;
}
var621 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var621 = array_instance Array[Object] */
var622 = 5;
var623 = NEW_array__NativeArray(var622, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var623)->values[0] = (val*) var607;
((struct instance_array__NativeArray*)var623)->values[1] = (val*) var_cltype;
((struct instance_array__NativeArray*)var623)->values[2] = (val*) var612;
((struct instance_array__NativeArray*)var623)->values[3] = (val*) var_class_ptr;
((struct instance_array__NativeArray*)var623)->values[4] = (val*) var617;
((void (*)(val*, val*, long))(var621->class->vft[COLOR_array__Array__with_native]))(var621, var623, var622) /* with_native on <var621:Array[Object]>*/;
}
var624 = ((val* (*)(val*))(var621->class->vft[COLOR_string__Object__to_s]))(var621) /* to_s on <var621:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var624) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce625) {
var626 = varonce625;
} else {
var627 = " = 0;";
var628 = 5;
var629 = string__NativeString__to_s_with_length(var627, var628);
var626 = var629;
varonce625 = var626;
}
var630 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var630 = array_instance Array[Object] */
var631 = 2;
var632 = NEW_array__NativeArray(var631, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var632)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var632)->values[1] = (val*) var626;
((void (*)(val*, val*, long))(var630->class->vft[COLOR_array__Array__with_native]))(var630, var632, var631) /* with_native on <var630:Array[Object]>*/;
}
var633 = ((val* (*)(val*))(var630->class->vft[COLOR_string__Object__to_s]))(var630) /* to_s on <var630:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var633) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce634) {
var635 = varonce634;
} else {
var636 = "} else {";
var637 = 8;
var638 = string__NativeString__to_s_with_length(var636, var637);
var635 = var638;
varonce634 = var635;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var635) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce639) {
var640 = varonce639;
} else {
var641 = " = ";
var642 = 3;
var643 = string__NativeString__to_s_with_length(var641, var642);
var640 = var643;
varonce639 = var640;
}
if (varonce644) {
var645 = varonce644;
} else {
var646 = "type_table->table[";
var647 = 18;
var648 = string__NativeString__to_s_with_length(var646, var647);
var645 = var648;
varonce644 = var645;
}
if (varonce649) {
var650 = varonce649;
} else {
var651 = "] == ";
var652 = 5;
var653 = string__NativeString__to_s_with_length(var651, var652);
var650 = var653;
varonce649 = var650;
}
if (varonce654) {
var655 = varonce654;
} else {
var656 = ";";
var657 = 1;
var658 = string__NativeString__to_s_with_length(var656, var657);
var655 = var658;
varonce654 = var655;
}
var659 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var659 = array_instance Array[Object] */
var660 = 8;
var661 = NEW_array__NativeArray(var660, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var661)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var661)->values[1] = (val*) var640;
((struct instance_array__NativeArray*)var661)->values[2] = (val*) var_class_ptr;
((struct instance_array__NativeArray*)var661)->values[3] = (val*) var645;
((struct instance_array__NativeArray*)var661)->values[4] = (val*) var_cltype;
((struct instance_array__NativeArray*)var661)->values[5] = (val*) var650;
((struct instance_array__NativeArray*)var661)->values[6] = (val*) var_idtype;
((struct instance_array__NativeArray*)var661)->values[7] = (val*) var655;
((void (*)(val*, val*, long))(var659->class->vft[COLOR_array__Array__with_native]))(var659, var661, var660) /* with_native on <var659:Array[Object]>*/;
}
var662 = ((val* (*)(val*))(var659->class->vft[COLOR_string__Object__to_s]))(var659) /* to_s on <var659:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var662) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce663) {
var664 = varonce663;
} else {
var665 = "}";
var666 = 1;
var667 = string__NativeString__to_s_with_length(var665, var666);
var664 = var667;
varonce663 = var664;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var664) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (var_maybe_null){
if (varonce668) {
var669 = varonce668;
} else {
var670 = "}";
var671 = 1;
var672 = string__NativeString__to_s_with_length(var670, var671);
var669 = var672;
varonce668 = var669;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var669) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test for (self: Object, RuntimeVariable, MType, String): RuntimeVariable */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string for (self: SeparateErasureCompilerVisitor, RuntimeVariable): String */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string(val* self, val* p0) {
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
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : MType */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : MType */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
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
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var1) /* get_name on <self:SeparateErasureCompilerVisitor>*/;
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
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var19) /* add_decl on <self:SeparateErasureCompilerVisitor>*/;
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
var30 = " = ";
var31 = 3;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " == NULL ? \"null\" : ";
var36 = 20;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = "->class->name;";
var41 = 14;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 6;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var29;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var45)->values[3] = (val*) var34;
((struct instance_array__NativeArray*)var45)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var45)->values[5] = (val*) var39;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var46) /* add on <self:SeparateErasureCompilerVisitor>*/;
} else {
if (varonce47) {
var48 = varonce47;
} else {
var49 = "class_";
var50 = 6;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_abstract_compiler__MType__c_name]))(var52) /* c_name on <var52:MType>*/;
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 2;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var48;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var53;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var57) /* require_declaration on <self:SeparateErasureCompilerVisitor>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = " = class_";
var61 = 9;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = ((val* (*)(val*))(var_value->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value) /* mtype on <var_value:RuntimeVariable>*/;
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_abstract_compiler__MType__c_name]))(var63) /* c_name on <var63:MType>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = ".name;";
var68 = 6;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 4;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var59;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var64;
((struct instance_array__NativeArray*)var72)->values[3] = (val*) var66;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var73) /* add on <self:SeparateErasureCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#array_instance for (self: SeparateErasureCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
val* var6 /* : MType */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : MClass */;
val* var13 /* : Array[MType] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[MType] */;
val* var16 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var17 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var42 /* : MClass */;
val* var43 /* : Array[MType] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[MType] */;
val* var46 /* : MClassType */;
val* var47 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
long var70 /* : Int */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : Object */;
val* var80 /* : String */;
val* var81 /* : Range[Int] */;
long var82 /* : Int */;
long var83 /* : Int */;
val* var84 /* : Discrete */;
val* var85 /* : Discrete */;
val* var86 /* : Iterator[nullable Object] */;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
long var_i /* var i: Int */;
long var89 /* : Int */;
val* var90 /* : nullable Object */;
val* var91 /* : MClassType */;
val* var92 /* : RuntimeVariable */;
val* var_r /* var r: RuntimeVariable */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
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
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : Object */;
val* var123 /* : String */;
long var124 /* : Int */;
val* var125 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : MMethod */;
val* var132 /* : Array[RuntimeVariable] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[RuntimeVariable] */;
val* var135 /* : nullable RuntimeVariable */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
var_array = p0;
var_elttype = p1;
if (varonce) {
var1 = varonce;
} else {
var2 = "NativeArray";
var3 = 11;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var1) /* get_class on <self:SeparateErasureCompilerVisitor>*/;
var_nclass = var5;
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_elttype) /* anchor on <self:SeparateErasureCompilerVisitor>*/;
var_elttype = var6;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "Array";
var10 = 5;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var8) /* get_class on <self:SeparateErasureCompilerVisitor>*/;
var13 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var13 = array_instance Array[MType] */
var14 = 1;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[MType]>*/;
}
var16 = ((val* (*)(val*, val*))(var12->class->vft[COLOR_model__MClass__get_mtype]))(var12, var13) /* get_mtype on <var12:MClass>*/;
var_arraytype = var16;
var17 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype) /* init_instance on <self:SeparateErasureCompilerVisitor>*/;
var_res = var17;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "{ /* ";
var21 = 5;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = " = array_instance Array[";
var26 = 24;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "] */";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 5;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var24;
((struct instance_array__NativeArray*)var35)->values[3] = (val*) var_elttype;
((struct instance_array__NativeArray*)var35)->values[4] = (val*) var29;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var36) /* add on <self:SeparateErasureCompilerVisitor>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "NativeArray";
var40 = 11;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var38) /* get_class on <self:SeparateErasureCompilerVisitor>*/;
var43 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var43 = array_instance Array[MType] */
var44 = 1;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[MType]>*/;
}
var46 = ((val* (*)(val*, val*))(var42->class->vft[COLOR_model__MClass__get_mtype]))(var42, var43) /* get_mtype on <var42:MClass>*/;
var47 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var46) /* new_var on <self:SeparateErasureCompilerVisitor>*/;
var_nat = var47;
var48 = 1;
((void (*)(val*, short int))(var_nat->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_nat, var48) /* is_exact= on <var_nat:RuntimeVariable>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = "NEW_";
var52 = 4;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = ((val* (*)(val*))(var_nclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_nclass) /* c_name on <var_nclass:MClass>*/;
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 2;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var50;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var54;
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var58) /* require_declaration on <self:SeparateErasureCompilerVisitor>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = " = NEW_";
var62 = 7;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*))(var_nclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_nclass) /* c_name on <var_nclass:MClass>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = "(";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[RuntimeVariable]>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = ");";
var74 = 2;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 6;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var60;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var64;
((struct instance_array__NativeArray*)var78)->values[3] = (val*) var66;
var79 = BOX_kernel__Int(var70); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var78)->values[4] = (val*) var79;
((struct instance_array__NativeArray*)var78)->values[5] = (val*) var72;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var80 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var80) /* add on <self:SeparateErasureCompilerVisitor>*/;
var81 = NEW_range__Range(&type_range__Rangekernel__Int);
var82 = 0;
var83 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[RuntimeVariable]>*/;
var84 = BOX_kernel__Int(var82); /* autobox from Int to Discrete */
var85 = BOX_kernel__Int(var83); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var81->class->vft[COLOR_range__Range__without_last]))(var81, var84, var85) /* without_last on <var81:Range[Int]>*/;
var86 = ((val* (*)(val*))(var81->class->vft[COLOR_abstract_collection__Collection__iterator]))(var81) /* iterator on <var81:Range[Int]>*/;
for(;;) {
var87 = ((short int (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var86) /* is_ok on <var86:Iterator[nullable Object]>*/;
if(!var87) break;
var88 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__item]))(var86) /* item on <var86:Iterator[nullable Object]>*/;
var89 = ((struct instance_kernel__Int*)var88)->value; /* autounbox from nullable Object to Int */;
var_i = var89;
var90 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[RuntimeVariable]>*/;
var91 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__object_type]))(self) /* object_type on <self:SeparateErasureCompilerVisitor>*/;
var92 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var90, var91) /* autobox on <self:SeparateErasureCompilerVisitor>*/;
var_r = var92;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "((struct instance_";
var96 = 18;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = ((val* (*)(val*))(var_nclass->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var_nclass) /* c_name on <var_nclass:MClass>*/;
if (varonce99) {
var100 = varonce99;
} else {
var101 = "*)";
var102 = 2;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = ")->values[";
var107 = 10;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = "] = (val*) ";
var112 = 11;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = ";";
var117 = 1;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 9;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var94;
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var98;
((struct instance_array__NativeArray*)var121)->values[2] = (val*) var100;
((struct instance_array__NativeArray*)var121)->values[3] = (val*) var_nat;
((struct instance_array__NativeArray*)var121)->values[4] = (val*) var105;
var122 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var121)->values[5] = (val*) var122;
((struct instance_array__NativeArray*)var121)->values[6] = (val*) var110;
((struct instance_array__NativeArray*)var121)->values[7] = (val*) var_r;
((struct instance_array__NativeArray*)var121)->values[8] = (val*) var115;
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
var123 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var123) /* add on <self:SeparateErasureCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__next]))(var86) /* next on <var86:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var124 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[RuntimeVariable]>*/;
var125 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__int_instance]))(self, var124) /* int_instance on <self:SeparateErasureCompilerVisitor>*/;
var_length = var125;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "with_native";
var129 = 11;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(self, var127, var_arraytype) /* get_property on <self:SeparateErasureCompilerVisitor>*/;
var132 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var132 = array_instance Array[RuntimeVariable] */
var133 = 3;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var_nat;
((struct instance_array__NativeArray*)var134)->values[2] = (val*) var_length;
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[RuntimeVariable]>*/;
}
var135 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(self, var131, var132) /* send on <self:SeparateErasureCompilerVisitor>*/;
var135;
if (varonce136) {
var137 = varonce136;
} else {
var138 = "}";
var139 = 1;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var137) /* add on <self:SeparateErasureCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#array_instance for (self: Object, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_erasure_compiler__SeparateErasureCompilerVisitor__array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array for (self: SeparateErasureCompilerVisitor, MType, Array[RuntimeVariable]) */
void separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
val* var_ret_type /* var ret_type: MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_ret /* var ret: MClassType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : MClass */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
long var23 /* : Int */;
val* var24 /* : nullable Object */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
val* var34 /* : RuntimeVariable */;
var_ret_type = p0;
var_arguments = p1;
/* <var_ret_type:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_ret_type->type->table_size) {
var = 0;
} else {
var = var_ret_type->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = var_ret_type == NULL ? "null" : var_ret_type->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_erasure_compiler.nit", 611);
show_backtrace(1);
}
var_ret = var_ret_type;
if (varonce) {
var1 = varonce;
} else {
var2 = "NEW_";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*))(var_ret->class->vft[COLOR_model__MClassType__mclass]))(var_ret) /* mclass on <var_ret:MClassType>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var5) /* c_name on <var5:MClass>*/;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var6;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var10) /* require_declaration on <self:SeparateErasureCompilerVisitor>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "NEW_";
var14 = 4;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = ((val* (*)(val*))(var_ret->class->vft[COLOR_model__MClassType__mclass]))(var_ret) /* mclass on <var_ret:MClassType>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var16) /* c_name on <var16:MClass>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "(";
var21 = 1;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = 1;
var24 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var23) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = ")";
var28 = 1;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 5;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var17;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var19;
((struct instance_array__NativeArray*)var32)->values[3] = (val*) var24;
((struct instance_array__NativeArray*)var32)->values[4] = (val*) var26;
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_expr]))(self, var33, var_ret_type) /* new_expr on <self:SeparateErasureCompilerVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__ret]))(self, var34) /* ret on <self:SeparateErasureCompilerVisitor>*/;
RET_LABEL:;
}
/* method separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array for (self: Object, MType, Array[RuntimeVariable]) */
void VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array(self, p0, p1);
RET_LABEL:;
}
