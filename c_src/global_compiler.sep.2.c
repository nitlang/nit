#include "global_compiler.sep.0.h"
/* method global_compiler#GlobalCompilerVisitor#equal_test for (self: GlobalCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : MType */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
short int var18 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var19 /* : MType */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
short int var26 /* : Bool */;
val* var27 /* : MType */;
val* var28 /* : MType */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
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
val* var49 /* : MType */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
val* var62 /* : MType */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : MType */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
val* var78 /* : MType */;
short int var79 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
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
val* var95 /* : AbstractCompiler */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : Array[Object] */;
long var103 /* : Int */;
val* var104 /* : NativeArray[Object] */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : Array[Object] */;
long var117 /* : Int */;
val* var118 /* : NativeArray[Object] */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : String */;
val* var125 /* : MType */;
val* var126 /* : RuntimeVariable */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
val* var137 /* : Array[Object] */;
long var138 /* : Int */;
val* var139 /* : NativeArray[Object] */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var147 /* : AbstractCompiler */;
val* var148 /* : Array[MClassType] */;
val* var149 /* : Iterator[nullable Object] */;
short int var150 /* : Bool */;
val* var151 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var152 /* : AbstractCompiler */;
val* var153 /* : MModule */;
val* var154 /* : null */;
val* var155 /* : MType */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
val* var158 /* : AbstractCompiler */;
val* var159 /* : MModule */;
val* var160 /* : null */;
val* var161 /* : MType */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
long var167 /* : Int */;
val* var168 /* : String */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : String */;
val* var174 /* : AbstractCompiler */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : String */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : String */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : String */;
val* var203 /* : Array[Object] */;
long var204 /* : Int */;
val* var205 /* : NativeArray[Object] */;
val* var206 /* : String */;
short int var207 /* : Bool */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : String */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : String */;
val* var223 /* : Array[Object] */;
long var224 /* : Int */;
val* var225 /* : NativeArray[Object] */;
val* var226 /* : String */;
static val* varonce227;
val* var228 /* : String */;
char* var229 /* : NativeString */;
long var230 /* : Int */;
val* var231 /* : String */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : String */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
long var240 /* : Int */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : String */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
long var250 /* : Int */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : String */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : String */;
val* var267 /* : String */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : String */;
val* var273 /* : Array[Object] */;
long var274 /* : Int */;
val* var275 /* : NativeArray[Object] */;
val* var276 /* : String */;
var_value1 = p0;
var_value2 = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:GlobalCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var1) /* new_var on <self:GlobalCompilerVisitor>*/;
var_res = var2;
var4 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
if (varonce) {
var6 = varonce;
} else {
var7 = "val*";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___33d_61d]))(var5, var6) /* != on <var5:String>*/;
var_ = var10;
if (var10){
var11 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_compiler__MType__ctype]))(var11) /* ctype on <var11:MType>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "val*";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var14) /* == on <var12:String>*/;
var3 = var18;
} else {
var3 = var_;
}
if (var3){
var_tmp = var_value1;
var_value1 = var_value2;
var_value2 = var_tmp;
} else {
}
var19 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_compiler__MType__ctype]))(var19) /* ctype on <var19:MType>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "val*";
var24 = 4;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = ((short int (*)(val*, val*))(var20->class->vft[COLOR_kernel__Object___33d_61d]))(var20, var22) /* != on <var20:String>*/;
if (var26){
var27 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
var28 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
var29 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var28) /* == on <var27:MType>*/;
if (var29){
if (varonce30) {
var31 = varonce30;
} else {
var32 = " = ";
var33 = 3;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = " == ";
var38 = 4;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = ";";
var43 = 1;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 6;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var31;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var47)->values[3] = (val*) var36;
((struct instance_array__NativeArray*)var47)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var47)->values[5] = (val*) var41;
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var48) /* add on <self:GlobalCompilerVisitor>*/;
} else {
var49 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
var50 = ((val* (*)(val*))(var49->class->vft[COLOR_abstract_compiler__MType__ctype]))(var49) /* ctype on <var49:MType>*/;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "val*";
var54 = 4;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((short int (*)(val*, val*))(var50->class->vft[COLOR_kernel__Object___33d_61d]))(var50, var52) /* != on <var50:String>*/;
if (var56){
if (varonce57) {
var58 = varonce57;
} else {
var59 = " = 0; /* incompatible types ";
var60 = 28;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
if (varonce63) {
var64 = varonce63;
} else {
var65 = " vs. ";
var66 = 5;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value2) /* mtype on <var_value2:RuntimeVariable>*/;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "*/";
var72 = 2;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 6;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var58;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var62;
((struct instance_array__NativeArray*)var76)->values[3] = (val*) var64;
((struct instance_array__NativeArray*)var76)->values[4] = (val*) var68;
((struct instance_array__NativeArray*)var76)->values[5] = (val*) var70;
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var77) /* add on <self:GlobalCompilerVisitor>*/;
} else {
var78 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
/* <var78:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var78->type->table_size) {
var79 = 0;
} else {
var79 = var78->type->type_table[cltype] == idtype;
}
if (!var79) {
var_class_name = var78 == NULL ? "null" : var78->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 793);
show_backtrace(1);
}
var_mtype1 = var78;
if (varonce80) {
var81 = varonce80;
} else {
var82 = " = (";
var83 = 4;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = " != NULL) && (";
var88 = 14;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = "->classid == ";
var93 = 13;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var96 = ((val* (*)(val*, val*))(var95->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var95, var_mtype1) /* classid on <var95:AbstractCompiler(GlobalCompiler)>*/;
if (varonce97) {
var98 = varonce97;
} else {
var99 = ");";
var100 = 2;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var102 = array_instance Array[Object] */
var103 = 8;
var104 = NEW_array__NativeArray(var103, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var104)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var104)->values[1] = (val*) var81;
((struct instance_array__NativeArray*)var104)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var104)->values[3] = (val*) var86;
((struct instance_array__NativeArray*)var104)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var104)->values[5] = (val*) var91;
((struct instance_array__NativeArray*)var104)->values[6] = (val*) var96;
((struct instance_array__NativeArray*)var104)->values[7] = (val*) var98;
((void (*)(val*, val*, long))(var102->class->vft[COLOR_array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Object]>*/;
}
var105 = ((val* (*)(val*))(var102->class->vft[COLOR_string__Object__to_s]))(var102) /* to_s on <var102:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var105) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "if (";
var109 = 4;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = ") {";
var114 = 3;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var116 = array_instance Array[Object] */
var117 = 3;
var118 = NEW_array__NativeArray(var117, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var118)->values[0] = (val*) var107;
((struct instance_array__NativeArray*)var118)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var118)->values[2] = (val*) var112;
((void (*)(val*, val*, long))(var116->class->vft[COLOR_array__Array__with_native]))(var116, var118, var117) /* with_native on <var116:Array[Object]>*/;
}
var119 = ((val* (*)(val*))(var116->class->vft[COLOR_string__Object__to_s]))(var116) /* to_s on <var116:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var119) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce120) {
var121 = varonce120;
} else {
var122 = " = (";
var123 = 4;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_value1) /* mtype on <var_value1:RuntimeVariable>*/;
var126 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_value2, var125) /* autobox on <self:GlobalCompilerVisitor>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = " == ";
var130 = 4;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = ");";
var135 = 2;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var137 = array_instance Array[Object] */
var138 = 6;
var139 = NEW_array__NativeArray(var138, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var139)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var139)->values[1] = (val*) var121;
((struct instance_array__NativeArray*)var139)->values[2] = (val*) var126;
((struct instance_array__NativeArray*)var139)->values[3] = (val*) var128;
((struct instance_array__NativeArray*)var139)->values[4] = (val*) var_value1;
((struct instance_array__NativeArray*)var139)->values[5] = (val*) var133;
((void (*)(val*, val*, long))(var137->class->vft[COLOR_array__Array__with_native]))(var137, var139, var138) /* with_native on <var137:Array[Object]>*/;
}
var140 = ((val* (*)(val*))(var137->class->vft[COLOR_string__Object__to_s]))(var137) /* to_s on <var137:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var140) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce141) {
var142 = varonce141;
} else {
var143 = "}";
var144 = 1;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var142) /* add on <self:GlobalCompilerVisitor>*/;
}
}
} else {
var146 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var146->class->vft[COLOR_array__Array__init]))(var146) /* init on <var146:Array[String]>*/;
var_s = var146;
var147 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var148 = ((val* (*)(val*))(var147->class->vft[COLOR_global_compiler__GlobalCompiler__live_primitive_types]))(var147) /* live_primitive_types on <var147:AbstractCompiler(GlobalCompiler)>*/;
var149 = ((val* (*)(val*))(var148->class->vft[COLOR_abstract_collection__Collection__iterator]))(var148) /* iterator on <var148:Array[MClassType]>*/;
for(;;) {
var150 = ((short int (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var149) /* is_ok on <var149:Iterator[nullable Object]>*/;
if(!var150) break;
var151 = ((val* (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__item]))(var149) /* item on <var149:Iterator[nullable Object]>*/;
var_t = var151;
var152 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var153 = ((val* (*)(val*))(var152->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var152) /* mainmodule on <var152:AbstractCompiler(GlobalCompiler)>*/;
var154 = NULL;
var155 = ((val* (*)(val*))(var_value1->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value1) /* mcasttype on <var_value1:RuntimeVariable>*/;
var156 = ((short int (*)(val*, val*, val*, val*))(var_t->class->vft[COLOR_model__MType__is_subtype]))(var_t, var153, var154, var155) /* is_subtype on <var_t:MClassType>*/;
var157 = !var156;
if (var157){
goto CONTINUE_label;
} else {
}
var158 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var159 = ((val* (*)(val*))(var158->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var158) /* mainmodule on <var158:AbstractCompiler(GlobalCompiler)>*/;
var160 = NULL;
var161 = ((val* (*)(val*))(var_value2->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(var_value2) /* mcasttype on <var_value2:RuntimeVariable>*/;
var162 = ((short int (*)(val*, val*, val*, val*))(var_t->class->vft[COLOR_model__MType__is_subtype]))(var_t, var159, var160, var161) /* is_subtype on <var_t:MClassType>*/;
var163 = !var162;
if (var163){
goto CONTINUE_label;
} else {
}
if (varonce164) {
var165 = varonce164;
} else {
var166 = "(";
var167 = 1;
var168 = string__NativeString__to_s_with_length(var166, var167);
var165 = var168;
varonce164 = var165;
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = "->classid == ";
var172 = 13;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
var174 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:GlobalCompilerVisitor>*/;
var175 = ((val* (*)(val*, val*))(var174->class->vft[COLOR_global_compiler__GlobalCompiler__classid]))(var174, var_t) /* classid on <var174:AbstractCompiler(GlobalCompiler)>*/;
if (varonce176) {
var177 = varonce176;
} else {
var178 = " && ((struct ";
var179 = 13;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
var181 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MClassType>*/;
if (varonce182) {
var183 = varonce182;
} else {
var184 = "*)";
var185 = 2;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = ")->value == ((struct ";
var190 = 21;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
var192 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MClassType>*/;
if (varonce193) {
var194 = varonce193;
} else {
var195 = "*)";
var196 = 2;
var197 = string__NativeString__to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
if (varonce198) {
var199 = varonce198;
} else {
var200 = ")->value)";
var201 = 9;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
var203 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var203 = array_instance Array[Object] */
var204 = 13;
var205 = NEW_array__NativeArray(var204, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var205)->values[0] = (val*) var165;
((struct instance_array__NativeArray*)var205)->values[1] = (val*) var_value1;
((struct instance_array__NativeArray*)var205)->values[2] = (val*) var170;
((struct instance_array__NativeArray*)var205)->values[3] = (val*) var175;
((struct instance_array__NativeArray*)var205)->values[4] = (val*) var177;
((struct instance_array__NativeArray*)var205)->values[5] = (val*) var181;
((struct instance_array__NativeArray*)var205)->values[6] = (val*) var183;
((struct instance_array__NativeArray*)var205)->values[7] = (val*) var_value1;
((struct instance_array__NativeArray*)var205)->values[8] = (val*) var188;
((struct instance_array__NativeArray*)var205)->values[9] = (val*) var192;
((struct instance_array__NativeArray*)var205)->values[10] = (val*) var194;
((struct instance_array__NativeArray*)var205)->values[11] = (val*) var_value2;
((struct instance_array__NativeArray*)var205)->values[12] = (val*) var199;
((void (*)(val*, val*, long))(var203->class->vft[COLOR_array__Array__with_native]))(var203, var205, var204) /* with_native on <var203:Array[Object]>*/;
}
var206 = ((val* (*)(val*))(var203->class->vft[COLOR_string__Object__to_s]))(var203) /* to_s on <var203:Array[Object]>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var206) /* add on <var_s:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var149->class->vft[COLOR_abstract_collection__Iterator__next]))(var149) /* next on <var149:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var207 = ((short int (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_s) /* is_empty on <var_s:Array[String]>*/;
if (var207){
if (varonce208) {
var209 = varonce208;
} else {
var210 = " = ";
var211 = 3;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = " == ";
var216 = 4;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = ";";
var221 = 1;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
var223 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var223 = array_instance Array[Object] */
var224 = 6;
var225 = NEW_array__NativeArray(var224, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var225)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var225)->values[1] = (val*) var209;
((struct instance_array__NativeArray*)var225)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var225)->values[3] = (val*) var214;
((struct instance_array__NativeArray*)var225)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var225)->values[5] = (val*) var219;
((void (*)(val*, val*, long))(var223->class->vft[COLOR_array__Array__with_native]))(var223, var225, var224) /* with_native on <var223:Array[Object]>*/;
}
var226 = ((val* (*)(val*))(var223->class->vft[COLOR_string__Object__to_s]))(var223) /* to_s on <var223:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var226) /* add on <self:GlobalCompilerVisitor>*/;
} else {
if (varonce227) {
var228 = varonce227;
} else {
var229 = " = ";
var230 = 3;
var231 = string__NativeString__to_s_with_length(var229, var230);
var228 = var231;
varonce227 = var228;
}
if (varonce232) {
var233 = varonce232;
} else {
var234 = " == ";
var235 = 4;
var236 = string__NativeString__to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
if (varonce237) {
var238 = varonce237;
} else {
var239 = " || (";
var240 = 5;
var241 = string__NativeString__to_s_with_length(var239, var240);
var238 = var241;
varonce237 = var238;
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = " != NULL && ";
var245 = 12;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
if (varonce247) {
var248 = varonce247;
} else {
var249 = " != NULL && ";
var250 = 12;
var251 = string__NativeString__to_s_with_length(var249, var250);
var248 = var251;
varonce247 = var248;
}
if (varonce252) {
var253 = varonce252;
} else {
var254 = "->classid == ";
var255 = 13;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
if (varonce257) {
var258 = varonce257;
} else {
var259 = "->classid && (";
var260 = 14;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
if (varonce262) {
var263 = varonce262;
} else {
var264 = " || ";
var265 = 4;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
var267 = ((val* (*)(val*, val*))(var_s->class->vft[COLOR_string__Collection__join]))(var_s, var263) /* join on <var_s:Array[String]>*/;
if (varonce268) {
var269 = varonce268;
} else {
var270 = "));";
var271 = 3;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
var273 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var273 = array_instance Array[Object] */
var274 = 16;
var275 = NEW_array__NativeArray(var274, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var275)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var275)->values[1] = (val*) var228;
((struct instance_array__NativeArray*)var275)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var275)->values[3] = (val*) var233;
((struct instance_array__NativeArray*)var275)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var275)->values[5] = (val*) var238;
((struct instance_array__NativeArray*)var275)->values[6] = (val*) var_value1;
((struct instance_array__NativeArray*)var275)->values[7] = (val*) var243;
((struct instance_array__NativeArray*)var275)->values[8] = (val*) var_value2;
((struct instance_array__NativeArray*)var275)->values[9] = (val*) var248;
((struct instance_array__NativeArray*)var275)->values[10] = (val*) var_value1;
((struct instance_array__NativeArray*)var275)->values[11] = (val*) var253;
((struct instance_array__NativeArray*)var275)->values[12] = (val*) var_value2;
((struct instance_array__NativeArray*)var275)->values[13] = (val*) var258;
((struct instance_array__NativeArray*)var275)->values[14] = (val*) var267;
((struct instance_array__NativeArray*)var275)->values[15] = (val*) var269;
((void (*)(val*, val*, long))(var273->class->vft[COLOR_array__Array__with_native]))(var273, var275, var274) /* with_native on <var273:Array[Object]>*/;
}
var276 = ((val* (*)(val*))(var273->class->vft[COLOR_string__Object__to_s]))(var273) /* to_s on <var273:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var276) /* add on <self:GlobalCompilerVisitor>*/;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#equal_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__equal_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#array_instance for (self: GlobalCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* global_compiler__GlobalCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MClass */;
val* var7 /* : Array[MType] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[MType] */;
val* var10 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var11 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : MClass */;
val* var37 /* : Array[MType] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[MType] */;
val* var40 /* : MClassType */;
val* var41 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : MType */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
long var55 /* : Int */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : Object */;
val* var65 /* : String */;
val* var66 /* : Range[Int] */;
long var67 /* : Int */;
long var68 /* : Int */;
val* var69 /* : Discrete */;
val* var70 /* : Discrete */;
val* var71 /* : Iterator[nullable Object] */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
long var_i /* var i: Int */;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
val* var76 /* : RuntimeVariable */;
val* var_r /* var r: RuntimeVariable */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var82 /* : MType */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : Object */;
val* var108 /* : String */;
long var109 /* : Int */;
val* var110 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : MMethod */;
val* var117 /* : Array[RuntimeVariable] */;
long var118 /* : Int */;
val* var119 /* : NativeArray[RuntimeVariable] */;
val* var120 /* : nullable RuntimeVariable */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
var_array = p0;
var_elttype = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_elttype) /* anchor on <self:GlobalCompilerVisitor>*/;
var_elttype = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "Array";
var4 = 5;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var2) /* get_class on <self:GlobalCompilerVisitor>*/;
var7 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var7 = array_instance Array[MType] */
var8 = 1;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[MType]>*/;
}
var10 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_model__MClass__get_mtype]))(var6, var7) /* get_mtype on <var6:MClass>*/;
var_arraytype = var10;
var11 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype) /* init_instance on <self:GlobalCompilerVisitor>*/;
var_res = var11;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "{ /* ";
var15 = 5;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " = array_instance Array[";
var20 = 24;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "] */";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var_elttype;
((struct instance_array__NativeArray*)var29)->values[4] = (val*) var23;
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var30) /* add on <self:GlobalCompilerVisitor>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "NativeArray";
var34 = 11;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var32) /* get_class on <self:GlobalCompilerVisitor>*/;
var37 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var37 = array_instance Array[MType] */
var38 = 1;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var_elttype;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[MType]>*/;
}
var40 = ((val* (*)(val*, val*))(var36->class->vft[COLOR_model__MClass__get_mtype]))(var36, var37) /* get_mtype on <var36:MClass>*/;
var41 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var40) /* new_var on <self:GlobalCompilerVisitor>*/;
var_nat = var41;
var42 = 1;
((void (*)(val*, short int))(var_nat->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_nat, var42) /* is_exact= on <var_nat:RuntimeVariable>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = " = NEW_";
var46 = 7;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = ((val* (*)(val*))(var_nat->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_nat) /* mtype on <var_nat:RuntimeVariable>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_compiler__MType__c_name]))(var48) /* c_name on <var48:MType>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "(";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[RuntimeVariable]>*/;
if (varonce56) {
var57 = varonce56;
} else {
var58 = ");";
var59 = 2;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 6;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var44;
((struct instance_array__NativeArray*)var63)->values[2] = (val*) var49;
((struct instance_array__NativeArray*)var63)->values[3] = (val*) var51;
var64 = BOX_kernel__Int(var55); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var63)->values[4] = (val*) var64;
((struct instance_array__NativeArray*)var63)->values[5] = (val*) var57;
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
var65 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var65) /* add on <self:GlobalCompilerVisitor>*/;
var66 = NEW_range__Range(&type_range__Rangekernel__Int);
var67 = 0;
var68 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[RuntimeVariable]>*/;
var69 = BOX_kernel__Int(var67); /* autobox from Int to Discrete */
var70 = BOX_kernel__Int(var68); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var66->class->vft[COLOR_range__Range__without_last]))(var66, var69, var70) /* without_last on <var66:Range[Int]>*/;
var71 = ((val* (*)(val*))(var66->class->vft[COLOR_abstract_collection__Collection__iterator]))(var66) /* iterator on <var66:Range[Int]>*/;
for(;;) {
var72 = ((short int (*)(val*))(var71->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var71) /* is_ok on <var71:Iterator[nullable Object]>*/;
if(!var72) break;
var73 = ((val* (*)(val*))(var71->class->vft[COLOR_abstract_collection__Iterator__item]))(var71) /* item on <var71:Iterator[nullable Object]>*/;
var74 = ((struct instance_kernel__Int*)var73)->value; /* autounbox from nullable Object to Int */;
var_i = var74;
var75 = ((val* (*)(val*, long))(var_array->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_array, var_i) /* [] on <var_array:Array[RuntimeVariable]>*/;
var76 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var75, var_elttype) /* autobox on <self:GlobalCompilerVisitor>*/;
var_r = var76;
if (varonce77) {
var78 = varonce77;
} else {
var79 = "((struct ";
var80 = 9;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = ((val* (*)(val*))(var_nat->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_nat) /* mtype on <var_nat:RuntimeVariable>*/;
var83 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_compiler__MType__c_name]))(var82) /* c_name on <var82:MType>*/;
if (varonce84) {
var85 = varonce84;
} else {
var86 = "*) ";
var87 = 3;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = ")->values[";
var92 = 10;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "] = ";
var97 = 4;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = ";";
var102 = 1;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 9;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var78;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var83;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var85;
((struct instance_array__NativeArray*)var106)->values[3] = (val*) var_nat;
((struct instance_array__NativeArray*)var106)->values[4] = (val*) var90;
var107 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var106)->values[5] = (val*) var107;
((struct instance_array__NativeArray*)var106)->values[6] = (val*) var95;
((struct instance_array__NativeArray*)var106)->values[7] = (val*) var_r;
((struct instance_array__NativeArray*)var106)->values[8] = (val*) var100;
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
var108 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var108) /* add on <self:GlobalCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var71->class->vft[COLOR_abstract_collection__Iterator__next]))(var71) /* next on <var71:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var109 = ((long (*)(val*))(var_array->class->vft[COLOR_abstract_collection__Collection__length]))(var_array) /* length on <var_array:Array[RuntimeVariable]>*/;
var110 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__int_instance]))(self, var109) /* int_instance on <self:GlobalCompilerVisitor>*/;
var_length = var110;
if (varonce111) {
var112 = varonce111;
} else {
var113 = "with_native";
var114 = 11;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
var116 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(self, var112, var_arraytype) /* get_property on <self:GlobalCompilerVisitor>*/;
var117 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var117 = array_instance Array[RuntimeVariable] */
var118 = 3;
var119 = NEW_array__NativeArray(var118, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var119)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var119)->values[1] = (val*) var_nat;
((struct instance_array__NativeArray*)var119)->values[2] = (val*) var_length;
((void (*)(val*, val*, long))(var117->class->vft[COLOR_array__Array__with_native]))(var117, var119, var118) /* with_native on <var117:Array[RuntimeVariable]>*/;
}
var120 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(self, var116, var117) /* send on <self:GlobalCompilerVisitor>*/;
var120;
if (varonce121) {
var122 = varonce121;
} else {
var123 = "}";
var124 = 1;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var122) /* add on <self:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#array_instance for (self: Object, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_global_compiler__GlobalCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = global_compiler__GlobalCompilerVisitor__array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#recv for (self: CustomizedRuntimeFunction): MClassType */
val* global_compiler__CustomizedRuntimeFunction__recv(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_global_compiler__CustomizedRuntimeFunction___64drecv].val; /* @recv on <self:CustomizedRuntimeFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @recv");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 842);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#recv for (self: Object): MClassType */
val* VIRTUAL_global_compiler__CustomizedRuntimeFunction__recv(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = global_compiler__CustomizedRuntimeFunction__recv(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#recv= for (self: CustomizedRuntimeFunction, MClassType) */
void global_compiler__CustomizedRuntimeFunction__recv_61d(val* self, val* p0) {
self->attrs[COLOR_global_compiler__CustomizedRuntimeFunction___64drecv].val = p0; /* @recv on <self:CustomizedRuntimeFunction> */
RET_LABEL:;
}
/* method global_compiler#CustomizedRuntimeFunction#recv= for (self: Object, MClassType) */
void VIRTUAL_global_compiler__CustomizedRuntimeFunction__recv_61d(val* self, val* p0) {
global_compiler__CustomizedRuntimeFunction__recv_61d(self, p0);
RET_LABEL:;
}
/* method global_compiler#CustomizedRuntimeFunction#init for (self: CustomizedRuntimeFunction, MMethodDef, MClassType) */
void global_compiler__CustomizedRuntimeFunction__init(val* self, val* p0, val* p1) {
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var_recv /* var recv: MClassType */;
var_mmethoddef = p0;
var_recv = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__init]))(self, var_mmethoddef) /* init on <self:CustomizedRuntimeFunction>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv_61d]))(self, var_recv) /* recv= on <self:CustomizedRuntimeFunction>*/;
RET_LABEL:;
}
/* method global_compiler#CustomizedRuntimeFunction#init for (self: Object, MMethodDef, MClassType) */
void VIRTUAL_global_compiler__CustomizedRuntimeFunction__init(val* self, val* p0, val* p1) {
global_compiler__CustomizedRuntimeFunction__init(self, p0, p1);
RET_LABEL:;
}
/* method global_compiler#CustomizedRuntimeFunction#build_c_name for (self: CustomizedRuntimeFunction): String */
val* global_compiler__CustomizedRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MMethodDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var7 /* : MClassType */;
short int var8 /* : Bool */;
val* var9 /* : MMethodDef */;
val* var10 /* : String */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : MMethodDef */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : MClassType */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name_cache]))(self) /* c_name_cache on <self:CustomizedRuntimeFunction>*/;
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MPropDef__mclassdef]))(var4) /* mclassdef on <var4:MMethodDef>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClassDef__bound_mtype]))(var5) /* bound_mtype on <var5:MClassDef>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
var8 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var7) /* == on <var6:MClassType>*/;
if (var8){
var9 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var9) /* c_name on <var9:MMethodDef>*/;
var_res = var10;
} else {
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
var12 = 5;
((void (*)(val*, long))(var11->class->vft[COLOR_array__Array__with_capacity]))(var11, var12) /* with_capacity on <var11:Array[Object]>*/;
var_ = var11;
if (varonce) {
var13 = varonce;
} else {
var14 = "";
var15 = 0;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var17) /* c_name on <var17:MMethodDef>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var18) /* add on <var_:Array[Object]>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "__";
var22 = 2;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var20) /* add on <var_:Array[Object]>*/;
var24 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_compiler__MType__c_name]))(var24) /* c_name on <var24:MClassType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var25) /* add on <var_:Array[Object]>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "";
var29 = 0;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var27) /* add on <var_:Array[Object]>*/;
var31 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var31;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:CustomizedRuntimeFunction>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#build_c_name for (self: Object): String */
val* VIRTUAL_global_compiler__CustomizedRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = global_compiler__CustomizedRuntimeFunction__build_c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#== for (self: CustomizedRuntimeFunction, nullable Object): Bool */
short int global_compiler__CustomizedRuntimeFunction___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MMethodDef */;
val* var5 /* : MMethodDef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MClassType */;
val* var9 /* : MClassType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa CustomizedRuntimeFunction */
cltype = type_global_compiler__CustomizedRuntimeFunction.color;
idtype = type_global_compiler__CustomizedRuntimeFunction.id;
if(var_o == NULL) {
var1 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var1 = 0;
} else {
var1 = var_o->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var5 = ((val* (*)(val*))(var_o->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(var_o) /* mmethoddef on <var_o:nullable Object(CustomizedRuntimeFunction)>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___33d_61d]))(var4, var5) /* != on <var4:MMethodDef>*/;
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
var9 = ((val* (*)(val*))(var_o->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(var_o) /* recv on <var_o:nullable Object(CustomizedRuntimeFunction)>*/;
var10 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___33d_61d]))(var8, var9) /* != on <var8:MClassType>*/;
if (var10){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
var12 = 1;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_global_compiler__CustomizedRuntimeFunction___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = global_compiler__CustomizedRuntimeFunction___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#hash for (self: CustomizedRuntimeFunction): Int */
long global_compiler__CustomizedRuntimeFunction__hash(val* self) {
long var /* : Int */;
val* var1 /* : MMethodDef */;
long var2 /* : Int */;
val* var3 /* : MClassType */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_kernel__Object__hash]))(var1) /* hash on <var1:MMethodDef>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
var4 = ((long (*)(val*))(var3->class->vft[COLOR_kernel__Object__hash]))(var3) /* hash on <var3:MClassType>*/;
{ /* Inline kernel#Int#+ (var2,var4) */
var7 = var2 + var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#hash for (self: Object): Int */
long VIRTUAL_global_compiler__CustomizedRuntimeFunction__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = global_compiler__CustomizedRuntimeFunction__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#to_s for (self: CustomizedRuntimeFunction): String */
val* global_compiler__CustomizedRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var2 /* : MClassDef */;
val* var3 /* : MClassType */;
val* var4 /* : MClassType */;
short int var5 /* : Bool */;
val* var6 /* : MMethodDef */;
val* var7 /* : String */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : MMethodDef */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : MClassType */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MPropDef__mclassdef]))(var1) /* mclassdef on <var1:MMethodDef>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__bound_mtype]))(var2) /* bound_mtype on <var2:MClassDef>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
var5 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var4) /* == on <var3:MClassType>*/;
if (var5){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:MMethodDef>*/;
var = var7;
goto RET_LABEL;
} else {
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
var9 = 5;
((void (*)(val*, long))(var8->class->vft[COLOR_array__Array__with_capacity]))(var8, var9) /* with_capacity on <var8:Array[Object]>*/;
var_ = var8;
if (varonce) {
var10 = varonce;
} else {
var11 = "";
var12 = 0;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "@";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var20) /* add on <var_:Array[Object]>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "";
var24 = 0;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var22) /* add on <var_:Array[Object]>*/;
var26 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var26;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#to_s for (self: Object): String */
val* VIRTUAL_global_compiler__CustomizedRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = global_compiler__CustomizedRuntimeFunction__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#compile_to_c for (self: CustomizedRuntimeFunction, GlobalCompiler) */
void global_compiler__CustomizedRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: GlobalCompiler */;
val* var1 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var2 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var3 /* : MModule */;
val* var4 /* : null */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : Array[Object] */;
long var24 /* : Int */;
val* var25 /* : NativeArray[Object] */;
val* var26 /* : String */;
val* var27 /* : AbstractCompilerVisitor */;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var28 /* : RuntimeVariable */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var34 /* : RapidTypeAnalysis */;
val* var35 /* : HashSet[MClassType] */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var39 /* : Frame */;
val* var_frame /* var frame: Frame */;
val* var40 /* : Buffer */;
val* var_sig /* var sig: Buffer */;
val* var41 /* : Buffer */;
val* var_comment /* var comment: Buffer */;
val* var42 /* : nullable MSignature */;
val* var43 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var44 /* : null */;
short int var45 /* : Bool */;
val* var46 /* : MType */;
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
val* var57 /* : MProperty */;
short int var58 /* : Bool */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[Object] */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
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
val* var99 /* : Range[Int] */;
long var100 /* : Int */;
val* var101 /* : nullable MSignature */;
long var102 /* : Int */;
val* var103 /* : Discrete */;
val* var104 /* : Discrete */;
val* var105 /* : Iterator[nullable Object] */;
short int var106 /* : Bool */;
val* var107 /* : nullable Object */;
long var_i /* var i: Int */;
long var108 /* : Int */;
val* var109 /* : nullable MSignature */;
val* var110 /* : Array[MParameter] */;
val* var111 /* : nullable Object */;
val* var112 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var113 /* : nullable MSignature */;
long var114 /* : Int */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var123 /* : MClass */;
val* var124 /* : Array[MType] */;
long var125 /* : Int */;
val* var126 /* : NativeArray[MType] */;
val* var127 /* : MClassType */;
val* var128 /* : MType */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : String */;
val* var134 /* : Array[Object] */;
long var135 /* : Int */;
val* var136 /* : NativeArray[Object] */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
val* var152 /* : Object */;
val* var153 /* : String */;
val* var154 /* : RuntimeVariable */;
val* var155 /* : Array[Object] */;
long var156 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : nullable Object */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
val* var168 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : String */;
val* var179 /* : null */;
short int var180 /* : Bool */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
long var184 /* : Int */;
val* var185 /* : String */;
val* var186 /* : Array[Object] */;
long var187 /* : Int */;
val* var188 /* : NativeArray[Object] */;
val* var189 /* : String */;
val* var190 /* : CodeWriter */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : String */;
val* var196 /* : Array[Object] */;
long var197 /* : Int */;
val* var198 /* : NativeArray[Object] */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : String */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : String */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : String */;
val* var215 /* : Array[Object] */;
long var216 /* : Int */;
val* var217 /* : NativeArray[Object] */;
val* var218 /* : String */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
long var222 /* : Int */;
val* var223 /* : String */;
val* var224 /* : Array[Object] */;
long var225 /* : Int */;
val* var226 /* : NativeArray[Object] */;
val* var227 /* : String */;
val* var228 /* : null */;
short int var229 /* : Bool */;
val* var230 /* : RuntimeVariable */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
val* var236 /* : String */;
val* var237 /* : nullable RuntimeVariable */;
val* var238 /* : nullable String */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : String */;
val* var244 /* : Array[Object] */;
long var245 /* : Int */;
val* var246 /* : NativeArray[Object] */;
val* var247 /* : String */;
val* var248 /* : null */;
short int var249 /* : Bool */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : String */;
val* var255 /* : nullable RuntimeVariable */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
long var259 /* : Int */;
val* var260 /* : String */;
val* var261 /* : Array[Object] */;
long var262 /* : Int */;
val* var263 /* : NativeArray[Object] */;
val* var264 /* : String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : String */;
val* var270 /* : String */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
long var274 /* : Int */;
val* var275 /* : String */;
long var276 /* : Int */;
short int var277 /* : Bool */;
short int var278 /* : Bool */;
val* var279 /* : HashMap[String, String] */;
val* var280 /* : String */;
val* var281 /* : MClassDef */;
val* var282 /* : MModule */;
val* var283 /* : String */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
long var287 /* : Int */;
val* var288 /* : String */;
val* var289 /* : MClassDef */;
val* var290 /* : MClass */;
val* var291 /* : String */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : String */;
val* var297 /* : MProperty */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : NativeString */;
long var302 /* : Int */;
val* var303 /* : String */;
val* var304 /* : Location */;
val* var305 /* : nullable SourceFile */;
val* var306 /* : String */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : String */;
val* var312 /* : Location */;
long var313 /* : Int */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : String */;
val* var319 /* : Array[Object] */;
long var320 /* : Int */;
val* var321 /* : NativeArray[Object] */;
val* var322 /* : Object */;
val* var323 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:GlobalCompiler> isa COMPILER */
/* <p0:GlobalCompiler> isa COMPILER */
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
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 886);
show_backtrace(1);
}
var_compiler = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
var_recv = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var_mmethoddef = var2;
var3 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__mainmodule]))(var_compiler) /* mainmodule on <var_compiler:GlobalCompiler>*/;
var4 = NULL;
var5 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClassDef__bound_mtype]))(var5) /* bound_mtype on <var5:MClassDef>*/;
var7 = ((short int (*)(val*, val*, val*, val*))(var_recv->class->vft[COLOR_model__MType__is_subtype]))(var_recv, var3, var4, var6) /* is_subtype on <var_recv:MClassType>*/;
var8 = !var7;
if (var8){
if (varonce) {
var9 = varonce;
} else {
var10 = "problem: why do we compile ";
var11 = 27;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = " for ";
var16 = 5;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "?";
var21 = 1;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var23 = array_instance Array[Object] */
var24 = 5;
var25 = NEW_array__NativeArray(var24, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var25)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var25)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var25)->values[2] = (val*) var14;
((struct instance_array__NativeArray*)var25)->values[3] = (val*) var_recv;
((struct instance_array__NativeArray*)var25)->values[4] = (val*) var19;
((void (*)(val*, val*, long))(var23->class->vft[COLOR_array__Array__with_native]))(var23, var25, var24) /* with_native on <var23:Array[Object]>*/;
}
var26 = ((val* (*)(val*))(var23->class->vft[COLOR_string__Object__to_s]))(var23) /* to_s on <var23:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var26) /* print on <self:CustomizedRuntimeFunction>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 893);
show_backtrace(1);
} else {
}
var27 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler) /* new_visitor on <var_compiler:GlobalCompiler>*/;
var_v = var27;
var28 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce29) {
var30 = varonce29;
} else {
var31 = "self";
var32 = 4;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
((void (*)(val*, val*, val*, val*))(var28->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var28, var30, var_recv, var_recv) /* init on <var28:RuntimeVariable>*/;
var_selfvar = var28;
var34 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_global_compiler__GlobalCompiler__runtime_type_analysis]))(var_compiler) /* runtime_type_analysis on <var_compiler:GlobalCompiler>*/;
var35 = ((val* (*)(val*))(var34->class->vft[COLOR_rapid_type_analysis__RapidTypeAnalysis__live_types]))(var34) /* live_types on <var34:RapidTypeAnalysis>*/;
var36 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_abstract_collection__Collection__has]))(var35, var_recv) /* has on <var35:HashSet[MClassType]>*/;
if (var36){
var37 = 1;
((void (*)(val*, short int))(var_selfvar->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact_61d]))(var_selfvar, var37) /* is_exact= on <var_selfvar:RuntimeVariable>*/;
} else {
}
var38 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
((void (*)(val*))(var38->class->vft[COLOR_array__Array__init]))(var38) /* init on <var38:Array[RuntimeVariable]>*/;
var_arguments = var38;
var39 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
((void (*)(val*, val*, val*, val*, val*))(var39->class->vft[COLOR_abstract_compiler__Frame__init]))(var39, var_v, var_mmethoddef, var_recv, var_arguments) /* init on <var39:Frame>*/;
var_frame = var39;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_frame) /* frame= on <var_v:GlobalCompilerVisitor>*/;
var40 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var40->class->vft[COLOR_string__Buffer__init]))(var40) /* init on <var40:Buffer>*/;
var_sig = var40;
var41 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var41->class->vft[COLOR_string__Buffer__init]))(var41) /* init on <var41:Buffer>*/;
var_comment = var41;
var42 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 907);
show_backtrace(1);
} else {
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_model__MSignature__return_mtype]))(var42) /* return_mtype on <var42:nullable MSignature>*/;
}
var_ret = var43;
var44 = NULL;
if (var_ret == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (var45){
var46 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(var_v, var_ret, var_selfvar) /* resolve_for on <var_v:GlobalCompilerVisitor>*/;
var_ret = var46;
var47 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = " ";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 2;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var49;
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var56) /* append on <var_sig:Buffer>*/;
} else {
var57 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var58 = ((short int (*)(val*))(var57->class->vft[COLOR_model__MMethod__is_new]))(var57) /* is_new on <var57:MProperty(MMethod)>*/;
if (var58){
var_ret = var_recv;
var59 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MClassType)>*/;
if (varonce60) {
var61 = varonce60;
} else {
var62 = " ";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 2;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var61;
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
var68 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var68) /* append on <var_sig:Buffer>*/;
} else {
if (varonce69) {
var70 = varonce69;
} else {
var71 = "void ";
var72 = 5;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var70) /* append on <var_sig:Buffer>*/;
}
}
var74 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:CustomizedRuntimeFunction>*/;
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
var80 = ((val* (*)(val*))(var_recv->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_recv) /* ctype on <var_recv:MClassType>*/;
if (varonce81) {
var82 = varonce81;
} else {
var83 = " ";
var84 = 1;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 4;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var76;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var80;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var82;
((struct instance_array__NativeArray*)var88)->values[3] = (val*) var_selfvar;
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var89) /* append on <var_sig:Buffer>*/;
if (varonce90) {
var91 = varonce90;
} else {
var92 = "(self: ";
var93 = 7;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 2;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var91;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var_recv;
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var98) /* append on <var_comment:Buffer>*/;
((void (*)(val*, val*))(var_arguments->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments, var_selfvar) /* add on <var_arguments:Array[RuntimeVariable]>*/;
var99 = NEW_range__Range(&type_range__Rangekernel__Int);
var100 = 0;
var101 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var101 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 921);
show_backtrace(1);
} else {
var102 = ((long (*)(val*))(var101->class->vft[COLOR_model__MSignature__arity]))(var101) /* arity on <var101:nullable MSignature>*/;
}
var103 = BOX_kernel__Int(var100); /* autobox from Int to Discrete */
var104 = BOX_kernel__Int(var102); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var99->class->vft[COLOR_range__Range__without_last]))(var99, var103, var104) /* without_last on <var99:Range[Int]>*/;
var105 = ((val* (*)(val*))(var99->class->vft[COLOR_abstract_collection__Collection__iterator]))(var99) /* iterator on <var99:Range[Int]>*/;
for(;;) {
var106 = ((short int (*)(val*))(var105->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var105) /* is_ok on <var105:Iterator[nullable Object]>*/;
if(!var106) break;
var107 = ((val* (*)(val*))(var105->class->vft[COLOR_abstract_collection__Iterator__item]))(var105) /* item on <var105:Iterator[nullable Object]>*/;
var108 = ((struct instance_kernel__Int*)var107)->value; /* autounbox from nullable Object to Int */;
var_i = var108;
var109 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var109 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 922);
show_backtrace(1);
} else {
var110 = ((val* (*)(val*))(var109->class->vft[COLOR_model__MSignature__mparameters]))(var109) /* mparameters on <var109:nullable MSignature>*/;
}
var111 = ((val* (*)(val*, long))(var110->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var110, var_i) /* [] on <var110:Array[MParameter]>*/;
var112 = ((val* (*)(val*))(var111->class->vft[COLOR_model__MParameter__mtype]))(var111) /* mtype on <var111:nullable Object(MParameter)>*/;
var_mtype = var112;
var113 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var113 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 923);
show_backtrace(1);
} else {
var114 = ((long (*)(val*))(var113->class->vft[COLOR_model__MSignature__vararg_rank]))(var113) /* vararg_rank on <var113:nullable MSignature>*/;
}
{ /* Inline kernel#Int#== (var_i,var114) */
var117 = var_i == var114;
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
if (var115){
if (varonce118) {
var119 = varonce118;
} else {
var120 = "Array";
var121 = 5;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(var_v, var119) /* get_class on <var_v:GlobalCompilerVisitor>*/;
var124 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var124 = array_instance Array[MType] */
var125 = 1;
var126 = NEW_array__NativeArray(var125, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var126)->values[0] = (val*) var_mtype;
((void (*)(val*, val*, long))(var124->class->vft[COLOR_array__Array__with_native]))(var124, var126, var125) /* with_native on <var124:Array[MType]>*/;
}
var127 = ((val* (*)(val*, val*))(var123->class->vft[COLOR_model__MClass__get_mtype]))(var123, var124) /* get_mtype on <var123:MClass>*/;
var_mtype = var127;
} else {
}
var128 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(var_v, var_mtype, var_selfvar) /* resolve_for on <var_v:GlobalCompilerVisitor>*/;
var_mtype = var128;
if (varonce129) {
var130 = varonce129;
} else {
var131 = ", ";
var132 = 2;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
var134 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var134 = array_instance Array[Object] */
var135 = 2;
var136 = NEW_array__NativeArray(var135, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var136)->values[0] = (val*) var130;
((struct instance_array__NativeArray*)var136)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var134->class->vft[COLOR_array__Array__with_native]))(var134, var136, var135) /* with_native on <var134:Array[Object]>*/;
}
var137 = ((val* (*)(val*))(var134->class->vft[COLOR_string__Object__to_s]))(var134) /* to_s on <var134:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var137) /* append on <var_comment:Buffer>*/;
if (varonce138) {
var139 = varonce138;
} else {
var140 = ", ";
var141 = 2;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce144) {
var145 = varonce144;
} else {
var146 = " p";
var147 = 2;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 4;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var139;
((struct instance_array__NativeArray*)var151)->values[1] = (val*) var143;
((struct instance_array__NativeArray*)var151)->values[2] = (val*) var145;
var152 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var151)->values[3] = (val*) var152;
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
var153 = ((val* (*)(val*))(var149->class->vft[COLOR_string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var153) /* append on <var_sig:Buffer>*/;
var154 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
var155 = NEW_array__Array(&type_array__Arraykernel__Object);
var156 = 3;
((void (*)(val*, long))(var155->class->vft[COLOR_array__Array__with_capacity]))(var155, var156) /* with_capacity on <var155:Array[Object]>*/;
var_ = var155;
if (varonce157) {
var158 = varonce157;
} else {
var159 = "p";
var160 = 1;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var158) /* add on <var_:Array[Object]>*/;
var162 = BOX_kernel__Int(var_i); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var162) /* add on <var_:Array[Object]>*/;
if (varonce163) {
var164 = varonce163;
} else {
var165 = "";
var166 = 0;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var164) /* add on <var_:Array[Object]>*/;
var168 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*, val*, val*))(var154->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var154, var168, var_mtype, var_mtype) /* init on <var154:RuntimeVariable>*/;
var_argvar = var154;
((void (*)(val*, val*))(var_arguments->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_arguments, var_argvar) /* add on <var_arguments:Array[RuntimeVariable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var105->class->vft[COLOR_abstract_collection__Iterator__next]))(var105) /* next on <var105:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce169) {
var170 = varonce169;
} else {
var171 = ")";
var172 = 1;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
((void (*)(val*, val*))(var_sig->class->vft[COLOR_abstract_collection__Sequence__append]))(var_sig, var170) /* append on <var_sig:Buffer>*/;
if (varonce174) {
var175 = varonce174;
} else {
var176 = ")";
var177 = 1;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var175) /* append on <var_comment:Buffer>*/;
var179 = NULL;
if (var_ret == NULL) {
var180 = 0; /* is null */
} else {
var180 = 1; /* arg is null and recv is not */
}
if (var180){
if (varonce181) {
var182 = varonce181;
} else {
var183 = ": ";
var184 = 2;
var185 = string__NativeString__to_s_with_length(var183, var184);
var182 = var185;
varonce181 = var182;
}
var186 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var186 = array_instance Array[Object] */
var187 = 2;
var188 = NEW_array__NativeArray(var187, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var188)->values[0] = (val*) var182;
((struct instance_array__NativeArray*)var188)->values[1] = (val*) var_ret;
((void (*)(val*, val*, long))(var186->class->vft[COLOR_array__Array__with_native]))(var186, var188, var187) /* with_native on <var186:Array[Object]>*/;
}
var189 = ((val* (*)(val*))(var186->class->vft[COLOR_string__Object__to_s]))(var186) /* to_s on <var186:Array[Object]>*/;
((void (*)(val*, val*))(var_comment->class->vft[COLOR_abstract_collection__Sequence__append]))(var_comment, var189) /* append on <var_comment:Buffer>*/;
} else {
}
var190 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__header]))(var_compiler) /* header on <var_compiler:GlobalCompiler>*/;
if (varonce191) {
var192 = varonce191;
} else {
var193 = ";";
var194 = 1;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
var196 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var196 = array_instance Array[Object] */
var197 = 2;
var198 = NEW_array__NativeArray(var197, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var198)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var198)->values[1] = (val*) var192;
((void (*)(val*, val*, long))(var196->class->vft[COLOR_array__Array__with_native]))(var196, var198, var197) /* with_native on <var196:Array[Object]>*/;
}
var199 = ((val* (*)(val*))(var196->class->vft[COLOR_string__Object__to_s]))(var196) /* to_s on <var196:Array[Object]>*/;
((void (*)(val*, val*))(var190->class->vft[COLOR_abstract_compiler__CodeWriter__add_decl]))(var190, var199) /* add_decl on <var190:CodeWriter>*/;
if (varonce200) {
var201 = varonce200;
} else {
var202 = "/* method ";
var203 = 10;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = " for ";
var208 = 5;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
if (varonce210) {
var211 = varonce210;
} else {
var212 = " */";
var213 = 3;
var214 = string__NativeString__to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
var215 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var215 = array_instance Array[Object] */
var216 = 5;
var217 = NEW_array__NativeArray(var216, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var217)->values[0] = (val*) var201;
((struct instance_array__NativeArray*)var217)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var217)->values[2] = (val*) var206;
((struct instance_array__NativeArray*)var217)->values[3] = (val*) var_comment;
((struct instance_array__NativeArray*)var217)->values[4] = (val*) var211;
((void (*)(val*, val*, long))(var215->class->vft[COLOR_array__Array__with_native]))(var215, var217, var216) /* with_native on <var215:Array[Object]>*/;
}
var218 = ((val* (*)(val*))(var215->class->vft[COLOR_string__Object__to_s]))(var215) /* to_s on <var215:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var218) /* add_decl on <var_v:GlobalCompilerVisitor>*/;
if (varonce219) {
var220 = varonce219;
} else {
var221 = " {";
var222 = 2;
var223 = string__NativeString__to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
var224 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var224 = array_instance Array[Object] */
var225 = 2;
var226 = NEW_array__NativeArray(var225, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var226)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var226)->values[1] = (val*) var220;
((void (*)(val*, val*, long))(var224->class->vft[COLOR_array__Array__with_native]))(var224, var226, var225) /* with_native on <var224:Array[Object]>*/;
}
var227 = ((val* (*)(val*))(var224->class->vft[COLOR_string__Object__to_s]))(var224) /* to_s on <var224:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(var_v, var227) /* add_decl on <var_v:GlobalCompilerVisitor>*/;
var228 = NULL;
if (var_ret == NULL) {
var229 = 0; /* is null */
} else {
var229 = 1; /* arg is null and recv is not */
}
if (var229){
var230 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar_61d]))(var_frame, var230) /* returnvar= on <var_frame:Frame>*/;
} else {
}
if (varonce231) {
var232 = varonce231;
} else {
var233 = "RET_LABEL";
var234 = 9;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
var236 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(var_v, var232) /* get_name on <var_v:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel_61d]))(var_frame, var236) /* returnlabel= on <var_frame:Frame>*/;
var237 = ((val* (*)(val*, val*, val*))(var_mmethoddef->class->vft[COLOR_abstract_compiler__MMethodDef__compile_inside_to_c]))(var_mmethoddef, var_v, var_arguments) /* compile_inside_to_c on <var_mmethoddef:MMethodDef>*/;
var237;
var238 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var_frame) /* returnlabel on <var_frame:Frame>*/;
if (var238 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 949);
show_backtrace(1);
}
if (varonce239) {
var240 = varonce239;
} else {
var241 = ":;";
var242 = 2;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
var244 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var244 = array_instance Array[Object] */
var245 = 2;
var246 = NEW_array__NativeArray(var245, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var246)->values[0] = (val*) var238;
((struct instance_array__NativeArray*)var246)->values[1] = (val*) var240;
((void (*)(val*, val*, long))(var244->class->vft[COLOR_array__Array__with_native]))(var244, var246, var245) /* with_native on <var244:Array[Object]>*/;
}
var247 = ((val* (*)(val*))(var244->class->vft[COLOR_string__Object__to_s]))(var244) /* to_s on <var244:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var247) /* add on <var_v:GlobalCompilerVisitor>*/;
var248 = NULL;
if (var_ret == NULL) {
var249 = 0; /* is null */
} else {
var249 = 1; /* arg is null and recv is not */
}
if (var249){
if (varonce250) {
var251 = varonce250;
} else {
var252 = "return ";
var253 = 7;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
var255 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var_frame) /* returnvar on <var_frame:Frame>*/;
if (var255 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 951);
show_backtrace(1);
}
if (varonce256) {
var257 = varonce256;
} else {
var258 = ";";
var259 = 1;
var260 = string__NativeString__to_s_with_length(var258, var259);
var257 = var260;
varonce256 = var257;
}
var261 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var261 = array_instance Array[Object] */
var262 = 3;
var263 = NEW_array__NativeArray(var262, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var263)->values[0] = (val*) var251;
((struct instance_array__NativeArray*)var263)->values[1] = (val*) var255;
((struct instance_array__NativeArray*)var263)->values[2] = (val*) var257;
((void (*)(val*, val*, long))(var261->class->vft[COLOR_array__Array__with_native]))(var261, var263, var262) /* with_native on <var261:Array[Object]>*/;
}
var264 = ((val* (*)(val*))(var261->class->vft[COLOR_string__Object__to_s]))(var261) /* to_s on <var261:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var264) /* add on <var_v:GlobalCompilerVisitor>*/;
} else {
}
if (varonce265) {
var266 = varonce265;
} else {
var267 = "}";
var268 = 1;
var269 = string__NativeString__to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var266) /* add on <var_v:GlobalCompilerVisitor>*/;
var270 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:CustomizedRuntimeFunction>*/;
if (varonce271) {
var272 = varonce271;
} else {
var273 = "VIRTUAL";
var274 = 7;
var275 = string__NativeString__to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
var276 = 0;
var277 = ((short int (*)(val*, val*, long))(var270->class->vft[COLOR_string__AbstractString__has_substring]))(var270, var272, var276) /* has_substring on <var270:String>*/;
var278 = !var277;
if (var278){
var279 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__names]))(var_compiler) /* names on <var_compiler:GlobalCompiler>*/;
var280 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:CustomizedRuntimeFunction>*/;
var281 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var282 = ((val* (*)(val*))(var281->class->vft[COLOR_model__MClassDef__mmodule]))(var281) /* mmodule on <var281:MClassDef>*/;
var283 = ((val* (*)(val*))(var282->class->vft[COLOR_mmodule__MModule__name]))(var282) /* name on <var282:MModule>*/;
if (varonce284) {
var285 = varonce284;
} else {
var286 = "::";
var287 = 2;
var288 = string__NativeString__to_s_with_length(var286, var287);
var285 = var288;
varonce284 = var285;
}
var289 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mclassdef]))(var_mmethoddef) /* mclassdef on <var_mmethoddef:MMethodDef>*/;
var290 = ((val* (*)(val*))(var289->class->vft[COLOR_model__MClassDef__mclass]))(var289) /* mclass on <var289:MClassDef>*/;
var291 = ((val* (*)(val*))(var290->class->vft[COLOR_model__MClass__name]))(var290) /* name on <var290:MClass>*/;
if (varonce292) {
var293 = varonce292;
} else {
var294 = "::";
var295 = 2;
var296 = string__NativeString__to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
var297 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mmethoddef) /* mproperty on <var_mmethoddef:MMethodDef>*/;
var298 = ((val* (*)(val*))(var297->class->vft[COLOR_model__MProperty__name]))(var297) /* name on <var297:MProperty(MMethod)>*/;
if (varonce299) {
var300 = varonce299;
} else {
var301 = " (";
var302 = 2;
var303 = string__NativeString__to_s_with_length(var301, var302);
var300 = var303;
varonce299 = var300;
}
var304 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__location]))(var_mmethoddef) /* location on <var_mmethoddef:MMethodDef>*/;
var305 = ((val* (*)(val*))(var304->class->vft[COLOR_location__Location__file]))(var304) /* file on <var304:Location>*/;
if (var305 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 954);
show_backtrace(1);
} else {
var306 = ((val* (*)(val*))(var305->class->vft[COLOR_location__SourceFile__filename]))(var305) /* filename on <var305:nullable SourceFile>*/;
}
if (varonce307) {
var308 = varonce307;
} else {
var309 = ":";
var310 = 1;
var311 = string__NativeString__to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
var312 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MPropDef__location]))(var_mmethoddef) /* location on <var_mmethoddef:MMethodDef>*/;
var313 = ((long (*)(val*))(var312->class->vft[COLOR_location__Location__line_start]))(var312) /* line_start on <var312:Location>*/;
if (varonce314) {
var315 = varonce314;
} else {
var316 = ")";
var317 = 1;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
var319 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var319 = array_instance Array[Object] */
var320 = 10;
var321 = NEW_array__NativeArray(var320, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var321)->values[0] = (val*) var283;
((struct instance_array__NativeArray*)var321)->values[1] = (val*) var285;
((struct instance_array__NativeArray*)var321)->values[2] = (val*) var291;
((struct instance_array__NativeArray*)var321)->values[3] = (val*) var293;
((struct instance_array__NativeArray*)var321)->values[4] = (val*) var298;
((struct instance_array__NativeArray*)var321)->values[5] = (val*) var300;
((struct instance_array__NativeArray*)var321)->values[6] = (val*) var306;
((struct instance_array__NativeArray*)var321)->values[7] = (val*) var308;
var322 = BOX_kernel__Int(var313); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var321)->values[8] = (val*) var322;
((struct instance_array__NativeArray*)var321)->values[9] = (val*) var315;
((void (*)(val*, val*, long))(var319->class->vft[COLOR_array__Array__with_native]))(var319, var321, var320) /* with_native on <var319:Array[Object]>*/;
}
var323 = ((val* (*)(val*))(var319->class->vft[COLOR_string__Object__to_s]))(var319) /* to_s on <var319:Array[Object]>*/;
((void (*)(val*, val*, val*))(var279->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var279, var280, var323) /* []= on <var279:HashMap[String, String]>*/;
} else {
}
RET_LABEL:;
}
/* method global_compiler#CustomizedRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_global_compiler__CustomizedRuntimeFunction__compile_to_c(val* self, val* p0) {
global_compiler__CustomizedRuntimeFunction__compile_to_c(self, p0);
RET_LABEL:;
}
/* method global_compiler#CustomizedRuntimeFunction#call for (self: CustomizedRuntimeFunction, GlobalCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* global_compiler__CustomizedRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var2 /* : MMethodDef */;
val* var3 /* : nullable MSignature */;
val* var4 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var5 /* : MMethodDef */;
val* var6 /* : MProperty */;
short int var7 /* : Bool */;
val* var8 /* : MClassType */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var12 /* : MType */;
val* var13 /* : MMethodDef */;
short int var14 /* : Bool */;
val* var15 /* : Frame */;
val* var16 /* : MMethodDef */;
val* var17 /* : MClassType */;
val* var_frame /* var frame: Frame */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : RuntimeVariable */;
val* var26 /* : nullable Frame */;
val* var_old_frame /* var old_frame: nullable Frame */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var50 /* : NativeArray[Object] */;
val* var51 /* : String */;
val* var52 /* : MMethodDef */;
val* var53 /* : nullable RuntimeVariable */;
val* var54 /* : nullable String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
val* var69 /* : nullable RuntimeVariable */;
val* var70 /* : MMethodDef */;
val* var71 /* : AbstractCompiler */;
val* var72 /* : null */;
short int var73 /* : Bool */;
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
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : String */;
val* var95 /* : null */;
val* var96 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : String */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : String */;
/* Covariant cast for argument 0 (v) <p0:GlobalCompilerVisitor> isa VISITOR */
/* <p0:GlobalCompilerVisitor> isa VISITOR */
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
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 957);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MMethodDef__msignature]))(var2) /* msignature on <var2:MMethodDef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 959);
show_backtrace(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MSignature__return_mtype]))(var3) /* return_mtype on <var3:nullable MSignature>*/;
}
var_ret = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MPropDef__mproperty]))(var5) /* mproperty on <var5:MMethodDef>*/;
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_model__MMethod__is_new]))(var6) /* is_new on <var6:MProperty(MMethod)>*/;
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
var_ret = var8;
} else {
}
var9 = NULL;
if (var_ret == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
var11 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__resolve_for]))(var_v, var_ret, var11) /* resolve_for on <var_v:GlobalCompilerVisitor>*/;
var_ret = var12;
} else {
}
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_abstract_compiler__MMethodDef__can_inline]))(var13, var_v) /* can_inline on <var13:MMethodDef>*/;
if (var14){
var15 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
var16 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_global_compiler__CustomizedRuntimeFunction__recv]))(self) /* recv on <self:CustomizedRuntimeFunction>*/;
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_abstract_compiler__Frame__init]))(var15, var_v, var16, var17, var_arguments) /* init on <var15:Frame>*/;
var_frame = var15;
if (varonce) {
var18 = varonce;
} else {
var19 = "RET_LABEL";
var20 = 9;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
var22 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(var_v, var18) /* get_name on <var_v:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel_61d]))(var_frame, var22) /* returnlabel= on <var_frame:Frame>*/;
var23 = NULL;
if (var_ret == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
var25 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar_61d]))(var_frame, var25) /* returnvar= on <var_frame:Frame>*/;
} else {
}
var26 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(var_v) /* frame on <var_v:GlobalCompilerVisitor>*/;
var_old_frame = var26;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_frame) /* frame= on <var_v:GlobalCompilerVisitor>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "{ /* Inline ";
var30 = 12;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = " (";
var35 = 2;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ",";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var38) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = ") */";
var46 = 4;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var48 = array_instance Array[Object] */
var49 = 5;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var50)->values[3] = (val*) var42;
((struct instance_array__NativeArray*)var50)->values[4] = (val*) var44;
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Object]>*/;
}
var51 = ((val* (*)(val*))(var48->class->vft[COLOR_string__Object__to_s]))(var48) /* to_s on <var48:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var51) /* add on <var_v:GlobalCompilerVisitor>*/;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
var53 = ((val* (*)(val*, val*, val*))(var52->class->vft[COLOR_abstract_compiler__MMethodDef__compile_inside_to_c]))(var52, var_v, var_arguments) /* compile_inside_to_c on <var52:MMethodDef>*/;
var53;
var54 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var_frame) /* returnlabel on <var_frame:Frame>*/;
if (var54 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/global_compiler.nit", 976);
show_backtrace(1);
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ":(void)0;";
var58 = 9;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 2;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var56;
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var63) /* add on <var_v:GlobalCompilerVisitor>*/;
if (varonce64) {
var65 = varonce64;
} else {
var66 = "}";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var65) /* add on <var_v:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame_61d]))(var_v, var_old_frame) /* frame= on <var_v:GlobalCompilerVisitor>*/;
var69 = ((val* (*)(val*))(var_frame->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var_frame) /* returnvar on <var_frame:Frame>*/;
var = var69;
goto RET_LABEL;
} else {
}
var70 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef]))(self) /* mmethoddef on <self:CustomizedRuntimeFunction>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var70, var_arguments) /* adapt_signature on <var_v:GlobalCompilerVisitor>*/;
var71 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:GlobalCompilerVisitor>*/;
((void (*)(val*, val*))(var71->class->vft[COLOR_global_compiler__GlobalCompiler__todo]))(var71, self) /* todo on <var71:AbstractCompiler(GlobalCompiler)>*/;
var72 = NULL;
if (var_ret == NULL) {
var73 = 1; /* is null */
} else {
var73 = 0; /* arg is null but recv is not */
}
if (var73){
var74 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:CustomizedRuntimeFunction>*/;
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
var82 = ",";
var83 = 1;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var81) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce86) {
var87 = varonce86;
} else {
var88 = ");";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 4;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var74;
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var76;
((struct instance_array__NativeArray*)var93)->values[2] = (val*) var85;
((struct instance_array__NativeArray*)var93)->values[3] = (val*) var87;
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
var94 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var94) /* add on <var_v:GlobalCompilerVisitor>*/;
var95 = NULL;
var = var95;
goto RET_LABEL;
} else {
var96 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(var_v, var_ret) /* new_var on <var_v:GlobalCompilerVisitor>*/;
var_res = var96;
if (varonce97) {
var98 = varonce97;
} else {
var99 = " = ";
var100 = 3;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name]))(self) /* c_name on <self:CustomizedRuntimeFunction>*/;
if (varonce103) {
var104 = varonce103;
} else {
var105 = "(";
var106 = 1;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = ",";
var111 = 1;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var113 = ((val* (*)(val*, val*))(var_arguments->class->vft[COLOR_string__Collection__join]))(var_arguments, var109) /* join on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce114) {
var115 = varonce114;
} else {
var116 = ");";
var117 = 2;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 6;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var98;
((struct instance_array__NativeArray*)var121)->values[2] = (val*) var102;
((struct instance_array__NativeArray*)var121)->values[3] = (val*) var104;
((struct instance_array__NativeArray*)var121)->values[4] = (val*) var113;
((struct instance_array__NativeArray*)var121)->values[5] = (val*) var115;
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
var122 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var122) /* add on <var_v:GlobalCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#call for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_global_compiler__CustomizedRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = global_compiler__CustomizedRuntimeFunction__call(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
