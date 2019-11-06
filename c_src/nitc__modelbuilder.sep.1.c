#include "nitc__modelbuilder.sep.0.h"
/* method modelbuilder$ToolContext$opt_ignore_visibility for (self: ToolContext): OptionBool */
val* nitc__modelbuilder___ToolContext___opt_ignore_visibility(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder$ToolContext$init for (self: ToolContext) */
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
{ /* Inline modelbuilder$ToolContext$opt_ignore_visibility (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var7 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var7)->values[0] = (val*) var3;
{
((void(*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_core__array__Array__with_native]))(var6, var7, 1l); /* with_native on <var6:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var6); /* Direct call opts$OptionContext$add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method modelbuilder$ToolContext$make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* nitc__modelbuilder___ToolContext___make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MModule */;
val* var4 /* : ModelBuilder */;
val* var5 /* : Model */;
val* var7 /* : Model */;
val* var8 /* : nullable Object */;
val* var9 /* : String */;
val* var11 /* : String */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var19 /* : Text */;
val* var20 /* : Location */;
val* var21 /* : nullable Object */;
val* var22 /* : Location */;
val* var24 /* : Location */;
val* var25 /* : nullable SourceFile */;
val* var27 /* : nullable SourceFile */;
val* var_mainmodule /* var mainmodule: nullable Object */;
val* var29 /* : nullable Object */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
val* var34 /* : ModelBuilder */;
short int var35 /* : Bool */;
val* var36 /* : POSetElement[MModule] */;
val* var38 /* : POSetElement[MModule] */;
val* var39 /* : Collection[nullable Object] */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_ /* var : Bool */;
val* var44 /* : POSetElement[MModule] */;
val* var46 /* : POSetElement[MModule] */;
val* var47 /* : Collection[nullable Object] */;
val* var48 /* : nullable Object */;
val* var49 /* : nullable Object */;
short int var50 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var56 /* : ModelBuilder */;
var_mmodules = p0;
{
var1 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mmodules);
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 39);
fatal_exit(1);
}
var3 = NEW_nitc__MModule(&type_nitc__MModule);
{
var4 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
{ /* Inline modelbuilder_base$ModelBuilder$model (var4) on <var4:ModelBuilder> */
var7 = var4->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var4:ModelBuilder> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule$MModule$name (var8) on <var8:nullable Object(MModule)> */
var11 = var8->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var8:nullable Object(MModule)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "-m";
var15 = (val*)(2l<<2|1);
var16 = (val*)(2l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce = var12;
}
{
var19 = ((val*(*)(val* self, val* p0))(var9->class->vft[COLOR_core__abstract_text__Text___43d]))(var9, var12); /* + on <var9:String>*/
}
var20 = NEW_nitc__Location(&type_nitc__Location);
{
var21 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule$MModule$location (var21) on <var21:nullable Object(MModule)> */
var24 = var21->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var21:nullable Object(MModule)> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline location$Location$file (var22) on <var22:Location> */
var27 = var22->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var22:Location> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nitc__location__Location__file_61d]))(var20, var25); /* file= on <var20:Location>*/
}
{
((void(*)(val* self, long p0))(var20->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var20, 0l); /* line_start= on <var20:Location>*/
}
{
((void(*)(val* self, long p0))(var20->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var20, 0l); /* line_end= on <var20:Location>*/
}
{
((void(*)(val* self, long p0))(var20->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var20, 0l); /* column_start= on <var20:Location>*/
}
{
((void(*)(val* self, long p0))(var20->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var20, 0l); /* column_end= on <var20:Location>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:Location>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__mmodule__MModule__model_61d]))(var3, var5); /* model= on <var3:MModule>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__mmodule__MModule__mgroup_61d]))(var3, ((val*)NULL)); /* mgroup= on <var3:MModule>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__mmodule__MModule__name_61d]))(var3, var19); /* name= on <var3:MModule>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__mmodule__MModule__location_61d]))(var3, var20); /* location= on <var3:MModule>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:MModule>*/
}
var_mainmodule = var3;
{
{ /* Inline model_base$MEntity$is_fictive= (var_mainmodule,1) on <var_mainmodule:nullable Object(MModule)> */
var_mainmodule->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mainmodule:nullable Object(MModule)> */
RET_LABEL28:(void)0;
}
}
{
var29 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule$MModule$first_real_mmodule (var29) on <var29:nullable Object(MModule)> */
var32 = var29->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val; /* _first_real_mmodule on <var29:nullable Object(MModule)> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first_real_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 260);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline mmodule$MModule$first_real_mmodule= (var_mainmodule,var30) on <var_mainmodule:nullable Object(MModule)> */
var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val = var30; /* _first_real_mmodule on <var_mainmodule:nullable Object(MModule)> */
RET_LABEL33:(void)0;
}
}
{
nitc___nitc__MModule___set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule$MModule$set_imported_mmodules on <var_mainmodule:nullable Object(MModule)>*/
}
{
var34 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
nitc__loader___ModelBuilder___apply_conditional_importations(var34, var_mainmodule); /* Direct call loader$ModelBuilder$apply_conditional_importations on <var34:ModelBuilder>*/
}
{
{ /* Inline mmodule$MModule$in_importation (var_mainmodule) on <var_mainmodule:nullable Object(MModule)> */
var38 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:nullable Object(MModule)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = poset___poset__POSetElement___direct_greaters(var36);
}
{
var40 = ((long(*)(val* self))((((long)var39&3)?class_info[((long)var39&3)]:var39->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var39); /* length on <var39:Collection[nullable Object](Collection[MModule])>*/
}
{
{ /* Inline kernel$Int$== (var40,1l) on <var40:Int> */
var43 = var40 == 1l;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_ = var41;
if (var41){
{
{ /* Inline mmodule$MModule$in_importation (var_mainmodule) on <var_mainmodule:nullable Object(MModule)> */
var46 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:nullable Object(MModule)> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = poset___poset__POSetElement___direct_greaters(var44);
}
{
var48 = ((val*(*)(val* self))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var47); /* first on <var47:Collection[nullable Object](Collection[MModule])>*/
}
{
var49 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline kernel$Object$== (var48,var49) on <var48:nullable Object(MModule)> */
var_other = var49;
{
{ /* Inline kernel$Object$is_same_instance (var48,var_other) on <var48:nullable Object(MModule)> */
var54 = var48 == var_other;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var35 = var50;
} else {
var35 = var_;
}
if (var35){
{
var55 = core___core__SequenceRead___Collection__first(var_mmodules);
}
var_mainmodule = var55;
} else {
{
var56 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
nitc__modelbuilder___ModelBuilder___run_phases(var56); /* Direct call modelbuilder$ModelBuilder$run_phases on <var56:ModelBuilder>*/
}
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder$ToolContext$run_global_phases for (self: ToolContext, Array[MModule]) */
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
{ /* Inline phase$Phase$disabled (var_phase) on <var_phase:Phase> */
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
nitc___nitc__ToolContext___errors_info(self); /* Direct call toolcontext$ToolContext$errors_info on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder$Phase$process_mainmodule for (self: Phase, MModule, SequenceRead[MModule]) */
void nitc__modelbuilder___Phase___process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
var_mainmodule = p0;
var_given_mmodules = p1;
RET_LABEL:;
}
/* method modelbuilder$ModelBuilder$run_phases for (self: ModelBuilder) */
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
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
val* var43 /* : ToolContext */;
val* var45 /* : ToolContext */;
{
{ /* Inline loader$ModelBuilder$parsed_modules (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val; /* _parsed_modules on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parsed_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 325);
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
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var6 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule$Model$mmodule_importation_hierarchy (var4) on <var4:Model> */
var9 = var4->attrs[COLOR_nitc__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var4:Model> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 33);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__Comparator___sort(var7, var_mmodules); /* Direct call sorter$Comparator$sort on <var7:POSet[MModule]>*/
}
var10 = NEW_core__Array(&type_core__Array__nitc__AModule);
{
core___core__Array___core__kernel__Object__init(var10); /* Direct call array$Array$init on <var10:Array[AModule]>*/
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
{ /* Inline model_base$MEntity$is_fictive (var_mm) on <var_mm:MModule> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 100);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_nmodules, var19); /* Direct call array$Array$add on <var_nmodules:Array[AModule]>*/
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
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc__phase___ToolContext___run_phases(var20, var_nmodules); /* Direct call phase$ToolContext$run_phases on <var20:ToolContext>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline loader$ToolContext$opt_only_metamodel (var23) on <var23:ToolContext> */
var28 = var23->attrs[COLOR_nitc__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <var23:ToolContext> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 47);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline opts$Option$value (var26) on <var26:OptionBool> */
var31 = var26->attrs[COLOR_opts__Option___value].val; /* _value on <var26:OptionBool> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = (short int)((long)(var29)>>2);
if (var32){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var35 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var39 = (val*)(18l<<2|1);
var40 = (val*)(18l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce = var36;
}
{
nitc___nitc__ToolContext___info(var33, var36, 1l); /* Direct call toolcontext$ToolContext$info on <var33:ToolContext>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var45 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
nitc___nitc__ToolContext___quit(var43); /* Direct call toolcontext$ToolContext$quit on <var43:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
