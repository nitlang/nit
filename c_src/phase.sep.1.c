#include "phase.sep.0.h"
/* method phase#ToolContext#phases for (self: ToolContext): POSet[Phase] */
val* phase__ToolContext__phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 23);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 23);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 30);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 30);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 30);
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
val* var6 /* : ArrayIterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_v /* var v: String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Sequence[Phase] */;
val* var16 /* : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_p /* var p: Phase */;
val* var19 /* : POSetElement[Phase] */;
val* var21 /* : POSetElement[Phase] */;
val* var22 /* : Collection[Object] */;
val* var_deps /* var deps: Collection[Phase] */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
long var44 /* : Int */;
short int var46 /* : Bool */;
short int var_found /* var found: Bool */;
val* var47 /* : POSet[Phase] */;
val* var49 /* : POSet[Phase] */;
val* var50 /* : Iterator[Object] */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_p53 /* var p: Phase */;
val* var54 /* : String */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : null */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
var_args = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_phase__ToolContext__process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 30);
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
{
var6 = array__AbstractArrayRead__iterator(var3);
}
for(;;) {
{
var7 = array__ArrayIterator__is_ok(var6);
}
if(!var7) break;
{
var8 = array__ArrayIterator__item(var6);
}
var_v = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "list";
var11 = 4;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
var14 = string__FlatString___61d_61d(var_v, var9);
var13 = var14;
}
if (var13){
{
var15 = phase__ToolContext__phases_list(self);
}
{
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Collection__iterator]))(var15) /* iterator on <var15:Sequence[Phase]>*/;
}
for(;;) {
{
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[nullable Object]>*/;
}
if(!var17) break;
{
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[nullable Object]>*/;
}
var_p = var18;
{
{ /* Inline phase#Phase#in_hierarchy (var_p) on <var_p:Phase> */
var21 = var_p->attrs[COLOR_phase__Phase___in_hierarchy].val; /* _in_hierarchy on <var_p:Phase> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 148);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = poset__POSetElement__direct_greaters(var19);
}
var_deps = var22;
{
var23 = ((short int (*)(val*))(var_deps->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_deps) /* is_empty on <var_deps:Collection[Phase]>*/;
}
if (var23){
{
file__Object__print(self, var_p); /* Direct call file#Object#print on <self:ToolContext>*/
}
} else {
if (varonce24) {
var25 = varonce24;
} else {
var26 = " (dep: ";
var27 = 7;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = ", ";
var32 = 2;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
var34 = string__Collection__join(var_deps, var30);
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = ")";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 4;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var_p;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var25;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var34;
((struct instance_array__NativeArray*)var42)->values[3] = (val*) var36;
{
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
}
{
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
}
{
file__Object__print(self, var43); /* Direct call file#Object#print on <self:ToolContext>*/
}
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
var44 = 0;
{
{ /* Inline kernel#Object#exit (self,var44) on <self:ToolContext> */
exit(var44);
RET_LABEL45:(void)0;
}
}
} else {
}
var46 = 0;
var_found = var46;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var49 = self->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 23);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = poset__POSet__iterator(var47);
}
for(;;) {
{
var51 = ((short int (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var50) /* is_ok on <var50:Iterator[Object]>*/;
}
if(!var51) break;
{
var52 = ((val* (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__item]))(var50) /* item on <var50:Iterator[Object]>*/;
}
var_p53 = var52;
{
var54 = phase__Phase__to_s(var_p53);
}
{
{ /* Inline kernel#Object#!= (var_v,var54) on <var_v:String> */
var_other = var54;
{
var59 = ((short int (*)(val*, val*))(var_v->class->vft[COLOR_kernel__Object___61d_61d]))(var_v, var_other) /* == on <var_v:String>*/;
var58 = var59;
}
var60 = !var58;
var56 = var60;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
goto CONTINUE_label61;
} else {
}
var62 = 1;
var_found = var62;
var63 = 1;
{
{ /* Inline phase#Phase#disabled= (var_p53,var63) on <var_p53:Phase> */
var_p53->attrs[COLOR_phase__Phase___disabled].s = var63; /* _disabled on <var_p53:Phase> */
RET_LABEL64:(void)0;
}
}
CONTINUE_label61: (void)0;
{
((void (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__next]))(var50) /* next on <var50:Iterator[Object]>*/;
}
}
BREAK_label61: (void)0;
var65 = !var_found;
if (var65){
var66 = NULL;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "Error: no phase named `";
var70 = 23;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "`. Use `list` to list all phases.";
var75 = 33;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 3;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var68;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var_v;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var73;
{
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
toolcontext__ToolContext__fatal_error(self, var66, var80); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
CONTINUE_label81: (void)0;
{
array__ArrayIterator__next(var6); /* Direct call array#ArrayIterator#next on <var6:ArrayIterator[nullable Object]>*/
}
}
BREAK_label81: (void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 23);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 23);
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
/* method phase#ToolContext#run_phases for (self: ToolContext, Collection[AModule]) */
void phase__ToolContext__run_phases(val* self, val* p0) {
val* var_nmodules /* var nmodules: Collection[AModule] */;
long var /* : Int */;
long var2 /* : Int */;
long var_time0 /* var time0: Int */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
val* var8 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
long var21 /* : Int */;
val* var22 /* : Iterator[nullable Object] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
val* var30 /* : Location */;
val* var31 /* : nullable SourceFile */;
val* var33 /* : nullable SourceFile */;
val* var34 /* : String */;
val* var36 /* : String */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
long var41 /* : Int */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_phase45 /* var phase: Phase */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
long var59 /* : Int */;
val* var60 /* : ToolContext */;
val* var62 /* : ToolContext */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var69 /* : Int */;
long var71 /* : Int */;
long var_errcount /* var errcount: Int */;
long var72 /* : Int */;
long var74 /* : Int */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
long var80 /* : Int */;
long var82 /* : Int */;
val* var83 /* : ANodes[AClassdef] */;
val* var85 /* : ANodes[AClassdef] */;
val* var86 /* : Iterator[ANode] */;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
val* var99 /* : Location */;
val* var100 /* : Array[Object] */;
long var101 /* : Int */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : String */;
long var104 /* : Int */;
val* var105 /* : ToolContext */;
val* var107 /* : ToolContext */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
val* var_nclassdef115 /* var nclassdef: AClassdef */;
val* var116 /* : ANodes[APropdef] */;
val* var118 /* : ANodes[APropdef] */;
val* var119 /* : Iterator[ANode] */;
short int var120 /* : Bool */;
val* var121 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var122 /* : ToolContext */;
val* var124 /* : ToolContext */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
long var133 /* : Int */;
long var135 /* : Int */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
val* var141 /* : AnnotationPhaseVisitor */;
val* var_v /* var v: AnnotationPhaseVisitor */;
long var142 /* : Int */;
long var144 /* : Int */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
long var151 /* : Int */;
long var153 /* : Int */;
long var_time1 /* var time1: Int */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : FlatString */;
long var159 /* : Int */;
short int var161 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var162 /* : Int */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
val* var168 /* : Array[Object] */;
long var169 /* : Int */;
val* var170 /* : NativeArray[Object] */;
val* var171 /* : Object */;
val* var172 /* : String */;
long var173 /* : Int */;
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
{
var9 = ((val* (*)(val*))(var_phases->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_phases) /* iterator on <var_phases:Sequence[Phase]>*/;
}
for(;;) {
{
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
}
if(!var10) break;
{
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
}
var_phase = var11;
if (varonce12) {
var13 = varonce12;
} else {
var14 = " registered phases: ";
var15 = 20;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 2;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var_phase;
{
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
}
{
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
}
var21 = 2;
{
toolcontext__ToolContext__info(self, var20, var21); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
var22 = ((val* (*)(val*))(var_nmodules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_nmodules) /* iterator on <var_nmodules:Collection[AModule]>*/;
}
for(;;) {
{
var23 = ((short int (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var22) /* is_ok on <var22:Iterator[nullable Object]>*/;
}
if(!var23) break;
{
var24 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__item]))(var22) /* item on <var22:Iterator[nullable Object]>*/;
}
var_nmodule = var24;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "Semantic analysis module ";
var28 = 25;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
{
var30 = parser_nodes__ANode__location(var_nmodule);
}
{
{ /* Inline location#Location#file (var30) on <var30:Location> */
var33 = var30->attrs[COLOR_location__Location___file].val; /* _file on <var30:Location> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 88);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var31) on <var31:nullable SourceFile> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var36 = var31->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var31:nullable SourceFile> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 2;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var34;
{
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
var41 = 2;
{
toolcontext__ToolContext__info(self, var40, var41); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var42 = ((val* (*)(val*))(var_phases->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_phases) /* iterator on <var_phases:Sequence[Phase]>*/;
}
for(;;) {
{
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
}
if(!var43) break;
{
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
}
var_phase45 = var44;
{
{ /* Inline phase#Phase#disabled (var_phase45) on <var_phase45:Phase> */
var48 = var_phase45->attrs[COLOR_phase__Phase___disabled].s; /* _disabled on <var_phase45:Phase> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46){
goto CONTINUE_label49;
} else {
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = " phase: ";
var53 = 8;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 2;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var_phase45;
{
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
var59 = 3;
{
toolcontext__ToolContext__info(self, var58, var59); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
{ /* Inline phase#Phase#toolcontext (var_phase45) on <var_phase45:Phase> */
var62 = var_phase45->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <var_phase45:Phase> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
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
var68 = var60 == var_other;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (unlikely(!var63)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 92);
show_backtrace(1);
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var71 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_errcount = var69;
{
((void (*)(val*, val*))(var_phase45->class->vft[COLOR_phase__Phase__process_nmodule]))(var_phase45, var_nmodule) /* process_nmodule on <var_phase45:Phase>*/;
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var74 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var72) on <var_errcount:Int> */
var78 = var_errcount == var72;
var79 = !var78;
var76 = var79;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
goto BREAK_label49;
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var82 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_errcount = var80;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var85 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = parser_nodes__ANodes__iterator(var83);
}
for(;;) {
{
var87 = ((short int (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var86) /* is_ok on <var86:Iterator[ANode]>*/;
}
if(!var87) break;
{
var88 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__item]))(var86) /* item on <var86:Iterator[ANode]>*/;
}
var_nclassdef = var88;
if (varonce89) {
var90 = varonce89;
} else {
var91 = " phase: ";
var92 = 8;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = " for ";
var97 = 5;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
{
var99 = parser_nodes__ANode__location(var_nclassdef);
}
var100 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var100 = array_instance Array[Object] */
var101 = 4;
var102 = NEW_array__NativeArray(var101, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var102)->values[0] = (val*) var90;
((struct instance_array__NativeArray*)var102)->values[1] = (val*) var_phase45;
((struct instance_array__NativeArray*)var102)->values[2] = (val*) var95;
((struct instance_array__NativeArray*)var102)->values[3] = (val*) var99;
{
((void (*)(val*, val*, long))(var100->class->vft[COLOR_array__Array__with_native]))(var100, var102, var101) /* with_native on <var100:Array[Object]>*/;
}
}
{
var103 = ((val* (*)(val*))(var100->class->vft[COLOR_string__Object__to_s]))(var100) /* to_s on <var100:Array[Object]>*/;
}
var104 = 3;
{
toolcontext__ToolContext__info(self, var103, var104); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
{ /* Inline phase#Phase#toolcontext (var_phase45) on <var_phase45:Phase> */
var107 = var_phase45->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <var_phase45:Phase> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var105,self) on <var105:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var105,var_other) on <var105:ToolContext> */
var113 = var105 == var_other;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (unlikely(!var108)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 102);
show_backtrace(1);
}
{
{ /* Inline phase#Phase#process_nclassdef (var_phase45,var_nclassdef) on <var_phase45:Phase> */
var_nclassdef115 = var_nclassdef;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var118 = var_nclassdef->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
var119 = parser_nodes__ANodes__iterator(var116);
}
for(;;) {
{
var120 = ((short int (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var119) /* is_ok on <var119:Iterator[ANode]>*/;
}
if(!var120) break;
{
var121 = ((val* (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__item]))(var119) /* item on <var119:Iterator[ANode]>*/;
}
var_npropdef = var121;
{
{ /* Inline phase#Phase#toolcontext (var_phase45) on <var_phase45:Phase> */
var124 = var_phase45->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <var_phase45:Phase> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var122,self) on <var122:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var122,var_other) on <var122:ToolContext> */
var130 = var122 == var_other;
var128 = var130;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
var125 = var126;
}
if (unlikely(!var125)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 105);
show_backtrace(1);
}
{
((void (*)(val*, val*))(var_phase45->class->vft[COLOR_phase__Phase__process_npropdef]))(var_phase45, var_npropdef) /* process_npropdef on <var_phase45:Phase>*/;
}
CONTINUE_label131: (void)0;
{
((void (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__next]))(var119) /* next on <var119:Iterator[ANode]>*/;
}
}
BREAK_label131: (void)0;
CONTINUE_label132: (void)0;
{
((void (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__next]))(var86) /* next on <var86:Iterator[ANode]>*/;
}
}
BREAK_label132: (void)0;
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var135 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var133) on <var_errcount:Int> */
var139 = var_errcount == var133;
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
var136 = var137;
}
if (var136){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
goto BREAK_label49;
} else {
}
var141 = NEW_phase__AnnotationPhaseVisitor(&type_phase__AnnotationPhaseVisitor);
{
phase__AnnotationPhaseVisitor__init(var141, var_phase45); /* Direct call phase#AnnotationPhaseVisitor#init on <var141:AnnotationPhaseVisitor>*/
}
var_v = var141;
{
parser_nodes__Visitor__enter_visit(var_v, var_nmodule); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:AnnotationPhaseVisitor>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var144 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var142) on <var_errcount:Int> */
var148 = var_errcount == var142;
var149 = !var148;
var146 = var149;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
var145 = var146;
}
if (var145){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
goto BREAK_label49;
} else {
}
CONTINUE_label49: (void)0;
{
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
}
BREAK_label49: (void)0;
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
CONTINUE_label150: (void)0;
{
((void (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__next]))(var22) /* next on <var22:Iterator[nullable Object]>*/;
}
}
BREAK_label150: (void)0;
{
{ /* Inline time#Object#get_time (self) on <self:ToolContext> */
var153 = kernel_Any_Any_get_time_0(self);
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
var_time1 = var151;
if (varonce154) {
var155 = varonce154;
} else {
var156 = "*** END SEMANTIC ANALYSIS: ";
var157 = 27;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var161 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var161)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var162 = var_time1 - var_time0;
var159 = var162;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = " ***";
var166 = 4;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var168 = array_instance Array[Object] */
var169 = 3;
var170 = NEW_array__NativeArray(var169, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var170)->values[0] = (val*) var155;
var171 = BOX_kernel__Int(var159); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var170)->values[1] = (val*) var171;
((struct instance_array__NativeArray*)var170)->values[2] = (val*) var164;
{
((void (*)(val*, val*, long))(var168->class->vft[COLOR_array__Array__with_native]))(var168, var170, var169) /* with_native on <var168:Array[Object]>*/;
}
}
{
var172 = ((val* (*)(val*))(var168->class->vft[COLOR_string__Object__to_s]))(var168) /* to_s on <var168:Array[Object]>*/;
}
var173 = 2;
{
toolcontext__ToolContext__info(self, var172, var173); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#run_phases for (self: Object, Collection[AModule]) */
void VIRTUAL_phase__ToolContext__run_phases(val* self, val* p0) {
phase__ToolContext__run_phases(self, p0); /* Direct call phase#ToolContext#run_phases on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#phase for (self: AnnotationPhaseVisitor): Phase */
val* phase__AnnotationPhaseVisitor__phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_phase__AnnotationPhaseVisitor___phase].val; /* _phase on <self:AnnotationPhaseVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 131);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#phase for (self: Object): Phase */
val* VIRTUAL_phase__AnnotationPhaseVisitor__phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
{ /* Inline phase#AnnotationPhaseVisitor#phase (self) on <self:Object(AnnotationPhaseVisitor)> */
var3 = self->attrs[COLOR_phase__AnnotationPhaseVisitor___phase].val; /* _phase on <self:Object(AnnotationPhaseVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 131);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#phase= for (self: AnnotationPhaseVisitor, Phase) */
void phase__AnnotationPhaseVisitor__phase_61d(val* self, val* p0) {
self->attrs[COLOR_phase__AnnotationPhaseVisitor___phase].val = p0; /* _phase on <self:AnnotationPhaseVisitor> */
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#phase= for (self: Object, Phase) */
void VIRTUAL_phase__AnnotationPhaseVisitor__phase_61d(val* self, val* p0) {
{ /* Inline phase#AnnotationPhaseVisitor#phase= (self,p0) on <self:Object(AnnotationPhaseVisitor)> */
self->attrs[COLOR_phase__AnnotationPhaseVisitor___phase].val = p0; /* _phase on <self:Object(AnnotationPhaseVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#init for (self: AnnotationPhaseVisitor, Phase) */
void phase__AnnotationPhaseVisitor__init(val* self, val* p0) {
val* var_phase /* var phase: Phase */;
{
{ /* Inline parser_nodes#Visitor#init (self) on <self:AnnotationPhaseVisitor> */
RET_LABEL1:(void)0;
}
}
var_phase = p0;
{
{ /* Inline phase#AnnotationPhaseVisitor#phase= (self,var_phase) on <self:AnnotationPhaseVisitor> */
self->attrs[COLOR_phase__AnnotationPhaseVisitor___phase].val = var_phase; /* _phase on <self:AnnotationPhaseVisitor> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#init for (self: Object, Phase) */
void VIRTUAL_phase__AnnotationPhaseVisitor__init(val* self, val* p0) {
phase__AnnotationPhaseVisitor__init(self, p0); /* Direct call phase#AnnotationPhaseVisitor#init on <self:Object(AnnotationPhaseVisitor)>*/
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: AnnotationPhaseVisitor, ANode) */
void phase__AnnotationPhaseVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
val* var4 /* : nullable ANode */;
val* var6 /* : nullable ANode */;
val* var7 /* : nullable ANode */;
val* var9 /* : nullable ANode */;
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
{ /* Inline phase#AnnotationPhaseVisitor#phase (self) on <self:AnnotationPhaseVisitor> */
var3 = self->attrs[COLOR_phase__AnnotationPhaseVisitor___phase].val; /* _phase on <self:AnnotationPhaseVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 131);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent (var_n) on <var_n:ANode(AAnnotation)> */
var6 = var_n->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <var_n:ANode(AAnnotation)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 138);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var4) on <var4:nullable ANode> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 38);
show_backtrace(1);
}
var9 = var4->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <var4:nullable ANode> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 138);
show_backtrace(1);
}
{
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_phase__Phase__process_annotated_node]))(var1, var7, var_n) /* process_annotated_node on <var1:Phase>*/;
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 148);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 148);
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
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_d /* var d: Phase */;
val* var16 /* : POSet[Phase] */;
val* var18 /* : POSet[Phase] */;
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 23);
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
{
var13 = ((val* (*)(val*))(var_depends->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_depends) /* iterator on <var_depends:nullable Collection[Phase](Collection[Phase])>*/;
}
for(;;) {
{
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
}
if(!var14) break;
{
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
}
var_d = var15;
{
{ /* Inline phase#ToolContext#phases (var_toolcontext) on <var_toolcontext:ToolContext> */
var18 = var_toolcontext->attrs[COLOR_phase__ToolContext___phases].val; /* _phases on <var_toolcontext:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 23);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
poset__POSet__add_edge(var16, self, var_d); /* Direct call poset#POSet#add_edge on <var16:POSet[Phase]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
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
