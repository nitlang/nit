#include "nitc__phase.sep.0.h"
/* method phase$ToolContext$phases for (self: ToolContext): POSet[Phase] */
val* nitc__phase___ToolContext___phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase$ToolContext$opt_disable_phase for (self: ToolContext): OptionArray */
val* nitc__phase___ToolContext___opt_disable_phase(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase$ToolContext$opt_sloppy for (self: ToolContext): OptionBool */
val* nitc__phase___ToolContext___opt_sloppy(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase$ToolContext$init for (self: ToolContext) */
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
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline phase$ToolContext$opt_disable_phase (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline phase$ToolContext$opt_sloppy (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var10 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var10)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var10)->values[1] = (val*) var6;
{
((void(*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_core__array__Array__with_native]))(var9, var10, 2l); /* with_native on <var9:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var9); /* Direct call opts$OptionContext$add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method phase$ToolContext$process_options for (self: ToolContext, Sequence[String]) */
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
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
short int var17 /* : Bool */;
val* var18 /* : Sequence[Phase] */;
val* var_19 /* var : Sequence[Phase] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : IndexedIterator[Phase] */;
short int var22 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_p /* var p: Phase */;
val* var25 /* : POSetElement[Phase] */;
val* var27 /* : POSetElement[Phase] */;
val* var28 /* : Collection[nullable Object] */;
val* var_deps /* var deps: Collection[Phase] */;
short int var29 /* : Bool */;
val* var30 /* : Sys */;
val* var31 /* : Sys */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : Sys */;
short int var_found /* var found: Bool */;
val* var63 /* : POSet[Phase] */;
val* var65 /* : POSet[Phase] */;
val* var_66 /* var : POSet[Phase] */;
val* var67 /* : Iterator[nullable Object] */;
val* var_68 /* var : Iterator[Phase] */;
short int var69 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_p72 /* var p: Phase */;
val* var73 /* : String */;
short int var74 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var80 /* : Bool */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Bool */;
val* var98 /* : nullable Bool */;
val* var99 /* : String */;
val* var100 /* : OptionBool */;
val* var102 /* : OptionBool */;
val* var103 /* : nullable Object */;
val* var105 /* : nullable Object */;
short int var106 /* : Bool */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__phase___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline phase$ToolContext$opt_disable_phase (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts$Option$value (var) on <var:OptionArray> */
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
var13 = (val*)(4l<<2|1);
var14 = (val*)(4l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce = var10;
}
{
var17 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_v, var10); /* == on <var_v:String>*/
}
if (var17){
{
var18 = nitc__phase___ToolContext___phases_list(self);
}
var_19 = var18;
{
var20 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_19); /* iterator on <var_19:Sequence[Phase]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:IndexedIterator[Phase]>*/
}
if (var22){
} else {
goto BREAK_label23;
}
{
var24 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:IndexedIterator[Phase]>*/
}
var_p = var24;
{
{ /* Inline phase$Phase$in_hierarchy (var_p) on <var_p:Phase> */
var27 = var_p->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <var_p:Phase> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 213);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = poset___poset__POSetElement___direct_greaters(var25);
}
var_deps = var28;
{
var29 = ((short int(*)(val* self))((((long)var_deps&3)?class_info[((long)var_deps&3)]:var_deps->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_deps); /* is_empty on <var_deps:Collection[Phase]>*/
}
if (var29){
var30 = glob_sys;
{
core__file___Sys___print(var30, var_p); /* Direct call file$Sys$print on <var30:Sys>*/
}
} else {
var31 = glob_sys;
if (unlikely(varonce32==NULL)) {
var33 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = " (dep: ";
var38 = (val*)(7l<<2|1);
var39 = (val*)(7l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[1]=var35;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ")";
var46 = (val*)(1l<<2|1);
var47 = (val*)(1l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var33)->values[3]=var43;
} else {
var33 = varonce32;
varonce32 = NULL;
}
{
var50 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_p); /* to_s on <var_p:Phase>*/
}
((struct instance_core__NativeArray*)var33)->values[0]=var50;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = ", ";
var55 = (val*)(2l<<2|1);
var56 = (val*)(2l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
{
var59 = core__abstract_text___Collection___join(var_deps, var52, ((val*)NULL));
}
((struct instance_core__NativeArray*)var33)->values[2]=var59;
{
var60 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
core__file___Sys___print(var31, var60); /* Direct call file$Sys$print on <var31:Sys>*/
}
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:IndexedIterator[Phase]>*/
}
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:IndexedIterator[Phase]>*/
}
var61 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var61,0l) on <var61:Sys> */
exit((int)0l);
RET_LABEL62:(void)0;
}
}
} else {
}
var_found = 0;
{
{ /* Inline phase$ToolContext$phases (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
var_66 = var63;
{
var67 = poset___poset__POSet___core__abstract_collection__Collection__iterator(var_66);
}
var_68 = var67;
for(;;) {
{
var69 = ((short int(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_68); /* is_ok on <var_68:Iterator[Phase]>*/
}
if (var69){
} else {
goto BREAK_label70;
}
{
var71 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_68); /* item on <var_68:Iterator[Phase]>*/
}
var_p72 = var71;
{
var73 = nitc___nitc__Phase___core__abstract_text__Object__to_s(var_p72);
}
{
{ /* Inline kernel$Object$!= (var_v,var73) on <var_v:String> */
var_other = var73;
{
var76 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_v, var_other); /* == on <var_v:String>*/
}
var77 = !var76;
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
goto BREAK_label78;
} else {
}
var_found = 1;
{
{ /* Inline phase$Phase$disabled= (var_p72,1) on <var_p72:Phase> */
var_p72->attrs[COLOR_nitc__phase__Phase___disabled].s = 1; /* _disabled on <var_p72:Phase> */
RET_LABEL79:(void)0;
}
}
BREAK_label78: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_68); /* next on <var_68:Iterator[Phase]>*/
}
}
BREAK_label70: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_68); /* finish on <var_68:Iterator[Phase]>*/
}
var80 = !var_found;
if (var80){
if (unlikely(varonce81==NULL)) {
var82 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "Error: no phase named `";
var87 = (val*)(23l<<2|1);
var88 = (val*)(23l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var82)->values[0]=var84;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "`. Use `list` to list all phases.";
var95 = (val*)(33l<<2|1);
var96 = (val*)(33l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var82)->values[2]=var92;
} else {
var82 = varonce81;
varonce81 = NULL;
}
((struct instance_core__NativeArray*)var82)->values[1]=var_v;
{
var99 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var99); /* Direct call toolcontext$ToolContext$fatal_error on <self:ToolContext>*/
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
{ /* Inline phase$ToolContext$opt_sloppy (self) on <self:ToolContext> */
var102 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var102 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 33);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline opts$Option$value (var100) on <var100:OptionBool> */
var105 = var100->attrs[COLOR_opts__Option___value].val; /* _value on <var100:OptionBool> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var106 = (short int)((long)(var103)>>2);
if (var106){
{
{ /* Inline phase$ToolContext$semantize_is_lazy= (self,1) on <self:ToolContext> */
self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s = 1; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL107:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method phase$ToolContext$phases_list for (self: ToolContext): Sequence[Phase] */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases_list");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 72);
fatal_exit(1);
}
} else {
{
{
{ /* Inline phase$ToolContext$phases (self) on <self:ToolContext> */
var7 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline phase$ToolContext$phases (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__Comparator___sort(var9, var_phases); /* Direct call sorter$Comparator$sort on <var9:POSet[Phase]>*/
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
/* method phase$ToolContext$semantize_is_lazy for (self: ToolContext): Bool */
short int nitc__phase___ToolContext___semantize_is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase$ToolContext$semantize_is_lazy= for (self: ToolContext, Bool) */
void nitc__phase___ToolContext___semantize_is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s = p0; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL:;
}
/* method phase$ToolContext$phased_modules for (self: ToolContext): HashSet[AModule] */
val* nitc__phase___ToolContext___phased_modules(val* self) {
val* var /* : HashSet[AModule] */;
val* var1 /* : HashSet[AModule] */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase$ToolContext$todo_nmodules= for (self: ToolContext, Sequence[AModule]) */
void nitc__phase___ToolContext___todo_nmodules_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__ToolContext___todo_nmodules].val = p0; /* _todo_nmodules on <self:ToolContext> */
RET_LABEL:;
}
/* method phase$ToolContext$run_phases for (self: ToolContext, Collection[AModule]) */
void nitc__phase___ToolContext___run_phases(val* self, val* p0) {
val* var_nmodules /* var nmodules: Collection[AModule] */;
val* var /* : Sys */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_time0 /* var time0: Int */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[Phase] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
val* var17 /* : NativeArray[String] */;
static val* varonce16;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : Array[nullable Object] */;
val* var_todo_nmodules /* var todo_nmodules: Array[AModule] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
val* var33 /* : HashSet[AModule] */;
val* var35 /* : HashSet[AModule] */;
short int var36 /* : Bool */;
val* var38 /* : HashSet[AModule] */;
val* var40 /* : HashSet[AModule] */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var51 /* : Location */;
val* var53 /* : Location */;
val* var54 /* : nullable SourceFile */;
val* var56 /* : nullable SourceFile */;
val* var57 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : AnnotationPhaseVisitor */;
val* var_vannot /* var vannot: AnnotationPhaseVisitor */;
val* var_63 /* var : Sequence[Phase] */;
val* var64 /* : Iterator[nullable Object] */;
val* var_65 /* var : IndexedIterator[Phase] */;
short int var66 /* : Bool */;
val* var68 /* : nullable Object */;
val* var_phase69 /* var phase: Phase */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
val* var74 /* : ToolContext */;
val* var76 /* : ToolContext */;
short int var77 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
long var82 /* : Int */;
long var84 /* : Int */;
long var_errcount /* var errcount: Int */;
long var85 /* : Int */;
long var87 /* : Int */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
long var93 /* : Int */;
long var95 /* : Int */;
val* var96 /* : ANodes[AClassdef] */;
val* var98 /* : ANodes[AClassdef] */;
val* var_99 /* var : ANodes[AClassdef] */;
val* var100 /* : Iterator[ANode] */;
val* var_101 /* var : Iterator[AClassdef] */;
short int var102 /* : Bool */;
val* var104 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var105 /* : ToolContext */;
val* var107 /* : ToolContext */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
val* var117 /* : ANodes[APropdef] */;
val* var119 /* : ANodes[APropdef] */;
val* var_120 /* var : ANodes[APropdef] */;
val* var121 /* : Iterator[ANode] */;
val* var_122 /* var : Iterator[APropdef] */;
short int var123 /* : Bool */;
val* var125 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var126 /* : ToolContext */;
val* var128 /* : ToolContext */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
long var134 /* : Int */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
val* var142 /* : Array[AAnnotation] */;
val* var144 /* : Array[AAnnotation] */;
val* var_145 /* var : Array[AAnnotation] */;
val* var146 /* : IndexedIterator[nullable Object] */;
val* var_147 /* var : IndexedIterator[AAnnotation] */;
short int var148 /* : Bool */;
val* var150 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var151 /* : nullable ANode */;
val* var153 /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
short int var154 /* : Bool */;
int cltype;
int idtype;
val* var155 /* : nullable ANode */;
val* var157 /* : nullable ANode */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
val* var_other161 /* var other: nullable Object */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
long var164 /* : Int */;
long var166 /* : Int */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
val* var_nmodule173 /* var nmodule: AModule */;
short int var174 /* : Bool */;
val* var176 /* : Sys */;
long var177 /* : Int */;
long var179 /* : Int */;
long var_time1 /* var time1: Int */;
val* var181 /* : NativeArray[String] */;
static val* varonce180;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Int */;
val* var188 /* : nullable Bool */;
val* var189 /* : nullable Bool */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Int */;
val* var196 /* : nullable Bool */;
val* var197 /* : nullable Bool */;
long var198 /* : Int */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name;
long var203 /* : Int */;
val* var204 /* : String */;
val* var205 /* : String */;
short int var206 /* : Bool */;
var_nmodules = p0;
var = glob_sys;
{
{ /* Inline time$Sys$get_time (var) on <var:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var;
var3 = core__time___Sys_get_time___impl(var_for_c_0);
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
var7 = (val*)(25l<<2|1);
var8 = (val*)(25l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
nitc___nitc__ToolContext___info(self, var4, 1l); /* Direct call toolcontext$ToolContext$info on <self:ToolContext>*/
}
{
var11 = nitc__phase___ToolContext___phases_list(self);
}
var_phases = var11;
var_ = var_phases;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[Phase]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[Phase]>*/
}
var_phase = var15;
if (unlikely(varonce16==NULL)) {
var17 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = " registered phases: ";
var22 = (val*)(20l<<2|1);
var23 = (val*)(20l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[0]=var19;
} else {
var17 = varonce16;
varonce16 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_phase->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_phase); /* to_s on <var_phase:Phase>*/
}
((struct instance_core__NativeArray*)var17)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce16 = var17;
{
nitc___nitc__ToolContext___info(self, var27, 2l); /* Direct call toolcontext$ToolContext$info on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[Phase]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[Phase]>*/
}
{
var28 = ((val*(*)(val* self))((((long)var_nmodules&3)?class_info[((long)var_nmodules&3)]:var_nmodules->class)->vft[COLOR_core__array__Collection__to_a]))(var_nmodules); /* to_a on <var_nmodules:Collection[AModule]>*/
}
var_todo_nmodules = var28;
{
{ /* Inline phase$ToolContext$todo_nmodules= (self,var_todo_nmodules) on <self:ToolContext> */
self->attrs[COLOR_nitc__phase__ToolContext___todo_nmodules].val = var_todo_nmodules; /* _todo_nmodules on <self:ToolContext> */
RET_LABEL29:(void)0;
}
}
for(;;) {
{
var30 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_todo_nmodules);
}
var31 = !var30;
if (var31){
{
var32 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_todo_nmodules);
}
var_nmodule = var32;
{
{ /* Inline phase$ToolContext$phased_modules (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = core___core__HashSet___core__abstract_collection__Collection__has(var33, var_nmodule);
}
if (var36){
goto BREAK_label37;
} else {
}
{
{ /* Inline phase$ToolContext$phased_modules (self) on <self:ToolContext> */
var40 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var38, var_nmodule); /* Direct call hash_collection$HashSet$add on <var38:HashSet[AModule]>*/
}
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Semantic analysis module ";
var47 = (val*)(25l<<2|1);
var48 = (val*)(25l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
{ /* Inline parser_nodes$ANode$location (var_nmodule) on <var_nmodule:AModule> */
var53 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline location$Location$file (var51) on <var51:Location> */
var56 = var51->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var51:Location> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 115);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var54) on <var54:nullable SourceFile> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var59 = var54->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var54:nullable SourceFile> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
((struct instance_core__NativeArray*)var42)->values[1]=var57;
{
var60 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
nitc___nitc__ToolContext___info(self, var60, 2l); /* Direct call toolcontext$ToolContext$info on <self:ToolContext>*/
}
var61 = NEW_nitc__phase__AnnotationPhaseVisitor(&type_nitc__phase__AnnotationPhaseVisitor);
{
{ /* Inline kernel$Object$init (var61) on <var61:AnnotationPhaseVisitor> */
RET_LABEL62:(void)0;
}
}
var_vannot = var61;
{
nitc___nitc__Visitor___enter_visit(var_vannot, var_nmodule); /* Direct call parser_nodes$Visitor$enter_visit on <var_vannot:AnnotationPhaseVisitor>*/
}
var_63 = var_phases;
{
var64 = ((val*(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_63); /* iterator on <var_63:Sequence[Phase]>*/
}
var_65 = var64;
for(;;) {
{
var66 = ((short int(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_65); /* is_ok on <var_65:IndexedIterator[Phase]>*/
}
if (var66){
} else {
goto BREAK_label67;
}
{
var68 = ((val*(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_65); /* item on <var_65:IndexedIterator[Phase]>*/
}
var_phase69 = var68;
{
{ /* Inline phase$Phase$disabled (var_phase69) on <var_phase69:Phase> */
var72 = var_phase69->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <var_phase69:Phase> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (var70){
goto BREAK_label73;
} else {
}
{
{ /* Inline phase$Phase$toolcontext (var_phase69) on <var_phase69:Phase> */
var76 = var_phase69->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase69:Phase> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var74,self) on <var74:ToolContext> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var74,var_other) on <var74:ToolContext> */
var81 = var74 == var_other;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (unlikely(!var77)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 122);
fatal_exit(1);
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var84 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_errcount = var82;
{
((void(*)(val* self, val* p0))(var_phase69->class->vft[COLOR_nitc__phase__Phase__process_nmodule]))(var_phase69, var_nmodule); /* process_nmodule on <var_phase69:Phase>*/
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var87 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_errcount,var85) on <var_errcount:Int> */
var90 = var_errcount == var85;
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
var92 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var95 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_errcount = var93;
{
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var98 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
var_99 = var96;
{
var100 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_99);
}
var_101 = var100;
for(;;) {
{
var102 = ((short int(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_101); /* is_ok on <var_101:Iterator[AClassdef]>*/
}
if (var102){
} else {
goto BREAK_label103;
}
{
var104 = ((val*(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_101); /* item on <var_101:Iterator[AClassdef]>*/
}
var_nclassdef = var104;
{
{ /* Inline phase$Phase$toolcontext (var_phase69) on <var_phase69:Phase> */
var107 = var_phase69->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase69:Phase> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var105,self) on <var105:ToolContext> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var105,var_other) on <var105:ToolContext> */
var112 = var105 == var_other;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
if (unlikely(!var108)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 130);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_phase69->class->vft[COLOR_nitc__phase__Phase__process_nclassdef]))(var_phase69, var_nclassdef); /* process_nclassdef on <var_phase69:Phase>*/
}
{
{ /* Inline phase$ToolContext$semantize_is_lazy (self) on <self:ToolContext> */
var115 = self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
var116 = !var113;
if (var116){
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var119 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
var_120 = var117;
{
var121 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_120);
}
var_122 = var121;
for(;;) {
{
var123 = ((short int(*)(val* self))((((long)var_122&3)?class_info[((long)var_122&3)]:var_122->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_122); /* is_ok on <var_122:Iterator[APropdef]>*/
}
if (var123){
} else {
goto BREAK_label124;
}
{
var125 = ((val*(*)(val* self))((((long)var_122&3)?class_info[((long)var_122&3)]:var_122->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_122); /* item on <var_122:Iterator[APropdef]>*/
}
var_npropdef = var125;
{
{ /* Inline phase$Phase$toolcontext (var_phase69) on <var_phase69:Phase> */
var128 = var_phase69->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase69:Phase> */
if (unlikely(var128 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var126,self) on <var126:ToolContext> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var126,var_other) on <var126:ToolContext> */
var133 = var126 == var_other;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var129 = var131;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
if (unlikely(!var129)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 133);
fatal_exit(1);
}
{
nitc__phase___ToolContext___phase_process_npropdef(self, var_phase69, var_npropdef); /* Direct call phase$ToolContext$phase_process_npropdef on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_122&3)?class_info[((long)var_122&3)]:var_122->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_122); /* next on <var_122:Iterator[APropdef]>*/
}
}
BREAK_label124: (void)0;
{
((void(*)(val* self))((((long)var_122&3)?class_info[((long)var_122&3)]:var_122->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_122); /* finish on <var_122:Iterator[APropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_101); /* next on <var_101:Iterator[AClassdef]>*/
}
}
BREAK_label103: (void)0;
{
((void(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_101); /* finish on <var_101:Iterator[AClassdef]>*/
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var136 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_errcount,var134) on <var_errcount:Int> */
var139 = var_errcount == var134;
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
if (var137){
{
var141 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline phase$AnnotationPhaseVisitor$annotations (var_vannot) on <var_vannot:AnnotationPhaseVisitor> */
var144 = var_vannot->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <var_vannot:AnnotationPhaseVisitor> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 197);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
var_145 = var142;
{
var146 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_145);
}
var_147 = var146;
for(;;) {
{
var148 = ((short int(*)(val* self))((((long)var_147&3)?class_info[((long)var_147&3)]:var_147->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_147); /* is_ok on <var_147:IndexedIterator[AAnnotation]>*/
}
if (var148){
} else {
goto BREAK_label149;
}
{
var150 = ((val*(*)(val* self))((((long)var_147&3)?class_info[((long)var_147&3)]:var_147->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_147); /* item on <var_147:IndexedIterator[AAnnotation]>*/
}
var_na = var150;
{
{ /* Inline parser_nodes$ANode$parent (var_na) on <var_na:AAnnotation> */
var153 = var_na->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_na:AAnnotation> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_p = var151;
/* <var_p:nullable ANode> isa AAnnotations */
cltype = type_nitc__AAnnotations.color;
idtype = type_nitc__AAnnotations.id;
if(var_p == NULL) {
var154 = 0;
} else {
if(cltype >= var_p->type->table_size) {
var154 = 0;
} else {
var154 = var_p->type->type_table[cltype] == idtype;
}
}
if (var154){
{
{ /* Inline parser_nodes$ANode$parent (var_p) on <var_p:nullable ANode(AAnnotations)> */
var157 = var_p->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_p:nullable ANode(AAnnotations)> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
var_p = var155;
} else {
}
if (var_p == NULL) {
var158 = 0; /* is null */
} else {
var158 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_p,((val*)NULL)) on <var_p:nullable ANode> */
var_other161 = ((val*)NULL);
{
var162 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_other161); /* == on <var_p:nullable ANode(ANode)>*/
}
var163 = !var162;
var159 = var163;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (unlikely(!var158)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 143);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_phase69->class->vft[COLOR_nitc__phase__Phase__process_annotated_node]))(var_phase69, var_p, var_na); /* process_annotated_node on <var_phase69:Phase>*/
}
{
((void(*)(val* self))((((long)var_147&3)?class_info[((long)var_147&3)]:var_147->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_147); /* next on <var_147:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label149: (void)0;
{
((void(*)(val* self))((((long)var_147&3)?class_info[((long)var_147&3)]:var_147->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_147); /* finish on <var_147:IndexedIterator[AAnnotation]>*/
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var166 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_errcount,var164) on <var_errcount:Int> */
var169 = var_errcount == var164;
var170 = !var169;
var167 = var170;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
{
var171 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline phase$Phase$process_nmodule_after (var_phase69,var_nmodule) on <var_phase69:Phase> */
var_nmodule173 = var_nmodule;
RET_LABEL172:(void)0;
}
}
BREAK_label73: (void)0;
{
((void(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_65); /* next on <var_65:IndexedIterator[Phase]>*/
}
}
BREAK_label67: (void)0;
{
((void(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_65); /* finish on <var_65:IndexedIterator[Phase]>*/
}
{
var174 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
goto BREAK_label175;
}
BREAK_label37: (void)0;
}
BREAK_label175: (void)0;
var176 = glob_sys;
{
{ /* Inline time$Sys$get_time (var176) on <var176:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var176;
var179 = core__time___Sys_get_time___impl(var_for_c_0);
var177 = var179;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
}
var_time1 = var177;
if (unlikely(varonce180==NULL)) {
var181 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "*** END SEMANTIC ANALYSIS: ";
var186 = (val*)(27l<<2|1);
var187 = (val*)(27l<<2|1);
var188 = (val*)((long)(0)<<2|3);
var189 = (val*)((long)(0)<<2|3);
var185 = core__flat___CString___to_s_unsafe(var184, var186, var187, var188, var189);
var183 = var185;
varonce182 = var183;
}
((struct instance_core__NativeArray*)var181)->values[0]=var183;
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = " ***";
var194 = (val*)(4l<<2|1);
var195 = (val*)(4l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var181)->values[2]=var191;
} else {
var181 = varonce180;
varonce180 = NULL;
}
{
{ /* Inline kernel$Int$- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var200 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var203 = var_time1 - var_time0;
var198 = var203;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
var204 = core__flat___Int___core__abstract_text__Object__to_s(var198);
((struct instance_core__NativeArray*)var181)->values[1]=var204;
{
var205 = ((val*(*)(val* self))(var181->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var181); /* native_to_s on <var181:NativeArray[String]>*/
}
varonce180 = var181;
{
nitc___nitc__ToolContext___info(self, var205, 2l); /* Direct call toolcontext$ToolContext$info on <self:ToolContext>*/
}
{
var206 = nitc___nitc__ToolContext___check_errors(self);
}
RET_LABEL:;
}
/* method phase$ToolContext$phase_process_npropdef for (self: ToolContext, Phase, APropdef) */
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
/* method phase$ToolContext$run_phases_on_npropdef for (self: ToolContext, APropdef) */
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
{ /* Inline phase$ToolContext$semantize_is_lazy (self) on <self:ToolContext> */
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
{ /* Inline phase$APropdef$is_phased (var_npropdef) on <var_npropdef:APropdef> */
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
{ /* Inline phase$APropdef$is_phased= (var_npropdef,1) on <var_npropdef:APropdef> */
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
{ /* Inline phase$Phase$disabled (var_phase) on <var_phase:Phase> */
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
{ /* Inline phase$Phase$toolcontext (var_phase) on <var_phase:Phase> */
var19 = var_phase->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase:Phase> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var17,self) on <var17:ToolContext> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var17,var_other) on <var17:ToolContext> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 180);
fatal_exit(1);
}
{
nitc__phase___ToolContext___phase_process_npropdef(self, var_phase, var_npropdef); /* Direct call phase$ToolContext$phase_process_npropdef on <self:ToolContext>*/
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
/* method phase$APropdef$is_phased for (self: APropdef): Bool */
short int nitc__phase___APropdef___is_phased(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__APropdef___is_phased].s; /* _is_phased on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase$APropdef$is_phased= for (self: APropdef, Bool) */
void nitc__phase___APropdef___is_phased_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__APropdef___is_phased].s = p0; /* _is_phased on <self:APropdef> */
RET_LABEL:;
}
/* method phase$AnnotationPhaseVisitor$annotations for (self: AnnotationPhaseVisitor): Array[AAnnotation] */
val* nitc__phase___nitc__phase__AnnotationPhaseVisitor___annotations(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 197);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase$AnnotationPhaseVisitor$visit for (self: AnnotationPhaseVisitor, ANode) */
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
{ /* Inline phase$AnnotationPhaseVisitor$annotations (self) on <self:AnnotationPhaseVisitor> */
var3 = self->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var1, var_n); /* Direct call array$Array$add on <var1:Array[AAnnotation]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase$Phase$toolcontext for (self: Phase): ToolContext */
val* nitc___nitc__Phase___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase$Phase$toolcontext= for (self: Phase, ToolContext) */
void nitc___nitc__Phase___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___toolcontext].val = p0; /* _toolcontext on <self:Phase> */
RET_LABEL:;
}
/* method phase$Phase$in_hierarchy for (self: Phase): POSetElement[Phase] */
val* nitc___nitc__Phase___in_hierarchy(val* self) {
val* var /* : POSetElement[Phase] */;
val* var1 /* : POSetElement[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <self:Phase> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 213);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase$Phase$in_hierarchy= for (self: Phase, POSetElement[Phase]) */
void nitc___nitc__Phase___in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val = p0; /* _in_hierarchy on <self:Phase> */
RET_LABEL:;
}
/* method phase$Phase$depends for (self: Phase): nullable Collection[Phase] */
val* nitc___nitc__Phase___depends(val* self) {
val* var /* : nullable Collection[Phase] */;
val* var1 /* : nullable Collection[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__Phase___depends].val; /* _depends on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase$Phase$depends= for (self: Phase, nullable Collection[Phase]) */
void nitc___nitc__Phase___depends_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___depends].val = p0; /* _depends on <self:Phase> */
RET_LABEL:;
}
/* method phase$Phase$init for (self: Phase) */
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
{ /* Inline phase$Phase$toolcontext (self) on <self:Phase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline phase$ToolContext$phases (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline phase$Phase$in_hierarchy= (self,var6) on <self:Phase> */
self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val = var6; /* _in_hierarchy on <self:Phase> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline phase$Phase$depends (self) on <self:Phase> */
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
{ /* Inline kernel$Object$!= (var_depends,((val*)NULL)) on <var_depends:nullable Collection[Phase]> */
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
{ /* Inline phase$Phase$toolcontext (self) on <self:Phase> */
var22 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline phase$ToolContext$phases (var20) on <var20:ToolContext> */
var25 = var20->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <var20:ToolContext> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
poset___poset__POSet___add_edge(var23, self, var_d); /* Direct call poset$POSet$add_edge on <var23:POSet[Phase]>*/
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
/* method phase$Phase$to_s for (self: Phase): String */
val* nitc___nitc__Phase___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : String */;
val* var10 /* : String */;
{
var1 = core__abstract_text___Object___class_name(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Phase";
var5 = (val*)(5l<<2|1);
var6 = (val*)(5l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
{
var9 = core__file___String___strip_extension(var1, var2);
}
{
var10 = core___core__String___Text__to_snake_case(var9);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method phase$Phase$disabled for (self: Phase): Bool */
short int nitc___nitc__Phase___disabled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase$Phase$disabled= for (self: Phase, Bool) */
void nitc___nitc__Phase___disabled_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__Phase___disabled].s = p0; /* _disabled on <self:Phase> */
RET_LABEL:;
}
/* method phase$Phase$process_nmodule for (self: Phase, AModule) */
void nitc___nitc__Phase___process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
var_nmodule = p0;
RET_LABEL:;
}
/* method phase$Phase$process_nclassdef for (self: Phase, AClassdef) */
void nitc___nitc__Phase___process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
var_nclassdef = p0;
RET_LABEL:;
}
/* method phase$Phase$process_npropdef for (self: Phase, APropdef) */
void nitc___nitc__Phase___process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
var_npropdef = p0;
RET_LABEL:;
}
/* method phase$Phase$process_annotated_node for (self: Phase, ANode, AAnnotation) */
void nitc___nitc__Phase___process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
var_node = p0;
var_nat = p1;
RET_LABEL:;
}
/* method phase$Phase$process_nmodule_after for (self: Phase, AModule) */
void nitc___nitc__Phase___process_nmodule_after(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
var_nmodule = p0;
RET_LABEL:;
}
