#include "phase.sep.0.h"
/* method phase#ToolContext#phases for (self: ToolContext): POSet[Phase] */
val* phase__ToolContext__phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_phase__ToolContext___64dphases].val; /* @phases on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @phases");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 23);
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
var1 = phase__ToolContext__phases(self);
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#phases= for (self: ToolContext, POSet[Phase]) */
void phase__ToolContext__phases_61d(val* self, val* p0) {
self->attrs[COLOR_phase__ToolContext___64dphases].val = p0; /* @phases on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#phases= for (self: Object, POSet[Phase]) */
void VIRTUAL_phase__ToolContext__phases_61d(val* self, val* p0) {
phase__ToolContext__phases_61d(self, p0);
RET_LABEL:;
}
/* method phase#ToolContext#phases_list for (self: ToolContext): Sequence[Phase] */
val* phase__ToolContext__phases_list(val* self) {
val* var /* : Sequence[Phase] */;
val* var1 /* : POSet[Phase] */;
val* var2 /* : Array[nullable Object] */;
val* var_phases /* var phases: Array[Phase] */;
val* var3 /* : POSet[Phase] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases]))(self) /* phases on <self:ToolContext>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_array__Collection__to_a]))(var1) /* to_a on <var1:POSet[Phase]>*/;
var_phases = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases]))(self) /* phases on <self:ToolContext>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_sorter__AbstractSorter__sort]))(var3, var_phases) /* sort on <var3:POSet[Phase]>*/;
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
long var_time0 /* var time0: Int */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
long var5 /* : Int */;
val* var6 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
long var20 /* : Int */;
val* var21 /* : Iterator[nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Location */;
val* var30 /* : nullable SourceFile */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
long var36 /* : Int */;
val* var37 /* : Iterator[nullable Object] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_phase40 /* var phase: Phase */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
long var51 /* : Int */;
val* var52 /* : ToolContext */;
short int var53 /* : Bool */;
long var54 /* : Int */;
long var_errcount /* var errcount: Int */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
long var61 /* : Int */;
val* var62 /* : ANodes[AClassdef] */;
val* var63 /* : Iterator[nullable Object] */;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : Location */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
long var82 /* : Int */;
val* var83 /* : ToolContext */;
short int var84 /* : Bool */;
val* var85 /* : ANodes[APropdef] */;
val* var86 /* : Iterator[nullable Object] */;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var89 /* : ToolContext */;
short int var90 /* : Bool */;
long var93 /* : Int */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : AnnotationPhaseVisitor */;
val* var_v /* var v: AnnotationPhaseVisitor */;
long var99 /* : Int */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
long var105 /* : Int */;
long var_time1 /* var time1: Int */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
long var111 /* : Int */;
long var113 /* : Int */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : Object */;
val* var123 /* : String */;
long var124 /* : Int */;
var_nmodules = p0;
var = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ToolContext>*/;
var_time0 = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "*** SEMANTIC ANALYSIS ***";
var3 = 25;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = 1;
((void (*)(val*, val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__info]))(self, var1, var5) /* info on <self:ToolContext>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_phase__ToolContext__phases_list]))(self) /* phases_list on <self:ToolContext>*/;
var_phases = var6;
var7 = ((val* (*)(val*))(var_phases->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_phases) /* iterator on <var_phases:Sequence[Phase]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_phase = var9;
if (varonce10) {
var11 = varonce10;
} else {
var12 = " registered phases: ";
var13 = 20;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((val* (*)(val*))(var_phase->class->vft[COLOR_string__Object__class_name]))(var_phase) /* class_name on <var_phase:Phase>*/;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 2;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var15;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
var20 = 2;
((void (*)(val*, val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__info]))(self, var19, var20) /* info on <self:ToolContext>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var21 = ((val* (*)(val*))(var_nmodules->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_nmodules) /* iterator on <var_nmodules:Collection[AModule]>*/;
for(;;) {
var22 = ((short int (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var21) /* is_ok on <var21:Iterator[nullable Object]>*/;
if(!var22) break;
var23 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__item]))(var21) /* item on <var21:Iterator[nullable Object]>*/;
var_nmodule = var23;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "Semantic analysis module ";
var27 = 25;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__ANode__location]))(var_nmodule) /* location on <var_nmodule:AModule>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_location__Location__file]))(var29) /* file on <var29:Location>*/;
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 51);
show_backtrace(1);
} else {
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_location__SourceFile__filename]))(var30) /* filename on <var30:nullable SourceFile>*/;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 2;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var31;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
var36 = 2;
((void (*)(val*, val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__info]))(self, var35, var36) /* info on <self:ToolContext>*/;
var37 = ((val* (*)(val*))(var_phases->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_phases) /* iterator on <var_phases:Sequence[Phase]>*/;
for(;;) {
var38 = ((short int (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var37) /* is_ok on <var37:Iterator[nullable Object]>*/;
if(!var38) break;
var39 = ((val* (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__item]))(var37) /* item on <var37:Iterator[nullable Object]>*/;
var_phase40 = var39;
if (varonce41) {
var42 = varonce41;
} else {
var43 = " phase: ";
var44 = 8;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = ((val* (*)(val*))(var_phase40->class->vft[COLOR_string__Object__class_name]))(var_phase40) /* class_name on <var_phase40:Phase>*/;
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 2;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var46;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
var51 = 3;
((void (*)(val*, val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__info]))(self, var50, var51) /* info on <self:ToolContext>*/;
var52 = ((val* (*)(val*))(var_phase40->class->vft[COLOR_phase__Phase__toolcontext]))(var_phase40) /* toolcontext on <var_phase40:Phase>*/;
var53 = ((short int (*)(val*, val*))(var52->class->vft[COLOR_kernel__Object___61d_61d]))(var52, self) /* == on <var52:ToolContext>*/;
if (!var53) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 54);
show_backtrace(1);
}
var54 = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__error_count]))(self) /* error_count on <self:ToolContext>*/;
var_errcount = var54;
((void (*)(val*, val*))(var_phase40->class->vft[COLOR_phase__Phase__process_nmodule]))(var_phase40, var_nmodule) /* process_nmodule on <var_phase40:Phase>*/;
var55 = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__error_count]))(self) /* error_count on <self:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var55) */
var58 = var_errcount == var55;
var59 = !var58;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
if (var56){
((void (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(self) /* check_errors on <self:ToolContext>*/;
goto BREAK_label60;
} else {
}
var61 = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__error_count]))(self) /* error_count on <self:ToolContext>*/;
var_errcount = var61;
var62 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_abstract_collection__Collection__iterator]))(var62) /* iterator on <var62:ANodes[AClassdef]>*/;
for(;;) {
var64 = ((short int (*)(val*))(var63->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var63) /* is_ok on <var63:Iterator[nullable Object]>*/;
if(!var64) break;
var65 = ((val* (*)(val*))(var63->class->vft[COLOR_abstract_collection__Iterator__item]))(var63) /* item on <var63:Iterator[nullable Object]>*/;
var_nclassdef = var65;
if (varonce66) {
var67 = varonce66;
} else {
var68 = " phase: ";
var69 = 8;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = ((val* (*)(val*))(var_phase40->class->vft[COLOR_string__Object__class_name]))(var_phase40) /* class_name on <var_phase40:Phase>*/;
if (varonce72) {
var73 = varonce72;
} else {
var74 = " for ";
var75 = 5;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__ANode__location]))(var_nclassdef) /* location on <var_nclassdef:AClassdef>*/;
var78 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 4;
var80 = NEW_array__NativeArray(var79, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var80)->values[0] = (val*) var67;
((struct instance_array__NativeArray*)var80)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var80)->values[2] = (val*) var73;
((struct instance_array__NativeArray*)var80)->values[3] = (val*) var77;
((void (*)(val*, val*, long))(var78->class->vft[COLOR_array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
var81 = ((val* (*)(val*))(var78->class->vft[COLOR_string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
var82 = 3;
((void (*)(val*, val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__info]))(self, var81, var82) /* info on <self:ToolContext>*/;
var83 = ((val* (*)(val*))(var_phase40->class->vft[COLOR_phase__Phase__toolcontext]))(var_phase40) /* toolcontext on <var_phase40:Phase>*/;
var84 = ((short int (*)(val*, val*))(var83->class->vft[COLOR_kernel__Object___61d_61d]))(var83, self) /* == on <var83:ToolContext>*/;
if (!var84) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 64);
show_backtrace(1);
}
((void (*)(val*, val*))(var_phase40->class->vft[COLOR_phase__Phase__process_nclassdef]))(var_phase40, var_nclassdef) /* process_nclassdef on <var_phase40:Phase>*/;
var85 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var86 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_collection__Collection__iterator]))(var85) /* iterator on <var85:ANodes[APropdef]>*/;
for(;;) {
var87 = ((short int (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var86) /* is_ok on <var86:Iterator[nullable Object]>*/;
if(!var87) break;
var88 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__item]))(var86) /* item on <var86:Iterator[nullable Object]>*/;
var_npropdef = var88;
var89 = ((val* (*)(val*))(var_phase40->class->vft[COLOR_phase__Phase__toolcontext]))(var_phase40) /* toolcontext on <var_phase40:Phase>*/;
var90 = ((short int (*)(val*, val*))(var89->class->vft[COLOR_kernel__Object___61d_61d]))(var89, self) /* == on <var89:ToolContext>*/;
if (!var90) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 67);
show_backtrace(1);
}
((void (*)(val*, val*))(var_phase40->class->vft[COLOR_phase__Phase__process_npropdef]))(var_phase40, var_npropdef) /* process_npropdef on <var_phase40:Phase>*/;
CONTINUE_label91: (void)0;
((void (*)(val*))(var86->class->vft[COLOR_abstract_collection__Iterator__next]))(var86) /* next on <var86:Iterator[nullable Object]>*/;
}
BREAK_label91: (void)0;
CONTINUE_label92: (void)0;
((void (*)(val*))(var63->class->vft[COLOR_abstract_collection__Iterator__next]))(var63) /* next on <var63:Iterator[nullable Object]>*/;
}
BREAK_label92: (void)0;
var93 = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__error_count]))(self) /* error_count on <self:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var93) */
var96 = var_errcount == var93;
var97 = !var96;
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
if (var94){
((void (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(self) /* check_errors on <self:ToolContext>*/;
goto BREAK_label60;
} else {
}
var98 = NEW_phase__AnnotationPhaseVisitor(&type_phase__AnnotationPhaseVisitor);
((void (*)(val*, val*))(var98->class->vft[COLOR_phase__AnnotationPhaseVisitor__init]))(var98, var_phase40) /* init on <var98:AnnotationPhaseVisitor>*/;
var_v = var98;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_nmodule) /* enter_visit on <var_v:AnnotationPhaseVisitor>*/;
var99 = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__error_count]))(self) /* error_count on <self:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var99) */
var102 = var_errcount == var99;
var103 = !var102;
var100 = var103;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
if (var100){
((void (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(self) /* check_errors on <self:ToolContext>*/;
goto BREAK_label60;
} else {
}
CONTINUE_label60: (void)0;
((void (*)(val*))(var37->class->vft[COLOR_abstract_collection__Iterator__next]))(var37) /* next on <var37:Iterator[nullable Object]>*/;
}
BREAK_label60: (void)0;
((void (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(self) /* check_errors on <self:ToolContext>*/;
CONTINUE_label104: (void)0;
((void (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__next]))(var21) /* next on <var21:Iterator[nullable Object]>*/;
}
BREAK_label104: (void)0;
var105 = ((long (*)(val*))(self->class->vft[COLOR_time__Object__get_time]))(self) /* get_time on <self:ToolContext>*/;
var_time1 = var105;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "*** END SEMANTIC ANALYSIS: ";
var109 = 27;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
{ /* Inline kernel#Int#- (var_time1,var_time0) */
var113 = var_time1 - var_time0;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = " ***";
var117 = 4;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 3;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var107;
var122 = BOX_kernel__Int(var111); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var122;
((struct instance_array__NativeArray*)var121)->values[2] = (val*) var115;
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
var123 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
var124 = 2;
((void (*)(val*, val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__info]))(self, var123, var124) /* info on <self:ToolContext>*/;
RET_LABEL:;
}
/* method phase#ToolContext#run_phases for (self: Object, Collection[AModule]) */
void VIRTUAL_phase__ToolContext__run_phases(val* self, val* p0) {
phase__ToolContext__run_phases(self, p0);
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#phase for (self: AnnotationPhaseVisitor): Phase */
val* phase__AnnotationPhaseVisitor__phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_phase__AnnotationPhaseVisitor___64dphase].val; /* @phase on <self:AnnotationPhaseVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @phase");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 93);
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
var1 = phase__AnnotationPhaseVisitor__phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#phase= for (self: AnnotationPhaseVisitor, Phase) */
void phase__AnnotationPhaseVisitor__phase_61d(val* self, val* p0) {
self->attrs[COLOR_phase__AnnotationPhaseVisitor___64dphase].val = p0; /* @phase on <self:AnnotationPhaseVisitor> */
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#phase= for (self: Object, Phase) */
void VIRTUAL_phase__AnnotationPhaseVisitor__phase_61d(val* self, val* p0) {
phase__AnnotationPhaseVisitor__phase_61d(self, p0);
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#init for (self: AnnotationPhaseVisitor, Phase) */
void phase__AnnotationPhaseVisitor__init(val* self, val* p0) {
val* var_phase /* var phase: Phase */;
var_phase = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:AnnotationPhaseVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_phase__AnnotationPhaseVisitor__phase_61d]))(self, var_phase) /* phase= on <self:AnnotationPhaseVisitor>*/;
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#init for (self: Object, Phase) */
void VIRTUAL_phase__AnnotationPhaseVisitor__init(val* self, val* p0) {
phase__AnnotationPhaseVisitor__init(self, p0);
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: AnnotationPhaseVisitor, ANode) */
void phase__AnnotationPhaseVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Phase */;
val* var2 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
var_n = p0;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
/* <var_n:ANode> isa AAnnotation */
cltype = type_parser_nodes__AAnnotation.color;
idtype = type_parser_nodes__AAnnotation.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(self->class->vft[COLOR_phase__AnnotationPhaseVisitor__phase]))(self) /* phase on <self:AnnotationPhaseVisitor>*/;
var2 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent]))(var_n) /* parent on <var_n:ANode(AAnnotation)>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 100);
show_backtrace(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_parser_nodes__ANode__parent]))(var2) /* parent on <var2:nullable ANode>*/;
}
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 100);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_phase__Phase__process_annotated_node]))(var1, var3, var_n) /* process_annotated_node on <var1:Phase>*/;
} else {
}
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: Object, ANode) */
void VIRTUAL_phase__AnnotationPhaseVisitor__visit(val* self, val* p0) {
phase__AnnotationPhaseVisitor__visit(self, p0);
RET_LABEL:;
}
/* method phase#Phase#toolcontext for (self: Phase): ToolContext */
val* phase__Phase__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:Phase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 107);
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
var1 = phase__Phase__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#toolcontext= for (self: Phase, ToolContext) */
void phase__Phase__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_phase__Phase___64dtoolcontext].val = p0; /* @toolcontext on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_phase__Phase__toolcontext_61d(val* self, val* p0) {
phase__Phase__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method phase#Phase#in_hierarchy for (self: Phase): POSetElement[Phase] */
val* phase__Phase__in_hierarchy(val* self) {
val* var /* : POSetElement[Phase] */;
val* var1 /* : POSetElement[Phase] */;
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:Phase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_hierarchy");
fprintf(stderr, " (%s:%d)\n", "src/phase.nit", 110);
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
var1 = phase__Phase__in_hierarchy(self);
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#in_hierarchy= for (self: Phase, POSetElement[Phase]) */
void phase__Phase__in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_phase__Phase___64din_hierarchy].val = p0; /* @in_hierarchy on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#in_hierarchy= for (self: Object, POSetElement[Phase]) */
void VIRTUAL_phase__Phase__in_hierarchy_61d(val* self, val* p0) {
phase__Phase__in_hierarchy_61d(self, p0);
RET_LABEL:;
}
/* method phase#Phase#init for (self: Phase, ToolContext, nullable Collection[Phase]) */
void phase__Phase__init(val* self, val* p0, val* p1) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_depends /* var depends: nullable Collection[Phase] */;
val* var /* : POSet[Phase] */;
val* var1 /* : POSetElement[Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_d /* var d: Phase */;
val* var7 /* : POSet[Phase] */;
var_toolcontext = p0;
var_depends = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_phase__Phase__toolcontext_61d]))(self, var_toolcontext) /* toolcontext= on <self:Phase>*/;
var = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_phase__ToolContext__phases]))(var_toolcontext) /* phases on <var_toolcontext:ToolContext>*/;
var1 = ((val* (*)(val*, val*))(var->class->vft[COLOR_poset__POSet__add_node]))(var, self) /* add_node on <var:POSet[Phase]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_phase__Phase__in_hierarchy_61d]))(self, var1) /* in_hierarchy= on <self:Phase>*/;
var2 = NULL;
if (var_depends == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(var_depends->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_depends) /* iterator on <var_depends:nullable Collection[Phase](Collection[Phase])>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_d = var6;
var7 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_phase__ToolContext__phases]))(var_toolcontext) /* phases on <var_toolcontext:ToolContext>*/;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_poset__POSet__add_edge]))(var7, self, var_d) /* add_edge on <var7:POSet[Phase]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
RET_LABEL:;
}
/* method phase#Phase#init for (self: Object, ToolContext, nullable Collection[Phase]) */
void VIRTUAL_phase__Phase__init(val* self, val* p0, val* p1) {
phase__Phase__init(self, p0, p1);
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
phase__Phase__process_nmodule(self, p0);
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
phase__Phase__process_nclassdef(self, p0);
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
phase__Phase__process_npropdef(self, p0);
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
phase__Phase__process_annotated_node(self, p0, p1);
RET_LABEL:;
}
