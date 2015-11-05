#include "nit__modelbuilder.sep.0.h"
/* method modelbuilder#ToolContext#opt_ignore_visibility for (self: ToolContext): OptionBool */
val* nit__modelbuilder___ToolContext___opt_ignore_visibility(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#init for (self: ToolContext) */
void nit__modelbuilder___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : Array[Option] */;
val* var7 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__modelbuilder___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 27);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var7)->values[0] = (val*) var3;
{
((void(*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var7, 1l); /* with_native on <var6:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var6); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* nit__modelbuilder___ToolContext___make_main_module(val* self, val* p0) {
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
val* var21 /* : FlatString */;
val* var22 /* : String */;
val* var23 /* : Location */;
val* var24 /* : nullable Object */;
val* var25 /* : Location */;
val* var27 /* : Location */;
val* var28 /* : nullable SourceFile */;
val* var30 /* : nullable SourceFile */;
var_mmodules = p0;
{
var1 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_mmodules);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 39);
fatal_exit(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var_mmodules) on <var_mmodules:Array[MModule]> */
var5 = var_mmodules->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mmodules:Array[MModule]> */
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
var9 = standard___standard__SequenceRead___Collection__first(var_mmodules);
}
var_mainmodule = var9;
} else {
var10 = NEW_nit__MModule(&type_nit__MModule);
{
var11 = nit__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var11) on <var11:ModelBuilder> */
var14 = var11->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <var11:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = standard___standard__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#name (var15) on <var15:nullable Object(MModule)> */
var18 = var15->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var15:nullable Object(MModule)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
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
var21 = standard___standard__NativeString___to_s_with_length(var20, 2l);
var19 = var21;
varonce = var19;
}
{
var22 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__string__String___43d]))(var16, var19); /* + on <var16:String>*/
}
var23 = NEW_nit__Location(&type_nit__Location);
{
var24 = standard___standard__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#location (var24) on <var24:nullable Object(MModule)> */
var27 = var24->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var24:nullable Object(MModule)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline location#Location#file (var25) on <var25:Location> */
var30 = var25->attrs[COLOR_nit__location__Location___file].val; /* _file on <var25:Location> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__location__Location__file_61d]))(var23, var28); /* file= on <var23:Location>*/
}
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nit__location__Location__line_start_61d]))(var23, 0l); /* line_start= on <var23:Location>*/
}
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nit__location__Location__line_end_61d]))(var23, 0l); /* line_end= on <var23:Location>*/
}
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nit__location__Location__column_start_61d]))(var23, 0l); /* column_start= on <var23:Location>*/
}
{
((void(*)(val* self, long p0))(var23->class->vft[COLOR_nit__location__Location__column_end_61d]))(var23, 0l); /* column_end= on <var23:Location>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:Location>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var10, var12); /* model= on <var10:MModule>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var10, ((val*)NULL)); /* mgroup= on <var10:MModule>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var10, var22); /* name= on <var10:MModule>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var10, var23); /* location= on <var10:MModule>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_standard__kernel__Object__init]))(var10); /* init on <var10:MModule>*/
}
var_mainmodule = var10;
{
{ /* Inline mmodule#MModule#is_fictive= (var_mainmodule,1) on <var_mainmodule:nullable Object(MModule)> */
var_mainmodule->attrs[COLOR_nit__mmodule__MModule___is_fictive].s = 1; /* _is_fictive on <var_mainmodule:nullable Object(MModule)> */
RET_LABEL31:(void)0;
}
}
{
nit___nit__MModule___set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:nullable Object(MModule)>*/
}
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder#ToolContext#run_global_phases for (self: ToolContext, Array[MModule]) */
void nit__modelbuilder___ToolContext___run_global_phases(val* self, val* p0) {
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
var = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_mmodules);
}
var1 = !var;
if (var1){
{
var2 = nit__mixin___ToolContext___make_main_module(self, var_mmodules);
}
var_mainmodule = var2;
{
var3 = nit__phase___ToolContext___phases_list(self);
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[Phase]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[Phase]>*/
}
var_phase = var7;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var10 = var_phase->attrs[COLOR_nit__phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_phase->class->vft[COLOR_nit__modelbuilder__Phase__process_mainmodule]))(var_phase, var_mainmodule, var_mmodules); /* process_mainmodule on <var_phase:Phase>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label11;
}
}
BREAK_label11: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Phase]>*/
}
} else {
}
{
var12 = nit___nit__ToolContext___check_errors(self);
}
{
nit___nit__ToolContext___errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder#Phase#process_mainmodule for (self: Phase, MModule, SequenceRead[MModule]) */
void nit__modelbuilder___Phase___process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
var_mainmodule = p0;
var_given_mmodules = p1;
RET_LABEL:;
}
/* method modelbuilder#ModelBuilder#run_phases for (self: ModelBuilder) */
void nit__modelbuilder___ModelBuilder___run_phases(val* self) {
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
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable AModule */;
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
val* var41 /* : FlatString */;
val* var42 /* : Sys */;
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodules (var) on <var:Model> */
var5 = var->attrs[COLOR_nit__mmodule__Model___mmodules].val; /* _mmodules on <var:Model> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 27);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard__array___Collection___to_a(var3);
}
var_mmodules = var6;
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var9 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var7) on <var7:Model> */
var12 = var7->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var7:Model> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 30);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
standard___standard__Comparator___sort(var10, var_mmodules); /* Direct call sorter#Comparator#sort on <var10:POSet[MModule]>*/
}
var13 = NEW_standard__Array(&type_standard__Array__nit__AModule);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[AModule]>*/
}
var_nmodules = var13;
var_ = var_mmodules;
{
var14 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_15);
}
if (var16){
{
var17 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_15);
}
var_mm = var17;
{
{ /* Inline mmodule#MModule#is_fictive (var_mm) on <var_mm:MModule> */
var20 = var_mm->attrs[COLOR_nit__mmodule__MModule___is_fictive].s; /* _is_fictive on <var_mm:MModule> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18){
goto BREAK_label;
} else {
}
{
var21 = nit__loader___ModelBuilder___mmodule2node(self, var_mm);
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 95);
fatal_exit(1);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_nmodules, var21); /* Direct call array#Array#add on <var_nmodules:Array[AModule]>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_15); /* Direct call array#ArrayIterator#next on <var_15:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label22;
}
}
BREAK_label22: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_15); /* Direct call array#ArrayIterator#finish on <var_15:ArrayIterator[MModule]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
nit__phase___ToolContext___run_phases(var23, var_nmodules); /* Direct call phase#ToolContext#run_phases on <var23:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var28 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_metamodel (var26) on <var26:ToolContext> */
var31 = var26->attrs[COLOR_nit__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <var26:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 26);
fatal_exit(1);
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
var35 = (short int)((long)(var32)>>2);
if (var35){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var38 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (likely(varonce!=NULL)) {
var39 = varonce;
} else {
var40 = "*** ONLY METAMODEL";
var41 = standard___standard__NativeString___to_s_with_length(var40, 18l);
var39 = var41;
varonce = var39;
}
{
nit___nit__ToolContext___info(var36, var39, 1l); /* Direct call toolcontext#ToolContext#info on <var36:ToolContext>*/
}
var42 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var42,0l) on <var42:Sys> */
exit(0l);
RET_LABEL43:(void)0;
}
}
} else {
}
RET_LABEL:;
}
