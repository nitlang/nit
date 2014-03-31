#include "modelize_property.sep.0.h"
/* method modelize_property#ToolContext#modelize_property_phase for (self: ToolContext): Phase */
val* modelize_property__ToolContext__modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_modelize_property__ToolContext___64dmodelize_property_phase].val; /* @modelize_property_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelize_property_phase");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ToolContext#modelize_property_phase for (self: Object): Phase */
val* VIRTUAL_modelize_property__ToolContext__modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = modelize_property__ToolContext__modelize_property_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ToolContext#modelize_property_phase= for (self: ToolContext, Phase) */
void modelize_property__ToolContext__modelize_property_phase_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__ToolContext___64dmodelize_property_phase].val = p0; /* @modelize_property_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method modelize_property#ToolContext#modelize_property_phase= for (self: Object, Phase) */
void VIRTUAL_modelize_property__ToolContext__modelize_property_phase_61d(val* self, val* p0) {
modelize_property__ToolContext__modelize_property_phase_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#ModelizePropertyPhase#process_nmodule for (self: ModelizePropertyPhase, AModule) */
void modelize_property__ModelizePropertyPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ANodes[AClassdef] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var4 /* : ToolContext */;
val* var5 /* : ModelBuilder */;
var_nmodule = p0;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[AClassdef]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_nclassdef = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:ModelizePropertyPhase>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var4) /* modelbuilder on <var4:ToolContext>*/;
((void (*)(val*, val*))(var5->class->vft[COLOR_modelize_property__ModelBuilder__build_properties]))(var5, var_nclassdef) /* build_properties on <var5:ModelBuilder>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method modelize_property#ModelizePropertyPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_modelize_property__ModelizePropertyPhase__process_nmodule(val* self, val* p0) {
modelize_property__ModelizePropertyPhase__process_nmodule(self, p0);
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef for (self: ModelBuilder): HashMap[MPropDef, APropdef] */
val* modelize_property__ModelBuilder__mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
var1 = self->attrs[COLOR_modelize_property__ModelBuilder___64dmpropdef2npropdef].val; /* @mpropdef2npropdef on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef2npropdef");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 37);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef for (self: Object): HashMap[MPropDef, APropdef] */
val* VIRTUAL_modelize_property__ModelBuilder__mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
var1 = modelize_property__ModelBuilder__mpropdef2npropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef= for (self: ModelBuilder, HashMap[MPropDef, APropdef]) */
void modelize_property__ModelBuilder__mpropdef2npropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__ModelBuilder___64dmpropdef2npropdef].val = p0; /* @mpropdef2npropdef on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef= for (self: Object, HashMap[MPropDef, APropdef]) */
void VIRTUAL_modelize_property__ModelBuilder__mpropdef2npropdef_61d(val* self, val* p0) {
modelize_property__ModelBuilder__mpropdef2npropdef_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#build_properties for (self: ModelBuilder, AClassdef) */
void modelize_property__ModelBuilder__build_properties(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var3 /* : nullable POSetElement[MClassDef] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable POSetElement[MClassDef] */;
val* var7 /* : Collection[Object] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_superclassdef /* var superclassdef: MClassDef */;
val* var11 /* : HashMap[MClassDef, AClassdef] */;
val* var12 /* : nullable Object */;
val* var13 /* : ANodes[APropdef] */;
val* var14 /* : Iterator[nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var18 /* : ANodes[APropdef] */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_npropdef22 /* var npropdef: APropdef */;
val* var24 /* : ANodes[APropdef] */;
val* var25 /* : Iterator[nullable Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_npropdef28 /* var npropdef: APropdef */;
var_nclassdef = p0;
var = ((short int (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__build_properties_is_done]))(var_nclassdef) /* build_properties_is_done on <var_nclassdef:AClassdef>*/;
if (var){
goto RET_LABEL;
} else {
}
var1 = 1;
((void (*)(val*, short int))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__build_properties_is_done_61d]))(var_nclassdef, var1) /* build_properties_is_done= on <var_nclassdef:AClassdef>*/;
var2 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 48);
show_backtrace(1);
}
var_mclassdef = var2;
var3 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__in_hierarchy]))(var_mclassdef) /* in_hierarchy on <var_mclassdef:MClassDef>*/;
var4 = NULL;
if (var3 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (var5){
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__in_hierarchy]))(var_mclassdef) /* in_hierarchy on <var_mclassdef:MClassDef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 50);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var6) /* direct_greaters on <var6:nullable POSetElement[MClassDef]>*/;
}
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:Collection[Object](Collection[MClassDef])>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_superclassdef = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(self) /* mclassdef2nclassdef on <self:ModelBuilder>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_superclassdef) /* [] on <var11:HashMap[MClassDef, AClassdef]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__ModelBuilder__build_properties]))(self, var12) /* build_properties on <self:ModelBuilder>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var13 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Collection__iterator]))(var13) /* iterator on <var13:ANodes[APropdef]>*/;
for(;;) {
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[nullable Object]>*/;
if(!var15) break;
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[nullable Object]>*/;
var_npropdef = var16;
((void (*)(val*, val*, val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__build_property]))(var_npropdef, self, var_nclassdef) /* build_property on <var_npropdef:APropdef>*/;
CONTINUE_label17: (void)0;
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[nullable Object]>*/;
}
BREAK_label17: (void)0;
var18 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__iterator]))(var18) /* iterator on <var18:ANodes[APropdef]>*/;
for(;;) {
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[nullable Object]>*/;
if(!var20) break;
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[nullable Object]>*/;
var_npropdef22 = var21;
((void (*)(val*, val*, val*))(var_npropdef22->class->vft[COLOR_modelize_property__APropdef__build_signature]))(var_npropdef22, self, var_nclassdef) /* build_signature on <var_npropdef22:APropdef>*/;
CONTINUE_label23: (void)0;
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
BREAK_label23: (void)0;
var24 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Collection__iterator]))(var24) /* iterator on <var24:ANodes[APropdef]>*/;
for(;;) {
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[nullable Object]>*/;
if(!var26) break;
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[nullable Object]>*/;
var_npropdef28 = var27;
((void (*)(val*, val*, val*))(var_npropdef28->class->vft[COLOR_modelize_property__APropdef__check_signature]))(var_npropdef28, self, var_nclassdef) /* check_signature on <var_npropdef28:APropdef>*/;
CONTINUE_label29: (void)0;
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[nullable Object]>*/;
}
BREAK_label29: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__ModelBuilder__process_default_constructors]))(self, var_nclassdef) /* process_default_constructors on <self:ModelBuilder>*/;
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#build_properties for (self: Object, AClassdef) */
void VIRTUAL_modelize_property__ModelBuilder__build_properties(val* self, val* p0) {
modelize_property__ModelBuilder__build_properties(self, p0);
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#process_default_constructors for (self: ModelBuilder, AClassdef) */
void modelize_property__ModelBuilder__process_default_constructors(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClass */;
val* var4 /* : MClassKind */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[MPropDef] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var11 /* : Bool */;
int cltype;
int idtype;
short int var12 /* : Bool */;
val* var13 /* : MProperty */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
short int var18 /* : Bool */;
val* var19 /* : nullable MClassDef */;
val* var20 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var21 /* : Array[MMethod] */;
val* var_combine /* var combine: Array[MMethod] */;
val* var22 /* : null */;
val* var_inhc /* var inhc: nullable MClass */;
val* var23 /* : Array[MClassType] */;
val* var24 /* : Iterator[nullable Object] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var27 /* : MClass */;
val* var_c /* var c: MClass */;
val* var28 /* : MClassKind */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var32 /* : nullable MClassDef */;
val* var33 /* : MClassType */;
val* var34 /* : MType */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : nullable MProperty */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name;
val* var_candidate /* var candidate: nullable MMethod */;
short int var43 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var_ /* var : Bool */;
val* var46 /* : MPropDef */;
val* var47 /* : nullable MSignature */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable MClass */;
val* var_inhc2 /* var inhc2: nullable MClass */;
val* var54 /* : null */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : null */;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var_75 /* var : Bool */;
val* var76 /* : null */;
short int var77 /* : Bool */;
val* var78 /* : ToolContext */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
long var88 /* : Int */;
val* var89 /* : MClass */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var_93 /* var : Bool */;
val* var94 /* : null */;
short int var95 /* : Bool */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var118 /* : MMethod */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : String */;
val* var124 /* : MClass */;
val* var125 /* : MVisibility */;
val* var_mprop /* var mprop: MMethod */;
val* var126 /* : MMethodDef */;
val* var127 /* : Location */;
val* var_mpropdef128 /* var mpropdef: MMethodDef */;
val* var129 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var130 /* : MSignature */;
val* var131 /* : null */;
val* var_msignature /* var msignature: MSignature */;
short int var132 /* : Bool */;
val* var133 /* : ToolContext */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : String */;
val* var139 /* : Array[Object] */;
long var140 /* : Int */;
val* var141 /* : NativeArray[Object] */;
val* var142 /* : String */;
long var143 /* : Int */;
val* var144 /* : Array[MParameter] */;
val* var_mparameters145 /* var mparameters: Array[MParameter] */;
val* var146 /* : ANodes[APropdef] */;
val* var147 /* : Iterator[nullable Object] */;
short int var148 /* : Bool */;
val* var149 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
short int var_154 /* var : Bool */;
val* var155 /* : nullable AExpr */;
val* var156 /* : null */;
short int var157 /* : Bool */;
val* var158 /* : nullable MPropDef */;
val* var159 /* : null */;
short int var160 /* : Bool */;
val* var161 /* : nullable MPropDef */;
val* var162 /* : MProperty */;
val* var163 /* : String */;
long var164 /* : Int */;
val* var165 /* : String */;
val* var_paramname /* var paramname: String */;
val* var166 /* : nullable MPropDef */;
val* var167 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var168 /* : null */;
short int var169 /* : Bool */;
val* var170 /* : MParameter */;
short int var171 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var173 /* : MMethod */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
val* var179 /* : MClass */;
val* var180 /* : MVisibility */;
val* var_mprop181 /* var mprop: MMethod */;
val* var182 /* : MMethodDef */;
val* var183 /* : Location */;
val* var_mpropdef184 /* var mpropdef: MMethodDef */;
val* var185 /* : MSignature */;
val* var186 /* : null */;
val* var_msignature187 /* var msignature: MSignature */;
short int var188 /* : Bool */;
val* var189 /* : ToolContext */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : String */;
val* var195 /* : Array[Object] */;
long var196 /* : Int */;
val* var197 /* : NativeArray[Object] */;
val* var198 /* : String */;
long var199 /* : Int */;
var_nclassdef = p0;
var = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 70);
show_backtrace(1);
}
var_mclassdef = var;
var1 = ((short int (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__is_intro]))(var_mclassdef) /* is_intro on <var_mclassdef:MClassDef>*/;
var2 = !var1;
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef) /* mclass on <var_mclassdef:MClassDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClass__kind]))(var3) /* kind on <var3:MClass>*/;
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_model__MClassKind__need_init]))(var4) /* need_init on <var4:MClassKind>*/;
var6 = !var5;
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mpropdefs]))(var_mclassdef) /* mpropdefs on <var_mclassdef:MClassDef>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:Array[MPropDef]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_mpropdef = var10;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var11 = 0;
} else {
var11 = var_mpropdef->type->type_table[cltype] == idtype;
}
var12 = !var11;
if (var12){
goto CONTINUE_label;
} else {
}
var13 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/;
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_model__MMethod__is_init]))(var13) /* is_init on <var13:MProperty(MMethod)>*/;
if (var14){
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype16 = type_parser_nodes__AStdClassdef.color;
idtype17 = type_parser_nodes__AStdClassdef.id;
if(cltype16 >= var_nclassdef->type->table_size) {
var15 = 0;
} else {
var15 = var_nclassdef->type->type_table[cltype16] == idtype17;
}
var18 = !var15;
if (var18){
goto RET_LABEL;
} else {
}
var19 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 86);
show_backtrace(1);
} else {
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MClassDef__mmodule]))(var19) /* mmodule on <var19:nullable MClassDef>*/;
}
var_mmodule = var20;
var21 = NEW_array__Array(&type_array__Arraymodel__MMethod);
((void (*)(val*))(var21->class->vft[COLOR_array__Array__init]))(var21) /* init on <var21:Array[MMethod]>*/;
var_combine = var21;
var22 = NULL;
var_inhc = var22;
var23 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__supertypes]))(var_mclassdef) /* supertypes on <var_mclassdef:MClassDef>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Collection__iterator]))(var23) /* iterator on <var23:Array[MClassType]>*/;
for(;;) {
var25 = ((short int (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var24) /* is_ok on <var24:Iterator[nullable Object]>*/;
if(!var25) break;
var26 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__item]))(var24) /* item on <var24:Iterator[nullable Object]>*/;
var_st = var26;
var27 = ((val* (*)(val*))(var_st->class->vft[COLOR_model__MClassType__mclass]))(var_st) /* mclass on <var_st:MClassType>*/;
var_c = var27;
var28 = ((val* (*)(val*))(var_c->class->vft[COLOR_model__MClass__kind]))(var_c) /* kind on <var_c:MClass>*/;
var29 = ((short int (*)(val*))(var28->class->vft[COLOR_model__MClassKind__need_init]))(var28) /* need_init on <var28:MClassKind>*/;
var30 = !var29;
if (var30){
goto CONTINUE_label31;
} else {
}
var32 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var32 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 93);
show_backtrace(1);
} else {
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_model__MClassDef__bound_mtype]))(var32) /* bound_mtype on <var32:nullable MClassDef>*/;
}
var34 = ((val* (*)(val*, val*, val*))(var_st->class->vft[COLOR_model__MType__anchor_to]))(var_st, var_mmodule, var33) /* anchor_to on <var_st:MClassType>*/;
var_st = var34;
if (varonce) {
var35 = varonce;
} else {
var36 = "init";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce = var35;
}
var39 = ((val* (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(self, var_nclassdef, var_mmodule, var_st, var35) /* try_get_mproperty_by_name2 on <self:ModelBuilder>*/;
/* <var39:nullable MProperty> isa nullable MMethod */
cltype41 = type_nullable_model__MMethod.color;
idtype42 = type_nullable_model__MMethod.id;
if(var39 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var39->type->table_size) {
var40 = 0;
} else {
var40 = var39->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
var_class_name = var39 == NULL ? "null" : var39->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 94);
show_backtrace(1);
}
var_candidate = var39;
var44 = NULL;
if (var_candidate == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
var_ = var45;
if (var45){
var46 = ((val* (*)(val*))(var_candidate->class->vft[COLOR_model__MProperty__intro]))(var_candidate) /* intro on <var_candidate:nullable MMethod(MMethod)>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_model__MMethodDef__msignature]))(var46) /* msignature on <var46:MPropDef(MMethodDef)>*/;
if (var47 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 95);
show_backtrace(1);
} else {
var48 = ((long (*)(val*))(var47->class->vft[COLOR_model__MSignature__arity]))(var47) /* arity on <var47:nullable MSignature>*/;
}
var49 = 0;
{ /* Inline kernel#Int#== (var48,var49) */
var52 = var48 == var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var43 = var50;
} else {
var43 = var_;
}
if (var43){
((void (*)(val*, val*))(var_combine->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_combine, var_candidate) /* add on <var_combine:Array[MMethod]>*/;
goto CONTINUE_label31;
} else {
}
var53 = ((val* (*)(val*))(var_c->class->vft[COLOR_modelize_property__MClass__inherit_init_from]))(var_c) /* inherit_init_from on <var_c:MClass>*/;
var_inhc2 = var53;
var54 = NULL;
if (var_inhc2 == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (var55){
var_inhc2 = var_c;
} else {
}
var56 = ((short int (*)(val*, val*))(var_inhc2->class->vft[COLOR_kernel__Object___61d_61d]))(var_inhc2, var_inhc) /* == on <var_inhc2:nullable MClass(MClass)>*/;
if (var56){
goto CONTINUE_label31;
} else {
}
var57 = NULL;
if (var_inhc == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (var58){
if (varonce59) {
var60 = varonce59;
} else {
var61 = "Error: Cannot provide a defaut constructor: conflict for ";
var62 = 57;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = " and ";
var67 = 5;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 4;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var_inhc;
((struct instance_array__NativeArray*)var71)->values[2] = (val*) var65;
((struct instance_array__NativeArray*)var71)->values[3] = (val*) var_c;
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nclassdef, var72) /* error on <self:ModelBuilder>*/;
} else {
var_inhc = var_inhc2;
}
CONTINUE_label31: (void)0;
((void (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__next]))(var24) /* next on <var24:Iterator[nullable Object]>*/;
}
BREAK_label31: (void)0;
var74 = ((short int (*)(val*))(var_combine->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_combine) /* is_empty on <var_combine:Array[MMethod]>*/;
var_75 = var74;
if (var74){
var76 = NULL;
if (var_inhc == NULL) {
var77 = 0; /* is null */
} else {
var77 = 1; /* arg is null and recv is not */
}
var73 = var77;
} else {
var73 = var_75;
}
if (var73){
var78 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = " inherits all constructors from ";
var82 = 32;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 3;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var80;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var_inhc;
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
var88 = 3;
((void (*)(val*, val*, long))(var78->class->vft[COLOR_toolcontext__ToolContext__info]))(var78, var87, var88) /* info on <var78:ToolContext>*/;
var89 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef) /* mclass on <var_mclassdef:MClassDef>*/;
((void (*)(val*, val*))(var89->class->vft[COLOR_modelize_property__MClass__inherit_init_from_61d]))(var89, var_inhc) /* inherit_init_from= on <var89:MClass>*/;
goto RET_LABEL;
} else {
}
var91 = ((short int (*)(val*))(var_combine->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_combine) /* is_empty on <var_combine:Array[MMethod]>*/;
var92 = !var91;
var_93 = var92;
if (var92){
var94 = NULL;
if (var_inhc == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
var90 = var95;
} else {
var90 = var_93;
}
if (var90){
if (varonce96) {
var97 = varonce96;
} else {
var98 = "Error: Cannot provide a defaut constructor: conflict for ";
var99 = 57;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = ", ";
var104 = 2;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = ((val* (*)(val*, val*))(var_combine->class->vft[COLOR_string__Collection__join]))(var_combine, var102) /* join on <var_combine:Array[MMethod]>*/;
if (varonce107) {
var108 = varonce107;
} else {
var109 = " and ";
var110 = 5;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 4;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var97;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var106;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var108;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var_inhc;
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nclassdef, var115) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var116 = ((short int (*)(val*))(var_combine->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_combine) /* is_empty on <var_combine:Array[MMethod]>*/;
var117 = !var116;
if (var117){
((void (*)(val*, val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__super_inits_61d]))(var_nclassdef, var_combine) /* super_inits= on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var118 = NEW_model__MMethod(&type_model__MMethod);
if (varonce119) {
var120 = varonce119;
} else {
var121 = "init";
var122 = 4;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
var124 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef) /* mclass on <var_mclassdef:MClassDef>*/;
var125 = ((val* (*)(val*))(var124->class->vft[COLOR_model__MClass__visibility]))(var124) /* visibility on <var124:MClass>*/;
((void (*)(val*, val*, val*, val*))(var118->class->vft[COLOR_model__MMethod__init]))(var118, var_mclassdef, var120, var125) /* init on <var118:MMethod>*/;
var_mprop = var118;
var126 = NEW_model__MMethodDef(&type_model__MMethodDef);
var127 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__ANode__location]))(var_nclassdef) /* location on <var_nclassdef:AClassdef(AStdClassdef)>*/;
((void (*)(val*, val*, val*, val*))(var126->class->vft[COLOR_model__MMethodDef__init]))(var126, var_mclassdef, var_mprop, var127) /* init on <var126:MMethodDef>*/;
var_mpropdef128 = var126;
var129 = NEW_array__Array(&type_array__Arraymodel__MParameter);
((void (*)(val*))(var129->class->vft[COLOR_array__Array__init]))(var129) /* init on <var129:Array[MParameter]>*/;
var_mparameters = var129;
var130 = NEW_model__MSignature(&type_model__MSignature);
var131 = NULL;
((void (*)(val*, val*, val*))(var130->class->vft[COLOR_model__MSignature__init]))(var130, var_mparameters, var131) /* init on <var130:MSignature>*/;
var_msignature = var130;
((void (*)(val*, val*))(var_mpropdef128->class->vft[COLOR_model__MMethodDef__msignature_61d]))(var_mpropdef128, var_msignature) /* msignature= on <var_mpropdef128:MMethodDef>*/;
var132 = 1;
((void (*)(val*, short int))(var_mprop->class->vft[COLOR_model__MMethod__is_init_61d]))(var_mprop, var132) /* is_init= on <var_mprop:MMethod>*/;
((void (*)(val*, val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mfree_init_61d]))(var_nclassdef, var_mpropdef128) /* mfree_init= on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var133 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce134) {
var135 = varonce134;
} else {
var136 = " gets a free empty constructor ";
var137 = 31;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
var139 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var139 = array_instance Array[Object] */
var140 = 4;
var141 = NEW_array__NativeArray(var140, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var141)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var141)->values[1] = (val*) var135;
((struct instance_array__NativeArray*)var141)->values[2] = (val*) var_mpropdef128;
((struct instance_array__NativeArray*)var141)->values[3] = (val*) var_msignature;
((void (*)(val*, val*, long))(var139->class->vft[COLOR_array__Array__with_native]))(var139, var141, var140) /* with_native on <var139:Array[Object]>*/;
}
var142 = ((val* (*)(val*))(var139->class->vft[COLOR_string__Object__to_s]))(var139) /* to_s on <var139:Array[Object]>*/;
var143 = 3;
((void (*)(val*, val*, long))(var133->class->vft[COLOR_toolcontext__ToolContext__info]))(var133, var142, var143) /* info on <var133:ToolContext>*/;
goto RET_LABEL;
} else {
}
var144 = NEW_array__Array(&type_array__Arraymodel__MParameter);
((void (*)(val*))(var144->class->vft[COLOR_array__Array__init]))(var144) /* init on <var144:Array[MParameter]>*/;
var_mparameters145 = var144;
var146 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var147 = ((val* (*)(val*))(var146->class->vft[COLOR_abstract_collection__Collection__iterator]))(var146) /* iterator on <var146:ANodes[APropdef]>*/;
for(;;) {
var148 = ((short int (*)(val*))(var147->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var147) /* is_ok on <var147:Iterator[nullable Object]>*/;
if(!var148) break;
var149 = ((val* (*)(val*))(var147->class->vft[COLOR_abstract_collection__Iterator__item]))(var147) /* item on <var147:Iterator[nullable Object]>*/;
var_npropdef = var149;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype152 = type_parser_nodes__AAttrPropdef.color;
idtype153 = type_parser_nodes__AAttrPropdef.id;
if(cltype152 >= var_npropdef->type->table_size) {
var151 = 0;
} else {
var151 = var_npropdef->type->type_table[cltype152] == idtype153;
}
var_154 = var151;
if (var151){
var155 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(var_npropdef) /* n_expr on <var_npropdef:APropdef(AAttrPropdef)>*/;
var156 = NULL;
if (var155 == NULL) {
var157 = 1; /* is null */
} else {
var157 = 0; /* arg is null but recv is not */
}
var150 = var157;
} else {
var150 = var_154;
}
if (var150){
var158 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/;
var159 = NULL;
if (var158 == NULL) {
var160 = 1; /* is null */
} else {
var160 = 0; /* arg is null but recv is not */
}
if (var160){
goto RET_LABEL;
} else {
}
var161 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/;
if (var161 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 137);
show_backtrace(1);
} else {
var162 = ((val* (*)(val*))(var161->class->vft[COLOR_model__MPropDef__mproperty]))(var161) /* mproperty on <var161:nullable MPropDef(nullable MAttributeDef)>*/;
}
var163 = ((val* (*)(val*))(var162->class->vft[COLOR_model__MProperty__name]))(var162) /* name on <var162:MProperty(MAttribute)>*/;
var164 = 1;
var165 = ((val* (*)(val*, long))(var163->class->vft[COLOR_string__AbstractString__substring_from]))(var163, var164) /* substring_from on <var163:String>*/;
var_paramname = var165;
var166 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:APropdef(AAttrPropdef)>*/;
if (var166 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 138);
show_backtrace(1);
} else {
var167 = ((val* (*)(val*))(var166->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var166) /* static_mtype on <var166:nullable MPropDef(nullable MAttributeDef)>*/;
}
var_ret_type = var167;
var168 = NULL;
if (var_ret_type == NULL) {
var169 = 1; /* is null */
} else {
var169 = 0; /* arg is null but recv is not */
}
if (var169){
goto RET_LABEL;
} else {
}
var170 = NEW_model__MParameter(&type_model__MParameter);
var171 = 0;
((void (*)(val*, val*, val*, short int))(var170->class->vft[COLOR_model__MParameter__init]))(var170, var_paramname, var_ret_type, var171) /* init on <var170:MParameter>*/;
var_mparameter = var170;
((void (*)(val*, val*))(var_mparameters145->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mparameters145, var_mparameter) /* add on <var_mparameters145:Array[MParameter]>*/;
} else {
}
CONTINUE_label172: (void)0;
((void (*)(val*))(var147->class->vft[COLOR_abstract_collection__Iterator__next]))(var147) /* next on <var147:Iterator[nullable Object]>*/;
}
BREAK_label172: (void)0;
var173 = NEW_model__MMethod(&type_model__MMethod);
if (varonce174) {
var175 = varonce174;
} else {
var176 = "init";
var177 = 4;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
var179 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef) /* mclass on <var_mclassdef:MClassDef>*/;
var180 = ((val* (*)(val*))(var179->class->vft[COLOR_model__MClass__visibility]))(var179) /* visibility on <var179:MClass>*/;
((void (*)(val*, val*, val*, val*))(var173->class->vft[COLOR_model__MMethod__init]))(var173, var_mclassdef, var175, var180) /* init on <var173:MMethod>*/;
var_mprop181 = var173;
var182 = NEW_model__MMethodDef(&type_model__MMethodDef);
var183 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__ANode__location]))(var_nclassdef) /* location on <var_nclassdef:AClassdef(AStdClassdef)>*/;
((void (*)(val*, val*, val*, val*))(var182->class->vft[COLOR_model__MMethodDef__init]))(var182, var_mclassdef, var_mprop181, var183) /* init on <var182:MMethodDef>*/;
var_mpropdef184 = var182;
var185 = NEW_model__MSignature(&type_model__MSignature);
var186 = NULL;
((void (*)(val*, val*, val*))(var185->class->vft[COLOR_model__MSignature__init]))(var185, var_mparameters145, var186) /* init on <var185:MSignature>*/;
var_msignature187 = var185;
((void (*)(val*, val*))(var_mpropdef184->class->vft[COLOR_model__MMethodDef__msignature_61d]))(var_mpropdef184, var_msignature187) /* msignature= on <var_mpropdef184:MMethodDef>*/;
var188 = 1;
((void (*)(val*, short int))(var_mprop181->class->vft[COLOR_model__MMethod__is_init_61d]))(var_mprop181, var188) /* is_init= on <var_mprop181:MMethod>*/;
((void (*)(val*, val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mfree_init_61d]))(var_nclassdef, var_mpropdef184) /* mfree_init= on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var189 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce190) {
var191 = varonce190;
} else {
var192 = " gets a free constructor for attributes ";
var193 = 40;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var195 = array_instance Array[Object] */
var196 = 4;
var197 = NEW_array__NativeArray(var196, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var197)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var197)->values[1] = (val*) var191;
((struct instance_array__NativeArray*)var197)->values[2] = (val*) var_mpropdef184;
((struct instance_array__NativeArray*)var197)->values[3] = (val*) var_msignature187;
((void (*)(val*, val*, long))(var195->class->vft[COLOR_array__Array__with_native]))(var195, var197, var196) /* with_native on <var195:Array[Object]>*/;
}
var198 = ((val* (*)(val*))(var195->class->vft[COLOR_string__Object__to_s]))(var195) /* to_s on <var195:Array[Object]>*/;
var199 = 3;
((void (*)(val*, val*, long))(var189->class->vft[COLOR_toolcontext__ToolContext__info]))(var189, var198, var199) /* info on <var189:ToolContext>*/;
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#process_default_constructors for (self: Object, AClassdef) */
void VIRTUAL_modelize_property__ModelBuilder__process_default_constructors(val* self, val* p0) {
modelize_property__ModelBuilder__process_default_constructors(self, p0);
RET_LABEL:;
}
/* method modelize_property#MClass#inherit_init_from for (self: MClass): nullable MClass */
val* modelize_property__MClass__inherit_init_from(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_modelize_property__MClass___64dinherit_init_from].val; /* @inherit_init_from on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#inherit_init_from for (self: Object): nullable MClass */
val* VIRTUAL_modelize_property__MClass__inherit_init_from(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = modelize_property__MClass__inherit_init_from(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#inherit_init_from= for (self: MClass, nullable MClass) */
void modelize_property__MClass__inherit_init_from_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__MClass___64dinherit_init_from].val = p0; /* @inherit_init_from on <self:MClass> */
RET_LABEL:;
}
/* method modelize_property#MClass#inherit_init_from= for (self: Object, nullable MClass) */
void VIRTUAL_modelize_property__MClass__inherit_init_from_61d(val* self, val* p0) {
modelize_property__MClass__inherit_init_from_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#AClassdef#build_properties_is_done for (self: AClassdef): Bool */
short int modelize_property__AClassdef__build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__AClassdef___64dbuild_properties_is_done].s; /* @build_properties_is_done on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#build_properties_is_done for (self: Object): Bool */
short int VIRTUAL_modelize_property__AClassdef__build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_property__AClassdef__build_properties_is_done(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#build_properties_is_done= for (self: AClassdef, Bool) */
void modelize_property__AClassdef__build_properties_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__AClassdef___64dbuild_properties_is_done].s = p0; /* @build_properties_is_done on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#build_properties_is_done= for (self: Object, Bool) */
void VIRTUAL_modelize_property__AClassdef__build_properties_is_done_61d(val* self, short int p0) {
modelize_property__AClassdef__build_properties_is_done_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#AClassdef#super_inits for (self: AClassdef): nullable Collection[MMethod] */
val* modelize_property__AClassdef__super_inits(val* self) {
val* var /* : nullable Collection[MMethod] */;
val* var1 /* : nullable Collection[MMethod] */;
var1 = self->attrs[COLOR_modelize_property__AClassdef___64dsuper_inits].val; /* @super_inits on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#super_inits for (self: Object): nullable Collection[MMethod] */
val* VIRTUAL_modelize_property__AClassdef__super_inits(val* self) {
val* var /* : nullable Collection[MMethod] */;
val* var1 /* : nullable Collection[MMethod] */;
var1 = modelize_property__AClassdef__super_inits(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#super_inits= for (self: AClassdef, nullable Collection[MMethod]) */
void modelize_property__AClassdef__super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AClassdef___64dsuper_inits].val = p0; /* @super_inits on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#super_inits= for (self: Object, nullable Collection[MMethod]) */
void VIRTUAL_modelize_property__AClassdef__super_inits_61d(val* self, val* p0) {
modelize_property__AClassdef__super_inits_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#AClassdef#mfree_init for (self: AClassdef): nullable MMethodDef */
val* modelize_property__AClassdef__mfree_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__AClassdef___64dmfree_init].val; /* @mfree_init on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mfree_init for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__AClassdef__mfree_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = modelize_property__AClassdef__mfree_init(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mfree_init= for (self: AClassdef, nullable MMethodDef) */
void modelize_property__AClassdef__mfree_init_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AClassdef___64dmfree_init].val = p0; /* @mfree_init on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#mfree_init= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__AClassdef__mfree_init_61d(val* self, val* p0) {
modelize_property__AClassdef__mfree_init_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#AClassdef#mprop2npropdef for (self: AClassdef): Map[MProperty, APropdef] */
val* modelize_property__AClassdef__mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = self->attrs[COLOR_modelize_property__AClassdef___64dmprop2npropdef].val; /* @mprop2npropdef on <self:AClassdef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mprop2npropdef");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 170);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mprop2npropdef for (self: Object): Map[MProperty, APropdef] */
val* VIRTUAL_modelize_property__AClassdef__mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = modelize_property__AClassdef__mprop2npropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mprop2npropdef= for (self: AClassdef, Map[MProperty, APropdef]) */
void modelize_property__AClassdef__mprop2npropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AClassdef___64dmprop2npropdef].val = p0; /* @mprop2npropdef on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#mprop2npropdef= for (self: Object, Map[MProperty, APropdef]) */
void VIRTUAL_modelize_property__AClassdef__mprop2npropdef_61d(val* self, val* p0) {
modelize_property__AClassdef__mprop2npropdef_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#Prod#collect_text for (self: Prod): String */
val* modelize_property__Prod__collect_text(val* self) {
val* var /* : String */;
val* var1 /* : TextCollectorVisitor */;
val* var_v /* var v: TextCollectorVisitor */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
val* var8 /* : String */;
var1 = NEW_modelize_property__TextCollectorVisitor(&type_modelize_property__TextCollectorVisitor);
((void (*)(val*))(var1->class->vft[COLOR_modelize_property__TextCollectorVisitor__init]))(var1) /* init on <var1:TextCollectorVisitor>*/;
var_v = var1;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:TextCollectorVisitor>*/;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_modelize_property__TextCollectorVisitor__text]))(var_v) /* text on <var_v:TextCollectorVisitor>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___33d_61d]))(var2, var3) /* != on <var2:String>*/;
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 182);
show_backtrace(1);
}
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_modelize_property__TextCollectorVisitor__text]))(var_v) /* text on <var_v:TextCollectorVisitor>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#Prod#collect_text for (self: Object): String */
val* VIRTUAL_modelize_property__Prod__collect_text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = modelize_property__Prod__collect_text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#TextCollectorVisitor#text for (self: TextCollectorVisitor): String */
val* modelize_property__TextCollectorVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_modelize_property__TextCollectorVisitor___64dtext].val; /* @text on <self:TextCollectorVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @text");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 189);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#TextCollectorVisitor#text for (self: Object): String */
val* VIRTUAL_modelize_property__TextCollectorVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = modelize_property__TextCollectorVisitor__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#TextCollectorVisitor#text= for (self: TextCollectorVisitor, String) */
void modelize_property__TextCollectorVisitor__text_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__TextCollectorVisitor___64dtext].val = p0; /* @text on <self:TextCollectorVisitor> */
RET_LABEL:;
}
/* method modelize_property#TextCollectorVisitor#text= for (self: Object, String) */
void VIRTUAL_modelize_property__TextCollectorVisitor__text_61d(val* self, val* p0) {
modelize_property__TextCollectorVisitor__text_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#TextCollectorVisitor#visit for (self: TextCollectorVisitor, ANode) */
void modelize_property__TextCollectorVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var_ /* var : TextCollectorVisitor */;
val* var1 /* : String */;
val* var2 /* : String */;
val* var3 /* : String */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_parser_nodes__Token.color;
idtype = type_parser_nodes__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var_ = self;
var1 = ((val* (*)(val*))(var_->class->vft[COLOR_modelize_property__TextCollectorVisitor__text]))(var_) /* text on <var_:TextCollectorVisitor>*/;
var2 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__Token__text]))(var_n) /* text on <var_n:ANode(Token)>*/;
var3 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_string__String___43d]))(var1, var2) /* + on <var1:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_modelize_property__TextCollectorVisitor__text_61d]))(var_, var3) /* text= on <var_:TextCollectorVisitor>*/;
} else {
}
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
RET_LABEL:;
}
/* method modelize_property#TextCollectorVisitor#visit for (self: Object, ANode) */
void VIRTUAL_modelize_property__TextCollectorVisitor__visit(val* self, val* p0) {
modelize_property__TextCollectorVisitor__visit(self, p0);
RET_LABEL:;
}
/* method modelize_property#TextCollectorVisitor#init for (self: TextCollectorVisitor) */
void modelize_property__TextCollectorVisitor__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:TextCollectorVisitor>*/;
RET_LABEL:;
}
/* method modelize_property#TextCollectorVisitor#init for (self: Object) */
void VIRTUAL_modelize_property__TextCollectorVisitor__init(val* self) {
modelize_property__TextCollectorVisitor__init(self);
RET_LABEL:;
}
/* method modelize_property#APropdef#mpropdef for (self: APropdef): nullable MPropDef */
val* modelize_property__APropdef__mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_modelize_property__APropdef___64dmpropdef].val; /* @mpropdef on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef for (self: Object): nullable MPropDef */
val* VIRTUAL_modelize_property__APropdef__mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = modelize_property__APropdef__mpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef= for (self: APropdef, nullable MPropDef) */
void modelize_property__APropdef__mpropdef_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mpropdef) <p0:nullable MPropDef> isa nullable MPROPDEF */
/* <p0:nullable MPropDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__APropdef_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 201);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___64dmpropdef].val = p0; /* @mpropdef on <self:APropdef> */
RET_LABEL:;
}
/* method modelize_property#APropdef#mpropdef= for (self: Object, nullable MPropDef) */
void VIRTUAL_modelize_property__APropdef__mpropdef_61d(val* self, val* p0) {
modelize_property__APropdef__mpropdef_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#APropdef#build_property for (self: APropdef, ModelBuilder, AClassdef) */
void modelize_property__APropdef__build_property(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "build_property", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 204);
show_backtrace(1);
RET_LABEL:;
}
/* method modelize_property#APropdef#build_property for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__APropdef__build_property(val* self, val* p0, val* p1) {
modelize_property__APropdef__build_property(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#APropdef#build_signature for (self: APropdef, ModelBuilder, AClassdef) */
void modelize_property__APropdef__build_signature(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "build_signature", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 205);
show_backtrace(1);
RET_LABEL:;
}
/* method modelize_property#APropdef#build_signature for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__APropdef__build_signature(val* self, val* p0, val* p1) {
modelize_property__APropdef__build_signature(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#APropdef#check_signature for (self: APropdef, ModelBuilder, AClassdef) */
void modelize_property__APropdef__check_signature(val* self, val* p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "check_signature", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 206);
show_backtrace(1);
RET_LABEL:;
}
/* method modelize_property#APropdef#check_signature for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__APropdef__check_signature(val* self, val* p0, val* p1) {
modelize_property__APropdef__check_signature(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#APropdef#new_property_visibility for (self: APropdef, ModelBuilder, AClassdef, nullable AVisibility): MVisibility */
val* modelize_property__APropdef__new_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var /* : MVisibility */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var1 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MVisibility */;
val* var5 /* : MVisibility */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : MVisibility */;
val* var12 /* : nullable MClassDef */;
val* var13 /* : MClass */;
val* var14 /* : MVisibility */;
val* var15 /* : MVisibility */;
short int var16 /* : Bool */;
val* var17 /* : MVisibility */;
short int var18 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : MVisibility */;
short int var27 /* : Bool */;
val* var28 /* : null */;
short int var29 /* : Bool */;
val* var30 /* : MVisibility */;
var_modelbuilder = p0;
var_nclassdef = p1;
var_nvisibility = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:APropdef>*/;
var_mvisibility = var1;
var2 = NULL;
if (var_nvisibility == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(var_nvisibility->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
var_mvisibility = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:APropdef>*/;
var6 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var5) /* == on <var_mvisibility:MVisibility>*/;
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "Error: intrude is not a legal visibility for properties.";
var9 = 56;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nvisibility, var7) /* error on <var_modelbuilder:ModelBuilder>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:APropdef>*/;
var_mvisibility = var11;
} else {
}
} else {
}
var12 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 217);
show_backtrace(1);
} else {
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClassDef__mclass]))(var12) /* mclass on <var12:nullable MClassDef>*/;
}
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClass__visibility]))(var13) /* visibility on <var13:MClass>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:APropdef>*/;
var16 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var15) /* == on <var14:MVisibility>*/;
if (var16){
var17 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__protected_visibility]))(self) /* protected_visibility on <self:APropdef>*/;
var18 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var17) /* == on <var_mvisibility:MVisibility>*/;
if (var18){
var19 = NULL;
if (var_nvisibility == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 219);
show_backtrace(1);
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "Error: The only legal visibility for properties in a private class is private.";
var24 = 78;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nvisibility, var22) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
var26 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:APropdef>*/;
var27 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var26) /* == on <var_mvisibility:MVisibility>*/;
if (var27){
var28 = NULL;
if (var_nvisibility == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 222);
show_backtrace(1);
}
} else {
}
}
var30 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:APropdef>*/;
var_mvisibility = var30;
} else {
}
var = var_mvisibility;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#new_property_visibility for (self: Object, ModelBuilder, AClassdef, nullable AVisibility): MVisibility */
val* VIRTUAL_modelize_property__APropdef__new_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = modelize_property__APropdef__new_property_visibility(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#check_redef_property_visibility for (self: APropdef, ModelBuilder, AClassdef, nullable AVisibility, MProperty) */
void modelize_property__APropdef__check_redef_property_visibility(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var_mprop /* var mprop: MProperty */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
short int var3 /* : Bool */;
val* var4 /* : MVisibility */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : MVisibility */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : MVisibility */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
var_modelbuilder = p0;
var_nclassdef = p1;
var_nvisibility = p2;
var_mprop = p3;
var = NULL;
if (var_nvisibility == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(var_nvisibility->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
var_mvisibility = var2;
var4 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__visibility]))(var_mprop) /* visibility on <var_mprop:MProperty>*/;
var5 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___33d_61d]))(var_mvisibility, var4) /* != on <var_mvisibility:MVisibility>*/;
var_ = var5;
if (var5){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:APropdef>*/;
var7 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___33d_61d]))(var_mvisibility, var6) /* != on <var_mvisibility:MVisibility>*/;
var3 = var7;
} else {
var3 = var_;
}
if (var3){
if (varonce) {
var8 = varonce;
} else {
var9 = "Error: redefinition changed the visibility from a ";
var10 = 50;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var12 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__visibility]))(var_mprop) /* visibility on <var_mprop:MProperty>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = " to a ";
var16 = 6;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 4;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var12;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var_mvisibility;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nvisibility, var21) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_property_visibility for (self: Object, ModelBuilder, AClassdef, nullable AVisibility, MProperty) */
void VIRTUAL_modelize_property__APropdef__check_redef_property_visibility(val* self, val* p0, val* p1, val* p2, val* p3) {
modelize_property__APropdef__check_redef_property_visibility(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_keyword for (self: APropdef, ModelBuilder, AClassdef, nullable Token, Bool, MProperty): Bool */
short int modelize_property__APropdef__check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_kwredef /* var kwredef: nullable Token */;
short int var_need_redef /* var need_redef: Bool */;
val* var_mprop /* var mprop: MProperty */;
val* var1 /* : Map[MProperty, APropdef] */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : nullable MClassDef */;
val* var13 /* : MClass */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
short int var23 /* : Bool */;
val* var24 /* : null */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : nullable MClassDef */;
val* var32 /* : MClass */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : nullable MClassDef */;
val* var56 /* : MClass */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : String */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
var_modelbuilder = p0;
var_nclassdef = p1;
var_kwredef = p2;
var_need_redef = p3;
var_mprop = p4;
var1 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mprop2npropdef]))(var_nclassdef) /* mprop2npropdef on <var_nclassdef:AClassdef>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_mprop) /* has_key on <var1:Map[MProperty, APropdef]>*/;
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "Error: A property ";
var5 = 18;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
if (varonce7) {
var8 = varonce7;
} else {
var9 = " is already defined in class ";
var10 = 29;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 243);
show_backtrace(1);
} else {
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClassDef__mclass]))(var12) /* mclass on <var12:nullable MClassDef>*/;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = ".";
var17 = 1;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 5;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_mprop;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var8;
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var13;
((struct instance_array__NativeArray*)var21)->values[4] = (val*) var15;
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var22) /* error on <var_modelbuilder:ModelBuilder>*/;
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
var24 = NULL;
if (var_kwredef == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (var25){
if (var_need_redef){
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Redef error: ";
var29 = 13;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var31 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 248);
show_backtrace(1);
} else {
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_model__MClassDef__mclass]))(var31) /* mclass on <var31:nullable MClassDef>*/;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "::";
var36 = 2;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__name]))(var_mprop) /* name on <var_mprop:MProperty>*/;
if (varonce39) {
var40 = varonce39;
} else {
var41 = " is an inherited property. To redefine it, add the redef keyword.";
var42 = 65;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 5;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var34;
((struct instance_array__NativeArray*)var46)->values[3] = (val*) var38;
((struct instance_array__NativeArray*)var46)->values[4] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var47) /* error on <var_modelbuilder:ModelBuilder>*/;
var48 = 0;
var = var48;
goto RET_LABEL;
} else {
}
} else {
var49 = !var_need_redef;
if (var49){
if (varonce50) {
var51 = varonce50;
} else {
var52 = "Error: No property ";
var53 = 19;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 253);
show_backtrace(1);
} else {
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_model__MClassDef__mclass]))(var55) /* mclass on <var55:nullable MClassDef>*/;
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = "::";
var60 = 2;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__name]))(var_mprop) /* name on <var_mprop:MProperty>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = " is inherited. Remove the redef keyword to define a new property.";
var66 = 65;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 5;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var56;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var58;
((struct instance_array__NativeArray*)var70)->values[3] = (val*) var62;
((struct instance_array__NativeArray*)var70)->values[4] = (val*) var64;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
var71 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var71) /* error on <var_modelbuilder:ModelBuilder>*/;
var72 = 0;
var = var72;
goto RET_LABEL;
} else {
}
}
var73 = 1;
var = var73;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#check_redef_keyword for (self: Object, ModelBuilder, AClassdef, nullable Token, Bool, MProperty): Bool */
short int VIRTUAL_modelize_property__APropdef__check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_property__APropdef__check_redef_keyword(self, p0, p1, p2, p3, p4);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#is_visited for (self: ASignature): Bool */
short int modelize_property__ASignature__is_visited(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__ASignature___64dis_visited].s; /* @is_visited on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#is_visited for (self: Object): Bool */
short int VIRTUAL_modelize_property__ASignature__is_visited(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_property__ASignature__is_visited(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#is_visited= for (self: ASignature, Bool) */
void modelize_property__ASignature__is_visited_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__ASignature___64dis_visited].s = p0; /* @is_visited on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#is_visited= for (self: Object, Bool) */
void VIRTUAL_modelize_property__ASignature__is_visited_61d(val* self, short int p0) {
modelize_property__ASignature__is_visited_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#ASignature#param_names for (self: ASignature): Array[String] */
val* modelize_property__ASignature__param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_modelize_property__ASignature___64dparam_names].val; /* @param_names on <self:ASignature> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @param_names");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 265);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_names for (self: Object): Array[String] */
val* VIRTUAL_modelize_property__ASignature__param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = modelize_property__ASignature__param_names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_names= for (self: ASignature, Array[String]) */
void modelize_property__ASignature__param_names_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__ASignature___64dparam_names].val = p0; /* @param_names on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#param_names= for (self: Object, Array[String]) */
void VIRTUAL_modelize_property__ASignature__param_names_61d(val* self, val* p0) {
modelize_property__ASignature__param_names_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#ASignature#param_types for (self: ASignature): Array[MType] */
val* modelize_property__ASignature__param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_modelize_property__ASignature___64dparam_types].val; /* @param_types on <self:ASignature> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @param_types");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 268);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_types for (self: Object): Array[MType] */
val* VIRTUAL_modelize_property__ASignature__param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = modelize_property__ASignature__param_types(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_types= for (self: ASignature, Array[MType]) */
void modelize_property__ASignature__param_types_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__ASignature___64dparam_types].val = p0; /* @param_types on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#param_types= for (self: Object, Array[MType]) */
void VIRTUAL_modelize_property__ASignature__param_types_61d(val* self, val* p0) {
modelize_property__ASignature__param_types_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#ASignature#vararg_rank for (self: ASignature): Int */
long modelize_property__ASignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_modelize_property__ASignature___64dvararg_rank].l; /* @vararg_rank on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank for (self: Object): Int */
long VIRTUAL_modelize_property__ASignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = modelize_property__ASignature__vararg_rank(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank= for (self: ASignature, Int) */
void modelize_property__ASignature__vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_modelize_property__ASignature___64dvararg_rank].l = p0; /* @vararg_rank on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#vararg_rank= for (self: Object, Int) */
void VIRTUAL_modelize_property__ASignature__vararg_rank_61d(val* self, long p0) {
modelize_property__ASignature__vararg_rank_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#ASignature#ret_type for (self: ASignature): nullable MType */
val* modelize_property__ASignature__ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_modelize_property__ASignature___64dret_type].val; /* @ret_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#ret_type for (self: Object): nullable MType */
val* VIRTUAL_modelize_property__ASignature__ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_property__ASignature__ret_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#ret_type= for (self: ASignature, nullable MType) */
void modelize_property__ASignature__ret_type_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__ASignature___64dret_type].val = p0; /* @ret_type on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#ret_type= for (self: Object, nullable MType) */
void VIRTUAL_modelize_property__ASignature__ret_type_61d(val* self, val* p0) {
modelize_property__ASignature__ret_type_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#ASignature#visit_signature for (self: ASignature, ModelBuilder, AClassdef): Bool */
short int modelize_property__ASignature__visit_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var1 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var2 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
val* var3 /* : ANodes[AParam] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_np /* var np: AParam */;
val* var7 /* : TId */;
val* var8 /* : String */;
val* var9 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Range[Int] */;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
val* var23 /* : Discrete */;
val* var24 /* : Discrete */;
val* var25 /* : Iterator[nullable Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
long var_i /* var i: Int */;
long var28 /* : Int */;
val* var29 /* : nullable TDotdotdot */;
val* var30 /* : null */;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
long var45 /* : Int */;
val* var46 /* : nullable Object */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
short int var56 /* : Bool */;
long var57 /* : Int */;
long var58 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
val* var63 /* : nullable AType */;
val* var_ntype64 /* var ntype: nullable AType */;
val* var65 /* : null */;
short int var66 /* : Bool */;
val* var67 /* : nullable MType */;
val* var68 /* : nullable MType */;
val* var69 /* : null */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
var_modelbuilder = p0;
var_nclassdef = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_names]))(self) /* param_names on <self:ASignature>*/;
var_param_names = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_types]))(self) /* param_types on <self:ASignature>*/;
var_param_types = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASignature__n_params]))(self) /* n_params on <self:ASignature>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:ANodes[AParam]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_np = var6;
var7 = ((val* (*)(val*))(var_np->class->vft[COLOR_parser_nodes__AParam__n_id]))(var_np) /* n_id on <var_np:AParam>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_parser_nodes__Token__text]))(var7) /* text on <var7:TId>*/;
((void (*)(val*, val*))(var_param_names->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_param_names, var8) /* add on <var_param_names:Array[String]>*/;
var9 = ((val* (*)(val*))(var_np->class->vft[COLOR_parser_nodes__AParam__n_type]))(var_np) /* n_type on <var_np:AParam>*/;
var_ntype = var9;
var10 = NULL;
if (var_ntype == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
var12 = ((val* (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_nclassdef, var_ntype) /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/;
var_mtype = var12;
var13 = NULL;
if (var_mtype == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (var14){
var15 = 0;
var = var15;
goto RET_LABEL;
} else {
}
var16 = NEW_range__Range(&type_range__Rangekernel__Int);
var17 = 0;
var18 = ((long (*)(val*))(var_param_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_names) /* length on <var_param_names:Array[String]>*/;
var19 = ((long (*)(val*))(var_param_types->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_types) /* length on <var_param_types:Array[MType]>*/;
{ /* Inline kernel#Int#- (var18,var19) */
var22 = var18 - var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var23 = BOX_kernel__Int(var17); /* autobox from Int to Discrete */
var24 = BOX_kernel__Int(var20); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_range__Range__without_last]))(var16, var23, var24) /* without_last on <var16:Range[Int]>*/;
var25 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var16) /* iterator on <var16:Range[Int]>*/;
for(;;) {
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[nullable Object]>*/;
if(!var26) break;
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[nullable Object]>*/;
var28 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var_i = var28;
((void (*)(val*, val*))(var_param_types->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_param_types, var_mtype) /* add on <var_param_types:Array[MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var29 = ((val* (*)(val*))(var_np->class->vft[COLOR_parser_nodes__AParam__n_dotdotdot]))(var_np) /* n_dotdotdot on <var_np:AParam>*/;
var30 = NULL;
if (var29 == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
var32 = ((long (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__vararg_rank]))(self) /* vararg_rank on <self:ASignature>*/;
var33 = 1;
{ /* Inline kernel#Int#unary - (var33) */
var36 = -var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
{ /* Inline kernel#Int#!= (var32,var34) */
var39 = var32 == var34;
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
if (var37){
if (varonce) {
var41 = varonce;
} else {
var42 = "Error: ";
var43 = 7;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce = var41;
}
var45 = ((long (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__vararg_rank]))(self) /* vararg_rank on <self:ASignature>*/;
var46 = ((val* (*)(val*, long))(var_param_names->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_param_names, var45) /* [] on <var_param_names:Array[String]>*/;
if (varonce47) {
var48 = varonce47;
} else {
var49 = " is already a vararg";
var50 = 20;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 3;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var46;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var48;
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_np, var55) /* error on <var_modelbuilder:ModelBuilder>*/;
var56 = 0;
var = var56;
goto RET_LABEL;
} else {
var57 = ((long (*)(val*))(var_param_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_names) /* length on <var_param_names:Array[String]>*/;
var58 = 1;
{ /* Inline kernel#Int#- (var57,var58) */
var61 = var57 - var58;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_modelize_property__ASignature__vararg_rank_61d]))(self, var59) /* vararg_rank= on <self:ASignature>*/;
}
} else {
}
} else {
}
CONTINUE_label62: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label62: (void)0;
var63 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASignature__n_type]))(self) /* n_type on <self:ASignature>*/;
var_ntype64 = var63;
var65 = NULL;
if (var_ntype64 == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (var66){
var67 = ((val* (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_nclassdef, var_ntype64) /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__ASignature__ret_type_61d]))(self, var67) /* ret_type= on <self:ASignature>*/;
var68 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__ret_type]))(self) /* ret_type on <self:ASignature>*/;
var69 = NULL;
if (var68 == NULL) {
var70 = 1; /* is null */
} else {
var70 = 0; /* arg is null but recv is not */
}
if (var70){
var71 = 0;
var = var71;
goto RET_LABEL;
} else {
}
} else {
}
var72 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_modelize_property__ASignature__is_visited_61d]))(self, var72) /* is_visited= on <self:ASignature>*/;
var73 = 1;
var = var73;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#visit_signature for (self: Object, ModelBuilder, AClassdef): Bool */
short int VIRTUAL_modelize_property__ASignature__visit_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_property__ASignature__visit_signature(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#build_signature for (self: ASignature, ModelBuilder, AClassdef): nullable MSignature */
val* modelize_property__ASignature__build_signature(val* self, val* p0, val* p1) {
val* var /* : nullable MSignature */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var1 /* : Array[String] */;
long var2 /* : Int */;
val* var3 /* : Array[MType] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ANodes[AParam] */;
val* var10 /* : Array[MType] */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[String] */;
val* var18 /* : Array[MType] */;
long var19 /* : Int */;
val* var20 /* : nullable Object */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
val* var30 /* : null */;
val* var31 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var32 /* : Range[Int] */;
long var33 /* : Int */;
val* var34 /* : Array[String] */;
long var35 /* : Int */;
val* var36 /* : Discrete */;
val* var37 /* : Discrete */;
val* var38 /* : Iterator[nullable Object] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
long var_i /* var i: Int */;
long var41 /* : Int */;
val* var42 /* : MParameter */;
val* var43 /* : Array[String] */;
val* var44 /* : nullable Object */;
val* var45 /* : Array[MType] */;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var51 /* : ANodes[AParam] */;
val* var52 /* : nullable Object */;
val* var53 /* : MSignature */;
val* var54 /* : nullable MType */;
val* var_msignature /* var msignature: MSignature */;
var_modelbuilder = p0;
var_nclassdef = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_names]))(self) /* param_names on <self:ASignature>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:Array[String]>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_types]))(self) /* param_types on <self:ASignature>*/;
var4 = ((long (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__length]))(var3) /* length on <var3:Array[MType]>*/;
{ /* Inline kernel#Int#!= (var2,var4) */
var7 = var2 == var4;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASignature__n_params]))(self) /* n_params on <self:ASignature>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_types]))(self) /* param_types on <self:ASignature>*/;
var11 = ((long (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__length]))(var10) /* length on <var10:Array[MType]>*/;
var12 = ((val* (*)(val*, long))(var9->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var9, var11) /* [] on <var9:ANodes[AParam]>*/;
if (varonce) {
var13 = varonce;
} else {
var14 = "Error: Untyped parameter `";
var15 = 26;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var17 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_names]))(self) /* param_names on <self:ASignature>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_types]))(self) /* param_types on <self:ASignature>*/;
var19 = ((long (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__length]))(var18) /* length on <var18:Array[MType]>*/;
var20 = ((val* (*)(val*, long))(var17->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var17, var19) /* [] on <var17:Array[String]>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "\'.";
var24 = 2;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var20;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var22;
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var12, var29) /* error on <var_modelbuilder:ModelBuilder>*/;
var30 = NULL;
var = var30;
goto RET_LABEL;
} else {
}
var31 = NEW_array__Array(&type_array__Arraymodel__MParameter);
((void (*)(val*))(var31->class->vft[COLOR_array__Array__init]))(var31) /* init on <var31:Array[MParameter]>*/;
var_mparameters = var31;
var32 = NEW_range__Range(&type_range__Rangekernel__Int);
var33 = 0;
var34 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_names]))(self) /* param_names on <self:ASignature>*/;
var35 = ((long (*)(val*))(var34->class->vft[COLOR_abstract_collection__Collection__length]))(var34) /* length on <var34:Array[String]>*/;
var36 = BOX_kernel__Int(var33); /* autobox from Int to Discrete */
var37 = BOX_kernel__Int(var35); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var32->class->vft[COLOR_range__Range__without_last]))(var32, var36, var37) /* without_last on <var32:Range[Int]>*/;
var38 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Collection__iterator]))(var32) /* iterator on <var32:Range[Int]>*/;
for(;;) {
var39 = ((short int (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var38) /* is_ok on <var38:Iterator[nullable Object]>*/;
if(!var39) break;
var40 = ((val* (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__item]))(var38) /* item on <var38:Iterator[nullable Object]>*/;
var41 = ((struct instance_kernel__Int*)var40)->value; /* autounbox from nullable Object to Int */;
var_i = var41;
var42 = NEW_model__MParameter(&type_model__MParameter);
var43 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_names]))(self) /* param_names on <self:ASignature>*/;
var44 = ((val* (*)(val*, long))(var43->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var43, var_i) /* [] on <var43:Array[String]>*/;
var45 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__param_types]))(self) /* param_types on <self:ASignature>*/;
var46 = ((val* (*)(val*, long))(var45->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var45, var_i) /* [] on <var45:Array[MType]>*/;
var47 = ((long (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__vararg_rank]))(self) /* vararg_rank on <self:ASignature>*/;
{ /* Inline kernel#Int#== (var_i,var47) */
var50 = var_i == var47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
((void (*)(val*, val*, val*, short int))(var42->class->vft[COLOR_model__MParameter__init]))(var42, var44, var46, var48) /* init on <var42:MParameter>*/;
var_mparameter = var42;
var51 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASignature__n_params]))(self) /* n_params on <self:ASignature>*/;
var52 = ((val* (*)(val*, long))(var51->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var51, var_i) /* [] on <var51:ANodes[AParam]>*/;
((void (*)(val*, val*))(var52->class->vft[COLOR_modelize_property__AParam__mparameter_61d]))(var52, var_mparameter) /* mparameter= on <var52:nullable Object(AParam)>*/;
((void (*)(val*, val*))(var_mparameters->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mparameters, var_mparameter) /* add on <var_mparameters:Array[MParameter]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var38->class->vft[COLOR_abstract_collection__Iterator__next]))(var38) /* next on <var38:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var53 = NEW_model__MSignature(&type_model__MSignature);
var54 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ASignature__ret_type]))(self) /* ret_type on <self:ASignature>*/;
((void (*)(val*, val*, val*))(var53->class->vft[COLOR_model__MSignature__init]))(var53, var_mparameters, var54) /* init on <var53:MSignature>*/;
var_msignature = var53;
var = var_msignature;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#build_signature for (self: Object, ModelBuilder, AClassdef): nullable MSignature */
val* VIRTUAL_modelize_property__ASignature__build_signature(val* self, val* p0, val* p1) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = modelize_property__ASignature__build_signature(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter for (self: AParam): nullable MParameter */
val* modelize_property__AParam__mparameter(val* self) {
val* var /* : nullable MParameter */;
val* var1 /* : nullable MParameter */;
var1 = self->attrs[COLOR_modelize_property__AParam___64dmparameter].val; /* @mparameter on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter for (self: Object): nullable MParameter */
val* VIRTUAL_modelize_property__AParam__mparameter(val* self) {
val* var /* : nullable MParameter */;
val* var1 /* : nullable MParameter */;
var1 = modelize_property__AParam__mparameter(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter= for (self: AParam, nullable MParameter) */
void modelize_property__AParam__mparameter_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AParam___64dmparameter].val = p0; /* @mparameter on <self:AParam> */
RET_LABEL:;
}
/* method modelize_property#AParam#mparameter= for (self: Object, nullable MParameter) */
void VIRTUAL_modelize_property__AParam__mparameter_61d(val* self, val* p0) {
modelize_property__AParam__mparameter_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_property for (self: AMethPropdef, ModelBuilder, AClassdef) */
void modelize_property__AMethPropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var_is_init /* var is_init: Bool */;
val* var1 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var2 /* : nullable AMethid */;
val* var_amethodid /* var amethodid: nullable AMethid */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : TKwinit */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : TKwnew */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : TId */;
val* var34 /* : String */;
val* var35 /* : String */;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
short int var42 /* : Bool */;
val* var43 /* : nullable ASignature */;
val* var44 /* : ANodes[AParam] */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : null */;
val* var_mprop /* var mprop: nullable MMethod */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var_ /* var : Bool */;
val* var58 /* : nullable TKwredef */;
val* var59 /* : null */;
short int var60 /* : Bool */;
val* var61 /* : nullable MProperty */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name;
val* var65 /* : null */;
short int var66 /* : Bool */;
val* var67 /* : nullable AVisibility */;
val* var68 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var69 /* : MMethod */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
val* var73 /* : nullable TKwredef */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : nullable TKwredef */;
val* var78 /* : null */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
val* var83 /* : nullable TKwredef */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : nullable AVisibility */;
val* var88 /* : Map[MProperty, APropdef] */;
val* var89 /* : MMethodDef */;
val* var90 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const struct type* type_struct;
const char* var_class_name94;
val* var95 /* : HashMap[MPropDef, APropdef] */;
short int var96 /* : Bool */;
val* var97 /* : ToolContext */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
long var108 /* : Int */;
val* var109 /* : ToolContext */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
long var120 /* : Int */;
var_modelbuilder = p0;
var_nclassdef = p1;
/* <self:AMethPropdef> isa AInitPropdef */
cltype = type_parser_nodes__AInitPropdef.color;
idtype = type_parser_nodes__AInitPropdef.id;
if(cltype >= self->type->table_size) {
var = 0;
} else {
var = self->type->type_table[cltype] == idtype;
}
var_is_init = var;
var1 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 343);
show_backtrace(1);
}
var_mclassdef = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_methid]))(self) /* n_methid on <self:AMethPropdef>*/;
var_amethodid = var2;
var3 = NULL;
if (var_amethodid == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype6 = type_parser_nodes__AMainMethPropdef.color;
idtype7 = type_parser_nodes__AMainMethPropdef.id;
if(cltype6 >= self->type->table_size) {
var5 = 0;
} else {
var5 = self->type->type_table[cltype6] == idtype7;
}
if (var5){
if (varonce) {
var8 = varonce;
} else {
var9 = "main";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var_name = var8;
var_name_node = self;
} else {
/* <self:AMethPropdef> isa AConcreteInitPropdef */
cltype13 = type_parser_nodes__AConcreteInitPropdef.color;
idtype14 = type_parser_nodes__AConcreteInitPropdef.id;
if(cltype13 >= self->type->table_size) {
var12 = 0;
} else {
var12 = self->type->type_table[cltype13] == idtype14;
}
if (var12){
if (varonce15) {
var16 = varonce15;
} else {
var17 = "init";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var_name = var16;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteInitPropdef__n_kwinit]))(self) /* n_kwinit on <self:AMethPropdef(AConcreteInitPropdef)>*/;
var_name_node = var20;
} else {
/* <self:AMethPropdef> isa AExternInitPropdef */
cltype22 = type_parser_nodes__AExternInitPropdef.color;
idtype23 = type_parser_nodes__AExternInitPropdef.id;
if(cltype22 >= self->type->table_size) {
var21 = 0;
} else {
var21 = self->type->type_table[cltype22] == idtype23;
}
if (var21){
if (varonce24) {
var25 = varonce24;
} else {
var26 = "init";
var27 = 4;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var_name = var25;
var29 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExternInitPropdef__n_kwnew]))(self) /* n_kwnew on <self:AMethPropdef(AExternInitPropdef)>*/;
var_name_node = var29;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 358);
show_backtrace(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype31 = type_parser_nodes__AIdMethid.color;
idtype32 = type_parser_nodes__AIdMethid.id;
if(cltype31 >= var_amethodid->type->table_size) {
var30 = 0;
} else {
var30 = var_amethodid->type->type_table[cltype31] == idtype32;
}
if (var30){
var33 = ((val* (*)(val*))(var_amethodid->class->vft[COLOR_parser_nodes__AIdMethid__n_id]))(var_amethodid) /* n_id on <var_amethodid:nullable AMethid(AIdMethid)>*/;
var34 = ((val* (*)(val*))(var33->class->vft[COLOR_parser_nodes__Token__text]))(var33) /* text on <var33:TId>*/;
var_name = var34;
var_name_node = var_amethodid;
} else {
var35 = ((val* (*)(val*))(var_amethodid->class->vft[COLOR_modelize_property__Prod__collect_text]))(var_amethodid) /* collect_text on <var_amethodid:nullable AMethid(AMethid)>*/;
var_name = var35;
var_name_node = var_amethodid;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "-";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((short int (*)(val*, val*))(var_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_name, var38) /* == on <var_name:String>*/;
if (!var42) {
var36 = 0;
} else {
var43 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(self) /* n_signature on <self:AMethPropdef>*/;
if (var43 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 368);
show_backtrace(1);
} else {
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var43) /* n_params on <var43:nullable ASignature>*/;
}
var45 = ((long (*)(val*))(var44->class->vft[COLOR_abstract_collection__Collection__length]))(var44) /* length on <var44:ANodes[AParam]>*/;
var46 = 0;
{ /* Inline kernel#Int#== (var45,var46) */
var49 = var45 == var46;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var36 = var47;
}
if (var36){
if (varonce50) {
var51 = varonce50;
} else {
var52 = "unary -";
var53 = 7;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var_name = var51;
} else {
}
}
}
var55 = NULL;
var_mprop = var55;
var57 = !var_is_init;
var_ = var57;
if (var57){
var56 = var_;
} else {
var58 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_kwredef]))(self) /* n_kwredef on <self:AMethPropdef>*/;
var59 = NULL;
if (var58 == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
var56 = var60;
}
if (var56){
var61 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_name_node, var_mclassdef, var_name) /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/;
/* <var61:nullable MProperty> isa nullable MMethod */
cltype63 = type_nullable_model__MMethod.color;
idtype64 = type_nullable_model__MMethod.id;
if(var61 == NULL) {
var62 = 1;
} else {
if(cltype63 >= var61->type->table_size) {
var62 = 0;
} else {
var62 = var61->type->type_table[cltype63] == idtype64;
}
}
if (!var62) {
var_class_name = var61 == NULL ? "null" : var61->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 374);
show_backtrace(1);
}
var_mprop = var61;
} else {
}
var65 = NULL;
if (var_mprop == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (var66){
var67 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_visibility]))(self) /* n_visibility on <self:AMethPropdef>*/;
var68 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_nclassdef, var67) /* new_property_visibility on <self:AMethPropdef>*/;
var_mvisibility = var68;
var69 = NEW_model__MMethod(&type_model__MMethod);
((void (*)(val*, val*, val*, val*))(var69->class->vft[COLOR_model__MMethod__init]))(var69, var_mclassdef, var_name, var_mvisibility) /* init on <var69:MMethod>*/;
var_mprop = var69;
((void (*)(val*, short int))(var_mprop->class->vft[COLOR_model__MMethod__is_init_61d]))(var_mprop, var_is_init) /* is_init= on <var_mprop:nullable MMethod(MMethod)>*/;
/* <self:AMethPropdef> isa AExternInitPropdef */
cltype71 = type_parser_nodes__AExternInitPropdef.color;
idtype72 = type_parser_nodes__AExternInitPropdef.id;
if(cltype71 >= self->type->table_size) {
var70 = 0;
} else {
var70 = self->type->type_table[cltype71] == idtype72;
}
((void (*)(val*, short int))(var_mprop->class->vft[COLOR_model__MMethod__is_new_61d]))(var_mprop, var70) /* is_new= on <var_mprop:nullable MMethod(MMethod)>*/;
var73 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_kwredef]))(self) /* n_kwredef on <self:AMethPropdef>*/;
var74 = 0;
var75 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var73, var74, var_mprop) /* check_redef_keyword on <self:AMethPropdef>*/;
var76 = !var75;
if (var76){
goto RET_LABEL;
} else {
}
} else {
var77 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_kwredef]))(self) /* n_kwredef on <self:AMethPropdef>*/;
var78 = NULL;
if (var77 == NULL) {
var79 = 1; /* is null */
} else {
var79 = 0; /* arg is null but recv is not */
}
if (var79){
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype81 = type_parser_nodes__AMainMethPropdef.color;
idtype82 = type_parser_nodes__AMainMethPropdef.id;
if(cltype81 >= self->type->table_size) {
var80 = 0;
} else {
var80 = self->type->type_table[cltype81] == idtype82;
}
if (var80){
} else {
var83 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_kwredef]))(self) /* n_kwredef on <self:AMethPropdef>*/;
var84 = 1;
var85 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var83, var84, var_mprop) /* check_redef_keyword on <self:AMethPropdef>*/;
var86 = !var85;
if (var86){
goto RET_LABEL;
} else {
}
}
} else {
}
var87 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_visibility]))(self) /* n_visibility on <self:AMethPropdef>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var_nclassdef, var87, var_mprop) /* check_redef_property_visibility on <self:AMethPropdef>*/;
}
var88 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mprop2npropdef]))(var_nclassdef) /* mprop2npropdef on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*, val*))(var88->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var88, var_mprop, self) /* []= on <var88:Map[MProperty, APropdef]>*/;
var89 = NEW_model__MMethodDef(&type_model__MMethodDef);
var90 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AMethPropdef>*/;
((void (*)(val*, val*, val*, val*))(var89->class->vft[COLOR_model__MMethodDef__init]))(var89, var_mclassdef, var_mprop, var90) /* init on <var89:MMethodDef>*/;
var_mpropdef = var89;
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__APropdef_VTMPROPDEF];
cltype92 = type_struct->color;
idtype93 = type_struct->id;
if(cltype92 >= var_mpropdef->type->table_size) {
var91 = 0;
} else {
var91 = var_mpropdef->type->type_table[cltype92] == idtype93;
}
if (!var91) {
var_class_name94 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name94);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 395);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef_61d]))(self, var_mpropdef) /* mpropdef= on <self:AMethPropdef>*/;
var95 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var95->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var95, var_mpropdef, self) /* []= on <var95:HashMap[MPropDef, APropdef]>*/;
var96 = ((short int (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__is_intro]))(var_mpropdef) /* is_intro on <var_mpropdef:MMethodDef>*/;
if (var96){
var97 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var_modelbuilder) /* toolcontext on <var_modelbuilder:ModelBuilder>*/;
if (varonce98) {
var99 = varonce98;
} else {
var100 = " introduces new method ";
var101 = 23;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var103 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__full_name]))(var_mprop) /* full_name on <var_mprop:nullable MMethod(MMethod)>*/;
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 3;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var99;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var103;
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
var108 = 3;
((void (*)(val*, val*, long))(var97->class->vft[COLOR_toolcontext__ToolContext__info]))(var97, var107, var108) /* info on <var97:ToolContext>*/;
} else {
var109 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var_modelbuilder) /* toolcontext on <var_modelbuilder:ModelBuilder>*/;
if (varonce110) {
var111 = varonce110;
} else {
var112 = " redefines method ";
var113 = 18;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = ((val* (*)(val*))(var_mprop->class->vft[COLOR_model__MProperty__full_name]))(var_mprop) /* full_name on <var_mprop:nullable MMethod(MMethod)>*/;
var116 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 3;
var118 = NEW_array__NativeArray(var117, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var118)->values[0] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var118)->values[1] = (val*) var111;
((struct instance_array__NativeArray*)var118)->values[2] = (val*) var115;
((void (*)(val*, val*, long))(var116->class->vft[COLOR_array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
var119 = ((val* (*)(val*))(var116->class->vft[COLOR_string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
var120 = 3;
((void (*)(val*, val*, long))(var109->class->vft[COLOR_toolcontext__ToolContext__info]))(var109, var119, var120) /* info on <var109:ToolContext>*/;
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_property for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__AMethPropdef__build_property(val* self, val* p0, val* p1) {
modelize_property__AMethPropdef__build_property(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: AMethPropdef, ModelBuilder, AClassdef) */
void modelize_property__AMethPropdef__build_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var4 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
val* var6 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var7 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var12 /* : null */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Array[String] */;
val* var18 /* : Array[MType] */;
long var19 /* : Int */;
val* var20 /* : nullable MType */;
val* var21 /* : null */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : MProperty */;
val* var25 /* : MPropDef */;
val* var26 /* : nullable MSignature */;
val* var27 /* : null */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : null */;
short int var36 /* : Bool */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : MProperty */;
val* var47 /* : MPropDef */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
long var53 /* : Int */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
long var59 /* : Int */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[Object] */;
val* var68 /* : Object */;
val* var69 /* : Object */;
val* var70 /* : String */;
val* var71 /* : MProperty */;
short int var72 /* : Bool */;
val* var73 /* : nullable MClassDef */;
val* var74 /* : Array[MClassType] */;
val* var75 /* : Iterator[nullable Object] */;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var78 /* : nullable MClassDef */;
val* var79 /* : MClassType */;
val* var80 /* : MType */;
val* var81 /* : MProperty */;
val* var82 /* : String */;
val* var83 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var84 /* : null */;
short int var85 /* : Bool */;
val* var86 /* : null */;
short int var87 /* : Bool */;
val* var88 /* : MPropDef */;
short int var89 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var90 /* : nullable MSignature */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var_ /* var : Bool */;
long var96 /* : Int */;
long var97 /* : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var_102 /* var : Bool */;
long var103 /* : Int */;
long var104 /* : Int */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var_108 /* var : Bool */;
long var109 /* : Int */;
long var110 /* : Int */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
val* var114 /* : Array[MType] */;
val* var115 /* : Array[MParameter] */;
val* var116 /* : Iterator[nullable Object] */;
short int var117 /* : Bool */;
val* var118 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var119 /* : MType */;
long var121 /* : Int */;
short int var122 /* : Bool */;
val* var123 /* : null */;
short int var124 /* : Bool */;
short int var_125 /* var : Bool */;
val* var126 /* : null */;
short int var127 /* : Bool */;
val* var128 /* : nullable MType */;
long var129 /* : Int */;
long var130 /* : Int */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
val* var135 /* : ANodes[AParam] */;
long var136 /* : Int */;
val* var137 /* : nullable Object */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
long var143 /* : Int */;
val* var144 /* : nullable Object */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
val* var150 /* : Array[Object] */;
long var151 /* : Int */;
val* var152 /* : NativeArray[Object] */;
val* var153 /* : String */;
val* var154 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var155 /* : Range[Int] */;
long var156 /* : Int */;
long var157 /* : Int */;
val* var158 /* : Discrete */;
val* var159 /* : Discrete */;
val* var160 /* : Iterator[nullable Object] */;
short int var161 /* : Bool */;
val* var162 /* : nullable Object */;
long var_i /* var i: Int */;
long var163 /* : Int */;
val* var164 /* : MParameter */;
val* var165 /* : nullable Object */;
val* var166 /* : nullable Object */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
val* var_mparameter170 /* var mparameter: MParameter */;
val* var171 /* : null */;
short int var172 /* : Bool */;
val* var173 /* : ANodes[AParam] */;
val* var174 /* : nullable Object */;
val* var176 /* : MSignature */;
short int var177 /* : Bool */;
int cltype178;
int idtype179;
var_modelbuilder = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AMethPropdef>*/;
var_mpropdef = var;
var1 = NULL;
if (var_mpropdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__mmodule]))(var3) /* mmodule on <var3:MClassDef>*/;
var_mmodule = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(self) /* n_signature on <self:AMethPropdef>*/;
var_nsig = var5;
var6 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[String]>*/;
var_param_names = var6;
var7 = NEW_array__Array(&type_array__Arraymodel__MType);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[MType]>*/;
var_param_types = var7;
var8 = 1;
{ /* Inline kernel#Int#unary - (var8) */
var11 = -var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_vararg_rank = var9;
var12 = NULL;
var_ret_type = var12;
var13 = NULL;
if (var_nsig == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = ((short int (*)(val*, val*, val*))(var_nsig->class->vft[COLOR_modelize_property__ASignature__visit_signature]))(var_nsig, var_modelbuilder, var_nclassdef) /* visit_signature on <var_nsig:nullable ASignature(ASignature)>*/;
var16 = !var15;
if (var16){
goto RET_LABEL;
} else {
}
var17 = ((val* (*)(val*))(var_nsig->class->vft[COLOR_modelize_property__ASignature__param_names]))(var_nsig) /* param_names on <var_nsig:nullable ASignature(ASignature)>*/;
var_param_names = var17;
var18 = ((val* (*)(val*))(var_nsig->class->vft[COLOR_modelize_property__ASignature__param_types]))(var_nsig) /* param_types on <var_nsig:nullable ASignature(ASignature)>*/;
var_param_types = var18;
var19 = ((long (*)(val*))(var_nsig->class->vft[COLOR_modelize_property__ASignature__vararg_rank]))(var_nsig) /* vararg_rank on <var_nsig:nullable ASignature(ASignature)>*/;
var_vararg_rank = var19;
var20 = ((val* (*)(val*))(var_nsig->class->vft[COLOR_modelize_property__ASignature__ret_type]))(var_nsig) /* ret_type on <var_nsig:nullable ASignature(ASignature)>*/;
var_ret_type = var20;
} else {
}
var21 = NULL;
var_msignature = var21;
var22 = ((short int (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__is_intro]))(var_mpropdef) /* is_intro on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var23 = !var22;
if (var23){
var24 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_model__MProperty__intro]))(var24) /* intro on <var24:MProperty(MMethod)>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_model__MMethodDef__msignature]))(var25) /* msignature on <var25:MPropDef(MMethodDef)>*/;
var_msignature = var26;
var27 = NULL;
if (var_msignature == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (var28){
goto RET_LABEL;
} else {
}
var29 = ((long (*)(val*))(var_param_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_names) /* length on <var_param_names:Array[String]>*/;
var30 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:nullable MSignature(MSignature)>*/;
{ /* Inline kernel#Int#!= (var29,var30) */
var33 = var29 == var30;
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
if (var31){
var35 = NULL;
if (var_nsig == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (var36){
var_node = var_nsig;
} else {
var_node = self;
}
if (varonce) {
var37 = varonce;
} else {
var38 = "Redef error: ";
var39 = 13;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = " redefines ";
var44 = 11;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var47 = ((val* (*)(val*))(var46->class->vft[COLOR_model__MProperty__intro]))(var46) /* intro on <var46:MProperty(MMethod)>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = " with ";
var51 = 6;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = ((long (*)(val*))(var_param_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_names) /* length on <var_param_names:Array[String]>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = " parameter(s), ";
var57 = 15;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:nullable MSignature(MSignature)>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = " expected. Signature is ";
var63 = 24;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 11;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var67)->values[2] = (val*) var42;
((struct instance_array__NativeArray*)var67)->values[3] = (val*) var47;
((struct instance_array__NativeArray*)var67)->values[4] = (val*) var49;
var68 = BOX_kernel__Int(var53); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var67)->values[5] = (val*) var68;
((struct instance_array__NativeArray*)var67)->values[6] = (val*) var55;
var69 = BOX_kernel__Int(var59); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var67)->values[7] = (val*) var69;
((struct instance_array__NativeArray*)var67)->values[8] = (val*) var61;
((struct instance_array__NativeArray*)var67)->values[9] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var67)->values[10] = (val*) var_msignature;
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
var70 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_node, var70) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
} else {
var71 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var72 = ((short int (*)(val*))(var71->class->vft[COLOR_model__MMethod__is_init]))(var71) /* is_init on <var71:MProperty(MMethod)>*/;
if (var72){
var73 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var73 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 440);
show_backtrace(1);
} else {
var74 = ((val* (*)(val*))(var73->class->vft[COLOR_model__MClassDef__supertypes]))(var73) /* supertypes on <var73:nullable MClassDef>*/;
}
var75 = ((val* (*)(val*))(var74->class->vft[COLOR_abstract_collection__Collection__iterator]))(var74) /* iterator on <var74:Array[MClassType]>*/;
for(;;) {
var76 = ((short int (*)(val*))(var75->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var75) /* is_ok on <var75:Iterator[nullable Object]>*/;
if(!var76) break;
var77 = ((val* (*)(val*))(var75->class->vft[COLOR_abstract_collection__Iterator__item]))(var75) /* item on <var75:Iterator[nullable Object]>*/;
var_msupertype = var77;
var78 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var78 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 441);
show_backtrace(1);
} else {
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_model__MClassDef__bound_mtype]))(var78) /* bound_mtype on <var78:nullable MClassDef>*/;
}
var80 = ((val* (*)(val*, val*, val*))(var_msupertype->class->vft[COLOR_model__MType__anchor_to]))(var_msupertype, var_mmodule, var79) /* anchor_to on <var_msupertype:MClassType>*/;
var_msupertype = var80;
var81 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var82 = ((val* (*)(val*))(var81->class->vft[COLOR_model__MProperty__name]))(var81) /* name on <var81:MProperty(MMethod)>*/;
var83 = ((val* (*)(val*, val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var_modelbuilder, self, var_mmodule, var_msupertype, var82) /* try_get_mproperty_by_name2 on <var_modelbuilder:ModelBuilder>*/;
var_candidate = var83;
var84 = NULL;
if (var_candidate == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (var85){
var86 = NULL;
if (var_msignature == NULL) {
var87 = 1; /* is null */
} else {
var87 = 0; /* arg is null but recv is not */
}
if (var87){
var88 = ((val* (*)(val*))(var_candidate->class->vft[COLOR_model__MProperty__intro]))(var_candidate) /* intro on <var_candidate:nullable MProperty(MProperty)>*/;
/* <var88:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var88->type->table_size) {
var89 = 0;
} else {
var89 = var88->type->type_table[cltype] == idtype;
}
if (!var89) {
var_class_name = var88 == NULL ? "null" : var88->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 445);
show_backtrace(1);
}
var90 = ((val* (*)(val*))(var88->class->vft[COLOR_model__MMethodDef__msignature]))(var88) /* msignature on <var88:MPropDef(MMethodDef)>*/;
var_msignature = var90;
} else {
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var75->class->vft[COLOR_abstract_collection__Iterator__next]))(var75) /* next on <var75:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
}
var94 = NULL;
if (var_msignature == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
var_ = var95;
if (var95){
var96 = ((long (*)(val*))(var_param_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_names) /* length on <var_param_names:Array[String]>*/;
var97 = ((long (*)(val*))(var_param_types->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_types) /* length on <var_param_types:Array[MType]>*/;
{ /* Inline kernel#Int#!= (var96,var97) */
var100 = var96 == var97;
var101 = !var100;
var98 = var101;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var93 = var98;
} else {
var93 = var_;
}
var_102 = var93;
if (var93){
var103 = ((long (*)(val*))(var_param_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_names) /* length on <var_param_names:Array[String]>*/;
var104 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:nullable MSignature(MSignature)>*/;
{ /* Inline kernel#Int#== (var103,var104) */
var107 = var103 == var104;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var92 = var105;
} else {
var92 = var_102;
}
var_108 = var92;
if (var92){
var109 = ((long (*)(val*))(var_param_types->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_types) /* length on <var_param_types:Array[MType]>*/;
var110 = 0;
{ /* Inline kernel#Int#== (var109,var110) */
var113 = var109 == var110;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var91 = var111;
} else {
var91 = var_108;
}
if (var91){
var114 = NEW_array__Array(&type_array__Arraymodel__MType);
((void (*)(val*))(var114->class->vft[COLOR_array__Array__init]))(var114) /* init on <var114:Array[MType]>*/;
var_param_types = var114;
var115 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:nullable MSignature(MSignature)>*/;
var116 = ((val* (*)(val*))(var115->class->vft[COLOR_abstract_collection__Collection__iterator]))(var115) /* iterator on <var115:Array[MParameter]>*/;
for(;;) {
var117 = ((short int (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var116) /* is_ok on <var116:Iterator[nullable Object]>*/;
if(!var117) break;
var118 = ((val* (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__item]))(var116) /* item on <var116:Iterator[nullable Object]>*/;
var_mparameter = var118;
var119 = ((val* (*)(val*))(var_mparameter->class->vft[COLOR_model__MParameter__mtype]))(var_mparameter) /* mtype on <var_mparameter:MParameter>*/;
((void (*)(val*, val*))(var_param_types->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_param_types, var119) /* add on <var_param_types:Array[MType]>*/;
CONTINUE_label120: (void)0;
((void (*)(val*))(var116->class->vft[COLOR_abstract_collection__Iterator__next]))(var116) /* next on <var116:Iterator[nullable Object]>*/;
}
BREAK_label120: (void)0;
var121 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__vararg_rank]))(var_msignature) /* vararg_rank on <var_msignature:nullable MSignature(MSignature)>*/;
var_vararg_rank = var121;
} else {
}
var123 = NULL;
if (var_msignature == NULL) {
var124 = 0; /* is null */
} else {
var124 = 1; /* arg is null and recv is not */
}
var_125 = var124;
if (var124){
var126 = NULL;
if (var_ret_type == NULL) {
var127 = 1; /* is null */
} else {
var127 = 0; /* arg is null but recv is not */
}
var122 = var127;
} else {
var122 = var_125;
}
if (var122){
var128 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/;
var_ret_type = var128;
} else {
}
var129 = ((long (*)(val*))(var_param_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_names) /* length on <var_param_names:Array[String]>*/;
var130 = ((long (*)(val*))(var_param_types->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_types) /* length on <var_param_types:Array[MType]>*/;
{ /* Inline kernel#Int#!= (var129,var130) */
var133 = var129 == var130;
var134 = !var133;
var131 = var134;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
if (var131){
if (var_nsig == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 467);
show_backtrace(1);
} else {
var135 = ((val* (*)(val*))(var_nsig->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var_nsig) /* n_params on <var_nsig:nullable ASignature>*/;
}
var136 = ((long (*)(val*))(var_param_types->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_types) /* length on <var_param_types:Array[MType]>*/;
var137 = ((val* (*)(val*, long))(var135->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var135, var136) /* [] on <var135:ANodes[AParam]>*/;
if (varonce138) {
var139 = varonce138;
} else {
var140 = "Error: Untyped parameter `";
var141 = 26;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = ((long (*)(val*))(var_param_types->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_types) /* length on <var_param_types:Array[MType]>*/;
var144 = ((val* (*)(val*, long))(var_param_names->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_param_names, var143) /* [] on <var_param_names:Array[String]>*/;
if (varonce145) {
var146 = varonce145;
} else {
var147 = "\'.";
var148 = 2;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
var150 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var150 = array_instance Array[Object] */
var151 = 3;
var152 = NEW_array__NativeArray(var151, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var152)->values[0] = (val*) var139;
((struct instance_array__NativeArray*)var152)->values[1] = (val*) var144;
((struct instance_array__NativeArray*)var152)->values[2] = (val*) var146;
((void (*)(val*, val*, long))(var150->class->vft[COLOR_array__Array__with_native]))(var150, var152, var151) /* with_native on <var150:Array[Object]>*/;
}
var153 = ((val* (*)(val*))(var150->class->vft[COLOR_string__Object__to_s]))(var150) /* to_s on <var150:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var137, var153) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var154 = NEW_array__Array(&type_array__Arraymodel__MParameter);
((void (*)(val*))(var154->class->vft[COLOR_array__Array__init]))(var154) /* init on <var154:Array[MParameter]>*/;
var_mparameters = var154;
var155 = NEW_range__Range(&type_range__Rangekernel__Int);
var156 = 0;
var157 = ((long (*)(val*))(var_param_names->class->vft[COLOR_abstract_collection__Collection__length]))(var_param_names) /* length on <var_param_names:Array[String]>*/;
var158 = BOX_kernel__Int(var156); /* autobox from Int to Discrete */
var159 = BOX_kernel__Int(var157); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var155->class->vft[COLOR_range__Range__without_last]))(var155, var158, var159) /* without_last on <var155:Range[Int]>*/;
var160 = ((val* (*)(val*))(var155->class->vft[COLOR_abstract_collection__Collection__iterator]))(var155) /* iterator on <var155:Range[Int]>*/;
for(;;) {
var161 = ((short int (*)(val*))(var160->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var160) /* is_ok on <var160:Iterator[nullable Object]>*/;
if(!var161) break;
var162 = ((val* (*)(val*))(var160->class->vft[COLOR_abstract_collection__Iterator__item]))(var160) /* item on <var160:Iterator[nullable Object]>*/;
var163 = ((struct instance_kernel__Int*)var162)->value; /* autounbox from nullable Object to Int */;
var_i = var163;
var164 = NEW_model__MParameter(&type_model__MParameter);
var165 = ((val* (*)(val*, long))(var_param_names->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_param_names, var_i) /* [] on <var_param_names:Array[String]>*/;
var166 = ((val* (*)(val*, long))(var_param_types->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_param_types, var_i) /* [] on <var_param_types:Array[MType]>*/;
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) */
var169 = var_i == var_vararg_rank;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
((void (*)(val*, val*, val*, short int))(var164->class->vft[COLOR_model__MParameter__init]))(var164, var165, var166, var167) /* init on <var164:MParameter>*/;
var_mparameter170 = var164;
var171 = NULL;
if (var_nsig == NULL) {
var172 = 0; /* is null */
} else {
var172 = 1; /* arg is null and recv is not */
}
if (var172){
var173 = ((val* (*)(val*))(var_nsig->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var_nsig) /* n_params on <var_nsig:nullable ASignature(ASignature)>*/;
var174 = ((val* (*)(val*, long))(var173->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var173, var_i) /* [] on <var173:ANodes[AParam]>*/;
((void (*)(val*, val*))(var174->class->vft[COLOR_modelize_property__AParam__mparameter_61d]))(var174, var_mparameter170) /* mparameter= on <var174:nullable Object(AParam)>*/;
} else {
}
((void (*)(val*, val*))(var_mparameters->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mparameters, var_mparameter170) /* add on <var_mparameters:Array[MParameter]>*/;
CONTINUE_label175: (void)0;
((void (*)(val*))(var160->class->vft[COLOR_abstract_collection__Iterator__next]))(var160) /* next on <var160:Iterator[nullable Object]>*/;
}
BREAK_label175: (void)0;
var176 = NEW_model__MSignature(&type_model__MSignature);
((void (*)(val*, val*, val*))(var176->class->vft[COLOR_model__MSignature__init]))(var176, var_mparameters, var_ret_type) /* init on <var176:MSignature>*/;
var_msignature = var176;
((void (*)(val*, val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature_61d]))(var_mpropdef, var_msignature) /* msignature= on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
/* <self:AMethPropdef> isa ADeferredMethPropdef */
cltype178 = type_parser_nodes__ADeferredMethPropdef.color;
idtype179 = type_parser_nodes__ADeferredMethPropdef.id;
if(cltype178 >= self->type->table_size) {
var177 = 0;
} else {
var177 = self->type->type_table[cltype178] == idtype179;
}
((void (*)(val*, short int))(var_mpropdef->class->vft[COLOR_model__MMethodDef__is_abstract_61d]))(var_mpropdef, var177) /* is_abstract= on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__AMethPropdef__build_signature(val* self, val* p0, val* p1) {
modelize_property__AMethPropdef__build_signature(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: AMethPropdef, ModelBuilder, AClassdef) */
void modelize_property__AMethPropdef__check_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var4 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
val* var6 /* : nullable MPropDef */;
val* var7 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MProperty */;
val* var13 /* : MPropDef */;
val* var14 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var18 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : nullable AType */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : MProperty */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : String */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var44 /* : Bool */;
val* var45 /* : Range[Int] */;
long var46 /* : Int */;
long var47 /* : Int */;
val* var48 /* : Discrete */;
val* var49 /* : Discrete */;
val* var50 /* : Iterator[nullable Object] */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
long var_i /* var i: Int */;
long var53 /* : Int */;
val* var54 /* : Array[MParameter] */;
val* var55 /* : nullable Object */;
val* var56 /* : MType */;
val* var_myt /* var myt: MType */;
val* var57 /* : Array[MParameter] */;
val* var58 /* : nullable Object */;
val* var59 /* : MType */;
val* var_prt /* var prt: MType */;
short int var60 /* : Bool */;
val* var61 /* : nullable MClassDef */;
val* var62 /* : MClassType */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
val* var66 /* : nullable MClassDef */;
val* var67 /* : MClassType */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : ANodes[AParam] */;
val* var71 /* : nullable Object */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : Array[MParameter] */;
val* var78 /* : nullable Object */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var97 /* : NativeArray[Object] */;
val* var98 /* : String */;
val* var99 /* : null */;
short int var100 /* : Bool */;
val* var101 /* : null */;
short int var102 /* : Bool */;
val* var103 /* : nullable MClassDef */;
val* var104 /* : MClassType */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var107 /* : nullable AType */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var123 /* : Array[Object] */;
long var124 /* : Int */;
val* var125 /* : NativeArray[Object] */;
val* var126 /* : String */;
var_modelbuilder = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AMethPropdef>*/;
var_mpropdef = var;
var1 = NULL;
if (var_mpropdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__mmodule]))(var3) /* mmodule on <var3:MClassDef>*/;
var_mmodule = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(self) /* n_signature on <self:AMethPropdef>*/;
var_nsig = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AMethPropdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 489);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model__MMethodDef__msignature]))(var6) /* msignature on <var6:nullable MPropDef(nullable MMethodDef)>*/;
}
var_mysignature = var7;
var8 = NULL;
if (var_mysignature == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (var9){
goto RET_LABEL;
} else {
}
var10 = ((short int (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__is_intro]))(var_mpropdef) /* is_intro on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var11 = !var10;
if (var11){
var12 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MProperty__intro]))(var12) /* intro on <var12:MProperty(MMethod)>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MMethodDef__msignature]))(var13) /* msignature on <var13:MPropDef(MMethodDef)>*/;
var_msignature = var14;
var15 = NULL;
if (var_msignature == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (var16){
goto RET_LABEL;
} else {
}
var17 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/;
var_precursor_ret_type = var17;
var18 = ((val* (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_mysignature) /* return_mtype on <var_mysignature:nullable MSignature(MSignature)>*/;
var_ret_type = var18;
var20 = NULL;
if (var_ret_type == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
var_ = var21;
if (var21){
var22 = NULL;
if (var_precursor_ret_type == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
var19 = var23;
} else {
var19 = var_;
}
if (var19){
if (var_nsig == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 501);
show_backtrace(1);
} else {
var24 = ((val* (*)(val*))(var_nsig->class->vft[COLOR_parser_nodes__ASignature__n_type]))(var_nsig) /* n_type on <var_nsig:nullable ASignature>*/;
}
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 501);
show_backtrace(1);
}
if (varonce) {
var25 = varonce;
} else {
var26 = "Redef Error: ";
var27 = 13;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
var29 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)>*/;
if (varonce30) {
var31 = varonce30;
} else {
var32 = " is a procedure, not a function.";
var33 = 32;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 3;
var37 = NEW_array__NativeArray(var36, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var37)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var37)->values[1] = (val*) var29;
((struct instance_array__NativeArray*)var37)->values[2] = (val*) var31;
((void (*)(val*, val*, long))(var35->class->vft[COLOR_array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
}
var38 = ((val* (*)(val*))(var35->class->vft[COLOR_string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var24, var38) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var39 = ((long (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__arity]))(var_mysignature) /* arity on <var_mysignature:nullable MSignature(MSignature)>*/;
var40 = 0;
{ /* Inline kernel#Int#> (var39,var40) */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (!var43) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var44 = var39 > var40;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
if (var41){
var45 = NEW_range__Range(&type_range__Rangekernel__Int);
var46 = 0;
var47 = ((long (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__arity]))(var_mysignature) /* arity on <var_mysignature:nullable MSignature(MSignature)>*/;
var48 = BOX_kernel__Int(var46); /* autobox from Int to Discrete */
var49 = BOX_kernel__Int(var47); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var45->class->vft[COLOR_range__Range__without_last]))(var45, var48, var49) /* without_last on <var45:Range[Int]>*/;
var50 = ((val* (*)(val*))(var45->class->vft[COLOR_abstract_collection__Collection__iterator]))(var45) /* iterator on <var45:Range[Int]>*/;
for(;;) {
var51 = ((short int (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var50) /* is_ok on <var50:Iterator[nullable Object]>*/;
if(!var51) break;
var52 = ((val* (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__item]))(var50) /* item on <var50:Iterator[nullable Object]>*/;
var53 = ((struct instance_kernel__Int*)var52)->value; /* autounbox from nullable Object to Int */;
var_i = var53;
var54 = ((val* (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__mparameters]))(var_mysignature) /* mparameters on <var_mysignature:nullable MSignature(MSignature)>*/;
var55 = ((val* (*)(val*, long))(var54->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var54, var_i) /* [] on <var54:Array[MParameter]>*/;
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_model__MParameter__mtype]))(var55) /* mtype on <var55:nullable Object(MParameter)>*/;
var_myt = var56;
var57 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:nullable MSignature(MSignature)>*/;
var58 = ((val* (*)(val*, long))(var57->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var57, var_i) /* [] on <var57:Array[MParameter]>*/;
var59 = ((val* (*)(val*))(var58->class->vft[COLOR_model__MParameter__mtype]))(var58) /* mtype on <var58:nullable Object(MParameter)>*/;
var_prt = var59;
var61 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var61 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 510);
show_backtrace(1);
} else {
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_model__MClassDef__bound_mtype]))(var61) /* bound_mtype on <var61:nullable MClassDef>*/;
}
var63 = ((short int (*)(val*, val*, val*, val*))(var_myt->class->vft[COLOR_model__MType__is_subtype]))(var_myt, var_mmodule, var62, var_prt) /* is_subtype on <var_myt:MType>*/;
var64 = !var63;
var_65 = var64;
if (var64){
var66 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var66 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 511);
show_backtrace(1);
} else {
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_model__MClassDef__bound_mtype]))(var66) /* bound_mtype on <var66:nullable MClassDef>*/;
}
var68 = ((short int (*)(val*, val*, val*, val*))(var_prt->class->vft[COLOR_model__MType__is_subtype]))(var_prt, var_mmodule, var67, var_myt) /* is_subtype on <var_prt:MType>*/;
var69 = !var68;
var60 = var69;
} else {
var60 = var_65;
}
if (var60){
if (var_nsig == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 512);
show_backtrace(1);
} else {
var70 = ((val* (*)(val*))(var_nsig->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var_nsig) /* n_params on <var_nsig:nullable ASignature>*/;
}
var71 = ((val* (*)(val*, long))(var70->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var70, var_i) /* [] on <var70:ANodes[AParam]>*/;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "Redef Error: Wrong type for parameter `";
var75 = 39;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = ((val* (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__mparameters]))(var_mysignature) /* mparameters on <var_mysignature:nullable MSignature(MSignature)>*/;
var78 = ((val* (*)(val*, long))(var77->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var77, var_i) /* [] on <var77:Array[MParameter]>*/;
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_model__MParameter__name]))(var78) /* name on <var78:nullable Object(MParameter)>*/;
if (varonce80) {
var81 = varonce80;
} else {
var82 = "\'. found ";
var83 = 9;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = ", expected ";
var88 = 11;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = ".";
var93 = 1;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 7;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var73;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var79;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var81;
((struct instance_array__NativeArray*)var97)->values[3] = (val*) var_myt;
((struct instance_array__NativeArray*)var97)->values[4] = (val*) var86;
((struct instance_array__NativeArray*)var97)->values[5] = (val*) var_prt;
((struct instance_array__NativeArray*)var97)->values[6] = (val*) var91;
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var71, var98) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__next]))(var50) /* next on <var50:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
var99 = NULL;
if (var_precursor_ret_type == NULL) {
var100 = 0; /* is null */
} else {
var100 = 1; /* arg is null and recv is not */
}
if (var100){
var101 = NULL;
if (var_ret_type == NULL) {
var102 = 1; /* is null */
} else {
var102 = 0; /* arg is null but recv is not */
}
if (var102){
var_ret_type = var_precursor_ret_type;
} else {
var103 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var103 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 520);
show_backtrace(1);
} else {
var104 = ((val* (*)(val*))(var103->class->vft[COLOR_model__MClassDef__bound_mtype]))(var103) /* bound_mtype on <var103:nullable MClassDef>*/;
}
var105 = ((short int (*)(val*, val*, val*, val*))(var_ret_type->class->vft[COLOR_model__MType__is_subtype]))(var_ret_type, var_mmodule, var104, var_precursor_ret_type) /* is_subtype on <var_ret_type:nullable MType(MType)>*/;
var106 = !var105;
if (var106){
if (var_nsig == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 521);
show_backtrace(1);
} else {
var107 = ((val* (*)(val*))(var_nsig->class->vft[COLOR_parser_nodes__ASignature__n_type]))(var_nsig) /* n_type on <var_nsig:nullable ASignature>*/;
}
if (var107 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 521);
show_backtrace(1);
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "Redef Error: Wrong return type. found ";
var111 = 38;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = ", expected ";
var116 = 11;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = ".";
var121 = 1;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var123 = array_instance Array[Object] */
var124 = 5;
var125 = NEW_array__NativeArray(var124, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var125)->values[0] = (val*) var109;
((struct instance_array__NativeArray*)var125)->values[1] = (val*) var_ret_type;
((struct instance_array__NativeArray*)var125)->values[2] = (val*) var114;
((struct instance_array__NativeArray*)var125)->values[3] = (val*) var_precursor_ret_type;
((struct instance_array__NativeArray*)var125)->values[4] = (val*) var119;
((void (*)(val*, val*, long))(var123->class->vft[COLOR_array__Array__with_native]))(var123, var125, var124) /* with_native on <var123:Array[Object]>*/;
}
var126 = ((val* (*)(val*))(var123->class->vft[COLOR_string__Object__to_s]))(var123) /* to_s on <var123:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var107, var126) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__AMethPropdef__check_signature(val* self, val* p0, val* p1) {
modelize_property__AMethPropdef__check_signature(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: AAttrPropdef): nullable MMethodDef */
val* modelize_property__AAttrPropdef__mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___64dmreadpropdef].val; /* @mreadpropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__AAttrPropdef__mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = modelize_property__AAttrPropdef__mreadpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void modelize_property__AAttrPropdef__mreadpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___64dmreadpropdef].val = p0; /* @mreadpropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__AAttrPropdef__mreadpropdef_61d(val* self, val* p0) {
modelize_property__AAttrPropdef__mreadpropdef_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: AAttrPropdef): nullable MMethodDef */
val* modelize_property__AAttrPropdef__mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___64dmwritepropdef].val; /* @mwritepropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__AAttrPropdef__mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = modelize_property__AAttrPropdef__mwritepropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void modelize_property__AAttrPropdef__mwritepropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___64dmwritepropdef].val = p0; /* @mwritepropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__AAttrPropdef__mwritepropdef_61d(val* self, val* p0) {
modelize_property__AAttrPropdef__mwritepropdef_61d(self, p0);
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_property for (self: AAttrPropdef, ModelBuilder, AClassdef) */
void modelize_property__AAttrPropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var2 /* : nullable TAttrid */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable TAttrid */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var7 /* : nullable TId */;
val* var8 /* : String */;
short int var9 /* : Bool */;
val* var10 /* : MClassKind */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : MClass */;
val* var14 /* : MClassKind */;
val* var15 /* : MClassKind */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
val* var35 /* : MClassKind */;
val* var36 /* : MClassKind */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
val* var57 /* : MClassKind */;
val* var58 /* : MClassKind */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : Array[Object] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[Object] */;
val* var78 /* : String */;
val* var79 /* : nullable TAttrid */;
val* var_nid /* var nid: nullable TAttrid */;
val* var80 /* : null */;
short int var81 /* : Bool */;
val* var82 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
val* var83 /* : null */;
short int var84 /* : Bool */;
val* var85 /* : AVisibility */;
val* var86 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var87 /* : MAttribute */;
val* var88 /* : nullable TKwredef */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
int cltype;
int idtype;
val* var93 /* : AVisibility */;
val* var94 /* : nullable TKwredef */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : Map[MProperty, APropdef] */;
val* var99 /* : MAttributeDef */;
val* var100 /* : Location */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const struct type* type_struct;
const char* var_class_name;
val* var104 /* : HashMap[MPropDef, APropdef] */;
val* var105 /* : nullable AAble */;
val* var_nreadable /* var nreadable: nullable AAble */;
val* var106 /* : null */;
short int var107 /* : Bool */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var_readname /* var readname: String */;
val* var110 /* : nullable MProperty */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
val* var_mreadprop /* var mreadprop: nullable MMethod */;
val* var115 /* : null */;
short int var116 /* : Bool */;
val* var117 /* : nullable AVisibility */;
val* var118 /* : MVisibility */;
val* var_mvisibility119 /* var mvisibility: MVisibility */;
val* var120 /* : MMethod */;
val* var121 /* : nullable TKwredef */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : nullable TKwredef */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
val* var129 /* : nullable AVisibility */;
val* var130 /* : Map[MProperty, APropdef] */;
val* var131 /* : MMethodDef */;
val* var132 /* : Location */;
val* var_mreadpropdef /* var mreadpropdef: MMethodDef */;
val* var133 /* : HashMap[MPropDef, APropdef] */;
val* var134 /* : nullable AAble */;
val* var_nwritable /* var nwritable: nullable AAble */;
val* var135 /* : null */;
short int var136 /* : Bool */;
long var137 /* : Int */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
val* var144 /* : String */;
val* var_writename /* var writename: String */;
val* var145 /* : nullable MProperty */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
const char* var_class_name149;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var150 /* : null */;
short int var151 /* : Bool */;
val* var152 /* : nullable AVisibility */;
val* var153 /* : MVisibility */;
val* var_mvisibility154 /* var mvisibility: MVisibility */;
val* var155 /* : MMethod */;
val* var156 /* : nullable TKwredef */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
val* var160 /* : nullable TKwredef */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var164 /* : nullable AVisibility */;
val* var165 /* : Map[MProperty, APropdef] */;
val* var166 /* : MMethodDef */;
val* var167 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var168 /* : HashMap[MPropDef, APropdef] */;
val* var169 /* : nullable TId */;
val* var_nid2 /* var nid2: TId */;
val* var170 /* : MAttribute */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var177 /* : MVisibility */;
val* var_mprop178 /* var mprop: MAttribute */;
val* var179 /* : MAttributeDef */;
val* var180 /* : Location */;
val* var_mpropdef181 /* var mpropdef: MAttributeDef */;
short int var182 /* : Bool */;
int cltype183;
int idtype184;
const struct type* type_struct185;
const char* var_class_name186;
val* var187 /* : HashMap[MPropDef, APropdef] */;
val* var_readname188 /* var readname: String */;
val* var189 /* : nullable MProperty */;
short int var190 /* : Bool */;
int cltype191;
int idtype192;
const char* var_class_name193;
val* var_mreadprop194 /* var mreadprop: nullable MMethod */;
val* var195 /* : null */;
short int var196 /* : Bool */;
val* var197 /* : AVisibility */;
val* var198 /* : MVisibility */;
val* var_mvisibility199 /* var mvisibility: MVisibility */;
val* var200 /* : MMethod */;
val* var201 /* : nullable TKwredef */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
val* var205 /* : nullable TKwredef */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
val* var209 /* : AVisibility */;
val* var210 /* : Map[MProperty, APropdef] */;
val* var211 /* : MMethodDef */;
val* var212 /* : Location */;
val* var_mreadpropdef213 /* var mreadpropdef: MMethodDef */;
val* var214 /* : HashMap[MPropDef, APropdef] */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var_writename221 /* var writename: String */;
val* var222 /* : nullable AAble */;
val* var_nwritable223 /* var nwritable: nullable AAble */;
val* var224 /* : nullable MProperty */;
short int var225 /* : Bool */;
int cltype226;
int idtype227;
const char* var_class_name228;
val* var_mwriteprop229 /* var mwriteprop: nullable MMethod */;
val* var230 /* : null */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
val* var231 /* : null */;
short int var232 /* : Bool */;
val* var233 /* : nullable TKwredef */;
val* var234 /* : null */;
short int var235 /* : Bool */;
val* var236 /* : null */;
short int var237 /* : Bool */;
val* var238 /* : nullable AVisibility */;
val* var239 /* : MVisibility */;
val* var_mvisibility240 /* var mvisibility: nullable Object */;
val* var241 /* : MVisibility */;
val* var242 /* : MMethod */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
val* var249 /* : null */;
short int var250 /* : Bool */;
val* var251 /* : nullable AVisibility */;
val* var252 /* : Map[MProperty, APropdef] */;
val* var253 /* : MMethodDef */;
val* var254 /* : Location */;
val* var_mwritepropdef255 /* var mwritepropdef: MMethodDef */;
val* var256 /* : HashMap[MPropDef, APropdef] */;
var_modelbuilder = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 537);
show_backtrace(1);
}
var_mclassdef = var;
var1 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef) /* mclass on <var_mclassdef:MClassDef>*/;
var_mclass = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 542);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_parser_nodes__Token__text]))(var5) /* text on <var5:nullable TAttrid>*/;
}
var_name = var6;
} else {
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id2]))(self) /* n_id2 on <self:AAttrPropdef>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 544);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_parser_nodes__Token__text]))(var7) /* text on <var7:nullable TId>*/;
}
var_name = var8;
}
var10 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:MClass>*/;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:AAttrPropdef>*/;
var12 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var11) /* == on <var10:MClassKind>*/;
var_ = var12;
if (var12){
var9 = var_;
} else {
var13 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef) /* mclass on <var_mclassdef:MClassDef>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClass__kind]))(var13) /* kind on <var13:MClass>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__enum_kind]))(self) /* enum_kind on <self:AAttrPropdef>*/;
var16 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var15) /* == on <var14:MClassKind>*/;
var9 = var16;
}
if (var9){
if (varonce) {
var17 = varonce;
} else {
var18 = "Error: Attempt to define attribute ";
var19 = 35;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " in the interface ";
var24 = 18;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = ".";
var29 = 1;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var22;
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var34) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
var35 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:MClass>*/;
var36 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__enum_kind]))(self) /* enum_kind on <self:AAttrPropdef>*/;
var37 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_kernel__Object___61d_61d]))(var35, var36) /* == on <var35:MClassKind>*/;
if (var37){
if (varonce38) {
var39 = varonce38;
} else {
var40 = "Error: Attempt to define attribute ";
var41 = 35;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = " in the enum class ";
var46 = 19;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = ".";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 5;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var39;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var55)->values[2] = (val*) var44;
((struct instance_array__NativeArray*)var55)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var55)->values[4] = (val*) var49;
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var56) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
var57 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:MClass>*/;
var58 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:AAttrPropdef>*/;
var59 = ((short int (*)(val*, val*))(var57->class->vft[COLOR_kernel__Object___61d_61d]))(var57, var58) /* == on <var57:MClassKind>*/;
if (var59){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Error: Attempt to define attribute ";
var63 = 35;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " in the extern class ";
var68 = 21;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = ".";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 5;
var77 = NEW_array__NativeArray(var76, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var77)->values[0] = (val*) var61;
((struct instance_array__NativeArray*)var77)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var77)->values[2] = (val*) var66;
((struct instance_array__NativeArray*)var77)->values[3] = (val*) var_mclass;
((struct instance_array__NativeArray*)var77)->values[4] = (val*) var71;
((void (*)(val*, val*, long))(var75->class->vft[COLOR_array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
var78 = ((val* (*)(val*))(var75->class->vft[COLOR_string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var78) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
}
}
}
var79 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
var_nid = var79;
var80 = NULL;
if (var_nid == NULL) {
var81 = 0; /* is null */
} else {
var81 = 1; /* arg is null and recv is not */
}
if (var81){
var82 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_nid, var_mclassdef, var_name) /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/;
var_mprop = var82;
var83 = NULL;
if (var_mprop == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (var84){
var85 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_visibility]))(self) /* n_visibility on <self:AAttrPropdef>*/;
var86 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_nclassdef, var85) /* new_property_visibility on <self:AAttrPropdef>*/;
var_mvisibility = var86;
var87 = NEW_model__MAttribute(&type_model__MAttribute);
((void (*)(val*, val*, val*, val*))(var87->class->vft[COLOR_model__MAttribute__init]))(var87, var_mclassdef, var_name, var_mvisibility) /* init on <var87:MAttribute>*/;
var_mprop = var87;
var88 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_kwredef]))(self) /* n_kwredef on <self:AAttrPropdef>*/;
var89 = 0;
var90 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var88, var89, var_mprop) /* check_redef_keyword on <self:AAttrPropdef>*/;
var91 = !var90;
if (var91){
goto RET_LABEL;
} else {
}
} else {
/* <var_mprop:nullable MProperty(MProperty)> isa MAttribute */
cltype = type_model__MAttribute.color;
idtype = type_model__MAttribute.id;
if(cltype >= var_mprop->type->table_size) {
var92 = 0;
} else {
var92 = var_mprop->type->type_table[cltype] == idtype;
}
if (!var92) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 564);
show_backtrace(1);
}
var93 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_visibility]))(self) /* n_visibility on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var_nclassdef, var93, var_mprop) /* check_redef_property_visibility on <self:AAttrPropdef>*/;
var94 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_kwredef]))(self) /* n_kwredef on <self:AAttrPropdef>*/;
var95 = 1;
var96 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var94, var95, var_mprop) /* check_redef_keyword on <self:AAttrPropdef>*/;
var97 = !var96;
if (var97){
goto RET_LABEL;
} else {
}
}
var98 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mprop2npropdef]))(var_nclassdef) /* mprop2npropdef on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*, val*))(var98->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var98, var_mprop, self) /* []= on <var98:Map[MProperty, APropdef]>*/;
var99 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
var100 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*))(var99->class->vft[COLOR_model__MAttributeDef__init]))(var99, var_mclassdef, var_mprop, var100) /* init on <var99:MAttributeDef>*/;
var_mpropdef = var99;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__APropdef_VTMPROPDEF];
cltype102 = type_struct->color;
idtype103 = type_struct->id;
if(cltype102 >= var_mpropdef->type->table_size) {
var101 = 0;
} else {
var101 = var_mpropdef->type->type_table[cltype102] == idtype103;
}
if (!var101) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 571);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef_61d]))(self, var_mpropdef) /* mpropdef= on <self:AAttrPropdef>*/;
var104 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var104->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var104, var_mpropdef, self) /* []= on <var104:HashMap[MPropDef, APropdef]>*/;
var105 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_readable]))(self) /* n_readable on <self:AAttrPropdef>*/;
var_nreadable = var105;
var106 = NULL;
if (var_nreadable == NULL) {
var107 = 0; /* is null */
} else {
var107 = 1; /* arg is null and recv is not */
}
if (var107){
var108 = 1;
var109 = ((val* (*)(val*, long))(var_name->class->vft[COLOR_string__AbstractString__substring_from]))(var_name, var108) /* substring_from on <var_name:String>*/;
var_readname = var109;
var110 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_nid, var_mclassdef, var_readname) /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/;
/* <var110:nullable MProperty> isa nullable MMethod */
cltype112 = type_nullable_model__MMethod.color;
idtype113 = type_nullable_model__MMethod.id;
if(var110 == NULL) {
var111 = 1;
} else {
if(cltype112 >= var110->type->table_size) {
var111 = 0;
} else {
var111 = var110->type->type_table[cltype112] == idtype113;
}
}
if (!var111) {
var_class_name114 = var110 == NULL ? "null" : var110->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name114);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 577);
show_backtrace(1);
}
var_mreadprop = var110;
var115 = NULL;
if (var_mreadprop == NULL) {
var116 = 1; /* is null */
} else {
var116 = 0; /* arg is null but recv is not */
}
if (var116){
var117 = ((val* (*)(val*))(var_nreadable->class->vft[COLOR_parser_nodes__AAble__n_visibility]))(var_nreadable) /* n_visibility on <var_nreadable:nullable AAble(AAble)>*/;
var118 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_nclassdef, var117) /* new_property_visibility on <self:AAttrPropdef>*/;
var_mvisibility119 = var118;
var120 = NEW_model__MMethod(&type_model__MMethod);
((void (*)(val*, val*, val*, val*))(var120->class->vft[COLOR_model__MMethod__init]))(var120, var_mclassdef, var_readname, var_mvisibility119) /* init on <var120:MMethod>*/;
var_mreadprop = var120;
var121 = ((val* (*)(val*))(var_nreadable->class->vft[COLOR_parser_nodes__AAble__n_kwredef]))(var_nreadable) /* n_kwredef on <var_nreadable:nullable AAble(AAble)>*/;
var122 = 0;
var123 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var121, var122, var_mreadprop) /* check_redef_keyword on <self:AAttrPropdef>*/;
var124 = !var123;
if (var124){
goto RET_LABEL;
} else {
}
} else {
var125 = ((val* (*)(val*))(var_nreadable->class->vft[COLOR_parser_nodes__AAble__n_kwredef]))(var_nreadable) /* n_kwredef on <var_nreadable:nullable AAble(AAble)>*/;
var126 = 1;
var127 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var125, var126, var_mreadprop) /* check_redef_keyword on <self:AAttrPropdef>*/;
var128 = !var127;
if (var128){
goto RET_LABEL;
} else {
}
var129 = ((val* (*)(val*))(var_nreadable->class->vft[COLOR_parser_nodes__AAble__n_visibility]))(var_nreadable) /* n_visibility on <var_nreadable:nullable AAble(AAble)>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var_nclassdef, var129, var_mreadprop) /* check_redef_property_visibility on <self:AAttrPropdef>*/;
}
var130 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mprop2npropdef]))(var_nclassdef) /* mprop2npropdef on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*, val*))(var130->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var130, var_mreadprop, self) /* []= on <var130:Map[MProperty, APropdef]>*/;
var131 = NEW_model__MMethodDef(&type_model__MMethodDef);
var132 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*))(var131->class->vft[COLOR_model__MMethodDef__init]))(var131, var_mclassdef, var_mreadprop, var132) /* init on <var131:MMethodDef>*/;
var_mreadpropdef = var131;
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mreadpropdef_61d]))(self, var_mreadpropdef) /* mreadpropdef= on <self:AAttrPropdef>*/;
var133 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var133->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var133, var_mreadpropdef, self) /* []= on <var133:HashMap[MPropDef, APropdef]>*/;
} else {
}
var134 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_writable]))(self) /* n_writable on <self:AAttrPropdef>*/;
var_nwritable = var134;
var135 = NULL;
if (var_nwritable == NULL) {
var136 = 0; /* is null */
} else {
var136 = 1; /* arg is null and recv is not */
}
if (var136){
var137 = 1;
var138 = ((val* (*)(val*, long))(var_name->class->vft[COLOR_string__AbstractString__substring_from]))(var_name, var137) /* substring_from on <var_name:String>*/;
if (varonce139) {
var140 = varonce139;
} else {
var141 = "=";
var142 = 1;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
var144 = ((val* (*)(val*, val*))(var138->class->vft[COLOR_string__String___43d]))(var138, var140) /* + on <var138:String>*/;
var_writename = var144;
var145 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_nid, var_mclassdef, var_writename) /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/;
/* <var145:nullable MProperty> isa nullable MMethod */
cltype147 = type_nullable_model__MMethod.color;
idtype148 = type_nullable_model__MMethod.id;
if(var145 == NULL) {
var146 = 1;
} else {
if(cltype147 >= var145->type->table_size) {
var146 = 0;
} else {
var146 = var145->type->type_table[cltype147] == idtype148;
}
}
if (!var146) {
var_class_name149 = var145 == NULL ? "null" : var145->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name149);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 596);
show_backtrace(1);
}
var_mwriteprop = var145;
var150 = NULL;
if (var_mwriteprop == NULL) {
var151 = 1; /* is null */
} else {
var151 = 0; /* arg is null but recv is not */
}
if (var151){
var152 = ((val* (*)(val*))(var_nwritable->class->vft[COLOR_parser_nodes__AAble__n_visibility]))(var_nwritable) /* n_visibility on <var_nwritable:nullable AAble(AAble)>*/;
var153 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_nclassdef, var152) /* new_property_visibility on <self:AAttrPropdef>*/;
var_mvisibility154 = var153;
var155 = NEW_model__MMethod(&type_model__MMethod);
((void (*)(val*, val*, val*, val*))(var155->class->vft[COLOR_model__MMethod__init]))(var155, var_mclassdef, var_writename, var_mvisibility154) /* init on <var155:MMethod>*/;
var_mwriteprop = var155;
var156 = ((val* (*)(val*))(var_nwritable->class->vft[COLOR_parser_nodes__AAble__n_kwredef]))(var_nwritable) /* n_kwredef on <var_nwritable:nullable AAble(AAble)>*/;
var157 = 0;
var158 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var156, var157, var_mwriteprop) /* check_redef_keyword on <self:AAttrPropdef>*/;
var159 = !var158;
if (var159){
goto RET_LABEL;
} else {
}
} else {
var160 = ((val* (*)(val*))(var_nwritable->class->vft[COLOR_parser_nodes__AAble__n_kwredef]))(var_nwritable) /* n_kwredef on <var_nwritable:nullable AAble(AAble)>*/;
var161 = 1;
var162 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var160, var161, var_mwriteprop) /* check_redef_keyword on <self:AAttrPropdef>*/;
var163 = !var162;
if (var163){
goto RET_LABEL;
} else {
}
var164 = ((val* (*)(val*))(var_nwritable->class->vft[COLOR_parser_nodes__AAble__n_visibility]))(var_nwritable) /* n_visibility on <var_nwritable:nullable AAble(AAble)>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var_nclassdef, var164, var_mwriteprop) /* check_redef_property_visibility on <self:AAttrPropdef>*/;
}
var165 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mprop2npropdef]))(var_nclassdef) /* mprop2npropdef on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*, val*))(var165->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var165, var_mwriteprop, self) /* []= on <var165:Map[MProperty, APropdef]>*/;
var166 = NEW_model__MMethodDef(&type_model__MMethodDef);
var167 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*))(var166->class->vft[COLOR_model__MMethodDef__init]))(var166, var_mclassdef, var_mwriteprop, var167) /* init on <var166:MMethodDef>*/;
var_mwritepropdef = var166;
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mwritepropdef_61d]))(self, var_mwritepropdef) /* mwritepropdef= on <self:AAttrPropdef>*/;
var168 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var168->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var168, var_mwritepropdef, self) /* []= on <var168:HashMap[MPropDef, APropdef]>*/;
} else {
}
} else {
var169 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id2]))(self) /* n_id2 on <self:AAttrPropdef>*/;
if (var169 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 613);
show_backtrace(1);
}
var_nid2 = var169;
var170 = NEW_model__MAttribute(&type_model__MAttribute);
if (varonce171) {
var172 = varonce171;
} else {
var173 = "@";
var174 = 1;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = ((val* (*)(val*, val*))(var172->class->vft[COLOR_string__String___43d]))(var172, var_name) /* + on <var172:String>*/;
var177 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__none_visibility]))(self) /* none_visibility on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*))(var170->class->vft[COLOR_model__MAttribute__init]))(var170, var_mclassdef, var176, var177) /* init on <var170:MAttribute>*/;
var_mprop178 = var170;
var179 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
var180 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*))(var179->class->vft[COLOR_model__MAttributeDef__init]))(var179, var_mclassdef, var_mprop178, var180) /* init on <var179:MAttributeDef>*/;
var_mpropdef181 = var179;
/* <var_mpropdef181:MAttributeDef> isa nullable MPROPDEF */
type_struct185 = self->type->resolution_table->types[COLOR_parser_nodes__APropdef_VTMPROPDEF];
cltype183 = type_struct185->color;
idtype184 = type_struct185->id;
if(cltype183 >= var_mpropdef181->type->table_size) {
var182 = 0;
} else {
var182 = var_mpropdef181->type->type_table[cltype183] == idtype184;
}
if (!var182) {
var_class_name186 = var_mpropdef181 == NULL ? "null" : var_mpropdef181->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name186);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 616);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef_61d]))(self, var_mpropdef181) /* mpropdef= on <self:AAttrPropdef>*/;
var187 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var187->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var187, var_mpropdef181, self) /* []= on <var187:HashMap[MPropDef, APropdef]>*/;
var_readname188 = var_name;
var189 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_nid2, var_mclassdef, var_readname188) /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/;
/* <var189:nullable MProperty> isa nullable MMethod */
cltype191 = type_nullable_model__MMethod.color;
idtype192 = type_nullable_model__MMethod.id;
if(var189 == NULL) {
var190 = 1;
} else {
if(cltype191 >= var189->type->table_size) {
var190 = 0;
} else {
var190 = var189->type->type_table[cltype191] == idtype192;
}
}
if (!var190) {
var_class_name193 = var189 == NULL ? "null" : var189->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name193);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 620);
show_backtrace(1);
}
var_mreadprop194 = var189;
var195 = NULL;
if (var_mreadprop194 == NULL) {
var196 = 1; /* is null */
} else {
var196 = 0; /* arg is null but recv is not */
}
if (var196){
var197 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_visibility]))(self) /* n_visibility on <self:AAttrPropdef>*/;
var198 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_nclassdef, var197) /* new_property_visibility on <self:AAttrPropdef>*/;
var_mvisibility199 = var198;
var200 = NEW_model__MMethod(&type_model__MMethod);
((void (*)(val*, val*, val*, val*))(var200->class->vft[COLOR_model__MMethod__init]))(var200, var_mclassdef, var_readname188, var_mvisibility199) /* init on <var200:MMethod>*/;
var_mreadprop194 = var200;
var201 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_kwredef]))(self) /* n_kwredef on <self:AAttrPropdef>*/;
var202 = 0;
var203 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var201, var202, var_mreadprop194) /* check_redef_keyword on <self:AAttrPropdef>*/;
var204 = !var203;
if (var204){
goto RET_LABEL;
} else {
}
} else {
var205 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_kwredef]))(self) /* n_kwredef on <self:AAttrPropdef>*/;
var206 = 1;
var207 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var205, var206, var_mreadprop194) /* check_redef_keyword on <self:AAttrPropdef>*/;
var208 = !var207;
if (var208){
goto RET_LABEL;
} else {
}
var209 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_visibility]))(self) /* n_visibility on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var_nclassdef, var209, var_mreadprop194) /* check_redef_property_visibility on <self:AAttrPropdef>*/;
}
var210 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mprop2npropdef]))(var_nclassdef) /* mprop2npropdef on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*, val*))(var210->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var210, var_mreadprop194, self) /* []= on <var210:Map[MProperty, APropdef]>*/;
var211 = NEW_model__MMethodDef(&type_model__MMethodDef);
var212 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*))(var211->class->vft[COLOR_model__MMethodDef__init]))(var211, var_mclassdef, var_mreadprop194, var212) /* init on <var211:MMethodDef>*/;
var_mreadpropdef213 = var211;
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mreadpropdef_61d]))(self, var_mreadpropdef213) /* mreadpropdef= on <self:AAttrPropdef>*/;
var214 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var214->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var214, var_mreadpropdef213, self) /* []= on <var214:HashMap[MPropDef, APropdef]>*/;
if (varonce215) {
var216 = varonce215;
} else {
var217 = "=";
var218 = 1;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var220 = ((val* (*)(val*, val*))(var_name->class->vft[COLOR_string__String___43d]))(var_name, var216) /* + on <var_name:String>*/;
var_writename221 = var220;
var222 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_writable]))(self) /* n_writable on <self:AAttrPropdef>*/;
var_nwritable223 = var222;
var224 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var_nid2, var_mclassdef, var_writename221) /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/;
/* <var224:nullable MProperty> isa nullable MMethod */
cltype226 = type_nullable_model__MMethod.color;
idtype227 = type_nullable_model__MMethod.id;
if(var224 == NULL) {
var225 = 1;
} else {
if(cltype226 >= var224->type->table_size) {
var225 = 0;
} else {
var225 = var224->type->type_table[cltype226] == idtype227;
}
}
if (!var225) {
var_class_name228 = var224 == NULL ? "null" : var224->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name228);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 637);
show_backtrace(1);
}
var_mwriteprop229 = var224;
var230 = NULL;
var_nwkwredef = var230;
var231 = NULL;
if (var_nwritable223 == NULL) {
var232 = 0; /* is null */
} else {
var232 = 1; /* arg is null and recv is not */
}
if (var232){
var233 = ((val* (*)(val*))(var_nwritable223->class->vft[COLOR_parser_nodes__AAble__n_kwredef]))(var_nwritable223) /* n_kwredef on <var_nwritable223:nullable AAble(AAble)>*/;
var_nwkwredef = var233;
} else {
}
var234 = NULL;
if (var_mwriteprop229 == NULL) {
var235 = 1; /* is null */
} else {
var235 = 0; /* arg is null but recv is not */
}
if (var235){
var236 = NULL;
if (var_nwritable223 == NULL) {
var237 = 0; /* is null */
} else {
var237 = 1; /* arg is null and recv is not */
}
if (var237){
var238 = ((val* (*)(val*))(var_nwritable223->class->vft[COLOR_parser_nodes__AAble__n_visibility]))(var_nwritable223) /* n_visibility on <var_nwritable223:nullable AAble(AAble)>*/;
var239 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_nclassdef, var238) /* new_property_visibility on <self:AAttrPropdef>*/;
var_mvisibility240 = var239;
} else {
var241 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:AAttrPropdef>*/;
var_mvisibility240 = var241;
}
var242 = NEW_model__MMethod(&type_model__MMethod);
((void (*)(val*, val*, val*, val*))(var242->class->vft[COLOR_model__MMethod__init]))(var242, var_mclassdef, var_writename221, var_mvisibility240) /* init on <var242:MMethod>*/;
var_mwriteprop229 = var242;
var243 = 0;
var244 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var_nwkwredef, var243, var_mwriteprop229) /* check_redef_keyword on <self:AAttrPropdef>*/;
var245 = !var244;
if (var245){
goto RET_LABEL;
} else {
}
} else {
var246 = 1;
var247 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var_nwkwredef, var246, var_mwriteprop229) /* check_redef_keyword on <self:AAttrPropdef>*/;
var248 = !var247;
if (var248){
goto RET_LABEL;
} else {
}
var249 = NULL;
if (var_nwritable223 == NULL) {
var250 = 0; /* is null */
} else {
var250 = 1; /* arg is null and recv is not */
}
if (var250){
var251 = ((val* (*)(val*))(var_nwritable223->class->vft[COLOR_parser_nodes__AAble__n_visibility]))(var_nwritable223) /* n_visibility on <var_nwritable223:nullable AAble(AAble)>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var_nclassdef, var251, var_mwriteprop229) /* check_redef_property_visibility on <self:AAttrPropdef>*/;
} else {
}
}
var252 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mprop2npropdef]))(var_nclassdef) /* mprop2npropdef on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*, val*))(var252->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var252, var_mwriteprop229, self) /* []= on <var252:Map[MProperty, APropdef]>*/;
var253 = NEW_model__MMethodDef(&type_model__MMethodDef);
var254 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:AAttrPropdef>*/;
((void (*)(val*, val*, val*, val*))(var253->class->vft[COLOR_model__MMethodDef__init]))(var253, var_mclassdef, var_mwriteprop229, var254) /* init on <var253:MMethodDef>*/;
var_mwritepropdef255 = var253;
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mwritepropdef_61d]))(self, var_mwritepropdef255) /* mwritepropdef= on <self:AAttrPropdef>*/;
var256 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var256->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var256, var_mwritepropdef255, self) /* []= on <var256:HashMap[MPropDef, APropdef]>*/;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_property for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__AAttrPropdef__build_property(val* self, val* p0, val* p1) {
modelize_property__AAttrPropdef__build_property(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_signature for (self: AAttrPropdef, ModelBuilder, AClassdef) */
void modelize_property__AAttrPropdef__build_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var4 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : null */;
val* var_mtype /* var mtype: nullable MType */;
val* var6 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : AType */;
val* var19 /* : nullable MType */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : nullable MClass */;
val* var_cla /* var cla: nullable MClass */;
val* var28 /* : null */;
short int var29 /* : Bool */;
val* var30 /* : MClassType */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : nullable MClass */;
val* var_cla40 /* var cla: nullable MClass */;
val* var41 /* : null */;
short int var42 /* : Bool */;
val* var43 /* : MClassType */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : nullable MClass */;
val* var_cla53 /* var cla: nullable MClass */;
val* var54 /* : null */;
short int var55 /* : Bool */;
val* var56 /* : MClassType */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : nullable MClass */;
val* var_cla66 /* var cla: nullable MClass */;
val* var67 /* : null */;
short int var68 /* : Bool */;
val* var69 /* : MClassType */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : nullable MClass */;
val* var_cla79 /* var cla: nullable MClass */;
val* var80 /* : null */;
short int var81 /* : Bool */;
val* var82 /* : MClassType */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : nullable MClass */;
val* var_cla92 /* var cla: nullable MClass */;
val* var93 /* : null */;
short int var94 /* : Bool */;
val* var95 /* : MClassType */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var106 /* : Array[Object] */;
long var107 /* : Int */;
val* var108 /* : NativeArray[Object] */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : String */;
val* var119 /* : null */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
val* var124 /* : AType */;
val* var125 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var_ /* var : Bool */;
val* var128 /* : ToolContext */;
val* var129 /* : OptionCount */;
val* var130 /* : nullable Object */;
long var131 /* : Int */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name;
long var137 /* : Int */;
short int var138 /* : Bool */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
val* var144 /* : null */;
short int var145 /* : Bool */;
val* var146 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
val* var147 /* : null */;
short int var148 /* : Bool */;
val* var149 /* : MSignature */;
val* var150 /* : Array[MParameter] */;
val* var_msignature /* var msignature: MSignature */;
val* var151 /* : nullable MMethodDef */;
val* var_msritepropdef /* var msritepropdef: nullable MMethodDef */;
val* var152 /* : nullable MMethodDef */;
val* var153 /* : null */;
short int var154 /* : Bool */;
val* var155 /* : nullable TAttrid */;
val* var156 /* : null */;
short int var157 /* : Bool */;
val* var158 /* : nullable TAttrid */;
val* var159 /* : String */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var_name /* var name: String */;
val* var162 /* : nullable TId */;
val* var163 /* : String */;
val* var164 /* : MParameter */;
short int var165 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var166 /* : MSignature */;
val* var167 /* : Array[MParameter] */;
long var168 /* : Int */;
val* var_169 /* var : Array[MParameter] */;
val* var170 /* : null */;
val* var_msignature171 /* var msignature: MSignature */;
val* var172 /* : nullable MMethodDef */;
var_modelbuilder = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
var_mpropdef = var;
var1 = NULL;
if (var_mpropdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__mmodule]))(var3) /* mmodule on <var3:MClassDef>*/;
var_mmodule = var4;
var5 = NULL;
var_mtype = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_type]))(self) /* n_type on <self:AAttrPropdef>*/;
var_ntype = var6;
var7 = NULL;
if (var_ntype == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = ((val* (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_nclassdef, var_ntype) /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/;
var_mtype = var9;
var10 = NULL;
if (var_mtype == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (var11){
goto RET_LABEL;
} else {
}
} else {
}
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(self) /* n_expr on <self:AAttrPropdef>*/;
var_nexpr = var12;
var13 = NULL;
if (var_mtype == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (var14){
var15 = NULL;
if (var_nexpr == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
/* <var_nexpr:nullable AExpr(AExpr)> isa ANewExpr */
cltype = type_parser_nodes__ANewExpr.color;
idtype = type_parser_nodes__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var17 = 0;
} else {
var17 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var17){
var18 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_parser_nodes__ANewExpr__n_type]))(var_nexpr) /* n_type on <var_nexpr:nullable AExpr(ANewExpr)>*/;
var19 = ((val* (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_nclassdef, var18) /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/;
var_mtype = var19;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntExpr */
cltype21 = type_parser_nodes__AIntExpr.color;
idtype22 = type_parser_nodes__AIntExpr.id;
if(cltype21 >= var_nexpr->type->table_size) {
var20 = 0;
} else {
var20 = var_nexpr->type->type_table[cltype21] == idtype22;
}
if (var20){
if (varonce) {
var23 = varonce;
} else {
var24 = "Int";
var25 = 3;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
var27 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var23) /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/;
var_cla = var27;
var28 = NULL;
if (var_cla == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
var30 = ((val* (*)(val*))(var_cla->class->vft[COLOR_model__MClass__mclass_type]))(var_cla) /* mclass_type on <var_cla:nullable MClass(MClass)>*/;
var_mtype = var30;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype32 = type_parser_nodes__AFloatExpr.color;
idtype33 = type_parser_nodes__AFloatExpr.id;
if(cltype32 >= var_nexpr->type->table_size) {
var31 = 0;
} else {
var31 = var_nexpr->type->type_table[cltype32] == idtype33;
}
if (var31){
if (varonce34) {
var35 = varonce34;
} else {
var36 = "Float";
var37 = 5;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var35) /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/;
var_cla40 = var39;
var41 = NULL;
if (var_cla40 == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (var42){
var43 = ((val* (*)(val*))(var_cla40->class->vft[COLOR_model__MClass__mclass_type]))(var_cla40) /* mclass_type on <var_cla40:nullable MClass(MClass)>*/;
var_mtype = var43;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype45 = type_parser_nodes__ACharExpr.color;
idtype46 = type_parser_nodes__ACharExpr.id;
if(cltype45 >= var_nexpr->type->table_size) {
var44 = 0;
} else {
var44 = var_nexpr->type->type_table[cltype45] == idtype46;
}
if (var44){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "Char";
var50 = 4;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var48) /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/;
var_cla53 = var52;
var54 = NULL;
if (var_cla53 == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (var55){
var56 = ((val* (*)(val*))(var_cla53->class->vft[COLOR_model__MClass__mclass_type]))(var_cla53) /* mclass_type on <var_cla53:nullable MClass(MClass)>*/;
var_mtype = var56;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype58 = type_parser_nodes__ABoolExpr.color;
idtype59 = type_parser_nodes__ABoolExpr.id;
if(cltype58 >= var_nexpr->type->table_size) {
var57 = 0;
} else {
var57 = var_nexpr->type->type_table[cltype58] == idtype59;
}
if (var57){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Bool";
var63 = 4;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var61) /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/;
var_cla66 = var65;
var67 = NULL;
if (var_cla66 == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (var68){
var69 = ((val* (*)(val*))(var_cla66->class->vft[COLOR_model__MClass__mclass_type]))(var_cla66) /* mclass_type on <var_cla66:nullable MClass(MClass)>*/;
var_mtype = var69;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ASuperstringExpr */
cltype71 = type_parser_nodes__ASuperstringExpr.color;
idtype72 = type_parser_nodes__ASuperstringExpr.id;
if(cltype71 >= var_nexpr->type->table_size) {
var70 = 0;
} else {
var70 = var_nexpr->type->type_table[cltype71] == idtype72;
}
if (var70){
if (varonce73) {
var74 = varonce73;
} else {
var75 = "String";
var76 = 6;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var74) /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/;
var_cla79 = var78;
var80 = NULL;
if (var_cla79 == NULL) {
var81 = 0; /* is null */
} else {
var81 = 1; /* arg is null and recv is not */
}
if (var81){
var82 = ((val* (*)(val*))(var_cla79->class->vft[COLOR_model__MClass__mclass_type]))(var_cla79) /* mclass_type on <var_cla79:nullable MClass(MClass)>*/;
var_mtype = var82;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype84 = type_parser_nodes__AStringFormExpr.color;
idtype85 = type_parser_nodes__AStringFormExpr.id;
if(cltype84 >= var_nexpr->type->table_size) {
var83 = 0;
} else {
var83 = var_nexpr->type->type_table[cltype84] == idtype85;
}
if (var83){
if (varonce86) {
var87 = varonce86;
} else {
var88 = "String";
var89 = 6;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(var_modelbuilder, var_nexpr, var_mmodule, var87) /* try_get_mclass_by_name on <var_modelbuilder:ModelBuilder>*/;
var_cla92 = var91;
var93 = NULL;
if (var_cla92 == NULL) {
var94 = 0; /* is null */
} else {
var94 = 1; /* arg is null and recv is not */
}
if (var94){
var95 = ((val* (*)(val*))(var_cla92->class->vft[COLOR_model__MClass__mclass_type]))(var_cla92) /* mclass_type on <var_cla92:nullable MClass(MClass)>*/;
var_mtype = var95;
} else {
}
} else {
if (varonce96) {
var97 = varonce96;
} else {
var98 = "Error: Untyped attribute ";
var99 = 25;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = ". Implicit typing allowed only for literals and new.";
var104 = 52;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
var106 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var106 = array_instance Array[Object] */
var107 = 3;
var108 = NEW_array__NativeArray(var107, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var108)->values[0] = (val*) var97;
((struct instance_array__NativeArray*)var108)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var108)->values[2] = (val*) var102;
((void (*)(val*, val*, long))(var106->class->vft[COLOR_array__Array__with_native]))(var106, var108, var107) /* with_native on <var106:Array[Object]>*/;
}
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_string__Object__to_s]))(var106) /* to_s on <var106:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var109) /* error on <var_modelbuilder:ModelBuilder>*/;
}
}
}
}
}
}
}
} else {
if (varonce110) {
var111 = varonce110;
} else {
var112 = "Error: Untyped attribute ";
var113 = 25;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 2;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var111;
((struct instance_array__NativeArray*)var117)->values[1] = (val*) var_mpropdef;
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
}
var118 = ((val* (*)(val*))(var115->class->vft[COLOR_string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var118) /* error on <var_modelbuilder:ModelBuilder>*/;
}
} else {
var119 = NULL;
if (var_ntype == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (!var120) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 707);
show_backtrace(1);
}
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype122 = type_parser_nodes__ANewExpr.color;
idtype123 = type_parser_nodes__ANewExpr.id;
if(var_nexpr == NULL) {
var121 = 0;
} else {
if(cltype122 >= var_nexpr->type->table_size) {
var121 = 0;
} else {
var121 = var_nexpr->type->type_table[cltype122] == idtype123;
}
}
if (var121){
var124 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_parser_nodes__ANewExpr__n_type]))(var_nexpr) /* n_type on <var_nexpr:nullable AExpr(ANewExpr)>*/;
var125 = ((val* (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_nclassdef, var124) /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/;
var_xmtype = var125;
if (var_xmtype == NULL) {
var127 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
var127 = ((short int (*)(val*, val*))(var_xmtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_xmtype, var_mtype) /* == on <var_xmtype:nullable MType>*/;
}
var_ = var127;
if (var127){
var128 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var_modelbuilder) /* toolcontext on <var_modelbuilder:ModelBuilder>*/;
var129 = ((val* (*)(val*))(var128->class->vft[COLOR_toolcontext__ToolContext__opt_warn]))(var128) /* opt_warn on <var128:ToolContext>*/;
var130 = ((val* (*)(val*))(var129->class->vft[COLOR_opts__Option__value]))(var129) /* value on <var129:OptionCount>*/;
var131 = 2;
{ /* Inline kernel#Int#>= (var130,var131) */
/* Covariant cast for argument 0 (i) <var131:Int> isa OTHER */
/* <var131:Int> isa OTHER */
var134 = 1; /* easy <var131:Int> isa OTHER*/
if (!var134) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var137 = ((struct instance_kernel__Int*)var130)->value; /* autounbox from nullable Object to Int */;
var138 = var137 >= var131;
var132 = var138;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var126 = var132;
} else {
var126 = var_;
}
if (var126){
if (varonce139) {
var140 = varonce139;
} else {
var141 = "Warning: useless type definition";
var142 = 32;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(var_modelbuilder, var_ntype, var140) /* warning on <var_modelbuilder:ModelBuilder>*/;
} else {
}
} else {
}
}
var144 = NULL;
if (var_mtype == NULL) {
var145 = 1; /* is null */
} else {
var145 = 0; /* arg is null but recv is not */
}
if (var145){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_mpropdef->class->vft[COLOR_model__MAttributeDef__static_mtype_61d]))(var_mpropdef, var_mtype) /* static_mtype= on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/;
var146 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mreadpropdef]))(self) /* mreadpropdef on <self:AAttrPropdef>*/;
var_mreadpropdef = var146;
var147 = NULL;
if (var_mreadpropdef == NULL) {
var148 = 0; /* is null */
} else {
var148 = 1; /* arg is null and recv is not */
}
if (var148){
var149 = NEW_model__MSignature(&type_model__MSignature);
var150 = NEW_array__Array(&type_array__Arraymodel__MParameter);
((void (*)(val*))(var150->class->vft[COLOR_array__Array__init]))(var150) /* init on <var150:Array[MParameter]>*/;
((void (*)(val*, val*, val*))(var149->class->vft[COLOR_model__MSignature__init]))(var149, var150, var_mtype) /* init on <var149:MSignature>*/;
var_msignature = var149;
((void (*)(val*, val*))(var_mreadpropdef->class->vft[COLOR_model__MMethodDef__msignature_61d]))(var_mreadpropdef, var_msignature) /* msignature= on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/;
} else {
}
var151 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mwritepropdef]))(self) /* mwritepropdef on <self:AAttrPropdef>*/;
var_msritepropdef = var151;
var152 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mwritepropdef]))(self) /* mwritepropdef on <self:AAttrPropdef>*/;
var153 = NULL;
if (var152 == NULL) {
var154 = 0; /* is null */
} else {
var154 = 1; /* arg is null and recv is not */
}
if (var154){
var155 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
var156 = NULL;
if (var155 == NULL) {
var157 = 0; /* is null */
} else {
var157 = 1; /* arg is null and recv is not */
}
if (var157){
var158 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
if (var158 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 730);
show_backtrace(1);
} else {
var159 = ((val* (*)(val*))(var158->class->vft[COLOR_parser_nodes__Token__text]))(var158) /* text on <var158:nullable TAttrid>*/;
}
var160 = 1;
var161 = ((val* (*)(val*, long))(var159->class->vft[COLOR_string__AbstractString__substring_from]))(var159, var160) /* substring_from on <var159:String>*/;
var_name = var161;
} else {
var162 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id2]))(self) /* n_id2 on <self:AAttrPropdef>*/;
if (var162 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 732);
show_backtrace(1);
} else {
var163 = ((val* (*)(val*))(var162->class->vft[COLOR_parser_nodes__Token__text]))(var162) /* text on <var162:nullable TId>*/;
}
var_name = var163;
}
var164 = NEW_model__MParameter(&type_model__MParameter);
var165 = 0;
((void (*)(val*, val*, val*, short int))(var164->class->vft[COLOR_model__MParameter__init]))(var164, var_name, var_mtype, var165) /* init on <var164:MParameter>*/;
var_mparameter = var164;
var166 = NEW_model__MSignature(&type_model__MSignature);
var167 = NEW_array__Array(&type_array__Arraymodel__MParameter);
var168 = 1;
((void (*)(val*, long))(var167->class->vft[COLOR_array__Array__with_capacity]))(var167, var168) /* with_capacity on <var167:Array[MParameter]>*/;
var_169 = var167;
((void (*)(val*, val*))(var_169->class->vft[COLOR_abstract_collection__Sequence__push]))(var_169, var_mparameter) /* push on <var_169:Array[MParameter]>*/;
var170 = NULL;
((void (*)(val*, val*, val*))(var166->class->vft[COLOR_model__MSignature__init]))(var166, var_169, var170) /* init on <var166:MSignature>*/;
var_msignature171 = var166;
var172 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mwritepropdef]))(self) /* mwritepropdef on <self:AAttrPropdef>*/;
if (var172 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 736);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var172->class->vft[COLOR_model__MMethodDef__msignature_61d]))(var172, var_msignature171) /* msignature= on <var172:nullable MMethodDef>*/;
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_signature for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__AAttrPropdef__build_signature(val* self, val* p0, val* p1) {
modelize_property__AAttrPropdef__build_signature(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_signature for (self: AAttrPropdef, ModelBuilder, AClassdef) */
void modelize_property__AAttrPropdef__check_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var4 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var6 /* : nullable MPropDef */;
val* var7 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MProperty */;
val* var13 /* : MPropDef */;
val* var14 /* : nullable MType */;
val* var_precursor_type /* var precursor_type: nullable MType */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : nullable MMethodDef */;
val* var_meth /* var meth: nullable MMethodDef */;
val* var37 /* : null */;
short int var38 /* : Bool */;
val* var39 /* : nullable MMethodDef */;
val* var40 /* : null */;
short int var41 /* : Bool */;
var_modelbuilder = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
var_mpropdef = var;
var1 = NULL;
if (var_mpropdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__mmodule]))(var3) /* mmodule on <var3:MClassDef>*/;
var_mmodule = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_type]))(self) /* n_type on <self:AAttrPropdef>*/;
var_ntype = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 746);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var6) /* static_mtype on <var6:nullable MPropDef(nullable MAttributeDef)>*/;
}
var_mtype = var7;
var8 = NULL;
if (var_mtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (var9){
goto RET_LABEL;
} else {
}
var10 = ((short int (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__is_intro]))(var_mpropdef) /* is_intro on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/;
var11 = !var10;
if (var11){
var12 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MProperty__intro]))(var12) /* intro on <var12:MProperty(MAttribute)>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var13) /* static_mtype on <var13:MPropDef(MAttributeDef)>*/;
var_precursor_type = var14;
var15 = NULL;
if (var_precursor_type == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (var16){
goto RET_LABEL;
} else {
}
var17 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___33d_61d]))(var_mtype, var_precursor_type) /* != on <var_mtype:nullable MType(MType)>*/;
if (var17){
if (var_ntype == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 756);
show_backtrace(1);
}
if (varonce) {
var18 = varonce;
} else {
var19 = "Redef Error: Wrong static type. found ";
var20 = 38;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ", expected ";
var25 = 11;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ".";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_precursor_type;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_ntype, var35) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
} else {
}
var36 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mreadpropdef]))(self) /* mreadpropdef on <self:AAttrPropdef>*/;
var_meth = var36;
var37 = NULL;
if (var_meth == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__check_method_signature]))(self, var_modelbuilder, var_nclassdef, var_meth) /* check_method_signature on <self:AAttrPropdef>*/;
} else {
}
var39 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__mwritepropdef]))(self) /* mwritepropdef on <self:AAttrPropdef>*/;
var_meth = var39;
var40 = NULL;
if (var_meth == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (var41){
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__AAttrPropdef__check_method_signature]))(self, var_modelbuilder, var_nclassdef, var_meth) /* check_method_signature on <self:AAttrPropdef>*/;
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_signature for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__AAttrPropdef__check_signature(val* self, val* p0, val* p1) {
modelize_property__AAttrPropdef__check_signature(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_method_signature for (self: AAttrPropdef, ModelBuilder, AClassdef, MMethodDef) */
void modelize_property__AAttrPropdef__check_method_signature(val* self, val* p0, val* p1, val* p2) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClassDef */;
val* var1 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var2 /* : nullable AType */;
val* var_nsig /* var nsig: nullable AType */;
val* var3 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MProperty */;
val* var9 /* : MPropDef */;
val* var10 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var11 /* : null */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
long var25 /* : Int */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
long var31 /* : Int */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : Object */;
val* var41 /* : Object */;
val* var42 /* : String */;
val* var43 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var44 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var45 /* : Bool */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var_ /* var : Bool */;
val* var48 /* : null */;
short int var49 /* : Bool */;
val* var50 /* : null */;
short int var51 /* : Bool */;
val* var_node52 /* var node: ANode */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : MProperty */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
long var68 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var73 /* : Bool */;
val* var74 /* : Range[Int] */;
long var75 /* : Int */;
long var76 /* : Int */;
val* var77 /* : Discrete */;
val* var78 /* : Discrete */;
val* var79 /* : Iterator[nullable Object] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
long var_i /* var i: Int */;
long var82 /* : Int */;
val* var83 /* : Array[MParameter] */;
val* var84 /* : nullable Object */;
val* var85 /* : MType */;
val* var_myt /* var myt: MType */;
val* var86 /* : Array[MParameter] */;
val* var87 /* : nullable Object */;
val* var88 /* : MType */;
val* var_prt /* var prt: MType */;
short int var89 /* : Bool */;
val* var90 /* : nullable MClassDef */;
val* var91 /* : MClassType */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var_94 /* var : Bool */;
val* var95 /* : nullable MClassDef */;
val* var96 /* : MClassType */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : null */;
short int var100 /* : Bool */;
val* var_node101 /* var node: ANode */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : Array[MParameter] */;
val* var108 /* : nullable Object */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : String */;
val* var125 /* : Array[Object] */;
long var126 /* : Int */;
val* var127 /* : NativeArray[Object] */;
val* var128 /* : String */;
val* var129 /* : null */;
short int var130 /* : Bool */;
val* var131 /* : null */;
short int var132 /* : Bool */;
val* var133 /* : nullable MClassDef */;
val* var134 /* : MClassType */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
val* var137 /* : null */;
short int var138 /* : Bool */;
val* var_node139 /* var node: ANode */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
long var148 /* : Int */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : String */;
val* var155 /* : Array[Object] */;
long var156 /* : Int */;
val* var157 /* : NativeArray[Object] */;
val* var158 /* : String */;
var_modelbuilder = p0;
var_nclassdef = p1;
var_mpropdef = p2;
var = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:MMethodDef>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClassDef__mmodule]))(var) /* mmodule on <var:MClassDef>*/;
var_mmodule = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_type]))(self) /* n_type on <self:AAttrPropdef>*/;
var_nsig = var2;
var3 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
var_mysignature = var3;
var4 = NULL;
if (var_mysignature == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (var5){
goto RET_LABEL;
} else {
}
var6 = ((short int (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__is_intro]))(var_mpropdef) /* is_intro on <var_mpropdef:MMethodDef>*/;
var7 = !var6;
if (var7){
var8 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MProperty__intro]))(var8) /* intro on <var8:MProperty(MMethod)>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MMethodDef__msignature]))(var9) /* msignature on <var9:MPropDef(MMethodDef)>*/;
var_msignature = var10;
var11 = NULL;
if (var_msignature == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (var12){
goto RET_LABEL;
} else {
}
var13 = ((long (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__arity]))(var_mysignature) /* arity on <var_mysignature:nullable MSignature(MSignature)>*/;
var14 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:nullable MSignature(MSignature)>*/;
{ /* Inline kernel#Int#!= (var13,var14) */
var17 = var13 == var14;
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (var15){
var19 = NULL;
if (var_nsig == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
var_node = var_nsig;
} else {
var_node = self;
}
if (varonce) {
var21 = varonce;
} else {
var22 = "Redef Error: ";
var23 = 13;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
var25 = ((long (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__arity]))(var_mysignature) /* arity on <var_mysignature:nullable MSignature(MSignature)>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = " parameters found, ";
var29 = 19;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:nullable MSignature(MSignature)>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = " expected. Signature is ";
var35 = 24;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 7;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var21;
var40 = BOX_kernel__Int(var25); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var40;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var27;
var41 = BOX_kernel__Int(var31); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var41;
((struct instance_array__NativeArray*)var39)->values[4] = (val*) var33;
((struct instance_array__NativeArray*)var39)->values[5] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var39)->values[6] = (val*) var_msignature;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
var42 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_node, var42) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var43 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:nullable MSignature(MSignature)>*/;
var_precursor_ret_type = var43;
var44 = ((val* (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_mysignature) /* return_mtype on <var_mysignature:nullable MSignature(MSignature)>*/;
var_ret_type = var44;
var46 = NULL;
if (var_ret_type == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
var_ = var47;
if (var47){
var48 = NULL;
if (var_precursor_ret_type == NULL) {
var49 = 1; /* is null */
} else {
var49 = 0; /* arg is null but recv is not */
}
var45 = var49;
} else {
var45 = var_;
}
if (var45){
var50 = NULL;
if (var_nsig == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (var51){
var_node52 = var_nsig;
} else {
var_node52 = self;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "Redef Error: ";
var56 = 13;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = " is a procedure, not a function.";
var62 = 32;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 3;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var58;
((struct instance_array__NativeArray*)var66)->values[2] = (val*) var60;
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
var67 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_node52, var67) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var68 = ((long (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__arity]))(var_mysignature) /* arity on <var_mysignature:nullable MSignature(MSignature)>*/;
var69 = 0;
{ /* Inline kernel#Int#> (var68,var69) */
/* Covariant cast for argument 0 (i) <var69:Int> isa OTHER */
/* <var69:Int> isa OTHER */
var72 = 1; /* easy <var69:Int> isa OTHER*/
if (!var72) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var73 = var68 > var69;
var70 = var73;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
if (var70){
var74 = NEW_range__Range(&type_range__Rangekernel__Int);
var75 = 0;
var76 = ((long (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__arity]))(var_mysignature) /* arity on <var_mysignature:nullable MSignature(MSignature)>*/;
var77 = BOX_kernel__Int(var75); /* autobox from Int to Discrete */
var78 = BOX_kernel__Int(var76); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var74->class->vft[COLOR_range__Range__without_last]))(var74, var77, var78) /* without_last on <var74:Range[Int]>*/;
var79 = ((val* (*)(val*))(var74->class->vft[COLOR_abstract_collection__Collection__iterator]))(var74) /* iterator on <var74:Range[Int]>*/;
for(;;) {
var80 = ((short int (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var79) /* is_ok on <var79:Iterator[nullable Object]>*/;
if(!var80) break;
var81 = ((val* (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__item]))(var79) /* item on <var79:Iterator[nullable Object]>*/;
var82 = ((struct instance_kernel__Int*)var81)->value; /* autounbox from nullable Object to Int */;
var_i = var82;
var83 = ((val* (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__mparameters]))(var_mysignature) /* mparameters on <var_mysignature:nullable MSignature(MSignature)>*/;
var84 = ((val* (*)(val*, long))(var83->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var83, var_i) /* [] on <var83:Array[MParameter]>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_model__MParameter__mtype]))(var84) /* mtype on <var84:nullable Object(MParameter)>*/;
var_myt = var85;
var86 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:nullable MSignature(MSignature)>*/;
var87 = ((val* (*)(val*, long))(var86->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var86, var_i) /* [] on <var86:Array[MParameter]>*/;
var88 = ((val* (*)(val*))(var87->class->vft[COLOR_model__MParameter__mtype]))(var87) /* mtype on <var87:nullable Object(MParameter)>*/;
var_prt = var88;
var90 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var90 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 801);
show_backtrace(1);
} else {
var91 = ((val* (*)(val*))(var90->class->vft[COLOR_model__MClassDef__bound_mtype]))(var90) /* bound_mtype on <var90:nullable MClassDef>*/;
}
var92 = ((short int (*)(val*, val*, val*, val*))(var_myt->class->vft[COLOR_model__MType__is_subtype]))(var_myt, var_mmodule, var91, var_prt) /* is_subtype on <var_myt:MType>*/;
var93 = !var92;
var_94 = var93;
if (var93){
var95 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var95 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 802);
show_backtrace(1);
} else {
var96 = ((val* (*)(val*))(var95->class->vft[COLOR_model__MClassDef__bound_mtype]))(var95) /* bound_mtype on <var95:nullable MClassDef>*/;
}
var97 = ((short int (*)(val*, val*, val*, val*))(var_prt->class->vft[COLOR_model__MType__is_subtype]))(var_prt, var_mmodule, var96, var_myt) /* is_subtype on <var_prt:MType>*/;
var98 = !var97;
var89 = var98;
} else {
var89 = var_94;
}
if (var89){
var99 = NULL;
if (var_nsig == NULL) {
var100 = 0; /* is null */
} else {
var100 = 1; /* arg is null and recv is not */
}
if (var100){
var_node101 = var_nsig;
} else {
var_node101 = self;
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = "Redef Error: Wrong type for parameter `";
var105 = 39;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = ((val* (*)(val*))(var_mysignature->class->vft[COLOR_model__MSignature__mparameters]))(var_mysignature) /* mparameters on <var_mysignature:nullable MSignature(MSignature)>*/;
var108 = ((val* (*)(val*, long))(var107->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var107, var_i) /* [] on <var107:Array[MParameter]>*/;
var109 = ((val* (*)(val*))(var108->class->vft[COLOR_model__MParameter__name]))(var108) /* name on <var108:nullable Object(MParameter)>*/;
if (varonce110) {
var111 = varonce110;
} else {
var112 = "\'. found ";
var113 = 9;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = ", expected ";
var118 = 11;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = ".";
var123 = 1;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 7;
var127 = NEW_array__NativeArray(var126, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var127)->values[0] = (val*) var103;
((struct instance_array__NativeArray*)var127)->values[1] = (val*) var109;
((struct instance_array__NativeArray*)var127)->values[2] = (val*) var111;
((struct instance_array__NativeArray*)var127)->values[3] = (val*) var_myt;
((struct instance_array__NativeArray*)var127)->values[4] = (val*) var116;
((struct instance_array__NativeArray*)var127)->values[5] = (val*) var_prt;
((struct instance_array__NativeArray*)var127)->values[6] = (val*) var121;
((void (*)(val*, val*, long))(var125->class->vft[COLOR_array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_node101, var128) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__next]))(var79) /* next on <var79:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
var129 = NULL;
if (var_precursor_ret_type == NULL) {
var130 = 0; /* is null */
} else {
var130 = 1; /* arg is null and recv is not */
}
if (var130){
var131 = NULL;
if (var_ret_type == NULL) {
var132 = 1; /* is null */
} else {
var132 = 0; /* arg is null but recv is not */
}
if (var132){
var_ret_type = var_precursor_ret_type;
} else {
var133 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var133 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 813);
show_backtrace(1);
} else {
var134 = ((val* (*)(val*))(var133->class->vft[COLOR_model__MClassDef__bound_mtype]))(var133) /* bound_mtype on <var133:nullable MClassDef>*/;
}
var135 = ((short int (*)(val*, val*, val*, val*))(var_ret_type->class->vft[COLOR_model__MType__is_subtype]))(var_ret_type, var_mmodule, var134, var_precursor_ret_type) /* is_subtype on <var_ret_type:nullable MType(MType)>*/;
var136 = !var135;
if (var136){
var137 = NULL;
if (var_nsig == NULL) {
var138 = 0; /* is null */
} else {
var138 = 1; /* arg is null and recv is not */
}
if (var138){
var_node139 = var_nsig;
} else {
var_node139 = self;
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = "Redef Error: Wrong return type. found ";
var143 = 38;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
if (varonce145) {
var146 = varonce145;
} else {
var147 = ", expected ";
var148 = 11;
var149 = string__NativeString__to_s_with_length(var147, var148);
var146 = var149;
varonce145 = var146;
}
if (varonce150) {
var151 = varonce150;
} else {
var152 = ".";
var153 = 1;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
var155 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var155 = array_instance Array[Object] */
var156 = 5;
var157 = NEW_array__NativeArray(var156, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var157)->values[0] = (val*) var141;
((struct instance_array__NativeArray*)var157)->values[1] = (val*) var_ret_type;
((struct instance_array__NativeArray*)var157)->values[2] = (val*) var146;
((struct instance_array__NativeArray*)var157)->values[3] = (val*) var_precursor_ret_type;
((struct instance_array__NativeArray*)var157)->values[4] = (val*) var151;
((void (*)(val*, val*, long))(var155->class->vft[COLOR_array__Array__with_native]))(var155, var157, var156) /* with_native on <var155:Array[Object]>*/;
}
var158 = ((val* (*)(val*))(var155->class->vft[COLOR_string__Object__to_s]))(var155) /* to_s on <var155:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_node139, var158) /* error on <var_modelbuilder:ModelBuilder>*/;
} else {
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_method_signature for (self: Object, ModelBuilder, AClassdef, MMethodDef) */
void VIRTUAL_modelize_property__AAttrPropdef__check_method_signature(val* self, val* p0, val* p1, val* p2) {
modelize_property__AAttrPropdef__check_method_signature(self, p0, p1, p2);
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_property for (self: ATypePropdef, ModelBuilder, AClassdef) */
void modelize_property__ATypePropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : TClassid */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : TClassid */;
val* var4 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : AVisibility */;
val* var8 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var9 /* : MVirtualTypeProp */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
char var_c /* var c: Char */;
char var13 /* : Char */;
short int var14 /* : Bool */;
char var15 /* : Char */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
char var20 /* : Char */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : TClassid */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
val* var37 /* : nullable TKwredef */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable TKwredef */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : AVisibility */;
val* var49 /* : Map[MProperty, APropdef] */;
val* var50 /* : MVirtualTypeDef */;
val* var51 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const struct type* type_struct;
const char* var_class_name55;
var_modelbuilder = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 828);
show_backtrace(1);
}
var_mclassdef = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ATypePropdef__n_id]))(self) /* n_id on <self:ATypePropdef>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:TClassid>*/;
var_name = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ATypePropdef__n_id]))(self) /* n_id on <self:ATypePropdef>*/;
var4 = ((val* (*)(val*, val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name]))(var_modelbuilder, var3, var_mclassdef, var_name) /* try_get_mproperty_by_name on <var_modelbuilder:ModelBuilder>*/;
var_mprop = var4;
var5 = NULL;
if (var_mprop == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ATypePropdef__n_visibility]))(self) /* n_visibility on <self:ATypePropdef>*/;
var8 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__new_property_visibility]))(self, var_modelbuilder, var_nclassdef, var7) /* new_property_visibility on <self:ATypePropdef>*/;
var_mvisibility = var8;
var9 = NEW_model__MVirtualTypeProp(&type_model__MVirtualTypeProp);
((void (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_model__MVirtualTypeProp__init]))(var9, var_mclassdef, var_name, var_mvisibility) /* init on <var9:MVirtualTypeProp>*/;
var_mprop = var9;
var10 = ((val* (*)(val*))(var_name->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_name) /* iterator on <var_name:String>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var13 = ((struct instance_kernel__Char*)var12)->value; /* autounbox from nullable Object to Char */;
var_c = var13;
var15 = 'a';
{ /* Inline kernel#Char#>= (var_c,var15) */
/* Covariant cast for argument 0 (i) <var15:Char> isa OTHER */
/* <var15:Char> isa OTHER */
var18 = 1; /* easy <var15:Char> isa OTHER*/
if (!var18) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 438);
show_backtrace(1);
}
var19 = var_c >= var15;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var_ = var16;
if (var16){
var20 = 'z';
{ /* Inline kernel#Char#<= (var_c,var20) */
/* Covariant cast for argument 0 (i) <var20:Char> isa OTHER */
/* <var20:Char> isa OTHER */
var23 = 1; /* easy <var20:Char> isa OTHER*/
if (!var23) {
var_class_name26 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 436);
show_backtrace(1);
}
var27 = var_c <= var20;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var14 = var21;
} else {
var14 = var_;
}
if (var14){
var28 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ATypePropdef__n_id]))(self) /* n_id on <self:ATypePropdef>*/;
if (varonce) {
var29 = varonce;
} else {
var30 = "Warning: lowercase in the virtual type ";
var31 = 39;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 2;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var_name;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(var_modelbuilder, var28, var36) /* warning on <var_modelbuilder:ModelBuilder>*/;
goto BREAK_label;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var37 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ATypePropdef__n_kwredef]))(self) /* n_kwredef on <self:ATypePropdef>*/;
var38 = 0;
var39 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var37, var38, var_mprop) /* check_redef_keyword on <self:ATypePropdef>*/;
var40 = !var39;
if (var40){
goto RET_LABEL;
} else {
}
} else {
var41 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ATypePropdef__n_kwredef]))(self) /* n_kwredef on <self:ATypePropdef>*/;
var42 = 1;
var43 = ((short int (*)(val*, val*, val*, val*, short int, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_keyword]))(self, var_modelbuilder, var_nclassdef, var41, var42, var_mprop) /* check_redef_keyword on <self:ATypePropdef>*/;
var44 = !var43;
if (var44){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype46 = type_model__MVirtualTypeProp.color;
idtype47 = type_model__MVirtualTypeProp.id;
if(cltype46 >= var_mprop->type->table_size) {
var45 = 0;
} else {
var45 = var_mprop->type->type_table[cltype46] == idtype47;
}
if (!var45) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 841);
show_backtrace(1);
}
var48 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ATypePropdef__n_visibility]))(self) /* n_visibility on <self:ATypePropdef>*/;
((void (*)(val*, val*, val*, val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__check_redef_property_visibility]))(self, var_modelbuilder, var_nclassdef, var48, var_mprop) /* check_redef_property_visibility on <self:ATypePropdef>*/;
}
var49 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_property__AClassdef__mprop2npropdef]))(var_nclassdef) /* mprop2npropdef on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*, val*))(var49->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var49, var_mprop, self) /* []= on <var49:Map[MProperty, APropdef]>*/;
var50 = NEW_model__MVirtualTypeDef(&type_model__MVirtualTypeDef);
var51 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:ATypePropdef>*/;
((void (*)(val*, val*, val*, val*))(var50->class->vft[COLOR_model__MVirtualTypeDef__init]))(var50, var_mclassdef, var_mprop, var51) /* init on <var50:MVirtualTypeDef>*/;
var_mpropdef = var50;
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_parser_nodes__APropdef_VTMPROPDEF];
cltype53 = type_struct->color;
idtype54 = type_struct->id;
if(cltype53 >= var_mpropdef->type->table_size) {
var52 = 0;
} else {
var52 = var_mpropdef->type->type_table[cltype53] == idtype54;
}
if (!var52) {
var_class_name55 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name55);
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 847);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef_61d]))(self, var_mpropdef) /* mpropdef= on <self:ATypePropdef>*/;
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_property for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__ATypePropdef__build_property(val* self, val* p0, val* p1) {
modelize_property__ATypePropdef__build_property(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_signature for (self: ATypePropdef, ModelBuilder, AClassdef) */
void modelize_property__ATypePropdef__build_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var4 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : null */;
val* var_mtype /* var mtype: nullable MType */;
val* var6 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var7 /* : nullable MType */;
val* var8 /* : null */;
short int var9 /* : Bool */;
var_modelbuilder = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:ATypePropdef>*/;
var_mpropdef = var;
var1 = NULL;
if (var_mpropdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mpropdef) /* mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__mmodule]))(var3) /* mmodule on <var3:MClassDef>*/;
var_mmodule = var4;
var5 = NULL;
var_mtype = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ATypePropdef__n_type]))(self) /* n_type on <self:ATypePropdef>*/;
var_ntype = var6;
var7 = ((val* (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var_modelbuilder, var_nclassdef, var_ntype) /* resolve_mtype on <var_modelbuilder:ModelBuilder>*/;
var_mtype = var7;
var8 = NULL;
if (var_mtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (var9){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_mpropdef->class->vft[COLOR_model__MVirtualTypeDef__bound_61d]))(var_mpropdef, var_mtype) /* bound= on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)>*/;
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_signature for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__ATypePropdef__build_signature(val* self, val* p0, val* p1) {
modelize_property__ATypePropdef__build_signature(self, p0, p1);
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: ATypePropdef, ModelBuilder, AClassdef) */
void modelize_property__ATypePropdef__check_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
val* var4 /* : nullable MClassDef */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : nullable MClassDef */;
val* var7 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var8 /* : Array[MVirtualType] */;
long var9 /* : Int */;
val* var_ /* var : Array[MVirtualType] */;
val* var10 /* : nullable MPropDef */;
val* var11 /* : MProperty */;
val* var12 /* : MVirtualType */;
val* var_seen /* var seen: Array[MVirtualType] */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
val* var28 /* : MType */;
val* var_next /* var next: MType */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
short int var32 /* : Bool */;
var_modelbuilder = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:ATypePropdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 867);
show_backtrace(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MVirtualTypeDef__bound]))(var) /* bound on <var:nullable MPropDef(nullable MVirtualTypeDef)>*/;
}
var_bound = var1;
/* <var_bound:nullable MType> isa MVirtualType */
cltype = type_model__MVirtualType.color;
idtype = type_model__MVirtualType.id;
if(var_bound == NULL) {
var2 = 0;
} else {
if(cltype >= var_bound->type->table_size) {
var2 = 0;
} else {
var2 = var_bound->type->type_table[cltype] == idtype;
}
}
var3 = !var2;
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 872);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MClassDef__mmodule]))(var4) /* mmodule on <var4:nullable MClassDef>*/;
}
var_mmodule = var5;
var6 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 873);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_model__MClassDef__bound_mtype]))(var6) /* bound_mtype on <var6:nullable MClassDef>*/;
}
var_anchor = var7;
var8 = NEW_array__Array(&type_array__Arraymodel__MVirtualType);
var9 = 1;
((void (*)(val*, long))(var8->class->vft[COLOR_array__Array__with_capacity]))(var8, var9) /* with_capacity on <var8:Array[MVirtualType]>*/;
var_ = var8;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:ATypePropdef>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_property.nit", 876);
show_backtrace(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MPropDef__mproperty]))(var10) /* mproperty on <var10:nullable MPropDef(nullable MVirtualTypeDef)>*/;
}
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MVirtualTypeProp__mvirtualtype]))(var11) /* mvirtualtype on <var11:MProperty(MVirtualTypeProp)>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var12) /* push on <var_:Array[MVirtualType]>*/;
var_seen = var_;
for(;;) {
var13 = ((short int (*)(val*, val*))(var_seen->class->vft[COLOR_abstract_collection__Collection__has]))(var_seen, var_bound) /* has on <var_seen:Array[MVirtualType]>*/;
if (var13){
((void (*)(val*, val*))(var_seen->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_seen, var_bound) /* add on <var_seen:Array[MVirtualType]>*/;
if (varonce) {
var14 = varonce;
} else {
var15 = "Error: circularity of virtual type definition: ";
var16 = 47;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = " -> ";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*, val*))(var_seen->class->vft[COLOR_string__Collection__join]))(var_seen, var19) /* join on <var_seen:Array[MVirtualType]>*/;
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 2;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var23;
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, self, var27) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_seen->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_seen, var_bound) /* add on <var_seen:Array[MVirtualType]>*/;
var28 = ((val* (*)(val*, val*, val*))(var_bound->class->vft[COLOR_model__MVirtualType__lookup_bound]))(var_bound, var_mmodule, var_anchor) /* lookup_bound on <var_bound:nullable MType(MVirtualType)>*/;
var_next = var28;
/* <var_next:MType> isa MVirtualType */
cltype30 = type_model__MVirtualType.color;
idtype31 = type_model__MVirtualType.id;
if(cltype30 >= var_next->type->table_size) {
var29 = 0;
} else {
var29 = var_next->type->type_table[cltype30] == idtype31;
}
var32 = !var29;
if (var32){
goto RET_LABEL;
} else {
}
var_bound = var_next;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: Object, ModelBuilder, AClassdef) */
void VIRTUAL_modelize_property__ATypePropdef__check_signature(val* self, val* p0, val* p1) {
modelize_property__ATypePropdef__check_signature(self, p0, p1);
RET_LABEL:;
}
