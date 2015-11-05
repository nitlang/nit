#include "nit__phase.sep.0.h"
/* method phase#ToolContext#phases for (self: ToolContext): POSet[Phase] */
val* nit__phase___ToolContext___phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_disable_phase for (self: ToolContext): OptionArray */
val* nit__phase___ToolContext___opt_disable_phase(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_sloppy for (self: ToolContext): OptionBool */
val* nit__phase___ToolContext___opt_sloppy(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#init for (self: ToolContext) */
void nit__phase___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : Array[Option] */;
val* var10 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__phase___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 30);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline phase#ToolContext#opt_sloppy (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nit__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 33);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var9 = array_instance Array[Option] */
var10 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var10)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var10)->values[1] = (val*) var6;
{
((void(*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var10, 2l); /* with_native on <var9:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var9); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nit__phase___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionArray */;
val* var2 /* : OptionArray */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
val* var_ /* var : Array[String] */;
val* var6 /* : ArrayIterator[nullable Object] */;
val* var_7 /* var : ArrayIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_v /* var v: String */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
short int var13 /* : Bool */;
val* var14 /* : Sequence[Phase] */;
val* var_15 /* var : Sequence[Phase] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[Phase] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_p /* var p: Phase */;
val* var20 /* : POSetElement[Phase] */;
val* var22 /* : POSetElement[Phase] */;
val* var23 /* : Collection[nullable Object] */;
val* var_deps /* var deps: Collection[Phase] */;
short int var24 /* : Bool */;
val* var25 /* : Sys */;
val* var26 /* : Sys */;
val* var28 /* : NativeArray[String] */;
static val* varonce27;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : Sys */;
short int var_found /* var found: Bool */;
val* var46 /* : POSet[Phase] */;
val* var48 /* : POSet[Phase] */;
val* var_49 /* var : POSet[Phase] */;
val* var50 /* : Iterator[nullable Object] */;
val* var_51 /* var : Iterator[Phase] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_p54 /* var p: Phase */;
val* var55 /* : String */;
short int var56 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var63 /* : Bool */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : String */;
val* var76 /* : OptionBool */;
val* var78 /* : OptionBool */;
val* var79 /* : nullable Object */;
val* var81 /* : nullable Object */;
short int var82 /* : Bool */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__phase___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 30);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionArray> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionArray> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_7);
}
if (var8){
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_7);
}
var_v = var9;
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "list";
var12 = standard___standard__NativeString___to_s_with_length(var11, 4l);
var10 = var12;
varonce = var10;
}
{
var13 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var10); /* == on <var_v:String>*/
}
if (var13){
{
var14 = nit__phase___ToolContext___phases_list(self);
}
var_15 = var14;
{
var16 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_15); /* iterator on <var_15:Sequence[Phase]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[Phase]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[Phase]>*/
}
var_p = var19;
{
{ /* Inline phase#Phase#in_hierarchy (var_p) on <var_p:Phase> */
var22 = var_p->attrs[COLOR_nit__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <var_p:Phase> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 203);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = poset___poset__POSetElement___direct_greaters(var20);
}
var_deps = var23;
{
var24 = ((short int(*)(val* self))((((long)var_deps&3)?class_info[((long)var_deps&3)]:var_deps->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_deps); /* is_empty on <var_deps:Collection[Phase]>*/
}
if (var24){
var25 = glob_sys;
{
standard__file___Sys___print(var25, var_p); /* Direct call file#Sys#print on <var25:Sys>*/
}
} else {
var26 = glob_sys;
if (unlikely(varonce27==NULL)) {
var28 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " (dep: ";
var32 = standard___standard__NativeString___to_s_with_length(var31, 7l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var28)->values[1]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = ")";
var36 = standard___standard__NativeString___to_s_with_length(var35, 1l);
var34 = var36;
varonce33 = var34;
}
((struct instance_standard__NativeArray*)var28)->values[3]=var34;
} else {
var28 = varonce27;
varonce27 = NULL;
}
{
var37 = ((val*(*)(val* self))(var_p->class->vft[COLOR_standard__string__Object__to_s]))(var_p); /* to_s on <var_p:Phase>*/
}
((struct instance_standard__NativeArray*)var28)->values[0]=var37;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = ", ";
var41 = standard___standard__NativeString___to_s_with_length(var40, 2l);
var39 = var41;
varonce38 = var39;
}
{
var42 = standard__string___Collection___join(var_deps, var39);
}
((struct instance_standard__NativeArray*)var28)->values[2]=var42;
{
var43 = ((val*(*)(val* self))(var28->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce27 = var28;
{
standard__file___Sys___print(var26, var43); /* Direct call file#Sys#print on <var26:Sys>*/
}
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[Phase]>*/
}
var44 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var44,0l) on <var44:Sys> */
exit(0l);
RET_LABEL45:(void)0;
}
}
} else {
}
var_found = 0;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var48 = self->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_49 = var46;
{
var50 = poset___poset__POSet___standard__abstract_collection__Collection__iterator(var_49);
}
var_51 = var50;
for(;;) {
{
var52 = ((short int(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_51); /* is_ok on <var_51:Iterator[Phase]>*/
}
if (var52){
{
var53 = ((val*(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_51); /* item on <var_51:Iterator[Phase]>*/
}
var_p54 = var53;
{
var55 = nit___nit__Phase___standard__string__Object__to_s(var_p54);
}
{
{ /* Inline kernel#Object#!= (var_v,var55) on <var_v:String> */
var_other = var55;
{
var58 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var_other); /* == on <var_v:String>*/
}
var59 = !var58;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
goto BREAK_label60;
} else {
}
var_found = 1;
{
{ /* Inline phase#Phase#disabled= (var_p54,1) on <var_p54:Phase> */
var_p54->attrs[COLOR_nit__phase__Phase___disabled].s = 1; /* _disabled on <var_p54:Phase> */
RET_LABEL61:(void)0;
}
}
BREAK_label60: (void)0;
{
((void(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_51); /* next on <var_51:Iterator[Phase]>*/
}
} else {
goto BREAK_label62;
}
}
BREAK_label62: (void)0;
{
((void(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_51); /* finish on <var_51:Iterator[Phase]>*/
}
var63 = !var_found;
if (var63){
if (unlikely(varonce64==NULL)) {
var65 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Error: no phase named `";
var69 = standard___standard__NativeString___to_s_with_length(var68, 23l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var65)->values[0]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "`. Use `list` to list all phases.";
var73 = standard___standard__NativeString___to_s_with_length(var72, 33l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var65)->values[2]=var71;
} else {
var65 = varonce64;
varonce64 = NULL;
}
((struct instance_standard__NativeArray*)var65)->values[1]=var_v;
{
var74 = ((val*(*)(val* self))(var65->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
nit___nit__ToolContext___fatal_error(self, ((val*)NULL), var74); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_7); /* Direct call array#ArrayIterator#next on <var_7:ArrayIterator[String]>*/
}
} else {
goto BREAK_label75;
}
}
BREAK_label75: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_7); /* Direct call array#ArrayIterator#finish on <var_7:ArrayIterator[String]>*/
}
{
{ /* Inline phase#ToolContext#opt_sloppy (self) on <self:ToolContext> */
var78 = self->attrs[COLOR_nit__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 33);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline opts#Option#value (var76) on <var76:OptionBool> */
var81 = var76->attrs[COLOR_opts__Option___value].val; /* _value on <var76:OptionBool> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var82 = (short int)((long)(var79)>>2);
if (var82){
{
{ /* Inline phase#ToolContext#semantize_is_lazy= (self,1) on <self:ToolContext> */
self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s = 1; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL83:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method phase#ToolContext#phases_list for (self: ToolContext): Sequence[Phase] */
val* nit__phase___ToolContext___phases_list(val* self) {
val* var /* : Sequence[Phase] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Phase] */;
val* var3 /* : Sequence[Phase] */;
val* var5 /* : POSet[Phase] */;
val* var7 /* : POSet[Phase] */;
val* var8 /* : Array[nullable Object] */;
val* var_phases /* var phases: Array[Phase] */;
val* var9 /* : POSet[Phase] */;
val* var11 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___phases_list].val != NULL; /* _phases_list on <self:ToolContext> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__phase__ToolContext___phases_list].val; /* _phases_list on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases_list");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 72);
fatal_exit(1);
}
} else {
{
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var7 = self->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard__array___Collection___to_a(var5);
}
var_phases = var8;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
standard___standard__Comparator___sort(var9, var_phases); /* Direct call sorter#Comparator#sort on <var9:POSet[Phase]>*/
}
var3 = var_phases;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__phase__ToolContext___phases_list].val = var3; /* _phases_list on <self:ToolContext> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#semantize_is_lazy for (self: ToolContext): Bool */
short int nit__phase___ToolContext___semantize_is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#semantize_is_lazy= for (self: ToolContext, Bool) */
void nit__phase___ToolContext___semantize_is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s = p0; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#phased_modules for (self: ToolContext): HashSet[AModule] */
val* nit__phase___ToolContext___phased_modules(val* self) {
val* var /* : HashSet[AModule] */;
val* var1 /* : HashSet[AModule] */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#run_phases for (self: ToolContext, Collection[AModule]) */
void nit__phase___ToolContext___run_phases(val* self, val* p0) {
val* var_nmodules /* var nmodules: Collection[AModule] */;
long var /* : Int */;
long var2 /* : Int for extern */;
long var_time0 /* var time0: Int */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : IndexedIterator[Phase] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_19 /* var : Collection[AModule] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : Iterator[AModule] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
val* var24 /* : HashSet[AModule] */;
val* var26 /* : HashSet[AModule] */;
short int var27 /* : Bool */;
val* var29 /* : HashSet[AModule] */;
val* var31 /* : HashSet[AModule] */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : Location */;
val* var40 /* : Location */;
val* var41 /* : nullable SourceFile */;
val* var43 /* : nullable SourceFile */;
val* var44 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : AnnotationPhaseVisitor */;
val* var_vannot /* var vannot: AnnotationPhaseVisitor */;
val* var_50 /* var : Sequence[Phase] */;
val* var51 /* : Iterator[nullable Object] */;
val* var_52 /* var : IndexedIterator[Phase] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_phase55 /* var phase: Phase */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var60 /* : ToolContext */;
val* var62 /* : ToolContext */;
short int var63 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
long var70 /* : Int */;
long var_errcount /* var errcount: Int */;
long var71 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
long var79 /* : Int */;
long var81 /* : Int */;
val* var82 /* : ANodes[AClassdef] */;
val* var84 /* : ANodes[AClassdef] */;
val* var_85 /* var : ANodes[AClassdef] */;
val* var86 /* : Iterator[ANode] */;
val* var_87 /* var : Iterator[AClassdef] */;
short int var88 /* : Bool */;
val* var89 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var90 /* : ToolContext */;
val* var92 /* : ToolContext */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : ANodes[APropdef] */;
val* var104 /* : ANodes[APropdef] */;
val* var_105 /* var : ANodes[APropdef] */;
val* var106 /* : Iterator[ANode] */;
val* var_107 /* var : Iterator[APropdef] */;
short int var108 /* : Bool */;
val* var109 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var110 /* : ToolContext */;
val* var112 /* : ToolContext */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
long var120 /* : Int */;
long var122 /* : Int */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : Array[AAnnotation] */;
val* var130 /* : Array[AAnnotation] */;
val* var_131 /* var : Array[AAnnotation] */;
val* var132 /* : ArrayIterator[nullable Object] */;
val* var_133 /* var : ArrayIterator[AAnnotation] */;
short int var134 /* : Bool */;
val* var135 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var136 /* : nullable ANode */;
val* var138 /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
short int var139 /* : Bool */;
int cltype;
int idtype;
val* var140 /* : nullable ANode */;
val* var142 /* : nullable ANode */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
val* var_other146 /* var other: nullable Object */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
long var150 /* : Int */;
long var152 /* : Int */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
long var161 /* : Int */;
long var163 /* : Int for extern */;
long var_time1 /* var time1: Int */;
val* var165 /* : NativeArray[String] */;
static val* varonce164;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
val* var169 /* : FlatString */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : FlatString */;
long var174 /* : Int */;
short int var176 /* : Bool */;
int cltype177;
int idtype178;
const char* var_class_name;
long var179 /* : Int */;
val* var180 /* : String */;
val* var181 /* : String */;
short int var182 /* : Bool */;
var_nmodules = p0;
{
{ /* Inline time#Object#get_time (self) on <self:ToolContext> */
var2 = kernel_Any_Any_get_time_0(self);
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_time0 = var;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "*** SEMANTIC ANALYSIS ***";
var5 = standard___standard__NativeString___to_s_with_length(var4, 25l);
var3 = var5;
varonce = var3;
}
{
nit___nit__ToolContext___info(self, var3, 1l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var6 = nit__phase___ToolContext___phases_list(self);
}
var_phases = var6;
var_ = var_phases;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:IndexedIterator[Phase]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:IndexedIterator[Phase]>*/
}
var_phase = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " registered phases: ";
var16 = standard___standard__NativeString___to_s_with_length(var15, 20l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[0]=var14;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
var17 = ((val*(*)(val* self))(var_phase->class->vft[COLOR_standard__string__Object__to_s]))(var_phase); /* to_s on <var_phase:Phase>*/
}
((struct instance_standard__NativeArray*)var12)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
nit___nit__ToolContext___info(self, var18, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:IndexedIterator[Phase]>*/
}
var_19 = var_nmodules;
{
var20 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_19); /* iterator on <var_19:Collection[AModule]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:Iterator[AModule]>*/
}
if (var22){
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:Iterator[AModule]>*/
}
var_nmodule = var23;
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 86);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var24, var_nmodule);
}
if (var27){
goto BREAK_label28;
} else {
}
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 86);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var29, var_nmodule); /* Direct call hash_collection#HashSet#add on <var29:HashSet[AModule]>*/
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Semantic analysis module ";
var37 = standard___standard__NativeString___to_s_with_length(var36, 25l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var35;
} else {
var33 = varonce32;
varonce32 = NULL;
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var40 = var_nmodule->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline location#Location#file (var38) on <var38:Location> */
var43 = var38->attrs[COLOR_nit__location__Location___file].val; /* _file on <var38:Location> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (var41 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 106);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var41) on <var41:nullable SourceFile> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var46 = var41->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var41:nullable SourceFile> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
((struct instance_standard__NativeArray*)var33)->values[1]=var44;
{
var47 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
nit___nit__ToolContext___info(self, var47, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
var48 = NEW_nit__phase__AnnotationPhaseVisitor(&type_nit__phase__AnnotationPhaseVisitor);
{
{ /* Inline kernel#Object#init (var48) on <var48:AnnotationPhaseVisitor> */
RET_LABEL49:(void)0;
}
}
var_vannot = var48;
{
nit___nit__Visitor___enter_visit(var_vannot, var_nmodule); /* Direct call parser_nodes#Visitor#enter_visit on <var_vannot:AnnotationPhaseVisitor>*/
}
var_50 = var_phases;
{
var51 = ((val*(*)(val* self))((((long)var_50&3)?class_info[((long)var_50&3)]:var_50->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_50); /* iterator on <var_50:Sequence[Phase]>*/
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:IndexedIterator[Phase]>*/
}
if (var53){
{
var54 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:IndexedIterator[Phase]>*/
}
var_phase55 = var54;
{
{ /* Inline phase#Phase#disabled (var_phase55) on <var_phase55:Phase> */
var58 = var_phase55->attrs[COLOR_nit__phase__Phase___disabled].s; /* _disabled on <var_phase55:Phase> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56){
goto BREAK_label59;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (var_phase55) on <var_phase55:Phase> */
var62 = var_phase55->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase55:Phase> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var60,self) on <var60:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var60,var_other) on <var60:ToolContext> */
var67 = var60 == var_other;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (unlikely(!var63)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 113);
fatal_exit(1);
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var70 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_errcount = var68;
{
((void(*)(val* self, val* p0))(var_phase55->class->vft[COLOR_nit__phase__Phase__process_nmodule]))(var_phase55, var_nmodule); /* process_nmodule on <var_phase55:Phase>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var73 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var71) on <var_errcount:Int> */
var76 = var_errcount == var71;
var77 = !var76;
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
{
var78 = nit___nit__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var81 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_errcount = var79;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var84 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_85 = var82;
{
var86 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_85);
}
var_87 = var86;
for(;;) {
{
var88 = ((short int(*)(val* self))((((long)var_87&3)?class_info[((long)var_87&3)]:var_87->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_87); /* is_ok on <var_87:Iterator[AClassdef]>*/
}
if (var88){
{
var89 = ((val*(*)(val* self))((((long)var_87&3)?class_info[((long)var_87&3)]:var_87->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_87); /* item on <var_87:Iterator[AClassdef]>*/
}
var_nclassdef = var89;
{
{ /* Inline phase#Phase#toolcontext (var_phase55) on <var_phase55:Phase> */
var92 = var_phase55->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase55:Phase> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var90,self) on <var90:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var90,var_other) on <var90:ToolContext> */
var97 = var90 == var_other;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
if (unlikely(!var93)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 121);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_phase55->class->vft[COLOR_nit__phase__Phase__process_nclassdef]))(var_phase55, var_nclassdef); /* process_nclassdef on <var_phase55:Phase>*/
}
{
{ /* Inline phase#ToolContext#semantize_is_lazy (self) on <self:ToolContext> */
var100 = self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
var101 = !var98;
if (var101){
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var104 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_105 = var102;
{
var106 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_105);
}
var_107 = var106;
for(;;) {
{
var108 = ((short int(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_107); /* is_ok on <var_107:Iterator[APropdef]>*/
}
if (var108){
{
var109 = ((val*(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_107); /* item on <var_107:Iterator[APropdef]>*/
}
var_npropdef = var109;
{
{ /* Inline phase#Phase#toolcontext (var_phase55) on <var_phase55:Phase> */
var112 = var_phase55->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase55:Phase> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var110,self) on <var110:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var110,var_other) on <var110:ToolContext> */
var117 = var110 == var_other;
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
if (unlikely(!var113)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 124);
fatal_exit(1);
}
{
nit__phase___ToolContext___phase_process_npropdef(self, var_phase55, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_107); /* next on <var_107:Iterator[APropdef]>*/
}
} else {
goto BREAK_label118;
}
}
BREAK_label118: (void)0;
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_107); /* finish on <var_107:Iterator[APropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_87&3)?class_info[((long)var_87&3)]:var_87->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_87); /* next on <var_87:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label119;
}
}
BREAK_label119: (void)0;
{
((void(*)(val* self))((((long)var_87&3)?class_info[((long)var_87&3)]:var_87->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_87); /* finish on <var_87:Iterator[AClassdef]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var122 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var120) on <var_errcount:Int> */
var125 = var_errcount == var120;
var126 = !var125;
var123 = var126;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
if (var123){
{
var127 = nit___nit__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (var_vannot) on <var_vannot:AnnotationPhaseVisitor> */
var130 = var_vannot->attrs[COLOR_nit__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <var_vannot:AnnotationPhaseVisitor> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 187);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
var_131 = var128;
{
var132 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_131);
}
var_133 = var132;
for(;;) {
{
var134 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_133);
}
if (var134){
{
var135 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_133);
}
var_na = var135;
{
{ /* Inline parser_nodes#ANode#parent (var_na) on <var_na:AAnnotation> */
var138 = var_na->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var_na:AAnnotation> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
var_p = var136;
/* <var_p:nullable ANode> isa AAnnotations */
cltype = type_nit__AAnnotations.color;
idtype = type_nit__AAnnotations.id;
if(var_p == NULL) {
var139 = 0;
} else {
if(cltype >= var_p->type->table_size) {
var139 = 0;
} else {
var139 = var_p->type->type_table[cltype] == idtype;
}
}
if (var139){
{
{ /* Inline parser_nodes#ANode#parent (var_p) on <var_p:nullable ANode(AAnnotations)> */
var142 = var_p->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var_p:nullable ANode(AAnnotations)> */
var140 = var142;
RET_LABEL141:(void)0;
}
}
var_p = var140;
} else {
}
if (var_p == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_p,((val*)NULL)) on <var_p:nullable ANode> */
var_other146 = ((val*)NULL);
{
var147 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, var_other146); /* == on <var_p:nullable ANode(ANode)>*/
}
var148 = !var147;
var144 = var148;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
var143 = var144;
}
if (unlikely(!var143)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 134);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_phase55->class->vft[COLOR_nit__phase__Phase__process_annotated_node]))(var_phase55, var_p, var_na); /* process_annotated_node on <var_phase55:Phase>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_133); /* Direct call array#ArrayIterator#next on <var_133:ArrayIterator[AAnnotation]>*/
}
} else {
goto BREAK_label149;
}
}
BREAK_label149: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_133); /* Direct call array#ArrayIterator#finish on <var_133:ArrayIterator[AAnnotation]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var152 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var150) on <var_errcount:Int> */
var155 = var_errcount == var150;
var156 = !var155;
var153 = var156;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
if (var153){
{
var157 = nit___nit__ToolContext___check_errors(self);
}
} else {
}
BREAK_label59: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label158;
}
}
BREAK_label158: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:IndexedIterator[Phase]>*/
}
{
var159 = nit___nit__ToolContext___check_errors(self);
}
BREAK_label28: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:Iterator[AModule]>*/
}
} else {
goto BREAK_label160;
}
}
BREAK_label160: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:Iterator[AModule]>*/
}
{
{ /* Inline time#Object#get_time (self) on <self:ToolContext> */
var163 = kernel_Any_Any_get_time_0(self);
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var_time1 = var161;
if (unlikely(varonce164==NULL)) {
var165 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = "*** END SEMANTIC ANALYSIS: ";
var169 = standard___standard__NativeString___to_s_with_length(var168, 27l);
var167 = var169;
varonce166 = var167;
}
((struct instance_standard__NativeArray*)var165)->values[0]=var167;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = " ***";
var173 = standard___standard__NativeString___to_s_with_length(var172, 4l);
var171 = var173;
varonce170 = var171;
}
((struct instance_standard__NativeArray*)var165)->values[2]=var171;
} else {
var165 = varonce164;
varonce164 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var176 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var176)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var179 = var_time1 - var_time0;
var174 = var179;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
var180 = standard__string___Int___Object__to_s(var174);
((struct instance_standard__NativeArray*)var165)->values[1]=var180;
{
var181 = ((val*(*)(val* self))(var165->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var165); /* native_to_s on <var165:NativeArray[String]>*/
}
varonce164 = var165;
{
nit___nit__ToolContext___info(self, var181, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var182 = nit___nit__ToolContext___check_errors(self);
}
RET_LABEL:;
}
/* method phase#ToolContext#phase_process_npropdef for (self: ToolContext, Phase, APropdef) */
void nit__phase___ToolContext___phase_process_npropdef(val* self, val* p0, val* p1) {
val* var_phase /* var phase: Phase */;
val* var_npropdef /* var npropdef: APropdef */;
var_phase = p0;
var_npropdef = p1;
{
((void(*)(val* self, val* p0))(var_phase->class->vft[COLOR_nit__phase__Phase__process_npropdef]))(var_phase, var_npropdef); /* process_npropdef on <var_phase:Phase>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#run_phases_on_npropdef for (self: ToolContext, APropdef) */
void nit__phase___ToolContext___run_phases_on_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[Phase] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
var_npropdef = p0;
{
{ /* Inline phase#ToolContext#semantize_is_lazy (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#APropdef#is_phased (var_npropdef) on <var_npropdef:APropdef> */
var6 = var_npropdef->attrs[COLOR_nit__phase__APropdef___is_phased].s; /* _is_phased on <var_npropdef:APropdef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#APropdef#is_phased= (var_npropdef,1) on <var_npropdef:APropdef> */
var_npropdef->attrs[COLOR_nit__phase__APropdef___is_phased].s = 1; /* _is_phased on <var_npropdef:APropdef> */
RET_LABEL7:(void)0;
}
}
{
var8 = nit__phase___ToolContext___phases_list(self);
}
var_phases = var8;
var_ = var_phases;
{
var9 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[Phase]>*/
}
if (var11){
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[Phase]>*/
}
var_phase = var12;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var15 = var_phase->attrs[COLOR_nit__phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
goto BREAK_label;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (var_phase) on <var_phase:Phase> */
var18 = var_phase->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase:Phase> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var16,self) on <var16:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var16,var_other) on <var16:ToolContext> */
var23 = var16 == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 170);
fatal_exit(1);
}
{
nit__phase___ToolContext___phase_process_npropdef(self, var_phase, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
var24 = nit___nit__ToolContext___check_errors(self);
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[Phase]>*/
}
} else {
goto BREAK_label25;
}
}
BREAK_label25: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[Phase]>*/
}
RET_LABEL:;
}
/* method phase#APropdef#is_phased for (self: APropdef): Bool */
short int nit__phase___APropdef___is_phased(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__phase__APropdef___is_phased].s; /* _is_phased on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#APropdef#is_phased= for (self: APropdef, Bool) */
void nit__phase___APropdef___is_phased_61d(val* self, short int p0) {
self->attrs[COLOR_nit__phase__APropdef___is_phased].s = p0; /* _is_phased on <self:APropdef> */
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#annotations for (self: AnnotationPhaseVisitor): Array[AAnnotation] */
val* nit__phase___nit__phase__AnnotationPhaseVisitor___annotations(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_nit__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 187);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: AnnotationPhaseVisitor, ANode) */
void nit__phase___nit__phase__AnnotationPhaseVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Array[AAnnotation] */;
val* var3 /* : Array[AAnnotation] */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
/* <var_n:ANode> isa AAnnotation */
cltype = type_nit__AAnnotation.color;
idtype = type_nit__AAnnotation.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (self) on <self:AnnotationPhaseVisitor> */
var3 = self->attrs[COLOR_nit__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 187);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var1, var_n); /* Direct call array#Array#add on <var1:Array[AAnnotation]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#toolcontext for (self: Phase): ToolContext */
val* nit___nit__Phase___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#toolcontext= for (self: Phase, ToolContext) */
void nit___nit__Phase___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__Phase___toolcontext].val = p0; /* _toolcontext on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#in_hierarchy for (self: Phase): POSetElement[Phase] */
val* nit___nit__Phase___in_hierarchy(val* self) {
val* var /* : POSetElement[Phase] */;
val* var1 /* : POSetElement[Phase] */;
var1 = self->attrs[COLOR_nit__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 203);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#in_hierarchy= for (self: Phase, POSetElement[Phase]) */
void nit___nit__Phase___in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__Phase___in_hierarchy].val = p0; /* _in_hierarchy on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#depends for (self: Phase): nullable Collection[Phase] */
val* nit___nit__Phase___depends(val* self) {
val* var /* : nullable Collection[Phase] */;
val* var1 /* : nullable Collection[Phase] */;
var1 = self->attrs[COLOR_nit__phase__Phase___depends].val; /* _depends on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#depends= for (self: Phase, nullable Collection[Phase]) */
void nit___nit__Phase___depends_61d(val* self, val* p0) {
self->attrs[COLOR_nit__phase__Phase___depends].val = p0; /* _depends on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#init for (self: Phase) */
void nit___nit__Phase___standard__kernel__Object__init(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : POSet[Phase] */;
val* var5 /* : POSet[Phase] */;
val* var6 /* : POSetElement[nullable Object] */;
val* var8 /* : nullable Collection[Phase] */;
val* var10 /* : nullable Collection[Phase] */;
val* var_depends /* var depends: nullable Collection[Phase] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_ /* var : Collection[Phase] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[Phase] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_d /* var d: Phase */;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
val* var23 /* : POSet[Phase] */;
val* var25 /* : POSet[Phase] */;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:Phase> */
var2 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline phase#ToolContext#phases (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = poset___poset__POSet___add_node(var3, self);
}
{
{ /* Inline phase#Phase#in_hierarchy= (self,var6) on <self:Phase> */
self->attrs[COLOR_nit__phase__Phase___in_hierarchy].val = var6; /* _in_hierarchy on <self:Phase> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline phase#Phase#depends (self) on <self:Phase> */
var10 = self->attrs[COLOR_nit__phase__Phase___depends].val; /* _depends on <self:Phase> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_depends = var8;
if (var_depends == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_depends,((val*)NULL)) on <var_depends:nullable Collection[Phase]> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))((((long)var_depends&3)?class_info[((long)var_depends&3)]:var_depends->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_depends, var_other); /* == on <var_depends:nullable Collection[Phase](Collection[Phase])>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var_ = var_depends;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Phase]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[Phase]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[Phase]>*/
}
var_d = var19;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:Phase> */
var22 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline phase#ToolContext#phases (var20) on <var20:ToolContext> */
var25 = var20->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <var20:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
poset___poset__POSet___add_edge(var23, self, var_d); /* Direct call poset#POSet#add_edge on <var23:POSet[Phase]>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[Phase]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[Phase]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#to_s for (self: Phase): String */
val* nit___nit__Phase___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : String */;
{
var1 = standard__string___Object___class_name(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Phase";
var4 = standard___standard__NativeString___to_s_with_length(var3, 5l);
var2 = var4;
varonce = var2;
}
{
var5 = standard__file___String___strip_extension(var1, var2);
}
{
var6 = standard___standard__String___to_snake_case(var5);
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled for (self: Phase): Bool */
short int nit___nit__Phase___disabled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__phase__Phase___disabled].s; /* _disabled on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled= for (self: Phase, Bool) */
void nit___nit__Phase___disabled_61d(val* self, short int p0) {
self->attrs[COLOR_nit__phase__Phase___disabled].s = p0; /* _disabled on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#process_nmodule for (self: Phase, AModule) */
void nit___nit__Phase___process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
var_nmodule = p0;
RET_LABEL:;
}
/* method phase#Phase#process_nclassdef for (self: Phase, AClassdef) */
void nit___nit__Phase___process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
var_nclassdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_npropdef for (self: Phase, APropdef) */
void nit___nit__Phase___process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
var_npropdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_annotated_node for (self: Phase, ANode, AAnnotation) */
void nit___nit__Phase___process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
var_node = p0;
var_nat = p1;
RET_LABEL:;
}
