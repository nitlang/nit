#include "phase.sep.0.h"
/* method phase#ToolContext#phases for (self: ToolContext): POSet[Phase] */
val* phase__ToolContext__phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#phases for (self: Object): POSet[Phase] */
val* VIRTUAL_phase__ToolContext__phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
val* var3 /* : POSet[Phase] */;
{ /* Inline phase#ToolContext#phases (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 23);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_disable_phase for (self: ToolContext): OptionArray */
val* phase__ToolContext__opt_disable_phase(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 30);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_disable_phase for (self: Object): OptionArray */
val* VIRTUAL_phase__ToolContext__opt_disable_phase(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 30);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#init for (self: ToolContext) */
void phase__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : Array[Option] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Option] */;
{
((void (*)(val*))(self->class->vft[COLOR_phase__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
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
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 30);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = 1;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var3;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var6); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#init for (self: Object) */
void VIRTUAL_phase__ToolContext__init(val* self) {
phase__ToolContext__init(self); /* Direct call phase#ToolContext#init on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method phase#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void phase__ToolContext__process_options(val* self, val* p0) {
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
long var12 /* : Int */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Sequence[Phase] */;
val* var_17 /* var : Sequence[Phase] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[Phase] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_p /* var p: Phase */;
val* var22 /* : POSetElement[Phase] */;
val* var24 /* : POSetElement[Phase] */;
val* var25 /* : Collection[Object] */;
val* var_deps /* var deps: Collection[Phase] */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
long var48 /* : Int */;
short int var50 /* : Bool */;
short int var_found /* var found: Bool */;
val* var51 /* : POSet[Phase] */;
val* var53 /* : POSet[Phase] */;
val* var_54 /* var : POSet[Phase] */;
val* var55 /* : Iterator[Object] */;
val* var_56 /* var : Iterator[Phase] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_p59 /* var p: Phase */;
val* var60 /* : String */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : null */;
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
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
var_args = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_phase__ToolContext__process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 30);
show_backtrace(1);
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
var6 = array__AbstractArrayRead__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = array__ArrayIterator__is_ok(var_7);
}
if (var8){
{
var9 = array__ArrayIterator__item(var_7);
}
var_v = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "list";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
var15 = string__FlatString___61d_61d(var_v, var10);
var14 = var15;
}
if (var14){
{
var16 = phase__ToolContext__phases_list(self);
}
var_17 = var16;
{
var18 = ((val* (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_17) /* iterator on <var_17:Sequence[Phase]>*/;
}
var_19 = var18;
for(;;) {
{
var20 = ((short int (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_19) /* is_ok on <var_19:IndexedIterator[Phase]>*/;
}
if (var20){
{
var21 = ((val* (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__item]))(var_19) /* item on <var_19:IndexedIterator[Phase]>*/;
}
var_p = var21;
{
{ /* Inline phase#Phase#in_hierarchy (var_p) on <var_p:Phase> */
var24 = var_p->attrs[COLOR_phase__Phase___in_hierarchy].val; /* _in_hierarchy on <var_p:Phase> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 165);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = poset__POSetElement__direct_greaters(var22);
}
var_deps = var25;
{
var26 = ((short int (*)(val*))(var_deps->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_deps) /* is_empty on <var_deps:Collection[Phase]>*/;
}
if (var26){
{
file__Object__print(self, var_p); /* Direct call file#Object#print on <self:ToolContext>*/
}
} else {
if (varonce27) {
var28 = varonce27;
} else {
var29 = " (dep: ";
var30 = 7;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = ", ";
var35 = 2;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
var37 = string__Collection__join(var_deps, var33);
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = ")";
var41 = 1;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 4;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var_p;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var28;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var37;
((struct instance_array__NativeArray*)var45)->values[3] = (val*) var39;
{
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
}
{
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
}
{
file__Object__print(self, var46); /* Direct call file#Object#print on <self:ToolContext>*/
}
}
{
((void (*)(val*))(var_19->class->vft[COLOR_abstract_collection__Iterator__next]))(var_19) /* next on <var_19:IndexedIterator[Phase]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_19) on <var_19:IndexedIterator[Phase]> */
RET_LABEL47:(void)0;
}
}
var48 = 0;
{
{ /* Inline kernel#Object#exit (self,var48) on <self:ToolContext> */
exit(var48);
RET_LABEL49:(void)0;
}
}
} else {
}
var50 = 0;
var_found = var50;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var53 = self->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 23);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var_54 = var51;
{
var55 = poset__POSet__iterator(var_54);
}
var_56 = var55;
for(;;) {
{
var57 = ((short int (*)(val*))(var_56->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_56) /* is_ok on <var_56:Iterator[Phase]>*/;
}
if (var57){
{
var58 = ((val* (*)(val*))(var_56->class->vft[COLOR_abstract_collection__Iterator__item]))(var_56) /* item on <var_56:Iterator[Phase]>*/;
}
var_p59 = var58;
{
var60 = phase__Phase__to_s(var_p59);
}
{
{ /* Inline kernel#Object#!= (var_v,var60) on <var_v:String> */
var_other = var60;
{
var65 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var_other) /* == on <var_v:String>*/;
var64 = var65;
}
var66 = !var64;
var62 = var66;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
goto BREAK_label67;
} else {
}
var68 = 1;
var_found = var68;
var69 = 1;
{
{ /* Inline phase#Phase#disabled= (var_p59,var69) on <var_p59:Phase> */
var_p59->attrs[COLOR_phase__Phase___disabled].s = var69; /* _disabled on <var_p59:Phase> */
RET_LABEL70:(void)0;
}
}
BREAK_label67: (void)0;
{
((void (*)(val*))(var_56->class->vft[COLOR_abstract_collection__Iterator__next]))(var_56) /* next on <var_56:Iterator[Phase]>*/;
}
} else {
goto BREAK_label71;
}
}
BREAK_label71: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_56) on <var_56:Iterator[Phase]> */
RET_LABEL72:(void)0;
}
}
var73 = !var_found;
if (var73){
var74 = NULL;
if (varonce75) {
var76 = varonce75;
} else {
var77 = "Error: no phase named `";
var78 = 23;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "`. Use `list` to list all phases.";
var83 = 33;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 3;
var87 = NEW_array__NativeArray(var86, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var87)->values[0] = (val*) var76;
((struct instance_array__NativeArray*)var87)->values[1] = (val*) var_v;
((struct instance_array__NativeArray*)var87)->values[2] = (val*) var81;
{
((void (*)(val*, val*, long))(var85->class->vft[COLOR_array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val*))(var85->class->vft[COLOR_string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
{
toolcontext__ToolContext__fatal_error(self, var74, var88); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
{
array__ArrayIterator__next(var_7); /* Direct call array#ArrayIterator#next on <var_7:ArrayIterator[String]>*/
}
} else {
goto BREAK_label89;
}
}
BREAK_label89: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:ArrayIterator[String]> */
RET_LABEL90:(void)0;
}
}
RET_LABEL:;
}
/* method phase#ToolContext#process_options for (self: Object, Sequence[String]) */
void VIRTUAL_phase__ToolContext__process_options(val* self, val* p0) {
phase__ToolContext__process_options(self, p0); /* Direct call phase#ToolContext#process_options on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method phase#ToolContext#phases_list for (self: ToolContext): Sequence[Phase] */
val* phase__ToolContext__phases_list(val* self) {
val* var /* : Sequence[Phase] */;
val* var1 /* : POSet[Phase] */;
val* var3 /* : POSet[Phase] */;
val* var4 /* : Array[nullable Object] */;
val* var_phases /* var phases: Array[Phase] */;
val* var5 /* : POSet[Phase] */;
val* var7 /* : POSet[Phase] */;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 23);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__Collection__to_a(var1);
}
var_phases = var4;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var7 = self->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 23);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
sorter__Comparator__sort(var5, var_phases); /* Direct call sorter#Comparator#sort on <var5:POSet[Phase]>*/
}
var = var_phases;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#phases_list for (self: Object): Sequence[Phase] */
val* VIRTUAL_phase__ToolContext__phases_list(val* self) {
val* var /* : Sequence[Phase] */;
val* var1 /* : Sequence[Phase] */;
var1 = phase__ToolContext__phases_list(self);
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#phased_modules for (self: ToolContext): HashSet[AModule] */
val* phase__ToolContext__phased_modules(val* self) {
val* var /* : HashSet[AModule] */;
val* var1 /* : HashSet[AModule] */;
var1 = self->attrs[COLOR_phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 74);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#phased_modules for (self: Object): HashSet[AModule] */
val* VIRTUAL_phase__ToolContext__phased_modules(val* self) {
val* var /* : HashSet[AModule] */;
val* var1 /* : HashSet[AModule] */;
val* var3 /* : HashSet[AModule] */;
{ /* Inline phase#ToolContext#phased_modules (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_phase__ToolContext___phased_modules].val; /* _phased_modules on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 74);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#run_phases for (self: ToolContext, Collection[AModule]) */
void phase__ToolContext__run_phases(val* self, val* p0) {
val* var_nmodules /* var nmodules: Collection[AModule] */;
long var /* : Int */;
long var2 /* : Int for extern */;
long var_time0 /* var time0: Int */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
val* var8 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[Phase] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
long var22 /* : Int */;
val* var_24 /* var : Collection[AModule] */;
val* var25 /* : Iterator[nullable Object] */;
val* var_26 /* var : Iterator[AModule] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
val* var29 /* : HashSet[AModule] */;
val* var31 /* : HashSet[AModule] */;
short int var32 /* : Bool */;
val* var34 /* : HashSet[AModule] */;
val* var36 /* : HashSet[AModule] */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : Location */;
val* var44 /* : Location */;
val* var45 /* : nullable SourceFile */;
val* var47 /* : nullable SourceFile */;
val* var48 /* : String */;
val* var50 /* : String */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
long var55 /* : Int */;
val* var56 /* : AnnotationPhaseVisitor */;
val* var_vannot /* var vannot: AnnotationPhaseVisitor */;
val* var_57 /* var : Sequence[Phase] */;
val* var58 /* : Iterator[nullable Object] */;
val* var_59 /* var : IndexedIterator[Phase] */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
val* var_phase62 /* var phase: Phase */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
long var76 /* : Int */;
val* var77 /* : ToolContext */;
val* var79 /* : ToolContext */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
long var86 /* : Int */;
long var88 /* : Int */;
long var_errcount /* var errcount: Int */;
long var89 /* : Int */;
long var91 /* : Int */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
long var98 /* : Int */;
long var100 /* : Int */;
val* var101 /* : ANodes[AClassdef] */;
val* var103 /* : ANodes[AClassdef] */;
val* var_104 /* var : ANodes[AClassdef] */;
val* var105 /* : Iterator[ANode] */;
val* var_106 /* var : Iterator[AClassdef] */;
short int var107 /* : Bool */;
val* var108 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var109 /* : ToolContext */;
val* var111 /* : ToolContext */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
val* var_nclassdef119 /* var nclassdef: AClassdef */;
val* var120 /* : ANodes[APropdef] */;
val* var122 /* : ANodes[APropdef] */;
val* var_123 /* var : ANodes[APropdef] */;
val* var124 /* : Iterator[ANode] */;
val* var_125 /* var : Iterator[APropdef] */;
short int var126 /* : Bool */;
val* var127 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var128 /* : ToolContext */;
val* var130 /* : ToolContext */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
long var141 /* : Int */;
long var143 /* : Int */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var149 /* : Array[AAnnotation] */;
val* var151 /* : Array[AAnnotation] */;
val* var_152 /* var : Array[AAnnotation] */;
val* var153 /* : ArrayIterator[nullable Object] */;
val* var_154 /* var : ArrayIterator[AAnnotation] */;
short int var155 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var157 /* : nullable ANode */;
val* var159 /* : nullable ANode */;
val* var160 /* : nullable ANode */;
val* var162 /* : nullable ANode */;
long var165 /* : Int */;
long var167 /* : Int */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
long var176 /* : Int */;
long var178 /* : Int for extern */;
long var_time1 /* var time1: Int */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
long var184 /* : Int */;
short int var186 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var187 /* : Int */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : FlatString */;
val* var193 /* : Array[Object] */;
long var194 /* : Int */;
val* var195 /* : NativeArray[Object] */;
val* var196 /* : Object */;
val* var197 /* : String */;
long var198 /* : Int */;
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
if (varonce) {
var3 = varonce;
} else {
var4 = "*** SEMANTIC ANALYSIS ***";
var5 = 25;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = 1;
{
toolcontext__ToolContext__info(self, var3, var7); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var8 = phase__ToolContext__phases_list(self);
}
var_phases = var8;
var_ = var_phases;
{
var9 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Sequence[Phase]>*/;
}
var_10 = var9;
for(;;) {
{
var11 = ((short int (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_10) /* is_ok on <var_10:IndexedIterator[Phase]>*/;
}
if (var11){
{
var12 = ((val* (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__item]))(var_10) /* item on <var_10:IndexedIterator[Phase]>*/;
}
var_phase = var12;
if (varonce13) {
var14 = varonce13;
} else {
var15 = " registered phases: ";
var16 = 20;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_phase;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
var22 = 2;
{
toolcontext__ToolContext__info(self, var21, var22); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
((void (*)(val*))(var_10->class->vft[COLOR_abstract_collection__Iterator__next]))(var_10) /* next on <var_10:IndexedIterator[Phase]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:IndexedIterator[Phase]> */
RET_LABEL23:(void)0;
}
}
var_24 = var_nmodules;
{
var25 = ((val* (*)(val*))(var_24->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_24) /* iterator on <var_24:Collection[AModule]>*/;
}
var_26 = var25;
for(;;) {
{
var27 = ((short int (*)(val*))(var_26->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_26) /* is_ok on <var_26:Iterator[AModule]>*/;
}
if (var27){
{
var28 = ((val* (*)(val*))(var_26->class->vft[COLOR_abstract_collection__Iterator__item]))(var_26) /* item on <var_26:Iterator[AModule]>*/;
}
var_nmodule = var28;
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 74);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = hash_collection__HashSet__has(var29, var_nmodule);
}
if (var32){
goto BREAK_label33;
} else {
}
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var36 = self->attrs[COLOR_phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 74);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
hash_collection__HashSet__add(var34, var_nmodule); /* Direct call hash_collection#HashSet#add on <var34:HashSet[AModule]>*/
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Semantic analysis module ";
var40 = 25;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var44 = var_nmodule->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline location#Location#file (var42) on <var42:Location> */
var47 = var42->attrs[COLOR_location__Location___file].val; /* _file on <var42:Location> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 94);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var45) on <var45:nullable SourceFile> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var50 = var45->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var45:nullable SourceFile> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 2;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var38;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var48;
{
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
var55 = 2;
{
toolcontext__ToolContext__info(self, var54, var55); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
var56 = NEW_phase__AnnotationPhaseVisitor(&type_phase__AnnotationPhaseVisitor);
{
((void (*)(val*))(var56->class->vft[COLOR_kernel__Object__init]))(var56) /* init on <var56:AnnotationPhaseVisitor>*/;
}
var_vannot = var56;
{
parser_nodes__Visitor__enter_visit(var_vannot, var_nmodule); /* Direct call parser_nodes#Visitor#enter_visit on <var_vannot:AnnotationPhaseVisitor>*/
}
var_57 = var_phases;
{
var58 = ((val* (*)(val*))(var_57->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_57) /* iterator on <var_57:Sequence[Phase]>*/;
}
var_59 = var58;
for(;;) {
{
var60 = ((short int (*)(val*))(var_59->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_59) /* is_ok on <var_59:IndexedIterator[Phase]>*/;
}
if (var60){
{
var61 = ((val* (*)(val*))(var_59->class->vft[COLOR_abstract_collection__Iterator__item]))(var_59) /* item on <var_59:IndexedIterator[Phase]>*/;
}
var_phase62 = var61;
{
{ /* Inline phase#Phase#disabled (var_phase62) on <var_phase62:Phase> */
var65 = var_phase62->attrs[COLOR_phase__Phase___disabled].s; /* _disabled on <var_phase62:Phase> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (var63){
goto BREAK_label66;
} else {
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = " phase: ";
var70 = 8;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 2;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var68;
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var_phase62;
{
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
}
var76 = 3;
{
toolcontext__ToolContext__info(self, var75, var76); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
{ /* Inline phase#Phase#toolcontext (var_phase62) on <var_phase62:Phase> */
var79 = var_phase62->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <var_phase62:Phase> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var77,self) on <var77:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var77,var_other) on <var77:ToolContext> */
var85 = var77 == var_other;
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
if (unlikely(!var80)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 102);
show_backtrace(1);
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var88 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_errcount = var86;
{
((void (*)(val*, val*))(var_phase62->class->vft[COLOR_phase__Phase__process_nmodule]))(var_phase62, var_nmodule) /* process_nmodule on <var_phase62:Phase>*/;
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var91 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var89) on <var_errcount:Int> */
var95 = var_errcount == var89;
var96 = !var95;
var93 = var96;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
goto BREAK_label97;
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var100 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
var_errcount = var98;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var103 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var_104 = var101;
{
var105 = parser_nodes__ANodes__iterator(var_104);
}
var_106 = var105;
for(;;) {
{
var107 = ((short int (*)(val*))(var_106->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_106) /* is_ok on <var_106:Iterator[AClassdef]>*/;
}
if (var107){
{
var108 = ((val* (*)(val*))(var_106->class->vft[COLOR_abstract_collection__Iterator__item]))(var_106) /* item on <var_106:Iterator[AClassdef]>*/;
}
var_nclassdef = var108;
{
{ /* Inline phase#Phase#toolcontext (var_phase62) on <var_phase62:Phase> */
var111 = var_phase62->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <var_phase62:Phase> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var109,self) on <var109:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var109,var_other) on <var109:ToolContext> */
var117 = var109 == var_other;
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
var112 = var113;
}
if (unlikely(!var112)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 111);
show_backtrace(1);
}
{
{ /* Inline phase#Phase#process_nclassdef (var_phase62,var_nclassdef) on <var_phase62:Phase> */
var_nclassdef119 = var_nclassdef;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var122 = var_nclassdef->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
var_123 = var120;
{
var124 = parser_nodes__ANodes__iterator(var_123);
}
var_125 = var124;
for(;;) {
{
var126 = ((short int (*)(val*))(var_125->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_125) /* is_ok on <var_125:Iterator[APropdef]>*/;
}
if (var126){
{
var127 = ((val* (*)(val*))(var_125->class->vft[COLOR_abstract_collection__Iterator__item]))(var_125) /* item on <var_125:Iterator[APropdef]>*/;
}
var_npropdef = var127;
{
{ /* Inline phase#Phase#toolcontext (var_phase62) on <var_phase62:Phase> */
var130 = var_phase62->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <var_phase62:Phase> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var128,self) on <var128:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var128,var_other) on <var128:ToolContext> */
var136 = var128 == var_other;
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
var132 = var134;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var131 = var132;
}
if (unlikely(!var131)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 114);
show_backtrace(1);
}
{
phase__ToolContext__phase_process_npropdef(self, var_phase62, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
((void (*)(val*))(var_125->class->vft[COLOR_abstract_collection__Iterator__next]))(var_125) /* next on <var_125:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label137;
}
}
BREAK_label137: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_125) on <var_125:Iterator[APropdef]> */
RET_LABEL138:(void)0;
}
}
{
((void (*)(val*))(var_106->class->vft[COLOR_abstract_collection__Iterator__next]))(var_106) /* next on <var_106:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label139;
}
}
BREAK_label139: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_106) on <var_106:Iterator[AClassdef]> */
RET_LABEL140:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var143 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var141) on <var_errcount:Int> */
var147 = var_errcount == var141;
var148 = !var147;
var145 = var148;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var144 = var145;
}
if (var144){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
goto BREAK_label97;
} else {
}
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (var_vannot) on <var_vannot:AnnotationPhaseVisitor> */
var151 = var_vannot->attrs[COLOR_phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <var_vannot:AnnotationPhaseVisitor> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 149);
show_backtrace(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
var_152 = var149;
{
var153 = array__AbstractArrayRead__iterator(var_152);
}
var_154 = var153;
for(;;) {
{
var155 = array__ArrayIterator__is_ok(var_154);
}
if (var155){
{
var156 = array__ArrayIterator__item(var_154);
}
var_na = var156;
{
{ /* Inline parser_nodes#ANode#parent (var_na) on <var_na:AAnnotation> */
var159 = var_na->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <var_na:AAnnotation> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
if (var157 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 123);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var157) on <var157:nullable ANode> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var162 = var157->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <var157:nullable ANode> */
var160 = var162;
RET_LABEL161:(void)0;
}
}
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 123);
show_backtrace(1);
}
{
((void (*)(val*, val*, val*))(var_phase62->class->vft[COLOR_phase__Phase__process_annotated_node]))(var_phase62, var160, var_na) /* process_annotated_node on <var_phase62:Phase>*/;
}
{
array__ArrayIterator__next(var_154); /* Direct call array#ArrayIterator#next on <var_154:ArrayIterator[AAnnotation]>*/
}
} else {
goto BREAK_label163;
}
}
BREAK_label163: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_154) on <var_154:ArrayIterator[AAnnotation]> */
RET_LABEL164:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var167 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var165) on <var_errcount:Int> */
var171 = var_errcount == var165;
var172 = !var171;
var169 = var172;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
var168 = var169;
}
if (var168){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
goto BREAK_label97;
} else {
}
BREAK_label66: (void)0;
{
((void (*)(val*))(var_59->class->vft[COLOR_abstract_collection__Iterator__next]))(var_59) /* next on <var_59:IndexedIterator[Phase]>*/;
}
} else {
goto BREAK_label97;
}
}
BREAK_label97: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_59) on <var_59:IndexedIterator[Phase]> */
RET_LABEL173:(void)0;
}
}
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
BREAK_label33: (void)0;
{
((void (*)(val*))(var_26->class->vft[COLOR_abstract_collection__Iterator__next]))(var_26) /* next on <var_26:Iterator[AModule]>*/;
}
} else {
goto BREAK_label174;
}
}
BREAK_label174: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_26) on <var_26:Iterator[AModule]> */
RET_LABEL175:(void)0;
}
}
{
{ /* Inline time#Object#get_time (self) on <self:ToolContext> */
var178 = kernel_Any_Any_get_time_0(self);
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var_time1 = var176;
if (varonce179) {
var180 = varonce179;
} else {
var181 = "*** END SEMANTIC ANALYSIS: ";
var182 = 27;
var183 = string__NativeString__to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var186 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var186)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var187 = var_time1 - var_time0;
var184 = var187;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = " ***";
var191 = 4;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var193 = array_instance Array[Object] */
var194 = 3;
var195 = NEW_array__NativeArray(var194, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var195)->values[0] = (val*) var180;
var196 = BOX_kernel__Int(var184); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var195)->values[1] = (val*) var196;
((struct instance_array__NativeArray*)var195)->values[2] = (val*) var189;
{
((void (*)(val*, val*, long))(var193->class->vft[COLOR_array__Array__with_native]))(var193, var195, var194) /* with_native on <var193:Array[Object]>*/;
}
}
{
var197 = ((val* (*)(val*))(var193->class->vft[COLOR_string__Object__to_s]))(var193) /* to_s on <var193:Array[Object]>*/;
}
var198 = 2;
{
toolcontext__ToolContext__info(self, var197, var198); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
toolcontext__ToolContext__errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#run_phases for (self: Object, Collection[AModule]) */
void VIRTUAL_phase__ToolContext__run_phases(val* self, val* p0) {
phase__ToolContext__run_phases(self, p0); /* Direct call phase#ToolContext#run_phases on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method phase#ToolContext#phase_process_npropdef for (self: ToolContext, Phase, APropdef) */
void phase__ToolContext__phase_process_npropdef(val* self, val* p0, val* p1) {
val* var_phase /* var phase: Phase */;
val* var_npropdef /* var npropdef: APropdef */;
var_phase = p0;
var_npropdef = p1;
{
((void (*)(val*, val*))(var_phase->class->vft[COLOR_phase__Phase__process_npropdef]))(var_phase, var_npropdef) /* process_npropdef on <var_phase:Phase>*/;
}
RET_LABEL:;
}
/* method phase#ToolContext#phase_process_npropdef for (self: Object, Phase, APropdef) */
void VIRTUAL_phase__ToolContext__phase_process_npropdef(val* self, val* p0, val* p1) {
phase__ToolContext__phase_process_npropdef(self, p0, p1); /* Direct call phase#ToolContext#phase_process_npropdef on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#annotations for (self: AnnotationPhaseVisitor): Array[AAnnotation] */
val* phase__AnnotationPhaseVisitor__annotations(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 149);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#annotations for (self: Object): Array[AAnnotation] */
val* VIRTUAL_phase__AnnotationPhaseVisitor__annotations(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
val* var3 /* : Array[AAnnotation] */;
{ /* Inline phase#AnnotationPhaseVisitor#annotations (self) on <self:Object(AnnotationPhaseVisitor)> */
var3 = self->attrs[COLOR_phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:Object(AnnotationPhaseVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 149);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: AnnotationPhaseVisitor, ANode) */
void phase__AnnotationPhaseVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Array[AAnnotation] */;
val* var3 /* : Array[AAnnotation] */;
var_n = p0;
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
}
/* <var_n:ANode> isa AAnnotation */
cltype = type_parser_nodes__AAnnotation.color;
idtype = type_parser_nodes__AAnnotation.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (self) on <self:AnnotationPhaseVisitor> */
var3 = self->attrs[COLOR_phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 149);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
array__Array__add(var1, var_n); /* Direct call array#Array#add on <var1:Array[AAnnotation]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: Object, ANode) */
void VIRTUAL_phase__AnnotationPhaseVisitor__visit(val* self, val* p0) {
phase__AnnotationPhaseVisitor__visit(self, p0); /* Direct call phase#AnnotationPhaseVisitor#visit on <self:Object(AnnotationPhaseVisitor)>*/
RET_LABEL:;
}
/* method phase#Phase#toolcontext for (self: Phase): ToolContext */
val* phase__Phase__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_phase__Phase__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
{ /* Inline phase#Phase#toolcontext (self) on <self:Object(Phase)> */
var3 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:Object(Phase)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#toolcontext= for (self: Phase, ToolContext) */
void phase__Phase__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_phase__Phase___toolcontext].val = p0; /* _toolcontext on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_phase__Phase__toolcontext_61d(val* self, val* p0) {
{ /* Inline phase#Phase#toolcontext= (self,p0) on <self:Object(Phase)> */
self->attrs[COLOR_phase__Phase___toolcontext].val = p0; /* _toolcontext on <self:Object(Phase)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method phase#Phase#in_hierarchy for (self: Phase): POSetElement[Phase] */
val* phase__Phase__in_hierarchy(val* self) {
val* var /* : POSetElement[Phase] */;
val* var1 /* : POSetElement[Phase] */;
var1 = self->attrs[COLOR_phase__Phase___in_hierarchy].val; /* _in_hierarchy on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 165);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#in_hierarchy for (self: Object): POSetElement[Phase] */
val* VIRTUAL_phase__Phase__in_hierarchy(val* self) {
val* var /* : POSetElement[Phase] */;
val* var1 /* : POSetElement[Phase] */;
val* var3 /* : POSetElement[Phase] */;
{ /* Inline phase#Phase#in_hierarchy (self) on <self:Object(Phase)> */
var3 = self->attrs[COLOR_phase__Phase___in_hierarchy].val; /* _in_hierarchy on <self:Object(Phase)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 165);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#in_hierarchy= for (self: Phase, POSetElement[Phase]) */
void phase__Phase__in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_phase__Phase___in_hierarchy].val = p0; /* _in_hierarchy on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#in_hierarchy= for (self: Object, POSetElement[Phase]) */
void VIRTUAL_phase__Phase__in_hierarchy_61d(val* self, val* p0) {
{ /* Inline phase#Phase#in_hierarchy= (self,p0) on <self:Object(Phase)> */
self->attrs[COLOR_phase__Phase___in_hierarchy].val = p0; /* _in_hierarchy on <self:Object(Phase)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method phase#Phase#init for (self: Phase, ToolContext, nullable Collection[Phase]) */
void phase__Phase__init(val* self, val* p0, val* p1) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_depends /* var depends: nullable Collection[Phase] */;
val* var /* : POSet[Phase] */;
val* var3 /* : POSet[Phase] */;
val* var4 /* : POSetElement[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_ /* var : Collection[Phase] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[Phase] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_d /* var d: Phase */;
val* var17 /* : POSet[Phase] */;
val* var19 /* : POSet[Phase] */;
var_toolcontext = p0;
var_depends = p1;
{
{ /* Inline phase#Phase#toolcontext= (self,var_toolcontext) on <self:Phase> */
self->attrs[COLOR_phase__Phase___toolcontext].val = var_toolcontext; /* _toolcontext on <self:Phase> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline phase#ToolContext#phases (var_toolcontext) on <var_toolcontext:ToolContext> */
var3 = var_toolcontext->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <var_toolcontext:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 23);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = poset__POSet__add_node(var, self);
}
{
{ /* Inline phase#Phase#in_hierarchy= (self,var4) on <self:Phase> */
self->attrs[COLOR_phase__Phase___in_hierarchy].val = var4; /* _in_hierarchy on <self:Phase> */
RET_LABEL5:(void)0;
}
}
var6 = NULL;
if (var_depends == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_depends,var6) on <var_depends:nullable Collection[Phase]> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_depends->class->vft[COLOR_kernel__Object___61d_61d]))(var_depends, var_other) /* == on <var_depends:nullable Collection[Phase](Collection[Phase])>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var_ = var_depends;
{
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Phase]>*/;
}
var_14 = var13;
for(;;) {
{
var15 = ((short int (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:Iterator[Phase]>*/;
}
if (var15){
{
var16 = ((val* (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__item]))(var_14) /* item on <var_14:Iterator[Phase]>*/;
}
var_d = var16;
{
{ /* Inline phase#ToolContext#phases (var_toolcontext) on <var_toolcontext:ToolContext> */
var19 = var_toolcontext->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <var_toolcontext:ToolContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 23);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
poset__POSet__add_edge(var17, self, var_d); /* Direct call poset#POSet#add_edge on <var17:POSet[Phase]>*/
}
{
((void (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__next]))(var_14) /* next on <var_14:Iterator[Phase]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:Iterator[Phase]> */
RET_LABEL20:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#init for (self: Object, ToolContext, nullable Collection[Phase]) */
void VIRTUAL_phase__Phase__init(val* self, val* p0, val* p1) {
phase__Phase__init(self, p0, p1); /* Direct call phase#Phase#init on <self:Object(Phase)>*/
RET_LABEL:;
}
/* method phase#Phase#to_s for (self: Phase): String */
val* phase__Phase__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
{
var1 = string__Object__class_name(self);
}
if (varonce) {
var2 = varonce;
} else {
var3 = "Phase";
var4 = 5;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = file__String__strip_extension(var1, var2);
}
{
var7 = string__FlatString__to_lower(var6);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method phase#Phase#to_s for (self: Object): String */
val* VIRTUAL_phase__Phase__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = phase__Phase__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled for (self: Phase): Bool */
short int phase__Phase__disabled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_phase__Phase___disabled].s; /* _disabled on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled for (self: Object): Bool */
short int VIRTUAL_phase__Phase__disabled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline phase#Phase#disabled (self) on <self:Object(Phase)> */
var3 = self->attrs[COLOR_phase__Phase___disabled].s; /* _disabled on <self:Object(Phase)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled= for (self: Phase, Bool) */
void phase__Phase__disabled_61d(val* self, short int p0) {
self->attrs[COLOR_phase__Phase___disabled].s = p0; /* _disabled on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#disabled= for (self: Object, Bool) */
void VIRTUAL_phase__Phase__disabled_61d(val* self, short int p0) {
{ /* Inline phase#Phase#disabled= (self,p0) on <self:Object(Phase)> */
self->attrs[COLOR_phase__Phase___disabled].s = p0; /* _disabled on <self:Object(Phase)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method phase#Phase#process_nmodule for (self: Phase, AModule) */
void phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
var_nmodule = p0;
RET_LABEL:;
}
/* method phase#Phase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
{ /* Inline phase#Phase#process_nmodule (self,p0) on <self:Object(Phase)> */
var_nmodule = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method phase#Phase#process_nclassdef for (self: Phase, AClassdef) */
void phase__Phase__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
var_nclassdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_nclassdef for (self: Object, AClassdef) */
void VIRTUAL_phase__Phase__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
{ /* Inline phase#Phase#process_nclassdef (self,p0) on <self:Object(Phase)> */
var_nclassdef = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method phase#Phase#process_npropdef for (self: Phase, APropdef) */
void phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
var_npropdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
{ /* Inline phase#Phase#process_npropdef (self,p0) on <self:Object(Phase)> */
var_npropdef = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method phase#Phase#process_annotated_node for (self: Phase, ANode, AAnnotation) */
void phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
var_node = p0;
var_nat = p1;
RET_LABEL:;
}
/* method phase#Phase#process_annotated_node for (self: Object, ANode, AAnnotation) */
void VIRTUAL_phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
{ /* Inline phase#Phase#process_annotated_node (self,p0,p1) on <self:Object(Phase)> */
var_node = p0;
var_nat = p1;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
