#include "separate_compiler.sep.0.h"
/* method separate_compiler#SeparateRuntimeFunction#compile_to_c for (self: SeparateRuntimeFunction, AbstractCompiler) */
void separate_compiler__SeparateRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var2 /* : MMethodDef */;
val* var3 /* : MClassDef */;
val* var4 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var5 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var6 /* : RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var11 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var12 /* : Frame */;
val* var_frame /* var frame: Frame */;
val* var13 /* : nullable MSignature */;
val* var14 /* : MClassDef */;
val* var15 /* : MClassType */;
val* var16 /* : MClassDef */;
val* var17 /* : MClassType */;
val* var18 /* : MClassDef */;
val* var19 /* : MModule */;
short int var20 /* : Bool */;
val* var21 /* : MType */;
val* var_msignature /* var msignature: MSignature */;
val* var22 /* : Buffer */;
val* var_sig /* var sig: Buffer */;
val* var23 /* : Buffer */;
val* var_comment /* var comment: Buffer */;
val* var24 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var25 /* : null */;
short int var26 /* : Bool */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : String */;
val* var37 /* : MProperty */;
short int var38 /* : Bool */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : MType */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
val* var67 /* : Array[Object] */;
long var68 /* : Int */;
val* var69 /* : NativeArray[Object] */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : MType */;
val* var82 /* : Array[Object] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[Object] */;
val* var85 /* : String */;
val* var86 /* : Range[Int] */;
long var87 /* : Int */;
long var88 /* : Int */;
val* var89 /* : Discrete */;
val* var90 /* : Discrete */;
val* var91 /* : Iterator[nullable Object] */;
short int var92 /* : Bool */;
val* var93 /* : nullable Object */;
long var_i /* var i: Int */;
long var94 /* : Int */;
val* var95 /* : Array[MParameter] */;
val* var96 /* : nullable Object */;
val* var97 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var98 /* : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : MClass */;
val* var108 /* : Array[MType] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[MType] */;
val* var111 /* : MClassType */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : String */;
val* var117 /* : Array[Object] */;
long var118 /* : Int */;
val* var119 /* : NativeArray[Object] */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : Object */;
val* var136 /* : String */;
val* var137 /* : RuntimeVariable */;
val* var138 /* : Array[Object] */;
long var139 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : String */;
val* var145 /* : nullable Object */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
val* var151 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : null */;
short int var163 /* : Bool */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : String */;
val* var169 /* : Array[Object] */;
long var170 /* : Int */;
val* var171 /* : NativeArray[Object] */;
val* var172 /* : String */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
val* var179 /* : Array[Object] */;
long var180 /* : Int */;
val* var181 /* : NativeArray[Object] */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : String */;
val* var198 /* : Array[Object] */;
long var199 /* : Int */;
val* var200 /* : NativeArray[Object] */;
val* var201 /* : String */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
long var205 /* : Int */;
val* var206 /* : String */;
val* var207 /* : Array[Object] */;
long var208 /* : Int */;
val* var209 /* : NativeArray[Object] */;
val* var210 /* : String */;
val* var211 /* : null */;
short int var212 /* : Bool */;
val* var213 /* : RuntimeVariable */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
long var217 /* : Int */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : nullable Object */;
val* var221 /* : MType */;
short int var222 /* : Bool */;
val* var223 /* : nullable RuntimeVariable */;
val* var224 /* : nullable String */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
long var228 /* : Int */;
val* var229 /* : String */;
val* var230 /* : Array[Object] */;
long var231 /* : Int */;
val* var232 /* : NativeArray[Object] */;
val* var233 /* : String */;
val* var234 /* : null */;
short int var235 /* : Bool */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : String */;
val* var241 /* : nullable RuntimeVariable */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : String */;
val* var247 /* : Array[Object] */;
long var248 /* : Int */;
val* var249 /* : NativeArray[Object] */;
val* var250 /* : String */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : String */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : String */;
long var262 /* : Int */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
val* var265 /* : HashMap[String, String] */;
val* var266 /* : String */;
val* var267 /* : MClassDef */;
val* var268 /* : MModule */;
val* var269 /* : String */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : String */;
val* var275 /* : MClassDef */;
val* var276 /* : MClass */;
val* var277 /* : String */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
long var281 /* : Int */;
val* var282 /* : String */;
val* var283 /* : MProperty */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
long var288 /* : Int */;
val* var289 /* : String */;
val* var290 /* : Location */;
val* var291 /* : nullable SourceFile */;
val* var292 /* : String */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : String */;
val* var298 /* : Location */;
long var299 /* : Int */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
long var303 /* : Int */;
val* var304 /* : String */;
val* var305 /* : Array[Object] */;
long var306 /* : Int */;
val* var307 /* : NativeArray[Object] */;
val* var308 /* : Object */;
val* var309 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTCOMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1619);
show_backtrace(1);
}
var_compiler = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:SeparateRuntimeFunction>*/;
var_mmethoddef = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:SeparateRuntimeFunction>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MPropDef__mclassdef]))(var2) /* mclassdef on <var2:MMethodDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__bound_mtype]))(var3) /* bound_mtype on <var3:MClassDef>*/;
var_recv = var4;
var5 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler) /* new_visitor on <var_compiler:AbstractCompiler>*/;
var_v = var5;
var6 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce) {
var7 = varonce;
} else {
var8 = "self";
var9 = 4;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
((void (*)(val*, val*, val*, val*))(var6->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var6, var7, var_recv, var_recv) /* init on <var6:RuntimeVariable>*/;
var_selfvar = var6;
var11 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[RuntimeVariable]>*/;
var_arguments = var11;
var12 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_abstract_compiler__Frame__init]))(var12, var_v, var_mmethoddef, var_recv, var_arguments) /* init on <var12:Frame>*/;
var_frame = var12;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
var13 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
var14 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_model__MClassDef__bound_mtype]))(var14) /* bound_mtype on <var14:MClassDef>*/;
var16 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_model__MClassDef__bound_mtype]))(var16) /* bound_mtype on <var16:MClassDef>*/;
var18 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_model__MClassDef__mmodule]))(var18) /* mmodule on <var18:MClassDef>*/;
var20 = 1;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1630);
show_backtrace(1);
} else {
var21 = ((val* (*)(val*, val*, val*, val*, short int))(var13->class->vft[COLOR_model__MType__resolve_for]))(var13, var15, var17, var19, var20) /* resolve_for on <var13:nullable MSignature>*/;
}
var_msignature = var21;
var22 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var22->class->vft[COLOR_string__Buffer__init]))(var22) /* init on <var22:Buffer>*/;
var_sig = var22;
var23 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var23->class->vft[COLOR_string__Buffer__init]))(var23) /* init on <var23:Buffer>*/;
var_comment = var23;
var24 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:MSignature>*/;
var_ret = var24;
var25 = NULL;
if (var_ret == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (var26){
var27 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = " ";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 2;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var29;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
}
var36 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var36) /* append on <var_sig:Buffer>*/;
} else {
var37 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var38 = ((short int (*)(val*))(var37->class->vft[COLOR_model__MMethod__is_new]))(var37) /* is_new on <var37:MProperty(MMethod)>*/;
if (var38){
var_ret = var_recv;
var39 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MClassType)>*/;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " ";
var43 = 1;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 2;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var39;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var41;
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var48) /* append on <var_sig:Buffer>*/;
} else {
if (varonce49) {
var50 = varonce49;
} else {
var51 = "void ";
var52 = 5;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var50) /* append on <var_sig:Buffer>*/;
}
}
var54 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:SeparateRuntimeFunction>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var54) /* append on <var_sig:Buffer>*/;
if (varonce55) {
var56 = varonce55;
} else {
var57 = "(";
var58 = 1;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = ((val* (*)(val*))(var_selfvar->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_selfvar) /* mtype on <var_selfvar:RuntimeVariable>*/;
var61 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_compiler__MType__ctype]))(var60) /* ctype on <var60:MType>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = " ";
var65 = 1;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var67 = array_instance Array[Object] */
var68 = 4;
var69 = NEW_array__NativeArray(var68, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var69)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var69)->values[1] = (val*) var61;
((struct instance_array__NativeArray*)var69)->values[2] = (val*) var63;
((struct instance_array__NativeArray*)var69)->values[3] = (val*) var_selfvar;
((void (*)(val*, val*, long))(var67->class->vft[COLOR_array__Array__with_native]))(var67, var69, var68) /* with_native on <var67:Array[Object]>*/;
}
var70 = ((val* (*)(val*))(var67->class->vft[COLOR_string__Object__to_s]))(var67) /* to_s on <var67:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var70) /* append on <var_sig:Buffer>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "(";
var74 = 1;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = ": ";
var79 = 2;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = ((val* (*)(val*))(var_selfvar->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_selfvar) /* mtype on <var_selfvar:RuntimeVariable>*/;
var82 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var82 = array_instance Array[Object] */
var83 = 4;
var84 = NEW_array__NativeArray(var83, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var84)->values[0] = (val*) var72;
((struct instance_array__NativeArray*)var84)->values[1] = (val*) var_selfvar;
((struct instance_array__NativeArray*)var84)->values[2] = (val*) var77;
((struct instance_array__NativeArray*)var84)->values[3] = (val*) var81;
((void (*)(val*, val*, long))(var82->class->vft[COLOR_array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[Object]>*/;
}
var85 = ((val* (*)(val*))(var82->class->vft[COLOR_string__Object__to_s]))(var82) /* to_s on <var82:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var85) /* append on <var_comment:Buffer>*/;
((void (*)(val*, val*))(var_arguments->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments, var_selfvar) /* add on <var_arguments:Array[RuntimeVariable]>*/;
var86 = NEW_range__Range(&type_range__Rangekernel__Int);
var87 = 0;
var88 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
var89 = BOX_kernel__Int(var87); /* autobox from Int to Discrete */
var90 = BOX_kernel__Int(var88); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var86->class->vft[COLOR_range__Range__without_last]))(var86, var89, var90) /* without_last on <var86:Range[Int]>*/;
var91 = ((val* (*)(val*))(var86->class->vft[COLOR_abstract_collection__Collection__iterator]))(var86) /* iterator on <var86:Range[Int]>*/;
for(;;) {
var92 = ((short int (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var91) /* is_ok on <var91:Iterator[nullable Object]>*/;
if(!var92) break;
var93 = ((val* (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__item]))(var91) /* item on <var91:Iterator[nullable Object]>*/;
var94 = ((struct instance_kernel__Int*)var93)->value; /* autounbox from nullable Object to Int */;
var_i = var94;
var95 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var96 = ((val* (*)(val*, long))(var95->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var95, var_i) /* [] on <var95:Array[MParameter]>*/;
var97 = ((val* (*)(val*))(var96->class->vft[COLOR_model__MParameter__mtype]))(var96) /* mtype on <var96:nullable Object(MParameter)>*/;
var_mtype = var97;
var98 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__vararg_rank]))(var_msignature) /* vararg_rank on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#== (var_i,var98) */
var101 = var_i == var98;
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
if (var99){
if (varonce102) {
var103 = varonce102;
} else {
var104 = "Array";
var105 = 5;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(var_v, var103) /* get_class on <var_v:AbstractCompilerVisitor>*/;
var108 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var108 = array_instance Array[MType] */
var109 = 1;
var110 = NEW_array__NativeArray(var109, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var110)->values[0] = (val*) var_mtype;
((void (*)(val*, val*, long))(var108->class->vft[COLOR_array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[MType]>*/;
}
var111 = ((val* (*)(val*, val*))(var107->class->vft[COLOR_model__MClass__get_mtype]))(var107, var108) /* get_mtype on <var107:MClass>*/;
var_mtype = var111;
} else {
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = ", ";
var115 = 2;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var117 = array_instance Array[Object] */
var118 = 2;
var119 = NEW_array__NativeArray(var118, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var119)->values[0] = (val*) var113;
((struct instance_array__NativeArray*)var119)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var117->class->vft[COLOR_array__Array__with_native]))(var117, var119, var118) /* with_native on <var117:Array[Object]>*/;
}
var120 = ((val* (*)(val*))(var117->class->vft[COLOR_string__Object__to_s]))(var117) /* to_s on <var117:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var120) /* append on <var_comment:Buffer>*/;
if (varonce121) {
var122 = varonce121;
} else {
var123 = ", ";
var124 = 2;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = " p";
var130 = 2;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
var132 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 4;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var122;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var126;
((struct instance_array__NativeArray*)var134)->values[2] = (val*) var128;
var135 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var134)->values[3] = (val*) var135;
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
var136 = ((val* (*)(val*))(var132->class->vft[COLOR_string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var136) /* append on <var_sig:Buffer>*/;
var137 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
var138 = NEW_array__Array(&type_array__Arraykernel__Object);
var139 = 3;
((void (*)(val*, long))(var138->class->vft[COLOR_array__Array__with_capacity]))(var138, var139) /* with_capacity on <var138:Array[Object]>*/;
var_ = var138;
if (varonce140) {
var141 = varonce140;
} else {
var142 = "p";
var143 = 1;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var141) /* add on <var_:Array[Object]>*/;
var145 = BOX_kernel__Int(var_i); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var145) /* add on <var_:Array[Object]>*/;
if (varonce146) {
var147 = varonce146;
} else {
var148 = "";
var149 = 0;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var147) /* add on <var_:Array[Object]>*/;
var151 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*, val*, val*))(var137->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var137, var151, var_mtype, var_mtype) /* init on <var137:RuntimeVariable>*/;
var_argvar = var137;
((void (*)(val*, val*))(var_arguments->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments, var_argvar) /* add on <var_arguments:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var91->class->vft[COLOR_abstract_collection__Iterator__next]))(var91) /* next on <var91:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce152) {
var153 = varonce152;
} else {
var154 = ")";
var155 = 1;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var153) /* append on <var_sig:Buffer>*/;
if (varonce157) {
var158 = varonce157;
} else {
var159 = ")";
var160 = 1;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var158) /* append on <var_comment:Buffer>*/;
var162 = NULL;
if (var_ret == NULL) {
var163 = 0; /* is null */
} else {
var163 = 1; /* arg is null and recv is not */
}
if (var163){
if (varonce164) {
var165 = varonce164;
} else {
var166 = ": ";
var167 = 2;
var168 = string__NativeString__to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
var169 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var169 = array_instance Array[Object] */
var170 = 2;
var171 = NEW_array__NativeArray(var170, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var171)->values[0] = (val*) var165;
((struct instance_array__NativeArray*)var171)->values[1] = (val*) var_ret;
((void (*)(val*, val*, long))(var169->class->vft[COLOR_array__Array__with_native]))(var169, var171, var170) /* with_native on <var169:Array[Object]>*/;
}
var172 = ((val* (*)(val*))(var169->class->vft[COLOR_string__Object__to_s]))(var169) /* to_s on <var169:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var172) /* append on <var_comment:Buffer>*/;
} else {
}
var173 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:SeparateRuntimeFunction>*/;
if (varonce174) {
var175 = varonce174;
} else {
var176 = ";";
var177 = 1;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
var179 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var179 = array_instance Array[Object] */
var180 = 2;
var181 = NEW_array__NativeArray(var180, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var181)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var181)->values[1] = (val*) var175;
((void (*)(val*, val*, long))(var179->class->vft[COLOR_array__Array__with_native]))(var179, var181, var180) /* with_native on <var179:Array[Object]>*/;
}
var182 = ((val* (*)(val*))(var179->class->vft[COLOR_string__Object__to_s]))(var179) /* to_s on <var179:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(var_compiler, var173, var182) /* provide_declaration on <var_compiler:AbstractCompiler>*/;
if (varonce183) {
var184 = varonce183;
} else {
var185 = "/* method ";
var186 = 10;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = " for ";
var191 = 5;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
if (varonce193) {
var194 = varonce193;
} else {
var195 = " */";
var196 = 3;
var197 = string__NativeString__to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
var198 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var198 = array_instance Array[Object] */
var199 = 5;
var200 = NEW_array__NativeArray(var199, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var200)->values[0] = (val*) var184;
((struct instance_array__NativeArray*)var200)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var200)->values[2] = (val*) var189;
((struct instance_array__NativeArray*)var200)->values[3] = (val*) var_comment;
((struct instance_array__NativeArray*)var200)->values[4] = (val*) var194;
((void (*)(val*, val*, long))(var198->class->vft[COLOR_array__Array__with_native]))(var198, var200, var199) /* with_native on <var198:Array[Object]>*/;
}
var201 = ((val* (*)(val*))(var198->class->vft[COLOR_string__Object__to_s]))(var198) /* to_s on <var198:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var201) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce202) {
var203 = varonce202;
} else {
var204 = " {";
var205 = 2;
var206 = string__NativeString__to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
var207 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var207 = array_instance Array[Object] */
var208 = 2;
var209 = NEW_array__NativeArray(var208, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var209)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var209)->values[1] = (val*) var203;
((void (*)(val*, val*, long))(var207->class->vft[COLOR_array__Array__with_native]))(var207, var209, var208) /* with_native on <var207:Array[Object]>*/;
}
var210 = ((val* (*)(val*))(var207->class->vft[COLOR_string__Object__to_s]))(var207) /* to_s on <var207:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var210) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var211 = NULL;
if (var_ret == NULL) {
var212 = 0; /* is null */
} else {
var212 = 1; /* arg is null and recv is not */
}
if (var212){
var213 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar_61d]))(var_frame, var213) /* returnvar= on <var_frame:Frame>*/;
} else {
}
if (varonce214) {
var215 = varonce214;
} else {
var216 = "RET_LABEL";
var217 = 9;
var218 = string__NativeString__to_s_with_length(var216, var217);
var215 = var218;
varonce214 = var215;
}
var219 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(var_v, var215) /* get_name on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel_61d]))(var_frame, var219) /* returnlabel= on <var_frame:Frame>*/;
var220 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var221 = ((val* (*)(val*))(var220->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var220) /* mtype on <var220:nullable Object(RuntimeVariable)>*/;
var222 = ((short int (*)(val*, val*))(var_recv->class->vft[COLOR_kernel__Object___33d_61d]))(var_recv, var221) /* != on <var_recv:MClassType>*/;
if (var222){
} else {
}
var223 = ((val* (*)(val*, val*, val*))(var_mmethoddef->class->vft[COLOR_abstract_compiler__MMethodDef__compile_inside_to_c]))(var_mmethoddef, var_v, var_arguments) /* compile_inside_to_c on <var_mmethoddef:MMethodDef>*/;
var223;
var224 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var_frame) /* returnlabel on <var_frame:Frame>*/;
if (var224 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1676);
show_backtrace(1);
}
if (varonce225) {
var226 = varonce225;
} else {
var227 = ":;";
var228 = 2;
var229 = string__NativeString__to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
var230 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var230 = array_instance Array[Object] */
var231 = 2;
var232 = NEW_array__NativeArray(var231, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var232)->values[0] = (val*) var224;
((struct instance_array__NativeArray*)var232)->values[1] = (val*) var226;
((void (*)(val*, val*, long))(var230->class->vft[COLOR_array__Array__with_native]))(var230, var232, var231) /* with_native on <var230:Array[Object]>*/;
}
var233 = ((val* (*)(val*))(var230->class->vft[COLOR_string__Object__to_s]))(var230) /* to_s on <var230:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var233) /* add on <var_v:AbstractCompilerVisitor>*/;
var234 = NULL;
if (var_ret == NULL) {
var235 = 0; /* is null */
} else {
var235 = 1; /* arg is null and recv is not */
}
if (var235){
if (varonce236) {
var237 = varonce236;
} else {
var238 = "return ";
var239 = 7;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
var241 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var_frame) /* returnvar on <var_frame:Frame>*/;
if (var241 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1678);
show_backtrace(1);
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = ";";
var245 = 1;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
var247 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var247 = array_instance Array[Object] */
var248 = 3;
var249 = NEW_array__NativeArray(var248, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var249)->values[0] = (val*) var237;
((struct instance_array__NativeArray*)var249)->values[1] = (val*) var241;
((struct instance_array__NativeArray*)var249)->values[2] = (val*) var243;
((void (*)(val*, val*, long))(var247->class->vft[COLOR_array__Array__with_native]))(var247, var249, var248) /* with_native on <var247:Array[Object]>*/;
}
var250 = ((val* (*)(val*))(var247->class->vft[COLOR_string__Object__to_s]))(var247) /* to_s on <var247:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var250) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce251) {
var252 = varonce251;
} else {
var253 = "}";
var254 = 1;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var252) /* add on <var_v:AbstractCompilerVisitor>*/;
var256 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:SeparateRuntimeFunction>*/;
if (varonce257) {
var258 = varonce257;
} else {
var259 = "VIRTUAL";
var260 = 7;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
var262 = 0;
var263 = ((short int (*)(val*, val*, long))(var256->class->vft[COLOR_string__AbstractString__has_substring]))(var256, var258, var262) /* has_substring on <var256:String>*/;
var264 = !var263;
if (var264){
var265 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__names]))(var_compiler) /* names on <var_compiler:AbstractCompiler>*/;
var266 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:SeparateRuntimeFunction>*/;
var267 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var268 = ((val* (*)(val*))(var267->class->vft[COLOR_model__MClassDef__mmodule]))(var267) /* mmodule on <var267:MClassDef>*/;
var269 = ((val* (*)(val*))(var268->class->vft[COLOR_mmodule__MModule__name]))(var268) /* name on <var268:MModule>*/;
if (varonce270) {
var271 = varonce270;
} else {
var272 = "::";
var273 = 2;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
var275 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var276 = ((val* (*)(val*))(var275->class->vft[COLOR_model__MClassDef__mclass]))(var275) /* mclass on <var275:MClassDef>*/;
var277 = ((val* (*)(val*))(var276->class->vft[COLOR_model__MClass__name]))(var276) /* name on <var276:MClass>*/;
if (varonce278) {
var279 = varonce278;
} else {
var280 = "::";
var281 = 2;
var282 = string__NativeString__to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
var283 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var284 = ((val* (*)(val*))(var283->class->vft[COLOR_model__MProperty__name]))(var283) /* name on <var283:MProperty(MMethod)>*/;
if (varonce285) {
var286 = varonce285;
} else {
var287 = " (";
var288 = 2;
var289 = string__NativeString__to_s_with_length(var287, var288);
var286 = var289;
varonce285 = var286;
}
var290 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__location]))(var_mmethoddef) /* location on <var_mmethoddef:MMethodDef>*/;
var291 = ((val* (*)(val*))(var290->class->vft[COLOR_location__Location__file]))(var290) /* file on <var290:Location>*/;
if (var291 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1681);
show_backtrace(1);
} else {
var292 = ((val* (*)(val*))(var291->class->vft[COLOR_location__SourceFile__filename]))(var291) /* filename on <var291:nullable SourceFile>*/;
}
if (varonce293) {
var294 = varonce293;
} else {
var295 = ":";
var296 = 1;
var297 = string__NativeString__to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
var298 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__location]))(var_mmethoddef) /* location on <var_mmethoddef:MMethodDef>*/;
var299 = ((long (*)(val*))(var298->class->vft[COLOR_location__Location__line_start]))(var298) /* line_start on <var298:Location>*/;
if (varonce300) {
var301 = varonce300;
} else {
var302 = ")";
var303 = 1;
var304 = string__NativeString__to_s_with_length(var302, var303);
var301 = var304;
varonce300 = var301;
}
var305 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var305 = array_instance Array[Object] */
var306 = 10;
var307 = NEW_array__NativeArray(var306, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var307)->values[0] = (val*) var269;
((struct instance_array__NativeArray*)var307)->values[1] = (val*) var271;
((struct instance_array__NativeArray*)var307)->values[2] = (val*) var277;
((struct instance_array__NativeArray*)var307)->values[3] = (val*) var279;
((struct instance_array__NativeArray*)var307)->values[4] = (val*) var284;
((struct instance_array__NativeArray*)var307)->values[5] = (val*) var286;
((struct instance_array__NativeArray*)var307)->values[6] = (val*) var292;
((struct instance_array__NativeArray*)var307)->values[7] = (val*) var294;
var308 = BOX_kernel__Int(var299); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var307)->values[8] = (val*) var308;
((struct instance_array__NativeArray*)var307)->values[9] = (val*) var301;
((void (*)(val*, val*, long))(var305->class->vft[COLOR_array__Array__with_native]))(var305, var307, var306) /* with_native on <var305:Array[Object]>*/;
}
var309 = ((val* (*)(val*))(var305->class->vft[COLOR_string__Object__to_s]))(var305) /* to_s on <var305:Array[Object]>*/;
((void (*)(val*, val*, val*))(var265->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var265, var266, var309) /* []= on <var265:HashMap[String, String]>*/;
} else {
}
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_separate_compiler__SeparateRuntimeFunction__compile_to_c(val* self, val* p0) {
separate_compiler__SeparateRuntimeFunction__compile_to_c(self, p0);
RET_LABEL:;
}
/* method separate_compiler#VirtualRuntimeFunction#build_c_name for (self: VirtualRuntimeFunction): String */
val* separate_compiler__VirtualRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MMethodDef */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "VIRTUAL_";
var5 = 8;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:VirtualRuntimeFunction>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var7) /* c_name on <var7:MMethodDef>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "";
var12 = 0;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#build_c_name for (self: Object): String */
val* VIRTUAL_separate_compiler__VirtualRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__VirtualRuntimeFunction__build_c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#to_s for (self: VirtualRuntimeFunction): String */
val* separate_compiler__VirtualRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:VirtualRuntimeFunction>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__Object__to_s]))(var1) /* to_s on <var1:MMethodDef>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#to_s for (self: Object): String */
val* VIRTUAL_separate_compiler__VirtualRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__VirtualRuntimeFunction__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#compile_to_c for (self: VirtualRuntimeFunction, AbstractCompiler) */
void separate_compiler__VirtualRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var2 /* : MMethodDef */;
val* var3 /* : MClassDef */;
val* var4 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var5 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var6 /* : RuntimeVariable */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : MClassType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var12 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var13 /* : Frame */;
val* var_frame /* var frame: Frame */;
val* var14 /* : Buffer */;
val* var_sig /* var sig: Buffer */;
val* var15 /* : Buffer */;
val* var_comment /* var comment: Buffer */;
val* var16 /* : MMethodDef */;
val* var17 /* : MProperty */;
val* var18 /* : MPropDef */;
val* var19 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var20 /* : MProperty */;
val* var21 /* : MPropDef */;
val* var22 /* : nullable MSignature */;
val* var23 /* : MClassType */;
val* var24 /* : MClassType */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
val* var27 /* : MType */;
val* var_msignature /* var msignature: MSignature */;
val* var28 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var29 /* : null */;
short int var30 /* : Bool */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
val* var41 /* : MProperty */;
short int var42 /* : Bool */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : MType */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var73 /* : NativeArray[Object] */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : MType */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
val* var90 /* : Range[Int] */;
long var91 /* : Int */;
long var92 /* : Int */;
val* var93 /* : Discrete */;
val* var94 /* : Discrete */;
val* var95 /* : Iterator[nullable Object] */;
short int var96 /* : Bool */;
val* var97 /* : nullable Object */;
long var_i /* var i: Int */;
long var98 /* : Int */;
val* var99 /* : Array[MParameter] */;
val* var100 /* : nullable Object */;
val* var101 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var102 /* : Int */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : MClass */;
val* var112 /* : Array[MType] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[MType] */;
val* var115 /* : MClassType */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : String */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
val* var136 /* : Array[Object] */;
long var137 /* : Int */;
val* var138 /* : NativeArray[Object] */;
val* var139 /* : Object */;
val* var140 /* : String */;
val* var141 /* : RuntimeVariable */;
val* var142 /* : Array[Object] */;
long var143 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
val* var149 /* : nullable Object */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : String */;
val* var155 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : String */;
val* var166 /* : null */;
short int var167 /* : Bool */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : String */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : String */;
val* var183 /* : Array[Object] */;
long var184 /* : Int */;
val* var185 /* : NativeArray[Object] */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : String */;
val* var202 /* : Array[Object] */;
long var203 /* : Int */;
val* var204 /* : NativeArray[Object] */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : NativeString */;
long var209 /* : Int */;
val* var210 /* : String */;
val* var211 /* : Array[Object] */;
long var212 /* : Int */;
val* var213 /* : NativeArray[Object] */;
val* var214 /* : String */;
val* var215 /* : null */;
short int var216 /* : Bool */;
val* var217 /* : RuntimeVariable */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : String */;
val* var223 /* : String */;
val* var224 /* : nullable RuntimeVariable */;
val* var_subret /* var subret: nullable RuntimeVariable */;
val* var225 /* : null */;
short int var226 /* : Bool */;
val* var227 /* : null */;
short int var228 /* : Bool */;
val* var229 /* : nullable RuntimeVariable */;
val* var230 /* : nullable String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
val* var236 /* : Array[Object] */;
long var237 /* : Int */;
val* var238 /* : NativeArray[Object] */;
val* var239 /* : String */;
val* var240 /* : null */;
short int var241 /* : Bool */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : String */;
val* var247 /* : nullable RuntimeVariable */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
long var251 /* : Int */;
val* var252 /* : String */;
val* var253 /* : Array[Object] */;
long var254 /* : Int */;
val* var255 /* : NativeArray[Object] */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : String */;
val* var262 /* : String */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : String */;
long var268 /* : Int */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
val* var271 /* : HashMap[String, String] */;
val* var272 /* : String */;
val* var273 /* : MClassDef */;
val* var274 /* : MModule */;
val* var275 /* : String */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : String */;
val* var281 /* : MClassDef */;
val* var282 /* : MClass */;
val* var283 /* : String */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
long var287 /* : Int */;
val* var288 /* : String */;
val* var289 /* : MProperty */;
val* var290 /* : String */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : String */;
val* var296 /* : Location */;
val* var297 /* : nullable SourceFile */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : String */;
val* var304 /* : Location */;
long var305 /* : Int */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : String */;
val* var311 /* : Array[Object] */;
long var312 /* : Int */;
val* var313 /* : NativeArray[Object] */;
val* var314 /* : Object */;
val* var315 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTCOMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1694);
show_backtrace(1);
}
var_compiler = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:VirtualRuntimeFunction>*/;
var_mmethoddef = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:VirtualRuntimeFunction>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MPropDef__mclassdef]))(var2) /* mclassdef on <var2:MMethodDef>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__bound_mtype]))(var3) /* bound_mtype on <var3:MClassDef>*/;
var_recv = var4;
var5 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler) /* new_visitor on <var_compiler:AbstractCompiler>*/;
var_v = var5;
var6 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce) {
var7 = varonce;
} else {
var8 = "self";
var9 = 4;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__object_type]))(var_v) /* object_type on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*, val*))(var6->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var6, var7, var11, var_recv) /* init on <var6:RuntimeVariable>*/;
var_selfvar = var6;
var12 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[RuntimeVariable]>*/;
var_arguments = var12;
var13 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_abstract_compiler__Frame__init]))(var13, var_v, var_mmethoddef, var_recv, var_arguments) /* init on <var13:Frame>*/;
var_frame = var13;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_frame) /* frame= on <var_v:AbstractCompilerVisitor>*/;
var14 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var14->class->vft[COLOR_string__Buffer__init]))(var14) /* init on <var14:Buffer>*/;
var_sig = var14;
var15 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var15->class->vft[COLOR_string__Buffer__init]))(var15) /* init on <var15:Buffer>*/;
var_comment = var15;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:VirtualRuntimeFunction>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_model__MPropDef__mproperty]))(var16) /* mproperty on <var16:MMethodDef>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_model__MProperty__intro]))(var17) /* intro on <var17:MProperty(MMethod)>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_model__MPropDef__mclassdef]))(var18) /* mclassdef on <var18:MPropDef(MMethodDef)>*/;
var_intromclassdef = var19;
var20 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MProperty__intro]))(var20) /* intro on <var20:MProperty(MMethod)>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_model__MMethodDef__msignature]))(var21) /* msignature on <var21:MPropDef(MMethodDef)>*/;
var23 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_intromclassdef) /* bound_mtype on <var_intromclassdef:MClassDef>*/;
var24 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_intromclassdef) /* bound_mtype on <var_intromclassdef:MClassDef>*/;
var25 = ((val* (*)(val*))(var_intromclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_intromclassdef) /* mmodule on <var_intromclassdef:MClassDef>*/;
var26 = 1;
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1710);
show_backtrace(1);
} else {
var27 = ((val* (*)(val*, val*, val*, val*, short int))(var22->class->vft[COLOR_model__MType__resolve_for]))(var22, var23, var24, var25, var26) /* resolve_for on <var22:nullable MSignature>*/;
}
var_msignature = var27;
var28 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:MSignature>*/;
var_ret = var28;
var29 = NULL;
if (var_ret == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (var30){
var31 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = " ";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 2;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var31;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var33;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var40) /* append on <var_sig:Buffer>*/;
} else {
var41 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var42 = ((short int (*)(val*))(var41->class->vft[COLOR_model__MMethod__is_new]))(var41) /* is_new on <var41:MProperty(MMethod)>*/;
if (var42){
var_ret = var_recv;
var43 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MClassType)>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = " ";
var47 = 1;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 2;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var45;
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
var52 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var52) /* append on <var_sig:Buffer>*/;
} else {
if (varonce53) {
var54 = varonce53;
} else {
var55 = "void ";
var56 = 5;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var54) /* append on <var_sig:Buffer>*/;
}
}
var58 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:VirtualRuntimeFunction>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var58) /* append on <var_sig:Buffer>*/;
if (varonce59) {
var60 = varonce59;
} else {
var61 = "(";
var62 = 1;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = ((val* (*)(val*))(var_selfvar->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_selfvar) /* mtype on <var_selfvar:RuntimeVariable>*/;
var65 = ((val* (*)(val*))(var64->class->vft[COLOR_abstract_compiler__MType__ctype]))(var64) /* ctype on <var64:MType>*/;
if (varonce66) {
var67 = varonce66;
} else {
var68 = " ";
var69 = 1;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 4;
var73 = NEW_array__NativeArray(var72, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var73)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var73)->values[1] = (val*) var65;
((struct instance_array__NativeArray*)var73)->values[2] = (val*) var67;
((struct instance_array__NativeArray*)var73)->values[3] = (val*) var_selfvar;
((void (*)(val*, val*, long))(var71->class->vft[COLOR_array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
var74 = ((val* (*)(val*))(var71->class->vft[COLOR_string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var74) /* append on <var_sig:Buffer>*/;
if (varonce75) {
var76 = varonce75;
} else {
var77 = "(";
var78 = 1;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = ": ";
var83 = 2;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = ((val* (*)(val*))(var_selfvar->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_selfvar) /* mtype on <var_selfvar:RuntimeVariable>*/;
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 4;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var76;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var_selfvar;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var81;
((struct instance_array__NativeArray*)var88)->values[3] = (val*) var85;
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var89) /* append on <var_comment:Buffer>*/;
((void (*)(val*, val*))(var_arguments->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments, var_selfvar) /* add on <var_arguments:Array[RuntimeVariable]>*/;
var90 = NEW_range__Range(&type_range__Rangekernel__Int);
var91 = 0;
var92 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
var93 = BOX_kernel__Int(var91); /* autobox from Int to Discrete */
var94 = BOX_kernel__Int(var92); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var90->class->vft[COLOR_range__Range__without_last]))(var90, var93, var94) /* without_last on <var90:Range[Int]>*/;
var95 = ((val* (*)(val*))(var90->class->vft[COLOR_abstract_collection__Collection__iterator]))(var90) /* iterator on <var90:Range[Int]>*/;
for(;;) {
var96 = ((short int (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var95) /* is_ok on <var95:Iterator[nullable Object]>*/;
if(!var96) break;
var97 = ((val* (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__item]))(var95) /* item on <var95:Iterator[nullable Object]>*/;
var98 = ((struct instance_kernel__Int*)var97)->value; /* autounbox from nullable Object to Int */;
var_i = var98;
var99 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var100 = ((val* (*)(val*, long))(var99->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var99, var_i) /* [] on <var99:Array[MParameter]>*/;
var101 = ((val* (*)(val*))(var100->class->vft[COLOR_model__MParameter__mtype]))(var100) /* mtype on <var100:nullable Object(MParameter)>*/;
var_mtype = var101;
var102 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__vararg_rank]))(var_msignature) /* vararg_rank on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#== (var_i,var102) */
var105 = var_i == var102;
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
if (var103){
if (varonce106) {
var107 = varonce106;
} else {
var108 = "Array";
var109 = 5;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(var_v, var107) /* get_class on <var_v:AbstractCompilerVisitor>*/;
var112 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var112 = array_instance Array[MType] */
var113 = 1;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var_mtype;
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[MType]>*/;
}
var115 = ((val* (*)(val*, val*))(var111->class->vft[COLOR_model__MClass__get_mtype]))(var111, var112) /* get_mtype on <var111:MClass>*/;
var_mtype = var115;
} else {
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = ", ";
var119 = 2;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 2;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var117;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var124) /* append on <var_comment:Buffer>*/;
if (varonce125) {
var126 = varonce125;
} else {
var127 = ", ";
var128 = 2;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var130 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce131) {
var132 = varonce131;
} else {
var133 = " p";
var134 = 2;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
var136 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var136 = array_instance Array[Object] */
var137 = 4;
var138 = NEW_array__NativeArray(var137, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var138)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var138)->values[1] = (val*) var130;
((struct instance_array__NativeArray*)var138)->values[2] = (val*) var132;
var139 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var138)->values[3] = (val*) var139;
((void (*)(val*, val*, long))(var136->class->vft[COLOR_array__Array__with_native]))(var136, var138, var137) /* with_native on <var136:Array[Object]>*/;
}
var140 = ((val* (*)(val*))(var136->class->vft[COLOR_string__Object__to_s]))(var136) /* to_s on <var136:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var140) /* append on <var_sig:Buffer>*/;
var141 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
var142 = NEW_array__Array(&type_array__Arraykernel__Object);
var143 = 3;
((void (*)(val*, long))(var142->class->vft[COLOR_array__Array__with_capacity]))(var142, var143) /* with_capacity on <var142:Array[Object]>*/;
var_ = var142;
if (varonce144) {
var145 = varonce144;
} else {
var146 = "p";
var147 = 1;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var145) /* add on <var_:Array[Object]>*/;
var149 = BOX_kernel__Int(var_i); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var149) /* add on <var_:Array[Object]>*/;
if (varonce150) {
var151 = varonce150;
} else {
var152 = "";
var153 = 0;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var151) /* add on <var_:Array[Object]>*/;
var155 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*, val*, val*))(var141->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var141, var155, var_mtype, var_mtype) /* init on <var141:RuntimeVariable>*/;
var_argvar = var141;
((void (*)(val*, val*))(var_arguments->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments, var_argvar) /* add on <var_arguments:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var95->class->vft[COLOR_abstract_collection__Iterator__next]))(var95) /* next on <var95:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce156) {
var157 = varonce156;
} else {
var158 = ")";
var159 = 1;
var160 = string__NativeString__to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var157) /* append on <var_sig:Buffer>*/;
if (varonce161) {
var162 = varonce161;
} else {
var163 = ")";
var164 = 1;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var162) /* append on <var_comment:Buffer>*/;
var166 = NULL;
if (var_ret == NULL) {
var167 = 0; /* is null */
} else {
var167 = 1; /* arg is null and recv is not */
}
if (var167){
if (varonce168) {
var169 = varonce168;
} else {
var170 = ": ";
var171 = 2;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 2;
var175 = NEW_array__NativeArray(var174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var175)->values[0] = (val*) var169;
((struct instance_array__NativeArray*)var175)->values[1] = (val*) var_ret;
((void (*)(val*, val*, long))(var173->class->vft[COLOR_array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
var176 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var176) /* append on <var_comment:Buffer>*/;
} else {
}
var177 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:VirtualRuntimeFunction>*/;
if (varonce178) {
var179 = varonce178;
} else {
var180 = ";";
var181 = 1;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
var183 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var183 = array_instance Array[Object] */
var184 = 2;
var185 = NEW_array__NativeArray(var184, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var185)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var185)->values[1] = (val*) var179;
((void (*)(val*, val*, long))(var183->class->vft[COLOR_array__Array__with_native]))(var183, var185, var184) /* with_native on <var183:Array[Object]>*/;
}
var186 = ((val* (*)(val*))(var183->class->vft[COLOR_string__Object__to_s]))(var183) /* to_s on <var183:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(var_compiler, var177, var186) /* provide_declaration on <var_compiler:AbstractCompiler>*/;
if (varonce187) {
var188 = varonce187;
} else {
var189 = "/* method ";
var190 = 10;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = " for ";
var195 = 5;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
if (varonce197) {
var198 = varonce197;
} else {
var199 = " */";
var200 = 3;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
var202 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var202 = array_instance Array[Object] */
var203 = 5;
var204 = NEW_array__NativeArray(var203, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var204)->values[0] = (val*) var188;
((struct instance_array__NativeArray*)var204)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var204)->values[2] = (val*) var193;
((struct instance_array__NativeArray*)var204)->values[3] = (val*) var_comment;
((struct instance_array__NativeArray*)var204)->values[4] = (val*) var198;
((void (*)(val*, val*, long))(var202->class->vft[COLOR_array__Array__with_native]))(var202, var204, var203) /* with_native on <var202:Array[Object]>*/;
}
var205 = ((val* (*)(val*))(var202->class->vft[COLOR_string__Object__to_s]))(var202) /* to_s on <var202:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var205) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
if (varonce206) {
var207 = varonce206;
} else {
var208 = " {";
var209 = 2;
var210 = string__NativeString__to_s_with_length(var208, var209);
var207 = var210;
varonce206 = var207;
}
var211 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 2;
var213 = NEW_array__NativeArray(var212, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var213)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var213)->values[1] = (val*) var207;
((void (*)(val*, val*, long))(var211->class->vft[COLOR_array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
var214 = ((val* (*)(val*))(var211->class->vft[COLOR_string__Object__to_s]))(var211) /* to_s on <var211:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var214) /* add_decl on <var_v:AbstractCompilerVisitor>*/;
var215 = NULL;
if (var_ret == NULL) {
var216 = 0; /* is null */
} else {
var216 = 1; /* arg is null and recv is not */
}
if (var216){
var217 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar_61d]))(var_frame, var217) /* returnvar= on <var_frame:Frame>*/;
} else {
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = "RET_LABEL";
var221 = 9;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
var223 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(var_v, var219) /* get_name on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel_61d]))(var_frame, var223) /* returnlabel= on <var_frame:Frame>*/;
var224 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__call]))(var_v, var_mmethoddef, var_recv, var_arguments) /* call on <var_v:AbstractCompilerVisitor>*/;
var_subret = var224;
var225 = NULL;
if (var_ret == NULL) {
var226 = 0; /* is null */
} else {
var226 = 1; /* arg is null and recv is not */
}
if (var226){
var227 = NULL;
if (var_subret == NULL) {
var228 = 0; /* is null */
} else {
var228 = 1; /* arg is null and recv is not */
}
if (!var228) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1750);
show_backtrace(1);
}
var229 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var_frame) /* returnvar on <var_frame:Frame>*/;
if (var229 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1751);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var229, var_subret) /* assign on <var_v:AbstractCompilerVisitor>*/;
} else {
}
var230 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var_frame) /* returnlabel on <var_frame:Frame>*/;
if (var230 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1754);
show_backtrace(1);
}
if (varonce231) {
var232 = varonce231;
} else {
var233 = ":;";
var234 = 2;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
var236 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var236 = array_instance Array[Object] */
var237 = 2;
var238 = NEW_array__NativeArray(var237, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var238)->values[0] = (val*) var230;
((struct instance_array__NativeArray*)var238)->values[1] = (val*) var232;
((void (*)(val*, val*, long))(var236->class->vft[COLOR_array__Array__with_native]))(var236, var238, var237) /* with_native on <var236:Array[Object]>*/;
}
var239 = ((val* (*)(val*))(var236->class->vft[COLOR_string__Object__to_s]))(var236) /* to_s on <var236:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var239) /* add on <var_v:AbstractCompilerVisitor>*/;
var240 = NULL;
if (var_ret == NULL) {
var241 = 0; /* is null */
} else {
var241 = 1; /* arg is null and recv is not */
}
if (var241){
if (varonce242) {
var243 = varonce242;
} else {
var244 = "return ";
var245 = 7;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
var247 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var_frame) /* returnvar on <var_frame:Frame>*/;
if (var247 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1756);
show_backtrace(1);
}
if (varonce248) {
var249 = varonce248;
} else {
var250 = ";";
var251 = 1;
var252 = string__NativeString__to_s_with_length(var250, var251);
var249 = var252;
varonce248 = var249;
}
var253 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var253 = array_instance Array[Object] */
var254 = 3;
var255 = NEW_array__NativeArray(var254, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var255)->values[0] = (val*) var243;
((struct instance_array__NativeArray*)var255)->values[1] = (val*) var247;
((struct instance_array__NativeArray*)var255)->values[2] = (val*) var249;
((void (*)(val*, val*, long))(var253->class->vft[COLOR_array__Array__with_native]))(var253, var255, var254) /* with_native on <var253:Array[Object]>*/;
}
var256 = ((val* (*)(val*))(var253->class->vft[COLOR_string__Object__to_s]))(var253) /* to_s on <var253:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var256) /* add on <var_v:AbstractCompilerVisitor>*/;
} else {
}
if (varonce257) {
var258 = varonce257;
} else {
var259 = "}";
var260 = 1;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var258) /* add on <var_v:AbstractCompilerVisitor>*/;
var262 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:VirtualRuntimeFunction>*/;
if (varonce263) {
var264 = varonce263;
} else {
var265 = "VIRTUAL";
var266 = 7;
var267 = string__NativeString__to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
var268 = 0;
var269 = ((short int (*)(val*, val*, long))(var262->class->vft[COLOR_string__AbstractString__has_substring]))(var262, var264, var268) /* has_substring on <var262:String>*/;
var270 = !var269;
if (var270){
var271 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__names]))(var_compiler) /* names on <var_compiler:AbstractCompiler>*/;
var272 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:VirtualRuntimeFunction>*/;
var273 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var274 = ((val* (*)(val*))(var273->class->vft[COLOR_model__MClassDef__mmodule]))(var273) /* mmodule on <var273:MClassDef>*/;
var275 = ((val* (*)(val*))(var274->class->vft[COLOR_mmodule__MModule__name]))(var274) /* name on <var274:MModule>*/;
if (varonce276) {
var277 = varonce276;
} else {
var278 = "::";
var279 = 2;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
var281 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var282 = ((val* (*)(val*))(var281->class->vft[COLOR_model__MClassDef__mclass]))(var281) /* mclass on <var281:MClassDef>*/;
var283 = ((val* (*)(val*))(var282->class->vft[COLOR_model__MClass__name]))(var282) /* name on <var282:MClass>*/;
if (varonce284) {
var285 = varonce284;
} else {
var286 = "::";
var287 = 2;
var288 = string__NativeString__to_s_with_length(var286, var287);
var285 = var288;
varonce284 = var285;
}
var289 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var290 = ((val* (*)(val*))(var289->class->vft[COLOR_model__MProperty__name]))(var289) /* name on <var289:MProperty(MMethod)>*/;
if (varonce291) {
var292 = varonce291;
} else {
var293 = " (";
var294 = 2;
var295 = string__NativeString__to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
var296 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__location]))(var_mmethoddef) /* location on <var_mmethoddef:MMethodDef>*/;
var297 = ((val* (*)(val*))(var296->class->vft[COLOR_location__Location__file]))(var296) /* file on <var296:Location>*/;
if (var297 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1759);
show_backtrace(1);
} else {
var298 = ((val* (*)(val*))(var297->class->vft[COLOR_location__SourceFile__filename]))(var297) /* filename on <var297:nullable SourceFile>*/;
}
if (varonce299) {
var300 = varonce299;
} else {
var301 = "--";
var302 = 2;
var303 = string__NativeString__to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
var304 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__location]))(var_mmethoddef) /* location on <var_mmethoddef:MMethodDef>*/;
var305 = ((long (*)(val*))(var304->class->vft[COLOR_location__Location__line_start]))(var304) /* line_start on <var304:Location>*/;
if (varonce306) {
var307 = varonce306;
} else {
var308 = ")";
var309 = 1;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
var311 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var311 = array_instance Array[Object] */
var312 = 10;
var313 = NEW_array__NativeArray(var312, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var313)->values[0] = (val*) var275;
((struct instance_array__NativeArray*)var313)->values[1] = (val*) var277;
((struct instance_array__NativeArray*)var313)->values[2] = (val*) var283;
((struct instance_array__NativeArray*)var313)->values[3] = (val*) var285;
((struct instance_array__NativeArray*)var313)->values[4] = (val*) var290;
((struct instance_array__NativeArray*)var313)->values[5] = (val*) var292;
((struct instance_array__NativeArray*)var313)->values[6] = (val*) var298;
((struct instance_array__NativeArray*)var313)->values[7] = (val*) var300;
var314 = BOX_kernel__Int(var305); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var313)->values[8] = (val*) var314;
((struct instance_array__NativeArray*)var313)->values[9] = (val*) var307;
((void (*)(val*, val*, long))(var311->class->vft[COLOR_array__Array__with_native]))(var311, var313, var312) /* with_native on <var311:Array[Object]>*/;
}
var315 = ((val* (*)(val*))(var311->class->vft[COLOR_string__Object__to_s]))(var311) /* to_s on <var311:Array[Object]>*/;
((void (*)(val*, val*, val*))(var271->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var271, var272, var315) /* []= on <var271:HashMap[String, String]>*/;
} else {
}
RET_LABEL:;
}
/* method separate_compiler#VirtualRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_separate_compiler__VirtualRuntimeFunction__compile_to_c(val* self, val* p0) {
separate_compiler__VirtualRuntimeFunction__compile_to_c(self, p0);
RET_LABEL:;
}
/* method separate_compiler#VirtualRuntimeFunction#call for (self: VirtualRuntimeFunction, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* separate_compiler__VirtualRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1762);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/separate_compiler.nit", 1763);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#call for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_separate_compiler__VirtualRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = separate_compiler__VirtualRuntimeFunction__call(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MType#const_color for (self: MType): String */
val* separate_compiler__MType__const_color(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "COLOR_";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name]))(self) /* c_name on <self:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MType#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MType__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MType__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MProperty#const_color for (self: MProperty): String */
val* separate_compiler__MProperty__const_color(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "COLOR_";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MProperty__c_name]))(self) /* c_name on <self:MProperty>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MProperty#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MProperty__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MProperty__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MPropDef#const_color for (self: MPropDef): String */
val* separate_compiler__MPropDef__const_color(val* self) {
val* var /* : String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "COLOR_";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(self) /* c_name on <self:MPropDef>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MPropDef#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MPropDef__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MPropDef__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
