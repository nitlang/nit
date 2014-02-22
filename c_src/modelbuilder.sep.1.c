#include "modelbuilder.sep.0.h"
/* method modelbuilder#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* modelbuilder__ToolContext__opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___64dopt_path].val; /* @opt_path on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_path");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 37);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_path for (self: Object): OptionArray */
val* VIRTUAL_modelbuilder__ToolContext__opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = modelbuilder__ToolContext__opt_path(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_path= for (self: ToolContext, OptionArray) */
void modelbuilder__ToolContext__opt_path_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_path].val = p0; /* @opt_path on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder#ToolContext#opt_path= for (self: Object, OptionArray) */
void VIRTUAL_modelbuilder__ToolContext__opt_path_61d(val* self, val* p0) {
modelbuilder__ToolContext__opt_path_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ToolContext#opt_only_metamodel for (self: ToolContext): OptionBool */
val* modelbuilder__ToolContext__opt_only_metamodel(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_metamodel].val; /* @opt_only_metamodel on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_only_metamodel");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 40);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_only_metamodel for (self: Object): OptionBool */
val* VIRTUAL_modelbuilder__ToolContext__opt_only_metamodel(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = modelbuilder__ToolContext__opt_only_metamodel(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_only_metamodel= for (self: ToolContext, OptionBool) */
void modelbuilder__ToolContext__opt_only_metamodel_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_metamodel].val = p0; /* @opt_only_metamodel on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder#ToolContext#opt_only_metamodel= for (self: Object, OptionBool) */
void VIRTUAL_modelbuilder__ToolContext__opt_only_metamodel_61d(val* self, val* p0) {
modelbuilder__ToolContext__opt_only_metamodel_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ToolContext#opt_only_parse for (self: ToolContext): OptionBool */
val* modelbuilder__ToolContext__opt_only_parse(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_parse].val; /* @opt_only_parse on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_only_parse");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 43);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_only_parse for (self: Object): OptionBool */
val* VIRTUAL_modelbuilder__ToolContext__opt_only_parse(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = modelbuilder__ToolContext__opt_only_parse(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_only_parse= for (self: ToolContext, OptionBool) */
void modelbuilder__ToolContext__opt_only_parse_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_parse].val = p0; /* @opt_only_parse on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder#ToolContext#opt_only_parse= for (self: Object, OptionBool) */
void VIRTUAL_modelbuilder__ToolContext__opt_only_parse_61d(val* self, val* p0) {
modelbuilder__ToolContext__opt_only_parse_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ToolContext#init for (self: ToolContext) */
void modelbuilder__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionArray */;
val* var2 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : Array[Option] */;
long var5 /* : Int */;
val* var6 /* : NativeArray[Option] */;
((void (*)(val*))(self->class->vft[COLOR_modelbuilder__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ToolContext__opt_path]))(self) /* opt_path on <self:ToolContext>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ToolContext__opt_only_parse]))(self) /* opt_only_parse on <self:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ToolContext__opt_only_metamodel]))(self) /* opt_only_metamodel on <self:ToolContext>*/;
var4 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var4 = array_instance Array[Option] */
var5 = 3;
var6 = NEW_array__NativeArray(var5, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var6)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var6)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var6)->values[2] = (val*) var3;
((void (*)(val*, val*, long))(var4->class->vft[COLOR_array__Array__with_native]))(var4, var6, var5) /* with_native on <var4:Array[Option]>*/;
}
((void (*)(val*, val*))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var4) /* add_option on <var:OptionContext>*/;
RET_LABEL:;
}
/* method modelbuilder#ToolContext#init for (self: Object) */
void VIRTUAL_modelbuilder__ToolContext__init(val* self) {
modelbuilder__ToolContext__init(self);
RET_LABEL:;
}
/* method modelbuilder#ToolContext#modelbuilder for (self: ToolContext): ModelBuilder */
val* modelbuilder__ToolContext__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder_real]))(self) /* modelbuilder_real on <self:ToolContext>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 52);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#modelbuilder for (self: Object): ModelBuilder */
val* VIRTUAL_modelbuilder__ToolContext__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = modelbuilder__ToolContext__modelbuilder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#modelbuilder_real for (self: ToolContext): nullable ModelBuilder */
val* modelbuilder__ToolContext__modelbuilder_real(val* self) {
val* var /* : nullable ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___64dmodelbuilder_real].val; /* @modelbuilder_real on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#modelbuilder_real for (self: Object): nullable ModelBuilder */
val* VIRTUAL_modelbuilder__ToolContext__modelbuilder_real(val* self) {
val* var /* : nullable ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
var1 = modelbuilder__ToolContext__modelbuilder_real(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#modelbuilder_real= for (self: ToolContext, nullable ModelBuilder) */
void modelbuilder__ToolContext__modelbuilder_real_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ToolContext___64dmodelbuilder_real].val = p0; /* @modelbuilder_real on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder#ToolContext#modelbuilder_real= for (self: Object, nullable ModelBuilder) */
void VIRTUAL_modelbuilder__ToolContext__modelbuilder_real_61d(val* self, val* p0) {
modelbuilder__ToolContext__modelbuilder_real_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ToolContext#run_global_phases for (self: ToolContext, MModule) */
void modelbuilder__ToolContext__run_global_phases(val* self, val* p0) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var /* : Sequence[Phase] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
var_mainmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases_list]))(self) /* phases_list on <self:ToolContext>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Sequence[Phase]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_phase = var3;
((void (*)(val*, val*))(var_phase->class->vft[COLOR_modelbuilder__Phase__process_mainmodule]))(var_phase, var_mainmodule) /* process_mainmodule on <var_phase:Phase>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method modelbuilder#ToolContext#run_global_phases for (self: Object, MModule) */
void VIRTUAL_modelbuilder__ToolContext__run_global_phases(val* self, val* p0) {
modelbuilder__ToolContext__run_global_phases(self, p0);
RET_LABEL:;
}
/* method modelbuilder#Phase#process_mainmodule for (self: Phase, MModule) */
void modelbuilder__Phase__process_mainmodule(val* self, val* p0) {
val* var_mainmodule /* var mainmodule: MModule */;
var_mainmodule = p0;
RET_LABEL:;
}
/* method modelbuilder#Phase#process_mainmodule for (self: Object, MModule) */
void VIRTUAL_modelbuilder__Phase__process_mainmodule(val* self, val* p0) {
modelbuilder__Phase__process_mainmodule(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#model for (self: ModelBuilder): Model */
val* modelbuilder__ModelBuilder__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dmodel].val; /* @model on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @model");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 73);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#model for (self: Object): Model */
val* VIRTUAL_modelbuilder__ModelBuilder__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = modelbuilder__ModelBuilder__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#model= for (self: ModelBuilder, Model) */
void modelbuilder__ModelBuilder__model_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64dmodel].val = p0; /* @model on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#model= for (self: Object, Model) */
void VIRTUAL_modelbuilder__ModelBuilder__model_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__model_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#toolcontext for (self: ModelBuilder): ToolContext */
val* modelbuilder__ModelBuilder__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dtoolcontext].val; /* @toolcontext on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 76);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_modelbuilder__ModelBuilder__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = modelbuilder__ModelBuilder__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#toolcontext= for (self: ModelBuilder, ToolContext) */
void modelbuilder__ModelBuilder__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64dtoolcontext].val = p0; /* @toolcontext on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_modelbuilder__ModelBuilder__toolcontext_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#run_phases for (self: ModelBuilder) */
void modelbuilder__ModelBuilder__run_phases(val* self) {
val* var /* : Model */;
val* var1 /* : Array[MModule] */;
val* var2 /* : Array[nullable Object] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var3 /* : Model */;
val* var4 /* : POSet[MModule] */;
val* var5 /* : Array[AModule] */;
val* var_nmodules /* var nmodules: Array[AModule] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mm /* var mm: MModule */;
val* var9 /* : HashMap[MModule, AModule] */;
val* var10 /* : nullable Object */;
val* var11 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var13 /* : OptionBool */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
val* var16 /* : ToolContext */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
long var21 /* : Int */;
long var22 /* : Int */;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_mmodule__Model__mmodules]))(var) /* mmodules on <var:Model>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_array__Collection__to_a]))(var1) /* to_a on <var1:Array[MModule]>*/;
var_mmodules = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_mmodule__Model__mmodule_importation_hierarchy]))(var3) /* mmodule_importation_hierarchy on <var3:Model>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_sorter__AbstractSorter__sort]))(var4, var_mmodules) /* sort on <var4:POSet[MModule]>*/;
var5 = NEW_array__Array(&type_array__Arrayparser_nodes__AModule);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[AModule]>*/;
var_nmodules = var5;
var6 = ((val* (*)(val*))(var_mmodules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_mmodules) /* iterator on <var_mmodules:Array[MModule]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_mm = var8;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(self) /* mmodule2nmodule on <self:ModelBuilder>*/;
var10 = ((val* (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var9, var_mm) /* [] on <var9:HashMap[MModule, AModule]>*/;
((void (*)(val*, val*))(var_nmodules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_nmodules, var10) /* add on <var_nmodules:Array[AModule]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
((void (*)(val*, val*))(var11->class->vft[COLOR_phase__ToolContext__run_phases]))(var11, var_nmodules) /* run_phases on <var11:ToolContext>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ToolContext__opt_only_metamodel]))(var12) /* opt_only_metamodel on <var12:ToolContext>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_opts__Option__value]))(var13) /* value on <var13:OptionBool>*/;
var15 = ((struct instance_kernel__Bool*)var14)->value; /* autounbox from nullable Object to Bool */;
if (var15){
var16 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce) {
var17 = varonce;
} else {
var18 = "*** ONLY METAMODEL";
var19 = 18;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
var21 = 1;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_toolcontext__ToolContext__info]))(var16, var17, var21) /* info on <var16:ToolContext>*/;
var22 = 0;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var22) /* exit on <self:ModelBuilder>*/;
} else {
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#run_phases for (self: Object) */
void VIRTUAL_modelbuilder__ModelBuilder__run_phases(val* self) {
modelbuilder__ModelBuilder__run_phases(self);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#init for (self: ModelBuilder, Model, ToolContext) */
void modelbuilder__ModelBuilder__init(val* self, val* p0, val* p1) {
val* var_model /* var model: Model */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable ModelBuilder */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : Array[String] */;
val* var4 /* : OptionArray */;
val* var5 /* : nullable Object */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_path_env /* var path_env: String */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Array[String] */;
char var14 /* : Char */;
val* var15 /* : Array[String] */;
val* var16 /* : Pattern */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var_ /* var : Array[Object] */;
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
val* var37 /* : String */;
val* var_libname /* var libname: String */;
short int var38 /* : Bool */;
val* var39 /* : Array[String] */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var_42 /* var : Array[Object] */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : Sys */;
val* var49 /* : String */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var_libname57 /* var libname: String */;
short int var58 /* : Bool */;
val* var59 /* : Array[String] */;
val* var60 /* : String */;
var_model = p0;
var_toolcontext = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model_61d]))(self, var_model) /* model= on <self:ModelBuilder>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext_61d]))(self, var_toolcontext) /* toolcontext= on <self:ModelBuilder>*/;
var = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder_real]))(var_toolcontext) /* modelbuilder_real on <var_toolcontext:ToolContext>*/;
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 102);
show_backtrace(1);
}
((void (*)(val*, val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder_real_61d]))(var_toolcontext, self) /* modelbuilder_real= on <var_toolcontext:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__paths]))(self) /* paths on <self:ModelBuilder>*/;
var4 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_modelbuilder__ToolContext__opt_path]))(var_toolcontext) /* opt_path on <var_toolcontext:ToolContext>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_opts__Option__value]))(var4) /* value on <var4:OptionArray>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Sequence__append]))(var3, var5) /* append on <var3:Array[String]>*/;
if (varonce) {
var6 = varonce;
} else {
var7 = "NIT_PATH";
var8 = 8;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = ((val* (*)(val*))(var6->class->vft[COLOR_environ__String__environ]))(var6) /* environ on <var6:String>*/;
var_path_env = var10;
var11 = ((short int (*)(val*))(var_path_env->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_path_env) /* is_empty on <var_path_env:String>*/;
var12 = !var11;
if (var12){
var13 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__paths]))(self) /* paths on <self:ModelBuilder>*/;
var14 = ':';
var16 = BOX_kernel__Char(var14); /* autobox from Char to Pattern */
var15 = ((val* (*)(val*, val*))(var_path_env->class->vft[COLOR_string_search__String__split_with]))(var_path_env, var16) /* split_with on <var_path_env:String>*/;
((void (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__Sequence__append]))(var13, var15) /* append on <var13:Array[String]>*/;
} else {
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "NIT_DIR";
var20 = 7;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*))(var18->class->vft[COLOR_environ__String__environ]))(var18) /* environ on <var18:String>*/;
var_path_env = var22;
var23 = ((short int (*)(val*))(var_path_env->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_path_env) /* is_empty on <var_path_env:String>*/;
var24 = !var23;
if (var24){
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
var26 = 3;
((void (*)(val*, long))(var25->class->vft[COLOR_array__Array__with_capacity]))(var25, var26) /* with_capacity on <var25:Array[Object]>*/;
var_ = var25;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "";
var30 = 0;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var28) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_path_env) /* add on <var_:Array[Object]>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "/lib";
var35 = 4;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var33) /* add on <var_:Array[Object]>*/;
var37 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_libname = var37;
var38 = ((short int (*)(val*))(var_libname->class->vft[COLOR_file__String__file_exists]))(var_libname) /* file_exists on <var_libname:String>*/;
if (var38){
var39 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__paths]))(self) /* paths on <self:ModelBuilder>*/;
((void (*)(val*, val*))(var39->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var39, var_libname) /* add on <var39:Array[String]>*/;
} else {
}
} else {
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
var41 = 3;
((void (*)(val*, long))(var40->class->vft[COLOR_array__Array__with_capacity]))(var40, var41) /* with_capacity on <var40:Array[Object]>*/;
var_42 = var40;
if (varonce43) {
var44 = varonce43;
} else {
var45 = "";
var46 = 0;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
((void (*)(val*, val*))(var_42->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_42, var44) /* add on <var_42:Array[Object]>*/;
var48 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:ModelBuilder>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_string__Sys__program_name]))(var48) /* program_name on <var48:Sys>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_file__String__dirname]))(var49) /* dirname on <var49:String>*/;
((void (*)(val*, val*))(var_42->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_42, var50) /* add on <var_42:Array[Object]>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "/../lib";
var54 = 7;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
((void (*)(val*, val*))(var_42->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_42, var52) /* add on <var_42:Array[Object]>*/;
var56 = ((val* (*)(val*))(var_42->class->vft[COLOR_string__Object__to_s]))(var_42) /* to_s on <var_42:Array[Object]>*/;
var_libname57 = var56;
var58 = ((short int (*)(val*))(var_libname57->class->vft[COLOR_file__String__file_exists]))(var_libname57) /* file_exists on <var_libname57:String>*/;
if (var58){
var59 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__paths]))(self) /* paths on <self:ModelBuilder>*/;
var60 = ((val* (*)(val*))(var_libname57->class->vft[COLOR_file__String__simplify_path]))(var_libname57) /* simplify_path on <var_libname57:String>*/;
((void (*)(val*, val*))(var59->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var59, var60) /* add on <var59:Array[String]>*/;
} else {
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#init for (self: Object, Model, ToolContext) */
void VIRTUAL_modelbuilder__ModelBuilder__init(val* self, val* p0, val* p1) {
modelbuilder__ModelBuilder__init(self, p0, p1);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#parse for (self: ModelBuilder, Sequence[String]): Array[MModule] */
val* modelbuilder__ModelBuilder__parse(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_modules /* var modules: Sequence[String] */;
long var1 /* : Int */;
long var_time0 /* var time0: Int */;
val* var2 /* : ToolContext */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
long var7 /* : Int */;
val* var8 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_a /* var a: String */;
val* var12 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable MModule */;
long var16 /* : Int */;
long var_time1 /* var time1: Int */;
val* var17 /* : ToolContext */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
long var23 /* : Int */;
long var25 /* : Int */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : Object */;
val* var35 /* : String */;
long var36 /* : Int */;
val* var37 /* : ToolContext */;
val* var38 /* : ToolContext */;
val* var39 /* : OptionBool */;
val* var40 /* : nullable Object */;
short int var41 /* : Bool */;
val* var42 /* : ToolContext */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
long var48 /* : Int */;
long var49 /* : Int */;
val* var50 /* : Array[nullable Object] */;
var_modules = p0;
var1 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time0 = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "*** PARSE ***";
var5 = 13;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = 1;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_toolcontext__ToolContext__info]))(var2, var3, var7) /* info on <var2:ToolContext>*/;
var8 = NEW_array__ArraySet(&type_array__ArraySetmmodule__MModule);
((void (*)(val*))(var8->class->vft[COLOR_array__ArraySet__init]))(var8) /* init on <var8:ArraySet[MModule]>*/;
var_mmodules = var8;
var9 = ((val* (*)(val*))(var_modules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_modules) /* iterator on <var_modules:Sequence[String]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_a = var11;
var12 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module]))(self, var_a) /* load_module on <self:ModelBuilder>*/;
var_nmodule = var12;
var13 = NULL;
if (var_nmodule == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (var14){
goto CONTINUE_label;
} else {
}
var15 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:nullable AModule(AModule)>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 139);
show_backtrace(1);
}
((void (*)(val*, val*))(var_mmodules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mmodules, var15) /* add on <var_mmodules:ArraySet[MModule]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var16 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var16;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "*** END PARSE: ";
var21 = 15;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var25 = var_time1 - var_time0;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = " ***";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 3;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var19;
var34 = BOX_kernel__Int(var23); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var34;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var27;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
var36 = 2;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_toolcontext__ToolContext__info]))(var17, var35, var36) /* info on <var17:ToolContext>*/;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
((void (*)(val*))(var37->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(var37) /* check_errors on <var37:ToolContext>*/;
var38 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var39 = ((val* (*)(val*))(var38->class->vft[COLOR_modelbuilder__ToolContext__opt_only_parse]))(var38) /* opt_only_parse on <var38:ToolContext>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_opts__Option__value]))(var39) /* value on <var39:OptionBool>*/;
var41 = ((struct instance_kernel__Bool*)var40)->value; /* autounbox from nullable Object to Bool */;
if (var41){
var42 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = "*** ONLY PARSE...";
var46 = 17;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = 1;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_toolcontext__ToolContext__info]))(var42, var44, var48) /* info on <var42:ToolContext>*/;
var49 = 0;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var49) /* exit on <self:ModelBuilder>*/;
} else {
}
var50 = ((val* (*)(val*))(var_mmodules->class->vft[COLOR_array__Collection__to_a]))(var_mmodules) /* to_a on <var_mmodules:ArraySet[MModule]>*/;
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#parse for (self: Object, Sequence[String]): Array[MModule] */
val* VIRTUAL_modelbuilder__ModelBuilder__parse(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = modelbuilder__ModelBuilder__parse(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* modelbuilder__ModelBuilder__try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MClass */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var_res /* var res: nullable MClass */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var10 /* : POSetElement[MModule] */;
val* var11 /* : MModule */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MModule */;
val* var15 /* : MVisibility */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
val* var40 /* : null */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_model__Model__get_mclasses_by_name]))(var1, var_name) /* get_mclasses_by_name on <var1:Model>*/;
var_classes = var2;
var3 = NULL;
if (var_classes == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
var5 = NULL;
var = var5;
goto RET_LABEL;
} else {
}
var6 = NULL;
var_res = var6;
var7 = ((val* (*)(val*))(var_classes->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_classes) /* iterator on <var_classes:nullable Array[MClass](Array[MClass])>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_mclass = var9;
var10 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mmodule) /* in_importation on <var_mmodule:MModule>*/;
var11 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
var12 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_poset__POSetElement___60d_61d]))(var10, var11) /* <= on <var10:POSetElement[MModule]>*/;
var13 = !var12;
if (var13){
goto CONTINUE_label;
} else {
}
var14 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
var15 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__visibility]))(var_mclass) /* visibility on <var_mclass:MClass>*/;
var16 = ((short int (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__is_visible]))(var_mmodule, var14, var15) /* is_visible on <var_mmodule:MModule>*/;
var17 = !var16;
if (var17){
goto CONTINUE_label;
} else {
}
var18 = NULL;
if (var_res == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (var19){
var_res = var_mclass;
} else {
if (varonce) {
var20 = varonce;
} else {
var21 = "Ambigous class name \'";
var22 = 21;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "\'; conflict between ";
var27 = 20;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__full_name]))(var_mclass) /* full_name on <var_mclass:MClass>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = " and ";
var33 = 5;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MClass__full_name]))(var_res) /* full_name on <var_res:nullable MClass(MClass)>*/;
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 6;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var25;
((struct instance_array__NativeArray*)var38)->values[3] = (val*) var29;
((struct instance_array__NativeArray*)var38)->values[4] = (val*) var31;
((struct instance_array__NativeArray*)var38)->values[5] = (val*) var35;
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var39) /* error on <self:ModelBuilder>*/;
var40 = NULL;
var = var40;
goto RET_LABEL;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mclass_by_name for (self: Object, ANode, MModule, String): nullable MClass */
val* VIRTUAL_modelbuilder__ModelBuilder__try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = modelbuilder__ModelBuilder__try_get_mclass_by_name(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name2 for (self: ModelBuilder, ANode, MModule, MType, String): nullable MProperty */
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MProperty] */;
val* var_props /* var props: nullable Array[MProperty] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var7 /* : nullable Object */;
val* var_cache /* var cache: nullable MProperty */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : null */;
val* var_res /* var res: nullable MProperty */;
val* var11 /* : null */;
val* var_ress /* var ress: nullable Array[MProperty] */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var19 /* : MVisibility */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : MClassDef */;
val* var25 /* : MClassType */;
val* var_restype /* var restype: MClassType */;
val* var26 /* : MClassDef */;
val* var27 /* : MClassType */;
val* var_mproptype /* var mproptype: MClassType */;
val* var28 /* : null */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
val* var32 /* : null */;
short int var33 /* : Bool */;
val* var34 /* : Array[MProperty] */;
val* var35 /* : null */;
short int var36 /* : Bool */;
val* var37 /* : MClassDef */;
val* var38 /* : MClassType */;
val* var_restype39 /* var restype: MClassType */;
val* var40 /* : Iterator[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_mprop43 /* var mprop: MProperty */;
val* var44 /* : MClassDef */;
val* var45 /* : MClassType */;
val* var_mproptype46 /* var mproptype: MClassType */;
val* var47 /* : null */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
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
val* var70 /* : String */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var73 /* : NativeArray[Object] */;
val* var74 /* : String */;
val* var75 /* : null */;
val* var77 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var_anode = p0;
var_mmodule = p1;
var_mtype = p2;
var_name = p3;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_model__Model__get_mproperties_by_name]))(var1, var_name) /* get_mproperties_by_name on <var1:Model>*/;
var_props = var2;
var3 = NULL;
if (var_props == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
var5 = NULL;
var = var5;
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache]))(self) /* try_get_mproperty_by_name2_cache on <self:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*, val*, val*))(var6->class->vft[COLOR_more_collections__HashMap3___91d_93d]))(var6, var_mmodule, var_mtype, var_name) /* [] on <var6:HashMap3[MModule, MType, String, nullable MProperty]>*/;
var_cache = var7;
var8 = NULL;
if (var_cache == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
var = var_cache;
goto RET_LABEL;
} else {
}
var10 = NULL;
var_res = var10;
var11 = NULL;
var_ress = var11;
var12 = ((val* (*)(val*))(var_props->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_props) /* iterator on <var_props:nullable Array[MProperty](Array[MProperty])>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
var_mprop = var14;
var15 = ((short int (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__has_mproperty]))(var_mtype, var_mmodule, var_mprop) /* has_mproperty on <var_mtype:MType>*/;
var16 = !var15;
if (var16){
goto CONTINUE_label;
} else {
}
var17 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_mprop) /* intro_mclassdef on <var_mprop:MProperty>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_model__MClassDef__mmodule]))(var17) /* mmodule on <var17:MClassDef>*/;
var19 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__visibility]))(var_mprop) /* visibility on <var_mprop:MProperty>*/;
var20 = ((short int (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__is_visible]))(var_mmodule, var18, var19) /* is_visible on <var_mmodule:MModule>*/;
var21 = !var20;
if (var21){
goto CONTINUE_label;
} else {
}
var22 = NULL;
if (var_res == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (var23){
var_res = var_mprop;
} else {
var24 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_res) /* intro_mclassdef on <var_res:nullable MProperty(MProperty)>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_model__MClassDef__bound_mtype]))(var24) /* bound_mtype on <var24:MClassDef>*/;
var_restype = var25;
var26 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_mprop) /* intro_mclassdef on <var_mprop:MProperty>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MClassDef__bound_mtype]))(var26) /* bound_mtype on <var26:MClassDef>*/;
var_mproptype = var27;
var28 = NULL;
var29 = ((short int (*)(val*, val*, val*, val*))(var_restype->class->vft[COLOR_model__MType__is_subtype]))(var_restype, var_mmodule, var28, var_mproptype) /* is_subtype on <var_restype:MClassType>*/;
if (var29){
} else {
var30 = NULL;
var31 = ((short int (*)(val*, val*, val*, val*))(var_mproptype->class->vft[COLOR_model__MType__is_subtype]))(var_mproptype, var_mmodule, var30, var_restype) /* is_subtype on <var_mproptype:MClassType>*/;
if (var31){
var_res = var_mprop;
} else {
var32 = NULL;
if (var_ress == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (var33){
var34 = NEW_array__Array(&type_array__Arraymodel__MProperty);
((void (*)(val*))(var34->class->vft[COLOR_array__Array__init]))(var34) /* init on <var34:Array[MProperty]>*/;
var_ress = var34;
} else {
}
((void (*)(val*, val*))(var_ress->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_ress, var_mprop) /* add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/;
}
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var35 = NULL;
if (var_ress == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (var36){
if (var_res == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 217);
show_backtrace(1);
} else {
var37 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_res) /* intro_mclassdef on <var_res:nullable MProperty>*/;
}
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_model__MClassDef__bound_mtype]))(var37) /* bound_mtype on <var37:MClassDef>*/;
var_restype39 = var38;
var40 = ((val* (*)(val*))(var_ress->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_ress) /* iterator on <var_ress:nullable Array[MProperty](Array[MProperty])>*/;
for(;;) {
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[nullable Object]>*/;
if(!var41) break;
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[nullable Object]>*/;
var_mprop43 = var42;
var44 = ((val* (*)(val*))(var_mprop43->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_mprop43) /* intro_mclassdef on <var_mprop43:MProperty>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_model__MClassDef__bound_mtype]))(var44) /* bound_mtype on <var44:MClassDef>*/;
var_mproptype46 = var45;
var47 = NULL;
var48 = ((short int (*)(val*, val*, val*, val*))(var_restype39->class->vft[COLOR_model__MType__is_subtype]))(var_restype39, var_mmodule, var47, var_mproptype46) /* is_subtype on <var_restype39:MClassType>*/;
var49 = !var48;
if (var49){
if (varonce) {
var50 = varonce;
} else {
var51 = "Ambigous property name \'";
var52 = 24;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "\' for ";
var57 = 6;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "; conflict between ";
var62 = 19;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*))(var_mprop43->class->vft[COLOR_model__MProperty__full_name]))(var_mprop43) /* full_name on <var_mprop43:MProperty>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = " and ";
var68 = 5;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
if (var_res == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 221);
show_backtrace(1);
} else {
var70 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MProperty__full_name]))(var_res) /* full_name on <var_res:nullable MProperty>*/;
}
var71 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 8;
var73 = NEW_array__NativeArray(var72, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var73)->values[0] = (val*) var50;
((struct instance_array__NativeArray*)var73)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var73)->values[2] = (val*) var55;
((struct instance_array__NativeArray*)var73)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var73)->values[4] = (val*) var60;
((struct instance_array__NativeArray*)var73)->values[5] = (val*) var64;
((struct instance_array__NativeArray*)var73)->values[6] = (val*) var66;
((struct instance_array__NativeArray*)var73)->values[7] = (val*) var70;
((void (*)(val*, val*, long))(var71->class->vft[COLOR_array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
var74 = ((val* (*)(val*))(var71->class->vft[COLOR_string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var74) /* error on <self:ModelBuilder>*/;
var75 = NULL;
var = var75;
goto RET_LABEL;
} else {
}
CONTINUE_label76: (void)0;
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[nullable Object]>*/;
}
BREAK_label76: (void)0;
} else {
}
var77 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache]))(self) /* try_get_mproperty_by_name2_cache on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*, val*, val*))(var77->class->vft[COLOR_more_collections__HashMap3___91d_93d_61d]))(var77, var_mmodule, var_mtype, var_name, var_res) /* []= on <var77:HashMap3[MModule, MType, String, nullable MProperty]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name2 for (self: Object, ANode, MModule, MType, String): nullable MProperty */
val* VIRTUAL_modelbuilder__ModelBuilder__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable MProperty */;
val* var1 /* : nullable MProperty */;
var1 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache for (self: ModelBuilder): HashMap3[MModule, MType, String, nullable MProperty] */
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache(val* self) {
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dtry_get_mproperty_by_name2_cache].val; /* @try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @try_get_mproperty_by_name2_cache");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 231);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache for (self: Object): HashMap3[MModule, MType, String, nullable MProperty] */
val* VIRTUAL_modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache(val* self) {
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var1 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache= for (self: ModelBuilder, HashMap3[MModule, MType, String, nullable MProperty]) */
void modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64dtry_get_mproperty_by_name2_cache].val = p0; /* @try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache= for (self: Object, HashMap3[MModule, MType, String, nullable MProperty]) */
void VIRTUAL_modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name for (self: ModelBuilder, ANode, MClassDef, String): nullable MProperty */
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var3 /* : nullable MProperty */;
var_anode = p0;
var_mclassdef = p1;
var_name = p2;
var1 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_mclassdef) /* mmodule on <var_mclassdef:MClassDef>*/;
var2 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:MClassDef>*/;
var3 = ((val* (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(self, var_anode, var1, var2, var_name) /* try_get_mproperty_by_name2 on <self:ModelBuilder>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name for (self: Object, ANode, MClassDef, String): nullable MProperty */
val* VIRTUAL_modelbuilder__ModelBuilder__try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var1 /* : nullable MProperty */;
var1 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#paths for (self: ModelBuilder): Array[String] */
val* modelbuilder__ModelBuilder__paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dpaths].val; /* @paths on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @paths");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 240);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#paths for (self: Object): Array[String] */
val* VIRTUAL_modelbuilder__ModelBuilder__paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = modelbuilder__ModelBuilder__paths(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#paths= for (self: ModelBuilder, Array[String]) */
void modelbuilder__ModelBuilder__paths_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64dpaths].val = p0; /* @paths on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#paths= for (self: Object, Array[String]) */
void VIRTUAL_modelbuilder__ModelBuilder__paths_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__paths_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#get_mmodule_by_name for (self: ModelBuilder, ANode, nullable MModule, String): nullable MModule */
val* modelbuilder__ModelBuilder__get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var_name /* var name: String */;
val* var1 /* : Array[String] */;
val* var_tries /* var tries: Array[String] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable String */;
val* var_dirname /* var dirname: nullable String */;
val* var8 /* : null */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var_try_file /* var try_file: String */;
short int var28 /* : Bool */;
val* var29 /* : String */;
val* var30 /* : nullable AModule */;
val* var_res /* var res: nullable AModule */;
val* var31 /* : null */;
short int var32 /* : Bool */;
val* var33 /* : null */;
val* var34 /* : nullable MModule */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : String */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : nullable MGroup */;
val* var64 /* : String */;
val* var65 /* : nullable AModule */;
val* var_res66 /* var res: nullable AModule */;
val* var67 /* : null */;
short int var68 /* : Bool */;
val* var69 /* : null */;
val* var70 /* : nullable MModule */;
val* var71 /* : nullable MGroup */;
val* var72 /* : Array[String] */;
val* var_lookpaths /* var lookpaths: Array[String] */;
short int var73 /* : Bool */;
val* var74 /* : null */;
short int var75 /* : Bool */;
short int var_ /* var : Bool */;
val* var76 /* : nullable MGroup */;
val* var77 /* : null */;
short int var78 /* : Bool */;
val* var79 /* : nullable MGroup */;
val* var80 /* : MProject */;
val* var81 /* : nullable MGroup */;
val* var82 /* : nullable String */;
val* var_dirname83 /* var dirname: nullable String */;
val* var84 /* : null */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var_96 /* var : Bool */;
short int var97 /* : Bool */;
val* var98 /* : Array[nullable Object] */;
val* var99 /* : null */;
val* var_candidate /* var candidate: nullable String */;
val* var100 /* : Iterator[nullable Object] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_dirname103 /* var dirname: String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : String */;
val* var_try_file118 /* var try_file: String */;
short int var119 /* : Bool */;
val* var120 /* : null */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : String */;
val* var_abs_candidate /* var abs_candidate: String */;
val* var124 /* : String */;
val* var_abs_try_file /* var abs_try_file: String */;
short int var125 /* : Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
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
val* var150 /* : String */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : String */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : String */;
val* var165 /* : String */;
short int var166 /* : Bool */;
val* var167 /* : null */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : String */;
val* var_abs_candidate171 /* var abs_candidate: String */;
val* var172 /* : String */;
val* var_abs_try_file173 /* var abs_try_file: String */;
short int var174 /* : Bool */;
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
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : String */;
val* var190 /* : Array[Object] */;
long var191 /* : Int */;
val* var192 /* : NativeArray[Object] */;
val* var193 /* : String */;
val* var195 /* : null */;
short int var196 /* : Bool */;
val* var197 /* : null */;
short int var198 /* : Bool */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : String */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
long var217 /* : Int */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : Array[Object] */;
long var221 /* : Int */;
val* var222 /* : NativeArray[Object] */;
val* var223 /* : String */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : String */;
val* var239 /* : String */;
val* var240 /* : Array[Object] */;
long var241 /* : Int */;
val* var242 /* : NativeArray[Object] */;
val* var243 /* : String */;
val* var244 /* : null */;
val* var245 /* : nullable AModule */;
val* var_res246 /* var res: nullable AModule */;
val* var247 /* : null */;
short int var248 /* : Bool */;
val* var249 /* : null */;
val* var250 /* : nullable MModule */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
var1 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[String]>*/;
var_tries = var1;
var2 = NULL;
if (var_mmodule == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__mgroup]))(var_mmodule) /* mgroup on <var_mmodule:nullable MModule(MModule)>*/;
var_mgroup = var4;
for(;;) {
var5 = NULL;
if (var_mgroup == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (!var6) break;
var7 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__filepath]))(var_mgroup) /* filepath on <var_mgroup:nullable MGroup(MGroup)>*/;
var_dirname = var7;
var8 = NULL;
if (var_dirname == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (var9){
goto BREAK_label;
} else {
}
if (varonce) {
var10 = varonce;
} else {
var11 = ".nit";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = ((short int (*)(val*, val*))(var_dirname->class->vft[COLOR_string__AbstractString__has_suffix]))(var_dirname, var10) /* has_suffix on <var_dirname:nullable String(String)>*/;
if (var14){
goto BREAK_label;
} else {
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "/";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((val* (*)(val*, val*))(var_dirname->class->vft[COLOR_string__String___43d]))(var_dirname, var16) /* + on <var_dirname:nullable String(String)>*/;
var21 = ((val* (*)(val*, val*))(var20->class->vft[COLOR_string__String___43d]))(var20, var_name) /* + on <var20:String>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = ".nit";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((val* (*)(val*, val*))(var21->class->vft[COLOR_string__String___43d]))(var21, var23) /* + on <var21:String>*/;
var_try_file = var27;
((void (*)(val*, val*))(var_tries->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_tries, var_try_file) /* add on <var_tries:Array[String]>*/;
var28 = ((short int (*)(val*))(var_try_file->class->vft[COLOR_file__String__file_exists]))(var_try_file) /* file_exists on <var_try_file:String>*/;
if (var28){
var29 = ((val* (*)(val*))(var_try_file->class->vft[COLOR_file__String__simplify_path]))(var_try_file) /* simplify_path on <var_try_file:String>*/;
var30 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module]))(self, var29) /* load_module on <self:ModelBuilder>*/;
var_res = var30;
var31 = NULL;
if (var_res == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (var32){
var33 = NULL;
var = var33;
goto RET_LABEL;
} else {
}
var34 = ((val* (*)(val*))(var_res->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_res) /* mmodule on <var_res:nullable AModule(AModule)>*/;
if (var34 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 272);
show_backtrace(1);
}
var = var34;
goto RET_LABEL;
} else {
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "/";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = ((val* (*)(val*, val*))(var_dirname->class->vft[COLOR_string__String___43d]))(var_dirname, var36) /* + on <var_dirname:nullable String(String)>*/;
var41 = ((val* (*)(val*, val*))(var40->class->vft[COLOR_string__String___43d]))(var40, var_name) /* + on <var40:String>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "/";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = ((val* (*)(val*, val*))(var41->class->vft[COLOR_string__String___43d]))(var41, var43) /* + on <var41:String>*/;
var48 = ((val* (*)(val*, val*))(var47->class->vft[COLOR_string__String___43d]))(var47, var_name) /* + on <var47:String>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = ".nit";
var52 = 4;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = ((val* (*)(val*, val*))(var48->class->vft[COLOR_string__String___43d]))(var48, var50) /* + on <var48:String>*/;
var_try_file = var54;
var55 = ((short int (*)(val*))(var_try_file->class->vft[COLOR_file__String__file_exists]))(var_try_file) /* file_exists on <var_try_file:String>*/;
if (var55){
if (varonce56) {
var57 = varonce56;
} else {
var58 = "/";
var59 = 1;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = ((val* (*)(val*, val*))(var_dirname->class->vft[COLOR_string__String___43d]))(var_dirname, var57) /* + on <var_dirname:nullable String(String)>*/;
var62 = ((val* (*)(val*, val*))(var61->class->vft[COLOR_string__String___43d]))(var61, var_name) /* + on <var61:String>*/;
var63 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__get_mgroup]))(self, var62) /* get_mgroup on <self:ModelBuilder>*/;
var_mgroup = var63;
var64 = ((val* (*)(val*))(var_try_file->class->vft[COLOR_file__String__simplify_path]))(var_try_file) /* simplify_path on <var_try_file:String>*/;
var65 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module]))(self, var64) /* load_module on <self:ModelBuilder>*/;
var_res66 = var65;
var67 = NULL;
if (var_res66 == NULL) {
var68 = 1; /* is null */
} else {
var68 = 0; /* arg is null but recv is not */
}
if (var68){
var69 = NULL;
var = var69;
goto RET_LABEL;
} else {
}
var70 = ((val* (*)(val*))(var_res66->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_res66) /* mmodule on <var_res66:nullable AModule(AModule)>*/;
if (var70 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 281);
show_backtrace(1);
}
var = var70;
goto RET_LABEL;
} else {
}
var71 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__parent]))(var_mgroup) /* parent on <var_mgroup:nullable MGroup(MGroup)>*/;
var_mgroup = var71;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
} else {
}
var72 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__paths]))(self) /* paths on <self:ModelBuilder>*/;
var_lookpaths = var72;
var74 = NULL;
if (var_mmodule == NULL) {
var75 = 0; /* is null */
} else {
var75 = 1; /* arg is null and recv is not */
}
var_ = var75;
if (var75){
var76 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__mgroup]))(var_mmodule) /* mgroup on <var_mmodule:nullable MModule(MModule)>*/;
var77 = NULL;
if (var76 == NULL) {
var78 = 0; /* is null */
} else {
var78 = 1; /* arg is null and recv is not */
}
var73 = var78;
} else {
var73 = var_;
}
if (var73){
var79 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__mgroup]))(var_mmodule) /* mgroup on <var_mmodule:nullable MModule(MModule)>*/;
if (var79 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 294);
show_backtrace(1);
} else {
var80 = ((val* (*)(val*))(var79->class->vft[COLOR_mproject__MGroup__mproject]))(var79) /* mproject on <var79:nullable MGroup>*/;
}
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_mproject__MProject__root]))(var80) /* root on <var80:MProject>*/;
if (var81 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 294);
show_backtrace(1);
} else {
var82 = ((val* (*)(val*))(var81->class->vft[COLOR_mproject__MGroup__filepath]))(var81) /* filepath on <var81:nullable MGroup>*/;
}
var_dirname83 = var82;
var84 = NULL;
if (var_dirname83 == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (var85){
if (varonce86) {
var87 = varonce86;
} else {
var88 = "..";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = ((val* (*)(val*, val*))(var_dirname83->class->vft[COLOR_file__String__join_path]))(var_dirname83, var87) /* join_path on <var_dirname83:nullable String(String)>*/;
var92 = ((val* (*)(val*))(var91->class->vft[COLOR_file__String__simplify_path]))(var91) /* simplify_path on <var91:String>*/;
var_dirname83 = var92;
var94 = ((short int (*)(val*, val*))(var_lookpaths->class->vft[COLOR_abstract_collection__Collection__has]))(var_lookpaths, var_dirname83) /* has on <var_lookpaths:Array[String]>*/;
var95 = !var94;
var_96 = var95;
if (var95){
var97 = ((short int (*)(val*))(var_dirname83->class->vft[COLOR_file__String__file_exists]))(var_dirname83) /* file_exists on <var_dirname83:nullable String(String)>*/;
var93 = var97;
} else {
var93 = var_96;
}
if (var93){
var98 = ((val* (*)(val*))(var_lookpaths->class->vft[COLOR_array__Collection__to_a]))(var_lookpaths) /* to_a on <var_lookpaths:Array[String]>*/;
var_lookpaths = var98;
((void (*)(val*, val*))(var_lookpaths->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_lookpaths, var_dirname83) /* add on <var_lookpaths:Array[String]>*/;
} else {
}
} else {
}
} else {
}
var99 = NULL;
var_candidate = var99;
var100 = ((val* (*)(val*))(var_lookpaths->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_lookpaths) /* iterator on <var_lookpaths:Array[String]>*/;
for(;;) {
var101 = ((short int (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var100) /* is_ok on <var100:Iterator[nullable Object]>*/;
if(!var101) break;
var102 = ((val* (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__item]))(var100) /* item on <var100:Iterator[nullable Object]>*/;
var_dirname103 = var102;
if (varonce104) {
var105 = varonce104;
} else {
var106 = "/";
var107 = 1;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = ((val* (*)(val*, val*))(var_dirname103->class->vft[COLOR_string__String___43d]))(var_dirname103, var105) /* + on <var_dirname103:String>*/;
var110 = ((val* (*)(val*, val*))(var109->class->vft[COLOR_string__String___43d]))(var109, var_name) /* + on <var109:String>*/;
if (varonce111) {
var112 = varonce111;
} else {
var113 = ".nit";
var114 = 4;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = ((val* (*)(val*, val*))(var110->class->vft[COLOR_string__String___43d]))(var110, var112) /* + on <var110:String>*/;
var117 = ((val* (*)(val*))(var116->class->vft[COLOR_file__String__simplify_path]))(var116) /* simplify_path on <var116:String>*/;
var_try_file118 = var117;
((void (*)(val*, val*))(var_tries->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_tries, var_try_file118) /* add on <var_tries:Array[String]>*/;
var119 = ((short int (*)(val*))(var_try_file118->class->vft[COLOR_file__String__file_exists]))(var_try_file118) /* file_exists on <var_try_file118:String>*/;
if (var119){
var120 = NULL;
if (var_candidate == NULL) {
var121 = 1; /* is null */
} else {
var121 = 0; /* arg is null but recv is not */
}
if (var121){
var_candidate = var_try_file118;
} else {
var122 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___33d_61d]))(var_candidate, var_try_file118) /* != on <var_candidate:nullable String(String)>*/;
if (var122){
var123 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_candidate) /* module_absolute_path on <self:ModelBuilder>*/;
var_abs_candidate = var123;
var124 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_try_file118) /* module_absolute_path on <self:ModelBuilder>*/;
var_abs_try_file = var124;
var125 = ((short int (*)(val*, val*))(var_abs_candidate->class->vft[COLOR_kernel__Object___33d_61d]))(var_abs_candidate, var_abs_try_file) /* != on <var_abs_candidate:String>*/;
if (var125){
if (varonce126) {
var127 = varonce126;
} else {
var128 = "Error: conflicting module file for ";
var129 = 35;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = ": ";
var134 = 2;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = " ";
var139 = 1;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 6;
var143 = NEW_array__NativeArray(var142, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var143)->values[0] = (val*) var127;
((struct instance_array__NativeArray*)var143)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var143)->values[2] = (val*) var132;
((struct instance_array__NativeArray*)var143)->values[3] = (val*) var_candidate;
((struct instance_array__NativeArray*)var143)->values[4] = (val*) var137;
((struct instance_array__NativeArray*)var143)->values[5] = (val*) var_try_file118;
((void (*)(val*, val*, long))(var141->class->vft[COLOR_array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
}
var144 = ((val* (*)(val*))(var141->class->vft[COLOR_string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var144) /* error on <self:ModelBuilder>*/;
} else {
}
} else {
}
}
} else {
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = "/";
var148 = 1;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
var150 = ((val* (*)(val*, val*))(var_dirname103->class->vft[COLOR_string__String___43d]))(var_dirname103, var146) /* + on <var_dirname103:String>*/;
var151 = ((val* (*)(val*, val*))(var150->class->vft[COLOR_string__String___43d]))(var150, var_name) /* + on <var150:String>*/;
if (varonce152) {
var153 = varonce152;
} else {
var154 = "/";
var155 = 1;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = ((val* (*)(val*, val*))(var151->class->vft[COLOR_string__String___43d]))(var151, var153) /* + on <var151:String>*/;
var158 = ((val* (*)(val*, val*))(var157->class->vft[COLOR_string__String___43d]))(var157, var_name) /* + on <var157:String>*/;
if (varonce159) {
var160 = varonce159;
} else {
var161 = ".nit";
var162 = 4;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = ((val* (*)(val*, val*))(var158->class->vft[COLOR_string__String___43d]))(var158, var160) /* + on <var158:String>*/;
var165 = ((val* (*)(val*))(var164->class->vft[COLOR_file__String__simplify_path]))(var164) /* simplify_path on <var164:String>*/;
var_try_file118 = var165;
var166 = ((short int (*)(val*))(var_try_file118->class->vft[COLOR_file__String__file_exists]))(var_try_file118) /* file_exists on <var_try_file118:String>*/;
if (var166){
var167 = NULL;
if (var_candidate == NULL) {
var168 = 1; /* is null */
} else {
var168 = 0; /* arg is null but recv is not */
}
if (var168){
var_candidate = var_try_file118;
} else {
var169 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___33d_61d]))(var_candidate, var_try_file118) /* != on <var_candidate:nullable String(String)>*/;
if (var169){
var170 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_candidate) /* module_absolute_path on <self:ModelBuilder>*/;
var_abs_candidate171 = var170;
var172 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_try_file118) /* module_absolute_path on <self:ModelBuilder>*/;
var_abs_try_file173 = var172;
var174 = ((short int (*)(val*, val*))(var_abs_candidate171->class->vft[COLOR_kernel__Object___33d_61d]))(var_abs_candidate171, var_abs_try_file173) /* != on <var_abs_candidate171:String>*/;
if (var174){
if (varonce175) {
var176 = varonce175;
} else {
var177 = "Error: conflicting module file for ";
var178 = 35;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = ": ";
var183 = 2;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = " ";
var188 = 1;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
var190 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var190 = array_instance Array[Object] */
var191 = 6;
var192 = NEW_array__NativeArray(var191, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var192)->values[0] = (val*) var176;
((struct instance_array__NativeArray*)var192)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var192)->values[2] = (val*) var181;
((struct instance_array__NativeArray*)var192)->values[3] = (val*) var_candidate;
((struct instance_array__NativeArray*)var192)->values[4] = (val*) var186;
((struct instance_array__NativeArray*)var192)->values[5] = (val*) var_try_file118;
((void (*)(val*, val*, long))(var190->class->vft[COLOR_array__Array__with_native]))(var190, var192, var191) /* with_native on <var190:Array[Object]>*/;
}
var193 = ((val* (*)(val*))(var190->class->vft[COLOR_string__Object__to_s]))(var190) /* to_s on <var190:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var193) /* error on <self:ModelBuilder>*/;
} else {
}
} else {
}
}
} else {
}
CONTINUE_label194: (void)0;
((void (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__next]))(var100) /* next on <var100:Iterator[nullable Object]>*/;
}
BREAK_label194: (void)0;
var195 = NULL;
if (var_candidate == NULL) {
var196 = 1; /* is null */
} else {
var196 = 0; /* arg is null but recv is not */
}
if (var196){
var197 = NULL;
if (var_mmodule == NULL) {
var198 = 0; /* is null */
} else {
var198 = 1; /* arg is null and recv is not */
}
if (var198){
if (varonce199) {
var200 = varonce199;
} else {
var201 = "Error: cannot find module ";
var202 = 26;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
if (varonce204) {
var205 = varonce204;
} else {
var206 = " from ";
var207 = 6;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = ". tried ";
var212 = 8;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
if (varonce214) {
var215 = varonce214;
} else {
var216 = ", ";
var217 = 2;
var218 = string__NativeString__to_s_with_length(var216, var217);
var215 = var218;
varonce214 = var215;
}
var219 = ((val* (*)(val*, val*))(var_tries->class->vft[COLOR_string__Collection__join]))(var_tries, var215) /* join on <var_tries:Array[String]>*/;
var220 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var220 = array_instance Array[Object] */
var221 = 6;
var222 = NEW_array__NativeArray(var221, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var222)->values[0] = (val*) var200;
((struct instance_array__NativeArray*)var222)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var222)->values[2] = (val*) var205;
((struct instance_array__NativeArray*)var222)->values[3] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var222)->values[4] = (val*) var210;
((struct instance_array__NativeArray*)var222)->values[5] = (val*) var219;
((void (*)(val*, val*, long))(var220->class->vft[COLOR_array__Array__with_native]))(var220, var222, var221) /* with_native on <var220:Array[Object]>*/;
}
var223 = ((val* (*)(val*))(var220->class->vft[COLOR_string__Object__to_s]))(var220) /* to_s on <var220:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var223) /* error on <self:ModelBuilder>*/;
} else {
if (varonce224) {
var225 = varonce224;
} else {
var226 = "Error: cannot find module ";
var227 = 26;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
if (varonce229) {
var230 = varonce229;
} else {
var231 = ". tried ";
var232 = 8;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = ", ";
var237 = 2;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
var239 = ((val* (*)(val*, val*))(var_tries->class->vft[COLOR_string__Collection__join]))(var_tries, var235) /* join on <var_tries:Array[String]>*/;
var240 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var240 = array_instance Array[Object] */
var241 = 4;
var242 = NEW_array__NativeArray(var241, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var242)->values[0] = (val*) var225;
((struct instance_array__NativeArray*)var242)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var242)->values[2] = (val*) var230;
((struct instance_array__NativeArray*)var242)->values[3] = (val*) var239;
((void (*)(val*, val*, long))(var240->class->vft[COLOR_array__Array__with_native]))(var240, var242, var241) /* with_native on <var240:Array[Object]>*/;
}
var243 = ((val* (*)(val*))(var240->class->vft[COLOR_string__Object__to_s]))(var240) /* to_s on <var240:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var243) /* error on <self:ModelBuilder>*/;
}
var244 = NULL;
var = var244;
goto RET_LABEL;
} else {
}
var245 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module]))(self, var_candidate) /* load_module on <self:ModelBuilder>*/;
var_res246 = var245;
var247 = NULL;
if (var_res246 == NULL) {
var248 = 1; /* is null */
} else {
var248 = 0; /* arg is null but recv is not */
}
if (var248){
var249 = NULL;
var = var249;
goto RET_LABEL;
} else {
}
var250 = ((val* (*)(val*))(var_res246->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_res246) /* mmodule on <var_res246:nullable AModule(AModule)>*/;
if (var250 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 344);
show_backtrace(1);
}
var = var250;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#get_mmodule_by_name for (self: Object, ANode, nullable MModule, String): nullable MModule */
val* VIRTUAL_modelbuilder__ModelBuilder__get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = modelbuilder__ModelBuilder__get_mmodule_by_name(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#identified_files for (self: ModelBuilder): HashMap[String, nullable ModulePath] */
val* modelbuilder__ModelBuilder__identified_files(val* self) {
val* var /* : HashMap[String, nullable ModulePath] */;
val* var1 /* : HashMap[String, nullable ModulePath] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64didentified_files].val; /* @identified_files on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @identified_files");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 347);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#identified_files for (self: Object): HashMap[String, nullable ModulePath] */
val* VIRTUAL_modelbuilder__ModelBuilder__identified_files(val* self) {
val* var /* : HashMap[String, nullable ModulePath] */;
val* var1 /* : HashMap[String, nullable ModulePath] */;
var1 = modelbuilder__ModelBuilder__identified_files(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#identified_files= for (self: ModelBuilder, HashMap[String, nullable ModulePath]) */
void modelbuilder__ModelBuilder__identified_files_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64didentified_files].val = p0; /* @identified_files on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#identified_files= for (self: Object, HashMap[String, nullable ModulePath]) */
void VIRTUAL_modelbuilder__ModelBuilder__identified_files_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__identified_files_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#identify_file for (self: ModelBuilder, String): nullable ModulePath */
val* modelbuilder__ModelBuilder__identify_file(val* self, val* p0) {
val* var /* : nullable ModulePath */;
val* var_path /* var path: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : ToolContext */;
val* var4 /* : null */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
val* var18 /* : null */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var_pn /* var pn: String */;
val* var25 /* : String */;
val* var_rp /* var rp: String */;
val* var26 /* : HashMap[String, nullable ModulePath] */;
short int var27 /* : Bool */;
val* var28 /* : HashMap[String, nullable ModulePath] */;
val* var29 /* : nullable Object */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var_mgrouppath /* var mgrouppath: String */;
val* var37 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var38 /* : null */;
short int var39 /* : Bool */;
val* var40 /* : MProject */;
val* var41 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var42 /* : MGroup */;
val* var43 /* : null */;
val* var44 /* : ToolContext */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
long var59 /* : Int */;
val* var60 /* : ModulePath */;
val* var_res /* var res: ModulePath */;
val* var61 /* : HashMap[String, nullable ModulePath] */;
var_path = p0;
var1 = ((short int (*)(val*))(var_path->class->vft[COLOR_file__String__file_exists]))(var_path) /* file_exists on <var_path:String>*/;
var2 = !var1;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var4 = NULL;
if (varonce) {
var5 = varonce;
} else {
var6 = "Error: `";
var7 = 8;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = "` does not exists";
var12 = 17;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_path;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_toolcontext__ToolContext__error]))(var3, var4, var17) /* error on <var3:ToolContext>*/;
var18 = NULL;
var = var18;
goto RET_LABEL;
} else {
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = ".nit";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = ((val* (*)(val*, val*))(var_path->class->vft[COLOR_file__String__basename]))(var_path, var20) /* basename on <var_path:String>*/;
var_pn = var24;
var25 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_path) /* module_absolute_path on <self:ModelBuilder>*/;
var_rp = var25;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__identified_files]))(self) /* identified_files on <self:ModelBuilder>*/;
var27 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var26, var_rp) /* has_key on <var26:HashMap[String, nullable ModulePath]>*/;
if (var27){
var28 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__identified_files]))(self) /* identified_files on <self:ModelBuilder>*/;
var29 = ((val* (*)(val*, val*))(var28->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var28, var_rp) /* [] on <var28:HashMap[String, nullable ModulePath]>*/;
var = var29;
goto RET_LABEL;
} else {
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "..";
var33 = 2;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = ((val* (*)(val*, val*))(var_path->class->vft[COLOR_file__String__join_path]))(var_path, var31) /* join_path on <var_path:String>*/;
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_file__String__simplify_path]))(var35) /* simplify_path on <var35:String>*/;
var_mgrouppath = var36;
var37 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__get_mgroup]))(self, var_mgrouppath) /* get_mgroup on <self:ModelBuilder>*/;
var_mgroup = var37;
var38 = NULL;
if (var_mgroup == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (var39){
var40 = NEW_mproject__MProject(&type_mproject__MProject);
var41 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var40->class->vft[COLOR_mproject__MProject__init]))(var40, var_pn, var41) /* init on <var40:MProject>*/;
var_mproject = var40;
var42 = NEW_mproject__MGroup(&type_mproject__MGroup);
var43 = NULL;
((void (*)(val*, val*, val*, val*))(var42->class->vft[COLOR_mproject__MGroup__init]))(var42, var_pn, var_mproject, var43) /* init on <var42:MGroup>*/;
var_mgroup = var42;
((void (*)(val*, val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__filepath_61d]))(var_mgroup, var_path) /* filepath= on <var_mgroup:nullable MGroup(MGroup)>*/;
((void (*)(val*, val*))(var_mproject->class->vft[COLOR_mproject__MProject__root_61d]))(var_mproject, var_mgroup) /* root= on <var_mproject:MProject>*/;
var44 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce45) {
var46 = varonce45;
} else {
var47 = "found project `";
var48 = 15;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "` at ";
var53 = 5;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 4;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var46;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var_pn;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var51;
((struct instance_array__NativeArray*)var57)->values[3] = (val*) var_path;
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
var59 = 2;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_toolcontext__ToolContext__info]))(var44, var58, var59) /* info on <var44:ToolContext>*/;
} else {
}
var60 = NEW_modelbuilder__ModulePath(&type_modelbuilder__ModulePath);
((void (*)(val*, val*, val*, val*))(var60->class->vft[COLOR_modelbuilder__ModulePath__init]))(var60, var_pn, var_path, var_mgroup) /* init on <var60:ModulePath>*/;
var_res = var60;
var61 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__identified_files]))(self) /* identified_files on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var61->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var61, var_rp, var_res) /* []= on <var61:HashMap[String, nullable ModulePath]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#identify_file for (self: Object, String): nullable ModulePath */
val* VIRTUAL_modelbuilder__ModelBuilder__identify_file(val* self, val* p0) {
val* var /* : nullable ModulePath */;
val* var1 /* : nullable ModulePath */;
var1 = modelbuilder__ModelBuilder__identify_file(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#mgroups for (self: ModelBuilder): HashMap[String, nullable MGroup] */
val* modelbuilder__ModelBuilder__mgroups(val* self) {
val* var /* : HashMap[String, nullable MGroup] */;
val* var1 /* : HashMap[String, nullable MGroup] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dmgroups].val; /* @mgroups on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mgroups");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 383);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#mgroups for (self: Object): HashMap[String, nullable MGroup] */
val* VIRTUAL_modelbuilder__ModelBuilder__mgroups(val* self) {
val* var /* : HashMap[String, nullable MGroup] */;
val* var1 /* : HashMap[String, nullable MGroup] */;
var1 = modelbuilder__ModelBuilder__mgroups(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#mgroups= for (self: ModelBuilder, HashMap[String, nullable MGroup]) */
void modelbuilder__ModelBuilder__mgroups_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64dmgroups].val = p0; /* @mgroups on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#mgroups= for (self: Object, HashMap[String, nullable MGroup]) */
void VIRTUAL_modelbuilder__ModelBuilder__mgroups_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__mgroups_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#get_mgroup for (self: ModelBuilder, String): nullable MGroup */
val* modelbuilder__ModelBuilder__get_mgroup(val* self, val* p0) {
val* var /* : nullable MGroup */;
val* var_dirpath /* var dirpath: String */;
val* var1 /* : String */;
val* var_rdp /* var rdp: String */;
val* var2 /* : HashMap[String, nullable MGroup] */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[String, nullable MGroup] */;
val* var5 /* : nullable Object */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_pn /* var pn: String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_mp /* var mp: String */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : null */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var_parentpath /* var parentpath: String */;
val* var29 /* : nullable MGroup */;
val* var_parent /* var parent: nullable MGroup */;
val* var30 /* : null */;
short int var31 /* : Bool */;
val* var32 /* : MProject */;
val* var33 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var34 /* : MGroup */;
val* var35 /* : null */;
val* var_mgroup /* var mgroup: nullable Object */;
val* var36 /* : ToolContext */;
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
val* var50 /* : String */;
long var51 /* : Int */;
val* var52 /* : MGroup */;
val* var53 /* : MProject */;
val* var54 /* : ToolContext */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
long var70 /* : Int */;
val* var71 /* : HashMap[String, nullable MGroup] */;
var_dirpath = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_dirpath) /* module_absolute_path on <self:ModelBuilder>*/;
var_rdp = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mgroups]))(self) /* mgroups on <self:ModelBuilder>*/;
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var2, var_rdp) /* has_key on <var2:HashMap[String, nullable MGroup]>*/;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mgroups]))(self) /* mgroups on <self:ModelBuilder>*/;
var5 = ((val* (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var4, var_rdp) /* [] on <var4:HashMap[String, nullable MGroup]>*/;
var = var5;
goto RET_LABEL;
} else {
}
if (varonce) {
var6 = varonce;
} else {
var7 = ".nit";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = ((val* (*)(val*, val*))(var_rdp->class->vft[COLOR_file__String__basename]))(var_rdp, var6) /* basename on <var_rdp:String>*/;
var_pn = var10;
if (varonce11) {
var12 = varonce11;
} else {
var13 = ".nit";
var14 = 4;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = ((val* (*)(val*, val*))(var_pn->class->vft[COLOR_string__String___43d]))(var_pn, var12) /* + on <var_pn:String>*/;
var17 = ((val* (*)(val*, val*))(var_dirpath->class->vft[COLOR_file__String__join_path]))(var_dirpath, var16) /* join_path on <var_dirpath:String>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_file__String__simplify_path]))(var17) /* simplify_path on <var17:String>*/;
var_mp = var18;
var19 = ((short int (*)(val*))(var_mp->class->vft[COLOR_file__String__file_exists]))(var_mp) /* file_exists on <var_mp:String>*/;
var20 = !var19;
if (var20){
var21 = NULL;
var = var21;
goto RET_LABEL;
} else {
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "..";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((val* (*)(val*, val*))(var_dirpath->class->vft[COLOR_file__String__join_path]))(var_dirpath, var23) /* join_path on <var_dirpath:String>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_file__String__simplify_path]))(var27) /* simplify_path on <var27:String>*/;
var_parentpath = var28;
var29 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__get_mgroup]))(self, var_parentpath) /* get_mgroup on <self:ModelBuilder>*/;
var_parent = var29;
var30 = NULL;
if (var_parent == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (var31){
var32 = NEW_mproject__MProject(&type_mproject__MProject);
var33 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var32->class->vft[COLOR_mproject__MProject__init]))(var32, var_pn, var33) /* init on <var32:MProject>*/;
var_mproject = var32;
var34 = NEW_mproject__MGroup(&type_mproject__MGroup);
var35 = NULL;
((void (*)(val*, val*, val*, val*))(var34->class->vft[COLOR_mproject__MGroup__init]))(var34, var_pn, var_mproject, var35) /* init on <var34:MGroup>*/;
var_mgroup = var34;
((void (*)(val*, val*))(var_mproject->class->vft[COLOR_mproject__MProject__root_61d]))(var_mproject, var_mgroup) /* root= on <var_mproject:MProject>*/;
var36 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "found project `";
var40 = 15;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "` at ";
var45 = 5;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 4;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var38;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var_mproject;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var43;
((struct instance_array__NativeArray*)var49)->values[3] = (val*) var_dirpath;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
var51 = 2;
((void (*)(val*, val*, long))(var36->class->vft[COLOR_toolcontext__ToolContext__info]))(var36, var50, var51) /* info on <var36:ToolContext>*/;
} else {
var52 = NEW_mproject__MGroup(&type_mproject__MGroup);
var53 = ((val* (*)(val*))(var_parent->class->vft[COLOR_mproject__MGroup__mproject]))(var_parent) /* mproject on <var_parent:nullable MGroup(MGroup)>*/;
((void (*)(val*, val*, val*, val*))(var52->class->vft[COLOR_mproject__MGroup__init]))(var52, var_pn, var53, var_parent) /* init on <var52:MGroup>*/;
var_mgroup = var52;
var54 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce55) {
var56 = varonce55;
} else {
var57 = "found sub group `";
var58 = 17;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = ((val* (*)(val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__full_name]))(var_mgroup) /* full_name on <var_mgroup:nullable Object(MGroup)>*/;
if (varonce61) {
var62 = varonce61;
} else {
var63 = "` at ";
var64 = 5;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 4;
var68 = NEW_array__NativeArray(var67, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var68)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var68)->values[1] = (val*) var60;
((struct instance_array__NativeArray*)var68)->values[2] = (val*) var62;
((struct instance_array__NativeArray*)var68)->values[3] = (val*) var_dirpath;
((void (*)(val*, val*, long))(var66->class->vft[COLOR_array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
var69 = ((val* (*)(val*))(var66->class->vft[COLOR_string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
var70 = 2;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_toolcontext__ToolContext__info]))(var54, var69, var70) /* info on <var54:ToolContext>*/;
}
((void (*)(val*, val*))(var_mgroup->class->vft[COLOR_mproject__MGroup__filepath_61d]))(var_mgroup, var_dirpath) /* filepath= on <var_mgroup:nullable Object(MGroup)>*/;
var71 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mgroups]))(self) /* mgroups on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var71->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var71, var_rdp, var_mgroup) /* []= on <var71:HashMap[String, nullable MGroup]>*/;
var = var_mgroup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#get_mgroup for (self: Object, String): nullable MGroup */
val* VIRTUAL_modelbuilder__ModelBuilder__get_mgroup(val* self, val* p0) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = modelbuilder__ModelBuilder__get_mgroup(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#module_absolute_path for (self: ModelBuilder, String): String */
val* modelbuilder__ModelBuilder__module_absolute_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
val* var2 /* : String */;
val* var3 /* : String */;
var_path = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__getcwd]))(self) /* getcwd on <self:ModelBuilder>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_file__String__join_path]))(var1, var_path) /* join_path on <var1:String>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_file__String__simplify_path]))(var2) /* simplify_path on <var2:String>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#module_absolute_path for (self: Object, String): String */
val* VIRTUAL_modelbuilder__ModelBuilder__module_absolute_path(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = modelbuilder__ModelBuilder__module_absolute_path(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#load_module_ast for (self: ModelBuilder, String): nullable AModule */
val* modelbuilder__ModelBuilder__load_module_ast(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
short int var6 /* : Bool */;
val* var7 /* : ToolContext */;
val* var8 /* : null */;
static val* varonce9;
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
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : ToolContext */;
val* var27 /* : null */;
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
val* var42 /* : null */;
val* var43 /* : ToolContext */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
long var53 /* : Int */;
val* var54 /* : IFStream */;
val* var_file /* var file: IFStream */;
val* var55 /* : Lexer */;
val* var56 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var57 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var58 /* : Start */;
val* var_tree /* var tree: Start */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var65 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var66 /* : null */;
short int var67 /* : Bool */;
val* var68 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var69 /* : Bool */;
int cltype;
int idtype;
val* var70 /* : String */;
val* var71 /* : null */;
var_filename = p0;
var1 = ((val* (*)(val*))(var_filename->class->vft[COLOR_file__String__file_extension]))(var_filename) /* file_extension on <var_filename:String>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "nit";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (var1 == NULL) {
var6 = 1; /* <var2:String> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___33d_61d]))(var1, var2) /* != on <var1:nullable String>*/;
}
if (var6){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var8 = NULL;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "Error: file ";
var12 = 12;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " is not a valid nit module.";
var17 = 27;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_filename;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_toolcontext__ToolContext__error]))(var7, var8, var22) /* error on <var7:ToolContext>*/;
var23 = NULL;
var = var23;
goto RET_LABEL;
} else {
}
var24 = ((short int (*)(val*))(var_filename->class->vft[COLOR_file__String__file_exists]))(var_filename) /* file_exists on <var_filename:String>*/;
var25 = !var24;
if (var25){
var26 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var27 = NULL;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Error: file ";
var31 = 12;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " not found.";
var36 = 11;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_filename;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
((void (*)(val*, val*, val*))(var26->class->vft[COLOR_toolcontext__ToolContext__error]))(var26, var27, var41) /* error on <var26:ToolContext>*/;
var42 = NULL;
var = var42;
goto RET_LABEL;
} else {
}
var43 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = "load module ";
var47 = 12;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 2;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var45;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var_filename;
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
var52 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
var53 = 2;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_toolcontext__ToolContext__info]))(var43, var52, var53) /* info on <var43:ToolContext>*/;
var54 = NEW_file__IFStream(&type_file__IFStream);
((void (*)(val*, val*))(var54->class->vft[COLOR_file__IFStream__open]))(var54, var_filename) /* open on <var54:IFStream>*/;
var_file = var54;
var55 = NEW_lexer__Lexer(&type_lexer__Lexer);
var56 = NEW_location__SourceFile(&type_location__SourceFile);
((void (*)(val*, val*, val*))(var56->class->vft[COLOR_location__SourceFile__init]))(var56, var_filename, var_file) /* init on <var56:SourceFile>*/;
((void (*)(val*, val*))(var55->class->vft[COLOR_lexer__Lexer__init]))(var55, var56) /* init on <var55:Lexer>*/;
var_lexer = var55;
var57 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var57->class->vft[COLOR_parser__Parser__init]))(var57, var_lexer) /* init on <var57:Parser>*/;
var_parser = var57;
var58 = ((val* (*)(val*))(var_parser->class->vft[COLOR_parser__Parser__parse]))(var_parser) /* parse on <var_parser:Parser>*/;
var_tree = var58;
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:IFStream>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = ".nit";
var62 = 4;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*, val*))(var_filename->class->vft[COLOR_file__String__basename]))(var_filename, var60) /* basename on <var_filename:String>*/;
var_mod_name = var64;
var65 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:Start>*/;
var_nmodule = var65;
var66 = NULL;
if (var_nmodule == NULL) {
var67 = 1; /* is null */
} else {
var67 = 0; /* arg is null but recv is not */
}
if (var67){
var68 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:Start>*/;
var_neof = var68;
/* <var_neof:EOF> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_neof->type->table_size) {
var69 = 0;
} else {
var69 = var_neof->type->type_table[cltype] == idtype;
}
if (!var69) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 453);
show_backtrace(1);
}
var70 = ((val* (*)(val*))(var_neof->class->vft[COLOR_lexer__AError__message]))(var_neof) /* message on <var_neof:EOF(AError)>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_neof, var70) /* error on <self:ModelBuilder>*/;
var71 = NULL;
var = var71;
goto RET_LABEL;
} else {
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#load_module_ast for (self: Object, String): nullable AModule */
val* VIRTUAL_modelbuilder__ModelBuilder__load_module_ast(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = modelbuilder__ModelBuilder__load_module_ast(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#load_module for (self: ModelBuilder, String): nullable AModule */
val* modelbuilder__ModelBuilder__load_module(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable ModulePath */;
val* var_file /* var file: nullable ModulePath */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : HashMap[MModule, AModule] */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : null */;
val* var14 /* : MGroup */;
val* var15 /* : String */;
val* var16 /* : nullable MModule */;
val* var17 /* : null */;
short int var18 /* : Bool */;
val* var19 /* : null */;
var_filename = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__identify_file]))(self, var_filename) /* identify_file on <self:ModelBuilder>*/;
var_file = var1;
var2 = NULL;
if (var_file == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(var_file->class->vft[COLOR_modelbuilder__ModulePath__mmodule]))(var_file) /* mmodule on <var_file:nullable ModulePath(ModulePath)>*/;
var_mmodule = var5;
var6 = NULL;
if (var_mmodule == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(self) /* mmodule2nmodule on <self:ModelBuilder>*/;
var9 = ((val* (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var8, var_mmodule) /* [] on <var8:HashMap[MModule, AModule]>*/;
var = var9;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module_ast]))(self, var_filename) /* load_module_ast on <self:ModelBuilder>*/;
var_nmodule = var10;
var11 = NULL;
if (var_nmodule == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (var12){
var13 = NULL;
var = var13;
goto RET_LABEL;
} else {
}
var14 = ((val* (*)(val*))(var_file->class->vft[COLOR_modelbuilder__ModulePath__mgroup]))(var_file) /* mgroup on <var_file:nullable ModulePath(ModulePath)>*/;
var15 = ((val* (*)(val*))(var_file->class->vft[COLOR_modelbuilder__ModulePath__name]))(var_file) /* name on <var_file:nullable ModulePath(ModulePath)>*/;
var16 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__build_a_mmodule]))(self, var14, var15, var_nmodule) /* build_a_mmodule on <self:ModelBuilder>*/;
var_mmodule = var16;
var17 = NULL;
if (var_mmodule == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (var18){
var19 = NULL;
var = var19;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_file->class->vft[COLOR_modelbuilder__ModulePath__mmodule_61d]))(var_file, var_mmodule) /* mmodule= on <var_file:nullable ModulePath(ModulePath)>*/;
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#load_module for (self: Object, String): nullable AModule */
val* VIRTUAL_modelbuilder__ModelBuilder__load_module(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = modelbuilder__ModelBuilder__load_module(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#load_rt_module for (self: ModelBuilder, MModule, AModule, String): nullable AModule */
val* modelbuilder__ModelBuilder__load_rt_module(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable AModule */;
val* var_parent /* var parent: MModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var_mod_name /* var mod_name: String */;
val* var1 /* : MModule */;
val* var2 /* : Model */;
val* var3 /* : nullable MGroup */;
val* var4 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : Array[AModule] */;
val* var6 /* : HashMap[MModule, AModule] */;
val* var7 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var8 /* : MVisibility */;
var_parent = p0;
var_nmodule = p1;
var_mod_name = p2;
var1 = NEW_mmodule__MModule(&type_mmodule__MModule);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var3 = ((val* (*)(val*))(var_parent->class->vft[COLOR_mmodule__MModule__mgroup]))(var_parent) /* mgroup on <var_parent:MModule>*/;
var4 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__ANode__location]))(var_nmodule) /* location on <var_nmodule:AModule>*/;
((void (*)(val*, val*, val*, val*, val*))(var1->class->vft[COLOR_mmodule__MModule__init]))(var1, var2, var3, var_mod_name, var4) /* init on <var1:MModule>*/;
var_mmodule = var1;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule_61d]))(var_nmodule, var_mmodule) /* mmodule= on <var_nmodule:AModule>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__nmodules]))(self) /* nmodules on <self:ModelBuilder>*/;
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var5, var_nmodule) /* add on <var5:Array[AModule]>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(self) /* mmodule2nmodule on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var6, var_mmodule, var_nmodule) /* []= on <var6:HashMap[MModule, AModule]>*/;
var7 = NEW_array__Array(&type_array__Arraymmodule__MModule);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[MModule]>*/;
var_imported_modules = var7;
((void (*)(val*, val*))(var_imported_modules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_imported_modules, var_parent) /* add on <var_imported_modules:Array[MModule]>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__set_visibility_for]))(var_mmodule, var_parent, var8) /* set_visibility_for on <var_mmodule:MModule>*/;
((void (*)(val*, val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__set_imported_mmodules]))(var_mmodule, var_imported_modules) /* set_imported_mmodules on <var_mmodule:MModule>*/;
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#load_rt_module for (self: Object, MModule, AModule, String): nullable AModule */
val* VIRTUAL_modelbuilder__ModelBuilder__load_rt_module(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = modelbuilder__ModelBuilder__load_rt_module(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#build_a_mmodule for (self: ModelBuilder, nullable MGroup, String, AModule): nullable MModule */
val* modelbuilder__ModelBuilder__build_a_mmodule(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_mod_name /* var mod_name: String */;
val* var_nmodule /* var nmodule: AModule */;
val* var1 /* : nullable AModuledecl */;
val* var_decl /* var decl: nullable AModuledecl */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : AModuleName */;
val* var5 /* : TId */;
val* var6 /* : String */;
val* var_decl_name /* var decl_name: String */;
short int var7 /* : Bool */;
val* var8 /* : AModuleName */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : MModule */;
val* var23 /* : Model */;
val* var24 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var25 /* : Array[AModule] */;
val* var26 /* : HashMap[MModule, AModule] */;
var_mgroup = p0;
var_mod_name = p1;
var_nmodule = p2;
var1 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_moduledecl]))(var_nmodule) /* n_moduledecl on <var_nmodule:AModule>*/;
var_decl = var1;
var2 = NULL;
if (var_decl == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
} else {
var4 = ((val* (*)(val*))(var_decl->class->vft[COLOR_parser_nodes__AModuledecl__n_name]))(var_decl) /* n_name on <var_decl:nullable AModuledecl(AModuledecl)>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__AModuleName__n_id]))(var4) /* n_id on <var4:AModuleName>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_parser_nodes__Token__text]))(var5) /* text on <var5:TId>*/;
var_decl_name = var6;
var7 = ((short int (*)(val*, val*))(var_decl_name->class->vft[COLOR_kernel__Object___33d_61d]))(var_decl_name, var_mod_name) /* != on <var_decl_name:String>*/;
if (var7){
var8 = ((val* (*)(val*))(var_decl->class->vft[COLOR_parser_nodes__AModuledecl__n_name]))(var_decl) /* n_name on <var_decl:nullable AModuledecl(AModuledecl)>*/;
if (varonce) {
var9 = varonce;
} else {
var10 = "Error: module name missmatch; declared ";
var11 = 39;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = " file named ";
var16 = 12;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 4;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_decl_name;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var_mod_name;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var8, var21) /* error on <self:ModelBuilder>*/;
} else {
}
}
var22 = NEW_mmodule__MModule(&type_mmodule__MModule);
var23 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var24 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__ANode__location]))(var_nmodule) /* location on <var_nmodule:AModule>*/;
((void (*)(val*, val*, val*, val*, val*))(var22->class->vft[COLOR_mmodule__MModule__init]))(var22, var23, var_mgroup, var_mod_name, var24) /* init on <var22:MModule>*/;
var_mmodule = var22;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule_61d]))(var_nmodule, var_mmodule) /* mmodule= on <var_nmodule:AModule>*/;
var25 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__nmodules]))(self) /* nmodules on <self:ModelBuilder>*/;
((void (*)(val*, val*))(var25->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var25, var_nmodule) /* add on <var25:Array[AModule]>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(self) /* mmodule2nmodule on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var26->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var26, var_mmodule, var_nmodule) /* []= on <var26:HashMap[MModule, AModule]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__build_module_importation]))(self, var_nmodule) /* build_module_importation on <self:ModelBuilder>*/;
var = var_mmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#build_a_mmodule for (self: Object, nullable MGroup, String, AModule): nullable MModule */
val* VIRTUAL_modelbuilder__ModelBuilder__build_a_mmodule(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = modelbuilder__ModelBuilder__build_a_mmodule(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#build_module_importation for (self: ModelBuilder, AModule) */
void modelbuilder__ModelBuilder__build_module_importation(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var3 /* : Bool */;
short int var_stdimport /* var stdimport: Bool */;
val* var4 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var5 /* : ANodes[AImport] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_aimport /* var aimport: AImport */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
val* var12 /* : AModuleName */;
val* var13 /* : TId */;
val* var14 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var15 /* : AModuleName */;
val* var16 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
val* var17 /* : null */;
short int var18 /* : Bool */;
val* var19 /* : AVisibility */;
val* var20 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var21 /* : MVisibility */;
short int var22 /* : Bool */;
val* var23 /* : AVisibility */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var_mod_name33 /* var mod_name: String */;
val* var34 /* : null */;
val* var35 /* : nullable MModule */;
val* var_sup36 /* var sup: nullable MModule */;
val* var37 /* : null */;
short int var38 /* : Bool */;
val* var39 /* : MVisibility */;
val* var40 /* : ToolContext */;
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
val* var51 /* : String */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
long var56 /* : Int */;
var_nmodule = p0;
var = ((short int (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__is_importation_done]))(var_nmodule) /* is_importation_done on <var_nmodule:AModule>*/;
if (var){
goto RET_LABEL;
} else {
}
var1 = 1;
((void (*)(val*, short int))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__is_importation_done_61d]))(var_nmodule, var1) /* is_importation_done= on <var_nmodule:AModule>*/;
var2 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 540);
show_backtrace(1);
}
var_mmodule = var2;
var3 = 1;
var_stdimport = var3;
var4 = NEW_array__Array(&type_array__Arraymmodule__MModule);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[MModule]>*/;
var_imported_modules = var4;
var5 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_imports]))(var_nmodule) /* n_imports on <var_nmodule:AModule>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:ANodes[AImport]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_aimport = var8;
var9 = 0;
var_stdimport = var9;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_parser_nodes__AStdImport.color;
idtype = type_parser_nodes__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var10 = 0;
} else {
var10 = var_aimport->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
goto CONTINUE_label;
} else {
}
var12 = ((val* (*)(val*))(var_aimport->class->vft[COLOR_parser_nodes__AStdImport__n_name]))(var_aimport) /* n_name on <var_aimport:AImport(AStdImport)>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_parser_nodes__AModuleName__n_id]))(var12) /* n_id on <var12:AModuleName>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_parser_nodes__Token__text]))(var13) /* text on <var13:TId>*/;
var_mod_name = var14;
var15 = ((val* (*)(val*))(var_aimport->class->vft[COLOR_parser_nodes__AStdImport__n_name]))(var_aimport) /* n_name on <var_aimport:AImport(AStdImport)>*/;
var16 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__get_mmodule_by_name]))(self, var15, var_mmodule, var_mod_name) /* get_mmodule_by_name on <self:ModelBuilder>*/;
var_sup = var16;
var17 = NULL;
if (var_sup == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (var18){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_aimport->class->vft[COLOR_modelbuilder__AStdImport__mmodule_61d]))(var_aimport, var_sup) /* mmodule= on <var_aimport:AImport(AStdImport)>*/;
((void (*)(val*, val*))(var_imported_modules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_imported_modules, var_sup) /* add on <var_imported_modules:Array[MModule]>*/;
var19 = ((val* (*)(val*))(var_aimport->class->vft[COLOR_parser_nodes__AStdImport__n_visibility]))(var_aimport) /* n_visibility on <var_aimport:AImport(AStdImport)>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var19) /* mvisibility on <var19:AVisibility>*/;
var_mvisibility = var20;
var21 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__protected_visibility]))(self) /* protected_visibility on <self:ModelBuilder>*/;
var22 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var21) /* == on <var_mvisibility:MVisibility>*/;
if (var22){
var23 = ((val* (*)(val*))(var_aimport->class->vft[COLOR_parser_nodes__AStdImport__n_visibility]))(var_aimport) /* n_visibility on <var_aimport:AImport(AStdImport)>*/;
if (varonce) {
var24 = varonce;
} else {
var25 = "Error: only properties can be protected.";
var26 = 40;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var23, var24) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__set_visibility_for]))(var_mmodule, var_sup, var_mvisibility) /* set_visibility_for on <var_mmodule:MModule>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_stdimport){
if (varonce28) {
var29 = varonce28;
} else {
var30 = "standard";
var31 = 8;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var_mod_name33 = var29;
var34 = NULL;
var35 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__get_mmodule_by_name]))(self, var_nmodule, var34, var_mod_name33) /* get_mmodule_by_name on <self:ModelBuilder>*/;
var_sup36 = var35;
var37 = NULL;
if (var_sup36 == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
((void (*)(val*, val*))(var_imported_modules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_imported_modules, var_sup36) /* add on <var_imported_modules:Array[MModule]>*/;
var39 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__set_visibility_for]))(var_mmodule, var_sup36, var39) /* set_visibility_for on <var_mmodule:MModule>*/;
} else {
}
} else {
}
var40 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = " imports ";
var44 = 9;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = ", ";
var49 = 2;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*, val*))(var_imported_modules->class->vft[COLOR_string__Collection__join]))(var_imported_modules, var47) /* join on <var_imported_modules:Array[MModule]>*/;
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 3;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var42;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var51;
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
var56 = 3;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_toolcontext__ToolContext__info]))(var40, var55, var56) /* info on <var40:ToolContext>*/;
((void (*)(val*, val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__set_imported_mmodules]))(var_mmodule, var_imported_modules) /* set_imported_mmodules on <var_mmodule:MModule>*/;
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#build_module_importation for (self: Object, AModule) */
void VIRTUAL_modelbuilder__ModelBuilder__build_module_importation(val* self, val* p0) {
modelbuilder__ModelBuilder__build_module_importation(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#nmodules for (self: ModelBuilder): Array[AModule] */
val* modelbuilder__ModelBuilder__nmodules(val* self) {
val* var /* : Array[AModule] */;
val* var1 /* : Array[AModule] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dnmodules].val; /* @nmodules on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @nmodules");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 572);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#nmodules for (self: Object): Array[AModule] */
val* VIRTUAL_modelbuilder__ModelBuilder__nmodules(val* self) {
val* var /* : Array[AModule] */;
val* var1 /* : Array[AModule] */;
var1 = modelbuilder__ModelBuilder__nmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#nmodules= for (self: ModelBuilder, Array[AModule]) */
void modelbuilder__ModelBuilder__nmodules_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64dnmodules].val = p0; /* @nmodules on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#nmodules= for (self: Object, Array[AModule]) */
void VIRTUAL_modelbuilder__ModelBuilder__nmodules_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__nmodules_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#mmodule2nmodule for (self: ModelBuilder): HashMap[MModule, AModule] */
val* modelbuilder__ModelBuilder__mmodule2nmodule(val* self) {
val* var /* : HashMap[MModule, AModule] */;
val* var1 /* : HashMap[MModule, AModule] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dmmodule2nmodule].val; /* @mmodule2nmodule on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule2nmodule");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 575);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#mmodule2nmodule for (self: Object): HashMap[MModule, AModule] */
val* VIRTUAL_modelbuilder__ModelBuilder__mmodule2nmodule(val* self) {
val* var /* : HashMap[MModule, AModule] */;
val* var1 /* : HashMap[MModule, AModule] */;
var1 = modelbuilder__ModelBuilder__mmodule2nmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#mmodule2nmodule= for (self: ModelBuilder, HashMap[MModule, AModule]) */
void modelbuilder__ModelBuilder__mmodule2nmodule_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64dmmodule2nmodule].val = p0; /* @mmodule2nmodule on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#mmodule2nmodule= for (self: Object, HashMap[MModule, AModule]) */
void VIRTUAL_modelbuilder__ModelBuilder__mmodule2nmodule_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__mmodule2nmodule_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#error for (self: ModelBuilder, ANode, String) */
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1) {
val* var_n /* var n: ANode */;
val* var_text /* var text: String */;
val* var /* : ToolContext */;
val* var1 /* : Location */;
var_n = p0;
var_text = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var1 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:ANode>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_toolcontext__ToolContext__error]))(var, var1, var_text) /* error on <var:ToolContext>*/;
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#error for (self: Object, ANode, String) */
void VIRTUAL_modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1) {
modelbuilder__ModelBuilder__error(self, p0, p1);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#warning for (self: ModelBuilder, ANode, String) */
void modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1) {
val* var_n /* var n: ANode */;
val* var_text /* var text: String */;
val* var /* : ToolContext */;
val* var1 /* : Location */;
var_n = p0;
var_text = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var1 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:ANode>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_toolcontext__ToolContext__warning]))(var, var1, var_text) /* warning on <var:ToolContext>*/;
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#warning for (self: Object, ANode, String) */
void VIRTUAL_modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1) {
modelbuilder__ModelBuilder__warning(self, p0, p1);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#force_get_primitive_method for (self: ModelBuilder, ANode, String, MClass, MModule): MMethod */
val* modelbuilder__ModelBuilder__force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : MMethod */;
val* var_n /* var n: ANode */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MClass */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable MMethod */;
val* var_res /* var res: nullable MMethod */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : ToolContext */;
val* var5 /* : Location */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
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
var_n = p0;
var_name = p1;
var_recv = p2;
var_mmodule = p3;
var1 = ((val* (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_model__MModule__try_get_primitive_method]))(var_mmodule, var_name, var_recv) /* try_get_primitive_method on <var_mmodule:MModule>*/;
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var5 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:ANode>*/;
if (varonce) {
var6 = varonce;
} else {
var7 = "Fatal Error: ";
var8 = 13;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = " must have a property named ";
var13 = 28;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = ".";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 5;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var22)->values[2] = (val*) var11;
((struct instance_array__NativeArray*)var22)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var22)->values[4] = (val*) var16;
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(var4, var5, var23) /* fatal_error on <var4:ToolContext>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 599);
show_backtrace(1);
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#force_get_primitive_method for (self: Object, ANode, String, MClass, MModule): MMethod */
val* VIRTUAL_modelbuilder__ModelBuilder__force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = modelbuilder__ModelBuilder__force_get_primitive_method(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#name for (self: ModulePath): String */
val* modelbuilder__ModulePath__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___64dname].val; /* @name on <self:ModulePath> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 607);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#name for (self: Object): String */
val* VIRTUAL_modelbuilder__ModulePath__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = modelbuilder__ModulePath__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#name= for (self: ModulePath, String) */
void modelbuilder__ModulePath__name_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModulePath___64dname].val = p0; /* @name on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#name= for (self: Object, String) */
void VIRTUAL_modelbuilder__ModulePath__name_61d(val* self, val* p0) {
modelbuilder__ModulePath__name_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModulePath#filepath for (self: ModulePath): String */
val* modelbuilder__ModulePath__filepath(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___64dfilepath].val; /* @filepath on <self:ModulePath> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @filepath");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 611);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#filepath for (self: Object): String */
val* VIRTUAL_modelbuilder__ModulePath__filepath(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = modelbuilder__ModulePath__filepath(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#filepath= for (self: ModulePath, String) */
void modelbuilder__ModulePath__filepath_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModulePath___64dfilepath].val = p0; /* @filepath on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#filepath= for (self: Object, String) */
void VIRTUAL_modelbuilder__ModulePath__filepath_61d(val* self, val* p0) {
modelbuilder__ModulePath__filepath_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModulePath#mgroup for (self: ModulePath): MGroup */
val* modelbuilder__ModulePath__mgroup(val* self) {
val* var /* : MGroup */;
val* var1 /* : MGroup */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___64dmgroup].val; /* @mgroup on <self:ModulePath> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mgroup");
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 614);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mgroup for (self: Object): MGroup */
val* VIRTUAL_modelbuilder__ModulePath__mgroup(val* self) {
val* var /* : MGroup */;
val* var1 /* : MGroup */;
var1 = modelbuilder__ModulePath__mgroup(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mgroup= for (self: ModulePath, MGroup) */
void modelbuilder__ModulePath__mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModulePath___64dmgroup].val = p0; /* @mgroup on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#mgroup= for (self: Object, MGroup) */
void VIRTUAL_modelbuilder__ModulePath__mgroup_61d(val* self, val* p0) {
modelbuilder__ModulePath__mgroup_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModulePath#mmodule for (self: ModulePath): nullable MModule */
val* modelbuilder__ModulePath__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___64dmmodule].val; /* @mmodule on <self:ModulePath> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mmodule for (self: Object): nullable MModule */
val* VIRTUAL_modelbuilder__ModulePath__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = modelbuilder__ModulePath__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mmodule= for (self: ModulePath, nullable MModule) */
void modelbuilder__ModulePath__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModulePath___64dmmodule].val = p0; /* @mmodule on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#mmodule= for (self: Object, nullable MModule) */
void VIRTUAL_modelbuilder__ModulePath__mmodule_61d(val* self, val* p0) {
modelbuilder__ModulePath__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModulePath#to_s for (self: ModulePath): String */
val* modelbuilder__ModulePath__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModulePath__filepath]))(self) /* filepath on <self:ModulePath>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#to_s for (self: Object): String */
val* VIRTUAL_modelbuilder__ModulePath__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = modelbuilder__ModulePath__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#init for (self: ModulePath, String, String, MGroup) */
void modelbuilder__ModulePath__init(val* self, val* p0, val* p1, val* p2) {
self->attrs[COLOR_modelbuilder__ModulePath___64dname].val = p0; /* @name on <self:ModulePath> */
self->attrs[COLOR_modelbuilder__ModulePath___64dfilepath].val = p1; /* @filepath on <self:ModulePath> */
self->attrs[COLOR_modelbuilder__ModulePath___64dmgroup].val = p2; /* @mgroup on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#init for (self: Object, String, String, MGroup) */
void VIRTUAL_modelbuilder__ModulePath__init(val* self, val* p0, val* p1, val* p2) {
modelbuilder__ModulePath__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method modelbuilder#AStdImport#mmodule for (self: AStdImport): nullable MModule */
val* modelbuilder__AStdImport__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_modelbuilder__AStdImport___64dmmodule].val; /* @mmodule on <self:AStdImport> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AStdImport#mmodule for (self: Object): nullable MModule */
val* VIRTUAL_modelbuilder__AStdImport__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = modelbuilder__AStdImport__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AStdImport#mmodule= for (self: AStdImport, nullable MModule) */
void modelbuilder__AStdImport__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__AStdImport___64dmmodule].val = p0; /* @mmodule on <self:AStdImport> */
RET_LABEL:;
}
/* method modelbuilder#AStdImport#mmodule= for (self: Object, nullable MModule) */
void VIRTUAL_modelbuilder__AStdImport__mmodule_61d(val* self, val* p0) {
modelbuilder__AStdImport__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#AModule#mmodule for (self: AModule): nullable MModule */
val* modelbuilder__AModule__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_modelbuilder__AModule___64dmmodule].val; /* @mmodule on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AModule#mmodule for (self: Object): nullable MModule */
val* VIRTUAL_modelbuilder__AModule__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = modelbuilder__AModule__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AModule#mmodule= for (self: AModule, nullable MModule) */
void modelbuilder__AModule__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__AModule___64dmmodule].val = p0; /* @mmodule on <self:AModule> */
RET_LABEL:;
}
/* method modelbuilder#AModule#mmodule= for (self: Object, nullable MModule) */
void VIRTUAL_modelbuilder__AModule__mmodule_61d(val* self, val* p0) {
modelbuilder__AModule__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#AModule#is_importation_done for (self: AModule): Bool */
short int modelbuilder__AModule__is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelbuilder__AModule___64dis_importation_done].s; /* @is_importation_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AModule#is_importation_done for (self: Object): Bool */
short int VIRTUAL_modelbuilder__AModule__is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelbuilder__AModule__is_importation_done(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AModule#is_importation_done= for (self: AModule, Bool) */
void modelbuilder__AModule__is_importation_done_61d(val* self, short int p0) {
self->attrs[COLOR_modelbuilder__AModule___64dis_importation_done].s = p0; /* @is_importation_done on <self:AModule> */
RET_LABEL:;
}
/* method modelbuilder#AModule#is_importation_done= for (self: Object, Bool) */
void VIRTUAL_modelbuilder__AModule__is_importation_done_61d(val* self, short int p0) {
modelbuilder__AModule__is_importation_done_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#AVisibility#mvisibility for (self: AVisibility): MVisibility */
val* modelbuilder__AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "mvisibility", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelbuilder.nit", 637);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method modelbuilder#AVisibility#mvisibility for (self: Object): MVisibility */
val* VIRTUAL_modelbuilder__AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = modelbuilder__AVisibility__mvisibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AIntrudeVisibility#mvisibility for (self: AIntrudeVisibility): MVisibility */
val* modelbuilder__AIntrudeVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:AIntrudeVisibility>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#AIntrudeVisibility#mvisibility for (self: Object): MVisibility */
val* VIRTUAL_modelbuilder__AIntrudeVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = modelbuilder__AIntrudeVisibility__mvisibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#APublicVisibility#mvisibility for (self: APublicVisibility): MVisibility */
val* modelbuilder__APublicVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:APublicVisibility>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#APublicVisibility#mvisibility for (self: Object): MVisibility */
val* VIRTUAL_modelbuilder__APublicVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = modelbuilder__APublicVisibility__mvisibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AProtectedVisibility#mvisibility for (self: AProtectedVisibility): MVisibility */
val* modelbuilder__AProtectedVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__protected_visibility]))(self) /* protected_visibility on <self:AProtectedVisibility>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#AProtectedVisibility#mvisibility for (self: Object): MVisibility */
val* VIRTUAL_modelbuilder__AProtectedVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = modelbuilder__AProtectedVisibility__mvisibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#APrivateVisibility#mvisibility for (self: APrivateVisibility): MVisibility */
val* modelbuilder__APrivateVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:APrivateVisibility>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#APrivateVisibility#mvisibility for (self: Object): MVisibility */
val* VIRTUAL_modelbuilder__APrivateVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = modelbuilder__APrivateVisibility__mvisibility(self);
var = var1;
RET_LABEL:;
return var;
}
