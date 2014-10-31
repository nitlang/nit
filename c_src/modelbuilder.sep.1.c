#include "modelbuilder.sep.0.h"
/* method modelbuilder#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* modelbuilder__ToolContext__opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_modelbuilder__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 39);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 39);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 39);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 42);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 52);
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
/* method modelbuilder#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* modelbuilder__ToolContext__make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_mainmodule /* var mainmodule: nullable Object */;
val* var12 /* : MModule */;
val* var13 /* : ModelBuilder */;
val* var14 /* : Model */;
val* var16 /* : Model */;
val* var17 /* : null */;
val* var18 /* : nullable Object */;
val* var19 /* : String */;
val* var21 /* : String */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var27 /* : Location */;
val* var28 /* : nullable Object */;
val* var29 /* : Location */;
val* var31 /* : Location */;
val* var32 /* : nullable SourceFile */;
val* var34 /* : nullable SourceFile */;
long var35 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
var_mmodules = p0;
{
var1 = array__AbstractArrayRead__is_empty(var_mmodules);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 59);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var_mmodules) on <var_mmodules:Array[MModule]> */
var5 = var_mmodules->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_mmodules:Array[MModule]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 1;
{
{ /* Inline kernel#Int#== (var3,var6) on <var3:Int> */
var10 = var3 == var6;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
var11 = abstract_collection__SequenceRead__first(var_mmodules);
}
var_mainmodule = var11;
} else {
var12 = NEW_mmodule__MModule(&type_mmodule__MModule);
{
var13 = modelbuilder__ToolContext__modelbuilder(self);
}
{
{ /* Inline modelbuilder#ModelBuilder#model (var13) on <var13:ModelBuilder> */
var16 = var13->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <var13:ModelBuilder> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = NULL;
{
var18 = abstract_collection__SequenceRead__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#name (var18) on <var18:nullable Object(MModule)> */
var21 = var18->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var18:nullable Object(MModule)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (varonce) {
var22 = varonce;
} else {
var23 = "-m";
var24 = 2;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
{
var26 = string__FlatString___43d(var19, var22);
}
var27 = NEW_location__Location(&type_location__Location);
{
var28 = abstract_collection__SequenceRead__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#location (var28) on <var28:nullable Object(MModule)> */
var31 = var28->attrs[COLOR_mmodule__MModule___location].val; /* _location on <var28:nullable Object(MModule)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 81);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline location#Location#file (var29) on <var29:Location> */
var34 = var29->attrs[COLOR_location__Location___file].val; /* _file on <var29:Location> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = 0;
var36 = 0;
var37 = 0;
var38 = 0;
{
location__Location__init(var27, var32, var35, var36, var37, var38); /* Direct call location#Location#init on <var27:Location>*/
}
{
mmodule__MModule__init(var12, var14, var17, var26, var27); /* Direct call mmodule#MModule#init on <var12:MModule>*/
}
var_mainmodule = var12;
var39 = 1;
{
{ /* Inline mmodule#MModule#is_fictive= (var_mainmodule,var39) on <var_mainmodule:nullable Object(MModule)> */
var_mainmodule->attrs[COLOR_mmodule__MModule___is_fictive].s = var39; /* _is_fictive on <var_mainmodule:nullable Object(MModule)> */
RET_LABEL40:(void)0;
}
}
{
mmodule__MModule__set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:nullable Object(MModule)>*/
}
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#make_main_module for (self: Object, Array[MModule]): MModule */
val* VIRTUAL_modelbuilder__ToolContext__make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = modelbuilder__ToolContext__make_main_module(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#run_global_phases for (self: ToolContext, Array[MModule]) */
void modelbuilder__ToolContext__run_global_phases(val* self, val* p0) {
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Phase] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
var_mmodules = p0;
{
var = mixin__ToolContext__make_main_module(self, var_mmodules);
}
var_mainmodule = var;
{
var1 = phase__ToolContext__phases_list(self);
}
var_ = var1;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Sequence[Phase]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:IndexedIterator[Phase]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:IndexedIterator[Phase]>*/;
}
var_phase = var5;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var8 = var_phase->attrs[COLOR_phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6){
goto BREAK_label;
} else {
}
{
((void (*)(val*, val*, val*))(var_phase->class->vft[COLOR_modelbuilder__Phase__process_mainmodule]))(var_phase, var_mainmodule, var_mmodules) /* process_mainmodule on <var_phase:Phase>*/;
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:IndexedIterator[Phase]>*/;
}
} else {
goto BREAK_label9;
}
}
BREAK_label9: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:IndexedIterator[Phase]> */
RET_LABEL10:(void)0;
}
}
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
val* var_ /* var : Array[MModule] */;
val* var14 /* : ArrayIterator[nullable Object] */;
val* var_15 /* var : ArrayIterator[MModule] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_mm /* var mm: MModule */;
val* var18 /* : HashMap[MModule, AModule] */;
val* var20 /* : HashMap[MModule, AModule] */;
val* var21 /* : nullable Object */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : nullable Object */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
val* var36 /* : ToolContext */;
val* var38 /* : ToolContext */;
static val* varonce;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
long var43 /* : Int */;
long var44 /* : Int */;
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 27);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 36);
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
((void (*)(val*))(var13->class->vft[COLOR_kernel__Object__init]))(var13) /* init on <var13:Array[AModule]>*/;
}
var_nmodules = var13;
var_ = var_mmodules;
{
var14 = array__AbstractArrayRead__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = array__ArrayIterator__is_ok(var_15);
}
if (var16){
{
var17 = array__ArrayIterator__item(var_15);
}
var_mm = var17;
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var20 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 728);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = hash_collection__HashMap___91d_93d(var18, var_mm);
}
{
array__Array__add(var_nmodules, var21); /* Direct call array#Array#add on <var_nmodules:Array[AModule]>*/
}
{
array__ArrayIterator__next(var_15); /* Direct call array#ArrayIterator#next on <var_15:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_15) on <var_15:ArrayIterator[MModule]> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
phase__ToolContext__run_phases(var23, var_nmodules); /* Direct call phase#ToolContext#run_phases on <var23:ToolContext>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var28 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_only_metamodel (var26) on <var26:ToolContext> */
var31 = var26->attrs[COLOR_modelbuilder__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <var26:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 36);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline opts#Option#value (var29) on <var29:OptionBool> */
var34 = var29->attrs[COLOR_opts__Option___value].val; /* _value on <var29:OptionBool> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = ((struct instance_kernel__Bool*)var32)->value; /* autounbox from nullable Object to Bool */;
if (var35){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var38 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (varonce) {
var39 = varonce;
} else {
var40 = "*** ONLY METAMODEL";
var41 = 18;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce = var39;
}
var43 = 1;
{
toolcontext__ToolContext__info(var36, var39, var43); /* Direct call toolcontext#ToolContext#info on <var36:ToolContext>*/
}
var44 = 0;
{
{ /* Inline kernel#Object#exit (self,var44) on <self:ModelBuilder> */
exit(var44);
RET_LABEL45:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 132);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 300);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 300);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 300);
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
long var3 /* : Int for extern */;
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
val* var_ /* var : Sequence[String] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[String] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_a /* var a: String */;
val* var17 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable MModule */;
val* var27 /* : nullable MModule */;
long var30 /* : Int */;
long var32 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var44 /* : Int */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : Object */;
val* var54 /* : String */;
long var55 /* : Int */;
val* var56 /* : ToolContext */;
val* var58 /* : ToolContext */;
val* var59 /* : ToolContext */;
val* var61 /* : ToolContext */;
val* var62 /* : OptionBool */;
val* var64 /* : OptionBool */;
val* var65 /* : nullable Object */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
val* var69 /* : ToolContext */;
val* var71 /* : ToolContext */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
long var77 /* : Int */;
long var78 /* : Int */;
val* var80 /* : Array[nullable Object] */;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
((void (*)(val*))(var12->class->vft[COLOR_kernel__Object__init]))(var12) /* init on <var12:ArraySet[MModule]>*/;
}
var_mmodules = var12;
var_ = var_modules;
{
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Sequence[String]>*/;
}
var_14 = var13;
for(;;) {
{
var15 = ((short int (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:IndexedIterator[String]>*/;
}
if (var15){
{
var16 = ((val* (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__item]))(var_14) /* item on <var_14:IndexedIterator[String]>*/;
}
var_a = var16;
{
var17 = modelbuilder__ModelBuilder__load_module(self, var_a);
}
var_nmodule = var17;
var18 = NULL;
if (var_nmodule == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,var18) on <var_nmodule:nullable AModule> */
var_other = var18;
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var24 = var_nmodule == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
goto BREAK_label;
} else {
}
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var27 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 166);
show_backtrace(1);
}
{
array__ArraySet__add(var_mmodules, var25); /* Direct call array#ArraySet#add on <var_mmodules:ArraySet[MModule]>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__next]))(var_14) /* next on <var_14:IndexedIterator[String]>*/;
}
} else {
goto BREAK_label28;
}
}
BREAK_label28: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:IndexedIterator[String]> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline time#Object#get_time (self) on <self:ModelBuilder> */
var32 = kernel_Any_Any_get_time_0(self);
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_time1 = var30;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "*** END PARSE: ";
var39 = 15;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var43 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var44 = var_time1 - var_time0;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = " ***";
var48 = 4;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 3;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var37;
var53 = BOX_kernel__Int(var41); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var53;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
var55 = 2;
{
toolcontext__ToolContext__info(var33, var54, var55); /* Direct call toolcontext#ToolContext#info on <var33:ToolContext>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var58 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
toolcontext__ToolContext__check_errors(var56); /* Direct call toolcontext#ToolContext#check_errors on <var56:ToolContext>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var61 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_only_parse (var59) on <var59:ToolContext> */
var64 = var59->attrs[COLOR_modelbuilder__ToolContext___opt_only_parse].val; /* _opt_only_parse on <var59:ToolContext> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 39);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline opts#Option#value (var62) on <var62:OptionBool> */
var67 = var62->attrs[COLOR_opts__Option___value].val; /* _value on <var62:OptionBool> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var68 = ((struct instance_kernel__Bool*)var65)->value; /* autounbox from nullable Object to Bool */;
if (var68){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var71 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "*** ONLY PARSE...";
var75 = 17;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = 1;
{
toolcontext__ToolContext__info(var69, var73, var77); /* Direct call toolcontext#ToolContext#info on <var69:ToolContext>*/
}
var78 = 0;
{
{ /* Inline kernel#Object#exit (self,var78) on <self:ModelBuilder> */
exit(var78);
RET_LABEL79:(void)0;
}
}
} else {
}
{
var80 = array__Collection__to_a(var_mmodules);
}
var = var80;
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
val* var_ /* var : Array[MClass] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MClass] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var14 /* : POSetElement[MModule] */;
val* var16 /* : POSetElement[MModule] */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : MVisibility */;
val* var27 /* : MVisibility */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
val* var57 /* : null */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
var7 = array__Array___61d_61d(var_classes, var5);
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
var_ = var_classes;
{
var10 = array__AbstractArrayRead__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var_11);
}
if (var12){
{
var13 = array__ArrayIterator__item(var_11);
}
var_mclass = var13;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var16 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var19 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = poset__POSetElement___60d_61d(var14, var17);
}
var21 = !var20;
if (var21){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var24 = var_mclass->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:MClass> */
var27 = var_mclass->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var_mclass:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = mmodule__MModule__is_visible(var_mmodule, var22, var25);
}
var29 = !var28;
if (var29){
goto BREAK_label;
} else {
}
var30 = NULL;
if (var_res == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var30) on <var_res:nullable MClass> */
var_other = var30;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MClass(MClass)> */
var36 = var_res == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
var_res = var_mclass;
} else {
if (varonce) {
var37 = varonce;
} else {
var38 = "Ambigous class name \'";
var39 = 21;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "\'; conflict between ";
var44 = 20;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
var46 = model__MClass__full_name(var_mclass);
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = " and ";
var50 = 5;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
var52 = model__MClass__full_name(var_res);
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 6;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var55)->values[2] = (val*) var42;
((struct instance_array__NativeArray*)var55)->values[3] = (val*) var46;
((struct instance_array__NativeArray*)var55)->values[4] = (val*) var48;
((struct instance_array__NativeArray*)var55)->values[5] = (val*) var52;
{
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
}
{
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_anode, var56); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
var57 = NULL;
var = var57;
goto RET_LABEL;
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label58;
}
}
BREAK_label58: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[MClass]> */
RET_LABEL59:(void)0;
}
}
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
val* var_ /* var : Array[MProperty] */;
val* var22 /* : ArrayIterator[nullable Object] */;
val* var_23 /* var : ArrayIterator[MProperty] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MClassDef */;
val* var30 /* : MClassDef */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
val* var34 /* : MVisibility */;
val* var36 /* : MVisibility */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
short int var_42 /* var : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
val* var53 /* : MClassDef */;
val* var55 /* : MClassDef */;
val* var56 /* : MClass */;
val* var58 /* : MClass */;
val* var59 /* : MClass */;
val* var61 /* : MClass */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : null */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var_other72 /* var other: nullable Object */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
short int var_82 /* var : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
short int var_86 /* var : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var_90 /* var : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : MClassDef */;
val* var96 /* : MClassDef */;
val* var97 /* : MClassType */;
val* var99 /* : MClassType */;
val* var_restype /* var restype: MClassType */;
val* var100 /* : MClassDef */;
val* var102 /* : MClassDef */;
val* var103 /* : MClassType */;
val* var105 /* : MClassType */;
val* var_mproptype /* var mproptype: MClassType */;
val* var106 /* : null */;
short int var107 /* : Bool */;
val* var108 /* : null */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
val* var111 /* : Array[MProperty] */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
val* var116 /* : null */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var_123 /* var : Bool */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
short int var_127 /* var : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
val* var131 /* : MClassDef */;
val* var133 /* : MClassDef */;
val* var134 /* : MClassType */;
val* var136 /* : MClassType */;
val* var_restype137 /* var restype: MClassType */;
val* var138 /* : Array[MProperty] */;
val* var_ress2 /* var ress2: Array[MProperty] */;
val* var_139 /* var : Array[MProperty] */;
val* var140 /* : ArrayIterator[nullable Object] */;
val* var_141 /* var : ArrayIterator[MProperty] */;
short int var142 /* : Bool */;
val* var143 /* : nullable Object */;
val* var_mprop144 /* var mprop: MProperty */;
val* var145 /* : MClassDef */;
val* var147 /* : MClassDef */;
val* var148 /* : MClassType */;
val* var150 /* : MClassType */;
val* var_mproptype151 /* var mproptype: MClassType */;
val* var152 /* : null */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
short int var159 /* : Bool */;
short int var_160 /* var : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var167 /* : Bool */;
val* var168 /* : null */;
val* var169 /* : null */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
long var176 /* : Int */;
long var178 /* : Int */;
long var179 /* : Int */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
int cltype183;
int idtype184;
const char* var_class_name;
short int var185 /* : Bool */;
val* var186 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var_187 /* var : Array[MProperty] */;
val* var188 /* : ArrayIterator[nullable Object] */;
val* var_189 /* var : ArrayIterator[MProperty] */;
short int var190 /* : Bool */;
val* var191 /* : nullable Object */;
val* var_mprop192 /* var mprop: MProperty */;
val* var193 /* : String */;
static val* varonce;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : FlatString */;
val* var215 /* : String */;
val* var216 /* : Array[Object] */;
long var217 /* : Int */;
val* var218 /* : NativeArray[Object] */;
val* var219 /* : String */;
val* var220 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var222 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var_anode = p0;
var_mmodule = p1;
var_mtype = p2;
var_name = p3;
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
var7 = array__Array___61d_61d(var_props, var5);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 291);
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
var_ = var_props;
{
var22 = array__AbstractArrayRead__iterator(var_);
}
var_23 = var22;
for(;;) {
{
var24 = array__ArrayIterator__is_ok(var_23);
}
if (var24){
{
var25 = array__ArrayIterator__item(var_23);
}
var_mprop = var25;
{
var26 = model__MType__has_mproperty(var_mtype, var_mmodule, var_mprop);
}
var27 = !var26;
if (var27){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var30 = var_mprop->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var28) on <var28:MClassDef> */
var33 = var28->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var28:MClassDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var36 = var_mprop->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = mmodule__MModule__is_visible(var_mmodule, var31, var34);
}
var38 = !var37;
if (var38){
goto BREAK_label;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var41 = 0;
} else {
var41 = var_mprop->type->type_table[cltype] == idtype;
}
var_42 = var41;
if (var41){
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var45 = var_mprop->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var40 = var43;
} else {
var40 = var_42;
}
var_46 = var40;
if (var40){
/* <var_mtype:MType> isa MClassType */
cltype49 = type_model__MClassType.color;
idtype50 = type_model__MClassType.id;
if(cltype49 >= var_mtype->type->table_size) {
var48 = 0;
} else {
var48 = var_mtype->type->type_table[cltype49] == idtype50;
}
var51 = !var48;
var_52 = var51;
if (var51){
var47 = var_52;
} else {
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var55 = var_mprop->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var53) on <var53:MClassDef> */
var58 = var53->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var53:MClassDef> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var61 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var56,var59) on <var56:MClass> */
var_other = var59;
{
var66 = ((short int (*)(val*, val*))(var56->class->vft[COLOR_kernel__Object___61d_61d]))(var56, var_other) /* == on <var56:MClass>*/;
var65 = var66;
}
var67 = !var65;
var63 = var67;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
var47 = var62;
}
var39 = var47;
} else {
var39 = var_46;
}
if (var39){
goto BREAK_label;
} else {
}
var68 = NULL;
if (var_res == NULL) {
var69 = 1; /* is null */
} else {
var69 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var68) on <var_res:nullable MProperty> */
var_other72 = var68;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other72) on <var_res:nullable MProperty(MProperty)> */
var75 = var_res == var_other72;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var70 = var73;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
var_res = var_mprop;
goto BREAK_label;
} else {
}
/* <var_res:nullable MProperty(MProperty)> isa MMethod */
cltype80 = type_model__MMethod.color;
idtype81 = type_model__MMethod.id;
if(cltype80 >= var_res->type->table_size) {
var79 = 0;
} else {
var79 = var_res->type->type_table[cltype80] == idtype81;
}
var_82 = var79;
if (var79){
/* <var_mprop:MProperty> isa MMethod */
cltype84 = type_model__MMethod.color;
idtype85 = type_model__MMethod.id;
if(cltype84 >= var_mprop->type->table_size) {
var83 = 0;
} else {
var83 = var_mprop->type->type_table[cltype84] == idtype85;
}
var78 = var83;
} else {
var78 = var_82;
}
var_86 = var78;
if (var78){
{
{ /* Inline model#MMethod#is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var89 = var_res->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
var77 = var87;
} else {
var77 = var_86;
}
var_90 = var77;
if (var77){
{
{ /* Inline model#MMethod#is_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var93 = var_mprop->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_mprop:MProperty(MMethod)> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var76 = var91;
} else {
var76 = var_90;
}
if (var76){
{
{ /* Inline model#MProperty#intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var96 = var_res->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var94) on <var94:MClassDef> */
var99 = var94->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var94:MClassDef> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
var_restype = var97;
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var102 = var_mprop->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var100) on <var100:MClassDef> */
var105 = var100->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var100:MClassDef> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_mproptype = var103;
var106 = NULL;
{
var107 = model__MType__is_subtype(var_mproptype, var_mmodule, var106, var_restype);
}
if (var107){
var_res = var_mprop;
goto BREAK_label;
} else {
}
} else {
}
var108 = NULL;
if (var_ress == NULL) {
var109 = 1; /* is null */
} else {
var109 = 0; /* arg is null but recv is not */
}
if (0) {
var110 = array__Array___61d_61d(var_ress, var108);
var109 = var110;
}
if (var109){
var111 = NEW_array__Array(&type_array__Arraymodel__MProperty);
{
((void (*)(val*))(var111->class->vft[COLOR_kernel__Object__init]))(var111) /* init on <var111:Array[MProperty]>*/;
}
var_ress = var111;
{
array__Array__add(var_ress, var_res); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
} else {
}
{
array__Array__add(var_ress, var_mprop); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_23); /* Direct call array#ArrayIterator#next on <var_23:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label112;
}
}
BREAK_label112: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:ArrayIterator[MProperty]> */
RET_LABEL113:(void)0;
}
}
var116 = NULL;
if (var_ress == NULL) {
var117 = 0; /* is null */
} else {
var117 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ress,var116) on <var_ress:nullable Array[MProperty]> */
var_other = var116;
{
var121 = ((short int (*)(val*, val*))(var_ress->class->vft[COLOR_kernel__Object___61d_61d]))(var_ress, var_other) /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/;
var120 = var121;
}
var122 = !var120;
var118 = var122;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
var_123 = var117;
if (var117){
/* <var_res:nullable MProperty> isa MMethod */
cltype125 = type_model__MMethod.color;
idtype126 = type_model__MMethod.id;
if(var_res == NULL) {
var124 = 0;
} else {
if(cltype125 >= var_res->type->table_size) {
var124 = 0;
} else {
var124 = var_res->type->type_table[cltype125] == idtype126;
}
}
var115 = var124;
} else {
var115 = var_123;
}
var_127 = var115;
if (var115){
{
{ /* Inline model#MMethod#is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var130 = var_res->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
var114 = var128;
} else {
var114 = var_127;
}
if (var114){
{
{ /* Inline model#MProperty#intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var133 = var_res->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var131) on <var131:MClassDef> */
var136 = var131->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var131:MClassDef> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_restype137 = var134;
var138 = NEW_array__Array(&type_array__Arraymodel__MProperty);
{
((void (*)(val*))(var138->class->vft[COLOR_kernel__Object__init]))(var138) /* init on <var138:Array[MProperty]>*/;
}
var_ress2 = var138;
var_139 = var_ress;
{
var140 = array__AbstractArrayRead__iterator(var_139);
}
var_141 = var140;
for(;;) {
{
var142 = array__ArrayIterator__is_ok(var_141);
}
if (var142){
{
var143 = array__ArrayIterator__item(var_141);
}
var_mprop144 = var143;
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop144) on <var_mprop144:MProperty> */
var147 = var_mprop144->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop144:MProperty> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var145) on <var145:MClassDef> */
var150 = var145->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var145:MClassDef> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
var_mproptype151 = var148;
var152 = NULL;
{
var153 = model__MType__is_subtype(var_restype137, var_mmodule, var152, var_mproptype151);
}
var154 = !var153;
if (var154){
{
array__Array__add(var_ress2, var_mprop144); /* Direct call array#Array#add on <var_ress2:Array[MProperty]>*/
}
} else {
/* <var_mprop144:MProperty> isa MMethod */
cltype157 = type_model__MMethod.color;
idtype158 = type_model__MMethod.id;
if(cltype157 >= var_mprop144->type->table_size) {
var156 = 0;
} else {
var156 = var_mprop144->type->type_table[cltype157] == idtype158;
}
var159 = !var156;
var_160 = var159;
if (var159){
var155 = var_160;
} else {
{
{ /* Inline model#MMethod#is_init (var_mprop144) on <var_mprop144:MProperty(MMethod)> */
var163 = var_mprop144->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_mprop144:MProperty(MMethod)> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
var164 = !var161;
var155 = var164;
}
if (var155){
{
array__Array__add(var_ress2, var_mprop144); /* Direct call array#Array#add on <var_ress2:Array[MProperty]>*/
}
} else {
}
}
{
array__ArrayIterator__next(var_141); /* Direct call array#ArrayIterator#next on <var_141:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label165;
}
}
BREAK_label165: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_141) on <var_141:ArrayIterator[MProperty]> */
RET_LABEL166:(void)0;
}
}
{
var167 = array__AbstractArrayRead__is_empty(var_ress2);
}
if (var167){
var168 = NULL;
var_ress = var168;
} else {
var_ress = var_ress2;
{
array__Array__add(var_ress, var_res); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
}
} else {
}
var169 = NULL;
if (var_ress == NULL) {
var170 = 0; /* is null */
} else {
var170 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ress,var169) on <var_ress:nullable Array[MProperty]> */
var_other = var169;
{
var174 = ((short int (*)(val*, val*))(var_ress->class->vft[COLOR_kernel__Object___61d_61d]))(var_ress, var_other) /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/;
var173 = var174;
}
var175 = !var173;
var171 = var175;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
var170 = var171;
}
if (var170){
{
{ /* Inline array#AbstractArrayRead#length (var_ress) on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var178 = var_ress->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
var179 = 1;
{
{ /* Inline kernel#Int#> (var176,var179) on <var176:Int> */
/* Covariant cast for argument 0 (i) <var179:Int> isa OTHER */
/* <var179:Int> isa OTHER */
var182 = 1; /* easy <var179:Int> isa OTHER*/
if (unlikely(!var182)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var185 = var176 > var179;
var180 = var185;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
}
if (unlikely(!var180)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 281);
show_backtrace(1);
}
var186 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var186->class->vft[COLOR_kernel__Object__init]))(var186) /* init on <var186:Array[String]>*/;
}
var_s = var186;
var_187 = var_ress;
{
var188 = array__AbstractArrayRead__iterator(var_187);
}
var_189 = var188;
for(;;) {
{
var190 = array__ArrayIterator__is_ok(var_189);
}
if (var190){
{
var191 = array__ArrayIterator__item(var_189);
}
var_mprop192 = var191;
{
var193 = model__MProperty__full_name(var_mprop192);
}
{
array__Array__add(var_s, var193); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
{
array__ArrayIterator__next(var_189); /* Direct call array#ArrayIterator#next on <var_189:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label194;
}
}
BREAK_label194: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_189) on <var_189:ArrayIterator[MProperty]> */
RET_LABEL195:(void)0;
}
}
if (varonce) {
var196 = varonce;
} else {
var197 = "Ambigous property name \'";
var198 = 24;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce = var196;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = "\' for ";
var203 = 6;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = "; conflict between ";
var208 = 19;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
if (varonce210) {
var211 = varonce210;
} else {
var212 = " and ";
var213 = 5;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
{
var215 = string__Collection__join(var_s, var211);
}
var216 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var216 = array_instance Array[Object] */
var217 = 6;
var218 = NEW_array__NativeArray(var217, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var218)->values[0] = (val*) var196;
((struct instance_array__NativeArray*)var218)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var218)->values[2] = (val*) var201;
((struct instance_array__NativeArray*)var218)->values[3] = (val*) var_mtype;
((struct instance_array__NativeArray*)var218)->values[4] = (val*) var206;
((struct instance_array__NativeArray*)var218)->values[5] = (val*) var215;
{
((void (*)(val*, val*, long))(var216->class->vft[COLOR_array__Array__with_native]))(var216, var218, var217) /* with_native on <var216:Array[Object]>*/;
}
}
{
var219 = ((val* (*)(val*))(var216->class->vft[COLOR_string__Object__to_s]))(var216) /* to_s on <var216:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_anode, var219); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var222 = self->attrs[COLOR_modelbuilder__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 291);
show_backtrace(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
{
more_collections__HashMap3___91d_93d_61d(var220, var_mmodule, var_mtype, var_name, var_res); /* Direct call more_collections#HashMap3#[]= on <var220:HashMap3[MModule, MType, String, nullable MProperty]>*/
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 291);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 291);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 300);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 300);
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
if (var2){
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 322);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 330);
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
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline modelbuilder#ModelBuilder#paths (self) on <self:ModelBuilder> */
var78 = self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 300);
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
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 60);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 343);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#filepath (var89) on <var89:nullable MGroup> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 83);
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
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 56);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 773);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 376);
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
val* var_ /* var : Collection[String] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_try_file /* var try_file: String */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : String */;
val* var_abs_candidate /* var abs_candidate: String */;
val* var30 /* : String */;
val* var_abs_try_file /* var abs_try_file: String */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : ToolContext */;
val* var39 /* : ToolContext */;
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
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : String */;
val* var79 /* : String */;
short int var80 /* : Bool */;
val* var81 /* : null */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : String */;
val* var_abs_candidate91 /* var abs_candidate: String */;
val* var92 /* : String */;
val* var_abs_try_file93 /* var abs_try_file: String */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var100 /* : ToolContext */;
val* var102 /* : ToolContext */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : String */;
val* var123 /* : null */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var126 /* : null */;
val* var127 /* : nullable ModulePath */;
var_location = p0;
var_name = p1;
var_lookpaths = p2;
var1 = NULL;
var_candidate = var1;
var_ = var_lookpaths;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[String]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[String]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[String]>*/;
}
var_dirname = var5;
if (varonce) {
var6 = varonce;
} else {
var7 = "/";
var8 = 1;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
var10 = string__FlatString___43d(var_dirname, var6);
}
{
var11 = string__FlatString___43d(var10, var_name);
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = ".nit";
var15 = 4;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
{
var17 = string__FlatString___43d(var11, var13);
}
{
var18 = file__String__simplify_path(var17);
}
var_try_file = var18;
{
var19 = file__String__file_exists(var_try_file);
}
if (var19){
var20 = NULL;
if (var_candidate == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = string__FlatString___61d_61d(var_candidate, var20);
var21 = var22;
}
if (var21){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var27 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_candidate, var_other) /* == on <var_candidate:nullable String(String)>*/;
var26 = var27;
}
var28 = !var26;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
var29 = modelbuilder__ModelBuilder__module_absolute_path(self, var_candidate);
}
var_abs_candidate = var29;
{
var30 = modelbuilder__ModelBuilder__module_absolute_path(self, var_try_file);
}
var_abs_try_file = var30;
{
{ /* Inline kernel#Object#!= (var_abs_candidate,var_abs_try_file) on <var_abs_candidate:String> */
var_other = var_abs_try_file;
{
var35 = ((short int (*)(val*, val*))(var_abs_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_abs_candidate, var_other) /* == on <var_abs_candidate:String>*/;
var34 = var35;
}
var36 = !var34;
var32 = var36;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var39 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Error: conflicting module file for ";
var43 = 35;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ": ";
var48 = 2;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = " ";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 6;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var46;
((struct instance_array__NativeArray*)var57)->values[3] = (val*) var_candidate;
((struct instance_array__NativeArray*)var57)->values[4] = (val*) var51;
((struct instance_array__NativeArray*)var57)->values[5] = (val*) var_try_file;
{
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var37, var_location, var58); /* Direct call toolcontext#ToolContext#error on <var37:ToolContext>*/
}
} else {
}
} else {
}
}
} else {
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "/";
var62 = 1;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
var64 = string__FlatString___43d(var_dirname, var60);
}
{
var65 = string__FlatString___43d(var64, var_name);
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "/";
var69 = 1;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = string__FlatString___43d(var65, var67);
}
{
var72 = string__FlatString___43d(var71, var_name);
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = ".nit";
var76 = 4;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
var78 = string__FlatString___43d(var72, var74);
}
{
var79 = file__String__simplify_path(var78);
}
var_try_file = var79;
{
var80 = file__String__file_exists(var_try_file);
}
if (var80){
var81 = NULL;
if (var_candidate == NULL) {
var82 = 1; /* is null */
} else {
var82 = 0; /* arg is null but recv is not */
}
if (0) {
var83 = string__FlatString___61d_61d(var_candidate, var81);
var82 = var83;
}
if (var82){
var_candidate = var_try_file;
} else {
{
{ /* Inline kernel#Object#!= (var_candidate,var_try_file) on <var_candidate:nullable String(String)> */
var_other = var_try_file;
{
var88 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_candidate, var_other) /* == on <var_candidate:nullable String(String)>*/;
var87 = var88;
}
var89 = !var87;
var85 = var89;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
{
var90 = modelbuilder__ModelBuilder__module_absolute_path(self, var_candidate);
}
var_abs_candidate91 = var90;
{
var92 = modelbuilder__ModelBuilder__module_absolute_path(self, var_try_file);
}
var_abs_try_file93 = var92;
{
{ /* Inline kernel#Object#!= (var_abs_candidate91,var_abs_try_file93) on <var_abs_candidate91:String> */
var_other = var_abs_try_file93;
{
var98 = ((short int (*)(val*, val*))(var_abs_candidate91->class->vft[COLOR_kernel__Object___61d_61d]))(var_abs_candidate91, var_other) /* == on <var_abs_candidate91:String>*/;
var97 = var98;
}
var99 = !var97;
var95 = var99;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
var94 = var95;
}
if (var94){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var102 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "Error: conflicting module file for ";
var106 = 35;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = ": ";
var111 = 2;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = " ";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 6;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var109;
((struct instance_array__NativeArray*)var120)->values[3] = (val*) var_candidate;
((struct instance_array__NativeArray*)var120)->values[4] = (val*) var114;
((struct instance_array__NativeArray*)var120)->values[5] = (val*) var_try_file;
{
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var121 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var100, var_location, var121); /* Direct call toolcontext#ToolContext#error on <var100:ToolContext>*/
}
} else {
}
} else {
}
}
} else {
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[String]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[String]> */
RET_LABEL122:(void)0;
}
}
var123 = NULL;
if (var_candidate == NULL) {
var124 = 1; /* is null */
} else {
var124 = 0; /* arg is null but recv is not */
}
if (0) {
var125 = string__FlatString___61d_61d(var_candidate, var123);
var124 = var125;
}
if (var124){
var126 = NULL;
var = var126;
goto RET_LABEL;
} else {
}
{
var127 = modelbuilder__ModelBuilder__identify_file(self, var_candidate);
}
var = var127;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 416);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 416);
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
val* var_res129 /* var res: ModulePath */;
val* var130 /* : Array[ModulePath] */;
val* var132 /* : Array[ModulePath] */;
val* var133 /* : HashMap[String, nullable ModulePath] */;
val* var135 /* : HashMap[String, nullable ModulePath] */;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 300);
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
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 56);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 434);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 416);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 416);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
((void (*)(val*, val*))(var128->class->vft[COLOR_modelbuilder__ModulePath__name_61d]))(var128, var_pn) /* name= on <var128:ModulePath>*/;
}
{
((void (*)(val*, val*))(var128->class->vft[COLOR_modelbuilder__ModulePath__filepath_61d]))(var128, var_path) /* filepath= on <var128:ModulePath>*/;
}
{
((void (*)(val*, val*))(var128->class->vft[COLOR_modelbuilder__ModulePath__mgroup_61d]))(var128, var_mgroup93) /* mgroup= on <var128:ModulePath>*/;
}
{
((void (*)(val*))(var128->class->vft[COLOR_kernel__Object__init]))(var128) /* init on <var128:ModulePath>*/;
}
var_res129 = var128;
{
{ /* Inline modelbuilder#MGroup#module_paths (var_mgroup93) on <var_mgroup93:nullable MGroup(MGroup)> */
var132 = var_mgroup93->attrs[COLOR_modelbuilder__MGroup___module_paths].val; /* _module_paths on <var_mgroup93:nullable MGroup(MGroup)> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _module_paths");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 786);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
array__Array__add(var130, var_res129); /* Direct call array#Array#add on <var130:Array[ModulePath]>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#identified_files (self) on <self:ModelBuilder> */
var135 = self->attrs[COLOR_modelbuilder__ModelBuilder___identified_files].val; /* _identified_files on <self:ModelBuilder> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_files");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 416);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var133, var_rp, var_res129); /* Direct call hash_collection#HashMap#[]= on <var133:HashMap[String, nullable ModulePath]>*/
}
var = var_res129;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 471);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 471);
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
val* var119 /* : IFStream */;
val* var_s /* var s: IFStream */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : Array[String] */;
val* var124 /* : Array[String] */;
val* var125 /* : String */;
val* var129 /* : HashMap[String, nullable MGroup] */;
val* var131 /* : HashMap[String, nullable MGroup] */;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 471);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 471);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
PRINT_ERROR(" (%s:%d)\n", "model/mproject.nit", 60);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
((void (*)(val*))(var118->class->vft[COLOR_kernel__Object__init]))(var118) /* init on <var118:MDoc>*/;
}
var_mdoc = var118;
var119 = NEW_file__IFStream(&type_file__IFStream);
{
file__IFStream__open(var119, var_readme); /* Direct call file#IFStream#open on <var119:IFStream>*/
}
var_s = var119;
for(;;) {
{
var120 = stream__BufferedIStream__eof(var_s);
}
var121 = !var120;
if (var121){
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:MDoc> */
var124 = var_mdoc->attrs[COLOR_mdoc__MDoc___content].val; /* _content on <var_mdoc:MDoc> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "model/mdoc.nit", 22);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
var125 = stream__IStream__read_line(var_s);
}
{
array__Array__add(var122, var125); /* Direct call array#Array#add on <var122:Array[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mgroup,var_mdoc) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL126:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mgroup) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_mdoc__MDoc___original_mentity].val = var_mgroup; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL127:(void)0;
}
}
} else {
}
{
{ /* Inline mproject#MGroup#filepath= (var_mgroup,var_dirpath) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_mproject__MGroup___filepath].val = var_dirpath; /* _filepath on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL128:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var131 = self->attrs[COLOR_modelbuilder__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 471);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var129, var_rdp, var_mgroup); /* Direct call hash_collection#HashMap#[]= on <var129:HashMap[String, nullable MGroup]>*/
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
val* var70 /* : nullable AModule */;
val* var72 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
val* var73 /* : null */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var_other77 /* var other: nullable Object */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : EOF */;
val* var83 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var84 /* : Bool */;
int cltype;
int idtype;
val* var85 /* : String */;
val* var87 /* : String */;
val* var88 /* : null */;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:Start> */
var72 = var_tree->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <var_tree:Start> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_nmodule = var70;
var73 = NULL;
if (var_nmodule == NULL) {
var74 = 1; /* is null */
} else {
var74 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,var73) on <var_nmodule:nullable AModule> */
var_other77 = var73;
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other77) on <var_nmodule:nullable AModule(AModule)> */
var80 = var_nmodule == var_other77;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:Start> */
var83 = var_tree->attrs[COLOR_parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:Start> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2073);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_neof = var81;
/* <var_neof:EOF> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_neof->type->table_size) {
var84 = 0;
} else {
var84 = var_neof->type->type_table[cltype] == idtype;
}
if (unlikely(!var84)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 562);
show_backtrace(1);
}
{
{ /* Inline lexer_work#AError#message (var_neof) on <var_neof:EOF(AError)> */
var87 = var_neof->attrs[COLOR_lexer_work__AError___message].val; /* _message on <var_neof:EOF(AError)> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", "parser/lexer_work.nit", 50);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
modelbuilder__ModelBuilder__error(self, var_neof, var85); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
var88 = NULL;
var = var88;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 728);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 773);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 776);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 769);
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
val* var3 /* : nullable AModuledecl */;
val* var_decl /* var decl: nullable AModuledecl */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : AModuleName */;
val* var13 /* : AModuleName */;
val* var14 /* : TId */;
val* var16 /* : TId */;
val* var17 /* : String */;
val* var_decl_name /* var decl_name: String */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other21 /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : AModuleName */;
val* var27 /* : AModuleName */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
val* var41 /* : MModule */;
val* var42 /* : Model */;
val* var44 /* : Model */;
val* var45 /* : Location */;
val* var47 /* : Location */;
val* var_mmodule /* var mmodule: MModule */;
val* var49 /* : Array[AModule] */;
val* var51 /* : Array[AModule] */;
val* var52 /* : HashMap[MModule, AModule] */;
val* var54 /* : HashMap[MModule, AModule] */;
val* var55 /* : null */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : nullable ADoc */;
val* var64 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
var_mgroup = p0;
var_mod_name = p1;
var_nmodule = p2;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_nmodule) on <var_nmodule:AModule> */
var3 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_nmodule:AModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_decl = var1;
var4 = NULL;
if (var_decl == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_decl,var4) on <var_decl:nullable AModuledecl> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_decl,var_other) on <var_decl:nullable AModuledecl(AModuledecl)> */
var10 = var_decl == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
} else {
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var13 = var_decl->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 869);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var11) on <var11:AModuleName> */
var16 = var11->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <var11:AModuleName> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1990);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = lexer_work__Token__text(var14);
}
var_decl_name = var17;
{
{ /* Inline kernel#Object#!= (var_decl_name,var_mod_name) on <var_decl_name:String> */
var_other21 = var_mod_name;
{
var23 = ((short int (*)(val*, val*))(var_decl_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_decl_name, var_other21) /* == on <var_decl_name:String>*/;
var22 = var23;
}
var24 = !var22;
var19 = var24;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var27 = var_decl->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 869);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce) {
var28 = varonce;
} else {
var29 = "Error: module name missmatch; declared ";
var30 = 39;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = " file named ";
var35 = 12;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 4;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_decl_name;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var_mod_name;
{
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var25, var40); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
}
var41 = NEW_mmodule__MModule(&type_mmodule__MModule);
{
{ /* Inline modelbuilder#ModelBuilder#model (self) on <self:ModelBuilder> */
var44 = self->attrs[COLOR_modelbuilder__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 103);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var47 = var_nmodule->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
mmodule__MModule__init(var41, var42, var_mgroup, var_mod_name, var45); /* Direct call mmodule#MModule#init on <var41:MModule>*/
}
var_mmodule = var41;
{
{ /* Inline modelbuilder#AModule#mmodule= (var_nmodule,var_mmodule) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val = var_mmodule; /* _mmodule on <var_nmodule:AModule> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#nmodules (self) on <self:ModelBuilder> */
var51 = self->attrs[COLOR_modelbuilder__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 725);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
array__Array__add(var49, var_nmodule); /* Direct call array#Array#add on <var49:Array[AModule]>*/
}
{
{ /* Inline modelbuilder#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var54 = self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 728);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var52, var_mmodule, var_nmodule); /* Direct call hash_collection#HashMap#[]= on <var52:HashMap[MModule, AModule]>*/
}
var55 = NULL;
if (var_decl == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,var55) on <var_decl:nullable AModuledecl> */
var_other21 = var55;
{
var60 = ((short int (*)(val*, val*))(var_decl->class->vft[COLOR_kernel__Object___61d_61d]))(var_decl, var_other21) /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/;
var59 = var60;
}
var61 = !var59;
var57 = var61;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline parser_nodes#AModuledecl#n_doc (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var64 = var_decl->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val; /* _n_doc on <var_decl:nullable AModuledecl(AModuledecl)> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_ndoc = var62;
var65 = NULL;
if (var_ndoc == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var65) on <var_ndoc:nullable ADoc> */
var_other21 = var65;
{
var70 = ((short int (*)(val*, val*))(var_ndoc->class->vft[COLOR_kernel__Object___61d_61d]))(var_ndoc, var_other21) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
var69 = var70;
}
var71 = !var69;
var67 = var71;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
{
var72 = modelbuilder__ADoc__to_mdoc(var_ndoc);
}
var_mdoc = var72;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mmodule,var_mdoc) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mmodule:MModule> */
RET_LABEL73:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mmodule) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_mdoc__MDoc___original_mentity].val = var_mmodule; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL74:(void)0;
}
}
} else {
if (varonce75) {
var76 = varonce75;
} else {
var77 = "missing-doc";
var78 = 11;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "Documentation warning: Undocumented module `";
var83 = 44;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "`";
var88 = 1;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 3;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var92)->values[2] = (val*) var86;
{
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val*))(var90->class->vft[COLOR_string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__advice(self, var_decl, var76, var93); /* Direct call modelbuilder#ModelBuilder#advice on <self:ModelBuilder>*/
}
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
val* var_ /* var : ANodes[AImport] */;
val* var13 /* : Iterator[ANode] */;
val* var_14 /* var : Iterator[AImport] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_aimport /* var aimport: AImport */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
short int var19 /* : Bool */;
val* var20 /* : nullable MGroup */;
val* var22 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var23 /* : AModuleName */;
val* var25 /* : AModuleName */;
val* var26 /* : nullable TQuad */;
val* var28 /* : nullable TQuad */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : null */;
val* var37 /* : AModuleName */;
val* var39 /* : AModuleName */;
val* var40 /* : ANodes[TId] */;
val* var42 /* : ANodes[TId] */;
val* var_43 /* var : ANodes[TId] */;
val* var44 /* : Iterator[ANode] */;
val* var_45 /* var : Iterator[TId] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_grp /* var grp: TId */;
val* var48 /* : String */;
val* var49 /* : nullable ModulePath */;
val* var_path /* var path: nullable ModulePath */;
val* var50 /* : null */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_other54 /* var other: nullable Object */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : MGroup */;
val* var60 /* : MGroup */;
val* var63 /* : AModuleName */;
val* var65 /* : AModuleName */;
val* var66 /* : TId */;
val* var68 /* : TId */;
val* var69 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var70 /* : AModuleName */;
val* var72 /* : AModuleName */;
val* var73 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
val* var74 /* : null */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
val* var82 /* : AVisibility */;
val* var84 /* : AVisibility */;
val* var85 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var86 /* : MVisibility */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : AVisibility */;
val* var95 /* : AVisibility */;
static val* varonce;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : AModuleName */;
val* var108 /* : AModuleName */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : String */;
val* var123 /* : POSetElement[MModule] */;
val* var125 /* : POSetElement[MModule] */;
short int var126 /* : Bool */;
val* var127 /* : AModuleName */;
val* var129 /* : AModuleName */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
val* var145 /* : Array[Object] */;
long var146 /* : Int */;
val* var147 /* : NativeArray[Object] */;
val* var148 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
val* var_mod_name156 /* var mod_name: String */;
val* var157 /* : null */;
val* var158 /* : nullable MModule */;
val* var_sup159 /* var sup: nullable MModule */;
val* var160 /* : null */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
val* var167 /* : MVisibility */;
val* var168 /* : ToolContext */;
val* var170 /* : ToolContext */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : FlatString */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
val* var181 /* : String */;
val* var182 /* : Array[Object] */;
long var183 /* : Int */;
val* var184 /* : NativeArray[Object] */;
val* var185 /* : String */;
long var186 /* : Int */;
val* var187 /* : POSetElement[MModule] */;
val* var189 /* : POSetElement[MModule] */;
val* var190 /* : Collection[Object] */;
val* var_directs /* var directs: Collection[MModule] */;
val* var191 /* : ANodes[AImport] */;
val* var193 /* : ANodes[AImport] */;
val* var_194 /* var : ANodes[AImport] */;
val* var195 /* : Iterator[ANode] */;
val* var_196 /* var : Iterator[AImport] */;
short int var197 /* : Bool */;
val* var198 /* : nullable Object */;
val* var_nim /* var nim: AImport */;
short int var199 /* : Bool */;
int cltype200;
int idtype201;
short int var202 /* : Bool */;
val* var204 /* : nullable MModule */;
val* var206 /* : nullable MModule */;
val* var_im /* var im: nullable MModule */;
val* var207 /* : null */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 667);
show_backtrace(1);
}
var_mmodule = var5;
var8 = 1;
var_stdimport = var8;
var9 = NEW_array__Array(&type_array__Arraymmodule__MModule);
{
((void (*)(val*))(var9->class->vft[COLOR_kernel__Object__init]))(var9) /* init on <var9:Array[MModule]>*/;
}
var_imported_modules = var9;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var12 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 857);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = parser_nodes__ANodes__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:Iterator[AImport]>*/;
}
if (var15){
{
var16 = ((val* (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__item]))(var_14) /* item on <var_14:Iterator[AImport]>*/;
}
var_aimport = var16;
var17 = 0;
var_stdimport = var17;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_parser_nodes__AStdImport.color;
idtype = type_parser_nodes__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var18 = 0;
} else {
var18 = var_aimport->type->type_table[cltype] == idtype;
}
var19 = !var18;
if (var19){
goto BREAK_label;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var22 = var_mmodule->attrs[COLOR_mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mgroup = var20;
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var25 = var_aimport->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 882);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_quad (var23) on <var23:AModuleName> */
var28 = var23->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <var23:AModuleName> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = NULL;
if (var26 == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var26,var29) on <var26:nullable TQuad> */
var_other = var29;
{
var34 = ((short int (*)(val*, val*))(var26->class->vft[COLOR_kernel__Object___61d_61d]))(var26, var_other) /* == on <var26:nullable TQuad(TQuad)>*/;
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
var36 = NULL;
var_mgroup = var36;
} else {
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var39 = var_aimport->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 882);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_path (var37) on <var37:AModuleName> */
var42 = var37->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <var37:AModuleName> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1989);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
{
var44 = parser_nodes__ANodes__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = ((short int (*)(val*))(var_45->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_45) /* is_ok on <var_45:Iterator[TId]>*/;
}
if (var46){
{
var47 = ((val* (*)(val*))(var_45->class->vft[COLOR_abstract_collection__Iterator__item]))(var_45) /* item on <var_45:Iterator[TId]>*/;
}
var_grp = var47;
{
var48 = lexer_work__Token__text(var_grp);
}
{
var49 = modelbuilder__ModelBuilder__search_mmodule_by_name(self, var_grp, var_mgroup, var48);
}
var_path = var49;
var50 = NULL;
if (var_path == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_path,var50) on <var_path:nullable ModulePath> */
var_other54 = var50;
{
{ /* Inline kernel#Object#is_same_instance (var_path,var_other54) on <var_path:nullable ModulePath(ModulePath)> */
var57 = var_path == var_other54;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModulePath#mgroup (var_path) on <var_path:nullable ModulePath(ModulePath)> */
var60 = var_path->attrs[COLOR_modelbuilder__ModulePath___mgroup].val; /* _mgroup on <var_path:nullable ModulePath(ModulePath)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 776);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var_mgroup = var58;
{
((void (*)(val*))(var_45->class->vft[COLOR_abstract_collection__Iterator__next]))(var_45) /* next on <var_45:Iterator[TId]>*/;
}
} else {
goto BREAK_label61;
}
}
BREAK_label61: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_45) on <var_45:Iterator[TId]> */
RET_LABEL62:(void)0;
}
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var65 = var_aimport->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 882);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var63) on <var63:AModuleName> */
var68 = var63->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <var63:AModuleName> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1990);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = lexer_work__Token__text(var66);
}
var_mod_name = var69;
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var72 = var_aimport->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 882);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = modelbuilder__ModelBuilder__get_mmodule_by_name(self, var70, var_mgroup, var_mod_name);
}
var_sup = var73;
var74 = NULL;
if (var_sup == NULL) {
var75 = 1; /* is null */
} else {
var75 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,var74) on <var_sup:nullable MModule> */
var_other54 = var74;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other54) on <var_sup:nullable MModule(MModule)> */
var80 = var_sup == var_other54;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
goto BREAK_label;
} else {
}
{
{ /* Inline modelbuilder#AStdImport#mmodule= (var_aimport,var_sup) on <var_aimport:AImport(AStdImport)> */
var_aimport->attrs[COLOR_modelbuilder__AStdImport___mmodule].val = var_sup; /* _mmodule on <var_aimport:AImport(AStdImport)> */
RET_LABEL81:(void)0;
}
}
{
array__Array__add(var_imported_modules, var_sup); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
{ /* Inline parser_nodes#AStdImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var84 = var_aimport->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 880);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = ((val* (*)(val*))(var82->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var82) /* mvisibility on <var82:AVisibility>*/;
}
var_mvisibility = var85;
{
var86 = model_base__Object__protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var86) on <var_mvisibility:MVisibility> */
var_other54 = var86;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other54) on <var_mvisibility:MVisibility> */
var92 = var_mvisibility == var_other54;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
if (var87){
{
{ /* Inline parser_nodes#AStdImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var95 = var_aimport->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 880);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (varonce) {
var96 = varonce;
} else {
var97 = "Error: only properties can be protected.";
var98 = 40;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce = var96;
}
{
modelbuilder__ModelBuilder__error(self, var93, var96); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_sup,var_mmodule) on <var_sup:nullable MModule(MModule)> */
var_other54 = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other54) on <var_sup:nullable MModule(MModule)> */
var105 = var_sup == var_other54;
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
var100 = var101;
}
if (var100){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var108 = var_aimport->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 882);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = "Error: Dependency loop in module ";
var112 = 33;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = ".";
var117 = 1;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 3;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var110;
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var121)->values[2] = (val*) var115;
{
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
}
{
var122 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var106, var122); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_sup) on <var_sup:nullable MModule(MModule)> */
var125 = var_sup->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_sup:nullable MModule(MModule)> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = poset__POSetElement___60d(var123, var_mmodule);
}
if (var126){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var129 = var_aimport->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 882);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "Error: Dependency loop between modules ";
var133 = 39;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = " and ";
var138 = 5;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = ".";
var143 = 1;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
var145 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var145 = array_instance Array[Object] */
var146 = 5;
var147 = NEW_array__NativeArray(var146, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var147)->values[0] = (val*) var131;
((struct instance_array__NativeArray*)var147)->values[1] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var147)->values[2] = (val*) var136;
((struct instance_array__NativeArray*)var147)->values[3] = (val*) var_sup;
((struct instance_array__NativeArray*)var147)->values[4] = (val*) var141;
{
((void (*)(val*, val*, long))(var145->class->vft[COLOR_array__Array__with_native]))(var145, var147, var146) /* with_native on <var145:Array[Object]>*/;
}
}
{
var148 = ((val* (*)(val*))(var145->class->vft[COLOR_string__Object__to_s]))(var145) /* to_s on <var145:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var127, var148); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
mmodule__MModule__set_visibility_for(var_mmodule, var_sup, var_mvisibility); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__next]))(var_14) /* next on <var_14:Iterator[AImport]>*/;
}
} else {
goto BREAK_label149;
}
}
BREAK_label149: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:Iterator[AImport]> */
RET_LABEL150:(void)0;
}
}
if (var_stdimport){
if (varonce151) {
var152 = varonce151;
} else {
var153 = "standard";
var154 = 8;
var155 = string__NativeString__to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
var_mod_name156 = var152;
var157 = NULL;
{
var158 = modelbuilder__ModelBuilder__get_mmodule_by_name(self, var_nmodule, var157, var_mod_name156);
}
var_sup159 = var158;
var160 = NULL;
if (var_sup159 == NULL) {
var161 = 0; /* is null */
} else {
var161 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_sup159,var160) on <var_sup159:nullable MModule> */
var_other = var160;
{
var165 = ((short int (*)(val*, val*))(var_sup159->class->vft[COLOR_kernel__Object___61d_61d]))(var_sup159, var_other) /* == on <var_sup159:nullable MModule(MModule)>*/;
var164 = var165;
}
var166 = !var164;
var162 = var166;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
var161 = var162;
}
if (var161){
{
array__Array__add(var_imported_modules, var_sup159); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
var167 = model_base__Object__public_visibility(self);
}
{
mmodule__MModule__set_visibility_for(var_mmodule, var_sup159, var167); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var170 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = " imports ";
var174 = 9;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
if (varonce176) {
var177 = varonce176;
} else {
var178 = ", ";
var179 = 2;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
{
var181 = string__Collection__join(var_imported_modules, var177);
}
var182 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var182 = array_instance Array[Object] */
var183 = 3;
var184 = NEW_array__NativeArray(var183, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var184)->values[0] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var184)->values[1] = (val*) var172;
((struct instance_array__NativeArray*)var184)->values[2] = (val*) var181;
{
((void (*)(val*, val*, long))(var182->class->vft[COLOR_array__Array__with_native]))(var182, var184, var183) /* with_native on <var182:Array[Object]>*/;
}
}
{
var185 = ((val* (*)(val*))(var182->class->vft[COLOR_string__Object__to_s]))(var182) /* to_s on <var182:Array[Object]>*/;
}
var186 = 3;
{
toolcontext__ToolContext__info(var168, var185, var186); /* Direct call toolcontext#ToolContext#info on <var168:ToolContext>*/
}
{
mmodule__MModule__set_imported_mmodules(var_mmodule, var_imported_modules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mmodule:MModule>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var189 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
var190 = poset__POSetElement__direct_greaters(var187);
}
var_directs = var190;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var193 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 857);
show_backtrace(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
var_194 = var191;
{
var195 = parser_nodes__ANodes__iterator(var_194);
}
var_196 = var195;
for(;;) {
{
var197 = ((short int (*)(val*))(var_196->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_196) /* is_ok on <var_196:Iterator[AImport]>*/;
}
if (var197){
{
var198 = ((val* (*)(val*))(var_196->class->vft[COLOR_abstract_collection__Iterator__item]))(var_196) /* item on <var_196:Iterator[AImport]>*/;
}
var_nim = var198;
/* <var_nim:AImport> isa AStdImport */
cltype200 = type_parser_nodes__AStdImport.color;
idtype201 = type_parser_nodes__AStdImport.id;
if(cltype200 >= var_nim->type->table_size) {
var199 = 0;
} else {
var199 = var_nim->type->type_table[cltype200] == idtype201;
}
var202 = !var199;
if (var202){
goto BREAK_label203;
} else {
}
{
{ /* Inline modelbuilder#AStdImport#mmodule (var_nim) on <var_nim:AImport(AStdImport)> */
var206 = var_nim->attrs[COLOR_modelbuilder__AStdImport___mmodule].val; /* _mmodule on <var_nim:AImport(AStdImport)> */
var204 = var206;
RET_LABEL205:(void)0;
}
}
var_im = var204;
var207 = NULL;
if (var_im == NULL) {
var208 = 1; /* is null */
} else {
var208 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_im,var207) on <var_im:nullable MModule> */
var_other54 = var207;
{
{ /* Inline kernel#Object#is_same_instance (var_im,var_other54) on <var_im:nullable MModule(MModule)> */
var213 = var_im == var_other54;
var211 = var213;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
}
var209 = var211;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
var208 = var209;
}
if (var208){
goto BREAK_label203;
} else {
}
{
var214 = ((short int (*)(val*, val*))(var_directs->class->vft[COLOR_abstract_collection__Collection__has]))(var_directs, var_im) /* has on <var_directs:Collection[MModule]>*/;
}
if (var214){
goto BREAK_label203;
} else {
}
BREAK_label203: (void)0;
{
((void (*)(val*))(var_196->class->vft[COLOR_abstract_collection__Iterator__next]))(var_196) /* next on <var_196:Iterator[AImport]>*/;
}
} else {
goto BREAK_label215;
}
}
BREAK_label215: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_196) on <var_196:Iterator[AImport]> */
RET_LABEL216:(void)0;
}
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 725);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 725);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 728);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 728);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
/* method modelbuilder#ModelBuilder#warning for (self: ModelBuilder, ANode, String, String) */
void modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Location */;
var_n = p0;
var_tag = p1;
var_text = p2;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
toolcontext__ToolContext__warning(var, var3, var_tag, var_text); /* Direct call toolcontext#ToolContext#warning on <var:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#warning for (self: Object, ANode, String, String) */
void VIRTUAL_modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1, val* p2) {
modelbuilder__ModelBuilder__warning(self, p0, p1, p2); /* Direct call modelbuilder#ModelBuilder#warning on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#advice for (self: ModelBuilder, ANode, String, String) */
void modelbuilder__ModelBuilder__advice(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Location */;
var_n = p0;
var_tag = p1;
var_text = p2;
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
toolcontext__ToolContext__advice(var, var3, var_tag, var_text); /* Direct call toolcontext#ToolContext#advice on <var:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#advice for (self: Object, ANode, String, String) */
void VIRTUAL_modelbuilder__ModelBuilder__advice(val* self, val* p0, val* p1, val* p2) {
modelbuilder__ModelBuilder__advice(self, p0, p1, p2); /* Direct call modelbuilder#ModelBuilder#advice on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#force_get_primitive_method for (self: ModelBuilder, nullable ANode, String, MClass, MModule): MMethod */
val* modelbuilder__ModelBuilder__force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : MMethod */;
val* var_n /* var n: nullable ANode */;
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
val* var9 /* : null */;
val* var_l /* var l: nullable Object */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Location */;
val* var19 /* : ToolContext */;
val* var21 /* : ToolContext */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
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
var9 = NULL;
var_l = var9;
var10 = NULL;
if (var_n == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,var10) on <var_n:nullable ANode> */
var_other14 = var10;
{
var16 = ((short int (*)(val*, val*))(var_n->class->vft[COLOR_kernel__Object___61d_61d]))(var_n, var_other14) /* == on <var_n:nullable ANode(ANode)>*/;
var15 = var16;
}
var17 = !var15;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
var18 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:nullable ANode(ANode)>*/;
}
var_l = var18;
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var21 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (varonce) {
var22 = varonce;
} else {
var23 = "Fatal Error: ";
var24 = 13;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = " must have a property named ";
var29 = 28;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = ".";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 5;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var_recv;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var27;
((struct instance_array__NativeArray*)var38)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var38)->values[4] = (val*) var32;
{
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
}
{
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
}
{
toolcontext__ToolContext__fatal_error(var19, var_l, var39); /* Direct call toolcontext#ToolContext#fatal_error on <var19:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 761);
show_backtrace(1);
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModelBuilder#force_get_primitive_method for (self: Object, nullable ANode, String, MClass, MModule): MMethod */
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 769);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 769);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#name= for (self: ModulePath, String) */
void modelbuilder__ModulePath__name_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModulePath___name].val = p0; /* _name on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#name= for (self: Object, String) */
void VIRTUAL_modelbuilder__ModulePath__name_61d(val* self, val* p0) {
{ /* Inline modelbuilder#ModulePath#name= (self,p0) on <self:Object(ModulePath)> */
self->attrs[COLOR_modelbuilder__ModulePath___name].val = p0; /* _name on <self:Object(ModulePath)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#ModulePath#filepath for (self: ModulePath): String */
val* modelbuilder__ModulePath__filepath(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___filepath].val; /* _filepath on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filepath");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 773);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 773);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#filepath= for (self: ModulePath, String) */
void modelbuilder__ModulePath__filepath_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModulePath___filepath].val = p0; /* _filepath on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#filepath= for (self: Object, String) */
void VIRTUAL_modelbuilder__ModulePath__filepath_61d(val* self, val* p0) {
{ /* Inline modelbuilder#ModulePath#filepath= (self,p0) on <self:Object(ModulePath)> */
self->attrs[COLOR_modelbuilder__ModulePath___filepath].val = p0; /* _filepath on <self:Object(ModulePath)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelbuilder#ModulePath#mgroup for (self: ModulePath): MGroup */
val* modelbuilder__ModulePath__mgroup(val* self) {
val* var /* : MGroup */;
val* var1 /* : MGroup */;
var1 = self->attrs[COLOR_modelbuilder__ModulePath___mgroup].val; /* _mgroup on <self:ModulePath> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroup");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 776);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 776);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ModulePath#mgroup= for (self: ModulePath, MGroup) */
void modelbuilder__ModulePath__mgroup_61d(val* self, val* p0) {
self->attrs[COLOR_modelbuilder__ModulePath___mgroup].val = p0; /* _mgroup on <self:ModulePath> */
RET_LABEL:;
}
/* method modelbuilder#ModulePath#mgroup= for (self: Object, MGroup) */
void VIRTUAL_modelbuilder__ModulePath__mgroup_61d(val* self, val* p0) {
{ /* Inline modelbuilder#ModulePath#mgroup= (self,p0) on <self:Object(ModulePath)> */
self->attrs[COLOR_modelbuilder__ModulePath___mgroup].val = p0; /* _mgroup on <self:Object(ModulePath)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 773);
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
/* method modelbuilder#ModulePath#init for (self: ModulePath) */
void modelbuilder__ModulePath__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_modelbuilder__ModulePath__init]))(self) /* init on <self:ModulePath>*/;
}
RET_LABEL:;
}
/* method modelbuilder#ModulePath#init for (self: Object) */
void VIRTUAL_modelbuilder__ModulePath__init(val* self) {
{ /* Inline modelbuilder#ModulePath#init (self) on <self:Object(ModulePath)> */
{
((void (*)(val*))(self->class->vft[COLOR_modelbuilder__ModulePath__init]))(self) /* init on <self:Object(ModulePath)>*/;
}
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 786);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 786);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AStdImport#mmodule for (self: AStdImport): nullable MModule */
val* modelbuilder__AStdImport__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_modelbuilder__AStdImport___mmodule].val; /* _mmodule on <self:AStdImport> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#AStdImport#mmodule for (self: Object): nullable MModule */
val* VIRTUAL_modelbuilder__AStdImport__mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
val* var3 /* : nullable MModule */;
{ /* Inline modelbuilder#AStdImport#mmodule (self) on <self:Object(AStdImport)> */
var3 = self->attrs[COLOR_modelbuilder__AStdImport___mmodule].val; /* _mmodule on <self:Object(AStdImport)> */
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
val* var12 /* : ANodes[TComment] */;
val* var14 /* : ANodes[TComment] */;
val* var_ /* var : ANodes[TComment] */;
val* var15 /* : Iterator[ANode] */;
val* var_16 /* var : Iterator[TComment] */;
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
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:MDoc>*/;
}
var_res = var11;
{
{ /* Inline parser_nodes#ADoc#n_comment (self) on <self:ADoc> */
var14 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2019);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = parser_nodes__ANodes__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_16) /* is_ok on <var_16:Iterator[TComment]>*/;
}
if (var17){
{
var18 = ((val* (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__item]))(var_16) /* item on <var_16:Iterator[TComment]>*/;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
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
PRINT_ERROR(" (%s:%d)\n", "model/mdoc.nit", 22);
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
goto BREAK_label;
} else {
}
{
{ /* Inline string#FlatString#chars (var_text) on <var_text:String> */
var37 = var_text->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_text:String> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 832);
show_backtrace(1);
}
{
{ /* Inline string#FlatString#chars (var_text) on <var_text:String> */
var48 = var_text->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_text:String> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
PRINT_ERROR(" (%s:%d)\n", "model/mdoc.nit", 22);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
array__Array__add(var84, var_text); /* Direct call array#Array#add on <var84:Array[String]>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__next]))(var_16) /* next on <var_16:Iterator[TComment]>*/;
}
} else {
goto BREAK_label87;
}
}
BREAK_label87: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:Iterator[TComment]> */
RET_LABEL88:(void)0;
}
}
{
{ /* Inline modelbuilder#ADoc#mdoc_cache= (self,var_res) on <self:ADoc> */
self->attrs[COLOR_modelbuilder__ADoc___mdoc_cache].val = var_res; /* _mdoc_cache on <self:ADoc> */
RET_LABEL89:(void)0;
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
