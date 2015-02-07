#include "nit__modelbuilder.sep.0.h"
/* method modelbuilder#ToolContext#opt_ignore_visibility for (self: ToolContext): OptionBool */
val* nit__modelbuilder___ToolContext___opt_ignore_visibility(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 27);
show_backtrace(1);
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
long var7 /* : Int */;
val* var8 /* : NativeArray[Option] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit__modelbuilder___ToolContext___standard__kernel__Object__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
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
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = 1;
var8 = NEW_standard__NativeArray(var7, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var8)->values[0] = (val*) var3;
{
((void (*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Option]>*/;
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
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mainmodule /* var mainmodule: nullable Object */;
val* var11 /* : MModule */;
val* var12 /* : ModelBuilder */;
val* var13 /* : Model */;
val* var15 /* : Model */;
val* var16 /* : null */;
val* var17 /* : nullable Object */;
val* var18 /* : String */;
val* var20 /* : String */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : String */;
val* var26 /* : Location */;
val* var27 /* : nullable Object */;
val* var28 /* : Location */;
val* var30 /* : Location */;
val* var31 /* : nullable SourceFile */;
val* var33 /* : nullable SourceFile */;
long var34 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
var_mmodules = p0;
{
var1 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_mmodules);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 39);
show_backtrace(1);
}
{
{ /* Inline array#AbstractArrayRead#length (var_mmodules) on <var_mmodules:Array[MModule]> */
var5 = var_mmodules->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mmodules:Array[MModule]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 1;
{
{ /* Inline kernel#Int#== (var3,var6) on <var3:Int> */
var9 = var3 == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
var10 = standard___standard__SequenceRead___Collection__first(var_mmodules);
}
var_mainmodule = var10;
} else {
var11 = NEW_nit__MModule(&type_nit__MModule);
{
var12 = nit__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var12) on <var12:ModelBuilder> */
var15 = var12->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <var12:ModelBuilder> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = NULL;
{
var17 = standard___standard__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#name (var17) on <var17:nullable Object(MModule)> */
var20 = var17->attrs[COLOR_nit__mmodule__MModule___name].val; /* _name on <var17:nullable Object(MModule)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 87);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (varonce) {
var21 = varonce;
} else {
var22 = "-m";
var23 = 2;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
{
var25 = ((val* (*)(val* self, val* p0))(var18->class->vft[COLOR_standard__string__String___43d]))(var18, var21) /* + on <var18:String>*/;
}
var26 = NEW_nit__Location(&type_nit__Location);
{
var27 = standard___standard__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#location (var27) on <var27:nullable Object(MModule)> */
var30 = var27->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var27:nullable Object(MModule)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline location#Location#file (var28) on <var28:Location> */
var33 = var28->attrs[COLOR_nit__location__Location___file].val; /* _file on <var28:Location> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = 0;
var35 = 0;
var36 = 0;
var37 = 0;
{
((void (*)(val* self, val* p0))(var26->class->vft[COLOR_nit__location__Location__file_61d]))(var26, var31) /* file= on <var26:Location>*/;
}
{
((void (*)(val* self, long p0))(var26->class->vft[COLOR_nit__location__Location__line_start_61d]))(var26, var34) /* line_start= on <var26:Location>*/;
}
{
((void (*)(val* self, long p0))(var26->class->vft[COLOR_nit__location__Location__line_end_61d]))(var26, var35) /* line_end= on <var26:Location>*/;
}
{
((void (*)(val* self, long p0))(var26->class->vft[COLOR_nit__location__Location__column_start_61d]))(var26, var36) /* column_start= on <var26:Location>*/;
}
{
((void (*)(val* self, long p0))(var26->class->vft[COLOR_nit__location__Location__column_end_61d]))(var26, var37) /* column_end= on <var26:Location>*/;
}
{
((void (*)(val* self))(var26->class->vft[COLOR_standard__kernel__Object__init]))(var26) /* init on <var26:Location>*/;
}
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_nit__mmodule__MModule__model_61d]))(var11, var13) /* model= on <var11:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_nit__mmodule__MModule__mgroup_61d]))(var11, var16) /* mgroup= on <var11:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_nit__mmodule__MModule__name_61d]))(var11, var25) /* name= on <var11:MModule>*/;
}
{
((void (*)(val* self, val* p0))(var11->class->vft[COLOR_nit__mmodule__MModule__location_61d]))(var11, var26) /* location= on <var11:MModule>*/;
}
{
((void (*)(val* self))(var11->class->vft[COLOR_standard__kernel__Object__init]))(var11) /* init on <var11:MModule>*/;
}
var_mainmodule = var11;
var38 = 1;
{
{ /* Inline mmodule#MModule#is_fictive= (var_mainmodule,var38) on <var_mainmodule:nullable Object(MModule)> */
var_mainmodule->attrs[COLOR_nit__mmodule__MModule___is_fictive].s = var38; /* _is_fictive on <var_mainmodule:nullable Object(MModule)> */
RET_LABEL39:(void)0;
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
var = nit__mixin___ToolContext___make_main_module(self, var_mmodules);
}
var_mainmodule = var;
{
var1 = nit__phase___ToolContext___phases_list(self);
}
var_ = var1;
{
var2 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Sequence[Phase]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:IndexedIterator[Phase]>*/;
}
if (var4){
{
var5 = ((val* (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3) /* item on <var_3:IndexedIterator[Phase]>*/;
}
var_phase = var5;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var8 = var_phase->attrs[COLOR_nit__phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6){
goto BREAK_label;
} else {
}
{
((void (*)(val* self, val* p0, val* p1))(var_phase->class->vft[COLOR_nit__modelbuilder__Phase__process_mainmodule]))(var_phase, var_mainmodule, var_mmodules) /* process_mainmodule on <var_phase:Phase>*/;
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_3->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3) /* next on <var_3:IndexedIterator[Phase]>*/;
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
val* var18 /* : nullable AModule */;
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
long var38 /* : Int */;
val* var39 /* : FlatString */;
long var40 /* : Int */;
long var41 /* : Int */;
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
var18 = nit__loader___ModelBuilder___mmodule2node(self, var_mm);
}
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 89);
show_backtrace(1);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_nmodules, var18); /* Direct call array#Array#add on <var_nmodules:Array[AModule]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_15); /* Direct call array#ArrayIterator#next on <var_15:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_15) on <var_15:ArrayIterator[MModule]> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nit__phase___ToolContext___run_phases(var20, var_nmodules); /* Direct call phase#ToolContext#run_phases on <var20:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_metamodel (var23) on <var23:ToolContext> */
var28 = var23->attrs[COLOR_nit__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <var23:ToolContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 26);
show_backtrace(1);
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
var32 = ((struct instance_standard__Bool*)var29)->value; /* autounbox from nullable Object to Bool */;
if (var32){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (varonce) {
var36 = varonce;
} else {
var37 = "*** ONLY METAMODEL";
var38 = 18;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce = var36;
}
var40 = 1;
{
nit___nit__ToolContext___info(var33, var36, var40); /* Direct call toolcontext#ToolContext#info on <var33:ToolContext>*/
}
var41 = 0;
{
{ /* Inline kernel#Object#exit (self,var41) on <self:ModelBuilder> */
exit(var41);
RET_LABEL42:(void)0;
}
}
} else {
}
RET_LABEL:;
}
