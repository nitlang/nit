#include "nitc__phase.sep.0.h"
/* method phase#ToolContext#phases for (self: ToolContext): POSet[Phase] */
val* nitc__phase___ToolContext___phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_disable_phase for (self: ToolContext): OptionArray */
val* nitc__phase___ToolContext___opt_disable_phase(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_sloppy for (self: ToolContext): OptionBool */
val* nitc__phase___ToolContext___opt_sloppy(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#init for (self: ToolContext) */
void nitc__phase___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : Array[Option] */;
val* var10 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__phase___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline phase#ToolContext#opt_sloppy (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 33);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var9 = array_instance Array[Option] */
var10 = NEW_core__NativeArray(2l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var10)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var10)->values[1] = (val*) var6;
{
((void(*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_core__array__Array__with_native]))(var9, var10, 2l); /* with_native on <var9:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var9); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nitc__phase___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionArray */;
val* var2 /* : OptionArray */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
val* var_ /* var : Array[String] */;
val* var6 /* : IndexedIterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_v /* var v: String */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
short int var13 /* : Bool */;
val* var14 /* : Sequence[Phase] */;
val* var_15 /* var : Sequence[Phase] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[Phase] */;
short int var18 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_p /* var p: Phase */;
val* var21 /* : POSetElement[Phase] */;
val* var23 /* : POSetElement[Phase] */;
val* var24 /* : Collection[nullable Object] */;
val* var_deps /* var deps: Collection[Phase] */;
short int var25 /* : Bool */;
val* var26 /* : Sys */;
val* var27 /* : Sys */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : Sys */;
short int var_found /* var found: Bool */;
val* var47 /* : POSet[Phase] */;
val* var49 /* : POSet[Phase] */;
val* var_50 /* var : POSet[Phase] */;
val* var51 /* : Iterator[nullable Object] */;
val* var_52 /* var : Iterator[Phase] */;
short int var53 /* : Bool */;
val* var55 /* : nullable Object */;
val* var_p56 /* var p: Phase */;
val* var57 /* : String */;
short int var58 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var64 /* : Bool */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : OptionBool */;
val* var78 /* : OptionBool */;
val* var79 /* : nullable Object */;
val* var81 /* : nullable Object */;
short int var82 /* : Bool */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__phase___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
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
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[String]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[String]>*/
}
var_v = var9;
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "list";
var12 = core__flat___NativeString___to_s_full(var11, 4l, 4l);
var10 = var12;
varonce = var10;
}
{
var13 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_v, var10); /* == on <var_v:String>*/
}
if (var13){
{
var14 = nitc__phase___ToolContext___phases_list(self);
}
var_15 = var14;
{
var16 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_15); /* iterator on <var_15:Sequence[Phase]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[Phase]>*/
}
if (var18){
} else {
goto BREAK_label19;
}
{
var20 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[Phase]>*/
}
var_p = var20;
{
{ /* Inline phase#Phase#in_hierarchy (var_p) on <var_p:Phase> */
var23 = var_p->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <var_p:Phase> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 203);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = poset___poset__POSetElement___direct_greaters(var21);
}
var_deps = var24;
{
var25 = ((short int(*)(val* self))((((long)var_deps&3)?class_info[((long)var_deps&3)]:var_deps->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_deps); /* is_empty on <var_deps:Collection[Phase]>*/
}
if (var25){
var26 = glob_sys;
{
core__file___Sys___print(var26, var_p); /* Direct call file#Sys#print on <var26:Sys>*/
}
} else {
var27 = glob_sys;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " (dep: ";
var33 = core__flat___NativeString___to_s_full(var32, 7l, 7l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[1]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ")";
var37 = core__flat___NativeString___to_s_full(var36, 1l, 1l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[3]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_p); /* to_s on <var_p:Phase>*/
}
((struct instance_core__NativeArray*)var29)->values[0]=var38;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = ", ";
var42 = core__flat___NativeString___to_s_full(var41, 2l, 2l);
var40 = var42;
varonce39 = var40;
}
{
var43 = core__abstract_text___Collection___join(var_deps, var40);
}
((struct instance_core__NativeArray*)var29)->values[2]=var43;
{
var44 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
core__file___Sys___print(var27, var44); /* Direct call file#Sys#print on <var27:Sys>*/
}
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[Phase]>*/
}
}
BREAK_label19: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[Phase]>*/
}
var45 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var45,0l) on <var45:Sys> */
exit(0l);
RET_LABEL46:(void)0;
}
}
} else {
}
var_found = 0;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var49 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_50 = var47;
{
var51 = poset___poset__POSet___core__abstract_collection__Collection__iterator(var_50);
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:Iterator[Phase]>*/
}
if (var53){
} else {
goto BREAK_label54;
}
{
var55 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:Iterator[Phase]>*/
}
var_p56 = var55;
{
var57 = nitc___nitc__Phase___core__abstract_text__Object__to_s(var_p56);
}
{
{ /* Inline kernel#Object#!= (var_v,var57) on <var_v:String> */
var_other = var57;
{
var60 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_v, var_other); /* == on <var_v:String>*/
}
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
goto BREAK_label62;
} else {
}
var_found = 1;
{
{ /* Inline phase#Phase#disabled= (var_p56,1) on <var_p56:Phase> */
var_p56->attrs[COLOR_nitc__phase__Phase___disabled].s = 1; /* _disabled on <var_p56:Phase> */
RET_LABEL63:(void)0;
}
}
BREAK_label62: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:Iterator[Phase]>*/
}
}
BREAK_label54: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:Iterator[Phase]>*/
}
var64 = !var_found;
if (var64){
if (unlikely(varonce65==NULL)) {
var66 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Error: no phase named `";
var70 = core__flat___NativeString___to_s_full(var69, 23l, 23l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var66)->values[0]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "`. Use `list` to list all phases.";
var74 = core__flat___NativeString___to_s_full(var73, 33l, 33l);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var66)->values[2]=var72;
} else {
var66 = varonce65;
varonce65 = NULL;
}
((struct instance_core__NativeArray*)var66)->values[1]=var_v;
{
var75 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var75); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[String]>*/
}
{
{ /* Inline phase#ToolContext#opt_sloppy (self) on <self:ToolContext> */
var78 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 33);
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
self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s = 1; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL83:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method phase#ToolContext#phases_list for (self: ToolContext): Sequence[Phase] */
val* nitc__phase___ToolContext___phases_list(val* self) {
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
var1 = self->attrs[COLOR_nitc__phase__ToolContext___phases_list].val != NULL; /* _phases_list on <self:ToolContext> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__phase__ToolContext___phases_list].val; /* _phases_list on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases_list");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 72);
fatal_exit(1);
}
} else {
{
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var7 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core__array___Collection___to_a(var5);
}
var_phases = var8;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__Comparator___sort(var9, var_phases); /* Direct call sorter#Comparator#sort on <var9:POSet[Phase]>*/
}
var3 = var_phases;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__phase__ToolContext___phases_list].val = var3; /* _phases_list on <self:ToolContext> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#semantize_is_lazy for (self: ToolContext): Bool */
short int nitc__phase___ToolContext___semantize_is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#semantize_is_lazy= for (self: ToolContext, Bool) */
void nitc__phase___ToolContext___semantize_is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s = p0; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#phased_modules for (self: ToolContext): HashSet[AModule] */
val* nitc__phase___ToolContext___phased_modules(val* self) {
val* var /* : HashSet[AModule] */;
val* var1 /* : HashSet[AModule] */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#run_phases for (self: ToolContext, Collection[AModule]) */
void nitc__phase___ToolContext___run_phases(val* self, val* p0) {
val* var_nmodules /* var nmodules: Collection[AModule] */;
val* var /* : Sys */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_time0 /* var time0: Int */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : IndexedIterator[Phase] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
val* var13 /* : NativeArray[String] */;
static val* varonce12;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var_20 /* var : Collection[AModule] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : Iterator[AModule] */;
short int var23 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
val* var26 /* : HashSet[AModule] */;
val* var28 /* : HashSet[AModule] */;
short int var29 /* : Bool */;
val* var31 /* : HashSet[AModule] */;
val* var33 /* : HashSet[AModule] */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
val* var40 /* : Location */;
val* var42 /* : Location */;
val* var43 /* : nullable SourceFile */;
val* var45 /* : nullable SourceFile */;
val* var46 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : AnnotationPhaseVisitor */;
val* var_vannot /* var vannot: AnnotationPhaseVisitor */;
val* var_52 /* var : Sequence[Phase] */;
val* var53 /* : Iterator[nullable Object] */;
val* var_54 /* var : IndexedIterator[Phase] */;
short int var55 /* : Bool */;
val* var57 /* : nullable Object */;
val* var_phase58 /* var phase: Phase */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
val* var63 /* : ToolContext */;
val* var65 /* : ToolContext */;
short int var66 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
long var71 /* : Int */;
long var73 /* : Int */;
long var_errcount /* var errcount: Int */;
long var74 /* : Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
long var82 /* : Int */;
long var84 /* : Int */;
val* var85 /* : ANodes[AClassdef] */;
val* var87 /* : ANodes[AClassdef] */;
val* var_88 /* var : ANodes[AClassdef] */;
val* var89 /* : Iterator[ANode] */;
val* var_90 /* var : Iterator[AClassdef] */;
short int var91 /* : Bool */;
val* var93 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var94 /* : ToolContext */;
val* var96 /* : ToolContext */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : ANodes[APropdef] */;
val* var108 /* : ANodes[APropdef] */;
val* var_109 /* var : ANodes[APropdef] */;
val* var110 /* : Iterator[ANode] */;
val* var_111 /* var : Iterator[APropdef] */;
short int var112 /* : Bool */;
val* var114 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var115 /* : ToolContext */;
val* var117 /* : ToolContext */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
long var123 /* : Int */;
long var125 /* : Int */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
val* var131 /* : Array[AAnnotation] */;
val* var133 /* : Array[AAnnotation] */;
val* var_134 /* var : Array[AAnnotation] */;
val* var135 /* : IndexedIterator[nullable Object] */;
val* var_136 /* var : IndexedIterator[AAnnotation] */;
short int var137 /* : Bool */;
val* var139 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var140 /* : nullable ANode */;
val* var142 /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
short int var143 /* : Bool */;
int cltype;
int idtype;
val* var144 /* : nullable ANode */;
val* var146 /* : nullable ANode */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var_other150 /* var other: nullable Object */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
long var153 /* : Int */;
long var155 /* : Int */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var162 /* : Sys */;
long var163 /* : Int */;
long var165 /* : Int */;
long var_time1 /* var time1: Int */;
val* var167 /* : NativeArray[String] */;
static val* varonce166;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : String */;
long var176 /* : Int */;
short int var178 /* : Bool */;
int cltype179;
int idtype180;
const char* var_class_name;
long var181 /* : Int */;
val* var182 /* : String */;
val* var183 /* : String */;
short int var184 /* : Bool */;
var_nmodules = p0;
var = glob_sys;
{
{ /* Inline time#Sys#get_time (var) on <var:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var;
var3 = time___Sys_get_time___impl(var_for_c_0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_time0 = var1;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "*** SEMANTIC ANALYSIS ***";
var6 = core__flat___NativeString___to_s_full(var5, 25l, 25l);
var4 = var6;
varonce = var4;
}
{
nitc___nitc__ToolContext___info(self, var4, 1l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var7 = nitc__phase___ToolContext___phases_list(self);
}
var_phases = var7;
var_ = var_phases;
{
var8 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:IndexedIterator[Phase]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:IndexedIterator[Phase]>*/
}
var_phase = var11;
if (unlikely(varonce12==NULL)) {
var13 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = " registered phases: ";
var17 = core__flat___NativeString___to_s_full(var16, 20l, 20l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[0]=var15;
} else {
var13 = varonce12;
varonce12 = NULL;
}
{
var18 = ((val*(*)(val* self))(var_phase->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_phase); /* to_s on <var_phase:Phase>*/
}
((struct instance_core__NativeArray*)var13)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce12 = var13;
{
nitc___nitc__ToolContext___info(self, var19, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:IndexedIterator[Phase]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:IndexedIterator[Phase]>*/
}
var_20 = var_nmodules;
{
var21 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_20); /* iterator on <var_20:Collection[AModule]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:Iterator[AModule]>*/
}
if (var23){
} else {
goto BREAK_label24;
}
{
var25 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:Iterator[AModule]>*/
}
var_nmodule = var25;
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var28 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = core___core__HashSet___core__abstract_collection__Collection__has(var26, var_nmodule);
}
if (var29){
goto BREAK_label30;
} else {
}
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var33 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var31, var_nmodule); /* Direct call hash_collection#HashSet#add on <var31:HashSet[AModule]>*/
}
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Semantic analysis module ";
var39 = core__flat___NativeString___to_s_full(var38, 25l, 25l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var42 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline location#Location#file (var40) on <var40:Location> */
var45 = var40->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var40:Location> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 106);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var43) on <var43:nullable SourceFile> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var48 = var43->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var43:nullable SourceFile> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
((struct instance_core__NativeArray*)var35)->values[1]=var46;
{
var49 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
nitc___nitc__ToolContext___info(self, var49, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
var50 = NEW_nitc__phase__AnnotationPhaseVisitor(&type_nitc__phase__AnnotationPhaseVisitor);
{
{ /* Inline kernel#Object#init (var50) on <var50:AnnotationPhaseVisitor> */
RET_LABEL51:(void)0;
}
}
var_vannot = var50;
{
nitc___nitc__Visitor___enter_visit(var_vannot, var_nmodule); /* Direct call parser_nodes#Visitor#enter_visit on <var_vannot:AnnotationPhaseVisitor>*/
}
var_52 = var_phases;
{
var53 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_52); /* iterator on <var_52:Sequence[Phase]>*/
}
var_54 = var53;
for(;;) {
{
var55 = ((short int(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_54); /* is_ok on <var_54:IndexedIterator[Phase]>*/
}
if (var55){
} else {
goto BREAK_label56;
}
{
var57 = ((val*(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_54); /* item on <var_54:IndexedIterator[Phase]>*/
}
var_phase58 = var57;
{
{ /* Inline phase#Phase#disabled (var_phase58) on <var_phase58:Phase> */
var61 = var_phase58->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <var_phase58:Phase> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (var59){
goto BREAK_label62;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (var_phase58) on <var_phase58:Phase> */
var65 = var_phase58->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase58:Phase> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var63,self) on <var63:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:ToolContext> */
var70 = var63 == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (unlikely(!var66)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 113);
fatal_exit(1);
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var73 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
var_errcount = var71;
{
((void(*)(val* self, val* p0))(var_phase58->class->vft[COLOR_nitc__phase__Phase__process_nmodule]))(var_phase58, var_nmodule); /* process_nmodule on <var_phase58:Phase>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var76 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var74) on <var_errcount:Int> */
var79 = var_errcount == var74;
var80 = !var79;
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
{
var81 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var84 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_errcount = var82;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var87 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_88 = var85;
{
var89 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_88);
}
var_90 = var89;
for(;;) {
{
var91 = ((short int(*)(val* self))((((long)var_90&3)?class_info[((long)var_90&3)]:var_90->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_90); /* is_ok on <var_90:Iterator[AClassdef]>*/
}
if (var91){
} else {
goto BREAK_label92;
}
{
var93 = ((val*(*)(val* self))((((long)var_90&3)?class_info[((long)var_90&3)]:var_90->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_90); /* item on <var_90:Iterator[AClassdef]>*/
}
var_nclassdef = var93;
{
{ /* Inline phase#Phase#toolcontext (var_phase58) on <var_phase58:Phase> */
var96 = var_phase58->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase58:Phase> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var94,self) on <var94:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var94,var_other) on <var94:ToolContext> */
var101 = var94 == var_other;
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
if (unlikely(!var97)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 121);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_phase58->class->vft[COLOR_nitc__phase__Phase__process_nclassdef]))(var_phase58, var_nclassdef); /* process_nclassdef on <var_phase58:Phase>*/
}
{
{ /* Inline phase#ToolContext#semantize_is_lazy (self) on <self:ToolContext> */
var104 = self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
var105 = !var102;
if (var105){
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var108 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
var_109 = var106;
{
var110 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_109);
}
var_111 = var110;
for(;;) {
{
var112 = ((short int(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_111); /* is_ok on <var_111:Iterator[APropdef]>*/
}
if (var112){
} else {
goto BREAK_label113;
}
{
var114 = ((val*(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_111); /* item on <var_111:Iterator[APropdef]>*/
}
var_npropdef = var114;
{
{ /* Inline phase#Phase#toolcontext (var_phase58) on <var_phase58:Phase> */
var117 = var_phase58->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase58:Phase> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var115,self) on <var115:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var115,var_other) on <var115:ToolContext> */
var122 = var115 == var_other;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (unlikely(!var118)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 124);
fatal_exit(1);
}
{
nitc__phase___ToolContext___phase_process_npropdef(self, var_phase58, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_111); /* next on <var_111:Iterator[APropdef]>*/
}
}
BREAK_label113: (void)0;
{
((void(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_111); /* finish on <var_111:Iterator[APropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_90&3)?class_info[((long)var_90&3)]:var_90->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_90); /* next on <var_90:Iterator[AClassdef]>*/
}
}
BREAK_label92: (void)0;
{
((void(*)(val* self))((((long)var_90&3)?class_info[((long)var_90&3)]:var_90->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_90); /* finish on <var_90:Iterator[AClassdef]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var125 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var123) on <var_errcount:Int> */
var128 = var_errcount == var123;
var129 = !var128;
var126 = var129;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
if (var126){
{
var130 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (var_vannot) on <var_vannot:AnnotationPhaseVisitor> */
var133 = var_vannot->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <var_vannot:AnnotationPhaseVisitor> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 187);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
var_134 = var131;
{
var135 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_134);
}
var_136 = var135;
for(;;) {
{
var137 = ((short int(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_136); /* is_ok on <var_136:IndexedIterator[AAnnotation]>*/
}
if (var137){
} else {
goto BREAK_label138;
}
{
var139 = ((val*(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_136); /* item on <var_136:IndexedIterator[AAnnotation]>*/
}
var_na = var139;
{
{ /* Inline parser_nodes#ANode#parent (var_na) on <var_na:AAnnotation> */
var142 = var_na->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_na:AAnnotation> */
var140 = var142;
RET_LABEL141:(void)0;
}
}
var_p = var140;
/* <var_p:nullable ANode> isa AAnnotations */
cltype = type_nitc__AAnnotations.color;
idtype = type_nitc__AAnnotations.id;
if(var_p == NULL) {
var143 = 0;
} else {
if(cltype >= var_p->type->table_size) {
var143 = 0;
} else {
var143 = var_p->type->type_table[cltype] == idtype;
}
}
if (var143){
{
{ /* Inline parser_nodes#ANode#parent (var_p) on <var_p:nullable ANode(AAnnotations)> */
var146 = var_p->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_p:nullable ANode(AAnnotations)> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
var_p = var144;
} else {
}
if (var_p == NULL) {
var147 = 0; /* is null */
} else {
var147 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_p,((val*)NULL)) on <var_p:nullable ANode> */
var_other150 = ((val*)NULL);
{
var151 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_other150); /* == on <var_p:nullable ANode(ANode)>*/
}
var152 = !var151;
var148 = var152;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
if (unlikely(!var147)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 134);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_phase58->class->vft[COLOR_nitc__phase__Phase__process_annotated_node]))(var_phase58, var_p, var_na); /* process_annotated_node on <var_phase58:Phase>*/
}
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_136); /* next on <var_136:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label138: (void)0;
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_136); /* finish on <var_136:IndexedIterator[AAnnotation]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var155 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var153) on <var_errcount:Int> */
var158 = var_errcount == var153;
var159 = !var158;
var156 = var159;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
if (var156){
{
var160 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
BREAK_label62: (void)0;
{
((void(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_54); /* next on <var_54:IndexedIterator[Phase]>*/
}
}
BREAK_label56: (void)0;
{
((void(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_54); /* finish on <var_54:IndexedIterator[Phase]>*/
}
{
var161 = nitc___nitc__ToolContext___check_errors(self);
}
BREAK_label30: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:Iterator[AModule]>*/
}
}
BREAK_label24: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:Iterator[AModule]>*/
}
var162 = glob_sys;
{
{ /* Inline time#Sys#get_time (var162) on <var162:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var162;
var165 = time___Sys_get_time___impl(var_for_c_0);
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var_time1 = var163;
if (unlikely(varonce166==NULL)) {
var167 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "*** END SEMANTIC ANALYSIS: ";
var171 = core__flat___NativeString___to_s_full(var170, 27l, 27l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var167)->values[0]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = " ***";
var175 = core__flat___NativeString___to_s_full(var174, 4l, 4l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var167)->values[2]=var173;
} else {
var167 = varonce166;
varonce166 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var178 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var178)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var181 = var_time1 - var_time0;
var176 = var181;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var182 = core__flat___Int___core__abstract_text__Object__to_s(var176);
((struct instance_core__NativeArray*)var167)->values[1]=var182;
{
var183 = ((val*(*)(val* self))(var167->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var167); /* native_to_s on <var167:NativeArray[String]>*/
}
varonce166 = var167;
{
nitc___nitc__ToolContext___info(self, var183, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var184 = nitc___nitc__ToolContext___check_errors(self);
}
RET_LABEL:;
}
/* method phase#ToolContext#phase_process_npropdef for (self: ToolContext, Phase, APropdef) */
void nitc__phase___ToolContext___phase_process_npropdef(val* self, val* p0, val* p1) {
val* var_phase /* var phase: Phase */;
val* var_npropdef /* var npropdef: APropdef */;
var_phase = p0;
var_npropdef = p1;
{
((void(*)(val* self, val* p0))(var_phase->class->vft[COLOR_nitc__phase__Phase__process_npropdef]))(var_phase, var_npropdef); /* process_npropdef on <var_phase:Phase>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#run_phases_on_npropdef for (self: ToolContext, APropdef) */
void nitc__phase___ToolContext___run_phases_on_npropdef(val* self, val* p0) {
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
val* var17 /* : ToolContext */;
val* var19 /* : ToolContext */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_npropdef = p0;
{
{ /* Inline phase#ToolContext#semantize_is_lazy (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
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
var6 = var_npropdef->attrs[COLOR_nitc__phase__APropdef___is_phased].s; /* _is_phased on <var_npropdef:APropdef> */
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
var_npropdef->attrs[COLOR_nitc__phase__APropdef___is_phased].s = 1; /* _is_phased on <var_npropdef:APropdef> */
RET_LABEL7:(void)0;
}
}
{
var8 = nitc__phase___ToolContext___phases_list(self);
}
var_phases = var8;
var_ = var_phases;
{
var9 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[Phase]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[Phase]>*/
}
var_phase = var12;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var15 = var_phase->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
goto BREAK_label16;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (var_phase) on <var_phase:Phase> */
var19 = var_phase->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase:Phase> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var17,self) on <var17:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:ToolContext> */
var24 = var17 == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 170);
fatal_exit(1);
}
{
nitc__phase___ToolContext___phase_process_npropdef(self, var_phase, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
var25 = nitc___nitc__ToolContext___check_errors(self);
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[Phase]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[Phase]>*/
}
RET_LABEL:;
}
/* method phase#APropdef#is_phased for (self: APropdef): Bool */
short int nitc__phase___APropdef___is_phased(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__APropdef___is_phased].s; /* _is_phased on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#APropdef#is_phased= for (self: APropdef, Bool) */
void nitc__phase___APropdef___is_phased_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__APropdef___is_phased].s = p0; /* _is_phased on <self:APropdef> */
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#annotations for (self: AnnotationPhaseVisitor): Array[AAnnotation] */
val* nitc__phase___nitc__phase__AnnotationPhaseVisitor___annotations(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 187);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: AnnotationPhaseVisitor, ANode) */
void nitc__phase___nitc__phase__AnnotationPhaseVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Array[AAnnotation] */;
val* var3 /* : Array[AAnnotation] */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
/* <var_n:ANode> isa AAnnotation */
cltype = type_nitc__AAnnotation.color;
idtype = type_nitc__AAnnotation.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (self) on <self:AnnotationPhaseVisitor> */
var3 = self->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 187);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var1, var_n); /* Direct call array#Array#add on <var1:Array[AAnnotation]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#toolcontext for (self: Phase): ToolContext */
val* nitc___nitc__Phase___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#toolcontext= for (self: Phase, ToolContext) */
void nitc___nitc__Phase___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___toolcontext].val = p0; /* _toolcontext on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#in_hierarchy for (self: Phase): POSetElement[Phase] */
val* nitc___nitc__Phase___in_hierarchy(val* self) {
val* var /* : POSetElement[Phase] */;
val* var1 /* : POSetElement[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 203);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#in_hierarchy= for (self: Phase, POSetElement[Phase]) */
void nitc___nitc__Phase___in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val = p0; /* _in_hierarchy on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#depends for (self: Phase): nullable Collection[Phase] */
val* nitc___nitc__Phase___depends(val* self) {
val* var /* : nullable Collection[Phase] */;
val* var1 /* : nullable Collection[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__Phase___depends].val; /* _depends on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#depends= for (self: Phase, nullable Collection[Phase]) */
void nitc___nitc__Phase___depends_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___depends].val = p0; /* _depends on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#init for (self: Phase) */
void nitc___nitc__Phase___core__kernel__Object__init(val* self) {
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
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Phase___core__kernel__Object__init]))(self); /* init on <self:Phase>*/
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:Phase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline phase#ToolContext#phases (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
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
self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val = var6; /* _in_hierarchy on <self:Phase> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline phase#Phase#depends (self) on <self:Phase> */
var10 = self->attrs[COLOR_nitc__phase__Phase___depends].val; /* _depends on <self:Phase> */
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
var14 = ((short int(*)(val* self, val* p0))((((long)var_depends&3)?class_info[((long)var_depends&3)]:var_depends->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_depends, var_other); /* == on <var_depends:nullable Collection[Phase](Collection[Phase])>*/
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
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Phase]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[Phase]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[Phase]>*/
}
var_d = var19;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:Phase> */
var22 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline phase#ToolContext#phases (var20) on <var20:ToolContext> */
var25 = var20->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <var20:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
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
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[Phase]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[Phase]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#to_s for (self: Phase): String */
val* nitc___nitc__Phase___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
{
var1 = core__abstract_text___Object___class_name(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Phase";
var4 = core__flat___NativeString___to_s_full(var3, 5l, 5l);
var2 = var4;
varonce = var2;
}
{
var5 = core__file___String___strip_extension(var1, var2);
}
{
var6 = core___core__String___to_snake_case(var5);
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled for (self: Phase): Bool */
short int nitc___nitc__Phase___disabled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled= for (self: Phase, Bool) */
void nitc___nitc__Phase___disabled_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__Phase___disabled].s = p0; /* _disabled on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#process_nmodule for (self: Phase, AModule) */
void nitc___nitc__Phase___process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
var_nmodule = p0;
RET_LABEL:;
}
/* method phase#Phase#process_nclassdef for (self: Phase, AClassdef) */
void nitc___nitc__Phase___process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
var_nclassdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_npropdef for (self: Phase, APropdef) */
void nitc___nitc__Phase___process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
var_npropdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_annotated_node for (self: Phase, ANode, AAnnotation) */
void nitc___nitc__Phase___process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
var_node = p0;
var_nat = p1;
RET_LABEL:;
}
