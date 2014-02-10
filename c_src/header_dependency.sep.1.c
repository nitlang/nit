#include "header_dependency.sep.0.h"
/* method header_dependency#ToolContext#header_dependancy_phase for (self: ToolContext): Phase */
val* header_dependency__ToolContext__header_dependancy_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_header_dependency__ToolContext___64dheader_dependancy_phase].val; /* @header_dependancy_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header_dependancy_phase");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/header_dependency.nit", 25);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method header_dependency#ToolContext#header_dependancy_phase for (self: Object): Phase */
val* VIRTUAL_header_dependency__ToolContext__header_dependancy_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = header_dependency__ToolContext__header_dependancy_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method header_dependency#ToolContext#header_dependancy_phase= for (self: ToolContext, Phase) */
void header_dependency__ToolContext__header_dependancy_phase_61d(val* self, val* p0) {
self->attrs[COLOR_header_dependency__ToolContext___64dheader_dependancy_phase].val = p0; /* @header_dependancy_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method header_dependency#ToolContext#header_dependancy_phase= for (self: Object, Phase) */
void VIRTUAL_header_dependency__ToolContext__header_dependancy_phase_61d(val* self, val* p0) {
header_dependency__ToolContext__header_dependancy_phase_61d(self, p0);
RET_LABEL:;
}
/* method header_dependency#AModule#has_public_c_header for (self: AModule): Bool */
short int header_dependency__AModule__has_public_c_header(val* self) {
short int var /* : Bool */;
val* var1 /* : ANodes[AExternCodeBlock] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_code_block /* var code_block: AExternCodeBlock */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AModule__n_extern_code_blocks]))(self) /* n_extern_code_blocks on <self:AModule>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:ANodes[AExternCodeBlock]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_code_block = var4;
var5 = ((short int (*)(val*))(var_code_block->class->vft[COLOR_c__AExternCodeBlock__is_c_header]))(var_code_block) /* is_c_header on <var_code_block:AExternCodeBlock>*/;
if (var5){
var6 = 1;
var = var6;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var7 = 0;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method header_dependency#AModule#has_public_c_header for (self: Object): Bool */
short int VIRTUAL_header_dependency__AModule__has_public_c_header(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = header_dependency__AModule__has_public_c_header(self);
var = var1;
RET_LABEL:;
return var;
}
/* method header_dependency#MModule#header_dependencies_cache for (self: MModule): nullable Array[MModule] */
val* header_dependency__MModule__header_dependencies_cache(val* self) {
val* var /* : nullable Array[MModule] */;
val* var1 /* : nullable Array[MModule] */;
var1 = self->attrs[COLOR_header_dependency__MModule___64dheader_dependencies_cache].val; /* @header_dependencies_cache on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method header_dependency#MModule#header_dependencies_cache for (self: Object): nullable Array[MModule] */
val* VIRTUAL_header_dependency__MModule__header_dependencies_cache(val* self) {
val* var /* : nullable Array[MModule] */;
val* var1 /* : nullable Array[MModule] */;
var1 = header_dependency__MModule__header_dependencies_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method header_dependency#MModule#header_dependencies_cache= for (self: MModule, nullable Array[MModule]) */
void header_dependency__MModule__header_dependencies_cache_61d(val* self, val* p0) {
self->attrs[COLOR_header_dependency__MModule___64dheader_dependencies_cache].val = p0; /* @header_dependencies_cache on <self:MModule> */
RET_LABEL:;
}
/* method header_dependency#MModule#header_dependencies_cache= for (self: Object, nullable Array[MModule]) */
void VIRTUAL_header_dependency__MModule__header_dependencies_cache_61d(val* self, val* p0) {
header_dependency__MModule__header_dependencies_cache_61d(self, p0);
RET_LABEL:;
}
/* method header_dependency#MModule#header_dependencies for (self: MModule): Array[MModule] */
val* header_dependency__MModule__header_dependencies(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : nullable Array[MModule] */;
val* var_cache /* var cache: nullable Array[MModule] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_header_dependency__MModule__header_dependencies_cache]))(self) /* header_dependencies_cache on <self:MModule>*/;
var_cache = var1;
var2 = NULL;
if (var_cache == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/header_dependency.nit", 40);
exit(1);
}
var = var_cache;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method header_dependency#MModule#header_dependencies for (self: Object): Array[MModule] */
val* VIRTUAL_header_dependency__MModule__header_dependencies(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = header_dependency__MModule__header_dependencies(self);
var = var1;
RET_LABEL:;
return var;
}
/* method header_dependency#MModule#compute_header_dependencies for (self: MModule, HeaderDependancyPhase) */
void header_dependency__MModule__compute_header_dependencies(val* self, val* p0) {
val* var_v /* var v: HeaderDependancyPhase */;
val* var /* : nullable Array[MModule] */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : Array[MModule] */;
val* var_header_dependencies /* var header_dependencies: Array[MModule] */;
val* var4 /* : POSetElement[MModule] */;
val* var5 /* : Collection[Object] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var9 /* : Array[MModule] */;
val* var_hd /* var hd: Array[MModule] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var13 /* : ModelBuilder */;
val* var14 /* : HashMap[MModule, AModule] */;
val* var15 /* : nullable Object */;
val* var_amodule /* var amodule: AModule */;
short int var16 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_header_dependency__MModule__header_dependencies_cache]))(self) /* header_dependencies_cache on <self:MModule>*/;
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = NEW_array__Array(&type_array__Arraymodel_base__MModule);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[MModule]>*/;
CHECK_NEW_array__Array(var3);
var_header_dependencies = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__MModule__in_importation]))(self) /* in_importation on <self:MModule>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var4) /* direct_greaters on <var4:POSetElement[MModule]>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Collection[Object](Collection[MModule])>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_m = var8;
((void (*)(val*, val*))(var_m->class->vft[COLOR_header_dependency__MModule__compute_header_dependencies]))(var_m, var_v) /* compute_header_dependencies on <var_m:MModule>*/;
var9 = ((val* (*)(val*))(var_m->class->vft[COLOR_header_dependency__MModule__header_dependencies]))(var_m) /* header_dependencies on <var_m:MModule>*/;
var_hd = var9;
var10 = ((short int (*)(val*))(var_hd->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_hd) /* is_empty on <var_hd:Array[MModule]>*/;
var11 = !var10;
if (var11){
((void (*)(val*, val*))(var_header_dependencies->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_header_dependencies, var_hd) /* add_all on <var_header_dependencies:Array[MModule]>*/;
} else {
}
var12 = ((val* (*)(val*))(var_v->class->vft[COLOR_phase__Phase__toolcontext]))(var_v) /* toolcontext on <var_v:HeaderDependancyPhase>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var12) /* modelbuilder on <var12:ToolContext>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(var13) /* mmodule2nmodule on <var13:ModelBuilder>*/;
var15 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var14, var_m) /* [] on <var14:HashMap[MModule, AModule]>*/;
var_amodule = var15;
var16 = ((short int (*)(val*))(var_amodule->class->vft[COLOR_header_dependency__AModule__has_public_c_header]))(var_amodule) /* has_public_c_header on <var_amodule:AModule>*/;
if (var16){
((void (*)(val*, val*))(var_header_dependencies->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_header_dependencies, var_m) /* add on <var_header_dependencies:Array[MModule]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_header_dependency__MModule__header_dependencies_cache_61d]))(self, var_header_dependencies) /* header_dependencies_cache= on <self:MModule>*/;
RET_LABEL:;
}
/* method header_dependency#MModule#compute_header_dependencies for (self: Object, HeaderDependancyPhase) */
void VIRTUAL_header_dependency__MModule__compute_header_dependencies(val* self, val* p0) {
header_dependency__MModule__compute_header_dependencies(self, p0);
RET_LABEL:;
}
/* method header_dependency#HeaderDependancyPhase#process_nmodule for (self: HeaderDependancyPhase, AModule) */
void header_dependency__HeaderDependancyPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
var_nmodule = p0;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
var_mmodule = var;
if (var_mmodule == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/header_dependency.nit", 75);
exit(1);
} else {
((void (*)(val*, val*))(var_mmodule->class->vft[COLOR_header_dependency__MModule__compute_header_dependencies]))(var_mmodule, self) /* compute_header_dependencies on <var_mmodule:nullable MModule>*/;
}
RET_LABEL:;
}
/* method header_dependency#HeaderDependancyPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_header_dependency__HeaderDependancyPhase__process_nmodule(val* self, val* p0) {
header_dependency__HeaderDependancyPhase__process_nmodule(self, p0);
RET_LABEL:;
}
