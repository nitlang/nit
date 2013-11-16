#include "modelbuilder.sep.0.h"
/* method modelbuilder#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* modelbuilder__ToolContext__opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___64dopt_path].val; /* @opt_path on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @opt_path", "src/modelbuilder.nit", 37);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @opt_only_metamodel", "src/modelbuilder.nit", 40);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @opt_only_parse", "src/modelbuilder.nit", 43);
exit(1);
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
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/modelbuilder.nit", 52);
exit(1);
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
/* method modelbuilder#ModelBuilder#model for (self: ModelBuilder): Model */
val* modelbuilder__ModelBuilder__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dmodel].val; /* @model on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @model", "src/modelbuilder.nit", 59);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/modelbuilder.nit", 62);
exit(1);
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
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model_base__Model__mmodules]))(var) /* mmodules on <var:Model>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_array__Collection__to_a]))(var1) /* to_a on <var1:Array[MModule]>*/;
var_mmodules = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model_base__Model__mmodule_importation_hierarchy]))(var3) /* mmodule_importation_hierarchy on <var3:Model>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_sorter__AbstractSorter__sort]))(var4, var_mmodules) /* sort on <var4:POSet[MModule]>*/;
var5 = NEW_array__Array(&type_array__Arrayparser_nodes__AModule);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[AModule]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/modelbuilder.nit", 88);
exit(1);
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
CHECK_NEW_array__Array(var25);
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
CHECK_NEW_array__Array(var40);
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
val* var8 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_a /* var a: String */;
val* var12 /* : null */;
val* var13 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : nullable MModule */;
long var17 /* : Int */;
long var_time1 /* var time1: Int */;
val* var18 /* : ToolContext */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
long var24 /* : Int */;
long var26 /* : Int */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : Object */;
val* var36 /* : String */;
long var37 /* : Int */;
val* var38 /* : ToolContext */;
val* var39 /* : ToolContext */;
val* var40 /* : OptionBool */;
val* var41 /* : nullable Object */;
short int var42 /* : Bool */;
val* var43 /* : ToolContext */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
long var49 /* : Int */;
long var50 /* : Int */;
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
var8 = NEW_array__Array(&type_array__Arraymodel_base__MModule);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[MModule]>*/;
CHECK_NEW_array__Array(var8);
var_mmodules = var8;
var9 = ((val* (*)(val*))(var_modules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_modules) /* iterator on <var_modules:Sequence[String]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_a = var11;
var12 = NULL;
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module]))(self, var12, var_a) /* load_module on <self:ModelBuilder>*/;
var_nmodule = var13;
var14 = NULL;
if (var_nmodule == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (var15){
goto CONTINUE_label;
} else {
}
var16 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:nullable AModule(AModule)>*/;
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/modelbuilder.nit", 125);
exit(1);
}
((void (*)(val*, val*))(var_mmodules->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mmodules, var16) /* add on <var_mmodules:Array[MModule]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var17 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ModelBuilder>*/;
var_time1 = var17;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "*** END PARSE: ";
var22 = 15;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var26 = var_time1 - var_time0;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " ***";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var20;
var35 = BOX_kernel__Int(var24); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var35;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
CHECK_NEW_array__Array(var32);
}
var36 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
var37 = 2;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_toolcontext__ToolContext__info]))(var18, var36, var37) /* info on <var18:ToolContext>*/;
var38 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
((void (*)(val*))(var38->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(var38) /* check_errors on <var38:ToolContext>*/;
var39 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_modelbuilder__ToolContext__opt_only_parse]))(var39) /* opt_only_parse on <var39:ToolContext>*/;
var41 = ((val* (*)(val*))(var40->class->vft[COLOR_opts__Option__value]))(var40) /* value on <var40:OptionBool>*/;
var42 = ((struct instance_kernel__Bool*)var41)->value; /* autounbox from nullable Object to Bool */;
if (var42){
var43 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = "*** ONLY PARSE...";
var47 = 17;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = 1;
((void (*)(val*, val*, long))(var43->class->vft[COLOR_toolcontext__ToolContext__info]))(var43, var45, var49) /* info on <var43:ToolContext>*/;
var50 = 0;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var50) /* exit on <self:ModelBuilder>*/;
} else {
}
var = var_mmodules;
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
var10 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model_base__MModule__in_importation]))(var_mmodule) /* in_importation on <var_mmodule:MModule>*/;
var11 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
var12 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_poset__POSetElement___60d_61d]))(var10, var11) /* <= on <var10:POSetElement[MModule]>*/;
var13 = !var12;
if (var13){
goto CONTINUE_label;
} else {
}
var14 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro_mmodule]))(var_mclass) /* intro_mmodule on <var_mclass:MClass>*/;
var15 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__visibility]))(var_mclass) /* visibility on <var_mclass:MClass>*/;
var16 = ((short int (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_model_base__MModule__is_visible]))(var_mmodule, var14, var15) /* is_visible on <var_mmodule:MModule>*/;
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
CHECK_NEW_array__Array(var36);
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
var20 = ((short int (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_model_base__MModule__is_visible]))(var_mmodule, var18, var19) /* is_visible on <var_mmodule:MModule>*/;
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
CHECK_NEW_array__Array(var34);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/modelbuilder.nit", 203);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/modelbuilder.nit", 207);
exit(1);
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
CHECK_NEW_array__Array(var71);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @try_get_mproperty_by_name2_cache", "src/modelbuilder.nit", 217);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @paths", "src/modelbuilder.nit", 226);
exit(1);
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
val* var_origmmodule /* var origmmodule: nullable MModule */;
val* var1 /* : Model */;
val* var2 /* : nullable Array[MModule] */;
val* var_modules /* var modules: nullable Array[MModule] */;
val* var3 /* : Array[String] */;
val* var_tries /* var tries: Array[String] */;
val* var_lastmodule /* var lastmodule: nullable MModule */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : Location */;
val* var7 /* : nullable SourceFile */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var_dirname /* var dirname: String */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
short int var16 /* : Bool */;
val* var17 /* : nullable MModule */;
val* var_owner /* var owner: nullable MModule */;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_candidate /* var candidate: MModule */;
val* var23 /* : nullable MModule */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var_try_file /* var try_file: String */;
short int var38 /* : Bool */;
val* var39 /* : String */;
val* var40 /* : nullable AModule */;
val* var_res /* var res: nullable AModule */;
val* var41 /* : null */;
short int var42 /* : Bool */;
val* var43 /* : null */;
val* var44 /* : nullable MModule */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : String */;
short int var65 /* : Bool */;
val* var66 /* : String */;
val* var67 /* : nullable AModule */;
val* var_res68 /* var res: nullable AModule */;
val* var69 /* : null */;
short int var70 /* : Bool */;
val* var71 /* : null */;
val* var72 /* : nullable MModule */;
val* var73 /* : nullable MModule */;
val* var75 /* : null */;
short int var76 /* : Bool */;
val* var77 /* : Iterator[nullable Object] */;
short int var78 /* : Bool */;
val* var79 /* : nullable Object */;
val* var_candidate80 /* var candidate: MModule */;
val* var81 /* : nullable MModule */;
val* var82 /* : null */;
short int var83 /* : Bool */;
val* var85 /* : Array[String] */;
val* var_lookpaths /* var lookpaths: Array[String] */;
val* var86 /* : null */;
short int var87 /* : Bool */;
val* var88 /* : Location */;
val* var89 /* : nullable SourceFile */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var_dirname92 /* var dirname: String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : String */;
short int var100 /* : Bool */;
val* var101 /* : String */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
val* var104 /* : Array[nullable Object] */;
val* var105 /* : null */;
val* var_candidate106 /* var candidate: nullable String */;
val* var107 /* : Iterator[nullable Object] */;
short int var108 /* : Bool */;
val* var109 /* : nullable Object */;
val* var_dirname110 /* var dirname: String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var_try_file125 /* var try_file: String */;
short int var126 /* : Bool */;
val* var127 /* : null */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : String */;
val* var_abs_candidate /* var abs_candidate: String */;
val* var131 /* : String */;
val* var_abs_try_file /* var abs_try_file: String */;
short int var132 /* : Bool */;
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
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : String */;
val* var171 /* : String */;
val* var172 /* : String */;
short int var173 /* : Bool */;
val* var174 /* : null */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
val* var177 /* : String */;
val* var_abs_candidate178 /* var abs_candidate: String */;
val* var179 /* : String */;
val* var_abs_try_file180 /* var abs_try_file: String */;
short int var181 /* : Bool */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : String */;
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
val* var197 /* : Array[Object] */;
long var198 /* : Int */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : String */;
val* var202 /* : null */;
short int var203 /* : Bool */;
val* var204 /* : null */;
short int var205 /* : Bool */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : String */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : String */;
val* var226 /* : String */;
val* var227 /* : Array[Object] */;
long var228 /* : Int */;
val* var229 /* : NativeArray[Object] */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : String */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
long var244 /* : Int */;
val* var245 /* : String */;
val* var246 /* : String */;
val* var247 /* : Array[Object] */;
long var248 /* : Int */;
val* var249 /* : NativeArray[Object] */;
val* var250 /* : String */;
val* var251 /* : null */;
val* var252 /* : nullable AModule */;
val* var_res253 /* var res: nullable AModule */;
val* var254 /* : null */;
short int var255 /* : Bool */;
val* var256 /* : null */;
val* var257 /* : nullable MModule */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
var_origmmodule = var_mmodule;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_model_base__Model__get_mmodules_by_name]))(var1, var_name) /* get_mmodules_by_name on <var1:Model>*/;
var_modules = var2;
var3 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[String]>*/;
CHECK_NEW_array__Array(var3);
var_tries = var3;
var_lastmodule = var_mmodule;
for(;;) {
var4 = NULL;
if (var_mmodule == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (!var5) break;
var6 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model_base__MModule__location]))(var_mmodule) /* location on <var_mmodule:nullable MModule(MModule)>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_location__Location__file]))(var6) /* file on <var6:Location>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/modelbuilder.nit", 248);
exit(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_location__SourceFile__filename]))(var7) /* filename on <var7:nullable SourceFile>*/;
}
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_file__String__dirname]))(var8) /* dirname on <var8:String>*/;
var_dirname = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "";
var12 = 0;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = ((val* (*)(val*, val*))(var_dirname->class->vft[COLOR_file__String__basename]))(var_dirname, var10) /* basename on <var_dirname:String>*/;
var15 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model_base__MModule__name]))(var_mmodule) /* name on <var_mmodule:nullable MModule(MModule)>*/;
var16 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___33d_61d]))(var14, var15) /* != on <var14:String>*/;
if (var16){
var17 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model_base__MModule__direct_owner]))(var_mmodule) /* direct_owner on <var_mmodule:nullable MModule(MModule)>*/;
var_owner = var17;
} else {
var_owner = var_mmodule;
}
var18 = NULL;
if (var_modules == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
var20 = ((val* (*)(val*))(var_modules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_modules) /* iterator on <var_modules:nullable Array[MModule](Array[MModule])>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var_candidate = var22;
var23 = ((val* (*)(val*))(var_candidate->class->vft[COLOR_model_base__MModule__direct_owner]))(var_candidate) /* direct_owner on <var_candidate:MModule>*/;
if (var23 == NULL) {
var24 = (var_owner == NULL);
} else {
var24 = ((short int (*)(val*, val*))(var23->class->vft[COLOR_kernel__Object___61d_61d]))(var23, var_owner) /* == on <var23:nullable MModule>*/;
}
if (var24){
var = var_candidate;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = "/";
var28 = 1;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = ((val* (*)(val*, val*))(var_dirname->class->vft[COLOR_string__String___43d]))(var_dirname, var26) /* + on <var_dirname:String>*/;
var31 = ((val* (*)(val*, val*))(var30->class->vft[COLOR_string__String___43d]))(var30, var_name) /* + on <var30:String>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = ".nit";
var35 = 4;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = ((val* (*)(val*, val*))(var31->class->vft[COLOR_string__String___43d]))(var31, var33) /* + on <var31:String>*/;
var_try_file = var37;
((void (*)(val*, val*))(var_tries->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_tries, var_try_file) /* add on <var_tries:Array[String]>*/;
var38 = ((short int (*)(val*))(var_try_file->class->vft[COLOR_file__String__file_exists]))(var_try_file) /* file_exists on <var_try_file:String>*/;
if (var38){
var39 = ((val* (*)(val*))(var_try_file->class->vft[COLOR_file__String__simplify_path]))(var_try_file) /* simplify_path on <var_try_file:String>*/;
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module]))(self, var_owner, var39) /* load_module on <self:ModelBuilder>*/;
var_res = var40;
var41 = NULL;
if (var_res == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (var42){
var43 = NULL;
var = var43;
goto RET_LABEL;
} else {
}
var44 = ((val* (*)(val*))(var_res->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_res) /* mmodule on <var_res:nullable AModule(AModule)>*/;
if (var44 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/modelbuilder.nit", 273);
exit(1);
}
var = var44;
goto RET_LABEL;
} else {
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "/";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = ((val* (*)(val*, val*))(var_dirname->class->vft[COLOR_string__String___43d]))(var_dirname, var46) /* + on <var_dirname:String>*/;
var51 = ((val* (*)(val*, val*))(var50->class->vft[COLOR_string__String___43d]))(var50, var_name) /* + on <var50:String>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "/";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = ((val* (*)(val*, val*))(var51->class->vft[COLOR_string__String___43d]))(var51, var53) /* + on <var51:String>*/;
var58 = ((val* (*)(val*, val*))(var57->class->vft[COLOR_string__String___43d]))(var57, var_name) /* + on <var57:String>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = ".nit";
var62 = 4;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*, val*))(var58->class->vft[COLOR_string__String___43d]))(var58, var60) /* + on <var58:String>*/;
var_try_file = var64;
var65 = ((short int (*)(val*))(var_try_file->class->vft[COLOR_file__String__file_exists]))(var_try_file) /* file_exists on <var_try_file:String>*/;
if (var65){
var66 = ((val* (*)(val*))(var_try_file->class->vft[COLOR_file__String__simplify_path]))(var_try_file) /* simplify_path on <var_try_file:String>*/;
var67 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module]))(self, var_owner, var66) /* load_module on <self:ModelBuilder>*/;
var_res68 = var67;
var69 = NULL;
if (var_res68 == NULL) {
var70 = 1; /* is null */
} else {
var70 = 0; /* arg is null but recv is not */
}
if (var70){
var71 = NULL;
var = var71;
goto RET_LABEL;
} else {
}
var72 = ((val* (*)(val*))(var_res68->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_res68) /* mmodule on <var_res68:nullable AModule(AModule)>*/;
if (var72 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/modelbuilder.nit", 281);
exit(1);
}
var = var72;
goto RET_LABEL;
} else {
}
var_lastmodule = var_mmodule;
var73 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_model_base__MModule__direct_owner]))(var_mmodule) /* direct_owner on <var_mmodule:nullable MModule(MModule)>*/;
var_mmodule = var73;
CONTINUE_label74: (void)0;
}
BREAK_label74: (void)0;
var75 = NULL;
if (var_modules == NULL) {
var76 = 0; /* is null */
} else {
var76 = 1; /* arg is null and recv is not */
}
if (var76){
var77 = ((val* (*)(val*))(var_modules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_modules) /* iterator on <var_modules:nullable Array[MModule](Array[MModule])>*/;
for(;;) {
var78 = ((short int (*)(val*))(var77->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var77) /* is_ok on <var77:Iterator[nullable Object]>*/;
if(!var78) break;
var79 = ((val* (*)(val*))(var77->class->vft[COLOR_abstract_collection__Iterator__item]))(var77) /* item on <var77:Iterator[nullable Object]>*/;
var_candidate80 = var79;
var81 = ((val* (*)(val*))(var_candidate80->class->vft[COLOR_model_base__MModule__direct_owner]))(var_candidate80) /* direct_owner on <var_candidate80:MModule>*/;
var82 = NULL;
if (var81 == NULL) {
var83 = 1; /* is null */
} else {
var83 = 0; /* arg is null but recv is not */
}
if (var83){
var = var_candidate80;
goto RET_LABEL;
} else {
}
CONTINUE_label84: (void)0;
((void (*)(val*))(var77->class->vft[COLOR_abstract_collection__Iterator__next]))(var77) /* next on <var77:Iterator[nullable Object]>*/;
}
BREAK_label84: (void)0;
} else {
}
var85 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__paths]))(self) /* paths on <self:ModelBuilder>*/;
var_lookpaths = var85;
var86 = NULL;
if (var_lastmodule == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (var87){
var88 = ((val* (*)(val*))(var_lastmodule->class->vft[COLOR_model_base__MModule__location]))(var_lastmodule) /* location on <var_lastmodule:nullable MModule(MModule)>*/;
var89 = ((val* (*)(val*))(var88->class->vft[COLOR_location__Location__file]))(var88) /* file on <var88:Location>*/;
if (var89 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/modelbuilder.nit", 301);
exit(1);
} else {
var90 = ((val* (*)(val*))(var89->class->vft[COLOR_location__SourceFile__filename]))(var89) /* filename on <var89:nullable SourceFile>*/;
}
var91 = ((val* (*)(val*))(var90->class->vft[COLOR_file__String__dirname]))(var90) /* dirname on <var90:String>*/;
var_dirname92 = var91;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "";
var96 = 0;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = ((val* (*)(val*, val*))(var_dirname92->class->vft[COLOR_file__String__basename]))(var_dirname92, var94) /* basename on <var_dirname92:String>*/;
var99 = ((val* (*)(val*))(var_lastmodule->class->vft[COLOR_model_base__MModule__name]))(var_lastmodule) /* name on <var_lastmodule:nullable MModule(MModule)>*/;
var100 = ((short int (*)(val*, val*))(var98->class->vft[COLOR_kernel__Object___61d_61d]))(var98, var99) /* == on <var98:String>*/;
if (var100){
var101 = ((val* (*)(val*))(var_dirname92->class->vft[COLOR_file__String__dirname]))(var_dirname92) /* dirname on <var_dirname92:String>*/;
var_dirname92 = var101;
} else {
}
var102 = ((short int (*)(val*, val*))(var_lookpaths->class->vft[COLOR_abstract_collection__Collection__has]))(var_lookpaths, var_dirname92) /* has on <var_lookpaths:Array[String]>*/;
var103 = !var102;
if (var103){
var104 = ((val* (*)(val*))(var_lookpaths->class->vft[COLOR_array__Collection__to_a]))(var_lookpaths) /* to_a on <var_lookpaths:Array[String]>*/;
var_lookpaths = var104;
((void (*)(val*, val*))(var_lookpaths->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_lookpaths, var_dirname92) /* add on <var_lookpaths:Array[String]>*/;
} else {
}
} else {
}
var105 = NULL;
var_candidate106 = var105;
var107 = ((val* (*)(val*))(var_lookpaths->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_lookpaths) /* iterator on <var_lookpaths:Array[String]>*/;
for(;;) {
var108 = ((short int (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var107) /* is_ok on <var107:Iterator[nullable Object]>*/;
if(!var108) break;
var109 = ((val* (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__item]))(var107) /* item on <var107:Iterator[nullable Object]>*/;
var_dirname110 = var109;
if (varonce111) {
var112 = varonce111;
} else {
var113 = "/";
var114 = 1;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = ((val* (*)(val*, val*))(var_dirname110->class->vft[COLOR_string__String___43d]))(var_dirname110, var112) /* + on <var_dirname110:String>*/;
var117 = ((val* (*)(val*, val*))(var116->class->vft[COLOR_string__String___43d]))(var116, var_name) /* + on <var116:String>*/;
if (varonce118) {
var119 = varonce118;
} else {
var120 = ".nit";
var121 = 4;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = ((val* (*)(val*, val*))(var117->class->vft[COLOR_string__String___43d]))(var117, var119) /* + on <var117:String>*/;
var124 = ((val* (*)(val*))(var123->class->vft[COLOR_file__String__simplify_path]))(var123) /* simplify_path on <var123:String>*/;
var_try_file125 = var124;
((void (*)(val*, val*))(var_tries->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_tries, var_try_file125) /* add on <var_tries:Array[String]>*/;
var126 = ((short int (*)(val*))(var_try_file125->class->vft[COLOR_file__String__file_exists]))(var_try_file125) /* file_exists on <var_try_file125:String>*/;
if (var126){
var127 = NULL;
if (var_candidate106 == NULL) {
var128 = 1; /* is null */
} else {
var128 = 0; /* arg is null but recv is not */
}
if (var128){
var_candidate106 = var_try_file125;
} else {
var129 = ((short int (*)(val*, val*))(var_candidate106->class->vft[COLOR_kernel__Object___33d_61d]))(var_candidate106, var_try_file125) /* != on <var_candidate106:nullable String(String)>*/;
if (var129){
var130 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_candidate106) /* module_absolute_path on <self:ModelBuilder>*/;
var_abs_candidate = var130;
var131 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_try_file125) /* module_absolute_path on <self:ModelBuilder>*/;
var_abs_try_file = var131;
var132 = ((short int (*)(val*, val*))(var_abs_candidate->class->vft[COLOR_kernel__Object___33d_61d]))(var_abs_candidate, var_abs_try_file) /* != on <var_abs_candidate:String>*/;
if (var132){
if (varonce133) {
var134 = varonce133;
} else {
var135 = "Error: conflicting module file for ";
var136 = 35;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = ": ";
var141 = 2;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = " ";
var146 = 1;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 6;
var150 = NEW_array__NativeArray(var149, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var150)->values[0] = (val*) var134;
((struct instance_array__NativeArray*)var150)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var150)->values[2] = (val*) var139;
((struct instance_array__NativeArray*)var150)->values[3] = (val*) var_candidate106;
((struct instance_array__NativeArray*)var150)->values[4] = (val*) var144;
((struct instance_array__NativeArray*)var150)->values[5] = (val*) var_try_file125;
((void (*)(val*, val*, long))(var148->class->vft[COLOR_array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
CHECK_NEW_array__Array(var148);
}
var151 = ((val* (*)(val*))(var148->class->vft[COLOR_string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var151) /* error on <self:ModelBuilder>*/;
} else {
}
} else {
}
}
} else {
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "/";
var155 = 1;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = ((val* (*)(val*, val*))(var_dirname110->class->vft[COLOR_string__String___43d]))(var_dirname110, var153) /* + on <var_dirname110:String>*/;
var158 = ((val* (*)(val*, val*))(var157->class->vft[COLOR_string__String___43d]))(var157, var_name) /* + on <var157:String>*/;
if (varonce159) {
var160 = varonce159;
} else {
var161 = "/";
var162 = 1;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = ((val* (*)(val*, val*))(var158->class->vft[COLOR_string__String___43d]))(var158, var160) /* + on <var158:String>*/;
var165 = ((val* (*)(val*, val*))(var164->class->vft[COLOR_string__String___43d]))(var164, var_name) /* + on <var164:String>*/;
if (varonce166) {
var167 = varonce166;
} else {
var168 = ".nit";
var169 = 4;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
var171 = ((val* (*)(val*, val*))(var165->class->vft[COLOR_string__String___43d]))(var165, var167) /* + on <var165:String>*/;
var172 = ((val* (*)(val*))(var171->class->vft[COLOR_file__String__simplify_path]))(var171) /* simplify_path on <var171:String>*/;
var_try_file125 = var172;
var173 = ((short int (*)(val*))(var_try_file125->class->vft[COLOR_file__String__file_exists]))(var_try_file125) /* file_exists on <var_try_file125:String>*/;
if (var173){
var174 = NULL;
if (var_candidate106 == NULL) {
var175 = 1; /* is null */
} else {
var175 = 0; /* arg is null but recv is not */
}
if (var175){
var_candidate106 = var_try_file125;
} else {
var176 = ((short int (*)(val*, val*))(var_candidate106->class->vft[COLOR_kernel__Object___33d_61d]))(var_candidate106, var_try_file125) /* != on <var_candidate106:nullable String(String)>*/;
if (var176){
var177 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_candidate106) /* module_absolute_path on <self:ModelBuilder>*/;
var_abs_candidate178 = var177;
var179 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_try_file125) /* module_absolute_path on <self:ModelBuilder>*/;
var_abs_try_file180 = var179;
var181 = ((short int (*)(val*, val*))(var_abs_candidate178->class->vft[COLOR_kernel__Object___33d_61d]))(var_abs_candidate178, var_abs_try_file180) /* != on <var_abs_candidate178:String>*/;
if (var181){
if (varonce182) {
var183 = varonce182;
} else {
var184 = "Error: conflicting module file for ";
var185 = 35;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = ": ";
var190 = 2;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = " ";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
var197 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var197 = array_instance Array[Object] */
var198 = 6;
var199 = NEW_array__NativeArray(var198, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var199)->values[0] = (val*) var183;
((struct instance_array__NativeArray*)var199)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var199)->values[2] = (val*) var188;
((struct instance_array__NativeArray*)var199)->values[3] = (val*) var_candidate106;
((struct instance_array__NativeArray*)var199)->values[4] = (val*) var193;
((struct instance_array__NativeArray*)var199)->values[5] = (val*) var_try_file125;
((void (*)(val*, val*, long))(var197->class->vft[COLOR_array__Array__with_native]))(var197, var199, var198) /* with_native on <var197:Array[Object]>*/;
CHECK_NEW_array__Array(var197);
}
var200 = ((val* (*)(val*))(var197->class->vft[COLOR_string__Object__to_s]))(var197) /* to_s on <var197:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var200) /* error on <self:ModelBuilder>*/;
} else {
}
} else {
}
}
} else {
}
CONTINUE_label201: (void)0;
((void (*)(val*))(var107->class->vft[COLOR_abstract_collection__Iterator__next]))(var107) /* next on <var107:Iterator[nullable Object]>*/;
}
BREAK_label201: (void)0;
var202 = NULL;
if (var_candidate106 == NULL) {
var203 = 1; /* is null */
} else {
var203 = 0; /* arg is null but recv is not */
}
if (var203){
var204 = NULL;
if (var_origmmodule == NULL) {
var205 = 0; /* is null */
} else {
var205 = 1; /* arg is null and recv is not */
}
if (var205){
if (varonce206) {
var207 = varonce206;
} else {
var208 = "Error: cannot find module ";
var209 = 26;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
if (varonce211) {
var212 = varonce211;
} else {
var213 = " from ";
var214 = 6;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = ". tried ";
var219 = 8;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
if (varonce221) {
var222 = varonce221;
} else {
var223 = ", ";
var224 = 2;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
var226 = ((val* (*)(val*, val*))(var_tries->class->vft[COLOR_string__Collection__join]))(var_tries, var222) /* join on <var_tries:Array[String]>*/;
var227 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var227 = array_instance Array[Object] */
var228 = 6;
var229 = NEW_array__NativeArray(var228, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var229)->values[0] = (val*) var207;
((struct instance_array__NativeArray*)var229)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var229)->values[2] = (val*) var212;
((struct instance_array__NativeArray*)var229)->values[3] = (val*) var_origmmodule;
((struct instance_array__NativeArray*)var229)->values[4] = (val*) var217;
((struct instance_array__NativeArray*)var229)->values[5] = (val*) var226;
((void (*)(val*, val*, long))(var227->class->vft[COLOR_array__Array__with_native]))(var227, var229, var228) /* with_native on <var227:Array[Object]>*/;
CHECK_NEW_array__Array(var227);
}
var230 = ((val* (*)(val*))(var227->class->vft[COLOR_string__Object__to_s]))(var227) /* to_s on <var227:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var230) /* error on <self:ModelBuilder>*/;
} else {
if (varonce231) {
var232 = varonce231;
} else {
var233 = "Error: cannot find module ";
var234 = 26;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
if (varonce236) {
var237 = varonce236;
} else {
var238 = ". tried ";
var239 = 8;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
if (varonce241) {
var242 = varonce241;
} else {
var243 = ", ";
var244 = 2;
var245 = string__NativeString__to_s_with_length(var243, var244);
var242 = var245;
varonce241 = var242;
}
var246 = ((val* (*)(val*, val*))(var_tries->class->vft[COLOR_string__Collection__join]))(var_tries, var242) /* join on <var_tries:Array[String]>*/;
var247 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var247 = array_instance Array[Object] */
var248 = 4;
var249 = NEW_array__NativeArray(var248, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var249)->values[0] = (val*) var232;
((struct instance_array__NativeArray*)var249)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var249)->values[2] = (val*) var237;
((struct instance_array__NativeArray*)var249)->values[3] = (val*) var246;
((void (*)(val*, val*, long))(var247->class->vft[COLOR_array__Array__with_native]))(var247, var249, var248) /* with_native on <var247:Array[Object]>*/;
CHECK_NEW_array__Array(var247);
}
var250 = ((val* (*)(val*))(var247->class->vft[COLOR_string__Object__to_s]))(var247) /* to_s on <var247:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_anode, var250) /* error on <self:ModelBuilder>*/;
}
var251 = NULL;
var = var251;
goto RET_LABEL;
} else {
}
var252 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__load_module]))(self, var_mmodule, var_candidate106) /* load_module on <self:ModelBuilder>*/;
var_res253 = var252;
var254 = NULL;
if (var_res253 == NULL) {
var255 = 1; /* is null */
} else {
var255 = 0; /* arg is null but recv is not */
}
if (var255){
var256 = NULL;
var = var256;
goto RET_LABEL;
} else {
}
var257 = ((val* (*)(val*))(var_res253->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_res253) /* mmodule on <var_res253:nullable AModule(AModule)>*/;
if (var257 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/modelbuilder.nit", 351);
exit(1);
}
var = var257;
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
/* method modelbuilder#ModelBuilder#module_absolute_path for (self: ModelBuilder, String): String */
val* modelbuilder__ModelBuilder__module_absolute_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var8 /* : String */;
var_path = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "..";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((short int (*)(val*, val*))(var_path->class->vft[COLOR_string__AbstractString__has_prefix]))(var_path, var1) /* has_prefix on <var_path:String>*/;
if (var5){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__getcwd]))(self) /* getcwd on <self:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_file__String__join_path]))(var6, var_path) /* join_path on <var6:String>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_file__String__simplify_path]))(var7) /* simplify_path on <var7:String>*/;
var = var8;
goto RET_LABEL;
} else {
}
var = var_path;
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
/* method modelbuilder#ModelBuilder#loaded_nmodules for (self: ModelBuilder): HashMap[String, AModule] */
val* modelbuilder__ModelBuilder__loaded_nmodules(val* self) {
val* var /* : HashMap[String, AModule] */;
val* var1 /* : HashMap[String, AModule] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___64dloaded_nmodules].val; /* @loaded_nmodules on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @loaded_nmodules", "src/modelbuilder.nit", 362);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#loaded_nmodules for (self: Object): HashMap[String, AModule] */
val* VIRTUAL_modelbuilder__ModelBuilder__loaded_nmodules(val* self) {
val* var /* : HashMap[String, AModule] */;
val* var1 /* : HashMap[String, AModule] */;
var1 = modelbuilder__ModelBuilder__loaded_nmodules(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#loaded_nmodules= for (self: ModelBuilder, HashMap[String, AModule]) */
void modelbuilder__ModelBuilder__loaded_nmodules_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___64dloaded_nmodules].val = p0; /* @loaded_nmodules on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#loaded_nmodules= for (self: Object, HashMap[String, AModule]) */
void VIRTUAL_modelbuilder__ModelBuilder__loaded_nmodules_61d(val* self, val* p0) {
modelbuilder__ModelBuilder__loaded_nmodules_61d(self, p0);
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#load_module for (self: ModelBuilder, nullable MModule, String): nullable AModule */
val* modelbuilder__ModelBuilder__load_module(val* self, val* p0, val* p1) {
val* var /* : nullable AModule */;
val* var_owner /* var owner: nullable MModule */;
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
val* var43 /* : String */;
val* var_module_path /* var module_path: String */;
val* var44 /* : HashMap[String, AModule] */;
val* var45 /* : Collection[Object] */;
short int var46 /* : Bool */;
val* var47 /* : HashMap[String, AModule] */;
val* var48 /* : nullable Object */;
val* var49 /* : String */;
val* var50 /* : null */;
short int var51 /* : Bool */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var_x /* var x: String */;
val* var58 /* : ToolContext */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
long var73 /* : Int */;
val* var74 /* : IFStream */;
val* var_file /* var file: IFStream */;
val* var75 /* : Lexer */;
val* var76 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var77 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var78 /* : Start */;
val* var_tree /* var tree: Start */;
val* var79 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var80 /* : null */;
short int var81 /* : Bool */;
val* var82 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var83 /* : Bool */;
int cltype;
int idtype;
val* var84 /* : String */;
val* var85 /* : null */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var92 /* : nullable AModuledecl */;
val* var_decl /* var decl: nullable AModuledecl */;
val* var93 /* : null */;
short int var94 /* : Bool */;
val* var95 /* : AModuleName */;
val* var96 /* : TId */;
val* var97 /* : String */;
val* var_decl_name /* var decl_name: String */;
short int var98 /* : Bool */;
val* var99 /* : AModuleName */;
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
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
val* var114 /* : MModule */;
val* var115 /* : Model */;
val* var116 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var117 /* : Array[AModule] */;
val* var118 /* : HashMap[MModule, AModule] */;
val* var119 /* : HashMap[String, AModule] */;
var_owner = p0;
var_filename = p1;
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
CHECK_NEW_array__Array(var19);
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
CHECK_NEW_array__Array(var38);
}
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
((void (*)(val*, val*, val*))(var26->class->vft[COLOR_toolcontext__ToolContext__error]))(var26, var27, var41) /* error on <var26:ToolContext>*/;
var42 = NULL;
var = var42;
goto RET_LABEL;
} else {
}
var43 = ((val* (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__module_absolute_path]))(self, var_filename) /* module_absolute_path on <self:ModelBuilder>*/;
var_module_path = var43;
var44 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__loaded_nmodules]))(self) /* loaded_nmodules on <self:ModelBuilder>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_collection__MapRead__keys]))(var44) /* keys on <var44:HashMap[String, AModule]>*/;
var46 = ((short int (*)(val*, val*))(var45->class->vft[COLOR_abstract_collection__Collection__has]))(var45, var_module_path) /* has on <var45:Collection[Object](HashMapKeys[String, AModule])>*/;
if (var46){
var47 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__loaded_nmodules]))(self) /* loaded_nmodules on <self:ModelBuilder>*/;
var48 = ((val* (*)(val*, val*))(var47->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var47, var_module_path) /* [] on <var47:HashMap[String, AModule]>*/;
var = var48;
goto RET_LABEL;
} else {
}
var50 = NULL;
if (var_owner == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (var51){
var52 = ((val* (*)(val*))(var_owner->class->vft[COLOR_string__Object__to_s]))(var_owner) /* to_s on <var_owner:nullable MModule(MModule)>*/;
var49 = var52;
} else {
if (varonce53) {
var54 = varonce53;
} else {
var55 = ".";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var49 = var54;
}
var_x = var49;
var58 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "load module ";
var62 = 12;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = " in ";
var67 = 4;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 4;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var_filename;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var65;
((struct instance_array__NativeArray*)var71)->values[3] = (val*) var_x;
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
CHECK_NEW_array__Array(var69);
}
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
var73 = 2;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_toolcontext__ToolContext__info]))(var58, var72, var73) /* info on <var58:ToolContext>*/;
var74 = NEW_file__IFStream(&type_file__IFStream);
((void (*)(val*, val*))(var74->class->vft[COLOR_file__IFStream__open]))(var74, var_filename) /* open on <var74:IFStream>*/;
CHECK_NEW_file__IFStream(var74);
var_file = var74;
var75 = NEW_lexer__Lexer(&type_lexer__Lexer);
var76 = NEW_location__SourceFile(&type_location__SourceFile);
((void (*)(val*, val*, val*))(var76->class->vft[COLOR_location__SourceFile__init]))(var76, var_filename, var_file) /* init on <var76:SourceFile>*/;
CHECK_NEW_location__SourceFile(var76);
((void (*)(val*, val*))(var75->class->vft[COLOR_lexer__Lexer__init]))(var75, var76) /* init on <var75:Lexer>*/;
CHECK_NEW_lexer__Lexer(var75);
var_lexer = var75;
var77 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var77->class->vft[COLOR_parser__Parser__init]))(var77, var_lexer) /* init on <var77:Parser>*/;
CHECK_NEW_parser__Parser(var77);
var_parser = var77;
var78 = ((val* (*)(val*))(var_parser->class->vft[COLOR_parser__Parser__parse]))(var_parser) /* parse on <var_parser:Parser>*/;
var_tree = var78;
((void (*)(val*))(var_file->class->vft[COLOR_stream__IOS__close]))(var_file) /* close on <var_file:IFStream>*/;
var79 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:Start>*/;
var_nmodule = var79;
var80 = NULL;
if (var_nmodule == NULL) {
var81 = 1; /* is null */
} else {
var81 = 0; /* arg is null but recv is not */
}
if (var81){
var82 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:Start>*/;
var_neof = var82;
/* <var_neof:EOF> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_neof->type->table_size) {
var83 = 0;
} else {
var83 = var_neof->type->type_table[cltype] == idtype;
}
if (!var83) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/modelbuilder.nit", 398);
exit(1);
}
var84 = ((val* (*)(val*))(var_neof->class->vft[COLOR_lexer__AError__message]))(var_neof) /* message on <var_neof:EOF(AError)>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_neof, var84) /* error on <self:ModelBuilder>*/;
var85 = NULL;
var = var85;
goto RET_LABEL;
} else {
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = ".nit";
var89 = 4;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = ((val* (*)(val*, val*))(var_filename->class->vft[COLOR_file__String__basename]))(var_filename, var87) /* basename on <var_filename:String>*/;
var_mod_name = var91;
var92 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_moduledecl]))(var_nmodule) /* n_moduledecl on <var_nmodule:nullable AModule(AModule)>*/;
var_decl = var92;
var93 = NULL;
if (var_decl == NULL) {
var94 = 1; /* is null */
} else {
var94 = 0; /* arg is null but recv is not */
}
if (var94){
} else {
var95 = ((val* (*)(val*))(var_decl->class->vft[COLOR_parser_nodes__AModuledecl__n_name]))(var_decl) /* n_name on <var_decl:nullable AModuledecl(AModuledecl)>*/;
var96 = ((val* (*)(val*))(var95->class->vft[COLOR_parser_nodes__AModuleName__n_id]))(var95) /* n_id on <var95:AModuleName>*/;
var97 = ((val* (*)(val*))(var96->class->vft[COLOR_parser_nodes__Token__text]))(var96) /* text on <var96:TId>*/;
var_decl_name = var97;
var98 = ((short int (*)(val*, val*))(var_decl_name->class->vft[COLOR_kernel__Object___33d_61d]))(var_decl_name, var_mod_name) /* != on <var_decl_name:String>*/;
if (var98){
var99 = ((val* (*)(val*))(var_decl->class->vft[COLOR_parser_nodes__AModuledecl__n_name]))(var_decl) /* n_name on <var_decl:nullable AModuledecl(AModuledecl)>*/;
if (varonce100) {
var101 = varonce100;
} else {
var102 = "Error: module name missmatch; declared ";
var103 = 39;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = " file named ";
var108 = 12;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 4;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var101;
((struct instance_array__NativeArray*)var112)->values[1] = (val*) var_decl_name;
((struct instance_array__NativeArray*)var112)->values[2] = (val*) var106;
((struct instance_array__NativeArray*)var112)->values[3] = (val*) var_mod_name;
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
CHECK_NEW_array__Array(var110);
}
var113 = ((val* (*)(val*))(var110->class->vft[COLOR_string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var99, var113) /* error on <self:ModelBuilder>*/;
} else {
}
}
var114 = NEW_model_base__MModule(&type_model_base__MModule);
var115 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__model]))(self) /* model on <self:ModelBuilder>*/;
var116 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__ANode__location]))(var_nmodule) /* location on <var_nmodule:nullable AModule(AModule)>*/;
((void (*)(val*, val*, val*, val*, val*))(var114->class->vft[COLOR_model_base__MModule__init]))(var114, var115, var_owner, var_mod_name, var116) /* init on <var114:MModule>*/;
CHECK_NEW_model_base__MModule(var114);
var_mmodule = var114;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule_61d]))(var_nmodule, var_mmodule) /* mmodule= on <var_nmodule:nullable AModule(AModule)>*/;
var117 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__nmodules]))(self) /* nmodules on <self:ModelBuilder>*/;
((void (*)(val*, val*))(var117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var117, var_nmodule) /* add on <var117:Array[AModule]>*/;
var118 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(self) /* mmodule2nmodule on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var118->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var118, var_mmodule, var_nmodule) /* []= on <var118:HashMap[MModule, AModule]>*/;
var119 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__loaded_nmodules]))(self) /* loaded_nmodules on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var119->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var119, var_module_path, var_nmodule) /* []= on <var119:HashMap[String, AModule]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__build_module_importation]))(self, var_nmodule) /* build_module_importation on <self:ModelBuilder>*/;
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#load_module for (self: Object, nullable MModule, String): nullable AModule */
val* VIRTUAL_modelbuilder__ModelBuilder__load_module(val* self, val* p0, val* p1) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = modelbuilder__ModelBuilder__load_module(self, p0, p1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/modelbuilder.nit", 432);
exit(1);
}
var_mmodule = var2;
var3 = 1;
var_stdimport = var3;
var4 = NEW_array__Array(&type_array__Arraymodel_base__MModule);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[MModule]>*/;
CHECK_NEW_array__Array(var4);
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
((void (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_model_base__MModule__set_visibility_for]))(var_mmodule, var_sup, var_mvisibility) /* set_visibility_for on <var_mmodule:MModule>*/;
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
((void (*)(val*, val*, val*))(var_mmodule->class->vft[COLOR_model_base__MModule__set_visibility_for]))(var_mmodule, var_sup36, var39) /* set_visibility_for on <var_mmodule:MModule>*/;
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
CHECK_NEW_array__Array(var52);
}
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
var56 = 3;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_toolcontext__ToolContext__info]))(var40, var55, var56) /* info on <var40:ToolContext>*/;
((void (*)(val*, val*))(var_mmodule->class->vft[COLOR_model_base__MModule__set_imported_mmodules]))(var_mmodule, var_imported_modules) /* set_imported_mmodules on <var_mmodule:MModule>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @nmodules", "src/modelbuilder.nit", 464);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule2nmodule", "src/modelbuilder.nit", 467);
exit(1);
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
CHECK_NEW_array__Array(var20);
}
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(var4, var5, var23) /* fatal_error on <var4:ToolContext>*/;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/modelbuilder.nit", 491);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "src/modelbuilder.nit", 510);
exit(1);
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
