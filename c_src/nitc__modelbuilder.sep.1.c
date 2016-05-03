#include "nitc__modelbuilder.sep.0.h"
/* method modelbuilder#ToolContext#opt_ignore_visibility for (self: ToolContext): OptionBool */
val* nitc__modelbuilder___ToolContext___opt_ignore_visibility(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#init for (self: ToolContext) */
void nitc__modelbuilder___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : Array[Option] */;
val* var7 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__modelbuilder___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 27);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = NEW_core__NativeArray(1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var7)->values[0] = (val*) var3;
{
((void(*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_core__array__Array__with_native]))(var6, var7, 1l); /* with_native on <var6:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var6); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* nitc__modelbuilder___ToolContext___make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mainmodule /* var mainmodule: nullable Object */;
val* var10 /* : MModule */;
val* var11 /* : ModelBuilder */;
val* var12 /* : Model */;
val* var14 /* : Model */;
val* var15 /* : nullable Object */;
val* var16 /* : String */;
val* var18 /* : String */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : Location */;
val* var24 /* : nullable Object */;
val* var25 /* : Location */;
val* var27 /* : Location */;
val* var28 /* : nullable SourceFile */;
val* var30 /* : nullable SourceFile */;
val* var32 /* : ModelBuilder */;
val* var33 /* : ModelBuilder */;
var_mmodules = p0;
{
var1 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mmodules);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 39);
fatal_exit(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var_mmodules) on <var_mmodules:Array[MModule]> */
var5 = var_mmodules->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mmodules:Array[MModule]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var3,1l) on <var3:Int> */
var8 = var3 == 1l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var9 = core___core__SequenceRead___Collection__first(var_mmodules);
}
var_mainmodule = var9;
} else {
var10 = NEW_nitc__MModule(&type_nitc__MModule);
{
var11 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var11) on <var11:ModelBuilder> */
var14 = var11->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var11:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#name (var15) on <var15:nullable Object(MModule)> */
var18 = var15->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var15:nullable Object(MModule)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 95);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "-m";
var21 = core__flat___NativeString___to_s_full(var20, 2l, 2l);
var19 = var21;
varonce = var19;
}
{
var22 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_core__abstract_text__String___43d]))(var16, var19); /* + on <var16:String>*/
}
var23 = NEW_nitc__Location(&type_nitc__Location);
{
var24 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#location (var24) on <var24:nullable Object(MModule)> */
var27 = var24->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var24:nullable Object(MModule)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 98);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline location#Location#file (var25) on <var25:Location> */
var30 = var25->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var25:Location> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__location__Location__file_61d]))(var23, var28); /* file= on <var23:Location>*/
}
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var23, 0l); /* line_start= on <var23:Location>*/
}
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var23, 0l); /* line_end= on <var23:Location>*/
}
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var23, 0l); /* column_start= on <var23:Location>*/
}
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var23, 0l); /* column_end= on <var23:Location>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:Location>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__mmodule__MModule__model_61d]))(var10, var12); /* model= on <var10:MModule>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__mmodule__MModule__mgroup_61d]))(var10, ((val*)NULL)); /* mgroup= on <var10:MModule>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__mmodule__MModule__name_61d]))(var10, var22); /* name= on <var10:MModule>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__mmodule__MModule__location_61d]))(var10, var23); /* location= on <var10:MModule>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:MModule>*/
}
var_mainmodule = var10;
{
{ /* Inline model_base#MEntity#is_fictive= (var_mainmodule,1) on <var_mainmodule:nullable Object(MModule)> */
var_mainmodule->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mainmodule:nullable Object(MModule)> */
RET_LABEL31:(void)0;
}
}
{
nitc___nitc__MModule___set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:nullable Object(MModule)>*/
}
{
var32 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
nitc__loader___ModelBuilder___apply_conditional_importations(var32, var_mainmodule); /* Direct call loader#ModelBuilder#apply_conditional_importations on <var32:ModelBuilder>*/
}
{
var33 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
nitc__modelbuilder___ModelBuilder___run_phases(var33); /* Direct call modelbuilder#ModelBuilder#run_phases on <var33:ModelBuilder>*/
}
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#run_global_phases for (self: ToolContext, Array[MModule]) */
void nitc__modelbuilder___ToolContext___run_global_phases(val* self, val* p0) {
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var3 /* : Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[Phase] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
var_mmodules = p0;
{
var = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mmodules);
}
var1 = !var;
if (var1){
{
var2 = nitc__mixin___ToolContext___make_main_module(self, var_mmodules);
}
var_mainmodule = var2;
{
var3 = nitc__phase___ToolContext___phases_list(self);
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[Phase]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[Phase]>*/
}
var_phase = var7;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var10 = var_phase->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8){
goto BREAK_label11;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_phase->class->vft[COLOR_nitc__modelbuilder__Phase__process_mainmodule]))(var_phase, var_mainmodule, var_mmodules); /* process_mainmodule on <var_phase:Phase>*/
}
BREAK_label11: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Phase]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Phase]>*/
}
} else {
}
{
var12 = nitc___nitc__ToolContext___check_errors(self);
}
{
nitc___nitc__ToolContext___errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#Phase#process_mainmodule for (self: Phase, MModule, SequenceRead[MModule]) */
void nitc__modelbuilder___Phase___process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
var_mainmodule = p0;
var_given_mmodules = p1;
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#run_phases for (self: ModelBuilder) */
void nitc__modelbuilder___ModelBuilder___run_phases(val* self) {
val* var /* : Array[MModule] */;
val* var2 /* : Array[MModule] */;
val* var3 /* : Array[nullable Object] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var4 /* : Model */;
val* var6 /* : Model */;
val* var7 /* : POSet[MModule] */;
val* var9 /* : POSet[MModule] */;
val* var10 /* : Array[AModule] */;
val* var_nmodules /* var nmodules: Array[AModule] */;
val* var_ /* var : Array[MModule] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[MModule] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mm /* var mm: MModule */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var19 /* : nullable AModule */;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var26 /* : OptionBool */;
val* var28 /* : OptionBool */;
val* var29 /* : nullable Object */;
val* var31 /* : nullable Object */;
short int var32 /* : Bool */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
static val* varonce;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
val* var39 /* : ToolContext */;
val* var41 /* : ToolContext */;
{
{ /* Inline loader#ModelBuilder#parsed_modules (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val; /* _parsed_modules on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parsed_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 320);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core__array___Collection___to_a(var);
}
var_mmodules = var3;
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var6 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var4) on <var4:Model> */
var9 = var4->attrs[COLOR_nitc__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var4:Model> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 34);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__Comparator___sort(var7, var_mmodules); /* Direct call sorter#Comparator#sort on <var7:POSet[MModule]>*/
}
var10 = NEW_core__Array(&type_core__Array__nitc__AModule);
{
core___core__Array___core__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[AModule]>*/
}
var_nmodules = var10;
var_ = var_mmodules;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[MModule]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[MModule]>*/
}
var_mm = var14;
{
{ /* Inline model_base#MEntity#is_fictive (var_mm) on <var_mm:MModule> */
var17 = var_mm->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s; /* _is_fictive on <var_mm:MModule> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
goto BREAK_label18;
} else {
}
{
var19 = nitc__loader___ModelBuilder___mmodule2node(self, var_mm);
}
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 97);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_nmodules, var19); /* Direct call array#Array#add on <var_nmodules:Array[AModule]>*/
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[MModule]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc__phase___ToolContext___run_phases(var20, var_nmodules); /* Direct call phase#ToolContext#run_phases on <var20:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_metamodel (var23) on <var23:ToolContext> */
var28 = var23->attrs[COLOR_nitc__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <var23:ToolContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 47);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline opts#Option#value (var26) on <var26:OptionBool> */
var31 = var26->attrs[COLOR_opts__Option___value].val; /* _value on <var26:OptionBool> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = (short int)((long)(var29)>>2);
if (var32){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (likely(varonce!=NULL)) {
var36 = varonce;
} else {
var37 = "*** ONLY METAMODEL";
var38 = core__flat___NativeString___to_s_full(var37, 18l, 18l);
var36 = var38;
varonce = var36;
}
{
nitc___nitc__ToolContext___info(var33, var36, 1l); /* Direct call toolcontext#ToolContext#info on <var33:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var41 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
nitc___nitc__ToolContext___quit(var39); /* Direct call toolcontext#ToolContext#quit on <var39:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
