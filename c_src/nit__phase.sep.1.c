#include "nit__phase.sep.0.h"
/* method phase#ToolContext#phases for (self: ToolContext): POSet[Phase] */
val* nit__phase___ToolContext___phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
long var10 /* : Int */;
val* var11 /* : NativeArray[Option] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit__phase___ToolContext___standard__kernel__Object__init]))(self) /* init on <self:ToolContext>*/;
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
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 30);
show_backtrace(1);
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
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var9 = array_instance Array[Option] */
var10 = 2;
var11 = NEW_standard__NativeArray(var10, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var6;
{
((void (*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Option]>*/;
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
long var12 /* : Int */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
val* var15 /* : Sequence[Phase] */;
val* var_16 /* var : Sequence[Phase] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : IndexedIterator[Phase] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_p /* var p: Phase */;
val* var21 /* : POSetElement[Phase] */;
val* var23 /* : POSetElement[Phase] */;
val* var24 /* : Collection[nullable Object] */;
val* var_deps /* var deps: Collection[Phase] */;
short int var25 /* : Bool */;
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
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
long var47 /* : Int */;
short int var49 /* : Bool */;
short int var_found /* var found: Bool */;
val* var50 /* : POSet[Phase] */;
val* var52 /* : POSet[Phase] */;
val* var_53 /* var : POSet[Phase] */;
val* var54 /* : Iterator[nullable Object] */;
val* var_55 /* var : Iterator[Phase] */;
short int var56 /* : Bool */;
val* var57 /* : nullable Object */;
val* var_p58 /* var p: Phase */;
val* var59 /* : String */;
short int var60 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : null */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
val* var82 /* : Array[Object] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[Object] */;
val* var85 /* : String */;
val* var88 /* : OptionBool */;
val* var90 /* : OptionBool */;
val* var91 /* : nullable Object */;
val* var93 /* : nullable Object */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
var_args = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__phase___ToolContext___process_options]))(self, p0) /* process_options on <self:ToolContext>*/;
}
{
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 30);
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
if (varonce) {
var10 = varonce;
} else {
var11 = "list";
var12 = 4;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
var14 = ((short int (*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var10) /* == on <var_v:String>*/;
}
if (var14){
{
var15 = nit__phase___ToolContext___phases_list(self);
}
var_16 = var15;
{
var17 = ((val* (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_16) /* iterator on <var_16:Sequence[Phase]>*/;
}
var_18 = var17;
for(;;) {
{
var19 = ((short int (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_18) /* is_ok on <var_18:IndexedIterator[Phase]>*/;
}
if (var19){
{
var20 = ((val* (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_18) /* item on <var_18:IndexedIterator[Phase]>*/;
}
var_p = var20;
{
{ /* Inline phase#Phase#in_hierarchy (var_p) on <var_p:Phase> */
var23 = var_p->attrs[COLOR_nit__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <var_p:Phase> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 204);
show_backtrace(1);
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
var25 = ((short int (*)(val* self))(var_deps->class->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_deps) /* is_empty on <var_deps:Collection[Phase]>*/;
}
if (var25){
{
standard__file___Object___print(self, var_p); /* Direct call file#Object#print on <self:ToolContext>*/
}
} else {
if (varonce26) {
var27 = varonce26;
} else {
var28 = " (dep: ";
var29 = 7;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = ", ";
var34 = 2;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
var36 = standard__string___Collection___join(var_deps, var32);
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ")";
var40 = 1;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 4;
var44 = NEW_standard__NativeArray(var43, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var44)->values[0] = (val*) var_p;
((struct instance_standard__NativeArray*)var44)->values[1] = (val*) var27;
((struct instance_standard__NativeArray*)var44)->values[2] = (val*) var36;
((struct instance_standard__NativeArray*)var44)->values[3] = (val*) var38;
{
((void (*)(val* self, val* p0, long p1))(var42->class->vft[COLOR_standard__array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
}
{
var45 = ((val* (*)(val* self))(var42->class->vft[COLOR_standard__string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
}
{
standard__file___Object___print(self, var45); /* Direct call file#Object#print on <self:ToolContext>*/
}
}
{
((void (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_18) /* next on <var_18:IndexedIterator[Phase]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_18) on <var_18:IndexedIterator[Phase]> */
RET_LABEL46:(void)0;
}
}
var47 = 0;
{
{ /* Inline kernel#Object#exit (self,var47) on <self:ToolContext> */
exit(var47);
RET_LABEL48:(void)0;
}
}
} else {
}
var49 = 0;
var_found = var49;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var52 = self->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_53 = var50;
{
var54 = poset___poset__POSet___standard__abstract_collection__Collection__iterator(var_53);
}
var_55 = var54;
for(;;) {
{
var56 = ((short int (*)(val* self))(var_55->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_55) /* is_ok on <var_55:Iterator[Phase]>*/;
}
if (var56){
{
var57 = ((val* (*)(val* self))(var_55->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_55) /* item on <var_55:Iterator[Phase]>*/;
}
var_p58 = var57;
{
var59 = nit___nit__Phase___standard__string__Object__to_s(var_p58);
}
{
{ /* Inline kernel#Object#!= (var_v,var59) on <var_v:String> */
var_other = var59;
{
var62 = ((short int (*)(val* self, val* p0))(var_v->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_v, var_other) /* == on <var_v:String>*/;
}
var63 = !var62;
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
goto BREAK_label64;
} else {
}
var65 = 1;
var_found = var65;
var66 = 1;
{
{ /* Inline phase#Phase#disabled= (var_p58,var66) on <var_p58:Phase> */
var_p58->attrs[COLOR_nit__phase__Phase___disabled].s = var66; /* _disabled on <var_p58:Phase> */
RET_LABEL67:(void)0;
}
}
BREAK_label64: (void)0;
{
((void (*)(val* self))(var_55->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_55) /* next on <var_55:Iterator[Phase]>*/;
}
} else {
goto BREAK_label68;
}
}
BREAK_label68: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_55) on <var_55:Iterator[Phase]> */
RET_LABEL69:(void)0;
}
}
var70 = !var_found;
if (var70){
var71 = NULL;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "Error: no phase named `";
var75 = 23;
var76 = standard___standard__NativeString___to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = "`. Use `list` to list all phases.";
var80 = 33;
var81 = standard___standard__NativeString___to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var82 = array_instance Array[Object] */
var83 = 3;
var84 = NEW_standard__NativeArray(var83, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var84)->values[0] = (val*) var73;
((struct instance_standard__NativeArray*)var84)->values[1] = (val*) var_v;
((struct instance_standard__NativeArray*)var84)->values[2] = (val*) var78;
{
((void (*)(val* self, val* p0, long p1))(var82->class->vft[COLOR_standard__array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[Object]>*/;
}
}
{
var85 = ((val* (*)(val* self))(var82->class->vft[COLOR_standard__string__Object__to_s]))(var82) /* to_s on <var82:Array[Object]>*/;
}
{
nit___nit__ToolContext___fatal_error(self, var71, var85); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_7); /* Direct call array#ArrayIterator#next on <var_7:ArrayIterator[String]>*/
}
} else {
goto BREAK_label86;
}
}
BREAK_label86: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_7) on <var_7:ArrayIterator[String]> */
RET_LABEL87:(void)0;
}
}
{
{ /* Inline phase#ToolContext#opt_sloppy (self) on <self:ToolContext> */
var90 = self->attrs[COLOR_nit__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 33);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline opts#Option#value (var88) on <var88:OptionBool> */
var93 = var88->attrs[COLOR_opts__Option___value].val; /* _value on <var88:OptionBool> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var94 = ((struct instance_standard__Bool*)var91)->value; /* autounbox from nullable Object to Bool */;
if (var94){
var95 = 1;
{
{ /* Inline phase#ToolContext#semantize_is_lazy= (self,var95) on <self:ToolContext> */
self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s = var95; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL96:(void)0;
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
show_backtrace(1);
}
} else {
{
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var7 = self->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
val* var_58 /* var : Sequence[Phase] */;
val* var59 /* : Iterator[nullable Object] */;
val* var_60 /* var : IndexedIterator[Phase] */;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_phase63 /* var phase: Phase */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : Array[Object] */;
long var74 /* : Int */;
val* var75 /* : NativeArray[Object] */;
val* var76 /* : String */;
long var77 /* : Int */;
val* var78 /* : ToolContext */;
val* var80 /* : ToolContext */;
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
short int var94 /* : Bool */;
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
short int var114 /* : Bool */;
short int var116 /* : Bool */;
val* var_nclassdef118 /* var nclassdef: AClassdef */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : ANodes[APropdef] */;
val* var125 /* : ANodes[APropdef] */;
val* var_126 /* var : ANodes[APropdef] */;
val* var127 /* : Iterator[ANode] */;
val* var_128 /* var : Iterator[APropdef] */;
short int var129 /* : Bool */;
val* var130 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var131 /* : ToolContext */;
val* var133 /* : ToolContext */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
long var143 /* : Int */;
long var145 /* : Int */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var151 /* : Array[AAnnotation] */;
val* var153 /* : Array[AAnnotation] */;
val* var_154 /* var : Array[AAnnotation] */;
val* var155 /* : ArrayIterator[nullable Object] */;
val* var_156 /* var : ArrayIterator[AAnnotation] */;
short int var157 /* : Bool */;
val* var158 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var159 /* : nullable ANode */;
val* var161 /* : nullable ANode */;
val* var162 /* : nullable ANode */;
val* var164 /* : nullable ANode */;
long var167 /* : Int */;
long var169 /* : Int */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
long var179 /* : Int */;
long var181 /* : Int for extern */;
long var_time1 /* var time1: Int */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : FlatString */;
long var187 /* : Int */;
short int var189 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var190 /* : Int */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
val* var196 /* : Array[Object] */;
long var197 /* : Int */;
val* var198 /* : NativeArray[Object] */;
val* var199 /* : Object */;
val* var200 /* : String */;
long var201 /* : Int */;
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
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = 1;
{
nit___nit__ToolContext___info(self, var3, var7); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var8 = nit__phase___ToolContext___phases_list(self);
}
var_phases = var8;
var_ = var_phases;
{
var9 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Sequence[Phase]>*/;
}
var_10 = var9;
for(;;) {
{
var11 = ((short int (*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_10) /* is_ok on <var_10:IndexedIterator[Phase]>*/;
}
if (var11){
{
var12 = ((val* (*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_10) /* item on <var_10:IndexedIterator[Phase]>*/;
}
var_phase = var12;
if (varonce13) {
var14 = varonce13;
} else {
var15 = " registered phases: ";
var16 = 20;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var_phase;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
var22 = 2;
{
nit___nit__ToolContext___info(self, var21, var22); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
((void (*)(val* self))(var_10->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_10) /* next on <var_10:IndexedIterator[Phase]>*/;
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
var25 = ((val* (*)(val* self))(var_24->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_24) /* iterator on <var_24:Collection[AModule]>*/;
}
var_26 = var25;
for(;;) {
{
var27 = ((short int (*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_26) /* is_ok on <var_26:Iterator[AModule]>*/;
}
if (var27){
{
var28 = ((val* (*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_26) /* item on <var_26:Iterator[AModule]>*/;
}
var_nmodule = var28;
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 86);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var29, var_nmodule);
}
if (var32){
goto BREAK_label33;
} else {
}
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var36 = self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 86);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var34, var_nmodule); /* Direct call hash_collection#HashSet#add on <var34:HashSet[AModule]>*/
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Semantic analysis module ";
var40 = 25;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var44 = var_nmodule->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline location#Location#file (var42) on <var42:Location> */
var47 = var42->attrs[COLOR_nit__location__Location___file].val; /* _file on <var42:Location> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 106);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var45) on <var45:nullable SourceFile> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var50 = var45->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var45:nullable SourceFile> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 2;
var53 = NEW_standard__NativeArray(var52, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var53)->values[0] = (val*) var38;
((struct instance_standard__NativeArray*)var53)->values[1] = (val*) var48;
{
((void (*)(val* self, val* p0, long p1))(var51->class->vft[COLOR_standard__array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val* self))(var51->class->vft[COLOR_standard__string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
var55 = 2;
{
nit___nit__ToolContext___info(self, var54, var55); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
var56 = NEW_nit__phase__AnnotationPhaseVisitor(&type_nit__phase__AnnotationPhaseVisitor);
{
{ /* Inline kernel#Object#init (var56) on <var56:AnnotationPhaseVisitor> */
RET_LABEL57:(void)0;
}
}
var_vannot = var56;
{
nit___nit__Visitor___enter_visit(var_vannot, var_nmodule); /* Direct call parser_nodes#Visitor#enter_visit on <var_vannot:AnnotationPhaseVisitor>*/
}
var_58 = var_phases;
{
var59 = ((val* (*)(val* self))(var_58->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_58) /* iterator on <var_58:Sequence[Phase]>*/;
}
var_60 = var59;
for(;;) {
{
var61 = ((short int (*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_60) /* is_ok on <var_60:IndexedIterator[Phase]>*/;
}
if (var61){
{
var62 = ((val* (*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_60) /* item on <var_60:IndexedIterator[Phase]>*/;
}
var_phase63 = var62;
{
{ /* Inline phase#Phase#disabled (var_phase63) on <var_phase63:Phase> */
var66 = var_phase63->attrs[COLOR_nit__phase__Phase___disabled].s; /* _disabled on <var_phase63:Phase> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64){
goto BREAK_label67;
} else {
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = " phase: ";
var71 = 8;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var73 = array_instance Array[Object] */
var74 = 2;
var75 = NEW_standard__NativeArray(var74, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var75)->values[0] = (val*) var69;
((struct instance_standard__NativeArray*)var75)->values[1] = (val*) var_phase63;
{
((void (*)(val* self, val* p0, long p1))(var73->class->vft[COLOR_standard__array__Array__with_native]))(var73, var75, var74) /* with_native on <var73:Array[Object]>*/;
}
}
{
var76 = ((val* (*)(val* self))(var73->class->vft[COLOR_standard__string__Object__to_s]))(var73) /* to_s on <var73:Array[Object]>*/;
}
var77 = 3;
{
nit___nit__ToolContext___info(self, var76, var77); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
{ /* Inline phase#Phase#toolcontext (var_phase63) on <var_phase63:Phase> */
var80 = var_phase63->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase63:Phase> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var78,self) on <var78:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var78,var_other) on <var78:ToolContext> */
var85 = var78 == var_other;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
if (unlikely(!var81)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 114);
show_backtrace(1);
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var88 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_errcount = var86;
{
((void (*)(val* self, val* p0))(var_phase63->class->vft[COLOR_nit__phase__Phase__process_nmodule]))(var_phase63, var_nmodule) /* process_nmodule on <var_phase63:Phase>*/;
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var91 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var89) on <var_errcount:Int> */
var94 = var_errcount == var89;
var95 = !var94;
var92 = var95;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
if (var92){
{
var96 = nit___nit__ToolContext___check_errors(self);
}
goto BREAK_label97;
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var100 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
var_errcount = var98;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var103 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var_104 = var101;
{
var105 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_104);
}
var_106 = var105;
for(;;) {
{
var107 = ((short int (*)(val* self))(var_106->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_106) /* is_ok on <var_106:Iterator[AClassdef]>*/;
}
if (var107){
{
var108 = ((val* (*)(val* self))(var_106->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_106) /* item on <var_106:Iterator[AClassdef]>*/;
}
var_nclassdef = var108;
{
{ /* Inline phase#Phase#toolcontext (var_phase63) on <var_phase63:Phase> */
var111 = var_phase63->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase63:Phase> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
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
var116 = var109 == var_other;
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
if (unlikely(!var112)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 123);
show_backtrace(1);
}
{
{ /* Inline phase#Phase#process_nclassdef (var_phase63,var_nclassdef) on <var_phase63:Phase> */
var_nclassdef118 = var_nclassdef;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline phase#ToolContext#semantize_is_lazy (self) on <self:ToolContext> */
var121 = self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
var122 = !var119;
if (var122){
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var125 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
var_126 = var123;
{
var127 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_126);
}
var_128 = var127;
for(;;) {
{
var129 = ((short int (*)(val* self))(var_128->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_128) /* is_ok on <var_128:Iterator[APropdef]>*/;
}
if (var129){
{
var130 = ((val* (*)(val* self))(var_128->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_128) /* item on <var_128:Iterator[APropdef]>*/;
}
var_npropdef = var130;
{
{ /* Inline phase#Phase#toolcontext (var_phase63) on <var_phase63:Phase> */
var133 = var_phase63->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase63:Phase> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var131,self) on <var131:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var131,var_other) on <var131:ToolContext> */
var138 = var131 == var_other;
var136 = var138;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
if (unlikely(!var134)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 126);
show_backtrace(1);
}
{
nit__phase___ToolContext___phase_process_npropdef(self, var_phase63, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
((void (*)(val* self))(var_128->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_128) /* next on <var_128:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label139;
}
}
BREAK_label139: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_128) on <var_128:Iterator[APropdef]> */
RET_LABEL140:(void)0;
}
}
} else {
}
{
((void (*)(val* self))(var_106->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_106) /* next on <var_106:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label141;
}
}
BREAK_label141: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_106) on <var_106:Iterator[AClassdef]> */
RET_LABEL142:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var145 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var143) on <var_errcount:Int> */
var148 = var_errcount == var143;
var149 = !var148;
var146 = var149;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
if (var146){
{
var150 = nit___nit__ToolContext___check_errors(self);
}
goto BREAK_label97;
} else {
}
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (var_vannot) on <var_vannot:AnnotationPhaseVisitor> */
var153 = var_vannot->attrs[COLOR_nit__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <var_vannot:AnnotationPhaseVisitor> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 188);
show_backtrace(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_154 = var151;
{
var155 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_154);
}
var_156 = var155;
for(;;) {
{
var157 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_156);
}
if (var157){
{
var158 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_156);
}
var_na = var158;
{
{ /* Inline parser_nodes#ANode#parent (var_na) on <var_na:AAnnotation> */
var161 = var_na->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var_na:AAnnotation> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
if (var159 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 135);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var159) on <var159:nullable ANode> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var164 = var159->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var159:nullable ANode> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 135);
show_backtrace(1);
}
{
((void (*)(val* self, val* p0, val* p1))(var_phase63->class->vft[COLOR_nit__phase__Phase__process_annotated_node]))(var_phase63, var162, var_na) /* process_annotated_node on <var_phase63:Phase>*/;
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_156); /* Direct call array#ArrayIterator#next on <var_156:ArrayIterator[AAnnotation]>*/
}
} else {
goto BREAK_label165;
}
}
BREAK_label165: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_156) on <var_156:ArrayIterator[AAnnotation]> */
RET_LABEL166:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var169 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var167) on <var_errcount:Int> */
var172 = var_errcount == var167;
var173 = !var172;
var170 = var173;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
if (var170){
{
var174 = nit___nit__ToolContext___check_errors(self);
}
goto BREAK_label97;
} else {
}
BREAK_label67: (void)0;
{
((void (*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_60) /* next on <var_60:IndexedIterator[Phase]>*/;
}
} else {
goto BREAK_label97;
}
}
BREAK_label97: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_60) on <var_60:IndexedIterator[Phase]> */
RET_LABEL175:(void)0;
}
}
{
var176 = nit___nit__ToolContext___check_errors(self);
}
BREAK_label33: (void)0;
{
((void (*)(val* self))(var_26->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_26) /* next on <var_26:Iterator[AModule]>*/;
}
} else {
goto BREAK_label177;
}
}
BREAK_label177: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_26) on <var_26:Iterator[AModule]> */
RET_LABEL178:(void)0;
}
}
{
{ /* Inline time#Object#get_time (self) on <self:ToolContext> */
var181 = kernel_Any_Any_get_time_0(self);
var179 = var181;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
var_time1 = var179;
if (varonce182) {
var183 = varonce182;
} else {
var184 = "*** END SEMANTIC ANALYSIS: ";
var185 = 27;
var186 = standard___standard__NativeString___to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var189 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var189)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var190 = var_time1 - var_time0;
var187 = var190;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = " ***";
var194 = 4;
var195 = standard___standard__NativeString___to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var196 = array_instance Array[Object] */
var197 = 3;
var198 = NEW_standard__NativeArray(var197, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var198)->values[0] = (val*) var183;
var199 = BOX_standard__Int(var187); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var198)->values[1] = (val*) var199;
((struct instance_standard__NativeArray*)var198)->values[2] = (val*) var192;
{
((void (*)(val* self, val* p0, long p1))(var196->class->vft[COLOR_standard__array__Array__with_native]))(var196, var198, var197) /* with_native on <var196:Array[Object]>*/;
}
}
{
var200 = ((val* (*)(val* self))(var196->class->vft[COLOR_standard__string__Object__to_s]))(var196) /* to_s on <var196:Array[Object]>*/;
}
var201 = 2;
{
nit___nit__ToolContext___info(self, var200, var201); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
nit___nit__ToolContext___errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:ToolContext>*/
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
((void (*)(val* self, val* p0))(var_phase->class->vft[COLOR_nit__phase__Phase__process_npropdef]))(var_phase, var_npropdef) /* process_npropdef on <var_phase:Phase>*/;
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
short int var7 /* : Bool */;
val* var9 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[Phase] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
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
var7 = 1;
{
{ /* Inline phase#APropdef#is_phased= (var_npropdef,var7) on <var_npropdef:APropdef> */
var_npropdef->attrs[COLOR_nit__phase__APropdef___is_phased].s = var7; /* _is_phased on <var_npropdef:APropdef> */
RET_LABEL8:(void)0;
}
}
{
var9 = nit__phase___ToolContext___phases_list(self);
}
var_phases = var9;
var_ = var_phases;
{
var10 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Sequence[Phase]>*/;
}
var_11 = var10;
for(;;) {
{
var12 = ((short int (*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_11) /* is_ok on <var_11:IndexedIterator[Phase]>*/;
}
if (var12){
{
var13 = ((val* (*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_11) /* item on <var_11:IndexedIterator[Phase]>*/;
}
var_phase = var13;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var16 = var_phase->attrs[COLOR_nit__phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14){
goto BREAK_label;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (var_phase) on <var_phase:Phase> */
var19 = var_phase->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase:Phase> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 171);
show_backtrace(1);
}
{
nit__phase___ToolContext___phase_process_npropdef(self, var_phase, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
var25 = nit___nit__ToolContext___check_errors(self);
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_11->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_11) /* next on <var_11:IndexedIterator[Phase]>*/;
}
} else {
goto BREAK_label26;
}
}
BREAK_label26: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:IndexedIterator[Phase]> */
RET_LABEL27:(void)0;
}
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 188);
show_backtrace(1);
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
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 188);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 204);
show_backtrace(1);
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
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_ /* var : Collection[Phase] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[Phase] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_d /* var d: Phase */;
val* var21 /* : ToolContext */;
val* var23 /* : ToolContext */;
val* var24 /* : POSet[Phase] */;
val* var26 /* : POSet[Phase] */;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:Phase> */
var2 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
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
show_backtrace(1);
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
var11 = NULL;
if (var_depends == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_depends,var11) on <var_depends:nullable Collection[Phase]> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_depends->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_depends, var_other) /* == on <var_depends:nullable Collection[Phase](Collection[Phase])>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var_ = var_depends;
{
var17 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[Phase]>*/;
}
var_18 = var17;
for(;;) {
{
var19 = ((short int (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_18) /* is_ok on <var_18:Iterator[Phase]>*/;
}
if (var19){
{
var20 = ((val* (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_18) /* item on <var_18:Iterator[Phase]>*/;
}
var_d = var20;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:Phase> */
var23 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline phase#ToolContext#phases (var21) on <var21:ToolContext> */
var26 = var21->attrs[COLOR_nit__phase__ToolContext___phases].val; /* _phases on <var21:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 23);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
poset___poset__POSet___add_edge(var24, self, var_d); /* Direct call poset#POSet#add_edge on <var24:POSet[Phase]>*/
}
{
((void (*)(val* self))(var_18->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_18) /* next on <var_18:Iterator[Phase]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_18) on <var_18:Iterator[Phase]> */
RET_LABEL27:(void)0;
}
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
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : String */;
val* var7 /* : String */;
{
var1 = standard__string___Object___class_name(self);
}
if (varonce) {
var2 = varonce;
} else {
var3 = "Phase";
var4 = 5;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = standard__file___String___strip_extension(var1, var2);
}
{
var7 = ((val* (*)(val* self))(var6->class->vft[COLOR_standard__string__String__to_lower]))(var6) /* to_lower on <var6:String>*/;
}
var = var7;
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
