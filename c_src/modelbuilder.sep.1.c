#include "modelbuilder.sep.0.h"
/* method modelbuilder#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* modelbuilder__ToolContext__opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 37);
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
val* var3 /* : OptionArray */;
{ /* Inline modelbuilder#ToolContext#opt_path (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_modelbuilder__ToolContext___opt_path].val; /* _opt_path on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 37);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_only_metamodel for (self: ToolContext): OptionBool */
val* modelbuilder__ToolContext__opt_only_metamodel(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 40);
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
val* var3 /* : OptionBool */;
{ /* Inline modelbuilder#ToolContext#opt_only_metamodel (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_modelbuilder__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 40);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_only_parse for (self: ToolContext): OptionBool */
val* modelbuilder__ToolContext__opt_only_parse(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 43);
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
val* var3 /* : OptionBool */;
{ /* Inline modelbuilder#ToolContext#opt_only_parse (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_modelbuilder__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 43);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_ignore_visibility for (self: ToolContext): OptionBool */
val* modelbuilder__ToolContext__opt_ignore_visibility(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 46);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#opt_ignore_visibility for (self: Object): OptionBool */
val* VIRTUAL_modelbuilder__ToolContext__opt_ignore_visibility(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 46);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#init for (self: ToolContext) */
void modelbuilder__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var14 /* : OptionBool */;
val* var15 /* : Array[Option] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Option] */;
{
((void (*)(val*))(self->class->vft[COLOR_modelbuilder__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_path (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_modelbuilder__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 37);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_only_parse (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_modelbuilder__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 43);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_only_metamodel (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_modelbuilder__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 40);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 46);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var15 = array_instance Array[Option] */
var16 = 4;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var17)->values[2] = (val*) var9;
((struct instance_array__NativeArray*)var17)->values[3] = (val*) var12;
{
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var15); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#ToolContext#init for (self: Object) */
void VIRTUAL_modelbuilder__ToolContext__init(val* self) {
modelbuilder__ToolContext__init(self); /* Direct call modelbuilder#ToolContext#init on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method modelbuilder#ToolContext#modelbuilder for (self: ToolContext): ModelBuilder */
val* modelbuilder__ToolContext__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
val* var3 /* : nullable ModelBuilder */;
{
{ /* Inline modelbuilder#ToolContext#modelbuilder_real (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 55);
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
var1 = self->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#modelbuilder_real for (self: Object): nullable ModelBuilder */
val* VIRTUAL_modelbuilder__ToolContext__modelbuilder_real(val* self) {
val* var /* : nullable ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
val* var3 /* : nullable ModelBuilder */;
{ /* Inline modelbuilder#ToolContext#modelbuilder_real (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:Object(ToolContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#modelbuilder_real= for (self: ToolContext, nullable ModelBuilder) */
void modelbuilder__ToolContext__modelbuilder_real_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val = p0; /* _modelbuilder_real on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder#ToolContext#modelbuilder_real= for (self: Object, nullable ModelBuilder) */
void VIRTUAL_modelbuilder__ToolContext__modelbuilder_real_61d(val* self, val* p0) {
{ /* Inline modelbuilder#ToolContext#modelbuilder_real= (self,p0) on <self:Object(ToolContext)> */
self->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val = p0; /* _modelbuilder_real on <self:Object(ToolContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#ToolContext#run_global_phases for (self: ToolContext, Array[MModule]) */
void modelbuilder__ToolContext__run_global_phases(val* self, val* p0) {
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_mainmodule /* var mainmodule: nullable Object */;
val* var9 /* : MModule */;
val* var10 /* : ModelBuilder */;
val* var11 /* : Model */;
val* var13 /* : Model */;
val* var14 /* : null */;
val* var15 /* : nullable Object */;
val* var16 /* : String */;
val* var18 /* : String */;
val* var19 /* : Location */;
val* var20 /* : nullable Object */;
val* var21 /* : Location */;
val* var23 /* : Location */;
val* var24 /* : nullable SourceFile */;
val* var26 /* : nullable SourceFile */;
long var27 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
val* var33 /* : Sequence[Phase] */;
val* var34 /* : Iterator[nullable Object] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
var_mmodules = p0;
{
var = array__AbstractArrayRead__is_empty(var_mmodules);
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 61);
show_backtrace(1);
}
{
var2 = array__AbstractArrayRead__length(var_mmodules);
}
var3 = 1;
{
{ /* Inline kernel#Int#== (var2,var3) on <var2:Int> */
var7 = var2 == var3;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var8 = abstract_collection__SequenceRead__first(var_mmodules);
}
var_mainmodule = var8;
} else {
var9 = NEW_mmodule__MModule(&type_mmodule__MModule);
{
var10 = modelbuilder__ToolContext__modelbuilder(self);
}
{
{ /* Inline modelbuilder#ModelBuilder#model (var10) on <var10:ModelBuilder> */
var13 = var10->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <var10:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = NULL;
{
var15 = abstract_collection__SequenceRead__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#name (var15) on <var15:nullable Object(MModule)> */
var18 = var15->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var15:nullable Object(MModule)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = NEW_location__Location(&type_location__Location);
{
var20 = abstract_collection__SequenceRead__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#location (var20) on <var20:nullable Object(MModule)> */
var23 = var20->attrs[COLOR_mmodule__MModule___location].val; /* _location on <var20:nullable Object(MModule)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 89);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline location#Location#file (var21) on <var21:Location> */
var26 = var21->attrs[COLOR_location__Location___file].val; /* _file on <var21:Location> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = 0;
var28 = 0;
var29 = 0;
var30 = 0;
{
location__Location__init(var19, var24, var27, var28, var29, var30); /* Direct call location#Location#init on <var19:Location>*/
}
{
mmodule__MModule__init(var9, var11, var14, var16, var19); /* Direct call mmodule#MModule#init on <var9:MModule>*/
}
var_mainmodule = var9;
var31 = 1;
{
{ /* Inline mmodule#MModule#is_fictive= (var_mainmodule,var31) on <var_mainmodule:nullable Object(MModule)> */
var_mainmodule->attrs[COLOR_mmodule__MModule___is_fictive].s = var31; /* _is_fictive on <var_mainmodule:nullable Object(MModule)> */
RET_LABEL32:(void)0;
}
}
{
mmodule__MModule__set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:nullable Object(MModule)>*/
}
}
{
var33 = phase__ToolContext__phases_list(self);
}
{
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Collection__iterator]))(var33) /* iterator on <var33:Sequence[Phase]>*/;
}
for(;;) {
{
var35 = ((short int (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var34) /* is_ok on <var34:Iterator[nullable Object]>*/;
}
if(!var35) break;
{
var36 = ((val* (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__item]))(var34) /* item on <var34:Iterator[nullable Object]>*/;
}
var_phase = var36;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var39 = var_phase->attrs[COLOR_phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37){
goto CONTINUE_label;
} else {
}
{
((void (*)(val*, val*, val*))(var_phase->class->vft[COLOR_modelbuilder__Phase__process_mainmodule]))(var_phase, var_mainmodule, var_mmodules) /* process_mainmodule on <var_phase:Phase>*/;
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var34->class->vft[COLOR_abstract_collection__Iterator__next]))(var34) /* next on <var34:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method modelbuilder#ToolContext#run_global_phases for (self: Object, Array[MModule]) */
void VIRTUAL_modelbuilder__ToolContext__run_global_phases(val* self, val* p0) {
modelbuilder__ToolContext__run_global_phases(self, p0); /* Direct call modelbuilder#ToolContext#run_global_phases on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method modelbuilder#Phase#process_mainmodule for (self: Phase, MModule, SequenceRead[MModule]) */
void modelbuilder__Phase__process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
var_mainmodule = p0;
var_given_mmodules = p1;
RET_LABEL:;
}
/* method modelbuilder#Phase#process_mainmodule for (self: Object, MModule, SequenceRead[MModule]) */
void VIRTUAL_modelbuilder__Phase__process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
{ /* Inline modelbuilder#Phase#process_mainmodule (self,p0,p1) on <self:Object(Phase)> */
var_mainmodule = p0;
var_given_mmodules = p1;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#model for (self: ModelBuilder): Model */
val* modelbuilder__ModelBuilder__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
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
val* var3 /* : Model */;
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#model= for (self: ModelBuilder, Model) */
void modelbuilder__ModelBuilder__model_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___model].val = p0; /* _model on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#model= for (self: Object, Model) */
void VIRTUAL_modelbuilder__ModelBuilder__model_61d(val* self, val* p0) {
{ /* Inline modelbuilder#ModelBuilder#model= (self,p0) on <self:Object(ModelBuilder)> */
self->attrs[COLOR_modelbuilder__ModelBuilder___model].val = p0; /* _model on <self:Object(ModelBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#toolcontext for (self: ModelBuilder): ToolContext */
val* modelbuilder__ModelBuilder__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
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
val* var3 /* : ToolContext */;
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#toolcontext= for (self: ModelBuilder, ToolContext) */
void modelbuilder__ModelBuilder__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val = p0; /* _toolcontext on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_modelbuilder__ModelBuilder__toolcontext_61d(val* self, val* p0) {
{ /* Inline modelbuilder#ModelBuilder#toolcontext= (self,p0) on <self:Object(ModelBuilder)> */
self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val = p0; /* _toolcontext on <self:Object(ModelBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#run_phases for (self: ModelBuilder) */
void modelbuilder__ModelBuilder__run_phases(val* self) {
val* var /* : Model */;
val* var2 /* : Model */;
val* var3 /* : Array[MModule] */;
val* var5 /* : Array[MModule] */;
val* var6 /* : Array[nullable Object] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var7 /* : Model */;
val* var9 /* : Model */;
val* var10 /* : POSet[MModule] */;
val* var12 /* : POSet[MModule] */;
val* var13 /* : Array[AModule] */;
val* var_nmodules /* var nmodules: Array[AModule] */;
val* var14 /* : ArrayIterator[nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_mm /* var mm: MModule */;
val* var17 /* : HashMap[MModule, AModule] */;
val* var19 /* : HashMap[MModule, AModule] */;
val* var20 /* : nullable Object */;
val* var21 /* : ToolContext */;
val* var23 /* : ToolContext */;
val* var24 /* : ToolContext */;
val* var26 /* : ToolContext */;
val* var27 /* : OptionBool */;
val* var29 /* : OptionBool */;
val* var30 /* : nullable Object */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
val* var34 /* : ToolContext */;
val* var36 /* : ToolContext */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
long var41 /* : Int */;
long var42 /* : Int */;
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodules (var) on <var:Model> */
var5 = var->attrs[COLOR_mmodule__Model___mmodules].val; /* _mmodules on <var:Model> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 28);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = array__Collection__to_a(var3);
}
var_mmodules = var6;
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var9 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var7) on <var7:Model> */
var12 = var7->attrs[COLOR_mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var7:Model> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 37);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
sorter__Comparator__sort(var10, var_mmodules); /* Direct call sorter#Comparator#sort on <var10:POSet[MModule]>*/
}
var13 = NEW_array__Array(&type_array__Arrayparser_nodes__AModule);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[AModule]>*/
}
var_nmodules = var13;
{
var14 = array__AbstractArrayRead__iterator(var_mmodules);
}
for(;;) {
{
var15 = array__ArrayIterator__is_ok(var14);
}
if(!var15) break;
{
var16 = array__ArrayIterator__item(var14);
}
var_mm = var16;
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var19 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = hash_collection__HashMap___91d_93d(var17, var_mm);
}
{
array__Array__add(var_nmodules, var20); /* Direct call array#Array#add on <var_nmodules:Array[AModule]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var14); /* Direct call array#ArrayIterator#next on <var14:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var23 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
phase__ToolContext__run_phases(var21, var_nmodules); /* Direct call phase#ToolContext#run_phases on <var21:ToolContext>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var26 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_only_metamodel (var24) on <var24:ToolContext> */
var29 = var24->attrs[COLOR_modelbuilder__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <var24:ToolContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 40);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline opts#Option#value (var27) on <var27:OptionBool> */
var32 = var27->attrs[COLOR_opts__Option___value].val; /* _value on <var27:OptionBool> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var33 = ((struct instance_kernel__Bool*)var30)->value; /* autounbox from nullable Object to Bool */;
if (var33){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var36 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (varonce) {
var37 = varonce;
} else {
var38 = "*** ONLY METAMODEL";
var39 = 18;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
var41 = 1;
{
toolcontext__ToolContext__info(var34, var37, var41); /* Direct call toolcontext#ToolContext#info on <var34:ToolContext>*/
}
var42 = 0;
{
{ /* Inline kernel#Object#exit (self,var42) on <self:ModelBuilder> */
exit(var42);
RET_LABEL43:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#run_phases for (self: Object) */
void VIRTUAL_modelbuilder__ModelBuilder__run_phases(val* self) {
modelbuilder__ModelBuilder__run_phases(self); /* Direct call modelbuilder#ModelBuilder#run_phases on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#init for (self: ModelBuilder, Model, ToolContext) */
void modelbuilder__ModelBuilder__init(val* self, val* p0, val* p1) {
val* var_model /* var model: Model */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable ModelBuilder */;
val* var4 /* : nullable ModelBuilder */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var13 /* : Array[String] */;
val* var15 /* : Array[String] */;
val* var16 /* : OptionArray */;
val* var18 /* : OptionArray */;
val* var19 /* : nullable Object */;
val* var21 /* : nullable Object */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var_path_env /* var path_env: String */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : Array[String] */;
val* var31 /* : Array[String] */;
char var32 /* : Char */;
val* var33 /* : Array[Text] */;
val* var34 /* : Pattern */;
val* var35 /* : nullable String */;
val* var37 /* : nullable String */;
val* var_nit_dir /* var nit_dir: nullable String */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var_other42 /* var other: nullable Object */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
val* var_libname /* var libname: String */;
short int var55 /* : Bool */;
val* var56 /* : Array[String] */;
val* var58 /* : Array[String] */;
var_model = p0;
var_toolcontext = p1;
{
{ /* Inline modelbuilder#ModelBuilder#model= (self,var_model) on <self:ModelBuilder> */
self->attrs[COLOR_modelbuilder__ModelBuilder___model].val = var_model; /* _model on <self:ModelBuilder> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext= (self,var_toolcontext) on <self:ModelBuilder> */
self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val = var_toolcontext; /* _toolcontext on <self:ModelBuilder> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#modelbuilder_real (var_toolcontext) on <var_toolcontext:ToolContext> */
var4 = var_toolcontext->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <var_toolcontext:ToolContext> */
var = var4;
RET_LABEL3:(void)0;
}
}
var5 = NULL;
if (var == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,var5) on <var:nullable ModelBuilder> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable ModelBuilder(ModelBuilder)> */
var11 = var == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 127);
show_backtrace(1);
}
{
{ /* Inline modelbuilder#ToolContext#modelbuilder_real= (var_toolcontext,self) on <var_toolcontext:ToolContext> */
var_toolcontext->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val = self; /* _modelbuilder_real on <var_toolcontext:ToolContext> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#paths (self) on <self:ModelBuilder> */
var15 = self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 289);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_path (var_toolcontext) on <var_toolcontext:ToolContext> */
var18 = var_toolcontext->attrs[COLOR_modelbuilder__ToolContext___opt_path].val; /* _opt_path on <var_toolcontext:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 37);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline opts#Option#value (var16) on <var16:OptionArray> */
var21 = var16->attrs[COLOR_opts__Option___value].val; /* _value on <var16:OptionArray> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
abstract_collection__Sequence__append(var13, var19); /* Direct call abstract_collection#Sequence#append on <var13:Array[String]>*/
}
if (varonce) {
var22 = varonce;
} else {
var23 = "NIT_PATH";
var24 = 8;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
{
var26 = environ__String__environ(var22);
}
var_path_env = var26;
{
var27 = string__Text__is_empty(var_path_env);
}
var28 = !var27;
if (var28){
{
{ /* Inline modelbuilder#ModelBuilder#paths (self) on <self:ModelBuilder> */
var31 = self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 289);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = ':';
{
var34 = BOX_kernel__Char(var32); /* autobox from Char to Pattern */
var33 = string_search__Text__split_with(var_path_env, var34);
}
{
abstract_collection__Sequence__append(var29, var33); /* Direct call abstract_collection#Sequence#append on <var29:Array[String]>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var_toolcontext) on <var_toolcontext:ToolContext> */
var37 = var_toolcontext->attrs[COLOR_toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var_toolcontext:ToolContext> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_nit_dir = var35;
var38 = NULL;
if (var_nit_dir == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nit_dir,var38) on <var_nit_dir:nullable String> */
var_other42 = var38;
{
var44 = ((short int (*)(val*, val*))(var_nit_dir->class->vft[COLOR_kernel__Object___61d_61d]))(var_nit_dir, var_other42) /* == on <var_nit_dir:nullable String(String)>*/;
var43 = var44;
}
var45 = !var43;
var40 = var45;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
if (varonce46) {
var47 = varonce46;
} else {
var48 = "/lib";
var49 = 4;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 2;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var_nit_dir;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var47;
{
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
var_libname = var54;
{
var55 = file__String__file_exists(var_libname);
}
if (var55){
{
{ /* Inline modelbuilder#ModelBuilder#paths (self) on <self:ModelBuilder> */
var58 = self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 289);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
array__Array__add(var56, var_libname); /* Direct call array#Array#add on <var56:Array[String]>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#init for (self: Object, Model, ToolContext) */
void VIRTUAL_modelbuilder__ModelBuilder__init(val* self, val* p0, val* p1) {
modelbuilder__ModelBuilder__init(self, p0, p1); /* Direct call modelbuilder#ModelBuilder#init on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#parse for (self: ModelBuilder, Sequence[String]): Array[MModule] */
val* modelbuilder__ModelBuilder__parse(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_modules /* var modules: Sequence[String] */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_time0 /* var time0: Int */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
long var11 /* : Int */;
val* var12 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_a /* var a: String */;
val* var16 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable MModule */;
val* var26 /* : nullable MModule */;
long var27 /* : Int */;
long var29 /* : Int */;
long var_time1 /* var time1: Int */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var41 /* : Int */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : Object */;
val* var51 /* : String */;
long var52 /* : Int */;
val* var53 /* : ToolContext */;
val* var55 /* : ToolContext */;
val* var56 /* : ToolContext */;
val* var58 /* : ToolContext */;
val* var59 /* : OptionBool */;
val* var61 /* : OptionBool */;
val* var62 /* : nullable Object */;
val* var64 /* : nullable Object */;
short int var65 /* : Bool */;
val* var66 /* : ToolContext */;
val* var68 /* : ToolContext */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
long var74 /* : Int */;
long var75 /* : Int */;
val* var77 /* : Array[nullable Object] */;
var_modules = p0;
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var3 = kernel_Any_Any_get_time_0(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_time0 = var1;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var6 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = "*** PARSE ***";
var9 = 13;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = 1;
{
toolcontext__ToolContext__info(var4, var7, var11); /* Direct call toolcontext#ToolContext#info on <var4:ToolContext>*/
}
var12 = NEW_array__ArraySet(&type_array__ArraySetmmodule__MModule);
{
array__ArraySet__init(var12); /* Direct call array#ArraySet#init on <var12:ArraySet[MModule]>*/
}
var_mmodules = var12;
{
var13 = ((val* (*)(val*))(var_modules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_modules) /* iterator on <var_modules:Sequence[String]>*/;
}
for(;;) {
{
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
}
if(!var14) break;
{
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
}
var_a = var15;
{
var16 = modelbuilder__ModelBuilder__load_module(self, var_a);
}
var_nmodule = var16;
var17 = NULL;
if (var_nmodule == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,var17) on <var_nmodule:nullable AModule> */
var_other = var17;
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var23 = var_nmodule == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
goto CONTINUE_label;
} else {
}
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var26 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 161);
show_backtrace(1);
}
{
array__ArraySet__add(var_mmodules, var24); /* Direct call array#ArraySet#add on <var_mmodules:ArraySet[MModule]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var29 = kernel_Any_Any_get_time_0(self);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_time1 = var27;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var32 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "*** END PARSE: ";
var36 = 15;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var40 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var41 = var_time1 - var_time0;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " ***";
var45 = 4;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 3;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var34;
var50 = BOX_kernel__Int(var38); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var50;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var43;
{
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var51 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
var52 = 2;
{
toolcontext__ToolContext__info(var30, var51, var52); /* Direct call toolcontext#ToolContext#info on <var30:ToolContext>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var55 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
toolcontext__ToolContext__check_errors(var53); /* Direct call toolcontext#ToolContext#check_errors on <var53:ToolContext>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var58 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_only_parse (var56) on <var56:ToolContext> */
var61 = var56->attrs[COLOR_modelbuilder__ToolContext___opt_only_parse].val; /* _opt_only_parse on <var56:ToolContext> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 43);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline opts#Option#value (var59) on <var59:OptionBool> */
var64 = var59->attrs[COLOR_opts__Option___value].val; /* _value on <var59:OptionBool> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var65 = ((struct instance_kernel__Bool*)var62)->value; /* autounbox from nullable Object to Bool */;
if (var65){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var68 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "*** ONLY PARSE...";
var72 = 17;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = 1;
{
toolcontext__ToolContext__info(var66, var70, var74); /* Direct call toolcontext#ToolContext#info on <var66:ToolContext>*/
}
var75 = 0;
{
{ /* Inline kernel#Object#exit (self,var75) on <self:ModelBuilder> */
exit(var75);
RET_LABEL76:(void)0;
}
}
} else {
}
{
var77 = array__Collection__to_a(var_mmodules);
}
var = var77;
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
val* var3 /* : Model */;
val* var4 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_res /* var res: nullable MClass */;
val* var10 /* : ArrayIterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var13 /* : POSetElement[MModule] */;
val* var15 /* : POSetElement[MModule] */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MModule */;
val* var23 /* : MModule */;
val* var24 /* : MVisibility */;
val* var26 /* : MVisibility */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
val* var56 /* : null */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__Model__get_mclasses_by_name(var1, var_name);
}
var_classes = var4;
var5 = NULL;
if (var_classes == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = abstract_collection__SequenceRead___61d_61d(var_classes, var5);
var6 = var7;
}
if (var6){
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
var9 = NULL;
var_res = var9;
{
var10 = array__AbstractArrayRead__iterator(var_classes);
}
for(;;) {
{
var11 = array__ArrayIterator__is_ok(var10);
}
if(!var11) break;
{
var12 = array__ArrayIterator__item(var10);
}
var_mclass = var12;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var15 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var18 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = poset__POSetElement___60d_61d(var13, var16);
}
var20 = !var19;
if (var20){
goto CONTINUE_label;
} else {
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var23 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:MClass> */
var26 = var_mclass->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var_mclass:MClass> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 359);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = mmodule__MModule__is_visible(var_mmodule, var21, var24);
}
var28 = !var27;
if (var28){
goto CONTINUE_label;
} else {
}
var29 = NULL;
if (var_res == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var29) on <var_res:nullable MClass> */
var_other = var29;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MClass(MClass)> */
var35 = var_res == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var_res = var_mclass;
} else {
if (varonce) {
var36 = varonce;
} else {
var37 = "Ambigous class name \'";
var38 = 21;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "\'; conflict between ";
var43 = 20;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = model__MClass__full_name(var_mclass);
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = " and ";
var49 = 5;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
{
var51 = model__MClass__full_name(var_res);
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 6;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var41;
((struct instance_array__NativeArray*)var54)->values[3] = (val*) var45;
((struct instance_array__NativeArray*)var54)->values[4] = (val*) var47;
((struct instance_array__NativeArray*)var54)->values[5] = (val*) var51;
{
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
}
{
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_anode, var55); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
var56 = NULL;
var = var56;
goto RET_LABEL;
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var10); /* Direct call array#ArrayIterator#next on <var10:ArrayIterator[nullable Object]>*/
}
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
val* var3 /* : Model */;
val* var4 /* : nullable Array[MProperty] */;
val* var_props /* var props: nullable Array[MProperty] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var11 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var12 /* : nullable Object */;
val* var_cache /* var cache: nullable MProperty */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : null */;
val* var_res /* var res: nullable MProperty */;
val* var21 /* : null */;
val* var_ress /* var ress: nullable Array[MProperty] */;
val* var22 /* : ArrayIterator[nullable Object] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
val* var33 /* : MVisibility */;
val* var35 /* : MVisibility */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var_other42 /* var other: nullable Object */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
short int var_53 /* var : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : MClassDef */;
val* var63 /* : MClassDef */;
val* var64 /* : MClassType */;
val* var66 /* : MClassType */;
val* var_restype /* var restype: MClassType */;
val* var67 /* : MClassDef */;
val* var69 /* : MClassDef */;
val* var70 /* : MClassType */;
val* var72 /* : MClassType */;
val* var_mproptype /* var mproptype: MClassType */;
val* var73 /* : null */;
short int var74 /* : Bool */;
val* var75 /* : null */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : Array[MProperty] */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : null */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var_88 /* var : Bool */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
short int var_92 /* var : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : MClassDef */;
val* var98 /* : MClassDef */;
val* var99 /* : MClassType */;
val* var101 /* : MClassType */;
val* var_restype102 /* var restype: MClassType */;
val* var103 /* : Array[MProperty] */;
val* var_ress2 /* var ress2: Array[MProperty] */;
val* var104 /* : ArrayIterator[nullable Object] */;
short int var105 /* : Bool */;
val* var106 /* : nullable Object */;
val* var_mprop107 /* var mprop: MProperty */;
val* var108 /* : MClassDef */;
val* var110 /* : MClassDef */;
val* var111 /* : MClassType */;
val* var113 /* : MClassType */;
val* var_mproptype114 /* var mproptype: MClassType */;
val* var115 /* : null */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
short int var122 /* : Bool */;
short int var_123 /* var : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : null */;
val* var131 /* : null */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
long var138 /* : Int */;
long var139 /* : Int */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name;
short int var145 /* : Bool */;
val* var146 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var147 /* : ArrayIterator[nullable Object] */;
short int var148 /* : Bool */;
val* var149 /* : nullable Object */;
val* var_mprop150 /* var mprop: MProperty */;
val* var151 /* : String */;
static val* varonce;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : String */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : String */;
val* var177 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var179 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var_anode = p0;
var_mmodule = p1;
var_mtype = p2;
var_name = p3;
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__Model__get_mproperties_by_name(var1, var_name);
}
var_props = var4;
var5 = NULL;
if (var_props == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = abstract_collection__SequenceRead___61d_61d(var_props, var5);
var6 = var7;
}
if (var6){
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var11 = self->attrs[COLOR_modelbuilder__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 280);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = more_collections__HashMap3___91d_93d(var9, var_mmodule, var_mtype, var_name);
}
var_cache = var12;
var13 = NULL;
if (var_cache == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cache,var13) on <var_cache:nullable MProperty> */
var_other = var13;
{
var18 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_kernel__Object___61d_61d]))(var_cache, var_other) /* == on <var_cache:nullable MProperty(MProperty)>*/;
var17 = var18;
}
var19 = !var17;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var = var_cache;
goto RET_LABEL;
} else {
}
var20 = NULL;
var_res = var20;
var21 = NULL;
var_ress = var21;
{
var22 = array__AbstractArrayRead__iterator(var_props);
}
for(;;) {
{
var23 = array__ArrayIterator__is_ok(var22);
}
if(!var23) break;
{
var24 = array__ArrayIterator__item(var22);
}
var_mprop = var24;
{
var25 = model__MType__has_mproperty(var_mtype, var_mmodule, var_mprop);
}
var26 = !var25;
if (var26){
goto CONTINUE_label;
} else {
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var29 = var_mprop->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var35 = var_mprop->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = mmodule__MModule__is_visible(var_mmodule, var30, var33);
}
var37 = !var36;
if (var37){
goto CONTINUE_label;
} else {
}
var38 = NULL;
if (var_res == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var38) on <var_res:nullable MProperty> */
var_other42 = var38;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other42) on <var_res:nullable MProperty(MProperty)> */
var45 = var_res == var_other42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
var_res = var_mprop;
goto CONTINUE_label;
} else {
}
/* <var_res:nullable MProperty(MProperty)> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_res->type->table_size) {
var49 = 0;
} else {
var49 = var_res->type->type_table[cltype] == idtype;
}
var_ = var49;
if (var49){
/* <var_mprop:MProperty> isa MMethod */
cltype51 = type_model__MMethod.color;
idtype52 = type_model__MMethod.id;
if(cltype51 >= var_mprop->type->table_size) {
var50 = 0;
} else {
var50 = var_mprop->type->type_table[cltype51] == idtype52;
}
var48 = var50;
} else {
var48 = var_;
}
var_53 = var48;
if (var48){
{
{ /* Inline model#MMethod#is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var56 = var_res->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var47 = var54;
} else {
var47 = var_53;
}
var_57 = var47;
if (var47){
{
{ /* Inline model#MMethod#is_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var60 = var_mprop->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_mprop:MProperty(MMethod)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var46 = var58;
} else {
var46 = var_57;
}
if (var46){
{
{ /* Inline model#MProperty#intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var63 = var_res->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var61) on <var61:MClassDef> */
var66 = var61->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var61:MClassDef> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
var_restype = var64;
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var69 = var_mprop->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var67) on <var67:MClassDef> */
var72 = var67->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var67:MClassDef> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_mproptype = var70;
var73 = NULL;
{
var74 = model__MType__is_subtype(var_mproptype, var_mmodule, var73, var_restype);
}
if (var74){
var_res = var_mprop;
goto CONTINUE_label;
} else {
}
} else {
}
var75 = NULL;
if (var_ress == NULL) {
var76 = 1; /* is null */
} else {
var76 = 0; /* arg is null but recv is not */
}
if (0) {
var77 = abstract_collection__SequenceRead___61d_61d(var_ress, var75);
var76 = var77;
}
if (var76){
var78 = NEW_array__Array(&type_array__Arraymodel__MProperty);
{
array__Array__init(var78); /* Direct call array#Array#init on <var78:Array[MProperty]>*/
}
var_ress = var78;
{
array__Array__add(var_ress, var_res); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
} else {
}
{
array__Array__add(var_ress, var_mprop); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var22); /* Direct call array#ArrayIterator#next on <var22:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var81 = NULL;
if (var_ress == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ress,var81) on <var_ress:nullable Array[MProperty]> */
var_other = var81;
{
var86 = ((short int (*)(val*, val*))(var_ress->class->vft[COLOR_kernel__Object___61d_61d]))(var_ress, var_other) /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/;
var85 = var86;
}
var87 = !var85;
var83 = var87;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
var_88 = var82;
if (var82){
/* <var_res:nullable MProperty> isa MMethod */
cltype90 = type_model__MMethod.color;
idtype91 = type_model__MMethod.id;
if(var_res == NULL) {
var89 = 0;
} else {
if(cltype90 >= var_res->type->table_size) {
var89 = 0;
} else {
var89 = var_res->type->type_table[cltype90] == idtype91;
}
}
var80 = var89;
} else {
var80 = var_88;
}
var_92 = var80;
if (var80){
{
{ /* Inline model#MMethod#is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var95 = var_res->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var79 = var93;
} else {
var79 = var_92;
}
if (var79){
{
{ /* Inline model#MProperty#intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var98 = var_res->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var96) on <var96:MClassDef> */
var101 = var96->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var96:MClassDef> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
var_restype102 = var99;
var103 = NEW_array__Array(&type_array__Arraymodel__MProperty);
{
array__Array__init(var103); /* Direct call array#Array#init on <var103:Array[MProperty]>*/
}
var_ress2 = var103;
{
var104 = array__AbstractArrayRead__iterator(var_ress);
}
for(;;) {
{
var105 = array__ArrayIterator__is_ok(var104);
}
if(!var105) break;
{
var106 = array__ArrayIterator__item(var104);
}
var_mprop107 = var106;
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop107) on <var_mprop107:MProperty> */
var110 = var_mprop107->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop107:MProperty> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var108) on <var108:MClassDef> */
var113 = var108->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var108:MClassDef> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
var_mproptype114 = var111;
var115 = NULL;
{
var116 = model__MType__is_subtype(var_restype102, var_mmodule, var115, var_mproptype114);
}
var117 = !var116;
if (var117){
{
array__Array__add(var_ress2, var_mprop107); /* Direct call array#Array#add on <var_ress2:Array[MProperty]>*/
}
} else {
/* <var_mprop107:MProperty> isa MMethod */
cltype120 = type_model__MMethod.color;
idtype121 = type_model__MMethod.id;
if(cltype120 >= var_mprop107->type->table_size) {
var119 = 0;
} else {
var119 = var_mprop107->type->type_table[cltype120] == idtype121;
}
var122 = !var119;
var_123 = var122;
if (var122){
var118 = var_123;
} else {
{
{ /* Inline model#MMethod#is_init (var_mprop107) on <var_mprop107:MProperty(MMethod)> */
var126 = var_mprop107->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_mprop107:MProperty(MMethod)> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
var127 = !var124;
var118 = var127;
}
if (var118){
{
array__Array__add(var_ress2, var_mprop107); /* Direct call array#Array#add on <var_ress2:Array[MProperty]>*/
}
} else {
}
}
CONTINUE_label128: (void)0;
{
array__ArrayIterator__next(var104); /* Direct call array#ArrayIterator#next on <var104:ArrayIterator[nullable Object]>*/
}
}
BREAK_label128: (void)0;
{
var129 = array__AbstractArrayRead__is_empty(var_ress2);
}
if (var129){
var130 = NULL;
var_ress = var130;
} else {
var_ress = var_ress2;
{
array__Array__add(var_ress, var_res); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
}
} else {
}
var131 = NULL;
if (var_ress == NULL) {
var132 = 0; /* is null */
} else {
var132 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ress,var131) on <var_ress:nullable Array[MProperty]> */
var_other = var131;
{
var136 = ((short int (*)(val*, val*))(var_ress->class->vft[COLOR_kernel__Object___61d_61d]))(var_ress, var_other) /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/;
var135 = var136;
}
var137 = !var135;
var133 = var137;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
var132 = var133;
}
if (var132){
{
var138 = array__AbstractArrayRead__length(var_ress);
}
var139 = 1;
{
{ /* Inline kernel#Int#> (var138,var139) on <var138:Int> */
/* Covariant cast for argument 0 (i) <var139:Int> isa OTHER */
/* <var139:Int> isa OTHER */
var142 = 1; /* easy <var139:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var145 = var138 > var139;
var140 = var145;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
if (unlikely(!var140)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 270);
show_backtrace(1);
}
var146 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var146); /* Direct call array#Array#init on <var146:Array[String]>*/
}
var_s = var146;
{
var147 = array__AbstractArrayRead__iterator(var_ress);
}
for(;;) {
{
var148 = array__ArrayIterator__is_ok(var147);
}
if(!var148) break;
{
var149 = array__ArrayIterator__item(var147);
}
var_mprop150 = var149;
{
var151 = model__MProperty__full_name(var_mprop150);
}
{
array__Array__add(var_s, var151); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
CONTINUE_label152: (void)0;
{
array__ArrayIterator__next(var147); /* Direct call array#ArrayIterator#next on <var147:ArrayIterator[nullable Object]>*/
}
}
BREAK_label152: (void)0;
if (varonce) {
var153 = varonce;
} else {
var154 = "Ambigous property name \'";
var155 = 24;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce = var153;
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = "\' for ";
var160 = 6;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
if (varonce162) {
var163 = varonce162;
} else {
var164 = "; conflict between ";
var165 = 19;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = " and ";
var170 = 5;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
{
var172 = string__Collection__join(var_s, var168);
}
var173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 6;
var175 = NEW_array__NativeArray(var174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var175)->values[0] = (val*) var153;
((struct instance_array__NativeArray*)var175)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var175)->values[2] = (val*) var158;
((struct instance_array__NativeArray*)var175)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var175)->values[4] = (val*) var163;
((struct instance_array__NativeArray*)var175)->values[5] = (val*) var172;
{
((void (*)(val*, val*, long))(var173->class->vft[COLOR_array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var176 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_anode, var176); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var179 = self->attrs[COLOR_modelbuilder__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 280);
show_backtrace(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
more_collections__HashMap3___91d_93d_61d(var177, var_mmodule, var_mtype, var_name, var_res); /* Direct call more_collections#HashMap3#[]= on <var177:HashMap3[MModule, MType, String, nullable MProperty]>*/
}
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
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 280);
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
val* var3 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
{ /* Inline modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 280);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#try_get_mproperty_by_name for (self: ModelBuilder, ANode, MClassDef, String): nullable MProperty */
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : nullable MProperty */;
var_anode = p0;
var_mclassdef = p1;
var_name = p2;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var6 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(self, var_anode, var1, var4, var_name);
}
var = var7;
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
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 289);
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
val* var3 /* : Array[String] */;
{ /* Inline modelbuilder#ModelBuilder#paths (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val; /* _paths on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 289);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#search_mmodule_by_name for (self: ModelBuilder, ANode, nullable MGroup, String): nullable ModulePath */
val* modelbuilder__ModelBuilder__search_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable ModulePath */;
val* var_anode /* var anode: ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var_c /* var c: nullable MGroup */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable String */;
val* var10 /* : nullable String */;
val* var_dirname /* var dirname: nullable String */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var_try_file /* var try_file: String */;
short int var32 /* : Bool */;
val* var33 /* : String */;
val* var34 /* : nullable ModulePath */;
val* var_res /* var res: nullable ModulePath */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : String */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
short int var62 /* : Bool */;
val* var63 /* : String */;
val* var64 /* : nullable ModulePath */;
val* var_res65 /* var res: nullable ModulePath */;
val* var66 /* : null */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var73 /* : nullable MGroup */;
val* var75 /* : nullable MGroup */;
val* var76 /* : Array[String] */;
val* var78 /* : Array[String] */;
val* var_lookpaths /* var lookpaths: Array[String] */;
val* var79 /* : null */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : MProject */;
val* var88 /* : MProject */;
val* var89 /* : nullable MGroup */;
val* var91 /* : nullable MGroup */;
val* var92 /* : nullable String */;
val* var94 /* : nullable String */;
val* var_dirname95 /* var dirname: nullable String */;
val* var96 /* : null */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : String */;
val* var109 /* : String */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var_ /* var : Bool */;
short int var113 /* : Bool */;
val* var114 /* : Array[nullable Object] */;
val* var115 /* : Location */;
val* var116 /* : nullable ModulePath */;
val* var_candidate /* var candidate: nullable ModulePath */;
val* var117 /* : null */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var_other121 /* var other: nullable Object */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : null */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
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
val* var142 /* : String */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : FlatString */;
val* var155 /* : String */;
val* var156 /* : Array[Object] */;
long var157 /* : Int */;
val* var158 /* : NativeArray[Object] */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : FlatString */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : FlatString */;
val* var175 /* : String */;
val* var176 /* : Array[Object] */;
long var177 /* : Int */;
val* var178 /* : NativeArray[Object] */;
val* var179 /* : String */;
val* var180 /* : null */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
var_c = var_mgroup;
for(;;) {
var1 = NULL;
if (var_c == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,var1) on <var_c:nullable MGroup> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Object___61d_61d]))(var_c, var_other) /* == on <var_c:nullable MGroup(MGroup)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (!var2) break;
{
{ /* Inline mproject#MGroup#filepath (var_c) on <var_c:nullable MGroup(MGroup)> */
var10 = var_c->attrs[COLOR_mproject__MGroup___filepath].val; /* _filepath on <var_c:nullable MGroup(MGroup)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_dirname = var8;
var11 = NULL;
if (var_dirname == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = string__FlatString___61d_61d(var_dirname, var11);
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
if (varonce) {
var14 = varonce;
} else {
var15 = ".nit";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
{
var18 = string__Text__has_suffix(var_dirname, var14);
}
if (var18){
goto BREAK_label;
} else {
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "/";
var22 = 1;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
var24 = string__FlatString___43d(var_dirname, var20);
}
{
var25 = string__FlatString___43d(var24, var_name);
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = ".nit";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
var31 = string__FlatString___43d(var25, var27);
}
var_try_file = var31;
{
var32 = file__String__file_exists(var_try_file);
}
if (var32){
{
var33 = file__String__simplify_path(var_try_file);
}
{
var34 = modelbuilder__ModelBuilder__identify_file(self, var33);
}
var_res = var34;
var35 = NULL;
if (var_res == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var35) on <var_res:nullable ModulePath> */
var_other = var35;
{
var40 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable ModulePath(ModulePath)>*/;
var39 = var40;
}
var41 = !var39;
var37 = var41;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (unlikely(!var36)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 311);
show_backtrace(1);
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "/";
var45 = 1;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var47 = string__FlatString___43d(var_dirname, var43);
}
{
var48 = string__FlatString___43d(var47, var_name);
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "/";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
{
var54 = string__FlatString___43d(var48, var50);
}
{
var55 = string__FlatString___43d(var54, var_name);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ".nit";
var59 = 4;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
var61 = string__FlatString___43d(var55, var57);
}
var_try_file = var61;
{
var62 = file__String__file_exists(var_try_file);
}
if (var62){
{
var63 = file__String__simplify_path(var_try_file);
}
{
var64 = modelbuilder__ModelBuilder__identify_file(self, var63);
}
var_res65 = var64;
var66 = NULL;
if (var_res65 == NULL) {
var67 = 0; /* is null */
} else {
var67 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res65,var66) on <var_res65:nullable ModulePath> */
var_other = var66;
{
var71 = ((short int (*)(val*, val*))(var_res65->class->vft[COLOR_kernel__Object___61d_61d]))(var_res65, var_other) /* == on <var_res65:nullable ModulePath(ModulePath)>*/;
var70 = var71;
}
var72 = !var70;
var68 = var72;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
if (unlikely(!var67)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 319);
show_backtrace(1);
}
var = var_res65;
goto RET_LABEL;
} else {
}
{
{ /* Inline mproject#MGroup#parent (var_c) on <var_c:nullable MGroup(MGroup)> */
var75 = var_c->attrs[COLOR_mproject__MGroup___parent].val; /* _parent on <var_c:nullable MGroup(MGroup)> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
var_c = var73;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#paths (self) on <self:ModelBuilder> */
var78 = self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 289);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
var_lookpaths = var76;
var79 = NULL;
if (var_mgroup == NULL) {
var80 = 0; /* is null */
} else {
var80 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,var79) on <var_mgroup:nullable MGroup> */
var_other = var79;
{
var84 = ((short int (*)(val*, val*))(var_mgroup->class->vft[COLOR_kernel__Object___61d_61d]))(var_mgroup, var_other) /* == on <var_mgroup:nullable MGroup(MGroup)>*/;
var83 = var84;
}
var85 = !var83;
var81 = var85;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
if (var80){
{
{ /* Inline mproject#MGroup#mproject (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var88 = var_mgroup->attrs[COLOR_mproject__MGroup___mproject].val; /* _mproject on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 60);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline mproject#MProject#root (var86) on <var86:MProject> */
var91 = var86->attrs[COLOR_mproject__MProject___root].val; /* _root on <var86:MProject> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (var89 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 332);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#filepath (var89) on <var89:nullable MGroup> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 83);
show_backtrace(1);
}
var94 = var89->attrs[COLOR_mproject__MGroup___filepath].val; /* _filepath on <var89:nullable MGroup> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_dirname95 = var92;
var96 = NULL;
if (var_dirname95 == NULL) {
var97 = 0; /* is null */
} else {
var97 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dirname95,var96) on <var_dirname95:nullable String> */
var_other = var96;
{
var101 = ((short int (*)(val*, val*))(var_dirname95->class->vft[COLOR_kernel__Object___61d_61d]))(var_dirname95, var_other) /* == on <var_dirname95:nullable String(String)>*/;
var100 = var101;
}
var102 = !var100;
var98 = var102;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
if (varonce103) {
var104 = varonce103;
} else {
var105 = "..";
var106 = 2;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
var108 = file__String__join_path(var_dirname95, var104);
}
{
var109 = file__String__simplify_path(var108);
}
var_dirname95 = var109;
{
var111 = array__AbstractArrayRead__has(var_lookpaths, var_dirname95);
}
var112 = !var111;
var_ = var112;
if (var112){
{
var113 = file__String__file_exists(var_dirname95);
}
var110 = var113;
} else {
var110 = var_;
}
if (var110){
{
var114 = array__Collection__to_a(var_lookpaths);
}
var_lookpaths = var114;
{
array__Array__add(var_lookpaths, var_dirname95); /* Direct call array#Array#add on <var_lookpaths:Array[String]>*/
}
} else {
}
} else {
}
} else {
}
{
var115 = ((val* (*)(val*))(var_anode->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_anode) /* hot_location on <var_anode:ANode>*/;
}
{
var116 = modelbuilder__ModelBuilder__search_module_in_paths(self, var115, var_name, var_lookpaths);
}
var_candidate = var116;
var117 = NULL;
if (var_candidate == NULL) {
var118 = 1; /* is null */
} else {
var118 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var117) on <var_candidate:nullable ModulePath> */
var_other121 = var117;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other121) on <var_candidate:nullable ModulePath(ModulePath)> */
var124 = var_candidate == var_other121;
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
var119 = var122;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
var125 = NULL;
if (var_mgroup == NULL) {
var126 = 0; /* is null */
} else {
var126 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,var125) on <var_mgroup:nullable MGroup> */
var_other = var125;
{
var130 = ((short int (*)(val*, val*))(var_mgroup->class->vft[COLOR_kernel__Object___61d_61d]))(var_mgroup, var_other) /* == on <var_mgroup:nullable MGroup(MGroup)>*/;
var129 = var130;
}
var131 = !var129;
var127 = var131;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var126 = var127;
}
if (var126){
if (varonce132) {
var133 = varonce132;
} else {
var134 = "Error: cannot find module ";
var135 = 26;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = " from ";
var140 = 6;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
{
{ /* Inline mproject#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var144 = var_mgroup->attrs[COLOR_mproject__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 56);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = ". tried ";
var148 = 8;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
if (varonce150) {
var151 = varonce150;
} else {
var152 = ", ";
var153 = 2;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
{
var155 = string__Collection__join(var_lookpaths, var151);
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 6;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var133;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var158)->values[2] = (val*) var138;
((struct instance_array__NativeArray*)var158)->values[3] = (val*) var142;
((struct instance_array__NativeArray*)var158)->values[4] = (val*) var146;
((struct instance_array__NativeArray*)var158)->values[5] = (val*) var155;
{
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
}
{
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_anode, var159); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (varonce160) {
var161 = varonce160;
} else {
var162 = "Error: cannot find module ";
var163 = 26;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = ". tried ";
var168 = 8;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
if (varonce170) {
var171 = varonce170;
} else {
var172 = ", ";
var173 = 2;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
{
var175 = string__Collection__join(var_lookpaths, var171);
}
var176 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var176 = array_instance Array[Object] */
var177 = 4;
var178 = NEW_array__NativeArray(var177, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var178)->values[0] = (val*) var161;
((struct instance_array__NativeArray*)var178)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var178)->values[2] = (val*) var166;
((struct instance_array__NativeArray*)var178)->values[3] = (val*) var175;
{
((void (*)(val*, val*, long))(var176->class->vft[COLOR_array__Array__with_native]))(var176, var178, var177) /* with_native on <var176:Array[Object]>*/;
}
}
{
var179 = ((val* (*)(val*))(var176->class->vft[COLOR_string__Object__to_s]))(var176) /* to_s on <var176:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_anode, var179); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
}
var180 = NULL;
var = var180;
goto RET_LABEL;
} else {
}
var = var_candidate;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#search_mmodule_by_name for (self: Object, ANode, nullable MGroup, String): nullable ModulePath */
val* VIRTUAL_modelbuilder__ModelBuilder__search_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable ModulePath */;
val* var1 /* : nullable ModulePath */;
var1 = modelbuilder__ModelBuilder__search_mmodule_by_name(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#get_mmodule_by_name for (self: ModelBuilder, ANode, nullable MGroup, String): nullable MModule */
val* modelbuilder__ModelBuilder__get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var1 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : String */;
val* var12 /* : String */;
val* var13 /* : nullable AModule */;
val* var_res /* var res: nullable AModule */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : null */;
val* var22 /* : nullable MModule */;
val* var24 /* : nullable MModule */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
{
var1 = modelbuilder__ModelBuilder__search_mmodule_by_name(self, var_anode, var_mgroup, var_name);
}
var_path = var1;
var2 = NULL;
if (var_path == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_path,var2) on <var_path:nullable ModulePath> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_path,var_other) on <var_path:nullable ModulePath(ModulePath)> */
var8 = var_path == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var9 = NULL;
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModulePath#filepath (var_path) on <var_path:nullable ModulePath(ModulePath)> */
var12 = var_path->attrs[COLOR_modelbuilder__ModulePath___filepath].val; /* _filepath on <var_path:nullable ModulePath(ModulePath)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 733);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = modelbuilder__ModelBuilder__load_module(self, var10);
}
var_res = var13;
var14 = NULL;
if (var_res == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var14) on <var_res:nullable AModule> */
var_other = var14;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable AModule(AModule)> */
var20 = var_res == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
var21 = NULL;
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#AModule#mmodule (var_res) on <var_res:nullable AModule(AModule)> */
var24 = var_res->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_res:nullable AModule(AModule)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 365);
show_backtrace(1);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#get_mmodule_by_name for (self: Object, ANode, nullable MGroup, String): nullable MModule */
val* VIRTUAL_modelbuilder__ModelBuilder__get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = modelbuilder__ModelBuilder__get_mmodule_by_name(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#search_module_in_paths for (self: ModelBuilder, nullable Location, String, Collection[String]): nullable ModulePath */
val* modelbuilder__ModelBuilder__search_module_in_paths(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable ModulePath */;
val* var_location /* var location: nullable Location */;
val* var_name /* var name: String */;
val* var_lookpaths /* var lookpaths: Collection[String] */;
val* var1 /* : null */;
val* var_candidate /* var candidate: nullable String */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : String */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var_try_file /* var try_file: String */;
short int var18 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : String */;
val* var_abs_candidate /* var abs_candidate: String */;
val* var29 /* : String */;
val* var_abs_try_file /* var abs_try_file: String */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : ToolContext */;
val* var38 /* : ToolContext */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : String */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : String */;
val* var78 /* : String */;
short int var79 /* : Bool */;
val* var80 /* : null */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
val* var89 /* : String */;
val* var_abs_candidate90 /* var abs_candidate: String */;
val* var91 /* : String */;
val* var_abs_try_file92 /* var abs_try_file: String */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : ToolContext */;
val* var101 /* : ToolContext */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : Array[Object] */;
long var118 /* : Int */;
val* var119 /* : NativeArray[Object] */;
val* var120 /* : String */;
val* var121 /* : null */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
val* var124 /* : null */;
val* var125 /* : nullable ModulePath */;
var_location = p0;
var_name = p1;
var_lookpaths = p2;
var1 = NULL;
var_candidate = var1;
{
var2 = ((val* (*)(val*))(var_lookpaths->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_lookpaths) /* iterator on <var_lookpaths:Collection[String]>*/;
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
}
var_dirname = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "/";
var7 = 1;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var9 = string__FlatString___43d(var_dirname, var5);
}
{
var10 = string__FlatString___43d(var9, var_name);
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ".nit";
var14 = 4;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
{
var16 = string__FlatString___43d(var10, var12);
}
{
var17 = file__String__simplify_path(var16);
}
var_try_file = var17;
{
var18 = file__String__file_exists(var_try_file);
}
if (var18){
var19 = NULL;
if (var_candidate == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = string__FlatString___61d_61d(var_candidate, var19);
var20 = var21;
}
if (var20){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var26 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_candidate, var_other) /* == on <var_candidate:nullable String(String)>*/;
var25 = var26;
}
var27 = !var25;
var23 = var27;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
var28 = modelbuilder__ModelBuilder__module_absolute_path(self, var_candidate);
}
var_abs_candidate = var28;
{
var29 = modelbuilder__ModelBuilder__module_absolute_path(self, var_try_file);
}
var_abs_try_file = var29;
{
{ /* Inline kernel#Object#!= (var_abs_candidate,var_abs_try_file) on <var_abs_candidate:String> */
var_other = var_abs_try_file;
{
var34 = ((short int (*)(val*, val*))(var_abs_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_abs_candidate, var_other) /* == on <var_abs_candidate:String>*/;
var33 = var34;
}
var35 = !var33;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var38 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "Error: conflicting module file for ";
var42 = 35;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = ": ";
var47 = 2;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = " ";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 6;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var45;
((struct instance_array__NativeArray*)var56)->values[3] = (val*) var_candidate;
((struct instance_array__NativeArray*)var56)->values[4] = (val*) var50;
((struct instance_array__NativeArray*)var56)->values[5] = (val*) var_try_file;
{
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
}
{
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var36, var_location, var57); /* Direct call toolcontext#ToolContext#error on <var36:ToolContext>*/
}
} else {
}
} else {
}
}
} else {
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "/";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
var63 = string__FlatString___43d(var_dirname, var59);
}
{
var64 = string__FlatString___43d(var63, var_name);
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "/";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
var70 = string__FlatString___43d(var64, var66);
}
{
var71 = string__FlatString___43d(var70, var_name);
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = ".nit";
var75 = 4;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
var77 = string__FlatString___43d(var71, var73);
}
{
var78 = file__String__simplify_path(var77);
}
var_try_file = var78;
{
var79 = file__String__file_exists(var_try_file);
}
if (var79){
var80 = NULL;
if (var_candidate == NULL) {
var81 = 1; /* is null */
} else {
var81 = 0; /* arg is null but recv is not */
}
if (0) {
var82 = string__FlatString___61d_61d(var_candidate, var80);
var81 = var82;
}
if (var81){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var87 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_candidate, var_other) /* == on <var_candidate:nullable String(String)>*/;
var86 = var87;
}
var88 = !var86;
var84 = var88;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
var83 = var84;
}
if (var83){
{
var89 = modelbuilder__ModelBuilder__module_absolute_path(self, var_candidate);
}
var_abs_candidate90 = var89;
{
var91 = modelbuilder__ModelBuilder__module_absolute_path(self, var_try_file);
}
var_abs_try_file92 = var91;
{
{ /* Inline kernel#Object#!= (var_abs_candidate90,var_abs_try_file92) on <var_abs_candidate90:String> */
var_other = var_abs_try_file92;
{
var97 = ((short int (*)(val*, val*))(var_abs_candidate90->class->vft[COLOR_kernel__Object___61d_61d]))(var_abs_candidate90, var_other) /* == on <var_abs_candidate90:String>*/;
var96 = var97;
}
var98 = !var96;
var94 = var98;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (var93){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var101 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = "Error: conflicting module file for ";
var105 = 35;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = ": ";
var110 = 2;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = " ";
var115 = 1;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var117 = array_instance Array[Object] */
var118 = 6;
var119 = NEW_array__NativeArray(var118, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var119)->values[0] = (val*) var103;
((struct instance_array__NativeArray*)var119)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var119)->values[2] = (val*) var108;
((struct instance_array__NativeArray*)var119)->values[3] = (val*) var_candidate;
((struct instance_array__NativeArray*)var119)->values[4] = (val*) var113;
((struct instance_array__NativeArray*)var119)->values[5] = (val*) var_try_file;
{
((void (*)(val*, val*, long))(var117->class->vft[COLOR_array__Array__with_native]))(var117, var119, var118) /* with_native on <var117:Array[Object]>*/;
}
}
{
var120 = ((val* (*)(val*))(var117->class->vft[COLOR_string__Object__to_s]))(var117) /* to_s on <var117:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var99, var_location, var120); /* Direct call toolcontext#ToolContext#error on <var99:ToolContext>*/
}
} else {
}
} else {
}
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
var121 = NULL;
if (var_candidate == NULL) {
var122 = 1; /* is null */
} else {
var122 = 0; /* arg is null but recv is not */
}
if (0) {
var123 = string__FlatString___61d_61d(var_candidate, var121);
var122 = var123;
}
if (var122){
var124 = NULL;
var = var124;
goto RET_LABEL;
} else {
}
{
var125 = modelbuilder__ModelBuilder__identify_file(self, var_candidate);
}
var = var125;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#search_module_in_paths for (self: Object, nullable Location, String, Collection[String]): nullable ModulePath */
val* VIRTUAL_modelbuilder__ModelBuilder__search_module_in_paths(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable ModulePath */;
val* var1 /* : nullable ModulePath */;
var1 = modelbuilder__ModelBuilder__search_module_in_paths(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#identified_files for (self: ModelBuilder): HashMap[String, nullable ModulePath] */
val* modelbuilder__ModelBuilder__identified_files(val* self) {
val* var /* : HashMap[String, nullable ModulePath] */;
val* var1 /* : HashMap[String, nullable ModulePath] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 405);
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
val* var3 /* : HashMap[String, nullable ModulePath] */;
{ /* Inline modelbuilder#ModelBuilder#identified_files (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___identified_files].val; /* _identified_files on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 405);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#identify_file for (self: ModelBuilder, String): nullable ModulePath */
val* modelbuilder__ModelBuilder__identify_file(val* self, val* p0) {
val* var /* : nullable ModulePath */;
val* var_path /* var path: String */;
val* var1 /* : nullable String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : null */;
val* var13 /* : Array[String] */;
val* var15 /* : Array[String] */;
val* var16 /* : nullable ModulePath */;
val* var_res /* var res: nullable ModulePath */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : null */;
val* var_candidate /* var candidate: nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : nullable String */;
val* var36 /* : nullable String */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var_owner_path /* var owner_path: String */;
short int var47 /* : Bool */;
val* var48 /* : null */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : ToolContext */;
val* var53 /* : ToolContext */;
val* var54 /* : null */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[Object] */;
val* var68 /* : String */;
val* var69 /* : null */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : String */;
val* var_pn /* var pn: String */;
val* var76 /* : String */;
val* var_rp /* var rp: String */;
val* var77 /* : HashMap[String, nullable ModulePath] */;
val* var79 /* : HashMap[String, nullable ModulePath] */;
short int var80 /* : Bool */;
val* var81 /* : HashMap[String, nullable ModulePath] */;
val* var83 /* : HashMap[String, nullable ModulePath] */;
val* var84 /* : nullable Object */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var_mgrouppath /* var mgrouppath: String */;
val* var92 /* : nullable MGroup */;
val* var_mgroup93 /* var mgroup: nullable MGroup */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var_other98 /* var other: nullable Object */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : MProject */;
val* var103 /* : Model */;
val* var105 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var106 /* : MGroup */;
val* var107 /* : null */;
val* var110 /* : ToolContext */;
val* var112 /* : ToolContext */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : Array[Object] */;
long var124 /* : Int */;
val* var125 /* : NativeArray[Object] */;
val* var126 /* : String */;
long var127 /* : Int */;
val* var128 /* : ModulePath */;
val* var_res130 /* var res: ModulePath */;
val* var131 /* : Array[ModulePath] */;
val* var133 /* : Array[ModulePath] */;
val* var134 /* : HashMap[String, nullable ModulePath] */;
val* var136 /* : HashMap[String, nullable ModulePath] */;
var_path = p0;
{
var1 = file__String__file_extension(var_path);
}
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
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable String> */
var_other = var2;
{
var10 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable String(String)>*/;
var9 = var10;
}
var11 = !var9;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var12 = NULL;
{
{ /* Inline modelbuilder#ModelBuilder#paths (self) on <self:ModelBuilder> */
var15 = self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 289);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = modelbuilder__ModelBuilder__search_module_in_paths(self, var12, var_path, var13);
}
var_res = var16;
var17 = NULL;
if (var_res == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var17) on <var_res:nullable ModulePath> */
var_other = var17;
{
var22 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable ModulePath(ModulePath)>*/;
var21 = var22;
}
var23 = !var21;
var19 = var23;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
var = var_res;
goto RET_LABEL;
} else {
}
var24 = NULL;
var_candidate = var24;
{
var25 = file__String__file_exists(var_path);
}
if (var25){
{
var26 = modelbuilder__ModelBuilder__get_mgroup(self, var_path);
}
var_mgroup = var26;
var27 = NULL;
if (var_mgroup == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,var27) on <var_mgroup:nullable MGroup> */
var_other = var27;
{
var32 = ((short int (*)(val*, val*))(var_mgroup->class->vft[COLOR_kernel__Object___61d_61d]))(var_mgroup, var_other) /* == on <var_mgroup:nullable MGroup(MGroup)>*/;
var31 = var32;
}
var33 = !var31;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
{
{ /* Inline mproject#MGroup#filepath (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var36 = var_mgroup->attrs[COLOR_mproject__MGroup___filepath].val; /* _filepath on <var_mgroup:nullable MGroup(MGroup)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline mproject#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var39 = var_mgroup->attrs[COLOR_mproject__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 56);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = ".nit";
var43 = 4;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = string__FlatString___43d(var37, var41);
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 423);
show_backtrace(1);
} else {
var46 = file__String__join_path(var34, var45);
}
var_owner_path = var46;
{
var47 = file__String__file_exists(var_owner_path);
}
if (var47){
var_candidate = var_owner_path;
} else {
}
} else {
}
} else {
}
var48 = NULL;
if (var_candidate == NULL) {
var49 = 1; /* is null */
} else {
var49 = 0; /* arg is null but recv is not */
}
if (0) {
var50 = string__FlatString___61d_61d(var_candidate, var48);
var49 = var50;
}
if (var49){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var53 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var54 = NULL;
if (varonce55) {
var56 = varonce55;
} else {
var57 = "Error: cannot find module `";
var58 = 27;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "`.";
var63 = 2;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 3;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var_path;
((struct instance_array__NativeArray*)var67)->values[2] = (val*) var61;
{
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
}
{
var68 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var51, var54, var68); /* Direct call toolcontext#ToolContext#error on <var51:ToolContext>*/
}
var69 = NULL;
var = var69;
goto RET_LABEL;
} else {
}
var_path = var_candidate;
} else {
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = ".nit";
var73 = 4;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
var75 = file__String__basename(var_path, var71);
}
var_pn = var75;
{
var76 = modelbuilder__ModelBuilder__module_absolute_path(self, var_path);
}
var_rp = var76;
{
{ /* Inline modelbuilder#ModelBuilder#identified_files (self) on <self:ModelBuilder> */
var79 = self->attrs[COLOR_modelbuilder__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 405);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = abstract_collection__MapRead__has_key(var77, var_rp);
}
if (var80){
{
{ /* Inline modelbuilder#ModelBuilder#identified_files (self) on <self:ModelBuilder> */
var83 = self->attrs[COLOR_modelbuilder__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 405);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = hash_collection__HashMap___91d_93d(var81, var_rp);
}
var = var84;
goto RET_LABEL;
} else {
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "..";
var88 = 2;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
var90 = file__String__join_path(var_path, var86);
}
{
var91 = file__String__simplify_path(var90);
}
var_mgrouppath = var91;
{
var92 = modelbuilder__ModelBuilder__get_mgroup(self, var_mgrouppath);
}
var_mgroup93 = var92;
var94 = NULL;
if (var_mgroup93 == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup93,var94) on <var_mgroup93:nullable MGroup> */
var_other98 = var94;
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup93,var_other98) on <var_mgroup93:nullable MGroup(MGroup)> */
var101 = var_mgroup93 == var_other98;
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var96 = var99;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
var102 = NEW_mproject__MProject(&type_mproject__MProject);
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var105 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
mproject__MProject__init(var102, var_pn, var103); /* Direct call mproject#MProject#init on <var102:MProject>*/
}
var_mproject = var102;
var106 = NEW_mproject__MGroup(&type_mproject__MGroup);
var107 = NULL;
{
mproject__MGroup__init(var106, var_pn, var_mproject, var107); /* Direct call mproject#MGroup#init on <var106:MGroup>*/
}
var_mgroup93 = var106;
{
{ /* Inline mproject#MGroup#filepath= (var_mgroup93,var_path) on <var_mgroup93:nullable MGroup(MGroup)> */
var_mgroup93->attrs[COLOR_mproject__MGroup___filepath].val = var_path; /* _filepath on <var_mgroup93:nullable MGroup(MGroup)> */
RET_LABEL108:(void)0;
}
}
{
{ /* Inline mproject#MProject#root= (var_mproject,var_mgroup93) on <var_mproject:MProject> */
var_mproject->attrs[COLOR_mproject__MProject___root].val = var_mgroup93; /* _root on <var_mproject:MProject> */
RET_LABEL109:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var112 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "found project `";
var116 = 15;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = "` at ";
var121 = 5;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var123 = array_instance Array[Object] */
var124 = 4;
var125 = NEW_array__NativeArray(var124, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var125)->values[0] = (val*) var114;
((struct instance_array__NativeArray*)var125)->values[1] = (val*) var_pn;
((struct instance_array__NativeArray*)var125)->values[2] = (val*) var119;
((struct instance_array__NativeArray*)var125)->values[3] = (val*) var_path;
{
((void (*)(val*, val*, long))(var123->class->vft[COLOR_array__Array__with_native]))(var123, var125, var124) /* with_native on <var123:Array[Object]>*/;
}
}
{
var126 = ((val* (*)(val*))(var123->class->vft[COLOR_string__Object__to_s]))(var123) /* to_s on <var123:Array[Object]>*/;
}
var127 = 2;
{
toolcontext__ToolContext__info(var110, var126, var127); /* Direct call toolcontext#ToolContext#info on <var110:ToolContext>*/
}
} else {
}
var128 = NEW_modelbuilder__ModulePath(&type_modelbuilder__ModulePath);
{
{ /* Inline modelbuilder#ModulePath#init (var128,var_pn,var_path,var_mgroup93) on <var128:ModulePath> */
var128->attrs[COLOR_modelbuilder__ModulePath___name].val = var_pn; /* _name on <var128:ModulePath> */
var128->attrs[COLOR_modelbuilder__ModulePath___filepath].val = var_path; /* _filepath on <var128:ModulePath> */
var128->attrs[COLOR_modelbuilder__ModulePath___mgroup].val = var_mgroup93; /* _mgroup on <var128:ModulePath> */
RET_LABEL129:(void)0;
}
}
var_res130 = var128;
{
{ /* Inline modelbuilder#MGroup#module_paths (var_mgroup93) on <var_mgroup93:nullable MGroup(MGroup)> */
var133 = var_mgroup93->attrs[COLOR_modelbuilder__MGroup___module_paths].val; /* _module_paths on <var_mgroup93:nullable MGroup(MGroup)> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _module_paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 746);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
array__Array__add(var131, var_res130); /* Direct call array#Array#add on <var131:Array[ModulePath]>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#identified_files (self) on <self:ModelBuilder> */
var136 = self->attrs[COLOR_modelbuilder__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 405);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var134, var_rp, var_res130); /* Direct call hash_collection#HashMap#[]= on <var134:HashMap[String, nullable ModulePath]>*/
}
var = var_res130;
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
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 460);
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
val* var3 /* : HashMap[String, nullable MGroup] */;
{ /* Inline modelbuilder#ModelBuilder#mgroups (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___mgroups].val; /* _mgroups on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 460);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#get_mgroup for (self: ModelBuilder, String): nullable MGroup */
val* modelbuilder__ModelBuilder__get_mgroup(val* self, val* p0) {
val* var /* : nullable MGroup */;
val* var_dirpath /* var dirpath: String */;
val* var1 /* : String */;
val* var_rdp /* var rdp: String */;
val* var2 /* : HashMap[String, nullable MGroup] */;
val* var4 /* : HashMap[String, nullable MGroup] */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[String, nullable MGroup] */;
val* var8 /* : HashMap[String, nullable MGroup] */;
val* var9 /* : nullable Object */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var_pn /* var pn: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_mp /* var mp: String */;
val* var_dirpath2 /* var dirpath2: String */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var39 /* : null */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var_parentpath /* var parentpath: String */;
val* var47 /* : nullable MGroup */;
val* var_parent /* var parent: nullable MGroup */;
val* var48 /* : null */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : MProject */;
val* var56 /* : Model */;
val* var58 /* : Model */;
val* var_mproject /* var mproject: MProject */;
val* var59 /* : MGroup */;
val* var60 /* : null */;
val* var_mgroup /* var mgroup: nullable Object */;
val* var62 /* : ToolContext */;
val* var64 /* : ToolContext */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : Array[Object] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[Object] */;
val* var78 /* : String */;
long var79 /* : Int */;
val* var80 /* : MGroup */;
val* var81 /* : MProject */;
val* var83 /* : MProject */;
val* var84 /* : ToolContext */;
val* var86 /* : ToolContext */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
long var102 /* : Int */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : String */;
val* var_readme /* var readme: String */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : String */;
short int var117 /* : Bool */;
val* var118 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
val* var120 /* : IFStream */;
val* var_s /* var s: IFStream */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : Array[String] */;
val* var125 /* : Array[String] */;
val* var126 /* : String */;
val* var130 /* : HashMap[String, nullable MGroup] */;
val* var132 /* : HashMap[String, nullable MGroup] */;
var_dirpath = p0;
{
var1 = modelbuilder__ModelBuilder__module_absolute_path(self, var_dirpath);
}
var_rdp = var1;
{
{ /* Inline modelbuilder#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var4 = self->attrs[COLOR_modelbuilder__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 460);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = abstract_collection__MapRead__has_key(var2, var_rdp);
}
if (var5){
{
{ /* Inline modelbuilder#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_modelbuilder__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 460);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = hash_collection__HashMap___91d_93d(var6, var_rdp);
}
var = var9;
goto RET_LABEL;
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
{
var14 = file__String__basename(var_rdp, var10);
}
var_pn = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = ".nit";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
var20 = string__FlatString___43d(var_pn, var16);
}
{
var21 = file__String__join_path(var_dirpath, var20);
}
{
var22 = file__String__simplify_path(var21);
}
var_mp = var22;
var_dirpath2 = var_dirpath;
{
var23 = file__String__file_exists(var_mp);
}
var24 = !var23;
if (var24){
if (varonce25) {
var26 = varonce25;
} else {
var27 = "src";
var28 = 3;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
{
var31 = string__FlatString___61d_61d(var_pn, var26);
var30 = var31;
}
if (var30){
{
var32 = file__String__dirname(var_rdp);
}
var_dirpath2 = var32;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "";
var36 = 0;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
var38 = file__String__basename(var_dirpath2, var34);
}
var_pn = var38;
} else {
var39 = NULL;
var = var39;
goto RET_LABEL;
}
} else {
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "..";
var43 = 2;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = file__String__join_path(var_dirpath, var41);
}
{
var46 = file__String__simplify_path(var45);
}
var_parentpath = var46;
{
var47 = modelbuilder__ModelBuilder__get_mgroup(self, var_parentpath);
}
var_parent = var47;
var48 = NULL;
if (var_parent == NULL) {
var49 = 1; /* is null */
} else {
var49 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,var48) on <var_parent:nullable MGroup> */
var_other = var48;
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable MGroup(MGroup)> */
var54 = var_parent == var_other;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
var55 = NEW_mproject__MProject(&type_mproject__MProject);
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var58 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
mproject__MProject__init(var55, var_pn, var56); /* Direct call mproject#MProject#init on <var55:MProject>*/
}
var_mproject = var55;
var59 = NEW_mproject__MGroup(&type_mproject__MGroup);
var60 = NULL;
{
mproject__MGroup__init(var59, var_pn, var_mproject, var60); /* Direct call mproject#MGroup#init on <var59:MGroup>*/
}
var_mgroup = var59;
{
{ /* Inline mproject#MProject#root= (var_mproject,var_mgroup) on <var_mproject:MProject> */
var_mproject->attrs[COLOR_mproject__MProject___root].val = var_mgroup; /* _root on <var_mproject:MProject> */
RET_LABEL61:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var64 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "found project `";
var68 = 15;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "` at ";
var73 = 5;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 4;
var77 = NEW_array__NativeArray(var76, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var77)->values[0] = (val*) var66;
((struct instance_array__NativeArray*)var77)->values[1] = (val*) var_mproject;
((struct instance_array__NativeArray*)var77)->values[2] = (val*) var71;
((struct instance_array__NativeArray*)var77)->values[3] = (val*) var_dirpath;
{
((void (*)(val*, val*, long))(var75->class->vft[COLOR_array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
}
{
var78 = ((val* (*)(val*))(var75->class->vft[COLOR_string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
}
var79 = 2;
{
toolcontext__ToolContext__info(var62, var78, var79); /* Direct call toolcontext#ToolContext#info on <var62:ToolContext>*/
}
} else {
var80 = NEW_mproject__MGroup(&type_mproject__MGroup);
{
{ /* Inline mproject#MGroup#mproject (var_parent) on <var_parent:nullable MGroup(MGroup)> */
var83 = var_parent->attrs[COLOR_mproject__MGroup___mproject].val; /* _mproject on <var_parent:nullable MGroup(MGroup)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", "src/model/mproject.nit", 60);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
mproject__MGroup__init(var80, var_pn, var81, var_parent); /* Direct call mproject#MGroup#init on <var80:MGroup>*/
}
var_mgroup = var80;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var86 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = "found sub group `";
var90 = 17;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
{
var92 = mproject__MGroup__full_name(var_mgroup);
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = "` at ";
var96 = 5;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 4;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var92;
((struct instance_array__NativeArray*)var100)->values[2] = (val*) var94;
((struct instance_array__NativeArray*)var100)->values[3] = (val*) var_dirpath;
{
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
}
{
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
}
var102 = 2;
{
toolcontext__ToolContext__info(var84, var101, var102); /* Direct call toolcontext#ToolContext#info on <var84:ToolContext>*/
}
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "README.md";
var106 = 9;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
var108 = file__String__join_path(var_dirpath2, var104);
}
var_readme = var108;
{
var109 = file__String__file_exists(var_readme);
}
var110 = !var109;
if (var110){
if (varonce111) {
var112 = varonce111;
} else {
var113 = "README";
var114 = 6;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
var116 = file__String__join_path(var_dirpath2, var112);
}
var_readme = var116;
} else {
}
{
var117 = file__String__file_exists(var_readme);
}
if (var117){
var118 = NEW_mdoc__MDoc(&type_mdoc__MDoc);
{
{ /* Inline mdoc#MDoc#init (var118) on <var118:MDoc> */
RET_LABEL119:(void)0;
}
}
var_mdoc = var118;
var120 = NEW_file__IFStream(&type_file__IFStream);
{
file__IFStream__open(var120, var_readme); /* Direct call file#IFStream#open on <var120:IFStream>*/
}
var_s = var120;
for(;;) {
{
var121 = stream__BufferedIStream__eof(var_s);
}
var122 = !var121;
if (!var122) break;
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:MDoc> */
var125 = var_mdoc->attrs[COLOR_mdoc__MDoc___content].val; /* _content on <var_mdoc:MDoc> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "src/model/mdoc.nit", 22);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = stream__IStream__read_line(var_s);
}
{
array__Array__add(var123, var126); /* Direct call array#Array#add on <var123:Array[String]>*/
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mgroup,var_mdoc) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL127:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mgroup) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_mdoc__MDoc___original_mentity].val = var_mgroup; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL128:(void)0;
}
}
} else {
}
{
{ /* Inline mproject#MGroup#filepath= (var_mgroup,var_dirpath) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_mproject__MGroup___filepath].val = var_dirpath; /* _filepath on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL129:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var132 = self->attrs[COLOR_modelbuilder__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 460);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var130, var_rdp, var_mgroup); /* Direct call hash_collection#HashMap#[]= on <var130:HashMap[String, nullable MGroup]>*/
}
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
{
var1 = file__Object__getcwd(self);
}
{
var2 = file__String__join_path(var1, var_path);
}
{
var3 = file__String__simplify_path(var2);
}
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
val* var5 /* : FlatString */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : null */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
val* var36 /* : null */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
val* var51 /* : null */;
val* var52 /* : ToolContext */;
val* var54 /* : ToolContext */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
long var64 /* : Int */;
val* var65 /* : IFStream */;
val* var_file /* var file: IFStream */;
val* var66 /* : Lexer */;
val* var67 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var68 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var69 /* : Start */;
val* var_tree /* var tree: Start */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var76 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var77 /* : null */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var_other81 /* var other: nullable Object */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var86 /* : Bool */;
int cltype;
int idtype;
val* var87 /* : String */;
val* var89 /* : String */;
val* var90 /* : null */;
var_filename = p0;
{
var1 = file__String__file_extension(var_filename);
}
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
{ /* Inline kernel#Object#!= (var1,var2) on <var1:nullable String> */
var_other = var2;
{
var10 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable String(String)>*/;
var9 = var10;
}
var11 = !var9;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = NULL;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "Error: file ";
var19 = 12;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " is not a valid nit module.";
var24 = 27;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var_filename;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var22;
{
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var12, var15, var29); /* Direct call toolcontext#ToolContext#error on <var12:ToolContext>*/
}
var30 = NULL;
var = var30;
goto RET_LABEL;
} else {
}
{
var31 = file__String__file_exists(var_filename);
}
var32 = !var31;
if (var32){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = NULL;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Error: file ";
var40 = 12;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " not found.";
var45 = 11;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 3;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var38;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var_filename;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var43;
{
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var33, var36, var50); /* Direct call toolcontext#ToolContext#error on <var33:ToolContext>*/
}
var51 = NULL;
var = var51;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var54 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "load module ";
var58 = 12;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 2;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var_filename;
{
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
}
{
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
}
var64 = 2;
{
toolcontext__ToolContext__info(var52, var63, var64); /* Direct call toolcontext#ToolContext#info on <var52:ToolContext>*/
}
var65 = NEW_file__IFStream(&type_file__IFStream);
{
file__IFStream__open(var65, var_filename); /* Direct call file#IFStream#open on <var65:IFStream>*/
}
var_file = var65;
var66 = NEW_lexer_work__Lexer(&type_lexer_work__Lexer);
var67 = NEW_location__SourceFile(&type_location__SourceFile);
{
location__SourceFile__init(var67, var_filename, var_file); /* Direct call location#SourceFile#init on <var67:SourceFile>*/
}
{
lexer_work__Lexer__init(var66, var67); /* Direct call lexer_work#Lexer#init on <var66:Lexer>*/
}
var_lexer = var66;
var68 = NEW_parser_work__Parser(&type_parser_work__Parser);
{
parser_work__Parser__init(var68, var_lexer); /* Direct call parser_work#Parser#init on <var68:Parser>*/
}
var_parser = var68;
{
var69 = parser_work__Parser__parse(var_parser);
}
var_tree = var69;
{
file__IFStream__close(var_file); /* Direct call file#IFStream#close on <var_file:IFStream>*/
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = ".nit";
var73 = 4;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
var75 = file__String__basename(var_filename, var71);
}
var_mod_name = var75;
{
var76 = parser_nodes__Start__n_base(var_tree);
}
var_nmodule = var76;
var77 = NULL;
if (var_nmodule == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,var77) on <var_nmodule:nullable AModule> */
var_other81 = var77;
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other81) on <var_nmodule:nullable AModule(AModule)> */
var84 = var_nmodule == var_other81;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var79 = var82;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
{
var85 = parser_nodes__Start__n_eof(var_tree);
}
var_neof = var85;
/* <var_neof:EOF> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_neof->type->table_size) {
var86 = 0;
} else {
var86 = var_neof->type->type_table[cltype] == idtype;
}
if (unlikely(!var86)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 552);
show_backtrace(1);
}
{
{ /* Inline lexer_work#AError#message (var_neof) on <var_neof:EOF(AError)> */
var89 = var_neof->attrs[COLOR_lexer_work__AError___message].val; /* _message on <var_neof:EOF(AError)> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", "src/parser/lexer_work.nit", 55);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
modelbuilder__ModelBuilder__error(self, var_neof, var87); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
var90 = NULL;
var = var90;
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
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : nullable MModule */;
val* var12 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other17 /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : HashMap[MModule, AModule] */;
val* var23 /* : HashMap[MModule, AModule] */;
val* var24 /* : nullable Object */;
val* var25 /* : String */;
val* var27 /* : String */;
val* var28 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : null */;
val* var37 /* : MGroup */;
val* var39 /* : MGroup */;
val* var40 /* : String */;
val* var42 /* : String */;
val* var43 /* : nullable MModule */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : null */;
var_filename = p0;
{
var1 = modelbuilder__ModelBuilder__identify_file(self, var_filename);
}
var_file = var1;
var2 = NULL;
if (var_file == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,var2) on <var_file:nullable ModulePath> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other) on <var_file:nullable ModulePath(ModulePath)> */
var8 = var_file == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var9 = NULL;
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModulePath#mmodule (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var12 = var_file->attrs[COLOR_modelbuilder__ModulePath___mmodule].val; /* _mmodule on <var_file:nullable ModulePath(ModulePath)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mmodule = var10;
var13 = NULL;
if (var_mmodule == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule,var13) on <var_mmodule:nullable MModule> */
var_other17 = var13;
{
var19 = ((short int (*)(val*, val*))(var_mmodule->class->vft[COLOR_kernel__Object___61d_61d]))(var_mmodule, var_other17) /* == on <var_mmodule:nullable MModule(MModule)>*/;
var18 = var19;
}
var20 = !var18;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var23 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = hash_collection__HashMap___91d_93d(var21, var_mmodule);
}
var = var24;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModulePath#filepath (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var27 = var_file->attrs[COLOR_modelbuilder__ModulePath___filepath].val; /* _filepath on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 733);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = modelbuilder__ModelBuilder__load_module_ast(self, var25);
}
var_nmodule = var28;
var29 = NULL;
if (var_nmodule == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,var29) on <var_nmodule:nullable AModule> */
var_other = var29;
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var35 = var_nmodule == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var36 = NULL;
var = var36;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModulePath#mgroup (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var39 = var_file->attrs[COLOR_modelbuilder__ModulePath___mgroup].val; /* _mgroup on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 736);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline modelbuilder#ModulePath#name (var_file) on <var_file:nullable ModulePath(ModulePath)> */
var42 = var_file->attrs[COLOR_modelbuilder__ModulePath___name].val; /* _name on <var_file:nullable ModulePath(ModulePath)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 729);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = modelbuilder__ModelBuilder__build_a_mmodule(self, var37, var40, var_nmodule);
}
var_mmodule = var43;
var44 = NULL;
if (var_mmodule == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,var44) on <var_mmodule:nullable MModule> */
var_other = var44;
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var50 = var_mmodule == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
var51 = NULL;
var = var51;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModulePath#mmodule= (var_file,var_mmodule) on <var_file:nullable ModulePath(ModulePath)> */
var_file->attrs[COLOR_modelbuilder__ModulePath___mmodule].val = var_mmodule; /* _mmodule on <var_file:nullable ModulePath(ModulePath)> */
RET_LABEL52:(void)0;
}
}
{
modelbuilder__ModelBuilder__build_module_importation(self, var_nmodule); /* Direct call modelbuilder#ModelBuilder#build_module_importation on <self:ModelBuilder>*/
}
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
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AModuleName */;
val* var10 /* : TId */;
val* var11 /* : String */;
val* var_decl_name /* var decl_name: String */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AModuleName */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : MModule */;
val* var34 /* : Model */;
val* var36 /* : Model */;
val* var37 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var39 /* : Array[AModule] */;
val* var41 /* : Array[AModule] */;
val* var42 /* : HashMap[MModule, AModule] */;
val* var44 /* : HashMap[MModule, AModule] */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
val* var53 /* : null */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
var_mgroup = p0;
var_mod_name = p1;
var_nmodule = p2;
{
var1 = parser_nodes__AModule__n_moduledecl(var_nmodule);
}
var_decl = var1;
var2 = NULL;
if (var_decl == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_decl,var2) on <var_decl:nullable AModuledecl> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_decl,var_other) on <var_decl:nullable AModuledecl(AModuledecl)> */
var8 = var_decl == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
} else {
{
var9 = parser_nodes__AModuledecl__n_name(var_decl);
}
{
var10 = parser_nodes__AModuleName__n_id(var9);
}
{
var11 = lexer_work__Token__text(var10);
}
var_decl_name = var11;
{
{ /* Inline kernel#Object#!= (var_decl_name,var_mod_name) on <var_decl_name:String> */
var_other15 = var_mod_name;
{
var17 = ((short int (*)(val*, val*))(var_decl_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_decl_name, var_other15) /* == on <var_decl_name:String>*/;
var16 = var17;
}
var18 = !var16;
var13 = var18;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
var19 = parser_nodes__AModuledecl__n_name(var_decl);
}
if (varonce) {
var20 = varonce;
} else {
var21 = "Error: module name missmatch; declared ";
var22 = 39;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = " file named ";
var27 = 12;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 4;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var_decl_name;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var25;
((struct instance_array__NativeArray*)var31)->values[3] = (val*) var_mod_name;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var19, var32); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
}
var33 = NEW_mmodule__MModule(&type_mmodule__MModule);
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var36 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 98);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = parser_nodes__ANode__location(var_nmodule);
}
{
mmodule__MModule__init(var33, var34, var_mgroup, var_mod_name, var37); /* Direct call mmodule#MModule#init on <var33:MModule>*/
}
var_mmodule = var33;
{
{ /* Inline modelbuilder#AModule#mmodule= (var_nmodule,var_mmodule) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val = var_mmodule; /* _mmodule on <var_nmodule:AModule> */
RET_LABEL38:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#nmodules (self) on <self:ModelBuilder> */
var41 = self->attrs[COLOR_modelbuilder__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 694);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
array__Array__add(var39, var_nmodule); /* Direct call array#Array#add on <var39:Array[AModule]>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var44 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var42, var_mmodule, var_nmodule); /* Direct call hash_collection#HashMap#[]= on <var42:HashMap[MModule, AModule]>*/
}
var45 = NULL;
if (var_decl == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,var45) on <var_decl:nullable AModuledecl> */
var_other15 = var45;
{
var50 = ((short int (*)(val*, val*))(var_decl->class->vft[COLOR_kernel__Object___61d_61d]))(var_decl, var_other15) /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/;
var49 = var50;
}
var51 = !var49;
var47 = var51;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
{
var52 = parser_nodes__AModuledecl__n_doc(var_decl);
}
var_ndoc = var52;
var53 = NULL;
if (var_ndoc == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var53) on <var_ndoc:nullable ADoc> */
var_other15 = var53;
{
var58 = ((short int (*)(val*, val*))(var_ndoc->class->vft[COLOR_kernel__Object___61d_61d]))(var_ndoc, var_other15) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
var57 = var58;
}
var59 = !var57;
var55 = var59;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
var60 = modelbuilder__ADoc__to_mdoc(var_ndoc);
}
var_mdoc = var60;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mmodule,var_mdoc) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mmodule:MModule> */
RET_LABEL61:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mmodule) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_mdoc__MDoc___original_mentity].val = var_mmodule; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL62:(void)0;
}
}
} else {
}
} else {
}
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
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var5 /* : nullable MModule */;
val* var7 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var8 /* : Bool */;
short int var_stdimport /* var stdimport: Bool */;
val* var9 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var10 /* : ANodes[AImport] */;
val* var12 /* : ANodes[AImport] */;
val* var13 /* : Iterator[ANode] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_aimport /* var aimport: AImport */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
short int var18 /* : Bool */;
val* var19 /* : nullable MGroup */;
val* var21 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var22 /* : AModuleName */;
val* var23 /* : nullable TQuad */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : null */;
val* var32 /* : AModuleName */;
val* var33 /* : ANodes[TId] */;
val* var35 /* : ANodes[TId] */;
val* var36 /* : Iterator[ANode] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_grp /* var grp: TId */;
val* var39 /* : String */;
val* var40 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var_other45 /* var other: nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : MGroup */;
val* var51 /* : MGroup */;
val* var53 /* : AModuleName */;
val* var54 /* : TId */;
val* var55 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var56 /* : AModuleName */;
val* var57 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
val* var58 /* : null */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
val* var66 /* : AVisibility */;
val* var67 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var68 /* : MVisibility */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : AVisibility */;
static val* varonce;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : AModuleName */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
val* var101 /* : POSetElement[MModule] */;
val* var103 /* : POSetElement[MModule] */;
short int var104 /* : Bool */;
val* var105 /* : AModuleName */;
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
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
val* var_mod_name130 /* var mod_name: String */;
val* var131 /* : null */;
val* var132 /* : nullable MModule */;
val* var_sup133 /* var sup: nullable MModule */;
val* var134 /* : null */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
val* var141 /* : MVisibility */;
val* var142 /* : ToolContext */;
val* var144 /* : ToolContext */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : FlatString */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : FlatString */;
val* var155 /* : String */;
val* var156 /* : Array[Object] */;
long var157 /* : Int */;
val* var158 /* : NativeArray[Object] */;
val* var159 /* : String */;
long var160 /* : Int */;
var_nmodule = p0;
{
{ /* Inline modelbuilder#AModule#is_importation_done (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_modelbuilder__AModule___is_importation_done].s; /* _is_importation_done on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
var3 = 1;
{
{ /* Inline modelbuilder#AModule#is_importation_done= (var_nmodule,var3) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_modelbuilder__AModule___is_importation_done].s = var3; /* _is_importation_done on <var_nmodule:AModule> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var7 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 648);
show_backtrace(1);
}
var_mmodule = var5;
var8 = 1;
var_stdimport = var8;
var9 = NEW_array__Array(&type_array__Arraymmodule__MModule);
{
array__Array__init(var9); /* Direct call array#Array#init on <var9:Array[MModule]>*/
}
var_imported_modules = var9;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var12 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 697);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = parser_nodes__ANodes__iterator(var10);
}
for(;;) {
{
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[ANode]>*/;
}
if(!var14) break;
{
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[ANode]>*/;
}
var_aimport = var15;
var16 = 0;
var_stdimport = var16;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_parser_nodes__AStdImport.color;
idtype = type_parser_nodes__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var17 = 0;
} else {
var17 = var_aimport->type->type_table[cltype] == idtype;
}
var18 = !var17;
if (var18){
goto CONTINUE_label;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var21 = var_mmodule->attrs[COLOR_mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mgroup = var19;
{
var22 = parser_nodes__AStdImport__n_name(var_aimport);
}
{
var23 = parser_nodes__AModuleName__n_quad(var22);
}
var24 = NULL;
if (var23 == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var23,var24) on <var23:nullable TQuad> */
var_other = var24;
{
var29 = ((short int (*)(val*, val*))(var23->class->vft[COLOR_kernel__Object___61d_61d]))(var23, var_other) /* == on <var23:nullable TQuad(TQuad)>*/;
var28 = var29;
}
var30 = !var28;
var26 = var30;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
var31 = NULL;
var_mgroup = var31;
} else {
}
{
var32 = parser_nodes__AStdImport__n_name(var_aimport);
}
{
{ /* Inline parser_nodes#AModuleName#n_path (var32) on <var32:AModuleName> */
var35 = var32->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <var32:AModuleName> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2349);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = parser_nodes__ANodes__iterator(var33);
}
for(;;) {
{
var37 = ((short int (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var36) /* is_ok on <var36:Iterator[ANode]>*/;
}
if(!var37) break;
{
var38 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__item]))(var36) /* item on <var36:Iterator[ANode]>*/;
}
var_grp = var38;
{
var39 = lexer_work__Token__text(var_grp);
}
{
var40 = modelbuilder__ModelBuilder__search_mmodule_by_name(self, var_grp, var_mgroup, var39);
}
var_path = var40;
var41 = NULL;
if (var_path == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_path,var41) on <var_path:nullable ModulePath> */
var_other45 = var41;
{
{ /* Inline kernel#Object#is_same_instance (var_path,var_other45) on <var_path:nullable ModulePath(ModulePath)> */
var48 = var_path == var_other45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModulePath#mgroup (var_path) on <var_path:nullable ModulePath(ModulePath)> */
var51 = var_path->attrs[COLOR_modelbuilder__ModulePath___mgroup].val; /* _mgroup on <var_path:nullable ModulePath(ModulePath)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 736);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_mgroup = var49;
CONTINUE_label52: (void)0;
{
((void (*)(val*))(var36->class->vft[COLOR_abstract_collection__Iterator__next]))(var36) /* next on <var36:Iterator[ANode]>*/;
}
}
BREAK_label52: (void)0;
{
var53 = parser_nodes__AStdImport__n_name(var_aimport);
}
{
var54 = parser_nodes__AModuleName__n_id(var53);
}
{
var55 = lexer_work__Token__text(var54);
}
var_mod_name = var55;
{
var56 = parser_nodes__AStdImport__n_name(var_aimport);
}
{
var57 = modelbuilder__ModelBuilder__get_mmodule_by_name(self, var56, var_mgroup, var_mod_name);
}
var_sup = var57;
var58 = NULL;
if (var_sup == NULL) {
var59 = 1; /* is null */
} else {
var59 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,var58) on <var_sup:nullable MModule> */
var_other45 = var58;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other45) on <var_sup:nullable MModule(MModule)> */
var64 = var_sup == var_other45;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
goto CONTINUE_label;
} else {
}
{
{ /* Inline modelbuilder#AStdImport#mmodule= (var_aimport,var_sup) on <var_aimport:AImport(AStdImport)> */
var_aimport->attrs[COLOR_modelbuilder__AStdImport___mmodule].val = var_sup; /* _mmodule on <var_aimport:AImport(AStdImport)> */
RET_LABEL65:(void)0;
}
}
{
array__Array__add(var_imported_modules, var_sup); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
var66 = parser_nodes__AStdImport__n_visibility(var_aimport);
}
{
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var66) /* mvisibility on <var66:AVisibility>*/;
}
var_mvisibility = var67;
{
var68 = model_base__Object__protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var68) on <var_mvisibility:MVisibility> */
var_other45 = var68;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other45) on <var_mvisibility:MVisibility> */
var74 = var_mvisibility == var_other45;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
{
var75 = parser_nodes__AStdImport__n_visibility(var_aimport);
}
if (varonce) {
var76 = varonce;
} else {
var77 = "Error: only properties can be protected.";
var78 = 40;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce = var76;
}
{
modelbuilder__ModelBuilder__error(self, var75, var76); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_sup,var_mmodule) on <var_sup:nullable MModule(MModule)> */
var_other45 = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other45) on <var_sup:nullable MModule(MModule)> */
var85 = var_sup == var_other45;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
if (var80){
{
var86 = parser_nodes__AStdImport__n_name(var_aimport);
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = "Error: Dependency loop in module ";
var90 = 33;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = ".";
var95 = 1;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 3;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
{
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
}
{
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var86, var100); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_sup) on <var_sup:nullable MModule(MModule)> */
var103 = var_sup->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_sup:nullable MModule(MModule)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = poset__POSetElement___60d(var101, var_mmodule);
}
if (var104){
{
var105 = parser_nodes__AStdImport__n_name(var_aimport);
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "Error: Dependency loop between modules ";
var109 = 39;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = " and ";
var114 = 5;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = ".";
var119 = 1;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 5;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var107;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var123)->values[2] = (val*) var112;
((struct instance_array__NativeArray*)var123)->values[3] = (val*) var_sup;
((struct instance_array__NativeArray*)var123)->values[4] = (val*) var117;
{
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
}
{
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var105, var124); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
mmodule__MModule__set_visibility_for(var_mmodule, var_sup, var_mvisibility); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
if (var_stdimport){
if (varonce125) {
var126 = varonce125;
} else {
var127 = "standard";
var128 = 8;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var_mod_name130 = var126;
var131 = NULL;
{
var132 = modelbuilder__ModelBuilder__get_mmodule_by_name(self, var_nmodule, var131, var_mod_name130);
}
var_sup133 = var132;
var134 = NULL;
if (var_sup133 == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_sup133,var134) on <var_sup133:nullable MModule> */
var_other = var134;
{
var139 = ((short int (*)(val*, val*))(var_sup133->class->vft[COLOR_kernel__Object___61d_61d]))(var_sup133, var_other) /* == on <var_sup133:nullable MModule(MModule)>*/;
var138 = var139;
}
var140 = !var138;
var136 = var140;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
var135 = var136;
}
if (var135){
{
array__Array__add(var_imported_modules, var_sup133); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
var141 = model_base__Object__public_visibility(self);
}
{
mmodule__MModule__set_visibility_for(var_mmodule, var_sup133, var141); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var144 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = " imports ";
var148 = 9;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
if (varonce150) {
var151 = varonce150;
} else {
var152 = ", ";
var153 = 2;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
{
var155 = string__Collection__join(var_imported_modules, var151);
}
var156 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var156 = array_instance Array[Object] */
var157 = 3;
var158 = NEW_array__NativeArray(var157, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var158)->values[0] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var158)->values[1] = (val*) var146;
((struct instance_array__NativeArray*)var158)->values[2] = (val*) var155;
{
((void (*)(val*, val*, long))(var156->class->vft[COLOR_array__Array__with_native]))(var156, var158, var157) /* with_native on <var156:Array[Object]>*/;
}
}
{
var159 = ((val* (*)(val*))(var156->class->vft[COLOR_string__Object__to_s]))(var156) /* to_s on <var156:Array[Object]>*/;
}
var160 = 3;
{
toolcontext__ToolContext__info(var142, var159, var160); /* Direct call toolcontext#ToolContext#info on <var142:ToolContext>*/
}
{
mmodule__MModule__set_imported_mmodules(var_mmodule, var_imported_modules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#build_module_importation for (self: Object, AModule) */
void VIRTUAL_modelbuilder__ModelBuilder__build_module_importation(val* self, val* p0) {
modelbuilder__ModelBuilder__build_module_importation(self, p0); /* Direct call modelbuilder#ModelBuilder#build_module_importation on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#nmodules for (self: ModelBuilder): Array[AModule] */
val* modelbuilder__ModelBuilder__nmodules(val* self) {
val* var /* : Array[AModule] */;
val* var1 /* : Array[AModule] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 694);
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
val* var3 /* : Array[AModule] */;
{ /* Inline modelbuilder#ModelBuilder#nmodules (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___nmodules].val; /* _nmodules on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 694);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#mmodule2nmodule for (self: ModelBuilder): HashMap[MModule, AModule] */
val* modelbuilder__ModelBuilder__mmodule2nmodule(val* self) {
val* var /* : HashMap[MModule, AModule] */;
val* var1 /* : HashMap[MModule, AModule] */;
var1 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
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
val* var3 /* : HashMap[MModule, AModule] */;
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 697);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#error for (self: ModelBuilder, ANode, String) */
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1) {
val* var_n /* var n: ANode */;
val* var_text /* var text: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Location */;
var_n = p0;
var_text = p1;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:ANode>*/;
}
{
toolcontext__ToolContext__error(var, var3, var_text); /* Direct call toolcontext#ToolContext#error on <var:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#error for (self: Object, ANode, String) */
void VIRTUAL_modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1) {
modelbuilder__ModelBuilder__error(self, p0, p1); /* Direct call modelbuilder#ModelBuilder#error on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#warning for (self: ModelBuilder, ANode, String) */
void modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1) {
val* var_n /* var n: ANode */;
val* var_text /* var text: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Location */;
var_n = p0;
var_text = p1;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:ANode>*/;
}
{
toolcontext__ToolContext__warning(var, var3, var_text); /* Direct call toolcontext#ToolContext#warning on <var:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#warning for (self: Object, ANode, String) */
void VIRTUAL_modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1) {
modelbuilder__ModelBuilder__warning(self, p0, p1); /* Direct call modelbuilder#ModelBuilder#warning on <self:Object(ModelBuilder)>*/
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
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ToolContext */;
val* var11 /* : ToolContext */;
val* var12 /* : Location */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
var_n = p0;
var_name = p1;
var_recv = p2;
var_mmodule = p3;
{
var1 = model__MModule__try_get_primitive_method(var_mmodule, var_name, var_recv);
}
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var2) on <var_res:nullable MMethod> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MMethod(MMethod)> */
var8 = var_res == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var11 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:ANode>*/;
}
if (varonce) {
var13 = varonce;
} else {
var14 = "Fatal Error: ";
var15 = 13;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " must have a property named ";
var20 = 28;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ".";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var29)->values[4] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
toolcontext__ToolContext__fatal_error(var9, var12, var30); /* Direct call toolcontext#ToolContext#fatal_error on <var9:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 721);
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
var1 = self->attrs[COLOR_modelbuilder__ModulePath___name].val; /* _name on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 729);
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
val* var3 /* : String */;
{ /* Inline modelbuilder#ModulePath#name (self) on <self:Object(ModulePath)> */
var3 = self->attrs[COLOR_modelbuilder__ModulePath___name].val; /* _name on <self:Object(ModulePath)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 729);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#filepath for (self: ModulePath): String */
val* modelbuilder__ModulePath__filepath(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___filepath].val; /* _filepath on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 733);
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
val* var3 /* : String */;
{ /* Inline modelbuilder#ModulePath#filepath (self) on <self:Object(ModulePath)> */
var3 = self->attrs[COLOR_modelbuilder__ModulePath___filepath].val; /* _filepath on <self:Object(ModulePath)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 733);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mgroup for (self: ModulePath): MGroup */
val* modelbuilder__ModulePath__mgroup(val* self) {
val* var /* : MGroup */;
val* var1 /* : MGroup */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___mgroup].val; /* _mgroup on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 736);
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
val* var3 /* : MGroup */;
{ /* Inline modelbuilder#ModulePath#mgroup (self) on <self:Object(ModulePath)> */
var3 = self->attrs[COLOR_modelbuilder__ModulePath___mgroup].val; /* _mgroup on <self:Object(ModulePath)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 736);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mmodule for (self: ModulePath): nullable MModule */
val* modelbuilder__ModulePath__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___mmodule].val; /* _mmodule on <self:ModulePath> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mmodule for (self: Object): nullable MModule */
val* VIRTUAL_modelbuilder__ModulePath__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
val* var3 /* : nullable MModule */;
{ /* Inline modelbuilder#ModulePath#mmodule (self) on <self:Object(ModulePath)> */
var3 = self->attrs[COLOR_modelbuilder__ModulePath___mmodule].val; /* _mmodule on <self:Object(ModulePath)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mmodule= for (self: ModulePath, nullable MModule) */
void modelbuilder__ModulePath__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModulePath___mmodule].val = p0; /* _mmodule on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#mmodule= for (self: Object, nullable MModule) */
void VIRTUAL_modelbuilder__ModulePath__mmodule_61d(val* self, val* p0) {
{ /* Inline modelbuilder#ModulePath#mmodule= (self,p0) on <self:Object(ModulePath)> */
self->attrs[COLOR_modelbuilder__ModulePath___mmodule].val = p0; /* _mmodule on <self:Object(ModulePath)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#ModulePath#to_s for (self: ModulePath): String */
val* modelbuilder__ModulePath__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline modelbuilder#ModulePath#filepath (self) on <self:ModulePath> */
var3 = self->attrs[COLOR_modelbuilder__ModulePath___filepath].val; /* _filepath on <self:ModulePath> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 733);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
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
self->attrs[COLOR_modelbuilder__ModulePath___name].val = p0; /* _name on <self:ModulePath> */
self->attrs[COLOR_modelbuilder__ModulePath___filepath].val = p1; /* _filepath on <self:ModulePath> */
self->attrs[COLOR_modelbuilder__ModulePath___mgroup].val = p2; /* _mgroup on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#init for (self: Object, String, String, MGroup) */
void VIRTUAL_modelbuilder__ModulePath__init(val* self, val* p0, val* p1, val* p2) {
{ /* Inline modelbuilder#ModulePath#init (self,p0,p1,p2) on <self:Object(ModulePath)> */
self->attrs[COLOR_modelbuilder__ModulePath___name].val = p0; /* _name on <self:Object(ModulePath)> */
self->attrs[COLOR_modelbuilder__ModulePath___filepath].val = p1; /* _filepath on <self:Object(ModulePath)> */
self->attrs[COLOR_modelbuilder__ModulePath___mgroup].val = p2; /* _mgroup on <self:Object(ModulePath)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#MGroup#module_paths for (self: MGroup): Array[ModulePath] */
val* modelbuilder__MGroup__module_paths(val* self) {
val* var /* : Array[ModulePath] */;
val* var1 /* : Array[ModulePath] */;
var1 = self->attrs[COLOR_modelbuilder__MGroup___module_paths].val; /* _module_paths on <self:MGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _module_paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 746);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#MGroup#module_paths for (self: Object): Array[ModulePath] */
val* VIRTUAL_modelbuilder__MGroup__module_paths(val* self) {
val* var /* : Array[ModulePath] */;
val* var1 /* : Array[ModulePath] */;
val* var3 /* : Array[ModulePath] */;
{ /* Inline modelbuilder#MGroup#module_paths (self) on <self:Object(MGroup)> */
var3 = self->attrs[COLOR_modelbuilder__MGroup___module_paths].val; /* _module_paths on <self:Object(MGroup)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _module_paths");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 746);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AStdImport#mmodule= for (self: AStdImport, nullable MModule) */
void modelbuilder__AStdImport__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__AStdImport___mmodule].val = p0; /* _mmodule on <self:AStdImport> */
RET_LABEL:;
}
/* method modelbuilder#AStdImport#mmodule= for (self: Object, nullable MModule) */
void VIRTUAL_modelbuilder__AStdImport__mmodule_61d(val* self, val* p0) {
{ /* Inline modelbuilder#AStdImport#mmodule= (self,p0) on <self:Object(AStdImport)> */
self->attrs[COLOR_modelbuilder__AStdImport___mmodule].val = p0; /* _mmodule on <self:Object(AStdImport)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#AModule#mmodule for (self: AModule): nullable MModule */
val* modelbuilder__AModule__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AModule#mmodule for (self: Object): nullable MModule */
val* VIRTUAL_modelbuilder__AModule__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
val* var3 /* : nullable MModule */;
{ /* Inline modelbuilder#AModule#mmodule (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <self:Object(AModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AModule#mmodule= for (self: AModule, nullable MModule) */
void modelbuilder__AModule__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__AModule___mmodule].val = p0; /* _mmodule on <self:AModule> */
RET_LABEL:;
}
/* method modelbuilder#AModule#mmodule= for (self: Object, nullable MModule) */
void VIRTUAL_modelbuilder__AModule__mmodule_61d(val* self, val* p0) {
{ /* Inline modelbuilder#AModule#mmodule= (self,p0) on <self:Object(AModule)> */
self->attrs[COLOR_modelbuilder__AModule___mmodule].val = p0; /* _mmodule on <self:Object(AModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#AModule#is_importation_done for (self: AModule): Bool */
short int modelbuilder__AModule__is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelbuilder__AModule___is_importation_done].s; /* _is_importation_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AModule#is_importation_done for (self: Object): Bool */
short int VIRTUAL_modelbuilder__AModule__is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelbuilder#AModule#is_importation_done (self) on <self:Object(AModule)> */
var3 = self->attrs[COLOR_modelbuilder__AModule___is_importation_done].s; /* _is_importation_done on <self:Object(AModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AModule#is_importation_done= for (self: AModule, Bool) */
void modelbuilder__AModule__is_importation_done_61d(val* self, short int p0) {
self->attrs[COLOR_modelbuilder__AModule___is_importation_done].s = p0; /* _is_importation_done on <self:AModule> */
RET_LABEL:;
}
/* method modelbuilder#AModule#is_importation_done= for (self: Object, Bool) */
void VIRTUAL_modelbuilder__AModule__is_importation_done_61d(val* self, short int p0) {
{ /* Inline modelbuilder#AModule#is_importation_done= (self,p0) on <self:Object(AModule)> */
self->attrs[COLOR_modelbuilder__AModule___is_importation_done].s = p0; /* _is_importation_done on <self:Object(AModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#AIntrudeVisibility#mvisibility for (self: AIntrudeVisibility): MVisibility */
val* modelbuilder__AIntrudeVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
{
var1 = model_base__Object__intrude_visibility(self);
}
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
{
var1 = model_base__Object__public_visibility(self);
}
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
{
var1 = model_base__Object__protected_visibility(self);
}
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
{
var1 = model_base__Object__private_visibility(self);
}
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
/* method modelbuilder#ADoc#mdoc_cache for (self: ADoc): nullable MDoc */
val* modelbuilder__ADoc__mdoc_cache(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
var1 = self->attrs[COLOR_modelbuilder__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ADoc#mdoc_cache for (self: Object): nullable MDoc */
val* VIRTUAL_modelbuilder__ADoc__mdoc_cache(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
val* var3 /* : nullable MDoc */;
{ /* Inline modelbuilder#ADoc#mdoc_cache (self) on <self:Object(ADoc)> */
var3 = self->attrs[COLOR_modelbuilder__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:Object(ADoc)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ADoc#mdoc_cache= for (self: ADoc, nullable MDoc) */
void modelbuilder__ADoc__mdoc_cache_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ADoc___mdoc_cache].val = p0; /* _mdoc_cache on <self:ADoc> */
RET_LABEL:;
}
/* method modelbuilder#ADoc#mdoc_cache= for (self: Object, nullable MDoc) */
void VIRTUAL_modelbuilder__ADoc__mdoc_cache_61d(val* self, val* p0) {
{ /* Inline modelbuilder#ADoc#mdoc_cache= (self,p0) on <self:Object(ADoc)> */
self->attrs[COLOR_modelbuilder__ADoc___mdoc_cache].val = p0; /* _mdoc_cache on <self:Object(ADoc)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#ADoc#to_mdoc for (self: ADoc): MDoc */
val* modelbuilder__ADoc__to_mdoc(val* self) {
val* var /* : MDoc */;
val* var1 /* : nullable MDoc */;
val* var3 /* : nullable MDoc */;
val* var_res /* var res: nullable MDoc */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MDoc */;
val* var13 /* : ANodes[TComment] */;
val* var15 /* : ANodes[TComment] */;
val* var16 /* : Iterator[ANode] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_c /* var c: TComment */;
val* var19 /* : String */;
val* var_text /* var text: String */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var27 /* : Bool */;
val* var28 /* : Array[String] */;
val* var30 /* : Array[String] */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
val* var35 /* : SequenceRead[Char] */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
val* var39 /* : nullable Object */;
char var40 /* : Char */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
char var45 /* : Char */;
val* var46 /* : SequenceRead[Char] */;
val* var48 /* : SequenceRead[Char] */;
long var49 /* : Int */;
val* var50 /* : nullable Object */;
char var51 /* : Char */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
char var56 /* : Char */;
long var57 /* : Int */;
val* var58 /* : Text */;
long var59 /* : Int */;
val* var60 /* : Text */;
val* var61 /* : SequenceRead[Char] */;
val* var63 /* : SequenceRead[Char] */;
val* var64 /* : nullable Object */;
char var65 /* : Char */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
char var70 /* : Char */;
long var71 /* : Int */;
long var72 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : Array[String] */;
val* var86 /* : Array[String] */;
{
{ /* Inline modelbuilder#ADoc#mdoc_cache (self) on <self:ADoc> */
var3 = self->attrs[COLOR_modelbuilder__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable MDoc> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MDoc(MDoc)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
var11 = NEW_mdoc__MDoc(&type_mdoc__MDoc);
{
{ /* Inline mdoc#MDoc#init (var11) on <var11:MDoc> */
RET_LABEL12:(void)0;
}
}
var_res = var11;
{
{ /* Inline parser_nodes#ADoc#n_comment (self) on <self:ADoc> */
var15 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2391);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = parser_nodes__ANodes__iterator(var13);
}
for(;;) {
{
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[ANode]>*/;
}
if(!var17) break;
{
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[ANode]>*/;
}
var_c = var18;
{
var19 = lexer_work__Token__text(var_c);
}
var_text = var19;
{
{ /* Inline string#FlatText#length (var_text) on <var_text:String> */
var22 = var_text->attrs[COLOR_string__FlatText___length].l; /* _length on <var_text:String> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = 2;
{
{ /* Inline kernel#Int#< (var20,var23) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var27 = var20 < var23;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
{ /* Inline mdoc#MDoc#content (var_res) on <var_res:nullable MDoc(MDoc)> */
var30 = var_res->attrs[COLOR_mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "src/model/mdoc.nit", 22);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (varonce) {
var31 = varonce;
} else {
var32 = "";
var33 = 0;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
{
array__Array__add(var28, var31); /* Direct call array#Array#add on <var28:Array[String]>*/
}
goto CONTINUE_label;
} else {
}
{
{ /* Inline string#FlatString#chars (var_text) on <var_text:String> */
var37 = var_text->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_text:String> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = 0;
{
var39 = ((val* (*)(val*, long))(var35->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var35, var38) /* [] on <var35:SequenceRead[Char]>*/;
}
var40 = '#';
{
{ /* Inline kernel#Char#== (var39,var40) on <var39:nullable Object(Char)> */
var44 = (var39 != NULL) && (var39->class == &class_kernel__Char);
if (var44) {
var45 = ((struct instance_kernel__Char*)var39)->value; /* autounbox from nullable Object to Char */;
var44 = (var45 == var40);
}
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 792);
show_backtrace(1);
}
{
{ /* Inline string#FlatString#chars (var_text) on <var_text:String> */
var48 = var_text->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_text:String> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = 1;
{
var50 = ((val* (*)(val*, long))(var46->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var46, var49) /* [] on <var46:SequenceRead[Char]>*/;
}
var51 = ' ';
{
{ /* Inline kernel#Char#== (var50,var51) on <var50:nullable Object(Char)> */
var55 = (var50 != NULL) && (var50->class == &class_kernel__Char);
if (var55) {
var56 = ((struct instance_kernel__Char*)var50)->value; /* autounbox from nullable Object to Char */;
var55 = (var56 == var51);
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
var57 = 2;
{
var58 = string__Text__substring_from(var_text, var57);
}
var_text = var58;
} else {
var59 = 1;
{
var60 = string__Text__substring_from(var_text, var59);
}
var_text = var60;
}
{
{ /* Inline string#FlatString#chars (var_text) on <var_text:String> */
var63 = var_text->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_text:String> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var61) /* last on <var61:SequenceRead[Char]>*/;
}
var65 = '\n';
{
{ /* Inline kernel#Char#== (var64,var65) on <var64:nullable Object(Char)> */
var69 = (var64 != NULL) && (var64->class == &class_kernel__Char);
if (var69) {
var70 = ((struct instance_kernel__Char*)var64)->value; /* autounbox from nullable Object to Char */;
var69 = (var70 == var65);
}
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
var71 = 0;
{
{ /* Inline string#FlatText#length (var_text) on <var_text:String> */
var74 = var_text->attrs[COLOR_string__FlatText___length].l; /* _length on <var_text:String> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
var75 = 1;
{
{ /* Inline kernel#Int#- (var72,var75) on <var72:Int> */
/* Covariant cast for argument 0 (i) <var75:Int> isa OTHER */
/* <var75:Int> isa OTHER */
var78 = 1; /* easy <var75:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var82 = var72 - var75;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
var83 = string__FlatString__substring(var_text, var71, var76);
}
var_text = var83;
} else {
}
{
{ /* Inline mdoc#MDoc#content (var_res) on <var_res:nullable MDoc(MDoc)> */
var86 = var_res->attrs[COLOR_mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "src/model/mdoc.nit", 22);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
array__Array__add(var84, var_text); /* Direct call array#Array#add on <var84:Array[String]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline modelbuilder#ADoc#mdoc_cache= (self,var_res) on <self:ADoc> */
self->attrs[COLOR_modelbuilder__ADoc___mdoc_cache].val = var_res; /* _mdoc_cache on <self:ADoc> */
RET_LABEL87:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ADoc#to_mdoc for (self: Object): MDoc */
val* VIRTUAL_modelbuilder__ADoc__to_mdoc(val* self) {
val* var /* : MDoc */;
val* var1 /* : MDoc */;
var1 = modelbuilder__ADoc__to_mdoc(self);
var = var1;
RET_LABEL:;
return var;
}
